#!/usr/bin/env python3
"""Build and verify Armored Core (USA, SCUS-94182) byte-identical.

Units (each split by splat from configs/USA/<unit>.yaml):

  main      dumps/disc/SCUS_941.82           PS-X EXE, 0x80011000
  fdat201   dumps/fdat/FDAT_201.BIN          main program overlays from GG/COM/FDAT.T,
  fdat202   dumps/fdat/FDAT_202.BIN          all four loaded at 0x8004ADA0 (the exe's
  fdat203   dumps/fdat/FDAT_203.BIN          .bss end), one at a time
  fdat204   dumps/fdat/FDAT_204.BIN

Two kinds of translation unit:

  * asm data/rodata/header/text (asm/USA/<unit>/**/*.s outside nonmatchings/ and
    matchings/) -> assembled straight with mips-linux-gnu-as.
  * C source (src/<unit>/**/*.c) -> preprocess (gcc -E) -> PSY-Q cc1 -> maspsx ->
    mips-linux-gnu-as. A C file's INCLUDE_ASM stubs pull the per-function
    nonmatchings .s in through the assembler, so nonmatchings/ is never assembled
    on its own.

Each unit is linked with its splat linker script plus the auto symbol files (an
overlay resolves the exe's functions through them), objcopied to a raw image and
SHA-1-checked against the retail file. Success prints, per unit:

    build/USA/out/SCUS_941.82: OK
    build/USA/out/FDAT_201.BIN: OK
    ...

Usage:
    python tools/build_ac.py                 # everything
    python tools/build_ac.py --units main    # just the exe
    python tools/build_ac.py --cc1 PATH      # compiler experiment (one cc1 for every unit)
"""
import argparse
import hashlib
import os
import platform
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BUILD = "build/USA"
OUT = "build/USA/out"

# unit -> (retail file, output name)
UNITS = {
    "main": ("dumps/disc/SCUS_941.82", "SCUS_941.82"),
    "fdat201": ("dumps/fdat/FDAT_201.BIN", "FDAT_201.BIN"),
    "fdat202": ("dumps/fdat/FDAT_202.BIN", "FDAT_202.BIN"),
    "fdat203": ("dumps/fdat/FDAT_203.BIN", "FDAT_203.BIN"),
    "fdat204": ("dumps/fdat/FDAT_204.BIN", "FDAT_204.BIN"),
}
SHA1 = {
    "main": "ee884a2cb3ce30bc13255142fecd5a2f02ba04ad",
    "fdat201": "77236ae7cc17dfc17a78be29acef12824b7b64fe",
    "fdat202": "0265be862998e465c1ed5cc0fe834447f5e14814",
    "fdat203": "ab260599f1125a050c8cc31b0a6daf89d5d1bebb",
    "fdat204": "64a7e42587485691571a12dd578297448c89fa58",
}

# Flags for asm TUs (data/rodata/header): already final machine asm, -O0 keeps as
# from reordering.
AS_FLAGS = ["-EL", "-march=r3000", "-mtune=r3000", "-no-pad-sections", "-O0", "-G0"]

CPP_FLAGS = [
    "-E", "-P", "-undef", "-nostdinc",
    "-D_LANGUAGE_C", "-DVER_USA",
    "-I", "include", "-I", BUILD,
]
# Compiler pin: see COMPILER_ANALYSIS.md. Retail AC was built with a GCC 2.7.2-class
# PSY-Q cc1 (unfilled epilogues), so the default is the PsyQ 4.0 SN32 build.
CC1_FLAGS = [
    "-O2", "-mips1", "-mcpu=3000", "-w",
    "-funsigned-char", "-fpeephole", "-ffunction-cse",
    "-fpcc-struct-return", "-fcommon",
    "-msoft-float", "-mgas", "-fgnu-linker",
    "-gcoff", "-G0", "-quiet",
]
MASPSX_FLAGS = ["--aspsx-version=2.56", "--run-assembler"]
MASPSX_AS_FLAGS = ["-EL", "-march=r3000", "-mtune=r3000", "-no-pad-sections", "-G0", "-I", "include"]
# Per-unit or per-file extra cc1 flags ("unit" or "unit/file.c").
UNIT_CC1 = {}
UNIT_ASPSX = {}


def binutils_dir():
    env = os.environ.get("AC_BINUTILS")
    if env:
        return env
    system = platform.system()
    if system == "Windows":
        return os.path.join(ROOT, "tools", "windows", "binutils")
    if system == "Darwin":
        return os.path.join(ROOT, "tools", "macos", "binutils")
    return os.path.join(ROOT, "tools", "linux", "binutils")


def tool(name):
    d = binutils_dir()
    exe = os.path.join(d, "mips-linux-gnu-%s.exe" % name)
    if not os.path.exists(exe):
        exe = os.path.join(d, "mips-linux-gnu-%s" % name)
    if not os.path.exists(exe):
        exe = "mips-linux-gnu-%s" % name
    return exe


def cpp_bin():
    env = os.environ.get("AC_CPP")
    if env:
        return env
    if platform.system() == "Windows":
        return os.path.join(ROOT, "tools", "windows", "gcc-win", "bin", "gcc.exe")
    return "cpp"


def cc1_bin():
    env = os.environ.get("AC_CC1")
    if env:
        return env
    if platform.system() == "Windows":
        return os.path.join(ROOT, "tools", "windows", "gcc-psyq4.0-win", "CC1PSX.EXE")
    return os.path.join(ROOT, "tools", "linux", "gcc-2.7.2-cdk", "cc1")


def maspsx_py():
    return os.path.join(ROOT, "tools", "maspsx", "maspsx.py")


def run(cmd, stdin_devnull=False, quiet=False):
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True,
                       stdin=subprocess.DEVNULL if stdin_devnull else None)
    if r.returncode != 0 and not quiet:
        sys.stderr.write(" ".join(cmd) + "\n")
        sys.stderr.write(r.stdout)
        sys.stderr.write(r.stderr)
    return r.returncode


def sha1(path):
    h = hashlib.sha1()
    with open(path, "rb") as f:
        for block in iter(lambda: f.read(1 << 16), b""):
            h.update(block)
    return h.hexdigest()


def obj_for(src):
    rel = os.path.relpath(src, ROOT).replace("\\", "/")
    obj = os.path.join(ROOT, BUILD, rel + ".o")
    os.makedirs(os.path.dirname(obj), exist_ok=True)
    return obj


def assemble_asm(unit, as_bin):
    root = os.path.join(ROOT, "asm", "USA", unit)
    for dirpath, dirs, files in os.walk(root):
        dirs[:] = [d for d in dirs if d not in ("nonmatchings", "matchings")]
        for name in sorted(files):
            if not name.endswith(".s"):
                continue
            src = os.path.join(dirpath, name)
            cmd = [as_bin] + AS_FLAGS + ["-I", "include", "-o", obj_for(src), src]
            if run(cmd) != 0:
                print("BUILD FAILED: assembling %s" % os.path.relpath(src, ROOT))
                return False
    return True


def compile_c(unit, cpp, cc1, as_bin):
    root = os.path.join(ROOT, "src", unit)
    if not os.path.isdir(root):
        return True
    tmp = os.path.join(ROOT, BUILD, "tmp")
    os.makedirs(tmp, exist_ok=True)
    for dirpath, _dirs, files in os.walk(root):
        for name in sorted(files):
            if not name.endswith(".c"):
                continue
            src = os.path.join(dirpath, name)
            rel = os.path.relpath(src, ROOT).replace("\\", "/")
            key = "%s/%s" % (unit, os.path.relpath(src, root).replace("\\", "/"))
            obj = obj_for(src)
            base = os.path.join(tmp, rel.replace("/", "_"))
            i_file, s_file = base + ".i", base + ".s"
            if run([cpp] + CPP_FLAGS + ["-o", i_file, src]) != 0:
                print("BUILD FAILED: preprocessing %s" % rel)
                return False
            cc1_flags = CC1_FLAGS + UNIT_CC1.get(key, UNIT_CC1.get(unit, []))
            if run([cc1, i_file] + cc1_flags + ["-o", s_file], stdin_devnull=True) != 0:
                print("BUILD FAILED: compiling %s" % rel)
                return False
            mflags = [f for f in MASPSX_FLAGS if not f.startswith("--aspsx-version")]
            mflags.append("--aspsx-version=" + UNIT_ASPSX.get(key, UNIT_ASPSX.get(unit, "2.56")))
            cmd = [sys.executable, maspsx_py()] + mflags + [
                "--gnu-as-path=%s" % os.path.abspath(as_bin)] + MASPSX_AS_FLAGS + ["-o", obj, s_file]
            if run(cmd, stdin_devnull=True) != 0:
                print("BUILD FAILED: maspsx/as %s" % rel)
                return False
    return True


def link(unit, ld_bin, objcopy_bin, verify=True):
    target, out_name = UNITS[unit]
    ld_script = "linkers/USA/%s.ld" % unit
    if not os.path.exists(os.path.join(ROOT, ld_script)):
        print("BUILD FAILED: %s missing (run splat on configs/USA/%s first)" % (ld_script, unit))
        return False
    cmd = [ld_bin, "-EL"]
    for kind in ("syms", "funcs"):
        p = "linkers/USA/undefined_%s_auto.%s.txt" % (kind, unit)
        if os.path.exists(os.path.join(ROOT, p)):
            cmd += ["-T", p]
    elf = "%s/%s.elf" % (BUILD, unit)
    cmd += ["-T", ld_script, "-Map", "%s/%s.map" % (BUILD, unit), "-o", elf, "--no-check-sections"]
    if run(cmd) != 0:
        print("BUILD FAILED: linking %s" % unit)
        return False
    os.makedirs(os.path.join(ROOT, OUT), exist_ok=True)
    out = "%s/%s" % (OUT, out_name)
    if run([objcopy_bin, "-O", "binary", elf, out]) != 0:
        print("BUILD FAILED: objcopy %s" % unit)
        return False
    if not verify:
        print("%s: built (verify skipped)" % out)
        return True
    got = sha1(os.path.join(ROOT, out))
    if got != SHA1[unit]:
        print("%s: MISMATCH" % out)
        print("  built  %s" % got)
        print("  want   %s" % SHA1[unit])
        return False
    print("%s: OK" % out)
    return True


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--units", nargs="*", default=None, help="units to build (default: all split units)")
    ap.add_argument("--cc1", default=None, help="override the cc1 binary")
    ap.add_argument("--skip-verify", action="store_true")
    args = ap.parse_args()

    as_bin, ld_bin, objcopy_bin = tool("as"), tool("ld"), tool("objcopy")
    cpp, cc1 = cpp_bin(), os.path.abspath(args.cc1) if args.cc1 else cc1_bin()

    units = args.units or [u for u in UNITS if os.path.exists(os.path.join(ROOT, "linkers", "USA", u + ".ld"))]
    ok = True
    for unit in units:
        if unit not in UNITS:
            print("unknown unit %s" % unit)
            return 1
        if not os.path.exists(os.path.join(ROOT, UNITS[unit][0])):
            print("BUILD FAILED: %s missing (see README: extract the disc, run tools/acdisc.py)" % UNITS[unit][0])
            return 1
        if not (assemble_asm(unit, as_bin) and compile_c(unit, cpp, cc1, as_bin)
                and link(unit, ld_bin, objcopy_bin, not args.skip_verify)):
            ok = False
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
