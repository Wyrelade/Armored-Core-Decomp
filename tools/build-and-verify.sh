#!/usr/bin/env bash
# Build and verify Armored Core (SCUS_941.82 + the FDAT.T program overlays)
# byte-identical with tools/build_ac.py.
#
# Success = every line "build/USA/out/<file>: OK" and no FAIL/MISMATCH.

set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"

PYTHON=""
for cand in "$ROOT/venv/Scripts/python.exe" "$ROOT/venv/bin/python3" "$ROOT/.venv/bin/python3"; do
    if [[ -x "$cand" ]]; then PYTHON="$cand"; break; fi
done
[[ -n "$PYTHON" ]] || PYTHON="python3"

LOG="$(mktemp)"
status=0
"$PYTHON" tools/build_ac.py "$@" >"$LOG" 2>&1 || status=$?
grep -E "out/.*: (OK|FAIL|MISMATCH)|error|Error|undefined reference|multiple definition" "$LOG" | head -60

if [[ $status -ne 0 ]] || grep -qE "FAIL|MISMATCH|undefined reference|multiple definition" "$LOG" \
   || ! grep -q "build/USA/out/SCUS_941.82: OK" "$LOG"; then
    echo "(full log: $LOG)"
    echo "BUILD HAS FAILED."
    exit 1
fi

if [[ -f tools/check_lost_matches.py ]] && ! "$PYTHON" tools/check_lost_matches.py >/dev/null 2>&1; then
    echo "WARNING: tools/check_lost_matches.py reported a problem (run it directly)."
fi
rm -f "$LOG"
echo "BUILD SUCCEEDED"
