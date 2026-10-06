#!/bin/sh
# Compiler pin regression: compile hand-written C for retail Armored Core functions
# with every candidate cc1 and report which ones reproduce the retail bytes.
# Run from the repo root under WSL (needs mips-linux-gnu-as/objdump, cpp, python3):
#   wsl -e sh tools/compiler_probe/run.sh
# Expected: gcc-2.7.2-psx and gcc-psyq4.0-win OK on every function (see COMPILER_ANALYSIS.md).
set -e
D=tools/compiler_probe
export ASV=${ASV:-2.56}
export CCLIST=${CCLIST:-"gcc-2.5.7-psx gcc-2.6.0-psx gcc-2.6.3-psx gcc-2.7.2-psx gcc-2.7.2-cdk gcc-2.8.1-psx gcc-psyq4.0-win gcc-psyq4.1-win gcc-psx"}
sh $D/probe.sh $D/probe_small.c func_8004C234 func_8004D948 func_8004CFC8 func_800579D4 func_8005E97C
sh $D/probe.sh $D/probe_struct.c func_800857EC func_8004CF7C func_80087A24
sh $D/probe.sh $D/probe_branch.c func_8004C1BC
sh $D/probe.sh $D/probe_div.c func_80075280
