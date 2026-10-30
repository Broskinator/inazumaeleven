#!/usr/bin/env python3
"""Turns the small asm functions of source files into C, where the C compiles to the same code.

usage: tools/lift.py src/file.cpp ...

Only functions without branches are lifted (loads, stores, moves, simple arithmetic, calls,
a return or a tail call). The asm is read as expressions of the parameters r0-r3, the C
is written from them, and tools/fncmp.py checks each function: the ones that don't match
(or don't have the original's size) stay asm. A function that is called gets the
declaration 's32 F(...)' when it has none with types, so it can be called with any
arguments (the calls are the same as with a prototype).
"""
import os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOAD = {"ldr": "s32", "ldrh": "u16", "ldrsh": "s16", "ldrb": "u8", "ldrsb": "s8"}
STORE = {"str": "s32", "strh": "u16", "strb": "u8"}
OPS = {"add": "+", "sub": "-", "and": "&", "orr": "|", "eor": "^"}
COND = {"eq": "==", "ne": "!=", "gt": ">", "ge": ">=", "lt": "<", "le": "<=",
        "hi": ">", "hs": ">=", "cs": ">=", "lo": "<", "cc": "<", "ls": "<="}
VAR = "s32(...)"


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


class Call:
    """The value a call returns (in r0, after the call)."""
    def __init__(self, k, name, regs, seg, first):
        self.k, self.name, self.regs, self.seg, self.first = k, name, regs, seg, first
        self.used, self.args = False, []

    def render(self):
        return f"v{self.k}"


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


def value(v, t="s32"):
    """v as an expression of type t (for a store or an argument)"""
    if isinstance(v, Sym):
        return f"({t})" + (f"({v.render()})" if v.off else v.render())
    if isinstance(v, Load) and v.t == "u8 *" or isinstance(v, Param) and v.ptr:
        return v.render() if t == "u8 *" else f"({t}){v.render()}"     # (a pointer, as a word)
    return v.render() if t != "u8 *" else f"(u8 *){v.render()}"


def lift(name, body, protos):
    """(declaration, C body, callees) of an asm function, or raises Fail."""
    regs = {f"r{i}": Param(i) for i in range(4)}
    params, stmts, seg, tail, calls, flags = {}, [], set(), None, [], None

    def read(r):
        if r not in regs:
            raise Fail(f"register {r}")
        v = regs[r]
        if isinstance(v, Param) and v.i not in params:
            params[v.i] = v
        if isinstance(v, Call):
            v.used = True
        return v

    def write(r, v):
        regs[r] = v
        seg.add(r)

    def call(f):
        if f == name or f not in protos:
            raise Fail(f"call of {f}")
        c = Call(len(calls), f, dict(regs), set(seg), not calls)
        calls.append(c)
        stmts.append(("call", c))
        for r in ("r1", "r2", "r3", "r12"):
            regs.pop(r, None)
        regs["r0"] = c
        seg.clear()

    def operand(s):
        s = s.strip()
        if s.startswith("#"):
            return Const(imm(s))
        m = re.match(r"(r\d+), (lsl|lsr|asr) #(\w+)$", s)
        if m:
            return Bin({"lsl": "<<", "lsr": ">>", "asr": ">>"}[m[2]], read(m[1]), Const(imm(m[3])))
        return read(s)
    lines = [l.strip() for l in body.strip().split("\n")]
    frame = None
    m = re.match(r"stmdb sp!, \{((?:r\d+, )*)lr\}$", lines[0])
    if m:
        frame = m[1]
        if lines[-1] != f"ldmia sp!, {{{frame}pc}}":
            raise Fail("epilogue")
        lines = lines[1:]
    for k, line in enumerate(lines):
        last = k == len(lines) - 1
        m = re.match(r"(\w+)\s+(.*)$", line)
        if not m:
            raise Fail(line)
        mn, op = m[1], m[2]
        if frame is not None and last:
            break
        if frame is None and mn == "bx" and op == "lr" and last:
            break
        if frame is None and mn == "bx" and op == "r12" and last and isinstance(regs.get("r12"), Sym) and not regs["r12"].off:
            tail = regs["r12"].name
            call(tail)
            break
        if mn == "bl" and re.match(r"\w+$", op):
            call(op)
            flags = None
            continue
        m = re.match(r"(r\d+), (.*)$", op)
        if mn in ("cmp", "cmn") and m:
            b = operand(m[2])
            if mn == "cmn":
                if not isinstance(b, Const):
                    raise Fail("cmn")
                b = Const(-b.n & 0xFFFFFFFF)
            flags = (read(m[1]), b)
            continue
        m = re.match(r"ldm(\w\w)ia$", mn) if frame is not None else re.match(r"bx(\w\w)$", mn)
        if m and m[1] in COND and op == (f"sp!, {{{frame}pc}}" if frame is not None else "lr"):
            if not flags:
                raise Fail("a condition without a compare")
            stmts.append(("return if", m[1]) + flags)
            continue
        m = re.match(r"(r\d+|r12), =(\w+)(?:\+(0x[0-9a-f]+))?$", op)
        if mn == "ldr" and m:
            if m[2][0].isdigit():
                write(m[1], Const(int(m[2], 0) + int(m[3] or "0", 16)))     # (a number)
            elif m[2] in protos and m[1] != "r12":     # (r12: a tail call)
                raise Fail("the address of a function")
            else:
                write(m[1], Sym(m[2], int(m[3] or "0", 16)))
            continue
        m = re.match(r"(r\d+), \[(r\d+)(?:, #(-?0x[0-9a-f]+|-?\d+))?\]$", op)
        if mn in LOAD and m:
            write(m[1], Load(LOAD[mn], read(m[2]), int(m[3] or "0", 0)))
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
            write(m[1], v)
            continue
        m = re.match(r"(r\d+), (r\d+), (.*)$", op)
        if mn in OPS and m:
            a, b = read(m[2]), operand(m[3])
            write(m[1], Bin(OPS[mn], a, b))
            continue
        raise Fail(line)
    else:
        raise Fail("no return")
    # (the arguments of the calls: the registers written for them, and the parameters
    # still in their registers before the first call)
    for c in calls:
        p = protos[c.name]
        if p in ("void(void)", VAR):
            n = max([int(r[1:]) + 1 for r in c.seg if r in ("r0", "r1", "r2", "r3")] + [0])
            if c.first:
                n = max([n] + [i + 1 for i in params if isinstance(c.regs.get(f"r{i}"), Param) and c.regs[f"r{i}"].i == i])
            types = ["s32"] * n
        else:
            types = p[1]
        for i, t in enumerate(types):
            v = c.regs.get(f"r{i}")
            if v is None:
                raise Fail("an argument after a call")
            if isinstance(v, Param) and v.i not in params:
                params[v.i] = v
            if isinstance(v, Call):
                v.used = True
            c.args.append((v, t))
        c.ret = "s32" if p in ("void(void)", VAR) else p[0]
        if c.used and c.ret == "void":
            raise Fail("the value of a void function")
    n = max(params) + 1 if params else 0
    for i in range(n):
        params.setdefault(i, Param(i))
    # (the C is written after the walk: the types of the parameters are known by then)
    out = []
    for s in stmts:
        if s[0] == "store":
            _, t, base, off, v = s
            out.append(f"    *({t} *)({addr(base, off)}) = {value(v, t)};\n")
        elif s[0] == "return if":
            _, cc, a, b = s
            t = "u32" if cc in ("hi", "lo", "cc", "hs", "cs", "ls") else "s32"
            out.append(f"    if ({value(a, t)} {COND[cc]} {value(b, t)})\n        return;\n")
        else:
            c = s[1]
            args = ", ".join(value(v, t) for v, t in c.args)
            if c.used:
                out.append(f"    {c.ret}{'' if c.ret.endswith('*') else ' '}v{c.k} = {c.name}({args});\n")
            else:
                out.append(f"    {c.name}({args});\n")
    ret = "void"
    if "r0" in seg and not tail:
        v = regs["r0"]
        if isinstance(v, Load):
            ret = v.t
        elif isinstance(v, Sym):
            ret = "char *"
        elif isinstance(v, Param) and v.ptr:
            ret = "u8 *"
        elif isinstance(v, Call):
            ret = v.ret
        else:
            ret = "s32"
        out.append(f"    return {v.render()};\n")
    if ret != "void" and any(s[0] == "return if" for s in stmts):
        raise Fail("a value and a return without one")
    args =", ".join(f"u8 *arg{i}" if params[i].ptr else f"{params[i].type} arg{i}" for i in range(n)) or "void"
    decl = f"{ret}{'' if ret.endswith('*') else ' '}{name}({args})"
    return decl, "".join(out), {c.name for c in calls}


def prototypes(t):
    """name -> 'void(void)', VAR or (return type, [parameter types]) of the declarations
    of a file that can be called"""
    protos = {}
    for ret, nm, args in re.findall(r'^extern "C" (?:asm )?(\w+ ?\**) ?(\w+)\(([^)]*)\)', t, re.M):
        ret = ret.strip()
        if ret == "void" and args == "void":
            protos.setdefault(nm, "void(void)")
        elif ret == "s32" and args == "...":
            protos[nm] = VAR
        else:
            ts = [re.match(r"(.*?) ?arg\d+$", a) for a in args.split(", ")] if args != "void" else []
            if all(ts):
                protos[nm] = (ret, [m[1] for m in ts])
    # (a function in C keeps its declaration, 'void F(void)' too)
    for ret, nm in re.findall(r'^extern "C" (?!asm )(\w+ ?\**) ?(\w+)\(void\)\n\{', t, re.M):
        protos[nm] = (ret.strip(), [])
    return protos


def apply(t, name, block, decl, body, protos, callees):
    t = t.replace(block, f'extern "C" {decl}\n{{\n{body}}}\n', 1)
    t = re.sub(r'^extern "C" void %s\(void\);' % name, f'extern "C" {decl};', t, count=1, flags=re.M)
    for f in callees:
        if protos[f] == "void(void)":
            t = re.sub(r'^extern "C" void %s\(void\);' % f, f'extern "C" s32 {f}(...);', t, count=1, flags=re.M)
            t = re.sub(r'^extern "C" asm void %s\(void\)$' % f, f'extern "C" asm s32 {f}(...)', t, count=1, flags=re.M)
    return t


def lift_file(src, sizes, failed):
    """Lifts what it can of a file; the number of functions lifted."""
    t = open(src).read()
    protos = prototypes(t)
    blocks = list(re.finditer(r'^extern "C" asm void (\w+)\(void\)\n\{\n(.*?)\n\}\n', t, re.M | re.S))
    cand = {}
    for b in blocks:
        if b[2].count("\n") > 12 or "@" in b[2] or b[1] in failed:
            continue
        try:
            cand[b[1]] = (b[0],) + lift(b[1], b[2], protos)
        except (Fail, KeyError):
            failed.add(b[1])
    # (a function that calls another one lifted now waits: the callee's declaration changes)
    cand = {n: c for n, c in cand.items() if not any(f in cand for f in c[3])}
    if not cand:
        return 0
    orig = t
    for name, (block, decl, body, callees) in cand.items():
        t = apply(t, name, block, decl, body, protos, callees)
    open(src, "w", newline="\n").write(t)
    r =subprocess.run([sys.executable, f"{ROOT}/tools/fncmp.py", src, *cand], capture_output=True, text=True)
    good = set()
    for mm in re.finditer(r"^(\w+): OK \((\d+) bytes\)", r.stdout, re.M):
        if sizes.get(mm[1]) == int(mm[2]):
            good.add(mm[1])
    failed |= set(cand) - good
    if r.returncode and not re.search(r"^\w+: .*bytes\)$", r.stdout, re.M):
        # (the functions with the errors stay asm, and the others are tried again)
        open(src, "w", newline="\n").write(orig)
        lines, bad, func = t.split("\n"), set(), {}
        for k, line in enumerate(lines):
            mm = re.match(r'extern "C" .*?(\w+)\([^)]*\)$', line)
            if mm:
                func[k] = mm[1]
        for n in set(int(x) for x in re.findall(r"^[^:\n]*:(\d+):", r.stdout + r.stderr, re.M)):
            k = max([k for k in func if k < n] or [-1])
            if func.get(k) in cand:
                bad.add(func[k])
            # (a call, in C that was there before, of a function that has parameters now)
            bad |= {f for f in re.findall(r"(\w+)\(", lines[n - 1]) if f in cand}
        if not bad:
            print(f"{src}: does not compile with the C\n{r.stdout[-600:]}")
            return 0
        failed -= set(cand) - bad
        return -1
    # (the ones that don't match go back to asm)
    t = orig
    for name, (block, decl, body, callees) in cand.items():
        if name in good:
            t = apply(t, name, block, decl, body, protos, callees)
    open(src, "w", newline="\n").write(t)
    return len(good)


def main():
    for src in sys.argv[1:]:
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
        failed, total = set(), 0
        while True:
            n = lift_file(src, sizes, failed)
            total += max(n, 0)
            if not n:
                break
        if total:
            print(f"{src}: {total} functions in C")


main()
