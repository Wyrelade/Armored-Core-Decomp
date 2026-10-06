#!/usr/bin/env python3
"""Generate the splat configs for the FDAT.T mission overlays (PLAN Phase 3).

    venv/Scripts/python.exe tools/gen_mission_configs.py [--print]

Writes configs/USA/fdatNNN.yaml (one per unique overlay), empty configs/USA/sym.fdatNNN.txt,
and configs/USA/mission_overlays.txt (unit, vram, sha1, alias-of) that tools/build_ac.py
reads. Byte-identical entries are built once and verified under both names (alias).

Load bases come from the programs' loader code (absolute lui/addiu of the base):
  entries 0-98, 120, 140 -> 0x801C4B40 (FDAT_202)
  entries 180-186        -> 0x801B80C8 (FDAT_203)
  entries 160-168        -> 0x801C8460 (FDAT_204)
Layout per entry: a pointer table + rodata from offset 0, then .text, then .data. The text
range starts at the first function start whose code runs unbroken to the lowest function the
overlay references (header table / jal targets) and ends after the last `jr ra` + delay slot
that is followed only by data.
"""
import argparse
import hashlib
import os
import struct

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ENTRIES = list(range(0, 100, 2)) + [120, 140]
BASES = {e: 0x801C4B40 for e in ENTRIES}
BASES.update({e: 0x801B80C8 for e in (180, 182, 184, 186)})
BASES.update({e: 0x801C8460 for e in (160, 162, 164, 166, 168)})
JR_RA = 0x03E00008


def words(b):
    return list(struct.unpack_from("<%dI" % (len(b) // 4), b))


def ascii4(w):
    bs = w.to_bytes(4, "little")
    return all(32 <= c < 127 or c in (0, 9, 10) for c in bs) and sum(1 for c in bs if c >= 32) >= 3


def is_data(w, i, base, size):
    """True for words that cannot be in this overlay's code: in-overlay / KSEG0 pointers,
    invalid instructions, and runs of ASCII text."""
    import rabbitizer
    x = w[i]
    if x == 0:
        return False
    if base <= x < base + size or 0x80000000 <= x < 0x80200000:
        return True
    if not rabbitizer.Instruction(x).isValid():
        return True
    if ascii4(x) and ((i > 0 and ascii4(w[i - 1])) or (i + 1 < len(w) and ascii4(w[i + 1]))):
        return True
    return False


def layout(e):
    b = open(os.path.join(ROOT, "dumps/fdat/FDAT_%03d.BIN" % e), "rb").read()
    base, size = BASES[e], len(b)
    w = words(b)
    n = len(w)
    jr = [i for i, x in enumerate(w) if x == JR_RA]
    # functions the overlay itself references
    refs = set()
    for x in w[:64]:
        if base <= x < base + size and (x - base) % 4 == 0:
            refs.add((x - base) // 4)
    for x in w:
        if x >> 26 == 3:
            t = ((x & 0x3FFFFFF) << 2) | 0x80000000
            if base <= t < base + size:
                refs.add((t - base) // 4)
    first_ref = min(i for i in refs if any(j > i for j in jr))
    # walk back while the words look like code
    i = first_ref
    while i > 0 and not is_data(w, i - 1, base, size):
        i -= 1
    while w[i] == 0 and i < first_ref:      # leading zero padding stays in rodata
        i += 1
    text0 = i * 4
    # text end: the last jr ra after which nothing but non-code follows up to a pointer/data run
    last = max(j for j in jr if j > first_ref)
    text1 = (last + 2) * 4
    return {"entry": e, "base": base, "size": size, "text0": text0, "text1": text1,
            "sha1": hashlib.sha1(b).hexdigest(), "first_ref": first_ref * 4}


def yaml(unit, e, L):
    return """name: Mission overlay FDAT.T entry {e}
sha1: {sha1}
options:
  basename: {u}
  target_path: dumps/fdat/FDAT_{e:03d}.BIN
  base_path: ../..
  platform: psx
  compiler: PSYQ

  asm_path: asm/USA/{u}
  src_path: src/{u}
  build_path: build/USA
  ld_script_path: linkers/USA/{u}.ld
  elf_path: build/USA/{u}.elf
  ld_dependencies: False

  find_file_boundaries: True
  migrate_rodata_to_functions: True
  pair_rodata_to_text: False
  gp_value: 0x80039C5C

  o_as_suffix: False
  use_legacy_include_asm: False

  asm_function_macro: glabel
  asm_jtbl_label_macro: jlabel
  asm_data_macro: dlabel
  generate_asm_macros_files: False

  section_order: [".rodata", ".text", ".data", ".sdata", ".sbss", ".bss"]

  symbol_addrs_path:
    - configs/USA/sym.main.txt
    - configs/USA/sym.{u}.txt

  undefined_funcs_auto_path: linkers/USA/undefined_funcs_auto.{u}.txt
  undefined_syms_auto_path: linkers/USA/undefined_syms_auto.{u}.txt

  subalign: 4

  string_encoding: ASCII
  data_string_encoding: ASCII
  rodata_string_guesser_level: 2
  data_string_guesser_level: 2

  ld_bss_is_noload: True

# Mission overlay: GG/COM/FDAT.T entry {e} (tools/acdisc.py -> dumps/fdat/FDAT_{e:03d}.BIN),
# loaded at 0x{base:08X} (tools/gen_mission_configs.py). Generated; edit the generator.
segments:
  - name: {u}
    type: code
    start: 0x0
    vram: 0x{base:08X}
    align: 4
    subalign: 4
    subsegments:
      - [0x0, rodata, {u}_rodata]
      - [0x{t0:X}, c, {u}]
      - [0x{t1:X}, data, {u}_data]
  - [0x{size:X}]
""".format(e=e, u=unit, sha1=L["sha1"], base=L["base"], t0=L["text0"], t1=L["text1"], size=L["size"])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--print", action="store_true", help="only print the layouts")
    a = ap.parse_args()
    seen = {}
    rows = []
    for e in sorted(BASES):
        p = os.path.join(ROOT, "dumps/fdat/FDAT_%03d.BIN" % e)
        if not os.path.exists(p) or os.path.getsize(p) == 0:
            continue
        L = layout(e)
        unit = "fdat%03d" % e
        alias = seen.get(L["sha1"])
        print("%s base %08X size %6X text %6X-%6X (first ref %X)%s" % (
            unit, L["base"], L["size"], L["text0"], L["text1"], L["first_ref"],
            " = " + alias if alias else ""))
        rows.append((unit, L, alias))
        if not alias:
            seen[L["sha1"]] = unit
    if a.print:
        return
    for unit, L, alias in rows:
        if alias:
            continue
        open(os.path.join(ROOT, "configs/USA/%s.yaml" % unit), "w", newline="\n").write(yaml(unit, L["entry"], L))
        sym = os.path.join(ROOT, "configs/USA/sym.%s.txt" % unit)
        if not os.path.exists(sym):
            open(sym, "w").close()
    with open(os.path.join(ROOT, "configs/USA/mission_overlays.txt"), "w", newline="\n") as f:
        f.write("# unit  vram  sha1  [alias-of]  (tools/gen_mission_configs.py)\n")
        for unit, L, alias in rows:
            f.write("%s 0x%08X %s%s\n" % (unit, L["base"], L["sha1"], " " + alias if alias else ""))


if __name__ == "__main__":
    main()
