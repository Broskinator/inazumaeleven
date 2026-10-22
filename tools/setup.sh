#!/bin/sh
# Downloads the tools the build needs into tools/ (run once; `make` does it for you).
#   dsd     ds-decomp: extracts, delinks and rebuilds the ROM
#   wibo    runs the Windows compiler/linker on Linux (not needed on Windows)
#   objdiff-cli  compares the compiled code with the original (progress report)
#   mwccarm Metrowerks CodeWarrior for DS (compiler, assembler, linker), from decomp.me
set -e
cd "$(dirname "$0")"
DSD_VERSION=v0.12.1
WIBO_VERSION=1.2.0
OBJDIFF_VERSION=v3.8.3
case "$(uname -s)" in
    MINGW*|MSYS*|CYGWIN*) WINDOWS=1; EXE=.exe; PLATFORM=windows ;;
    *) WINDOWS=; EXE=; PLATFORM=linux ;;
esac
mkdir -p bin
if [ ! -x bin/dsd$EXE ]; then
    echo "Downloading dsd $DSD_VERSION"
    curl -fsSL -o bin/dsd$EXE "https://github.com/AetiasHax/ds-decomp/releases/download/$DSD_VERSION/dsd-$PLATFORM-x86_64$EXE"
    chmod +x bin/dsd$EXE
fi
if [ -z "$WINDOWS" ] && [ ! -x bin/wibo ]; then
    echo "Downloading wibo $WIBO_VERSION"
    curl -fsSL -o bin/wibo "https://github.com/decompals/wibo/releases/download/$WIBO_VERSION/wibo-x86_64"
    chmod +x bin/wibo
fi
if [ ! -x bin/objdiff-cli$EXE ]; then
    echo "Downloading objdiff-cli $OBJDIFF_VERSION"
    curl -fsSL -o bin/objdiff-cli$EXE "https://github.com/encounter/objdiff/releases/download/$OBJDIFF_VERSION/objdiff-cli-$PLATFORM-x86_64$EXE"
    chmod +x bin/objdiff-cli$EXE
fi
if [ ! -d mwccarm ]; then
    echo "Downloading mwccarm"
    curl -fsSL -o mwccarm.zip "https://github.com/decompme/compilers/releases/download/compilers/mwccarm.zip"
    if command -v unzip >/dev/null; then unzip -q mwccarm.zip; else "${PYTHON:-python}" -m zipfile -e mwccarm.zip .; fi
    rm mwccarm.zip
fi
echo "Tools ready."
