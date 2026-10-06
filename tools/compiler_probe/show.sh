#!/bin/sh
# show.sh <cc> <asv> <c> <func...> : side-by-side target vs compiled
CC=$1; ASV=$2; C=$3; shift 3
T=tools/compiler_probe/tmp; mkdir -p $T
FLAGS="${OPT:--O2} -mips1 -mcpu=3000 -w -funsigned-char -fpeephole -ffunction-cse -fpcc-struct-return -fcommon -msoft-float -mgas -fgnu-linker -gcoff -G0 -quiet $XFLAGS"
norm() { mips-linux-gnu-objdump -d -z -M no-aliases $1 2>/dev/null | awk -v f="<$2>:" '$0 ~ f {p=1; next} /^[0-9a-f]+ <[^L].*>:$/ {if(p) exit} /^$/ || /^[0-9a-f]+ <L/ {next} p {sub(/^[^	]*	[^	]*	/,""); sub(/ <.*>$/,""); print}' ; }
cpp -P -undef -nostdinc $C > $T/p.i
if [ -e tools/linux/$CC/cc1 ]; then CC1=tools/linux/$CC/cc1; else CC1=tools/windows/$CC/CC1PSX.EXE; fi; $CC1 $FLAGS $T/p.i -o $T/p.s
python3 tools/maspsx/maspsx.py --aspsx-version=$ASV --run-assembler --gnu-as-path=mips-linux-gnu-as -EL -march=r3000 -mtune=r3000 -no-pad-sections -G0 -I include -o $T/p.o < $T/p.s
for f in "$@"; do
  for u in fdat202 fdat201 fdat203 fdat204 main; do s=$(ls asm/USA/$u/nonmatchings/*/$f.s 2>/dev/null | head -1); [ -n "$s" ] && break; done
  printf '.include "include/macro.inc"\n.set noat\n.set noreorder\n.include "%s"\n' "$s" > $T/t.s
  mips-linux-gnu-as -EL -march=r3000 -mtune=r3000 -no-pad-sections -O0 -G0 -I include -o $T/t.o $T/t.s
  norm $T/t.o $f > $T/a; norm $T/p.o $f > $T/b
  echo "=== $f"; diff -y -W 100 $T/a $T/b
done
