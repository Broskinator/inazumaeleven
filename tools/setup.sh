#!/bin/sh
# Downloads the tools the build needs into tools/ (run once; `make` does it for you).
#   dsd     ds-decomp: extracts, delinks and rebuilds the ROM
#   wibo    runs the Windows compiler/linker on Linux
#   objdiff-cli  compares the compiled code with the original (progress report)
#   mwccarm Metrowerks CodeWarrior for DS (compiler, assembler, linker), from decomp.me
set -e
cd "$(dirname "$0")"
DSD_VERSION=v0.12.1
WIBO_VERSION=1.2.0
OBJDIFF_VERSION=v3.8.3
mkdir -p bin
if [ ! -x bin/dsd ]; then
    echo "Downloading dsd $DSD_VERSION"
    curl -fsSL -o bin/dsd "https://github.com/AetiasHax/ds-decomp/releases/download/$DSD_VERSION/dsd-linux-x86_64"
    chmod +x bin/dsd
fi
if [ ! -x bin/wibo ]; then
    echo "Downloading wibo $WIBO_VERSION"
    curl -fsSL -o bin/wibo "https://github.com/decompals/wibo/releases/download/$WIBO_VERSION/wibo-x86_64"
    chmod +x bin/wibo
fi
if [ ! -x bin/objdiff-cli ]; then
    echo "Downloading objdiff-cli $OBJDIFF_VERSION"
    curl -fsSL -o bin/objdiff-cli "https://github.com/encounter/objdiff/releases/download/$OBJDIFF_VERSION/objdiff-cli-linux-x86_64"
    chmod +x bin/objdiff-cli
fi
if [ ! -d mwccarm ]; then
    echo "Downloading mwccarm"
    curl -fsSL -o mwccarm.zip "https://github.com/decompme/compilers/releases/download/compilers/mwccarm.zip"
    unzip -q mwccarm.zip
    rm mwccarm.zip
fi
echo "Tools ready."
