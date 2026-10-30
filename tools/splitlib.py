#!/usr/bin/env python3
"""Makes a range of library code a complete C file of asm functions.

usage: [IE_OV=N] tools/splitlib.py LO HI PATH

The range is in the main module, or in overlay N (or the TCM N: itcm, dtcm). PATH is the file under src/ without
".c" (e.g. libs/NitroSDK/fx/fx_vec). The functions keep their symbols' names (asm bodies from tools/romasm.py). A delinks entry that has just the
range's .text (an incomplete libs/ one) is replaced by the new file's; in a gap, the new
entry goes in by address. Unreachable epilogues are not handled (exit 2).
"""
import os, re, struct, subprocess, sys

lo, hi, path = int(sys.argv[1], 16), int(sys.argv[2], 16), sys.argv[3]
OV = os.environ.get("IE_OV")     # (IE_OV=N: overlay N)
CFG = "config/yeep/arm9" + ((f"/{OV}" if OV in ("itcm", "dtcm") else f"/overlays/ov{int(OV):03d}") if OV else "")

funcs, sizes = [], {}
for line in open(f"{CFG}/symbols.txt"):
    m = re.match(r"(\S+) kind:function\((\w+),size=(0x[0-9a-f]+)\S*\) addr:(0x[0-9a-f]+)", line)
    if m and lo <= int(m[4], 16) < hi:
        funcs.append((int(m[4], 16), m[1], m[2]))
        sizes[int(m[4], 16)] = int(m[3], 16)
funcs.sort()
if OV:
    blob = open(f"extract/yeep/arm9/{OV}.bin" if OV in ("itcm", "dtcm") else
                f"extract/yeep/arm9_overlays/ov{int(OV):03d}.bin", "rb").read()
    base = int(re.search(r"\.text\s+start:(0x[0-9a-f]+)", open(f"{CFG}/delinks.txt").read()).group(1), 16)
else:
    blob, base = open("extract/yeep/arm9/arm9.bin", "rb").read(), 0x02000000
if not funcs:
    sys.exit(f"no functions in {lo:#x}-{hi:#x}")
tails = subprocess.run([sys.executable, "tools/findtails.py", f"{lo:x}", f"{hi:x}"], capture_output=True, text=True).stdout.strip()
if tails:
    print("tails:", tails)
    sys.exit(2)
# (a data symbol between the functions, BuildInfo say: a block of dcds of that name)
for line in open(f"{CFG}/symbols.txt"):
    m = re.match(r"(\S+) kind:data\S* addr:(0x[0-9a-f]+)", line)
    if m and lo <= int(m[2], 16) < hi and not any(a <= int(m[2], 16) < a + sizes[a] for a, _, _ in funcs):
        funcs.append((int(m[2], 16), m[1], "data"))
        sizes[int(m[2], 16)] = 0
funcs.sort()

own = {n for _, n, _ in funcs}
decls, bodies = [], []
for a, name, kind in funcs:
    if kind == "data":
        r = subprocess.CompletedProcess([], 0, "", "")
    else:
        r = subprocess.run([sys.executable, "tools/romasm.py", *(["--ov", OV] if OV else []), hex(a)], capture_output=True, text=True)
    if r.returncode:
        sys.exit(f"{a:#x}: {r.stderr}")
    for d in r.stderr.splitlines():
        m = re.match(r'extern "C" (void (\w+)\(void\)|char (\w+)\[\]);', d)
        if m and (m[2] or m[3]) not in own:
            d = f"void {m[2]}(void);" if m[2] else f"extern char {m[3]}[];"
            if d not in decls:
                decls.append(d)
    body = r.stdout.rstrip()
    # (words up to the next function, or to the end: data, as dcds after this one, or
    # dcbs for a halfword)
    nxt = next((b for b, _, _ in funcs if b > a), hi)
    w = sizes[a]
    while w < nxt - a:
        if nxt - a - w >= 4 and (a + w) % 4 == 0:
            body += f"\n    dcd {struct.unpack('<I', blob[a + w - base:a + w - base + 4])[0]:#010x}"
            w += 4
        else:
            body += "".join(f"\n    dcb {b:#04x}" for b in blob[a + w - base:a + w - base + 2])
            w += 2
    asm = f"asm void {name}(void)\n{{\n{body}\n}}\n"
    bodies.append(f"#pragma thumb on\n{asm}#pragma thumb off\n" if kind == "thumb" else asm)

src = f"src/{path}.c"
os.makedirs(os.path.dirname(src), exist_ok=True)
with open(src, "w", newline="\n") as f:
    f.write("// (asm for now)\n\n")
    # (the file's own functions first: the asm calls them)
    f.write("".join(f"void {n}(void);\n" for _, n, _ in funcs) + "\n")
    if decls:
        f.write("\n".join(decls) + "\n\n")
    f.write("\n".join(bodies))
if any(kind == "thumb" for _, _, kind in funcs):
    # (MW encodes some Thumb instructions in other ways: those are written as bytes)
    r = subprocess.run([sys.executable, "tools/thumbfix.py", src], capture_output=True, text=True)
    if r.returncode:
        sys.exit(r.stdout + r.stderr)

t = open(f"{CFG}/delinks.txt").read()
entry = f"{src}:\n    complete\n    .text start:{lo:#010x} end:{hi:#010x}\n"
m = re.search(r"^\S+:\n    \.text start:%#010x end:%#010x\n" % (lo, hi), t, re.M)
if m:
    t = t[:m.start()] + entry + t[m.end():]
else:
    # (in a gap: before the first entry that starts after it)
    for m in re.finditer(r"^\S+:\n(?:    complete\n)?    \.text start:(0x[0-9a-f]+)", t, re.M):
        if int(m[1], 16) >= hi:
            t = t[:m.start()] + entry + "\n" + t[m.start():]
            break
    else:
        t = t.rstrip("\n") + "\n\n" + entry     # (after the last one)
open(f"{CFG}/delinks.txt", "w", newline="\n").write(t)
print(f"{src}: {len(funcs)} functions")
