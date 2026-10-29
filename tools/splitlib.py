#!/usr/bin/env python3
"""Makes a range of the main module's library code a complete C file of asm functions.

usage: tools/splitlib.py LO HI PATH

PATH is the file under src/ without ".c" (e.g. libs/NitroSDK/fx/fx_vec). The functions keep
their symbols' names (asm bodies from tools/romasm.py). A delinks entry that has just the
range's .text (an incomplete libs/ one) is replaced by the new file's; in a gap, the new
entry goes in by address. Thumb code and unreachable epilogues are not handled (exit 2).
"""
import os, re, subprocess, sys

lo, hi, path = int(sys.argv[1], 16), int(sys.argv[2], 16), sys.argv[3]
CFG = "config/yeep/arm9"

funcs = []
for line in open(f"{CFG}/symbols.txt"):
    m = re.match(r"(\S+) kind:function\((\w+),size=(0x[0-9a-f]+)\S*\) addr:(0x[0-9a-f]+)", line)
    if m and lo <= int(m[4], 16) < hi:
        funcs.append((int(m[4], 16), m[1], m[2]))
funcs.sort()
if not funcs:
    sys.exit(f"no functions in {lo:#x}-{hi:#x}")
if any(kind != "arm" for _, _, kind in funcs):
    print("thumb code")
    sys.exit(2)
tails = subprocess.run([sys.executable, "tools/findtails.py", f"{lo:x}", f"{hi:x}"], capture_output=True, text=True).stdout.strip()
if tails:
    print("tails:", tails)
    sys.exit(2)

own = {n for _, n, _ in funcs}
decls, bodies = [], []
for a, name, _ in funcs:
    r = subprocess.run([sys.executable, "tools/romasm.py", hex(a)], capture_output=True, text=True)
    if r.returncode:
        sys.exit(f"{a:#x}: {r.stderr}")
    for d in r.stderr.splitlines():
        m = re.match(r'extern "C" (void (\w+)\(void\)|char (\w+)\[\]);', d)
        if m and (m[2] or m[3]) not in own:
            d = f"void {m[2]}(void);" if m[2] else f"extern char {m[3]}[];"
            if d not in decls:
                decls.append(d)
    bodies.append(f"asm void {name}(void)\n{{\n{r.stdout.rstrip()}\n}}\n")

src = f"src/{path}.c"
os.makedirs(os.path.dirname(src), exist_ok=True)
with open(src, "w", newline="\n") as f:
    f.write("// (asm for now)\n\n")
    if decls:
        f.write("\n".join(decls) + "\n\n")
    f.write("\n".join(bodies))

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
        sys.exit("no place for the entry")
open(f"{CFG}/delinks.txt", "w", newline="\n").write(t)
print(f"{src}: {len(funcs)} functions")
