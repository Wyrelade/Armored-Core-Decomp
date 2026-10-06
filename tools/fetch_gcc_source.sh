#!/usr/bin/env bash
#
# Put the *patched* GCC 2.7.2 source under local/gcc/, so matching agents read
# the compiler this project actually builds with (Armored Core = PsyQ 4.0
# CC1PSX, "2.7.2 SN32 3.7.0002", whose output is identical to decompals'
# gcc-2.7.2-psx build; see COMPILER_ANALYSIS.md).
#
# Why bother: an agent working a function stuck in the high 90s reaches for the
# compiler source to check what a pass really does, and left to itself it
# guesses at URLs. One sweep produced nine fetches over four URLs, four of them
# pulling 2.95.3 - several years newer, different scheduler and CSE. Nothing in
# the matching loop catches a conclusion drawn from the wrong compiler.
#
# And stock 2.7.2 is not what we build with either: tools/linux/gcc-2.7.2-psx
# comes from decompals/old-gcc, which patches the tree before building. This
# applies the same patches, so what you read is what compiled the object.
# It does NOT build anything - source only.
#
# Layout:
#   local/gcc/patches/          the decompals patch set
#   local/gcc/gcc-2.7.2-psx/    stock 2.7.2 with those patches applied
#
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
DEST="$ROOT/local/gcc"
SRC="$DEST/gcc-2.7.2-psx"
PATCHES="$DEST/patches"
VERSION=2.7.2
TARBALL="gcc-${VERSION}.tar.gz"
URL="https://ftp.gnu.org/old-gnu/gcc/${TARBALL}"
# ftp.gnu.org is often unreachable; the GWDG mirror keeps old-gnu/.
MIRROR="https://ftp.gwdg.de/pub/gnu/ftp/old-gnu/gcc/${TARBALL}"
REPO="https://github.com/decompals/old-gcc"

FORCE=false
[[ "${1:-}" == "--force" ]] && FORCE=true

if [[ -d "$SRC" && $FORCE == false ]]; then
    echo "$SRC already exists; --force to redo it."
    exit 0
fi

mkdir -p "$DEST"
cd "$DEST"

# 1. the patch set. Shallow clone into a temp dir - only patches/ is wanted, and
#    the repo also carries build machinery and other compiler versions.
echo "==> patches from $REPO"
rm -rf .old-gcc "$PATCHES"
git clone --depth 1 --quiet "$REPO" .old-gcc
[[ -d .old-gcc/patches ]] || { echo "no patches/ in $REPO - layout changed" >&2; exit 1; }
cp -r .old-gcc/patches "$PATCHES"
printf '%s\n' "$(git -C .old-gcc rev-parse HEAD)" > "$PATCHES/.commit"
rm -rf .old-gcc
echo "    $(ls "$PATCHES" | grep -c . ) file(s), pinned at $(cut -c1-12 <"$PATCHES/.commit")"

# 2. stock source
echo "==> $URL"
[[ -f "$TARBALL" ]] || curl -fL --retry 1 --max-time 300 -o "$TARBALL" "$URL"     || curl -fL --retry 3 --max-time 300 -o "$TARBALL" "$MIRROR"
rm -rf "$SRC" "gcc-${VERSION}"
tar xzf "$TARBALL"
mv "gcc-${VERSION}" "$SRC"

# 3. the same transformations decompals applies before building
#    (gcc-2.7.2-psx.Dockerfile). Kept in its order; psx-2.5.7.patch is applied
#    with -s because it is expected to touch files that do not all exist.
echo "==> patching"
cd "$SRC"
sed -i -- 's/include <varargs.h>/include <stdarg.h>/g' ./*.c
patch -u -p1 obstack.h          -i "$PATCHES/obstack-${VERSION}.h.patch"
patch -u -p1 configure          -i "$PATCHES/configure.patch"
patch -u -p1 config.sub         -i "$PATCHES/config.sub.patch"
patch -u -p1 config/mips/mips.h -i "$PATCHES/mipsel-2.7.patch"
patch -su -p1 < "$PATCHES/psx-2.5.7.patch" || true

# 4. Prove the patches landed, so a silently-stock tree cannot pass.
[[ -f config/mips/psx.h ]]     || { echo "psx-2.5.7.patch did not apply - no config/mips/psx.h" >&2; exit 1; }

cat > "$DEST/README.md" <<'NOTE'
# GCC 2.7.2 source (patched, as built)

Regenerate with `tools/fetch_gcc_source.sh`. Gitignored via `local/`; GCC is
GPL and nothing here is redistributed by this repository.

* `gcc-2.7.2-psx/` - stock 2.7.2 plus the decompals patches, matching
  `tools/linux/gcc-2.7.2-psx/cc1` (= PsyQ 4.0 `CC1PSX.EXE`, 2.7.2 SN32 3.7.0002,
  the Armored Core compiler).
* `patches/` - the patch set, with the upstream commit in `.commit`.

Read **only** this tree. If a question needs a different GCC to answer, the
answer does not apply here - the 2.8.x/2.95 scheduler and CSE are not ours.

The passes behind the leftovers that actually block a match:

| file | what it explains |
|---|---|
| `local-alloc.c`, `global.c` | which pseudo gets which hard register |
| `reload1.c` | spills, and why a pin does not do what you expect |
| `sched.c` | sched1 ordering and its tie-breaking on source order |
| `combine.c` | why two insns fold, or refuse to |
| `cse.c` | reassociation, and constant/symbol operand order |

A finding worth keeping goes in `DECOMPILATION_LEARNINGS.md` as a rule about the
generated code, not as a pointer into compiler source.
NOTE

echo "==> done: $SRC"
