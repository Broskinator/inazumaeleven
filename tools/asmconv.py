#!/usr/bin/env python3
"""Prints a function of the original code as MWCC inline asm (for asm fallbacks).

usage: tools/asmconv.py ADDRESS|NAME [CLASS]

Calls are written with the callee's current name from symbols.txt. A member of CLASS
(the class of the function being written) is called by its short name; other C++
functions are called by their mangled name, which needs a declaration like
    extern "C" void _ZN4Heap4FreeEPv(void);
in the file: the names that need one are listed on stderr.
"""
import glob, re, sys

ROOT = __file__.rsplit("/tools/", 1)[0]


def symbols():
    names = {}
    for p in glob.glob(f"{ROOT}/config/yeep/arm9/**/symbols.txt", recursive=True):
        for line in open(p):
            m = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", line)
            if m:
                names[int(m.group(2), 16)] = m.group(1)
    return names


def body(label):
    for f in glob.glob(f"{ROOT}/build/asm/**/*.s", recursive=True):
        t = open(f).read()
        m = re.search(r"^%s:.*?\n(.*?)\n\s*arm_func_end %s" % (re.escape(label), re.escape(label)), t, re.S | re.M)
        if m:
            return m.group(1)
    sys.exit(f"{label} not found in build/asm")


def short(mangled, cls):
    # _ZN<len><class><len><name>E... -> name, if the class matches
    m = re.match(r"_ZN(\d+)(\w+)", mangled)
    if not m:
        return None
    n = int(m.group(1))
    c, rest = m.group(2)[:n], m.group(2)[n:]
    m2 = re.match(r"(\d+)", rest)
    if c != cls or not m2:
        return None
    k = int(m2.group(1))
    return rest[len(m2.group(1)):len(m2.group(1)) + k]


def main():
    arg = sys.argv[1]
    cls = sys.argv[2] if len(sys.argv) > 2 else None
    names = symbols()
    if arg.startswith("0x"):
        label = f"func_{int(arg, 16):08x}"
    else:
        label = arg
    externs = set()
    out = []
    for line in body(label).split("\n"):
        line = line.split(";")[0].rstrip()
        if not line.strip():
            continue
        line = re.sub(r"\.L_([0-9a-f]+)", r"@L_\1", line)
        m = re.match(r"\s*(bl|b)\s+(func_([0-9a-f]{8})|\S+)$", line)
        if m and not m.group(2).startswith("@"):
            target = m.group(2)
            if m.group(3):
                target = names.get(int(m.group(3), 16), target)
            if target.startswith("_Z"):
                s = short(target, cls)
                if s:
                    target = s
                else:
                    externs.add(target)
            line = f"    {m.group(1)} {target}"
        out.append(line.strip() if line.strip().endswith(":") else "    " + line.strip())
    print("\n".join(out))
    for e in sorted(externs):
        print(f'extern "C" void {e}(void);', file=sys.stderr)


main()
