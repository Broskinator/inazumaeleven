#!/usr/bin/env python3
"""Renames functions in symbols.txt after their signature changed in a source file.

usage: tools/fixsyms.py src/file.cpp

Compiles the file and, for every function whose name contains func_XXXXXXXX (an
address), gives the symbol at that address in config/yeep/arm9/symbols.txt the
compiled (mangled) name. Prints the renamed symbols.
"""
import os, re, subprocess, sys, time

from elftools.elf.elffile import ELFFile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from fncmp import CC_VER, CFLAGS, ROOT  # noqa: E402


def save(p, text, encoding=None):
    """writes text to p; retries while Windows holds the file (a compile reading it)"""
    for i in range(40):
        try:
            with open(p, "w", newline="\n", encoding=encoding) as f:
                f.write(text)
            return
        except PermissionError:
            if i == 39:
                raise
            time.sleep(0.25)

src = sys.argv[1]
os.makedirs(f"{ROOT}/build/tmp", exist_ok=True)
obj = f"build/tmp/fixsyms_{os.getpid()}.o"
env = dict(os.environ, LM_LICENSE_FILE=f"{ROOT}/tools/mwccarm/license.dat", MWCIncludes=f"{ROOT}/include")
wibo = [] if os.name == "nt" else [f"{ROOT}/tools/bin/wibo"]
lang = ["-lang", "c++"] if src.endswith(".cpp") else ["-lang", "c99"]
r = subprocess.run([*wibo, f"{ROOT}/tools/mwccarm/{CC_VER}/mwccarm.exe", *lang, *CFLAGS, "-c", src, "-o", obj],
                   cwd=ROOT, env=env, capture_output=True, text=True)
if r.returncode:
    print(r.stdout + r.stderr)
    sys.exit(1)
with open(f"{ROOT}/{obj}", "rb") as f:
    names = [s.name for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols()
             if s["st_info"]["type"] == "STT_FUNC" and "func_" in s.name]
os.remove(f"{ROOT}/{obj}")

path = f"{ROOT}/" + (f"config/yeep/arm9/overlays/ov{int(os.environ['IE_OV']):03d}" if os.environ.get("IE_OV") else "config/yeep/arm9") + "/symbols.txt"     # (IE_OV=N: overlay N)
text = open(path).read()
renamed = {}
for name in names:
    m = re.search(r"func_(?:ov[0-9]{3}_)?([0-9a-f]{8})", name)
    addr = int(m.group(1), 16)
    mm = re.search(rf"^(\S+)( kind:function\(\w+,size=0x[0-9a-f]+\) addr:{addr:#010x})$", text, flags=re.M)
    if mm and mm.group(1) != name:
        print(f"{mm.group(1)} -> {name}")
        if mm.group(1).startswith("_Z"):
            renamed[mm.group(1)] = name
        text = text[:mm.start(1)] + name + text[mm.end(1):]
save(path, text)

# (asm that calls the renamed functions by their old mangled names uses the new ones)
if renamed:
    pat = re.compile(r"\b(%s)\b" % "|".join(map(re.escape, renamed)))
    for root, _, files in os.walk(f"{ROOT}/src"):
        for f in files:
            if f.endswith((".c", ".cpp")):
                p = os.path.join(root, f)
                t = open(p).read()
                nt = pat.sub(lambda m: renamed[m.group(1)], t)
                if nt != t:
                    save(p, nt)
