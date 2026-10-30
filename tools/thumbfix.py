#!/usr/bin/env python3
"""Makes the Thumb asm of a source file assemble to the original bytes.

usage: [IE_OV=N] tools/thumbfix.py SRC

tools/romasm.py writes each Thumb instruction with its address in a comment. The file is
compiled, and each instruction that MW encodes differently from the original (Thumb has
several encodings of 'mov r0, r1', say) is replaced by its bytes, as dcbs.
"""
import os, re, struct, subprocess, sys, tempfile

src = sys.argv[1]
OV = os.environ.get("IE_OV")
CFG = "config/yeep/arm9" + ((f"/{OV}" if OV in ("itcm", "dtcm") else f"/overlays/ov{int(OV):03d}") if OV else "")
if OV:
    blob = open(f"extract/yeep/arm9/{OV}.bin" if OV in ("itcm", "dtcm") else
                f"extract/yeep/arm9_overlays/ov{int(OV):03d}.bin", "rb").read()
    base = int(re.search(r"\.text\s+start:(0x[0-9a-f]+)", open(f"{CFG}/delinks.txt").read()).group(1), 16)
else:
    blob, base = open("extract/yeep/arm9/arm9.bin", "rb").read(), 0x02000000
addrs = {}
for line in open(f"{CFG}/symbols.txt"):
    m = re.match(r"(\S+) kind:function\S* addr:(0x[0-9a-f]+)", line)
    if m:
        addrs[m[1]] = int(m[2], 16)


def elf_functions(path):
    """{name: bytes of the function} of an ELF object."""
    d = open(path, "rb").read()
    shoff, = struct.unpack_from("<I", d, 0x20)
    shnum, shstrndx = struct.unpack_from("<HH", d, 0x30)
    secs = [struct.unpack_from("<IIIIIIIIII", d, shoff + k * 40) for k in range(shnum)]
    out = {}
    for s in secs:
        if s[1] != 2:     # SHT_SYMTAB
            continue
        strtab = secs[s[6]]
        for k in range(s[5] // 16):
            nm, val, size, info, other, shndx = struct.unpack_from("<IIIBBH", d, s[4] + k * 16)
            if info & 0xf != 2 or not 0 < shndx < shnum:     # STT_FUNC
                continue
            name = d[strtab[4] + nm:d.index(b"\0", strtab[4] + nm)].decode()
            sec = secs[shndx]
            out[name] = d[sec[4] + (val & ~1):sec[4] + (val & ~1) + size]
    return out


flags = re.search(r"^CFLAGS\s*:=\s*(.*?)(?<!\\)\n", open("Makefile").read().replace("\\\n", " "), re.M | re.S)[1].split()
for _ in range(3):
    with tempfile.TemporaryDirectory() as tmp:
        o = os.path.join(tmp, "t.o")
        r = subprocess.run([os.path.abspath("tools/mwccarm/dsi/1.2/mwccarm.exe"), *flags, "-c", src, "-o", o], capture_output=True, text=True,
                           env=dict(os.environ, LM_LICENSE_FILE=os.path.abspath("tools/mwccarm/license.dat"),
                                    MWCIncludes=os.path.abspath("include")))
        if r.returncode:
            sys.exit(r.stdout + r.stderr)
        built = elf_functions(o)
    lines, func, changed = open(src).read().split("\n"), None, 0
    for k, line in enumerate(lines):
        m = re.match(r"asm void (\w+)\(", line)
        if m:
            func = m[1]
            continue
        m = re.match(r"    (\S+)(.*) // (0x[0-9a-f]+)$", line)
        if not m or func not in built or func not in addrs:
            continue
        a = int(m[3], 16)
        n = 4 if m[1] == "bl" else 2
        if m[1] == "bl" and not m[2].strip().startswith("@"):
            continue     # (a call by name: relocated)
        off = a - (addrs[func] & ~1)
        if built[func][off:off + n] != blob[a - base:a - base + n]:
            lines[k] = "\n".join(f"    dcb {b:#04x}" for b in blob[a - base:a - base + n])
            changed += 1
    open(src, "w", newline="\n").write("\n".join(lines))
    print(f"{src}: {changed} instructions as bytes")
    if not changed:
        break
