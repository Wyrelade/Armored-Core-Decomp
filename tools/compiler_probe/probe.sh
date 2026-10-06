#!/bin/sh
# usage: probe.sh <c file> <func...>   (run in WSL from repo root)
C=$1; shift
FUNCS="$@"
T=tools/compiler_probe/tmp; mkdir -p $T
FLAGS="${OPT:--O2} -mips1 -mcpu=3000 -w -funsigned-char -fpeephole -ffunction-cse -fpcc-struct-return -fcommon -msoft-float -mgas -fgnu-linker -gcoff -G0 -quiet"
norm() { mips-linux-gnu-objdump -d -z -M no-aliases $1 2>/dev/null | awk -v f="<$2>:" '$0 ~ f {p=1; next} /^[0-9a-f]+ <[^L].*>:$/ {if(p) exit} /^$/ || /^[0-9a-f]+ <L/ {next} p {sub(/^[^	]*	[^	]*	/,""); sub(/ <.*>$/,""); print}' ; }
# target objects
for f in $FUNCS; do
  for u in fdat202 fdat201 fdat203 fdat204 main; do
    s=$(ls asm/USA/$u/nonmatchings/*/$f.s 2>/dev/null | head -1); [ -n "$s" ] && break
  done
  printf '.include "include/macro.inc"\n.set noat\n.set noreorder\n.include "%s"\n' "$s" > $T/t_$f.s
  mips-linux-gnu-as -EL -march=r3000 -mtune=r3000 -no-pad-sections -O0 -G0 -I include -o $T/t_$f.o $T/t_$f.s 2>&1 | head -3
done
cpp -P -undef -nostdinc $C > $T/p.i
for cc in ${CCLIST:-gcc-2.5.7-psx gcc-2.6.0-psx gcc-2.6.3-psx gcc-2.7.2-psx gcc-2.7.2-cdk gcc-2.8.1-psx}; do
  for asv in ${ASV:-2.34}; do [ -n "$CCS" ] && ! echo " $CCS " | grep -q " $cc " && continue
  if [ -e tools/linux/$cc/cc1 ]; then CC1=tools/linux/$cc/cc1; else CC1=tools/windows/$cc/CC1PSX.EXE; fi; $CC1 $FLAGS $T/p.i -o $T/p.s </dev/null 2>/dev/null || { echo "$cc: cc1 failed"; continue; }
  python3 tools/maspsx/maspsx.py --aspsx-version=$asv --run-assembler --gnu-as-path=mips-linux-gnu-as -EL -march=r3000 -mtune=r3000 -no-pad-sections -G0 -I include -o $T/p.o < $T/p.s 2>&1 | head -3
  line="$cc/as$asv:"
  for f in $FUNCS; do
    if [ "$(norm $T/p.o $f)" = "$(norm $T/t_$f.o $f)" ]; then line="$line $f=OK"; else line="$line $f=--"; fi
  done
  echo "$line"
  done
done
