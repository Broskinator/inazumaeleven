#!/usr/bin/env python3
"""Turns the small asm functions of source files into C, where the C compiles to the same code.

usage: tools/lift.py src/file.cpp ...

Only leaf functions without branches are lifted (loads, stores, moves, simple arithmetic,
a return or a tail call). The asm is read as expressions of the parameters r0-r3, the C
is written from them, and tools/fncmp.py checks each function: the ones that don't match
(or don't have the original's size) stay asm.
"""
import os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOAD = {"ldr": "s32", "ldrh": "u16", "ldrsh": "s16", "ldrb": "u8", "ldrsb": "s8"}
STORE = {"str": "s32", "strh": "u16", "strb": "u8"}
OPS = {"add": "+", "sub": "-", "and": "&", "orr": "|", "eor": "^"}


class Fail(Exception):
    pass


class Param:
    def __init__(self, i):
        self.i, self.ptr, self.type = i, False, "s32"

    def render(self):
        return f"arg{self.i}"


class Const:
    def __init__(self, n):
        self.n = n

    def render(self):
        n = self.n - (1 << 32) if self.n & 0x80000000 else self.n
        return str(n) if -10 <= n <= 10 else (f"0x{n:X}" if n >= 0 else f"-0x{-n:X}")


class Sym:
    def __init__(self, name, off):
        self.name, self.off = name, off

    def render(self):
        return self.name + (f" + 0x{self.off:X}" if self.off else "")


class Load:
    def __init__(self, t, base, off):
        self.t, self.base, self.off = t, base, off

    def render(self):
        return f"*({self.t} *)({addr(self.base, self.off)})"


class Bin:
    def __init__(self, op, a, b):
        self.op, self.a, self.b = op, a, b

    def render(self):
        return f"({self.a.render()} {self.op} {self.b.render()})"


def addr(base, off):
    if isinstance(base, Param):
        base.ptr = True
    elif isinstance(base, Load):
        if base.t != "s32":
            raise Fail("a halfword as a pointer")
        base.t = "u8 *"
    elif not isinstance(base, Sym):
        raise Fail("address")
    b = base.render()
    if isinstance(base, Sym) and base.off:
        b = f"({b})"
    return b + (f" + 0x{off:X}" if off > 0 else f" - 0x{-off:X}" if off < 0 else "")


def imm(s):
    s = s.strip().lstrip("#")
    return int(s, 0) & 0xFFFFFFFF


def lift(name, body, decls):
    """(declaration, C body) of an asm function, or raises Fail."""
    regs = {f"r{i}": Param(i) for i in range(4)}
    params, stmts, wrote, tail = {}, [], set(), None

    def read(r):
        if r not in regs:
            raise Fail(f"register {r}")
        v = regs[r]
        if isinstance(v, Param) and v.i not in params:
            params[v.i] = v
        return v

    def operand(s):
        s = s.strip()
        if s.startswith("#"):
            return Const(imm(s))
        m = re.match(r"(r\d+), (lsl|lsr|asr) #(\w+)$", s)
        if m:
            return Bin({"lsl": "<<", "lsr": ">>", "asr": ">>"}[m[2]], read(m[1]), Const(imm(m[3])))
        return read(s)
    lines = [l.strip() for l in body.strip().split("\n")]
    for k, line in enumerate(lines):
        m = re.match(r"(\w+)\s+(.*)$", line)
        if not m:
            raise Fail(line)
        mn, op = m[1], m[2]
        if mn == "bx" and op == "lr" and k == len(lines) - 1:
            break
        if mn == "bx" and op == "r12" and k == len(lines) - 1 and isinstance(regs.get("r12"), Sym) and not regs["r12"].off:
            tail = regs["r12"].name
            break
        m = re.match(r"(r\d+|r12), =(\w+)(?:\+(0x[0-9a-f]+))?$", op)
        if mn == "ldr" and m:
            if m[2][0].isdigit():
                regs[m[1]] = Const(int(m[2], 0) + int(m[3] or "0", 16))     # (a number)
            elif m[2] in decls and m[1] != "r12":     # (r12: a tail call)
                raise Fail("the address of a function")
            else:
                regs[m[1]] = Sym(m[2], int(m[3] or "0", 16))
            wrote.add(m[1])
            continue
        m = re.match(r"(r\d+), \[(r\d+)(?:, #(-?0x[0-9a-f]+|-?\d+))?\]$", op)
        if mn in LOAD and m:
            regs[m[1]] = Load(LOAD[mn], read(m[2]), int(m[3] or "0", 0))
            wrote.add(m[1])
            continue
        if mn in STORE and m:
            v, base = read(m[1]), read(m[2])
            if isinstance(v, Param) and STORE[mn] != "s32":
                v.type = STORE[mn]
            stmts.append(("store", STORE[mn], base, int(m[3] or "0", 0), v))
            continue
        m = re.match(r"(r\d+), (.*)$", op)
        if mn in ("mov", "mvn") and m:
            v = operand(m[2])
            if mn == "mvn":
                if not isinstance(v, Const):
                    raise Fail("mvn")
                v = Const(~v.n & 0xFFFFFFFF)
            regs[m[1]] = v
            wrote.add(m[1])
            continue
        m = re.match(r"(r\d+), (r\d+), (.*)$", op)
        if mn in OPS and m:
            a, b = read(m[2]), operand(m[3])
            regs[m[1]] = Bin(OPS[mn], a, b)
            wrote.add(m[1])
            continue
        raise Fail(line)
    else:
        raise Fail("no return")
    if tail:
        if decls.get(tail) != "void(void)":
            raise Fail("tail call of a typed function")
        if any(r in wrote for r in ("r0", "r1", "r2", "r3")):
            raise Fail("tail call with arguments")
        stmts.append(("call", tail))
    n = max(params) + 1 if params else 0
    for i in range(n):
        params.setdefault(i, Param(i))
    # (the C is written after the walk: the types of the parameters are known by then)
    out = []
    for s in stmts:
        if s[0] == "store":
            _, t, base, off, v = s
            if isinstance(v, Sym):
                value = f"({t})" + (f"({v.render()})" if v.off else v.render())
            elif isinstance(v, Load) and v.t == "u8 *" or isinstance(v, Param) and v.ptr:
                value = f"({t}){v.render()}"     # (a pointer, stored as a word)
            else:
                value = v.render()
            out.append(f"    *({t} *)({addr(base, off)}) = {value};\n")
        else:
            out.append(f"    {s[1]}();\n")
    ret = "void"
    if "r0" in wrote and not tail:
        v = regs["r0"]
        if isinstance(v, Load):
            ret = v.t
        elif isinstance(v, Sym):
            ret = "char *"
        else:
            ret = "s32"
        out.append(f"    return {v.render()};\n")
    args = ", ".join(f"u8 *arg{i}" if params[i].ptr else f"{params[i].type} arg{i}" for i in range(n)) or "void"
    decl = f"{ret}{'' if ret.endswith('*') else ' '}{name}({args})"
    return decl, "".join(out)


def main():
    for src in sys.argv[1:]:
        t = open(src).read()
        sizes = {}
        cfgs = ["config/yeep/arm9/symbols.txt"]
        m = re.match(r"src/(ov\d{3})/", src.replace("\\", "/"))
        if m:
            cfgs = [f"config/yeep/arm9/overlays/{m[1]}/symbols.txt"]
        for c in cfgs:
            for line in open(f"{ROOT}/{c}"):
                mm = re.match(r"(\S+) kind:function\S*size=(0x[0-9a-f]+)\S* addr", line)
                if mm:
                    sizes[mm[1]] = int(mm[2], 16)
        decls = {n: "void(void)" for n in re.findall(r'^extern "C" void (\w+)\(void\);', t, re.M)}
        blocks = list(re.finditer(r'^extern "C" asm void (\w+)\(void\)\n\{\n(.*?)\n\}\n', t, re.M | re.S))
        cand = {}
        for b in blocks:
            if b[2].count("\n") > 12 or "@" in b[2]:
                continue
            try:
                cand[b[1]] = (b[0],) + lift(b[1], b[2], decls)
            except (Fail, KeyError):
                pass
        if not cand:
            continue
        orig = t
        for name, (block, decl, body) in cand.items():
            t = t.replace(block, f'extern "C" {decl}\n{{\n{body}}}\n', 1)
            t = re.sub(r'^extern "C" void %s\(void\);' % name, f'extern "C" {decl};', t, count=1, flags=re.M)
        open(src, "w", newline="\n").write(t)
        r = subprocess.run([sys.executable, f"{ROOT}/tools/fncmp.py", src, *cand], capture_output=True, text=True)
        good = set()
        for mm in re.finditer(r"^(\w+): OK \((\d+) bytes\)", r.stdout, re.M):
            if sizes.get(mm[1]) == int(mm[2]):
                good.add(mm[1])
        if r.returncode and not good and "OK" not in r.stdout:
            print(f"{src}: does not compile with the C\n{r.stdout[-600:]}")
            open(src, "w", newline="\n").write(orig)
            continue
        # (the ones that don't match go back to asm)
        t = orig
        for name, (block, decl, body) in cand.items():
            if name in good:
                t = t.replace(block, f'extern "C" {decl}\n{{\n{body}}}\n', 1)
                t = re.sub(r'^extern "C" void %s\(void\);' % name, f'extern "C" {decl};', t, count=1, flags=re.M)
        open(src, "w", newline="\n").write(t)
        print(f"{src}: {len(good)} of {len(cand)} functions in C")


main()
