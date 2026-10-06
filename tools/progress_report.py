#!/usr/bin/env python3
"""Generate the decomp.dev progress report (progress/report.json) locally.

The repository does not contain the disassembly, so CI cannot build the target objects.
Instead this script builds both object sets here, runs objdiff-cli, and writes the report
to progress/report.json. Commit that file; .github/workflows/progress.yml uploads it as
the "SCUS-94182_report" artifact that decomp.dev ingests.

    venv/Scripts/python.exe tools/progress_report.py

  TARGET objects: the normal build (INCLUDE_ASM pulls the retail asm) = every function,
                  build/USA/src/<unit>/<file>.c.o
  BASE objects:   the same C compiled with -DSKIP_ASM = only the decompiled functions,
                  build/USA_base/src/<unit>/<file>.c.o
objdiff-cli diffs them per function; a function counts as matched when it is identical
in both. objdiff-cli is the Linux build in tools/objdiff, so it runs under WSL on Windows.
"""
import json
import os
import platform
import re
import shutil
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import build_ac  # noqa: E402

CATEGORIES = [
    {"id": "main", "name": "Main Executable (SCUS_941.82)"},
    {"id": "programs", "name": "Program Overlays (FDAT.T 201-204)"},
    {"id": "fdat201", "name": "FDAT_201"},
    {"id": "fdat202", "name": "FDAT_202"},
    {"id": "fdat203", "name": "FDAT_203"},
    {"id": "fdat204", "name": "FDAT_204"},
    {"id": "missions", "name": "Mission Overlays (FDAT.T 0-186)"},
]


def categories_for(unit):
    if unit == "main":
        return ["main"]
    if unit in ("fdat201", "fdat202", "fdat203", "fdat204"):
        return ["programs", unit]
    return ["missions"]


def wsl_path(p):
    p = os.path.abspath(p).replace("\\", "/")
    return "/mnt/%s%s" % (p[0].lower(), p[2:])


def main():
    # 1. full build -> target objects (also proves the tree is still byte-identical)
    r = subprocess.run([sys.executable, os.path.join(ROOT, "tools", "build_ac.py")], cwd=ROOT)
    if r.returncode != 0:
        print("full build failed; fix it before generating a report")
        return 1

    # 2. base objects: same C, INCLUDE_ASM compiled away
    build_ac.BUILD = "build/USA_base"
    build_ac.CPP_FLAGS = build_ac.CPP_FLAGS + ["-DSKIP_ASM"]
    as_bin, cpp, cc1 = build_ac.tool("as"), build_ac.cpp_bin(), build_ac.cc1_bin()
    for unit in build_ac.UNITS:
        if not build_ac.compile_c(unit, cpp, cc1, as_bin):
            return 1

    # 3. objdiff.json
    units = []
    src_root = os.path.join(ROOT, "src")
    for unit in build_ac.UNITS:
        for dirpath, _dirs, files in os.walk(os.path.join(src_root, unit)):
            for name in sorted(files):
                if not name.endswith(".c"):
                    continue
                rel = os.path.relpath(os.path.join(dirpath, name), ROOT).replace("\\", "/")
                units.append({
                    "name": rel[len("src/"):-2],
                    "target_path": "build/USA/%s.o" % rel,
                    "base_path": "build/USA_base/%s.o" % rel,
                    "metadata": {"progress_categories": categories_for(unit), "source_path": rel},
                })
    with open(os.path.join(ROOT, "objdiff.json"), "w") as f:
        json.dump({"build_target": False, "build_base": False, "units": units,
                   "progress_categories": CATEGORIES}, f, indent=2)

    # 4. objdiff-cli report
    os.makedirs(os.path.join(ROOT, "progress"), exist_ok=True)
    cli = os.path.join(ROOT, "tools", "objdiff", "objdiff-cli")
    cmd = "cd '%s' && '%s' report generate -o progress/report.json" % (wsl_path(ROOT), wsl_path(cli))
    if platform.system() == "Windows":
        r = subprocess.run(["wsl", "-e", "sh", "-c", cmd])
    else:
        r = subprocess.run(["sh", "-c", cmd.replace(wsl_path(ROOT), ROOT).replace(wsl_path(cli), cli)])
    if r.returncode != 0:
        print("objdiff-cli failed")
        return 1
    with open(os.path.join(ROOT, "progress", "report.json")) as f:
        rep = json.load(f)
    rep = exclude_psyq(rep)
    with open(os.path.join(ROOT, "progress", "report.json"), "w") as f:
        json.dump(rep, f, separators=(",", ":"))
    m = rep.get("measures", {})
    print("report: %s/%s functions matched (%.2f%%), %s/%s code bytes" % (
        m.get("matched_functions", 0), m.get("total_functions", 0),
        float(m.get("matched_functions_percent", 0.0)), m.get("matched_code", 0), m.get("total_code", 0)))
    update_readme(rep)
    print("wrote progress/report.json and the README progress section - commit both")
    return 0


PSYQ = os.path.join(ROOT, "configs", "USA", "psyq_funcs.txt")


def psyq_names():
    if not os.path.exists(PSYQ):
        return set()
    return {l.split()[0] for l in open(PSYQ) if l.strip() and not l.startswith("#")}


def measure(funcs):
    """objdiff function measures for a list of report functions."""
    total = sum(int(f.get("size", 0)) for f in funcs)
    matched = [f for f in funcs if float(f.get("fuzzy_match_percent", 0.0)) == 100.0]
    mcode = sum(int(f.get("size", 0)) for f in matched)
    fuzzy = sum(int(f.get("size", 0)) * float(f.get("fuzzy_match_percent", 0.0)) for f in funcs)
    pct = lambda a, b: (100.0 * a / b) if b else 100.0
    return {"total_code": str(total), "matched_code": str(mcode),
            "matched_code_percent": pct(mcode, total),
            "fuzzy_match_percent": (fuzzy / total) if total else 100.0,
            "total_functions": len(funcs), "matched_functions": len(matched),
            "matched_functions_percent": pct(len(matched), len(funcs))}


def exclude_psyq(rep):
    """Drop PsyQ library functions (configs/USA/psyq_funcs.txt) from every unit and recompute
    unit, category and total measures. Library code is kept as asm and never counts."""
    psyq = psyq_names()
    allf, bycat = [], {}
    for u in rep["units"]:
        if u["name"].startswith("main/"):
            u["functions"] = [f for f in u.get("functions", []) if f["name"] not in psyq]
        u["measures"].update(measure(u.get("functions", [])))
        allf += u.get("functions", [])
        for c in u.get("metadata", {}).get("progress_categories", []):
            bycat.setdefault(c, []).extend(u.get("functions", []))
    for c in rep.get("categories", []):
        c["measures"].update(measure(bycat.get(c["id"], [])))
    rep["measures"].update(measure(allf))
    return rep


README_ROWS = [
    ("main", "**Main executable** (`SCUS_941.82`, game code)"),
    ("programs", "**Program overlays** (`FDAT.T`)"),
    ("fdat201", "&nbsp;&nbsp;└ `FDAT_201`"),
    ("fdat202", "&nbsp;&nbsp;└ `FDAT_202`"),
    ("fdat203", "&nbsp;&nbsp;└ `FDAT_203`"),
    ("fdat204", "&nbsp;&nbsp;└ `FDAT_204`"),
    ("missions", "**Mission overlays** (`FDAT.T`, 58 entries, 57 unique)"),
]


def bar(pct, segments=20):
    filled = max(0, min(segments, int(round(pct / 100.0 * segments))))
    return "▰" * filled + "▱" * (segments - filled)


def row(label, m):
    done, total = int(m.get("matched_functions", 0)), int(m.get("total_functions", 0))
    pct = float(m.get("matched_functions_percent", 0.0))
    return "| %s | %d | %d | `%s` %.2f%% |" % (label, total, done, bar(pct), pct)


def update_readme(rep):
    """Rewrite the PROGRESS:BADGE and PROGRESS:TABLE blocks of README.md from the report."""
    path = os.path.join(ROOT, "README.md")
    with open(path, encoding="utf-8") as f:
        text = f.read()
    m = rep["measures"]
    cats = {c["id"]: c["measures"] for c in rep.get("categories", [])}
    pct = float(m.get("matched_functions_percent", 0.0))
    badge = "![matched](https://img.shields.io/badge/matched-%d%%2F%d%%20(%.2f%%25)-1f6feb)" % (
        int(m["matched_functions"]), int(m["total_functions"]), pct)
    lines = ["| Component | Functions | Matched | Progress |", "|---|---:|---:|---|"]
    lines += [row(label, cats[cid]) for cid, label in README_ROWS if cid in cats]
    lines.append("| PsyQ 3.7 libraries (`configs/USA/psyq_funcs.txt`, kept as asm, not counted) | %d | | |"
                 % len(psyq_names()))
    lines.append(row("**Total**", m))
    text = re.sub(r"(<!-- PROGRESS:BADGE -->\n).*?(\n<!-- /PROGRESS:BADGE -->)",
                  lambda x: x.group(1) + badge + x.group(2), text, flags=re.S)
    text = re.sub(r"(<!-- PROGRESS:TABLE -->\n).*?(\n<!-- /PROGRESS:TABLE -->)",
                  lambda x: x.group(1) + "\n".join(lines) + x.group(2), text, flags=re.S)
    with open(path, "w", encoding="utf-8", newline="\n") as f:
        f.write(text)


if __name__ == "__main__":
    sys.exit(main())
