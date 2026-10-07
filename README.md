<p align="center">
  <a href="https://nyen.cc/"><img src="https://nyen.cc/favicon.svg" alt="NYEN logo" width="56" height="56"></a>
  <br>
  <sub>Powered by</sub>
  <br>
  <a href="https://nyen.cc/"><b>NYEN</b></a>
</p>

# Armored Core Decompilation

<!-- PROGRESS:BADGE -->
![matched](https://img.shields.io/badge/matched-627%2F5786%20(10.84%25)-1f6feb)
<!-- /PROGRESS:BADGE -->
![build](https://img.shields.io/badge/build-byte--identical-2ea043)
![platform](https://img.shields.io/badge/platform-PS1%20(SCUS--94182)-8957e5)

A **matching decompilation** of *Armored Core* (FromSoftware, 1997) for the Sony PlayStation.

The goal is to recover readable C that, when compiled with a period-correct toolchain,
produces files **byte-identical** to the original executable and code overlays, then a
moddable full-source tree.

| Item | Value |
|---|---|
| Platform | PlayStation (PSX / PS1) |
| Disc (USA) | `SCUS-94182` |
| Main executable | `SCUS_941.82`, SHA-1 `ee884a2cb3ce30bc13255142fecd5a2f02ba04ad` (169984 bytes), loaded at `0x80011000` |
| Program overlays | `GG/COM/FDAT.T` entries 201-204, loaded at `0x8004ADA0` |
| Mission overlays | 58 more code entries in `FDAT.T` (`0x801C4B40` / `0x801C8460` / `0x801B80C8`) |
| Compiler | PsyQ 4.0: `CC1PSX` GCC 2.7.2 (SN32 3.7.0002) + ASPSX 2.56 |
| License (project code) | CC0 1.0 |

> **You must own the game.** This repository contains no ROMs, disc images, disassembly or
> copyrighted assets. `rom/ dumps/ asm/ linkers/ assets/ build/` are made from *your own*
> disc and are gitignored. Obtain a legal dump of your own disc.

## Status

Bring-up is done. The executable, the four program overlays and the 58 mission overlays
(57 unique; one pair is byte-identical and built once) are split, every unit
relinks **byte-identical** from the split (C files with `INCLUDE_ASM` stubs plus data), the
C compile pipeline is live, and the compiler is pinned. Matching has started.

### Progress by component

<!-- PROGRESS:TABLE -->
| Component | Functions | Matched | Progress |
|---|---:|---:|---|
| **Main executable** (`SCUS_941.82`, game code) | 147 | 60 | `▰▰▰▰▰▰▰▰▱▱▱▱▱▱▱▱▱▱▱▱` 40.82% |
| **Program overlays** (`FDAT.T`) | 2871 | 507 | `▰▰▰▰▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱` 17.66% |
| &nbsp;&nbsp;└ `FDAT_201` | 1091 | 303 | `▰▰▰▰▰▰▱▱▱▱▱▱▱▱▱▱▱▱▱▱` 27.77% |
| &nbsp;&nbsp;└ `FDAT_202` | 619 | 75 | `▰▰▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱` 12.12% |
| &nbsp;&nbsp;└ `FDAT_203` | 579 | 66 | `▰▰▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱` 11.40% |
| &nbsp;&nbsp;└ `FDAT_204` | 582 | 63 | `▰▰▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱` 10.82% |
| **Mission overlays** (`FDAT.T`, 58 entries, 57 unique) | 2768 | 60 | `▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱` 2.17% |
| PsyQ 3.7 libraries (`configs/USA/psyq_funcs.txt`, kept as asm, not counted) | 528 | | |
| **Total** | 5786 | 627 | `▰▰▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱▱` 10.84% |
<!-- /PROGRESS:TABLE -->

Counts come from objdiff (`tools/progress_report.py`, published to decomp.dev by
`.github/workflows/progress.yml`). The empty `jr ra` stubs splat already wrote as C count
as matched. PsyQ library code (528 functions, identified by signature, listed in
`configs/USA/psyq_funcs.txt`) stays as asm and is excluded from the counts.

## Findings so far

**Where the code lives.** The boot exe is small (164 KB of code and data). Almost all game
code is in `GG/COM/FDAT.T`, a FromSoftware `.T` archive (`u16 count`, then `count + 1`
sector offsets). Of its 205 entries, 62 contain code:

| `FDAT.T` entries | Load address | Content |
|---|---|---|
| 201 | `0x8004ADA0` | program, 0x84800 bytes, 1091 functions (memory card, key config, ranking strings) |
| 202 | `0x8004ADA0` | program, 0x46000 bytes, 619 functions (mission engine: "ENERGY", "MISSION TIMER") |
| 203 | `0x8004ADA0` | program, 0x41800 bytes, 579 functions (variant of 202) |
| 204 | `0x8004ADA0` | program, 0x41800 bytes, 582 functions (variant of 202) |
| 0-98, 120, 140 (even) | `0x801C4B40` | per-mission code overlay, followed by its data entry |
| 160-168 (even) | `0x801C8460` | small per-mission code overlays (base from FDAT_204's loader) |
| 180-186 (even) | `0x801B80C8` | small per-mission code overlays (base from FDAT_203's loader) |

`0x8004ADA0` is exactly the end of the exe's `.bss` (crt0 clears `0x80039CB8-0x8004ADA0`), so
the four programs share one slot and replace each other. Load addresses were found from the
`jal` targets.

**Compiler.** Retail code almost never fills the epilogue delay slot (exe 363 unfilled vs 12
filled, overlays similar), which rules out GCC 2.8.x. A differential compile of 11 retail
functions against nine compiler builds leaves exactly one: **PsyQ 4.0's `CC1PSX`
(GCC 2.7.2 SN32 3.7.0002)**, identical to decompals' `gcc-2.7.2-psx`. GCC 2.6.x matches 10 of
11 and fails a function with a switch and a divide by a constant; PsyQ 4.1's cygnus 2.7.2 and
GCC 2.8.1 fail several. The assembler is ASPSX 2.56: `lw d,sym(reg)` expands through `$at`,
and divides carry no divide-by-zero checks. Flags: `-O2 -G0`.

`tools/compiler_probe/run.sh` reproduces the comparison.

## Layout

| Path | What |
|------|------|
| `src/` / `include/` | decompiled C and headers |
| `configs/` | splat configs + symbol maps |
| `tools/` | PsyQ cc1 builds, maspsx, m2c, decomp-permuter, asm-differ, mkpsxiso, build scripts |

## Quick start

Supply your own Armored Core (SCUS-94182) disc image. If it is ECM-compressed, decode it
first (`tools/unecm.c`, any C compiler):

```
gcc -O2 -o unecm tools/unecm.c
./unecm "Armored Core [NTSC-U] [SCUS-94182].img.ecm" "rom/Armored Core [NTSC-U] [SCUS-94182].img"
tools/windows/mkpsxiso/dumpsxiso.exe -pt -x dumps/disc -s dumps/ac.xml "rom/Armored Core [NTSC-U] [SCUS-94182].img"

python3 -m venv venv                                # venv\Scripts on Windows
pip install -r requirements.txt
python3 tools/acdisc.py                             # unpack GG/COM/FDAT.T to dumps/fdat/
python3 -m splat split configs/USA/SCUS_941.82.yaml # regenerate asm/ and linkers/
python3 -m splat split configs/USA/fdat201.yaml     # same for fdat202/203/204
python3 tools/build_ac.py                           # expect 5x ": OK"
```

`tools/build_ac.py` preprocesses and compiles `src/**/*.c` through the PsyQ `cc1` + maspsx
pipeline, assembles the split asm, links each unit with its splat linker script plus the
auto-detected symbols, and checks the SHA-1 against your disc's files:

```
build/USA/out/SCUS_941.82: OK
build/USA/out/FDAT_201.BIN: OK
build/USA/out/FDAT_202.BIN: OK
build/USA/out/FDAT_203.BIN: OK
build/USA/out/FDAT_204.BIN: OK
```

## Contributing

1. Pick an `INCLUDE_ASM` function, write C that compiles to the same bytes, replace the stub.
2. Use proper structs, no pointer arithmetic with magic offsets.
3. Verify with `python3 tools/build_ac.py`. Only `OK` for every file counts as done.

## Credits

Workflow and toolchain derived from the Digimon World 2 and Parasite Eve 2 decomps.
Compiler builds from [decompals/old-gcc](https://github.com/decompals/old-gcc) and the PsyQ
SDK archives; [splat](https://github.com/ethteck/splat), [m2c](https://github.com/matt-kempster/m2c),
[maspsx](https://github.com/mkst/maspsx), [decomp-permuter](https://github.com/simonlindholm/decomp-permuter),
[asm-differ](https://github.com/simonlindholm/asm-differ), [mkpsxiso](https://github.com/Lameguy64/mkpsxiso).
