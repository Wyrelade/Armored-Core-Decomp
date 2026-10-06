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
]


def categories_for(unit):
    return ["main"] if unit == "main" else ["programs", unit]


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
    m = rep.get("measures", {})
    print("report: %s/%s functions matched (%.2f%%), %s/%s code bytes" % (
        m.get("matched_functions", 0), m.get("total_functions", 0),
        float(m.get("matched_functions_percent", 0.0)), m.get("matched_code", 0), m.get("total_code", 0)))
    print("wrote progress/report.json - commit it, the workflow uploads it")
    return 0


if __name__ == "__main__":
    sys.exit(main())
