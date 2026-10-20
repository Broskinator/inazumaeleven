#!/usr/bin/env python3
"""Compiles a C file and compares its functions with the original code.

usage: tools/fncmp.py src/file.cpp [function ...] [-d]

Functions are found by name in config/yeep/arm9/**/symbols.txt. Words the linker
fills in (calls, pointers) are not compared. -d prints a side-by-side disassembly
of the functions that differ (needs `pip install capstone pyelftools`).
"""
import glob, os, re, subprocess, sys, tempfile

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CC_VER = os.environ.get("CC_VER", "dsi/1.2")
CFLAGS = os.environ.get("EXTRA_CFLAGS", "").split() + ["-O4,p", "-RTTI", "off", "-proc", "arm946e", "-enum", "int", "-Cpp_exceptions", "off",
          "-char", "signed", "-interworking", "-nosyspath", "-i", "include", "-msgstyle", "gcc"]


def modules():
    """name -> (base address, bytes) for every module, and symbol name -> (module, address)"""
    import yaml
    ex = f"{ROOT}/extract/yeep"
    mods = {"main": (0x02000000, open(f"{ex}/arm9/arm9.bin", "rb").read())}
    for nm in ("itcm", "dtcm"):
        meta = yaml.safe_load(open(f"{ex}/arm9/{nm}.yaml"))
        mods[nm] = (meta["base_address"], open(f"{ex}/arm9/{nm}.bin", "rb").read())
    for o in yaml.safe_load(open(f"{ex}/arm9_overlays/overlays.yaml"))["overlays"]:
        mods[f"ov{o['id']:03d}"] = (o["base_address"], open(f"{ex}/arm9_overlays/{o['file_name']}", "rb").read())
    syms = {}
    cfg = f"{ROOT}/config/yeep/arm9"
    for p in glob.glob(f"{cfg}/**/symbols.txt", recursive=True):
        rel = os.path.relpath(os.path.dirname(p), cfg)
        mod = "main" if rel == "." else os.path.basename(rel)
        for line in open(p):
            m = re.match(r"(\S+) kind:function\S* addr:(0x[0-9a-f]+)", line)
            if m:
                syms[m.group(1)] = (mod, int(m.group(2), 16))
    return mods, syms


def main():
    # NAME@0xADDRESS compares function NAME with the code at ADDRESS (e.g. while its signature changes)
    args = [a for a in sys.argv[1:] if not a.startswith("-")]
    extra = {}
    for a in list(args[1:]):
        if "@" in a:
            n, ad = a.split("@")
            extra[n] = int(ad, 16)
            args[args.index(a)] = n
    show = "-d" in sys.argv
    src, only = args[0], set(args[1:])
    os.makedirs(f"{ROOT}/build/tmp", exist_ok=True)
    obj = f"build/tmp/fncmp_{os.getpid()}.o"   # (relative: the compiler run by wibo writes there reliably)
    env = dict(os.environ, LM_LICENSE_FILE=f"{ROOT}/tools/mwccarm/license.dat", MWCIncludes=f"{ROOT}/include")
    lang = ["-lang", "c++"] if src.endswith(".cpp") else ["-lang", "c99"]
    r = subprocess.run([f"{ROOT}/tools/bin/wibo", f"{ROOT}/tools/mwccarm/{CC_VER}/mwccarm.exe", *lang, *CFLAGS, "-c", src, "-o", obj],
                       cwd=ROOT, env=env, capture_output=True, text=True)
    obj = f"{ROOT}/{obj}"
    if r.returncode or not os.path.exists(obj):
        print(r.stdout + r.stderr)
        sys.exit(1)
    mods, syms = modules()
    for n, ad in extra.items():
        syms[n] = (next(m for m, (b, blob) in mods.items() if b <= ad < b + len(blob)), ad)
    f = ELFFile(open(obj, "rb"))
    rel = {}
    for s in f.iter_sections():
        if isinstance(s, RelocationSection):
            for x in s.iter_relocations():
                rel.setdefault(s["sh_info"], set()).update(range(x["r_offset"], x["r_offset"] + 4))
    ok = True
    for s in f.get_section_by_name(".symtab").iter_symbols():
        if s["st_info"]["type"] != "STT_FUNC" or s.name.startswith("$") or (only and s.name not in only):
            continue
        if s.name not in syms:
            # (a signature changed: find the function by its position among this file's functions)
            print(f"{s.name}: not in symbols.txt")
            ok = False
            continue
        mod, addr = syms[s.name]
        base, blob = mods[mod]
        start = s["st_value"] & ~1
        mine = f.get_section(s["st_shndx"]).data()[start:start + s["st_size"]]
        orig = blob[addr - base:addr - base + len(mine)]
        relocs = rel.get(s["st_shndx"], set())
        bad = [k for k in range(0, len(mine), 4)
               if not any(start + k + j in relocs for j in range(4)) and mine[k:k + 4] != orig[k:k + 4]]
        print(f"{s.name}: {'OK' if not bad else f'{len(bad)} words differ'} ({len(mine)} bytes)")
        ok &= not bad
        if bad and show:
            import capstone
            md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
            A = [f"{i.mnemonic} {i.op_str}" for i in md.disasm(mine, 0)]
            B = [f"{i.mnemonic} {i.op_str}" for i in md.disasm(blob[addr - base:addr - base + max(len(mine), 4)], 0)]
            for k in range(max(len(A), len(B))):
                a = A[k] if k < len(A) else ""
                b = B[k] if k < len(B) else ""
                print(("   " if a == b or (a.startswith("bl") and b.startswith("bl")) else ">> ") + f"{a:44s}{b}")
    os.remove(obj)
    sys.exit(0 if ok else 1)


main()
