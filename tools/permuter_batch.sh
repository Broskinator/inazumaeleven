#!/bin/sh
# Runs decomp-permuter over every function of permuter/queue.txt, one after the other, unattended.
#
#   tools/permuter_batch.sh [MINUTES]
#
#   MINUTES       time per function (default 30, or PERM_MINUTES)
#   PERM_JOBS     processes per function (default: the number of CPUs)
#   PERMUTER      where decomp-permuter is (default ../ext/decomp-permuter; clone it with
#                 git clone https://github.com/simonlindholm/decomp-permuter ../ext/decomp-permuter
#                 and pip install toml)
#
# For each function, tools/permprep.py prepares permuter/work/NAME (the C view the permuter
# changes, a compile.sh that compiles each candidate as the game's C++, and the original code),
# runs the permuter for MINUTES and keeps the best candidate in permuter/results/NAME/
# (function.cpp: the function as C++; diff.txt; score.txt). A function that matches is removed
# from the queue; put its function.cpp in place of the attempt in its source, remove the asm
# and the #ifdef, and run make.
# The log of the whole batch is permuter/batch.log. Needs a C preprocessor and
# arm-none-eabi-objdump (devkitARM, or binutils-arm-none-eabi).
cd "$(dirname "$0")/.." || exit 1
MINUTES=${1:-${PERM_MINUTES:-30}}
PYTHON=${PYTHON:-python}
command -v "$PYTHON" >/dev/null || PYTHON=python3
if [ -n "$DEVKITARM" ] && [ -d "$DEVKITARM/bin" ]; then
    PATH="$DEVKITARM/bin:$PATH"
fi
QUEUE=${PERM_QUEUE:-permuter/queue.txt}
LOG=permuter/batch.log
mkdir -p permuter/results permuter/work

echo "== $(date '+%Y-%m-%d %H:%M') batch: $MINUTES min per function" | tee -a "$LOG"
grep -v '^[[:space:]]*\(#\|$\)' "$QUEUE" | while read -r func source rest; do
    echo "-- $(date '+%H:%M') $func ($source): $rest" | tee -a "$LOG"
    "$PYTHON" tools/permprep.py run "$func" "$source" --minutes "$MINUTES" 2>&1 | tee -a "$LOG"
    # (tee hides the exit status: the result line says whether it matched)
    if tail -n 3 "$LOG" | grep -q "^$func: \(best score 0 (.*), 0 words differ\|matches already\)"; then
        tmp=$(mktemp)
        awk -v f="$func" '$1 != f' "$QUEUE" > "$tmp" && cat "$tmp" > "$QUEUE"
        rm -f "$tmp"
        echo "   $func matches: removed from the queue, see permuter/results/" | tee -a "$LOG"
    fi
done
echo "== $(date '+%Y-%m-%d %H:%M') batch done" | tee -a "$LOG"
