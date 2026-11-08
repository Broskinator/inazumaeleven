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
import os, re, subprocess, sys, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
LOAD = {"ldr": "s32", "ldrh": "u16", "ldrsh": "s16", "ldrb": "u8", "ldrsb": "s8"}
STORE = {"str": "s32", "strh": "u16", "strb": "u8"}
OPS = {"add": "+", "sub": "-", "and": "&", "orr": "|", "eor": "^"}
COND = {"eq": "==", "ne": "!=", "gt": ">", "ge": ">=", "lt": "<", "le": "<=",
        "hi": ">", "hs": ">=", "cs": ">=", "lo": "<", "cc": "<", "ls": "<="}
VAR = "s32(...)"
FUNCS = {}     # (name -> address, of the functions of the module)


def itcm_func(a):
    """the name of the function in the ITCM at address a, or None"""
    if not 0x01ff8000 <= a < 0x02000000:
        return None
    return next((n for n, x in FUNCS.items() if x == a), None)
VARIANTS, VARIANT = 36, {}     # (how many ways a function can be written, and the one to try next)
OPT = {}     # (a function's optimization levels still to try, the first the one tried now: [] for -O4)


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
        self.name, self.off, self.func = name, off, False

    def render(self):
        # (its address as bytes, whatever the symbol's declared type is)
        return f"((u8 *)&{self.name})" + (f" + 0x{self.off:X}" if self.off else "")


class Load:
    def __init__(self, t, base, off):
        self.t, self.base, self.off, self.ldm = t, base, off, False

    def render(self):
        return f"*({self.t} *)({addr(self.base, self.off)})"


class Bin:
    def __init__(self, op, a, b):
        self.op, self.a, self.b = op, a, b

    def render(self):
        a, b = self.a, self.b
        if self.op in ("u>>", ">>") and isinstance(a, Bin) and a.op == "<<" and isinstance(b, Const) \
                and isinstance(a.b, Const) and a.b.n == b.n and b.n in (16, 24):
            t = {(16, "u>>"): "u16", (24, "u>>"): "u8", (16, ">>"): "s16", (24, ">>"): "s8"}[(b.n, self.op)]
            return f"(({t}){a.a.render()})"
        if self.op == ">>" and isinstance(b, Const) and isinstance(a, Bin) and a.op == "+" and isinstance(a.b, Bin) \
                and a.b.op == "u>>" and isinstance(a.b.b, Const) and a.b.b.n == 32 - b.n:
            # (MW's signed division by a power of two: (x + (x >> (k - 1) u>> (32 - k))) >> k)
            sh = a.b.a
            if b.n == 1 and sh is a.a or isinstance(sh, Bin) and sh.op == ">>" and sh.a is a.a \
                    and isinstance(sh.b, Const) and sh.b.n == b.n - 1:
                return f"({a.a.render()} / {1 << b.n})"
        if self.op in ("+", "-") and isinstance(b, Const) and isinstance(a, Bin) and a.op == "+" \
                and isinstance(a.a, Bin) and a.a.op == "*" and isinstance(a.a.b, Const) and a.a.b.n > 1 \
                and b.n % a.a.b.n == 0 and 0 < abs(b.n // a.a.b.n) <= 8 and not isinstance(a.b, Const):
            # (&p[i - k], with p's elements C bytes: MW multiplies i, then adds -k*C)
            k = (b.n // a.a.b.n) * (1 if self.op == "+" else -1)
            return f"((s32)((u8 (*)[{a.a.b.n:#x}]){a.b.render()} + {value(a.a.a)} {'+' if k > 0 else '-'} {abs(k)}))"
        if self.op == "u>>":
            return f"((u32){self.a.render()} >> {self.b.render()})"
        if self.op in ("u/", "u%"):
            return f"((u32){self.a.render()} {self.op[1]} (u32){self.b.render()})"
        if self.op == "^" and isinstance(b, Const) and b.n in (-1, 0xFFFFFFFF) and not isinstance(a, Const):
            return f"(~{value(self.a)})"     # (mvn)
        if self.op not in ("+", "-"):
            return f"({value(self.a)} {self.op} {value(self.b)})"     # (a pointer in it: as a word)
        if self.op == "+" and is_ptr(a) and is_ptr(b):
            return f"({self.a.render()} + {value(self.b)})"
        if self.op == "-" and has_ptr(b) and not has_ptr(a):
            return f"({self.a.render()} - {value(self.b)})"
        return f"({self.a.render()} {self.op} {self.b.render()})"


def fold_mod(v):
    """v, or x % 2^k if it's MW's signed remainder by a power of two: 'a = x u>> 31;
    b = (x << n) - a; a + ror(b, n)' (n = 32 - k)"""
    if isinstance(v, Bin) and v.op == "+" and isinstance(v.b, Bin) and v.b.op == "ror":
        a, b, n = v.a, v.b.a, v.b.b
        if isinstance(n, Const) and isinstance(b, Bin) and b.op == "-" and b.b is a and isinstance(b.a, Bin) \
                and b.a.op == "<<" and isinstance(b.a.b, Const) and b.a.b.n == n.n and isinstance(a, Bin) \
                and a.op == "u>>" and isinstance(a.b, Const) and a.b.n == 31 and a.a is b.a.a:
            return Bin("%", a.a, Const(1 << (32 - n.n)))
    if isinstance(v, Bin) and (v.op == "ror" or isinstance(v.b, Bin) and v.b.op == "ror"):
        raise Fail("ror")
    return v


# (the runtime's division: the quotient in r0, the remainder in r1; C's / and %)
DIV = {"_s32_div_f": ("/", "%"), "_u32_div_f": ("u/", "u%")}


class Call:
    """The value a call returns (in r0, after the call)."""
    def __init__(self, k, name, regs, seg, first):
        self.k, self.name, self.regs, self.seg, self.first = k, name, regs, seg, first
        self.used, self.args, self.cast = False, [], False

    def callee(self):
        if self.name is None:
            return f"((s32 (*)(...)){self.fp.render()})"
        return f"((s32 (*)(...)){self.name})" if self.cast else self.name

    def render(self):
        return f"v{self.k}"

    def text(self):
        """the call: 'f(args)'"""
        fp, args = getattr(self, "fp", None), self.args
        if self.name is None and isinstance(fp, Load) and isinstance(fp.off, int) and fp.off % 4 == 0 \
                and 0 <= fp.off < 4 * VSLOTS and isinstance(fp.base, Load) and fp.base.off == 0 and args:
            this = args[0][0]
            if this is fp.base.base or this.render() == fp.base.base.render():
                rest = ", ".join(value(v, t) for v, t in args[1:])
                return f"((VCall *){this.render()})->f{fp.off // 4}({rest})"
        if (self.cast or getattr(self, "untyped", False)) and self.name and any(narrow(v) for v, _ in args):
            # (an argument made narrower: by the type of the parameter, at each call (MW
            # doesn't share it between calls, as it does a cast))
            ts = [narrow(v)[0] if narrow(v) else t for v, t in args]
            vs = [value(narrow(v)[1]) if narrow(v) else value(v, t) for v, t in args]
            return f"((s32 (*)({', '.join(ts)})){self.name})({', '.join(vs)})"
        return f"{self.callee()}({', '.join(struct_args(args))})"


def narrow(v):
    """('s16', x) for an argument '(x << 16) >> 16' (and u16, s8, u8, 'x & 0xFF'), or None"""
    if isinstance(v, Bin) and v.op in (">>", "u>>") and isinstance(v.b, Const) and v.b.n in (16, 24) \
            and isinstance(v.a, Bin) and v.a.op == "<<" and isinstance(v.a.b, Const) and v.a.b.n == v.b.n:
        return ({(16, ">>"): "s16", (16, "u>>"): "u16", (24, ">>"): "s8", (24, "u>>"): "u8"}[(v.b.n, v.op)], v.a.a)
    if isinstance(v, Bin) and v.op == "&" and isinstance(v.b, Const) and v.b.n in (0xFF, 0xFFFF):
        return ("u8" if v.b.n == 0xFF else "u16", v.a)
    return None


VSLOTS = 128     # (the methods of VCall, in include/game/vcall.hpp)


def struct_args(args):
    """the arguments, words loaded together (ldm) one struct of them ('*(W3 *)(p + 0x84)':
    MW loads a struct passed by value with an ldm)"""
    out, i = [], 0
    args = [(x.v if isinstance(x, Tmp) and isinstance(x.v, Load) and x.v.ldm else x, t) for x, t in args]
    while i < len(args):
        v, t = args[i]
        n = 1
        if isinstance(v, Load) and v.ldm and v.t == "s32" and isinstance(v.off, int) and t == "s32":
            while i + n < len(args) and n < 4:
                w, tw = args[i + n]
                if not (isinstance(w, Load) and w.ldm and w.t == "s32" and tw == "s32" and w.off == v.off + 4 * n
                        and w.base.render() == v.base.render()):
                    break
                n += 1
        if n > 1:
            out.append(f"*(W{n} *)({addr(v.base, v.off)})")
        else:
            out.append(value(v, t))
        i += n
    return out


class Tmp(Param):
    """A loaded value kept in a variable (it's needed after a store or a call)."""
    def __init__(self, k, v):
        super().__init__(-1)
        self.k, self.v, self.used = k, v, False

    def render(self):
        self.used = True
        return f"t{self.k}"

    def ctype(self):
        if self.ptr or is_ptr(self.v):
            return "u8 *"
        return self.v.t if isinstance(self.v, Load) and self.v.t != "u8 *" else "s32"


def has_load(v):
    if isinstance(v, Load):
        return True
    if isinstance(v, Bin):
        return has_load(v.a) or has_load(v.b)
    if isinstance(v, Tern):
        return has_load(v.a) or has_load(v.b) or any(has_load(x) for x in v.flags[1:] if not isinstance(x, (str, tuple)))
    return False


def settle(regs, stmts, tmps):
    """the registers with loaded values to temporaries (before a store or a call)"""
    done = {}
    for r, v in list(regs.items()):
        if isinstance(v, Tmp) or not has_load(v):
            continue
        if id(v) not in done:
            t = Tmp(len(tmps), v)
            tmps.append(t)
            stmts.append(("let", t))
            done[id(v)] = t
        regs[r] = done[id(v)]
    return done


class Local:
    """The address of the function's local variables (an array on the stack), plus off."""
    def __init__(self, off):
        self.off = off

    def render(self):
        return "((u8 *)local" + (f" + 0x{self.off:X})" if self.off else ")")


class Tern:
    """cond ? a : b (a conditional move)"""
    def __init__(self, flags, cc, a, b):
        self.flags, self.cc, self.a, self.b = flags, cc, a, b

    def render(self):
        return f"({cond(self.flags, self.cc)} ? {value(self.a)} : {value(self.b)})"


def addr(base, off):
    if isinstance(base, Bin) and base.op == "+" and isinstance(base.b, Const) and isinstance(off, int) \
            and isinstance(base.a, (Param, Load)) and base.b.n < 0x10000:
        return addr(base.a, off + base.b.n)     # ('add r0, r0, #0x1900; ldrh r1, [r0, #0xf4]': one offset)
    if isinstance(base, Param):
        base.ptr = True
    elif isinstance(base, Load) and base.t in ("s32", "u8 *"):
        base.t = "u8 *"
    elif isinstance(base, Sym) and base.func:
        raise Fail("a function as an address")
    elif isinstance(base, Const):
        return f"((u8 *)0x{base.n:X})" + (f" + 0x{off:X}" if isinstance(off, int) and off > 0 else
                                         f" - 0x{-off:X}" if isinstance(off, int) and off < 0 else
                                         "" if isinstance(off, int) else f" + {value(off)}")
    elif not isinstance(base, (Sym, Local)):
        b = f"((u8 *){base.render()})"
        if not isinstance(off, int):
            return f"{b} + {value(off)}"
        return b + (f" + 0x{off:X}" if off > 0 else f" - 0x{-off:X}" if off < 0 else "")
    b = base.render()
    if isinstance(base, Sym) and base.off:
        b = f"({b})"
    if not isinstance(off, int):
        return f"{b} + {value(off)}"     # (a register)
    return b + (f" + 0x{off:X}" if off > 0 else f" - 0x{-off:X}" if off < 0 else "")


def imm(s):
    s = s.strip().lstrip("#")
    return int(s, 0) & 0xFFFFFFFF


def is_ptr(v):
    return isinstance(v, Load) and v.t == "u8 *" or isinstance(v, Param) and v.ptr or isinstance(v, Local)


def has_ptr(v):
    """whether an expression has a pointer in it (pointer arithmetic, a pointer in C)"""
    if isinstance(v, Bin):
        return has_ptr(v.a) or has_ptr(v.b)
    return is_ptr(v)


def value(v, t="s32"):
    """v as an expression of type t (for a store or an argument)"""
    if isinstance(v, Sym):
        return f"({t})" + (f"({v.render()})" if v.off else v.render())
    if is_ptr(v) or t != "u8 *" and isinstance(v, Bin) and has_ptr(v):
        return v.render() if t == "u8 *" else f"({t}){v.render()}"     # (a pointer, as a word)
    if isinstance(v, Call) and str(getattr(v, "ret", "")).endswith("*") and not t.endswith("*"):
        return f"({t}){v.render()}"     # (a call that returns a pointer)
    if t.endswith("*"):
        return f"({t}){v.render()}"
    if t == "u32":
        return f"(u32){v.render()}"
    return v.render()


UNSIGNED = ("hi", "lo", "cc", "hs", "cs", "ls")
OPPOSITE = {"eq": "ne", "gt": "le", "ge": "lt", "hi": "ls", "hs": "lo", "cs": "cc"}
OPPOSITE.update({b: a for a, b in list(OPPOSITE.items())})
# (after a cmp, the conditions each condition makes true as well: equal is N, V clear and C set)
IMPLIES = {"eq": {"le", "ge", "ls", "hs", "cs"}, "lt": {"le", "ne"}, "gt": {"ge", "ne"},
           "lo": {"ls", "ne"}, "cc": {"ls", "ne"}, "hi": {"hs", "cs", "ne"}}


def cond(flags, cc):
    if flags[0] == "logic":
        # (two branches made one: (a op b), or with cc "f" its negation)
        _, op, a, b = flags
        if cc == "f":
            op, a, b = {"&&": "||", "||": "&&"}[op], negate(a), negate(b)
        return f"({cond(*a)} {op} {cond(*b)})"
    if flags[0] == "if":
        # (cmp<c1> after a compare: the flags of the second one where c1 held, else the first's)
        _, f1, c1, f2 = flags
        if cc == OPPOSITE.get(c1):
            return f"({cond(f1, cc)} || {cond(f2, cc)})"
        if cc == c1:
            return f"({cond(f1, c1)} && {cond(f2, cc)})"
        return f"({cond(f1, c1)} ? {cond(f2, cc)} : {cond(f1, cc)})"
    if flags[0] == "seq":
        _, sets, f = flags

        def one(h, v):
            if h == "call":     # (a call in the condition: 'a == 4 && f() != 0')
                if v.used and v.ret == "void":
                    v.cast, v.ret = True, "s32"
                return f"v{v.k} = {v.text()}" if v.used else v.text()
            return f"{h.render()} = {value(v, 'u8 *' if h.ptr else 's32')}"
        sets_ = ", ".join(one(h, v) for h, v in sets)
        return f"({sets_}, {cond(f, cc)})"
    kind, a, b = flags
    if kind == "tst":
        if cc not in ("eq", "ne"):
            raise Fail("a condition of tst")
        return f"({value(a)} & {value(b)}) {COND[cc]} 0"
    t = "u32" if cc in UNSIGNED else "s32"
    if SWAP[0] and kind == "cmp" and not isinstance(b, Const):
        return f"{value(b, t)} {COND[SWAPPED[cc]]} {value(a, t)}"
    return f"{value(a, t)} {COND[cc]} {value(b, t)}"


SWAP = [False]
SWAPPED = {"eq": "eq", "ne": "ne", "gt": "lt", "lt": "gt", "ge": "le", "le": "ge",
           "hi": "lo", "lo": "hi", "cc": "hi", "hs": "ls", "cs": "ls", "ls": "hs"}


class Poison:
    """what a register holds after a struct copy went through it"""
    t = "s32"

    def render(self):
        raise Fail("a register after a struct copy")


def copies(lines):
    """the runs of 'ldmia rS!, {r0, r1, r2, r3}; stmia rD!, {r0, r1, r2, r3}' (the last pair
    without the '!') as one 'copy rD, rS, #N, {r0, r1, r2, r3}': a struct assigned"""
    out, k = [], 0
    while k < len(lines):
        j, n, src, dst, temps = k, 0, None, None, set()
        # (a big one: in a loop, 'mov rC, #K; L: ldmia; stmia; subs rC, rC, #1; bne L')
        ml = re.match(r"(@\w+):$", lines[k])
        if ml and k + 4 < len(lines) and sum(l.count(ml[1]) for l in lines) == 2:
            m1 = re.match(r"ldmia (r\d+|lr)!, \{([^}-]*)\}$", lines[k + 1])
            m2 = re.match(r"stmia (r\d+|lr)!, \{([^}-]*)\}$", lines[k + 2])
            m3 = re.match(r"subs (r\d+|lr), \1, #1$", lines[k + 3])
            if m1 and m2 and m3 and m1[2] == m2[2] and lines[k + 4] == f"bne {ml[1]}":
                rs = [x.strip() for x in m1[2].split(",")]
                kk = [i_ for i_ in range(len(out) - 1, max(-1, len(out) - 8), -1)
                      if re.match(rf"mov {m3[1]}, #(\w+)$", out[i_])]
                if kk and m1[1] not in rs and m2[1] not in rs and m3[1] not in rs + [m1[1], m2[1]] \
                        and not any(m3[1] in re.findall(r"\b(?:r\d+|lr)\b", l) for l in out[kk[0] + 1:]):
                    cnt = imm(re.match(r"mov \w+, #(\w+)$", out[kk[0]])[1])
                    del out[kk[0]]
                    src, dst, temps = m1[1], m2[1], set(rs) | {m3[1], m1[1], m2[1]}
                    n, j = cnt * 4 * len(rs), k + 5
                    m1 = re.match(r"ldmia (r\d+|lr), \{([^}-]*)\}$", lines[j]) if j + 1 < len(lines) else None
                    m2 = re.match(r"stmia (r\d+|lr), \{([^}-]*)\}$", lines[j + 1]) if m1 else None
                    if m1 and m2 and m1[1] == src and m2[1] == dst and m1[2] == m2[2]:
                        rs = [x.strip() for x in m1[2].split(",")]
                        n += 4 * len(rs)
                        temps |= set(rs)
                        j += 2
                    out.append(f"copy {dst}, {src}, #{n:#x}, {{{', '.join(sorted(temps, key=lambda r: int(r[1:]) if r[1:].isdigit() else 99))}}}")
                    k = j
                    continue
        while j + 1 < len(lines):
            m1 = re.match(r"ldmia (r\d+|lr)(!?), \{([^}-]*)\}$", lines[j])
            m2 = re.match(r"stmia (r\d+|lr)(!?), \{([^}-]*)\}$", lines[j + 1])
            if not (m1 and m2 and m1[3] == m2[3] and m1[2] == m2[2] and m1[1] != m2[1]):
                break
            rs = [x.strip() for x in m1[3].split(",")]
            if m1[1] in rs or m2[1] in rs or src not in (None, m1[1]) or dst not in (None, m2[1]):
                break
            src, dst = m1[1], m2[1]
            n += 4 * len(rs)
            temps |= set(rs)
            j += 2
            if not m1[2]:
                break
            temps |= {src, dst}     # (the bases moved on)
        m1 = re.match(r"ldmia (r\d+|lr), \{([^}-]*)\}$", lines[k]) if j == k else None
        if m1:
            # (one pair with other instructions between: 'ldmia r1, {r2, r3}; mov r0, r5; stmia r12, {r2, r3}')
            rs, done_ = [x.strip() for x in m1[2].split(",")], False
            for e in range(k + 2, min(k + 6, len(lines))):
                m2 = re.match(r"stmia (r\d+|lr), \{([^}-]*)\}$", lines[e])
                if not m2:
                    continue
                mid = lines[k + 1:e]
                rx = [set(re.findall(r"\b(?:r\d+|lr|sp)\b", l)) for l in mid]
                wx = [set(re.findall(r"^\w+ (r\d+|lr)\b", l)) for l in mid]
                if m2[2] != m1[2] or m1[1] in rs or m2[1] in rs or m1[1] == m2[1] \
                        or any(re.match(r"(@|b|ldr|str|ldm|stm|cmp|cmn|tst)", l) or re.match(r"\w+s ", l) for l in mid) \
                        or any(x & set(rs) for x in rx):
                    break
                wsrc = any(m1[1] in w for w in wx)
                if wsrc and any(m2[1] in w for w in wx):
                    break
                cp = f"copy {m2[1]}, {m1[1]}, #{4 * len(rs):#x}, {{{', '.join(rs)}}}"
                out.extend([cp] + mid if wsrc else mid + [cp])
                k, done_ = e + 1, True
                break
            if done_:
                continue
        if j > k:
            out.append(f"copy {dst}, {src}, #{n:#x}, {{{', '.join(sorted(temps, key=lambda r: int(r[1:]) if r[1:].isdigit() else 99))}}}")
            k = j
            continue
        out.append(lines[k])
        k += 1
    return out


def untail(lines):
    """conditional instructions at the start of a label that only unconditional branches
    and the code before it get to (MW merged the same code at the end of two ways, each with
    its own compare): back at the end of each way"""
    for _ in range(4):
        changed = False
        for i, l in enumerate(lines):
            m = re.match(r"(@\w+):$", l)
            if not m or i == 0:
                continue
            lb = m[1]
            run, c = [], None
            for x in lines[i + 1:]:
                sm = split_mnemonic(x.split()[0]) if not x.endswith(":") else None
                if sm is None or not sm[1] or sm[0] in ("b", "bl", "blx", "bx", "cmp", "cmn", "tst") or sm[2] \
                        or re.match(r"(ldm|stm)", x) or c not in (None, sm[1]):
                    break
                c = sm[1]
                run.append(x)
            if not run:
                continue
            uses = [j for j, x in enumerate(lines) if re.search(rf"{re.escape(lb)}(?!\w)", x) and j != i]
            if not uses or any(not re.match(rf"b {re.escape(lb)}$", lines[j]) for j in uses):
                continue
            prev = lines[i - 1]
            falls = not (re.match(r"(b|bx) ", prev) or re.match(r"ldmia sp!, \{[^}]*pc\}$", prev) or prev.endswith(":"))
            if prev.endswith(":"):
                continue
            new = []
            for j, x in enumerate(lines):
                if j == i and falls:
                    new += run
                if j in uses:
                    new += run
                if i < j <= i + len(run):
                    continue
                new.append(x)
            lines = new
            changed = True
            break
        if not changed:
            break
    return lines


def stm_sp(lines):
    """lines with 'stmia sp, {r0, r1}' (arguments on the stack, MW makes one of the stores)
    as the stores: 'str r0, [sp]', 'str r1, [sp, #4]' ('stmib': from sp + 4)"""
    out = []
    for l in copies(lines):
        m = re.match(r"stm(ia|ib|ea|fa)? sp, \{([^}]*)\}$", l)
        if m:
            regs_ = [x.strip() for x in m[2].split(",")]
            off = 4 if m[1] in ("ib", "fa") else 0
            for k, r in enumerate(regs_):
                o = off + 4 * k
                out.append(f"str {r}, [sp, #{o:#x}]" if o else f"str {r}, [sp]")
            continue
        # (ldmia/stmia of other registers (a struct copied): the loads and stores, the base
        # register last if it's loaded too; with '!' the base goes on after them)
        m = re.match(r"(ldm|stm)ia (r\d+|lr)(!?), \{([^}]*)\}$", l)
        if m and "-" not in m[4]:
            op, base, wb = m[1], m[2], m[3]
            regs_ = [x.strip() for x in m[4].split(",")]
            if wb and base in regs_:
                out.append(l)
                continue
            mn = "ldr" if op == "ldm" else "str"
            seq = [(r, 4 * k) for k, r in enumerate(regs_)]
            if op == "ldm" and base in regs_:
                seq = [x for x in seq if x[0] != base] + [x for x in seq if x[0] == base]
            for r, o in seq:
                out.append(f"{mn} {r}, [{base}, #0X{o:X}]" if op == "ldm" else f"{mn} {r}, [{base}, #{o:#x}]" if o else f"{mn} {r}, [{base}]")
            if wb:
                out.append(f"add {base}, {base}, #{4 * len(regs_):#x}")
            continue
        out.append(l)
    return out


def lift(name, body, protos, variant=0):
    """(declaration, C body, callees) of an asm function, or raises Fail. variant 1: the
    other return type (void or a value)."""
    undeclared(body, protos)
    regs = {f"r{i}": Param(i) for i in range(4)}
    params, stmts, seg, tail, calls, flags, out_args, tmps = {}, [], set(), None, [], None, {}, []

    def read(r):
        if r not in regs:
            raise Fail(f"register {r}")
        v = regs[r]
        if isinstance(v, Param) and v.i >= 0 and v.i not in params:
            params[v.i] = v
        if isinstance(v, (Call, Tmp)):
            v.used = True
        return v

    def write(r, v):
        regs[r] = v
        seg.add(r)

    def call(f):
        if f in DIV:
            a, b_ = read("r0"), read("r1")
            for r in ("r2", "r3", "r12"):
                regs.pop(r, None)
            regs["r0"], regs["r1"] = Bin(DIV[f][0], a, b_), Bin(DIV[f][1], a, b_)
            seg.clear()
            return
        if f == name or f not in protos:
            raise Fail(f"call of {f}")
        settle(regs, stmts, tmps)
        c = Call(len(calls), f, dict(regs), set(seg), not calls)
        c.stack = dict(out_args)
        out_args.clear()
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
        m = re.match(r"(r\d+), (lsl|lsr|asr|ror) #(\w+)$", s)
        if m:
            return Bin({"lsl": "<<", "lsr": "u>>", "asr": ">>", "ror": "ror"}[m[2]], read(m[1]), Const(imm(m[3])))
        return read(s)
    lines = stm_sp([l.strip() for l in body.strip().split("\n")])
    frame, size, push = None, 0, 0
    m = re.match(r"stmdb sp!, \{((?:r\d+, )*)lr\}$", lines[0])
    if m:
        frame = m[1]
        push = 4 * (frame.count(",") + 1)
        if lines[-1] != f"ldmia sp!, {{{frame}pc}}":
            raise Fail("epilogue")
        lines = lines[1:]
        m = re.match(r"sub sp, sp, #(\w+)$", lines[0])
        if m:
            size = imm(m[1])
            if lines[-2] != f"add sp, sp, #{m[1]}":
                raise Fail("the stack at the end")
            lines = lines[1:-2] + lines[-1:]
    # (the locals: from the lowest address taken or loaded; the stores below are arguments)
    low = None
    for line in lines:
        m = re.match(r"(?:add \w+, sp, #(\w+)|add \w+, sp|ldr\w* \w+, \[sp(?:, #(\w+))?\])$", line)
        if m:
            off = imm(m[1] or m[2] or "0")
            if off < size or not m[0].startswith("ldr"):
                low = off if low is None else min(low, off)
    if low is not None:
        low &= ~3     # (the locals from a word: a byte array can start in the middle of one)
    if low is not None and low >= size:
        raise Fail("locals")
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
        if mn in ("cmp", "cmn", "tst") and m:
            b = operand(m[2])
            if mn == "cmn":
                if not isinstance(b, Const):
                    raise Fail("cmn")
                b = Const(-b.n & 0xFFFFFFFF)
            flags = ("tst" if mn == "tst" else "cmp", read(m[1]), b)
            continue
        m = re.match(r"ldm(\w\w)ia$", mn) if frame is not None else re.match(r"bx(\w\w)$", mn)
        if m and m[1] in COND and op == (f"sp!, {{{frame}pc}}" if frame is not None else "lr"):
            if not flags or size:
                raise Fail("a condition without a compare")
            stmts.append(("return if", m[1], flags, regs.get("r0")))
            continue
        m = re.match(r"(r\d+|r12), =(\w+)(?:\+(0x[0-9a-f]+))?$", op)
        if mn == "ldr" and m:
            nm_ = itcm_func(int(m[2], 0)) if m[2][0].isdigit() and m[1] == "r12" and not m[3] else None
            if nm_:
                if nm_ not in protos:
                    protos[nm_] = "void(void)"     # (a tail call to a function in the ITCM)
                    UNDECL.add(nm_)
                write(m[1], Sym(nm_, 0))
            elif m[2][0].isdigit():
                write(m[1], Const(int(m[2], 0) + int(m[3] or "0", 16)))     # (a number)
            else:
                s = Sym(m[2], int(m[3] or "0", 16))
                s.func = is_func(m[2], protos) and m[1] != "r12"     # (r12: a tail call)
                write(m[1], s)
            continue
        m = re.match(r"(r\d+), \[sp(?:, #(\w+))?\]$", op)
        if m and (mn in LOAD or mn in STORE):
            off = imm(m[2] or "0")
            if mn in LOAD:
                if off >= size + push and frame is not None or frame is None and size == 0:
                    if (off - size - push) % 4 or mn not in LOAD:
                        raise Fail("a parameter on the stack")
                    p = Param(4 + (off - size - push) // 4)
                    params.setdefault(p.i, p)
                    if LOAD[mn] != "s32":
                        params[p.i].type = LOAD[mn]
                    write(m[1], params[p.i])
                elif low is not None and low <= off < size:
                    write(m[1], Load(LOAD[mn], Local(0), off - low))
                else:
                    raise Fail("a load from the stack")
            else:
                v = read(m[1])
                if low is not None and low <= off < size:
                    stmts.append(("store", STORE[mn], Local(0), off - low, v))
                elif (off < size or size == 0 and off == 0 and (frame or "").startswith("r3,")) and mn == "str" and off % 4 == 0:
                    out_args[off // 4] = v     # (r3 pushed: a word for an argument on the stack)
                else:
                    raise Fail("a store to the stack")
            continue
        m = re.match(r"(r\d+), sp(?:, #(\w+))?$", op)
        if mn == "add" and m:
            off = imm(m[2] or "0")
            write(m[1], Local(off - low))
            continue
        m = re.match(r"(r\d+), \[(r\d+)(?:, #(-?0[xX][0-9a-fA-F]+|-?\d+))?\]$", op)
        if mn in LOAD and m:
            v = Load(LOAD[mn], read(m[2]), int(m[3] or "0", 0))
            v.ldm = "0X" in op
            write(m[1], v)
            continue
        mc = re.match(r"(r\d+|lr), (r\d+|lr), #(\w+), \{([^}]*)\}$", op)
        if mn == "copy" and mc:
            m_ = settle(regs, stmts, tmps)
            if flags and m_:
                flags = subst_flags(flags, m_)
            t_ = "s64" if imm(mc[3]) == 8 else f"WN<{imm(mc[3]) // 4}>"
            stmts.append(("store", t_, read(mc[1]), 0, Load(t_, read(mc[2]), 0)))
            for r in [x.strip() for x in mc[4].split(",")]:
                write(r, Poison())
                seg.discard(r)
            continue
        if mn in STORE and m:
            m_ = settle(regs, stmts, tmps)
            if flags and m_:
                flags = subst_flags(flags, m_)
            v, base = read(m[1]), read(m[2])
            if isinstance(v, Param) and v.i >= 0 and STORE[mn] != "s32":
                v.type = STORE[mn]
            stmts.append(("store", STORE[mn], base, int(m[3] or "0", 0), v))
            continue
        m = re.match(r"(r\d+), (.*)$", op)
        mm = re.match(r"(mov|mvn)(\w\w)?$", mn)
        if mm and m and (not mm[2] or mm[2] in COND):
            v = operand(m[2])
            if mm[1] == "mvn":
                v = Const(~v.n & 0xFFFFFFFF) if isinstance(v, Const) else Bin("^", v, Const(0xFFFFFFFF))
            if mm[2]:
                if not flags:
                    raise Fail("a condition without a compare")
                old = read(m[1])
                if isinstance(old, Tern) and old.flags is flags and OPPOSITE[old.cc] == mm[2]:
                    v = Tern(flags, old.cc, old.a, v)
                else:
                    v = Tern(flags, mm[2], v, old)
            write(m[1], v)
            continue
        m = re.match(r"(r\d+), (r\d+), (.*)$", op)
        if mn == "rsb" and m:
            write(m[1], fold_mod(Bin("-", operand(m[3]), read(m[2]))))
            continue
        if mn in OPS and m:
            a, b = read(m[2]), operand(m[3])
            write(m[1], fold_mod(Bin(OPS[mn], a, b)))
            continue
        if mn == "mul" and m:
            write(m[1], Bin("*", read(m[2]), operand(m[3])))
            continue
        if mn == "bic" and m:
            b = operand(m[3])
            if not isinstance(b, Const):
                raise Fail("bic")
            write(m[1], Bin("&", read(m[2]), Const(~b.n & 0xFFFFFFFF)))
            continue
        m = re.match(r"(r\d+), (r\d+), (r\d+), (r\d+)$", op)
        if mn == "mla" and m:
            write(m[1], Bin("+", Bin("*", read(m[2]), read(m[3])), read(m[4])))
            continue
        raise Fail(line)
    else:
        raise Fail("no return")
    # (the arguments of the calls: the registers written for them, and the parameters
    # still in their registers before the first call; then the words stored on the stack)
    for c in calls:
        p = protos[c.name]
        if isinstance(p, tuple) and (c.stack or max([int(r[1:]) + 1 for r in c.seg if r in ("r0", "r1", "r2", "r3")] + [0]) > len(p[1])
                                     and c.name not in CDEF):
            p, c.cast = VAR, True
        if p in ("void(void)", VAR):
            n = max([int(r[1:]) + 1 for r in c.seg if r in ("r0", "r1", "r2", "r3")] + [0])
            if p == "void(void)" and (mangled_args(c.name) or 0) <= 4:
                n = max(n, mangled_args(c.name) or 0)
            if p == "void(void)" and ASMP.get(c.name, GLOBALP.get(c.name)) is not None and not c.stack:
                n = min(n, ASMP.get(c.name, GLOBALP.get(c.name)))
            if c.first:
                n = max([n] + [i + 1 for i in params if i < 4 and isinstance(c.regs.get(f"r{i}"), Param) and c.regs[f"r{i}"].i == i])
            if c.stack:
                if sorted(c.stack) != list(range(len(c.stack))):
                    raise Fail("arguments on the stack")
                n = 4 + len(c.stack)
            types = ["s32"] * n
        else:
            types = p[1]
        for i, t in enumerate(types):
            v = c.regs.get(f"r{i}") if i < 4 else c.stack.get(i - 4)
            if v is None:
                raise Fail("an argument after a call")
            if isinstance(v, Param) and v.i >= 0 and v.i not in params:
                params[v.i] = v
            if isinstance(v, (Call, Tmp)):
                v.used = True
            if p in ("void(void)", VAR) and isinstance(v, Sym) and not v.func:
                t = "u8 *"     # (an address as a pointer: MW keeps a number in a register for all its uses)
            c.args.append((v, t))
        c.ret = "s32" if p in ("void(void)", VAR) else p[0]
        c.untyped = p in ("void(void)", VAR)
        if c.used and c.ret == "void":
            c.cast, c.ret = True, "s32"     # (it returns something after all: through a cast)
    n = max(params) + 1 if params else 0
    for i in range(n):
        params.setdefault(i, Param(i))
    ret = "void"
    if ("r0" in seg) != bool(variant & 1) and not tail:
        v = regs["r0"]
        if v is None:
            raise Fail("no value")
        if isinstance(v, Load):
            ret = v.t
        elif isinstance(v, Sym):
            ret = "char *"
        elif is_ptr(v):
            ret = "u8 *"
        elif isinstance(v, Call):
            ret = v.ret
        else:
            ret = "s32"
    # (the values returned are used)
    for v in [s[3] for s in stmts if s[0] == "return if"] + [regs.get("r0")]:
        if ret != "void" and isinstance(v, (Call, Tmp)):
            v.used = True
    for t in tmps:
        if t.used and isinstance(t.v, Param) and t.v.i >= 0:
            params.setdefault(t.v.i, t.v)
    # (the C is written after the walk: the types of the parameters are known by then;
    # twice, the first time for which temporaries are used)
    for _ in range(2):
        out = render_linear(stmts, ret, regs, low, size)
    args = ", ".join(f"u8 *arg{i}" if params[i].ptr else f"{params[i].type} arg{i}" for i in range(n)) or "void"
    decl = f"{ret}{'' if ret.endswith('*') else ' '}{name}({args})"
    return decl, "".join(out), {c.name for c in calls}


def render_linear(stmts, ret, regs, low, size):
    out = []
    if low is not None:
        out.append(f"    s32 local[{(size - low) // 4}];\n")
    for s in stmts:
        if s[0] == "let":
            t = s[1]
            if t.used:
                ty = t.ctype()
                out.append(f"    {ty}{'' if ty.endswith('*') else ' '}t{t.k} = {value(t.v, ty)};\n")
            continue
        if s[0] == "store":
            _, t, base, off, v = s
            if t == "s32" and isinstance(v, Sym) and not v.func:
                t = "u8 *"     # (an address stored: as a pointer)
            out.append(f"    *({t} *)({addr(base, off)}) = {value(v, t)};\n")
        elif s[0] == "return if":
            _, cc, fl, v = s
            if ret != "void" and v is None:
                raise Fail("a return without a value")
            out.append(f"    if ({cond(fl, cc)})\n        return{' ' + value(v, ret) if ret != 'void' else ''};\n")
        else:
            c = s[1]
            if c.used:
                out.append(f"    {c.ret}{'' if c.ret.endswith('*') else ' '}v{c.k} = {c.text()};\n")
            else:
                out.append(f"    {c.text()};\n")
    if ret != "void":
        out.append(f"    return {value(regs['r0'], ret)};\n")
    return out


class Var(Param):
    """A register's variable (r4-r12; r0-r3 are the parameters' variables)."""
    def __init__(self, reg):
        super().__init__(-1)
        self.reg = reg

    def render(self):
        return self.reg


REGS = [f"r{i}" for i in range(13)] + ["lr"]
CONDS = ("eq", "ne", "gt", "ge", "lt", "le", "hi", "hs", "cs", "lo", "cc", "ls", "mi", "pl")
BASES = sorted(list(LOAD) + list(STORE) + ["add", "sub", "rsb", "and", "orr", "eor", "bic", "mul", "mla",
                                         "mov", "mvn", "cmp", "cmn", "tst", "b", "bl", "blx", "bx", "copy"], key=len, reverse=True)
OPPOSITE.update({"mi": "pl", "pl": "mi", "t": "f", "f": "t"})
COND.update({"mi": "<", "pl": ">="})


def split_mnemonic(mn):
    """(base, condition, s) of a mnemonic such as 'addeqs' or 'ldreqh', or None"""
    for b in BASES:
        for c in ("",) + CONDS:
            if mn == b + c or mn == b + c + "s" and b[:3] not in ("ldr", "str"):     # ('strhs': str on hs)
                return b, c, mn.endswith("s") and mn != b + c
            if len(b) > 3 and b[:3] in ("ldr", "str") and mn == b[:3] + c + b[3:]:
                return b, c, False
    return None


def subst(v, m):
    """v with the values in m (id -> variable) replaced"""
    if id(v) in m:
        return m[id(v)]
    if isinstance(v, Bin):
        a, b = subst(v.a, m), subst(v.b, m)
        return v if a is v.a and b is v.b else Bin(v.op, a, b)
    if isinstance(v, Load):
        b = subst(v.base, m)
        o = v.off if isinstance(v.off, int) else subst(v.off, m)
        return v if b is v.base and o is v.off else Load(v.t, b, o)
    if isinstance(v, Tern):
        return Tern(subst_flags(v.flags, m), v.cc, subst(v.a, m), subst(v.b, m))
    return v


def subst_flags(f, m):
    if f[0] == "if":
        return ("if", subst_flags(f[1], m), f[2], subst_flags(f[3], m))
    if f[0] == "logic":
        return ("logic", f[1], (subst_flags(f[2][0], m), f[2][1]), (subst_flags(f[3][0], m), f[3][1]))
    if f[0] == "seq":
        return ("seq", [(h, v if h == "call" else subst(v, m)) for h, v in f[1]], subst_flags(f[2], m))
    return (f[0], subst(f[1], m), subst(f[2], m))


def flag_values(f):
    """the values compared, at the top"""
    if f[0] == "if":
        return flag_values(f[1]) + flag_values(f[3])
    return [f[1], f[2]]


def flag_refs(f):
    if f[0] == "if":
        return flag_refs(f[1]) | flag_refs(f[3])
    return refs(f[1]) | refs(f[2])


def refs(v):
    """the variables in v"""
    if isinstance(v, Param):
        return {v}
    if isinstance(v, Bin):
        return refs(v.a) | refs(v.b)
    if isinstance(v, Load):
        return refs(v.base) | (refs(v.off) if not isinstance(v.off, int) else set())
    if isinstance(v, Tern):
        return flag_refs(v.flags) | refs(v.a) | refs(v.b)
    if isinstance(v, Call):
        return {v}
    return set()


def negate(term):
    return (term[0], OPPOSITE[term[1]])


def given(v, flags, cc, true):
    """v where the condition (flags, cc) is known to be true (or false)"""
    if isinstance(v, Tern) and v.flags is flags:
        if v.cc == cc:
            return given(v.a if true else v.b, flags, cc, true)
        if v.cc == OPPOSITE[cc]:
            return given(v.b if true else v.a, flags, cc, true)
    # (a call's value compared equal to a number: that number (MW knows it there); it
    # doesn't, after all: 'return v' where it's known stays a return of the register)
    if False and isinstance(v, Call) and flags[0] == "cmp" and flags[1] is v and isinstance(flags[2], Const) \
            and (cc, true) in (("eq", True), ("ne", False)):
        return flags[2]
    return v


def switches(lines, a0, ret):
    """lines with each jump table (cmp rX, #N; addls pc, pc, rX, lsl #2; N + 2 branches, the
    default's first) as one line '@switch rX default case0 case1 ...'. The branches can be
    words (dcd 0xeaXXXXXX: romasm took the table for data); their targets get labels. An
    entry that is a return (ret) is a case of its own. a0: the address of the first line,
    or None."""
    if not any(re.match(r"addls pc, pc, r\d+, lsl #2$", l) for l in lines):
        return lines
    # (the address of each line, from a label)
    k0 = next((k for k, l in enumerate(lines) if re.match(r"@L_[0-9a-f]+:$", l)), None)
    if k0 is not None:
        a0 = int(lines[k0][3:-1], 16) - 4 * sum(1 for l in lines[:k0] if not l.endswith(":"))
    if a0 is None:
        raise Fail("a switch without a label")
    # (the word of the return: in a table, it's a return of its own)
    m = re.match(r"ldmia sp!, \{((?:r\d+, )*)pc\}$", ret)
    word = 0xE8BD8000 | sum(1 << int(r[1:]) for r in re.findall(r"r\d+", m[1])) if m else 0xE12FFF1E
    addrs, a = [], a0
    for l in lines:
        addrs.append(a)
        if not l.endswith(":"):
            a += 4
    new_labels, out, j = {}, [], 0
    while j < len(lines):
        m = re.match(r"addls pc, pc, (r\d+), lsl #2$", lines[j])
        if not m:
            out.append((lines[j], addrs[j]))
            j += 1
            continue
        cmps = [l for l in lines[:j] if re.match(r"cmp %s, #" % m[1], l)]
        if not cmps:
            raise Fail("a switch")
        n = imm(cmps[-1].split("#")[1]) + 2
        targets, extra = [], []
        for e, l in enumerate(lines[j + 1:j + 1 + n]):
            if l == ret or l == f"dcd {word:#010x}":
                t = addrs[j + 1 + e]
                new_labels[t] = f"L_{t:08x}"
                targets.append(f"L_{t:08x}")
                extra.append((ret, t))
                continue
            if l.endswith(":"):
                raise Fail("a switch")
            mm = re.match(r"b @(\w+)$", l)
            md = re.match(r"dcd 0x(ea[0-9a-f]{6})$", l)
            if mm:
                targets.append(mm[1])
            elif md:
                off = int(md[1], 16) & 0xFFFFFF
                off = off - (1 << 24) if off & 0x800000 else off
                t = addrs[j + 1 + e] + 8 + 4 * off
                new_labels[t] = f"L_{t:08x}"
                targets.append(f"L_{t:08x}")
            else:
                raise Fail("a switch")
        if len(targets) != n:
            raise Fail("a switch")
        out.append(("@switch " + m[1] + " " + " ".join(targets), None))
        out += extra
        j += 1 + n
    # (the labels the tables need)
    have = {int(l[3:-1], 16) for l, _ in out if re.match(r"@L_[0-9a-f]+:$", l)}
    res = []
    for l, a in out:
        if a in new_labels and a not in have and not l.endswith(":"):
            res.append(f"@{new_labels[a]}:")
            have.add(a)
        res.append(l)
    if any(t not in have for t in new_labels):
        raise Fail("a case in the middle of an instruction")
    return res


def unpredicate(insns):
    """insns with each run of conditional instructions (not branches or returns) made a
    branch around it, the way it was written: 'moveq r0, #1; ldreq r1, [r2]' is
    'bne L; mov r0, #1; ldr r1, [r2]; L:'. Branches to a label followed by a branch on the
    same condition go on to its target (the flags are known there), and the same for the
    end of a run, so 'moveq; movne' becomes an if/else."""
    out, k, n = [], 0, 0
    last_cmp, crossed, written = None, False, set()

    def wr(x):
        return defs(x) | (set(re.findall(r"\[(r\d+)", x[4])) if re.search(r"\]!|\], #", x[4]) else set())

    def mem(x):
        mm_ = re.search(r"\[(r\d+|lr)(?:, #(-?\w+))?\]$", x[4])
        return (mm_[1], imm(mm_[2] or "0"), 1 if x[1] in ("ldrb", "strb", "ldrsb") else 2 if x[1] in ("ldrh", "strh", "ldrsh") else 4) if mm_ else None

    def rg(x):
        return set(re.findall(r"\b(?:r\d+|lr|sp)\b", x[4]))

    def commute(xs, ys):
        """whether the instructions xs (none of them conditional or setting flags) can go
        on the other side of ys: registers, and memory (a store and another access of one
        base, other bytes of it)"""
        for x in xs:
            for y in ys:
                if y[0] is not None or y[1] in ("b", "end"):
                    continue
                if wr(x) & rg(y) or rg(x) & wr(y):
                    return False
                if (x[1] in STORE or y[1] in STORE) and (x[1] in STORE or x[1] in LOAD) and (y[1] in STORE or y[1] in LOAD):
                    mx, my = mem(x), mem(y)
                    if mx is None or my is None or my[0] != mx[0] or my[1] < mx[1] + mx[2] and mx[1] < my[1] + my[2]:
                        return False
                if y[1] in ("bl", "blx") or x[1] in ("bl", "blx"):
                    return False
        return True

    def sets_flags(ins):
        return ins[1] in ("cmp", "cmn", "tst", "bl", "blx") or ins[3]

    def defs(ins):
        if ins[1] in STORE or ins[1] in ("cmp", "cmn", "tst", "b", "ret", "switch"):
            return set()
        if ins[1] in ("bl", "blx"):
            return {"r0", "r1", "r2", "r3", "r12"}
        if ins[1] == "copy":
            return set(re.findall(r"\b(r\d+|lr)\b", ins[4].split("{")[1]))
        m = re.match(r"(r\d+|lr)\b", ins[4])
        return {m[1]} if m else set()

    def note(ins):
        nonlocal last_cmp, crossed, written
        if ins[0] is not None:
            crossed = crossed or not re.match(r"[PQ]_", ins[0])
        elif sets_flags(ins):
            last_cmp = ins if ins[1] in ("cmp", "cmn", "tst") and not ins[2] else None
            crossed, written = False, set()
        else:
            written |= defs(ins)
            if re.search(r"\]!|\], #", ins[4]):
                written |= set(re.findall(r"\[(r\d+)", ins[4]))
    while k < len(insns):
        ins = insns[k]
        if ins[0] is not None or not ins[2] or ins[1] in ("b", "ret", "switch"):
            out.append(ins)
            note(ins)
            k += 1
            continue
        c = ins[2]
        if crossed:
            # (the compare is before a label: again here, if its registers are the same)
            if last_cmp is None or set(re.findall(r"r\d+|lr", last_cmp[4])) & written:
                raise Fail("a condition from before a label")
            out.append(last_cmp)
            note(last_cmp)
        run, later = [], []

        def regs_of(i_):
            return set(re.findall(r"\b(?:r\d+|lr|sp)\b", i_[4]))
        while k < len(insns) and insns[k][0] is None and insns[k][2] == c and insns[k][1] not in ("b", "ret", "switch"):
            run.append((None, insns[k][1], "", insns[k][3], insns[k][4]))
            k += 1
            if sets_flags(run[-1]):
                break     # (cmpeq: the flags after it are the second compare's, where it ran)
            # (an instruction of its own in the middle of the run (scheduled there): after it)
            j = k
            while j < len(insns) and j - k < 3 and insns[j][0] is None and not insns[j][2] \
                    and insns[j][1] not in ("b", "ret", "switch", "bl", "blx") and not sets_flags(insns[j]) \
                    and not re.search(r"\]!|\], #", insns[j][4]):
                j += 1
            if j > k and j < len(insns) and insns[j][0] is None and insns[j][2] == c \
                    and insns[j][1] not in ("b", "ret", "switch"):
                mid = insns[k:j]
                # (the rest of the run, as far as it goes on)
                e = j
                while e < len(insns) and insns[e][0] is None and insns[e][2] == c and insns[e][1] not in ("b", "ret", "switch"):
                    e += 1
                    if sets_flags(insns[e - 1]):
                        break
                if commute(mid, insns[j:e]):
                    later += mid
                    k = j
        # (instructions of their own after the run, before something on its condition (a
        # conditional return): before the run, so the flags go on into it)
        j = k
        while j < len(insns) and j - k < 3 and insns[j][0] is None and not insns[j][2] \
                and insns[j][1] not in ("b", "ret", "switch", "bl", "blx") and not sets_flags(insns[j]) \
                and insns[j][1] not in LOAD and insns[j][1] not in STORE:
            j += 1
        if later:
            # (the ones from the middle too: MW moved them in from before it; right after the
            # compare, if what's between lets them)
            q = len(out)
            while q > 0 and not (out[q - 1][0] is None and sets_flags(out[q - 1])):
                if out[q - 1][0] is not None and not re.match(r"[PQ]_", out[q - 1][0]):
                    q = -1
                    break
                q -= 1
            loads_ = any(x[1] in LOAD for x in later)
            if q > 0 and (loads_ or not commute(later, out[q:] + run)):
                q = -1
            if q > 0:
                out[q:q] = later
                for x in later:
                    note(x)
                later = []
            elif k < len(insns) and insns[k][0] is None and insns[k][2] in (c, OPPOSITE[c]) and not loads_ \
                    and commute(later, run):
                for x in later:
                    out.append(x)
                    note(x)
                later = []
        if j > k and j < len(insns) and insns[j][0] is None and insns[j][2] in (c, OPPOSITE[c]):
            mid = insns[k:j]
            used_ = set().union(*[regs_of(x) for x in run])
            if not any(regs_of(x) & used_ for x in mid):
                for x in mid:
                    out.append(x)
                    note(x)
                k = j
        lbl = f"P_{n}"
        n += 1
        out.append((None, "b", OPPOSITE[c], False, "@" + lbl))
        for r in run:
            out.append(r)
            note(r)
        # (the end of the run: the condition still holds there, if the run kept the flags)
        out.append((None, "end", "" if any(sets_flags(r) for r in run) else c, False, lbl))
        out.append((lbl, None, "", False, ""))
        if any(sets_flags(r) for r in run):
            last_cmp = None
        for x in later:
            out.append(x)
            note(x)
    # (threading: a branch on c to a label followed by a branch on c, or a return on c)
    for _ in range(100):
        changed = False
        pos = {ins[0]: j for j, ins in enumerate(out) if ins[0] is not None}
        for j, ins in enumerate(out):
            if not (ins[0] is None and ins[1] in ("b", "end") and ins[2]):
                continue
            tgt = ins[4].lstrip("@")
            if tgt not in pos:
                continue
            t = pos[tgt]
            while t < len(out) and (out[t][0] is not None or out[t][1] == "end"):
                t += 1
            if t >= len(out):
                continue
            nx = out[t]
            # (the flags from a cmp just before: a condition that makes the other true too)
            q = j - 1
            while q >= 0 and out[q][0] is None and not sets_flags(out[q]) and out[q][1] != "end":
                q -= 1
            after_cmp = q >= 0 and out[q][0] is None and out[q][1] == "cmp" and not out[q][2]

            def imp(c1, c2):
                return c1 == c2 or (after_cmp and c2 in IMPLIES.get(c1, ()))
            if nx[0] is None and nx[1] in ("b", "ret") and nx[2] and nx[2] != ins[2] and nx[2] != OPPOSITE[ins[2]]:
                if imp(ins[2], nx[2]):
                    nx = nx[:2] + (ins[2],) + nx[3:]
                elif imp(ins[2], OPPOSITE[nx[2]]):
                    nx = nx[:2] + (OPPOSITE[ins[2]],) + nx[3:]
            if nx[1] == "b" and (nx[2] == ins[2] or not nx[2]) and nx[4].lstrip("@") != tgt:     # (or always)
                out[j] = ins[:4] + ("@" + nx[4].lstrip("@"),)
                changed = True
            elif nx[1] in ("b", "ret") and nx[2] == OPPOSITE[ins[2]]:
                nl = f"Q_{t}"
                if not (t + 1 < len(out) and out[t + 1][0] == nl):
                    out.insert(t + 1, (nl, None, "", False, ""))
                out[j] = ins[:4] + ("@" + nl,)
                changed = True
                break
            elif nx[1] == "ret" and nx[2] == ins[2]:
                out[j] = (None, "ret", ins[2] if ins[1] == "b" else "", False, "")
                changed = True
        if not changed:
            break
    # (a run's end that goes on somewhere else: a branch there)
    res = []
    for ins in out:
        if ins[1] == "end":
            if ins[4].startswith("@"):
                res.append((None, "b", "", False, ins[4]))
            continue
        res.append(ins)
    # (the labels nothing goes to any more: gone, so the flags go on in the block)
    # (two labels in a row: one)
    alias = {}
    for j in range(len(res) - 1, 0, -1):
        if res[j][0] is not None and res[j - 1][0] is not None:
            alias[res[j - 1][0]] = alias.get(res[j][0], res[j][0])
    if alias:
        res = [ins for ins in res if ins[0] not in alias]
        res = [ins[:4] + ("@" + alias.get(ins[4][1:], ins[4][1:]),) if ins[0] is None and ins[1] == "b" else
               ins[:4] + (" ".join([ins[4].split()[0]] + [alias.get(x, x) for x in ins[4].split()[1:]]),) if ins[0] is None and ins[1] == "switch" else ins
               for ins in res]
    # (and what comes after a return or a branch, up to a label: never runs)
    while True:
        used = {ins[4].lstrip("@") for ins in res if ins[0] is None and ins[1] == "b"}
        used |= {x for ins in res if ins[0] is None and ins[1] == "switch" for x in ins[4].split()[1:]}
        new, dead = [], False
        for ins in res:
            if ins[0] is not None:
                if ins[0] not in used:
                    continue
                dead = False
            elif dead:
                continue
            new.append(ins)
            if ins[0] is None and ins[1] in ("b", "ret") and not ins[2]:
                dead = True
        if len(new) == len(res):
            return new
        res = new


def hoist_chains(insns):
    """insns with an instruction in the middle of a chain of compares ('cmp; cmpne; strb;
    cmpne') before the chain, where it doesn't change what they compare: MW scheduled it
    there, and the chain is one condition."""
    out = list(insns)
    for j in range(len(out)):
        x = out[j]
        if x[0] is not None or x[2] or x[1] in ("b", "ret", "switch", "bl", "blx", "cmp", "cmn", "tst") or x[3]:
            continue
        s_ = j - 1
        while s_ >= 0 and out[s_][0] is None and out[s_][1] in ("cmp", "cmn", "tst") and out[s_][2]:
            s_ -= 1
        if s_ == j - 1 or s_ < 0 or out[s_][0] is not None or out[s_][1] not in ("cmp", "cmn", "tst") or out[s_][2]:
            continue
        if j + 1 >= len(out) or out[j + 1][0] is not None or out[j + 1][1] not in ("cmp", "cmn", "tst") or not out[j + 1][2]:
            continue     # (only in the middle of a chain)
        rx = set(re.findall(r"\br\d+\b|\blr\b", x[4]))
        if any(rx & set(re.findall(r"\br\d+\b|\blr\b", out[q][4])) for q in range(s_, j)) and x[1] not in STORE:
            continue
        m = re.match(r"(r\d+|lr)\b", x[4])
        if x[1] not in STORE and m and any(m[1] in re.findall(r"\br\d+\b|\blr\b", out[q][4]) for q in range(s_, j)):
            continue
        out.insert(s_, out.pop(j))
    return hoist_runs(out)


def hoist_runs(insns):
    """insns with an instruction in the middle of a run of conditional ones ('cmp; ldreq;
    strb; ldreqh') before the run, where it doesn't depend on them: MW scheduled it there."""
    out = list(insns)
    for j in range(1, len(out) - 1):
        x = out[j]
        if x[0] is not None or x[2] or x[3] or x[1] in ("b", "ret", "switch", "bl", "blx", "cmp", "cmn", "tst"):
            continue
        c = out[j - 1][2]
        if not c or out[j + 1][0] is not None or out[j + 1][2] != c or out[j - 1][1] in ("b", "ret", "bl", "blx"):
            continue
        s_ = j - 1
        while s_ > 0 and out[s_ - 1][0] is None and out[s_ - 1][2] == c and out[s_ - 1][1] not in ("b", "ret", "bl", "blx", "cmp", "cmn", "tst"):
            s_ -= 1
        run = out[s_:j]
        if any(i_[3] or i_[1] in ("cmp", "cmn", "tst") for i_ in run):
            continue
        rx = set(re.findall(r"\br\d+\b|\blr\b|\bsp\b", x[4]))
        if any(rx & set(re.findall(r"\br\d+\b|\blr\b|\bsp\b", i_[4])) for i_ in run):
            continue     # (it reads or writes what they do)
        if x[1] in STORE and any((i_[1] in LOAD or i_[1] in STORE) and "=" not in i_[4] for i_ in run):
            continue
        if x[1] in LOAD and any(i_[1] in STORE for i_ in run):
            continue
        out.insert(s_, out.pop(j))
    return out


def tails(insns):
    """insns with each 'b L' (forward) to a short run of instructions without branches in
    it that is also reached another way made a copy of the run: MW makes one of the same
    code at the end of both ways of an if ('if (c) f(a); else f(b);'). Again on what
    comes of it, for the end of a run that is the start of another one."""
    for _ in range(4):
        new = tails1(insns)
        if new == insns:
            break
        insns = new
    return insns


def tails1(insns):
    pos = {ins[0]: j for j, ins in enumerate(insns) if ins[0] is not None}
    out = []
    for j, ins in enumerate(insns):
        if ins[0] is None and ins[1] == "b" and not ins[2] and ins[4].lstrip("@") in pos:
            t = pos[ins[4].lstrip("@")]
            e = t + 1
            while e < len(insns) and insns[e][0] is None and insns[e][1] not in ("b", "ret", "switch"):
                e += 1
            run = insns[t + 1:e]
            before = insns[t - 1] if t > 0 else None
            reached = before is not None and not (before[0] is None and before[1] in ("b", "ret", "switch") and not before[2])
            # (back to code above (a case of a switch): if it doesn't go on to here)
            back = t < j and any(x[0] is None and x[1] in ("b", "ret") and not x[2] for x in insns[e:j])
            if (t > j or back) and 1 <= len(run) <= 8 and e < len(insns) and reached:
                end = insns[e]
                if end[0] is not None:
                    out += run + [(None, "b", "", False, "@" + end[0])]
                    continue
                if end[1] in ("b", "ret") and not end[2]:
                    out += run + [end]
                    continue
        out.append(ins)
    # (the labels nothing goes to any more: gone, so what falls into them is one block)
    used = {ins[4].lstrip("@") for ins in out if ins[0] is None and ins[1] == "b"}
    used |= {x for ins in out if ins[0] is None and ins[1] == "switch" for x in ins[4].split()[1:]}
    return [ins for ins in out if ins[0] is None or ins[0] in used]


def undeclared(body, protos):
    """the functions the asm calls that the file doesn't declare: as asm ones (apply()
    declares them)"""
    for f in re.findall(r"^\s*bl (\w+)$", body, re.M):
        if f not in protos and not f.startswith("L_"):
            protos[f] = "void(void)"
            UNDECL.add(f)


UNDECL = set()     # (functions called that no declaration names)


def lift_cfg(name, body, protos, variant=0):
    undeclared(body, protos)
    SWAP[0] = False     # (the other order of compares: tried as a variant once, little came of it)
    """(declaration, C body, callees) of an asm function with branches, or raises Fail.

    The asm is cut into blocks; in a block the registers are expressions as in lift(),
    and at its end the registers that are still needed are written to their variables.
    The blocks are put back together as if/else and do/while (what MW makes of them).
    """
    lines = untail(stm_sp([l.strip() for l in body.strip().split("\n")]))
    # (a tail call through r12 at the end: a call, and its value returned)
    t12 = [j for j, l in enumerate(lines) if re.search(r"\b(r12|ip)\b", l)]
    if lines[-1] == "bx r12" and len(t12) == 2 and not lines[0].startswith("stmdb"):
        m = re.match(r"ldr (?:r12|ip), =(\w+)$", lines[t12[0]])
        if m and m[1] in FUNCS:
            protos.setdefault(m[1], "void(void)")
            lines = lines[:t12[0]] + lines[t12[0] + 1:-1] + [f"bl {m[1]}", "bx lr"]
    frame, push = None, 0
    m = re.match(r"stmdb sp!, \{((?:r\d+, )*)lr\}$", lines[0])
    if m:
        frame = m[1]
        push = 4 * (frame.count(",") + 1)
        lines = lines[1:]
    size = 0
    m = re.match(r"sub sp, sp, #(\w+)$", lines[0]) if frame is not None else None
    if m:
        size = imm(m[1])
        lines = lines[1:]
    ret_line = f"sp!, {{{frame}pc}}" if frame is not None else None
    # (the locals: from the lowest address taken or loaded; the stores below are arguments)
    low, nstack = None, 0
    for line in lines:
        m = re.match(r"(?:add (?!sp)\w+, sp, #(\w+)|add (?!sp)\w+, sp|ldr\w* \w+, \[sp(?:, #(\w+))?\])$", line)
        if m:
            off = imm(m[1] or m[2] or "0")
            if off < size or not m[0].startswith("ldr"):
                low = off if low is None else min(low, off)
            elif off >= size + push:
                nstack = max(nstack, (off - size - push) // 4 + 1)
    if low is not None:
        low &= ~3     # (the locals from a word: a byte array can start in the middle of one)
    if low in (0, None) and size == 0 and frame is not None and frame.startswith("r3,") \
            and any(re.match(r"add (?!sp)\w+, sp(, #0)?$|ldr \w+, \[sp\]$", line) for line in lines):
        # (a word whose address is taken or that's read back, in the place of the r3 pushed
        # (MW keeps one there))
        size, push, low = 4, push - 4, 0
    if low is not None and low >= size:
        raise Fail("locals")
    a0 = FUNCS.get(name)
    lines = switches(lines, a0 + 4 * (frame is not None) + 4 * (size > 0) if a0 is not None else None,
                     f"ldmia {ret_line}" if frame is not None else "bx lr")
    # (the instructions: (label, base, condition, s, operands))
    insns = []
    for n_, line in enumerate(lines):
        if line.startswith("@switch "):
            insns.append((None, "switch", "", False, line[8:]))
            continue
        m = re.match(r"add(\w\w)? sp, sp, #(\w+)$", line)
        if m and size and imm(m[2]) == size:
            # (the end of the frame, before a return: other instructions can come between)
            for nxt in lines[n_ + 1:]:
                if nxt == f"ldm{m[1] or ''}ia {ret_line}":
                    break
                if nxt.endswith(":") or re.match(r"b", nxt) or "sp" in nxt:
                    raise Fail("the end of the frame")
            else:
                raise Fail("the end of the frame")
            continue
        if line.endswith(":"):
            insns.append((line[:-1].lstrip("@"), None, "", False, ""))
            continue
        m = re.match(r"(\w+)\s+(.*)$", line)
        if not m:
            raise Fail(line)
        mn, op = m[1], m[2].strip()
        mm = re.match(r"ldm(\w\w)?ia$", mn)
        if mm and frame is not None and op == ret_line:
            insns.append((None, "ret", mm[1] or "", False, ""))
            continue
        if mn.startswith("bx") and op == "lr" and frame is None:
            insns.append((None, "ret", mn[2:], False, ""))
            continue
        if re.search(r"\bpc\b", op) or re.search(r"\bsp\b", op) and not (
                re.match(r"(r\d+|lr), \[sp(, #\w+)?\]$", op) or re.match(r"add$", mn) and re.match(r"(r\d+|lr), sp(, #\w+)?$", op)):
            raise Fail("the stack: " + line)
        sp = split_mnemonic(mn)
        if not sp:
            raise Fail(line)
        insns.append((None,) + sp + (op,))
    if not variant & 2:
        insns = unpredicate(hoist_chains(insns))
    if variant & 4:
        insns = tails(insns)
    # (blocks: from a label or after a branch or a return)
    blocks, cur = [], None
    for ins in insns:
        if ins[0] is not None:
            cur = {"label": ins[0], "insns": []}
            blocks.append(cur)
            continue
        if cur is None:
            cur = {"label": None, "insns": []}
            blocks.append(cur)
        cur["insns"].append(ins)
        if ins[1] in ("b", "switch") or ins[1] == "ret" and not ins[2]:
            cur = None
    blocks = [b for b in blocks if b["insns"] or b["label"]]
    index = {b["label"]: k for k, b in enumerate(blocks) if b["label"]}
    for k, b in enumerate(blocks):
        last = b["insns"][-1] if b["insns"] else None
        b["succ"] = []
        if last and last[1] == "switch":
            ts = last[4].split()[1:]
            if any(t not in index for t in ts):
                raise Fail("a branch out of the function")
            b["switch"] = [index[t] for t in ts]
            b["succ"] = sorted(set(b["switch"]))
        elif last and last[1] == "b":
            t = last[4].lstrip("@")
            if t not in index:
                raise Fail("a branch out of the function")
            b["target"] = index[t]
            b["succ"].append(index[t])
            if last[2]:
                b["succ"].append(k + 1)
        elif not (last and last[1] == "ret" and not last[2]):
            if k + 1 >= len(blocks):
                raise Fail("no return at the end")
            b["succ"].append(k + 1)
    # (does the function return a value: r0 written other than by a call)
    returns = any(i[1] not in ("str", "strh", "strb", "cmp", "cmn", "tst", "b", "bl", "ret")
                  and re.match(r"r0\b", i[4]) for b in blocks for i in b["insns"])
    if variant & 1:
        returns = not returns
    # (liveness of the registers, at the start of each block)

    def use_def(ins):
        _, mn, c, s, op = ins
        regs_ = re.findall(r"\b(r\d+|lr)\b", op)
        if mn == "ret":
            return ({"r0"} if returns else set()), set()
        if mn == "b":
            return set(), set()
        if mn == "switch":
            return {op.split()[0]}, set()
        if mn in ("bl", "blx"):
            return CALL_USES.get(id(ins), set()) | set(regs_), {"r0", "r1", "r2", "r3", "r12"}
        if mn == "copy":
            return set(regs_[:2]), set(re.findall(r"\b(r\d+|lr)\b", op.split("{")[1]))
        if mn in ("cmp", "cmn", "tst") or mn in STORE:
            d = {regs_[1]} if mn in STORE and ("!" in op or re.search(r"\], #", op)) else set()
            return set(regs_), d
        d = {regs_[0]} if regs_ else set()
        u = set(regs_[1:])
        if mn in LOAD and ("!" in op or re.search(r"\], #", op)):
            d.add(regs_[1])
        if c:
            u |= d     # (a conditional write keeps the old value otherwise)
        return u, d
    # (a call reads the argument registers written for it, in its block)
    CALL_USES, CALL_N = {}, {}
    # (the blocks a call may come before: there, a parameter of a typed function that isn't
    # written for it isn't one (the call before took the register))
    called = [False] * len(blocks)
    for _ in range(len(blocks) + 1):
        for k_, b in enumerate(blocks):
            if called[k_] or any(i[1] in ("bl", "blx") for i in b["insns"]):
                for x in b["succ"]:
                    called[x] = True
    # (the argument registers written on every way into a block since the last call: for a
    # call in it, written for it too ('mov r0, r6; mov r1, r5; bge L' and a call on each way))
    A4 = {"r0", "r1", "r2", "r3"}
    INW, OUTW = [set() for _ in blocks], [set(A4) for _ in blocks]
    for _ in range(len(blocks) + 2):
        for k_, b in enumerate(blocks):
            ps = [j for j in range(len(blocks)) if k_ in blocks[j]["succ"]]
            INW[k_] = set.intersection(*[OUTW[j] for j in ps]) if ps and k_ else set()
            w = set(INW[k_])
            for ins in b["insns"]:
                if ins[1] in ("bl", "blx"):
                    w = set()
                elif ins[1] == "copy":
                    w -= use_def(ins)[1]
                else:
                    w |= use_def(ins)[1] & A4
            OUTW[k_] = w
    for k_, b in enumerate(blocks):
        seg_ = set(INW[k_])
        before = called[k_]
        for ins in b["insns"]:
            if ins[1] in ("bl", "blx"):
                CALL_USES[id(ins)] = seg_ & {"r0", "r1", "r2", "r3"} - ({ins[4]} if ins[1] == "blx" else set())
                if ins[1] == "blx" and ins[4] != "r0":
                    CALL_USES[id(ins)].add("r0")
                if ins[1] == "blx" and ins[4] in ("r1", "r2", "r3"):
                    # (MW takes the first register after the arguments for the function)
                    CALL_USES[id(ins)] |= {f"r{i}" for i in range(int(ins[4][1:]))}
                # (and the ones below the last one written: the arguments before it)
                n_ = max([int(r[1:]) + 1 for r in CALL_USES[id(ins)]] + [0])
                CALL_USES[id(ins)] |= {f"r{i}" for i in range(n_)} - ({ins[4]} if ins[1] == "blx" else set())
                p_ = protos.get(ins[4]) if ins[1] == "bl" else None
                if isinstance(p_, tuple) and before and len(p_[1]) <= 4 and \
                        not all(f"r{i}" in seg_ for i in range(len(p_[1]))):
                    CALL_N[id(ins)] = max([int(r[1:]) + 1 for r in CALL_USES[id(ins)]] + [0])
                elif isinstance(p_, tuple):     # (a function with parameters reads them all)
                    CALL_USES[id(ins)] |= {f"r{i}" for i in range(min(4, len(p_[1])))}
                elif p_ == "void(void)":     # (and a C++ one, the ones its name has)
                    CALL_USES[id(ins)] |= {f"r{i}" for i in range(min(4, mangled_args(ins[4]) or 0))}
                if "sp" in seg_:     # (arguments on the stack: the four in registers too)
                    CALL_USES[id(ins)] |= {"r0", "r1", "r2", "r3"} - ({ins[4]} if ins[1] == "blx" else set())
                seg_ = set()
                before = True
            elif ins[1] == "copy":
                seg_ -= use_def(ins)[1]
            else:
                seg_ |= use_def(ins)[1]
                if ins[1] in STORE and re.search(r"\[sp(, #\w+)?\]$", ins[4]):
                    seg_.add("sp")
    # (the parameters passed on to the first call as they came: MW keeps them in their
    # registers, so the first register written before it is one after them ('ldr r1, =D'
    # with r0 a parameter))
    FIRSTP = {}
    wr, low_r = set(), None
    for b in blocks:
        for ins in b["insns"]:
            if ins[1] in ("bl", "blx"):
                if low_r:
                    FIRSTP[id(ins)] = {f"r{i}" for i in range(low_r)} - wr
                    CALL_USES[id(ins)] |= FIRSTP[id(ins)]
                break
            u_, d_ = use_def(ins)
            if u_ & {"r0", "r1", "r2", "r3"} - wr:
                break     # (a parameter read: it's known anyway)
            for r in sorted(d_ & {"r0", "r1", "r2", "r3"}):
                if low_r is None and not wr:
                    low_r = int(r[1:])
                wr.add(r)
        else:
            continue
        break
    live_in = [set() for _ in blocks]
    changed_ = True
    while changed_:
        changed_ = False
        for k in reversed(range(len(blocks))):
            live = set().union(*[live_in[s] for s in blocks[k]["succ"]]) if blocks[k]["succ"] else set()
            for ins in reversed(blocks[k]["insns"]):
                u, d = use_def(ins)
                live = (live - d) | u
            if live != live_in[k]:
                live_in[k], changed_ = live, True
    nparams = max([int(r[1:]) + 1 for r in live_in[0] if r in ("r0", "r1", "r2", "r3")] + [0])
    if nstack:
        nparams = 4 + nstack
    P = [Param(i) if i < nparams else Var(f"r{i}") for i in range(max(4, nparams))]
    V = {r: Var(r) for r in REGS[4:]}
    for r in live_in[0]:
        if r not in ("r0", "r1", "r2", "r3"):
            raise Fail(f"{r} before it's written")
    calls, callees, used_vars, tmps = [], set(), set(), []

    def pkey(v, assigned):
        """a key of v if it's a value that doesn't change (else None)"""
        if isinstance(v, Const):
            return ("c", v.n)
        if isinstance(v, Sym):
            return ("s", v.name, v.off)
        if type(v) is Param and v.i >= 0 and v not in assigned:
            return ("p", v.i)
        if isinstance(v, Bin):
            a, b = pkey(v.a, assigned), pkey(v.b, assigned)
            return ("b", v.op, a, b) if a and b else None
        return None
    ENTRY = [{} for _ in blocks]
    END = [{} for _ in blocks]
    ENDF = [None for _ in blocks]     # (the flags at the end of each block)

    def run(k):
        """the statements of block k, and its condition at the end (flags, cc) or None"""
        b = blocks[k]
        regs = {f"r{i}": P[i] for i in range(4)}
        if k:
            regs.update(HOME)
        regs.update(V)
        regs.update(ENTRY[k])
        stmts, seg, flags = [], set(INW[k]), None
        state = {"flags": None}
        # (a block reached from blocks that end with the same flags: they hold in it too
        # (a branch on them at its start, after MW's threading))
        ps_ = [j for j in range(len(blocks)) if k in blocks[j]["succ"]]
        if k and ps_ and ENDF[ps_[0]] is not None and all(ENDF[j] is ENDF[ps_[0]] for j in ps_):
            state["flags"] = ENDF[ps_[0]]
        out_args = {}
        # (the words stored for a call's arguments on the stack before the blocks of a
        # conditional run: the same from every block before)
        if k and ps_ and all(j < k and OUTA.get(j) for j in ps_):
            a_ = OUTA[ps_[0]]
            if all(OUTA[j].keys() == a_.keys() and all(OUTA[j][o] is a_[o] for o in a_) for j in ps_):
                out_args = dict(a_)
        wpos = {}
        retpos = []     # (the returns on a condition: where in stmts, and the writes before them)

        def read(r):
            if r not in regs:
                raise Fail(f"register {r}")
            v = regs[r]
            if isinstance(v, (Call, Tmp)):
                v.used = True
            return v

        def write(r, v, c=""):
            if c:
                v = Tern(need_flags(), c, v, read(r))
            regs[r] = v
            seg.add(r)
            wpos[r] = max(wpos.values(), default=0) + 1

        def need_flags():
            if not state["flags"]:
                raise Fail("a condition without a compare")
            return state["flags"]

        def operand(s):
            s = s.strip()
            if s.startswith("#"):
                return Const(imm(s))
            m = re.match(r"(r\d+|lr), (lsl|lsr|asr|ror) (#\w+|r\d+)$", s)
            if m:
                amt = Const(imm(m[3])) if m[3].startswith("#") else read(m[3])
                if m[2] == "ror" and not isinstance(amt, Const):
                    raise Fail("ror")
                return Bin({"lsl": "<<", "lsr": "u>>", "asr": ">>", "ror": "ror"}[m[2]], read(m[1]), amt)
            if re.match(r"(r\d+|lr)$", s):
                return read(s)
            raise Fail(f"operand {s}")
        term = None
        for n_, (_, mn, c, s, op) in enumerate(b["insns"]):
            last = n_ == len(b["insns"]) - 1
            if mn == "ret":
                v = regs["r0"] if returns else None
                if c:
                    fl = need_flags()
                    stmts.append(("return if", c, fl, given(v, fl, c, True) if v is not None else None))
                    retpos.append((len(stmts) - 1, max(wpos.values(), default=0)))
                    # (after it, the condition is false)
                    for r in list(regs):
                        regs[r] = given(regs[r], fl, c, False)
                else:
                    stmts.append(("return", v))
                continue
            if mn == "b":
                if c:
                    term = (need_flags(), c)
                continue
            if mn == "switch":
                term = (("switch", read(op.split()[0]), Const(0)), "sw")
                continue
            if mn in ("bl", "blx"):
                if mn == "blx":
                    if c or not re.match(r"(r\d+|lr)$", op):
                        raise Fail("blx")
                    fp, fpreg = read(op), op
                    op = None
                elif op in DIV and not c:
                    a, b_ = read("r0"), read("r1")
                    for r in ("r2", "r3", "r12"):
                        regs.pop(r, None)
                    write("r0", Bin(DIV[op][0], a, b_))
                    write("r1", Bin(DIV[op][1], a, b_))
                    seg.clear()
                    state["flags"] = None
                    continue
                elif c or op == name or op not in protos:
                    raise Fail(f"call of {op}")
                m_ = settle(regs, stmts, tmps)
                if state["flags"] and m_:
                    state["flags"] = subst_flags(state["flags"], m_)
                # (the register of the function called: not an argument)
                seg_ = set(seg) - ({fpreg} if op is None else set())
                if op is None and fpreg in ("r1", "r2", "r3"):
                    seg_ |= {f"r{i}" for i in range(int(fpreg[1:]))}
                if op is None and isinstance(fp, Load) and isinstance(fp.base, Load) and fp.base.off == 0 \
                        and "r0" in regs and fpreg != "r0" and regs["r0"] is fp.base.base:
                    seg_.add("r0")
                if id(b["insns"][n_]) in FIRSTP:
                    seg_ |= {r for r in FIRSTP[id(b["insns"][n_])] if r in regs}
                cl = Call(len(calls), op, dict(regs), seg_, k == 0 and not calls)
                cl.nmax = CALL_N.get(id(b["insns"][n_]))
                if op is None:
                    cl.fp = fp
                cl.stack = dict(out_args)
                out_args.clear()
                calls.append(cl)
                if op:
                    callees.add(op)
                stmts.append(("call", cl))
                retpos.append((len(stmts) - 1, max(wpos.values(), default=0)))
                for r in ("r1", "r2", "r3", "r12"):
                    regs.pop(r, None)
                regs["r0"] = cl
                seg.clear()
                state["flags"] = None
                continue
            m = re.match(r"(r\d+|lr), (.*)$", op)
            if mn in ("cmp", "cmn", "tst"):
                bv = operand(m[2])
                if mn == "cmn":
                    if not isinstance(bv, Const):
                        raise Fail("cmn")
                    bv = Const(-bv.n & 0xFFFFFFFF)
                fl = ("tst" if mn == "tst" else "cmp", read(m[1]), bv)
                state["flags"] = ("if", need_flags(), c, fl) if c else fl
                continue
            mm = re.match(r"(r\d+|lr), =(\w+)(?:\+(0x[0-9a-f]+))?$", op)
            if mn == "ldr" and mm:
                if mm[2][0].isdigit():
                    v = Const(int(mm[2], 0) + int(mm[3] or "0", 16))
                else:
                    v = Sym(mm[2], int(mm[3] or "0", 16))
                    v.func = is_func(mm[2], protos)
                write(mm[1], v, c)
                continue
            mm = re.match(r"(r\d+|lr), \[sp(?:, #(\w+))?\]$", op)
            if mm and (mn in LOAD or mn in STORE):
                if c:
                    raise Fail("a conditional access to the stack")
                off = imm(mm[2] or "0")
                if mn in LOAD:
                    if off >= size + push and (frame is not None or size == 0):
                        if (off - size - push) % 4 or mn not in LOAD:
                            raise Fail("a parameter on the stack")
                        if LOAD[mn] != "s32":
                            P[4 + (off - size - push) // 4].type = LOAD[mn]
                        write(mm[1], P[4 + (off - size - push) // 4])
                    elif low is not None and low <= off < size:
                        write(mm[1], Load(LOAD[mn], Local(0), off - low))
                    else:
                        raise Fail("a load from the stack")
                else:
                    v = read(mm[1])
                    if low is not None and low <= off < size:
                        stmts.append(("store", STORE[mn], Local(0), off - low, v))
                    elif (off < size or size == 0 and off == 0 and (frame or "").startswith("r3,")) and mn == "str" and off % 4 == 0:
                        out_args[off // 4] = v     # (r3 pushed: a word for an argument on the stack)
                    else:
                        raise Fail("a store to the stack")
                continue
            mm = re.match(r"(r\d+|lr), (r\d+|lr), #(\w+), \{([^}]*)\}$", op)
            if mn == "copy" and mm:
                if c:
                    raise Fail("a conditional struct copy")
                m_ = settle(regs, stmts, tmps)
                if state["flags"] and m_:
                    state["flags"] = subst_flags(state["flags"], m_)
                t_ = "s64" if imm(mm[3]) == 8 else f"WN<{imm(mm[3]) // 4}>"
                stmts.append(("store", t_, read(mm[1]), 0, Load(t_, read(mm[2]), 0)))
                for r in [x.strip() for x in mm[4].split(",")]:
                    write(r, Poison())
                    seg.discard(r)
                continue
            mm = re.match(r"(r\d+|lr), sp(?:, #(\w+))?$", op)
            if mn == "add" and mm:
                if c or low is None:
                    raise Fail("the stack")
                write(mm[1], Local(imm(mm[2] or "0") - low))
                continue
            mm = re.match(r"(r\d+|lr), \[(r\d+|lr)(?:, (#-?\w+|-?(?:r\d+|lr)(?:, lsl #\w+)?))?\](!?)(?:, (#-?\w+))?$", op)
            if (mn in LOAD or mn in STORE) and mm:
                if mn in STORE and not c:
                    m_ = settle(regs, stmts, tmps)
                    if state["flags"] and m_:
                        state["flags"] = subst_flags(state["flags"], m_)
                base = read(mm[2])
                off = 0
                if mm[3]:
                    if mm[3].startswith("#"):
                        off = imm(mm[3])
                        off = off - (1 << 32) if off & 0x80000000 else off
                    elif mm[3].startswith("-"):
                        raise Fail("a negative register offset")
                    else:
                        off = operand(mm[3])
                if mm[5] and off:
                    raise Fail("address")
                if mn in LOAD:
                    v = Load(LOAD[mn], base, 0 if mm[5] else off)
                    v.ldm = "0X" in op
                    write(mm[1], v, c)
                else:
                    v = read(mm[1])
                    if isinstance(v, Param) and v.i >= 0 and STORE[mn] != "s32":
                        v.type = STORE[mn]
                    st = ("store", STORE[mn], base, 0 if mm[5] else off, given(v, state["flags"], c, True) if c else v)
                    stmts.append(("if", need_flags(), c, st) if c else st)
                if mm[4] or mm[5]:
                    if c:
                        raise Fail("a conditional writeback")
                    upd = imm(mm[5]) if mm[5] else off
                    if not isinstance(upd, int):
                        upd = upd
                    elif upd & 0x80000000:
                        upd -= 1 << 32
                    regs[mm[2]] = Bin("+", base, upd if not isinstance(upd, int) else Const(upd & 0xFFFFFFFF))
                    seg.add(mm[2])
                continue
            if mn in ("mov", "mvn") and m:
                v = operand(m[2])
                if mn == "mvn":
                    v = Const(~v.n & 0xFFFFFFFF) if isinstance(v, Const) else Bin("^", v, Const(0xFFFFFFFF))
                write(m[1], v, c)
                if s:
                    state["flags"] = ("zero", regs[m[1]], Const(0))
                continue
            mm = re.match(r"(r\d+|lr), (r\d+|lr), (.*)$", op)
            if mn in ("add", "sub", "rsb", "and", "orr", "eor", "bic", "mul") and mm:
                a, bv = read(mm[2]), operand(mm[3])
                if mn == "rsb":
                    v = Bin("-", bv, a)
                elif mn == "bic":
                    v = Bin("&", a, Const(~bv.n & 0xFFFFFFFF)) if isinstance(bv, Const) else Fail
                    if v is Fail:
                        raise Fail("bic")
                elif mn == "mul":
                    v = Bin("*", a, bv)
                else:
                    v = fold_mod(Bin(OPS[mn], a, bv))
                write(mm[1], v, c)
                if s:
                    if c:
                        raise Fail("a conditional s")
                    nxt = next((i_[2] for i_ in b["insns"][n_ + 1:] if i_[2]), None)
                    # (subs read with mi/pl: the sign of what it wrote ('--n < 0'))
                    state["flags"] = ("cmp", a, bv) if mn == "sub" and nxt not in ("mi", "pl") else ("zero", regs[mm[1]], Const(0))
                continue
            mm = re.match(r"(r\d+), (r\d+), (r\d+), (r\d+)$", op)
            if mn == "mla" and mm:
                write(mm[1], Bin("+", Bin("*", read(mm[2]), read(mm[3])), read(mm[4])), c)
                continue
            raise Fail(f"{mn}{c} {op}")
        # (the registers needed after the block go to their variables)
        END[k] = dict(regs)
        ENDF[k] = state["flags"]
        if b["succ"]:
            live = set().union(*[live_in[s] for s in b["succ"]])
            assign = {}
            # (in the order they were written: MW keeps the order of the C)
            for r in sorted(live, key=lambda r: (wpos.get(r, 0), REGS.index(r))):
                home = HOME.get(r) or (P[int(r[1:])] if r in ("r0", "r1", "r2", "r3") else V.get(r))
                if home is None:
                    raise Fail(f"register {r}")
                if r not in regs:
                    continue     # (not set again since a call)
                if all(r in ENTRY[x] for x in b["succ"] if r in live_in[x]):
                    continue     # (known where it goes: no variable)
                if regs[r] is not home:
                    assign[r] = (home, regs[r])
            # (in an order where no variable is read after it's written)
            order, todo = [], dict(assign)
            while todo:
                for r, (home, v) in list(todo.items()):
                    if not any(home in refs(v2) for o2, (_, v2) in todo.items() if o2 != r):     # (nothing still to go reads it)
                        order.append((home, v))
                        del todo[r]
                        break
                else:
                    # (a cycle (two variables swapped): one of them kept in a temporary first)
                    r, (home, v) = next(iter(todo.items()))
                    t_ = Tmp(len(tmps), home)
                    t_.used = True
                    tmps.append(t_)
                    stmts.append(("let", t_))
                    todo = {o2: (h2, subst(v2, {id(home): t_})) for o2, (h2, v2) in todo.items()}
                    assign.update(todo)
            for home, v in order:
                # (a number written before a return on a condition (a loop's counter): before
                # it, the way it was written)
                r_ = [r for r, (h, _) in assign.items() if h is home][0]
                at = [q for q, w in retpos if wpos.get(r_, 0) <= w] if isinstance(v, Const) and isinstance(home, Var) else []
                if at and not any(home in flag_refs(st[2]) or (st[3] is not None and home in refs(st[3]))
                                  for st in stmts[at[0]:] if st[0] == "return if"):
                    stmts.insert(at[0], ("assign", home, v))
                    retpos[:] = [(q + 1 if q >= at[0] else q, w) for q, w in retpos]
                else:
                    stmts.append(("assign", home, v))
                used_vars.add(home)
                if isinstance(v, (Call, Tmp)):
                    v.used = True
            if term:
                late = [(home, v) for home, v in order
                        if home in flag_refs(term[0]) and not any(x is v for x in flag_values(term[0]))]
                if late:
                    sc = b["succ"]
                    one = [x for x in sc if preds0[x] == [k] and blocks[x]["succ"] == [y for y in sc if y != x]]
                    ok = len(sc) == 2 and one
                    if ok:
                        s1 = one[0]
                        j = [y for y in sc if y != s1][0]
                        for home, v in late:
                            r_ = [r for r, (h, _) in assign.items() if h is home][0]
                            if sorted(preds0[j]) != sorted([k, s1]) or any(r_ in use_def(i_)[0] | use_def(i_)[1] for i_ in blocks[s1]["insns"]) or has_load(v) \
                                    or any(not isinstance(x, Param) or isinstance(x, Tmp) for x in refs(v)):
                                ok = False
                    homes_ = {h for h, _ in late}
                    fvs_ = flag_values(term[0]) if term[0][0] in ("cmp", "zero") else []
                    if not ok and fvs_ and all(not isinstance(x, Param) for x in fvs_ if refs(x) & homes_) \
                            and any(refs(x) & homes_ for x in fvs_):
                        # (what it compares is loaded through the variable: loaded before, into a
                        # temporary)
                        pos_ = min(q for q, st in enumerate(stmts) if st[0] == "assign" and st[1] in homes_)
                        m2 = {}
                        for x in fvs_:
                            if refs(x) & homes_ and id(x) not in m2:
                                t_ = Tmp(len(tmps), x)
                                t_.used = True
                                tmps.append(t_)
                                m2[id(x)] = t_
                                stmts.insert(pos_, ("let", t_))
                                pos_ += 1
                        term = (subst_flags(term[0], m2), term[1])
                        late = []
                    elif ok:
                        for home, v in late:
                            stmts.remove(("assign", home, v))
                        SINK[k] = (s1, j, late)
                    else:
                        FAILS.append("a compare of a variable written after it")
                        # (a parameter's register written after the compare reads it: a
                        # variable of its own, the parameter is read before)
                        for home, v in late:
                            r_ = [r for r, (h, _) in assign.items() if h is home][0]
                            if isinstance(home, Param) and r_ not in HOME:
                                FAILS_R.add(r_)
                        late = []
                m_ = {id(v): home for home, v in order if not any(v is x for _, x in late)}
                new = subst_flags(term[0], m_)
                term = (new, term[1])
        OUTA[k] = out_args
        return stmts, term
    preds0 = [[j for j in range(len(blocks)) if x in blocks[j]["succ"]] for x in range(len(blocks))]
    SINK, FAILS, HOME, FAILS_R, OUTA = {}, [], {}, set(), {}
    for _ in range(2 * len(blocks) + 8):     # (a value goes on a block each time)
        OUTA.clear()
        SINK.clear()
        FAILS.clear()
        FAILS_R.clear()
        calls.clear()
        callees.clear()
        used_vars.clear()
        tmps.clear()
        code = [run(k) for k in range(len(blocks))]
        if variant & 16 and not HOME:
            # (variant 16: the argument registers given other values at the end of a block get
            # variables of their own, not the parameter's)
            own = {f"r{st[1].i}" for c_ in code for st in c_[0] if st[0] == "assign" and type(st[1]) is Param
                   and 0 <= st[1].i < 4 and st[2] is not st[1]}
            if not own or any(0 in blocks[j]["succ"] for j in range(len(blocks))):
                raise Fail("no variables of their own")
            FAILS_R |= own
        if FAILS_R and not any(0 in blocks[j]["succ"] for j in range(len(blocks))):
            for r in FAILS_R:
                HOME[r] = Var(r)
            ENTRY[:] = [{} for _ in blocks]
            continue
        assigned = {st[1] for c_ in code for st in c_[0] if st[0] == "assign"}
        assigned |= {home for (_, _, late) in SINK.values() for home, _ in late}
        entry = [{} for _ in blocks]
        for k in range(1, len(blocks)):
            preds_ = [j for j in range(len(blocks)) if k in blocks[j]["succ"]]
            if not preds_:
                continue
            for r in live_in[k]:
                ps = [j for j in preds_ if not (isinstance(END[j].get(r), Var) and END[j][r] is V.get(r) and V[r] not in assigned)]
                keys = [pkey(END[j].get(r), assigned) for j in ps]
                H = HOME.get(r) or (P[int(r[1:])] if r in ("r0", "r1", "r2", "r3") else V.get(r))
                if H is not None and any(END[j].get(r) is H for j in ps):
                    # (the variable is only ever given the one value the others have: no
                    # variable)
                    ok = [j for j in ps if END[j].get(r) is not H]
                    ks = [pkey(END[j].get(r), assigned) for j in ok]
                    vals = [pkey(st[2], assigned) for c_ in code for st in c_[0] if st[0] == "assign" and st[1] is H]
                    if ok and ks[0] is not None and all(x == ks[0] for x in ks + vals):
                        ps, keys = ok, ks
                if ps and keys[0] is not None and all(x == keys[0] for x in keys):
                    entry[k][r] = END[ps[0]][r]
                    # (a number the blocks before put in the variable: the variable ('n = 0;
                    # if (c) n++;'))
                    if isinstance(H, Var) and isinstance(entry[k][r], Const) and \
                            all(any(st[0] == "assign" and st[1] is H for st in code[j][0]) for j in preds_):
                        del entry[k][r]
        if variant & 8:
            entry = [{} for _ in blocks]     # (no values carried into blocks: each in its variable)
        same = all({r: pkey(v, assigned) for r, v in entry[k].items()} == {r: pkey(v, assigned) for r, v in ENTRY[k].items()}
                   for k in range(len(blocks)))
        ENTRY[:] = entry
        if same:
            break
    else:
        raise Fail("values that don't settle")
    if FAILS:
        raise Fail(FAILS[0])
    for k, (s1, j, late) in SINK.items():
        # (the if's block mustn't change what the assignment reads)
        if any(st[0] == "assign" and (st[1] in [h for h, _ in late] or any(st[1] in refs(v) for _, v in late))
               for st in code[s1][0]):
            raise Fail("a compare of a variable written after it")
        code[j] = ([("assign", home, v) for home, v in late] + code[j][0], code[j][1])
    # (a branch, then a block with only a compare and a branch: one condition, && or ||)
    merged = True
    while merged:
        merged = False
        for i in range(len(blocks) - 2):
            b1, b2 = blocks[i], blocks[i + 1]
            if "target" not in b1 or "target" not in b2:
                continue
            if code[i][1] is None or code[i + 1][1] is None:
                continue
            if code[i + 1][0] and not all(st[0] == "assign" and not isinstance(st[2], (Call, Tmp)) or st[0] == "call"
                                          for st in code[i + 1][0]):
                continue
            if any(b.get("target") == i + 1 for b in blocks):
                continue

            def kc(j):
                tm_ = code[j][1] if j < len(code) else None
                if tm_ is None or tm_[0][0] != "cmp" or not isinstance(tm_[0][2], Const) or "target" not in blocks[j]:
                    return None
                return value(tm_[0][1])
            if kc(i) is not None and not code[i + 1][0] and kc(i + 1) == kc(i):
                lo_, hi_ = i, i + 1
                while lo_ > 0 and not code[lo_][0] and kc(lo_ - 1) == kc(i):
                    lo_ -= 1
                while hi_ + 1 < len(code) and not code[hi_ + 1][0] and kc(hi_ + 1) == kc(i):
                    hi_ += 1
                if hi_ - lo_ >= 2:
                    continue     # (three compares of one value: a switch, for dispatch())
            t, u = b1["target"], b2["target"]
            if u in (i, i + 1):
                continue     # (back to the body before them is fine: a while's test at its end)
            second = code[i + 1][1]
            if code[i + 1][0]:
                second = (("seq", [("call", st[1]) if st[0] == "call" else (st[1], st[2]) for st in code[i + 1][0]], second[0]), second[1])
            g2 = blocks[i + 2] if i + 2 < len(blocks) else None
            if t == i + 2 or g2 and g2.get("target") == t and len(g2["insns"]) == 1 and g2["insns"][0][1] == "b" \
                    and not g2["insns"][0][2] and not code[i + 2][0]:
                # (or to where the block after them only goes on to)
                term = (("logic", "&&", negate(code[i][1]), second), "t")
            elif t == u:
                term = (("logic", "||", code[i][1], second), "t")
            else:
                continue
            code[i] = (code[i][0], term)
            del code[i + 1], blocks[i + 1], live_in[i + 1]
            b1["target"] = u
            b1["succ"] = [i + 2, u]     # (on into the block after the second, or to its target)
            for b in blocks:
                if b.get("target") is not None and b["target"] > i + 1:
                    b["target"] -= 1
            for b in blocks:
                b["succ"] = [x - 1 if x > i + 1 else x for x in b["succ"]]
            merged = True
            break
    # (the arguments of the calls, as in lift())
    for cl in calls:
        p = protos[cl.name] if cl.name else VAR
        if isinstance(p, tuple) and (cl.stack or max([int(r[1:]) + 1 for r in cl.seg if r in ("r0", "r1", "r2", "r3")] + [0]) > len(p[1])
                                     and cl.name not in CDEF):
            p, cl.cast = VAR, True
        if isinstance(p, tuple) and getattr(cl, "nmax", None) is not None and cl.nmax < len(p[1]):
            # (fewer arguments than its declaration: the ones written for it)
            p, cl.cast = VAR, True
            cl.seg = set(cl.seg) | {f"r{i}" for i in range(cl.nmax)}
        if p in ("void(void)", VAR):
            n = max([int(r[1:]) + 1 for r in cl.seg if r in ("r0", "r1", "r2", "r3")] + [0])
            if p == "void(void)" and cl.name and (mangled_args(cl.name) or 0) <= 4:
                n = max(n, mangled_args(cl.name) or 0)
            if p == "void(void)" and cl.name and ASMP.get(cl.name, GLOBALP.get(cl.name)) is not None and not cl.stack:
                n = min(n, ASMP.get(cl.name, GLOBALP.get(cl.name)))
            if cl.first:
                n = max([n] + [i + 1 for i in range(min(nparams, 4)) if cl.regs.get(f"r{i}") is P[i]])
            if cl.stack:
                if sorted(cl.stack) != list(range(len(cl.stack))):
                    raise Fail("arguments on the stack")
                n = 4 + len(cl.stack)
            types = ["s32"] * n
        else:
            types = p[1]
        for i, t in enumerate(types):
            v = cl.regs.get(f"r{i}") if i < 4 else cl.stack.get(i - 4)
            if v is None:
                raise Fail("an argument after a call")
            if isinstance(v, Call):
                v.used = True
            if p in ("void(void)", VAR) and isinstance(v, Sym) and not v.func:
                t = "u8 *"     # (an address as a pointer: MW keeps a number in a register for all its uses)
            cl.args.append((v, t))
        cl.ret = "s32" if p in ("void(void)", VAR) else p[0]
        cl.untyped = p in ("void(void)", VAR)
        if cl.used and cl.ret == "void":
            cl.cast, cl.ret = True, "s32"     # (it returns something after all: through a cast)
    ret = "s32" if returns else "void"

    def render(st, ind):
        sp_ = "    " * ind
        if st[0] == "let":
            return f"{sp_}t{st[1].k} = {value(st[1].v, st[1].ctype())};\n" if st[1].used else ""
        if st[0] == "store":
            _, t, base, off, v = st
            if t == "s32" and isinstance(v, Sym) and not v.func:
                t = "u8 *"     # (an address stored: as a pointer)
            return f"{sp_}*({t} *)({addr(base, off)}) = {value(v, t)};\n"
        if st[0] == "if":
            return f"{sp_}if ({cond(st[1], st[2])})\n" + render(st[3], ind + 1)
        if st[0] == "return if":
            _, cc, fl, v = st
            if returns and isinstance(v, (Call, Tmp)):
                v.used = True
            if returns and v is None:
                raise Fail("a return without a value")
            return f"{sp_}if ({cond(fl, cc)})\n{sp_}    return{' ' + value(v, ret) if returns else ''};\n"
        if st[0] == "return":
            if returns and isinstance(st[1], (Call, Tmp)):
                st[1].used = True
            if returns and st[1] is None:
                raise Fail("a return without a value")
            return f"{sp_}return{' ' + value(st[1], ret) if returns else ''};\n"
        if st[0] == "assign":
            home, v = st[1], st[2]
            return f"{sp_}{home.render()} = {value(v, 'u8 *' if home.ptr else home.type if not isinstance(home, Var) else 's32')};\n"
        c = st[1]
        if c.used and c.ret == "void":
            c.cast, c.ret = True, "s32"     # (it returns something after all: through a cast)
        if c.used:
            return f"{sp_}v{c.k} = {c.text()};\n"
        return f"{sp_}{c.text()};\n"

    # (the structure, from the dominators: a loop is a back edge to a block that dominates
    # it; an if goes on where both of its ways meet, at the block that post-dominates it)
    nb = len(blocks)
    EXIT = nb
    succ = [list(b["succ"]) or [EXIT] for b in blocks] + [[]]
    preds = [[] for _ in range(nb + 1)]
    for k in range(nb):
        for x in succ[k]:
            preds[x].append(k)
    every = set(range(nb + 1))
    dom = [every for _ in range(nb + 1)]
    dom[0] = {0}
    pdom = [every for _ in range(nb + 1)]
    pdom[EXIT] = {EXIT}
    again = True
    while again:
        again = False
        for k in range(1, nb):
            d = {k} | (set.intersection(*[dom[p] for p in preds[k]]) if preds[k] else set())
            if d != dom[k]:
                dom[k], again = d, True
        for k in reversed(range(nb)):
            d = {k} | set.intersection(*[pdom[x] for x in succ[k]])
            if d != pdom[k]:
                pdom[k], again = d, True

    def ipdom(k, within=None, latch=None):
        """the block where the ways from k meet (EXIT: they don't)"""
        cands = pdom[k] - {k}
        if within is not None:
            cands = {c for c in cands if c in within} or {EXIT}
        # (the nearest: the one post-dominated by all the others)
        best = [c for c in cands if all(o == c or o in pdom[c] for o in cands)]
        if (not best or best[0] == EXIT) and latch is not None and k != latch:
            # (in a loop, the ways that return don't count: where the others meet on the
            # way to the loop's end)
            reach = {latch}
            changed = True
            while changed:
                changed = False
                for y in within:
                    if y not in reach and any(z in reach for z in succ[y]):
                        reach.add(y)
                        changed = True
            if k in reach:
                pd = {y: set(reach) for y in reach}
                pd[latch] = {latch}
                changed = True
                while changed:
                    changed = False
                    for y in reach:
                        if y == latch:
                            continue
                        ss = [z for z in succ[y] if z in reach]
                        new = {y} | set.intersection(*[pd[z] for z in ss])
                        if new != pd[y]:
                            pd[y], changed = new, True
                c2 = pd[k] - {k}
                b2 = [c for c in c2 if all(o == c or o in pd[c] for o in c2)]
                if b2:
                    return b2[0]
        return best[0] if best else EXIT
    loops = {}
    for k in range(nb):
        for x in succ[k]:
            if x < nb and x in dom[k]:
                if x in loops:
                    raise Fail("a loop with two ends")
                body_ = {x, k}
                stack = [k]
                while stack:
                    y = stack.pop()
                    if y == x:
                        continue     # (the start of the loop (a loop of one block): not what's before it)
                    for p in preds[y]:
                        if p not in body_:
                            body_.add(p)
                            stack.append(p)
                exits = {s for y in body_ for s in succ[y] if s not in body_ and s != EXIT}
                # (the blocks from another exit that only return: in the loop, a return
                # from it; the loop's own exit is where its end goes)
                own = [s for s in succ[k] if s != x and s not in body_]
                own = own or [s for s in succ[x] if s not in body_]     # (a while: its test at the start)
                if len(exits) > 1 and own and own[0] in exits:
                    def ahead(s, stop=None):
                        seen, st = {s}, [s]
                        while st:
                            for z in succ[st.pop()]:
                                if z != EXIT and z not in seen and z not in body_ and z != stop:
                                    seen.add(z)
                                    st.append(z)
                        return seen
                    main_ = ahead(own[0])
                    for s in exits - {own[0]}:
                        # (blocks that only return, or that go on to the loop's exit: a break)
                        r_ = ahead(s, own[0])
                        if not r_ & main_ and all(p in body_ or p in r_ for z in r_ for p in preds[z]):
                            body_ |= r_
                    exits = {s for y in body_ for s in succ[y] if s not in body_ and s != EXIT}
                if len(exits) > 1:
                    # (the exits go on to one block: what each does before it, in the loop (a
                    # break), and the loop goes on there)
                    def ahead2(s, stop=None):
                        seen, st = {s}, [s]
                        while st:
                            for z in succ[st.pop()]:
                                if z != EXIT and z not in seen and z not in body_ and z != stop:
                                    seen.add(z)
                                    st.append(z)
                        return seen
                    common = set.intersection(*[ahead2(s) for s in exits])
                    if common:
                        J = min(common)
                        rs = [ahead2(s, J) - {J} for s in exits if s != J]
                        allr = set().union(*rs)
                        if sum(len(r_) for r_ in rs) == len(allr) and \
                                all(p in body_ or p in allr for z in allr for p in preds[z]):
                            body_ |= allr
                            exits = {s for y in body_ for s in succ[y] if s not in body_ and s != EXIT}
                if len(exits) > 1:
                    raise Fail("a loop with two exits")
                loops[x] = (k, body_, min(exits) if exits else None)
    emitted = {}
    MIN_, MAX_ = -(1 << 31), (1 << 31) - 1

    def iv_and(A, B):
        out = []
        for lo, hi in A:
            for lo2, hi2 in B:
                l_, h_ = max(lo, lo2), min(hi, hi2)
                if l_ <= h_:
                    out.append((l_, h_))
        return sorted(out)

    def iv_not(A):
        out, lo = [], MIN_
        for l_, h_ in sorted(A):
            if l_ > lo:
                out.append((lo, l_ - 1))
            lo = max(lo, h_ + 1)
        if lo <= MAX_:
            out.append((lo, MAX_))
        return out

    def iv_or(A, B):
        out = []
        for l_, h_ in sorted(A + B):
            if out and l_ <= out[-1][1] + 1:
                out[-1] = (out[-1][0], max(out[-1][1], h_))
            else:
                out.append((l_, h_))
        return out

    def iv_u(lo, hi):
        """the unsigned values lo..hi, as signed ones"""
        out = []
        if lo <= MAX_:
            out.append((lo, min(hi, MAX_)))
        if hi > MAX_:
            out.append((max(lo, 1 << 31) - (1 << 32), hi - (1 << 32)))
        return sorted(out)

    def iv_cond(cc, n):
        n &= 0xFFFFFFFF
        k = n - (1 << 32) if n > MAX_ else n
        U = 0xFFFFFFFF
        return {"eq": [(k, k)], "ne": iv_not([(k, k)]), "gt": [(k + 1, MAX_)] if k < MAX_ else [],
                "ge": [(k, MAX_)], "lt": [(MIN_, k - 1)] if k > MIN_ else [], "le": [(MIN_, k)],
                "hi": iv_u(n + 1, U) if n < U else [], "hs": iv_u(n, U), "cs": iv_u(n, U),
                "lo": iv_u(0, n - 1) if n else [], "cc": iv_u(0, n - 1) if n else [], "ls": iv_u(0, n)}.get(cc)

    def iv_size(A):
        return sum(h_ - l_ + 1 for l_, h_ in A)

    def disp_of(d, xs):
        """('cmp', n) or ('table', A) if block d branches on the value xs alone, else None"""
        tm = code[d][1]
        if tm is None:
            return None
        if tm[0][0] == "cmp" and isinstance(tm[0][2], Const) and value(tm[0][1]) == xs and tm[1] in \
                ("eq", "ne", "gt", "ge", "lt", "le", "hi", "hs", "cs", "lo", "cc", "ls") and blocks[d].get("target") is not None:
            return ("cmp", tm[0][2].n)
        if tm[0][0] == "switch" and blocks[d].get("switch"):
            ix = tm[0][1]
            if value(ix) == xs:
                return ("table", 0)
            if isinstance(ix, Bin) and ix.op == "-" and isinstance(ix.b, Const) and value(ix.a) == xs:
                return ("table", ix.b.n)
            if isinstance(ix, Bin) and ix.op == "+" and isinstance(ix.b, Const) and value(ix.a) == xs:
                return ("table", -ix.b.n if ix.b.n <= MAX_ else (1 << 32) - ix.b.n)
        return None

    def dispatch(b):
        """a switch MW made of compares of one value and jump tables: (the default and each
        value's case (as for a table), the values, the value switched on, the blocks of the
        compares), or None"""
        tm = code[b][1]
        if tm is None or tm[0][0] not in ("cmp", "switch"):
            return None
        x = tm[0][1]
        if tm[0][0] == "switch" and isinstance(x, Bin) and x.op in ("-", "+") and isinstance(x.b, Const):
            x = x.a
        xs = value(x)
        if not disp_of(b, xs):
            return None
        # (the blocks that only compare it, or go on to one that does)
        D, st = {b}, [b]
        while st:
            d = st.pop()
            for y in succ[d]:
                if y == EXIT or y in D or y <= d or code[y][0]:
                    continue
                if disp_of(y, xs) or code[y][1] is None and len(succ[y]) == 1 and succ[y][0] != EXIT and succ[y][0] > y:
                    D.add(y)
                    st.append(y)
        changed = True
        while changed:
            changed = False
            for y in sorted(D - {b}):
                if any(p_ not in D for p_ in preds[y]):
                    D.discard(y)
                    changed = True
            # (and what only they reached)
            reach_, st = {b}, [b]
            while st:
                for y in succ[st.pop()]:
                    if y in D and y not in reach_:
                        reach_.add(y)
                        st.append(y)
            if reach_ != D:
                D, changed = reach_, True
        S, targets, single = {b: [(MIN_, MAX_)]}, {}, {}
        for d in sorted(D):
            sd = S.get(d, [])
            dk = disp_of(d, xs)
            if dk is None:
                edges = [(succ[d][0], sd)]
            elif dk[0] == "cmp":
                cs = iv_cond(code[d][1][1], dk[1])
                if cs is None:
                    return None
                edges = [(blocks[d]["target"], iv_and(sd, cs)), (d + 1, iv_and(sd, iv_not(cs)))]
            else:
                ts_, A = blocks[d]["switch"], dk[1]
                n_ = len(ts_) - 1
                edges = [(ts_[i + 1], iv_and(sd, [(A + i, A + i)])) for i in range(n_)]
                edges.append((ts_[0], iv_and(sd, iv_not([(A, A + n_ - 1)]))))
            for y, sy in edges:
                if not sy:
                    continue
                if len(sy) == 1 and sy[0][0] == sy[0][1] and y not in D:
                    single.setdefault(y, set()).add(sy[0][0])     # (a case of its own, wherever it goes)
                if y in D:
                    S[y] = iv_or(S.get(y, []), sy)
                else:
                    targets[y] = iv_or(targets.get(y, []), sy)
        big = [y for y, sy in targets.items() if iv_size(sy) > 256]
        if len(big) != 1 or len(D) + sum(1 for d in D if disp_of(d, xs) and disp_of(d, xs)[0] == "table") < 3:
            return None
        deflt = big[0]
        vals, ts = [], [deflt]
        for v_ in sorted(single.get(deflt, ())):
            vals.append(v_)
            ts.append(deflt)
        for y in sorted(targets):
            if y == deflt:
                continue
            for l_, h_ in targets[y]:
                for v_ in range(l_, h_ + 1):
                    vals.append(v_)
                    ts.append(y)
        if len(vals) < 2:
            return None
        return ts, vals, value(x), D

    def ind_(n):
        return "    " * n

    def region(b, stop, ind, loop):
        """the C of the blocks from b to stop (not included)"""
        out = []
        while b != stop and b != EXIT and b is not None:
            if loop and b == loop[3] and out:
                break     # (back at the loop's start: the next time round)
            if b in loops and not (loop and loop[3] == b):
                latch, body_, ex = loops[b]
                ctx = (b, latch, ex, b, body_)
                hterm = code[b][1]
                hs = [y for y in succ[b] if y in body_ and y != b]
                hst = code[b][0]
                if hterm is not None and hst and all(st[0] == "assign" and not isinstance(st[2], (Call, Tmp)) for st in hst) \
                        and ex in succ[b] and len(hs) == 1 and b != latch:
                    # (the test reads what the block before it computes: in the condition, the
                    # value itself if its variable isn't needed after ('while (*p != 0 && ...)'))
                    keep = [st for st in hst if not (isinstance(st[1], Var) and type(st[1]) is Var
                                                     and st[1].reg not in live_in[hs[0]] and st[1].reg not in live_in[ex])]
                    m_ = {id(st[1]): st[2] for st in hst if st not in keep}
                    f_ = subst_flags(hterm[0], m_) if m_ else hterm[0]
                    hterm = ((("seq", [(st[1], st[2]) for st in keep], f_) if keep else f_), hterm[1])
                    hst = []
                if hterm is not None and not hst and ex in succ[b] and len(hs) == 1 and b != latch:
                    # (the test at the start, alone in its block: a while, which MW makes 'b test;
                    # body; test: b<c> body')
                    emitted[b] = emitted.get(b, 0) + 1
                    inner = region(hs[0], None, ind + 1, ctx)
                    stay = hterm if blocks[b].get("target") == hs[0] else negate(hterm)
                    out.append(ind_(ind) + f"while ({cond(*stay)}) {{\n" + inner + ind_(ind) + "}\n")
                    b = ex
                    continue
                inner = region(b, None, ind + 1, ctx)
                lterm = code[latch][1]
                if lterm is not None and blocks[latch].get("target") == b:
                    out.append(ind_(ind) + "do {\n" + inner + ind_(ind) + f"}} while ({cond(*lterm)});\n")
                elif lterm is not None and succ[latch][0] == b and blocks[latch].get("target") == ex:
                    # (the end falls into the start; the branch leaves)
                    out.append(ind_(ind) + "do {\n" + inner + ind_(ind) + f"}} while ({cond(*negate(lterm))});\n")
                else:
                    out.append(ind_(ind) + "for (;;) {\n" + inner + ind_(ind) + "}\n")
                b = ex
                continue
            emitted[b] = emitted.get(b, 0) + 1
            if emitted[b] > 1 and (len(blocks[b]["insns"]) > 2 or blocks[b]["succ"]) and \
                    not (len(blocks[b]["insns"]) <= 4 and len(blocks[b]["succ"]) == 1 and code[b][1] is None
                         and not any(i_[1] in ("blx", "switch") for i_ in blocks[b]["insns"])
                         and sum(i_[1] == "bl" for i_ in blocks[b]["insns"]) <= 1):
                # (a short block that goes on to one other: MW merged the same code at the end
                # of two ways (the C has it twice))
                raise Fail("goto")     # (a block in two places: only a short return can be)
            stmts, term = code[b]
            out += [render(st, ind) for st in stmts]
            bk = blocks[b]
            if not bk["succ"]:
                break     # (a return)
            chain = None
            disp = dispatch(b) if term is not None else None
            if disp:
                for z in disp[3] - {b}:
                    emitted[z] = emitted.get(z, 0) + 1
            if term is not None and term[1] == "eq" and term[0][0] == "cmp" and isinstance(term[0][2], Const) \
                    and bk.get("target") is not None and not bk.get("switch") and not disp:
                # (compares of one value, each to a case further on: MW's switch of a few cases)
                xs = value(term[0][1])
                cases, y = [(term[0][2].n, bk["target"])], b + 1
                while y < nb and not code[y][0] and code[y][1] is not None and code[y][1][1] == "eq" \
                        and code[y][1][0][0] == "cmp" and isinstance(code[y][1][0][2], Const) \
                        and value(code[y][1][0][1]) == xs and preds[y] == [y - 1] and blocks[y].get("target") is not None:
                    cases.append((code[y][1][0][2].n, blocks[y]["target"]))
                    y += 1
                tg = [t_ for _, t_ in cases]
                if len(cases) >= 2 and tg == sorted(tg) and tg[0] > y and len({v_ for v_, _ in cases}) == len(cases):
                    for z in range(b + 1, y):
                        emitted[z] = emitted.get(z, 0) + 1
                    if y < nb and not code[y][0] and code[y][1] is None and len(succ[y]) == 1 and succ[y][0] != EXIT \
                            and preds[y] == [y - 1]:
                        emitted[y] = emitted.get(y, 0) + 1
                        y = succ[y][0]     # (the default: where a 'b' after the compares goes)
                    chain = (cases, y)
            if bk.get("switch") or chain or disp:
                swx = value(term[0][1])
                if disp:
                    ts, vals, swx = disp[0], disp[1], disp[2]
                elif chain:
                    ts = [chain[1]] + [t_ for _, t_ in chain[0]]
                    vals = [v_ for v_, _ in chain[0]]
                else:
                    ts = bk["switch"]
                    vals = list(range(len(ts) - 1))
                jn = ipdom(b, loop[4] if loop else None)
                if loop and jn == EXIT and loop[2] is not None:
                    jn = loop[2]
                if jn == EXIT:
                    # (a case that returns: the switch goes on at the first block more than
                    # one case gets to)
                    def reach(s):
                        seen, st = {s}, [s]
                        while st:
                            for z in succ[st.pop()]:
                                if z != EXIT and z not in seen and (not loop or z in loop[4]):
                                    seen.add(z)
                                    st.append(z)
                        return seen
                    rs = [reach(t) for t in sorted(set(ts))]
                    cand = [z for z in range(nb) if z not in ts and sum(z in r_ for r_ in rs) > 1]
                    if cand:
                        jn = min(cand)
                body = ""
                starts = sorted(set(ts) - {jn})
                for n_, t in enumerate(starts):
                    stop_ = starts[n_ + 1] if n_ + 1 < len(starts) else jn
                    labels = [f"case {vals[k]}:" for k, x in enumerate(ts[1:]) if x == t] + (["default:"] if ts[0] == t else [])
                    body += "".join(ind_(ind + 1) + lb + "\n" for lb in labels)
                    body += region(t, stop_, ind + 2, (loop[0], loop[1], jn, loop[3], loop[4]) if loop else (None, None, jn, None, set(range(nb))))
                brk = [vals[k] for k, x in enumerate(ts[1:]) if x == jn]
                if brk:
                    # (cases that go straight on after the switch)
                    body += "".join(ind_(ind + 1) + f"case {v_}:\n" for v_ in brk) + ind_(ind + 2) + "break;\n"
                out.append(ind_(ind) + f"switch ({swx}) {{\n" + body + ind_(ind) + "}\n")
                b = jn
                continue
            if term is None:
                s_ = succ[b][0]
                if loop and s_ == loop[2]:
                    out.append(ind_(ind) + "break;\n")
                    break
                if loop and s_ == loop[3]:
                    if b != loop[1]:
                        raise Fail("continue")
                    break
                b = s_
                continue
            t, f = bk["target"], b + 1
            if loop and b == loop[1] and t == loop[3]:
                break     # (the loop's condition: in the while)
            if loop and b == loop[1] and f == loop[3] and t == loop[2]:
                break     # (the same, the other way round)
            if loop and t == loop[2]:
                out.append(ind_(ind) + f"if ({cond(*term)})\n" + ind_(ind + 1) + "break;\n")
                b = f
                continue
            if loop and f == loop[2]:
                out.append(ind_(ind) + f"if ({cond(*negate(term))})\n" + ind_(ind + 1) + "break;\n")
                b = t
                continue
            if loop and loop[3] in (t, f) and b != loop[1]:
                raise Fail("continue")
            jn = ipdom(b, loop[4] if loop else None, loop[1] if loop else None)
            if jn == EXIT or loop and jn == loop[2]:
                # (a way that returns: the if goes on at the first block both ways get to)
                def reach_(s):
                    seen, st = {s}, [s]
                    while st:
                        for z in succ[st.pop()]:
                            if z != EXIT and z not in seen and (not loop or z in loop[4] and z != loop[3]):
                                seen.add(z)
                                st.append(z)
                    return seen
                cand_ = reach_(t) & reach_(f)
                if cand_:
                    jn = min(cand_)
                elif stop is not None and stop != EXIT and (stop in reach_(t) or stop in reach_(f)):
                    jn = stop     # (one way goes on where the region around it does)
            then = region(f, jn, ind + 1, loop)
            els = region(t, jn, ind + 1, loop)
            if then and els and re.match(r"[PQ]_", blocks[t]["label"] or "") and jn == EXIT \
                    and then.rstrip().split("\n")[-1].strip().startswith("return") and then.count("\n") > 1 \
                    and not re.search(r"\b(if|switch|while|for|do)\b", els):
                # (a run on a condition that returns, then the rest: MW makes the else of an
                # if whose ways both return and are a block each the run, before the then)
                out.append(ind_(ind) + f"if ({cond(*term)}) {{\n" + els + ind_(ind) + "} else {\n" + then + ind_(ind) + "}\n")
            elif then and els:
                out.append(ind_(ind) + f"if ({cond(*negate(term))}) {{\n" + then + ind_(ind) + "} else {\n" + els + ind_(ind) + "}\n")
            elif then:
                out.append(ind_(ind) + f"if ({cond(*negate(term))}) {{\n" + then + ind_(ind) + "}\n")
            elif els:
                out.append(ind_(ind) + f"if ({cond(*term)}) {{\n" + els + ind_(ind) + "}\n")
            b = jn
        return "".join(out)

    def emit(i, end, ind):
        emitted.clear()
        return region(0, None, ind, None)
    # (again until the types settle: which variables are pointers, which temporaries are used)
    def unify():
        """two variables of one register: a pointer both, if one is"""
        vs = [v for v in used_vars if isinstance(v, Var)] + list(V.values()) + [p for p in P if isinstance(p, Var)]
        ch = False
        for v in vs:
            if not v.ptr and any(w.ptr and w.reg == v.reg for w in vs):
                v.ptr, ch = True, True
        return ch
    text = emit(0, len(blocks), 1)
    for _ in range(6):
        prev, text = text, emit(0, len(blocks), 1)
        if text == prev and not unify():
            break
    if "goto" in text:
        raise Fail("goto")
    locals_ = sorted({v for v in used_vars if isinstance(v, Var)}, key=lambda v: REGS.index(v.reg))
    for v in list(V.values()) + [p for p in P if isinstance(p, Var)]:
        if v.ptr and v not in locals_:
            locals_.append(v)
    # (two variables of one register: one, a pointer if either is)
    locals_ = [v for v in locals_ if v.ptr or not any(w is not v and w.reg == v.reg and w.ptr for w in locals_)]
    locals_ = [v for k, v in enumerate(locals_) if not any(w.reg == v.reg for w in locals_[:k])]
    decls ="".join(f"    {'u8 *' if v.ptr else 's32 '}{v.reg};\n" for v in locals_)
    args = ", ".join(f"u8 *arg{i}" if P[i].ptr else f"{P[i].type} arg{i}" for i in range(nparams)) or "void"
    if low is not None:
        decls = f"    s32 local[{(size - low) // 4}];\n" + decls
    decls += "".join(f"    {c.ret}{'' if c.ret.endswith('*') else ' '}v{c.k};\n" for c in calls if c.used)
    decls += "".join(f"    {t.ctype()}{'' if t.ctype().endswith('*') else ' '}t{t.k};\n" for t in tmps if t.used)
    decl = f"{ret} {name}({args})"
    return decl, decls + text, callees


HEADERS = {}


def header_protos(h, seen=None):
    """the declarations of functions in include/h and the headers it includes"""
    if h in HEADERS:
        return HEADERS[h]
    seen = seen or set()
    out = {}
    path = f"{ROOT}/include/{h}"
    if h in seen or not os.path.exists(path):
        return out
    seen.add(h)
    t = open(path).read()
    for h2 in re.findall(r'^#include "([^"]+)"', t, re.M):
        out.update(header_protos(h2, seen))
    for ret, nm, args in re.findall(r'^(?:extern "C" )?((?:const )?\w+ ?\**) ?(\w+)\(([^)]*)\);', t, re.M):
        ret = ret.strip()
        if ret in ("return", "typedef", "define") or args.strip() == "...":
            continue
        ts = [re.match(r"(.*[\s*])(\w+)$", a.strip()) for a in args.split(",")] if args.strip() not in ("void", "") else []
        if all(ts) and not any("(" in a for a in args.split(",")):
            out[nm] = (ret, [m[1].strip() for m in ts])
    HEADERS[h] = out
    return out


def prototypes(t):
    """name -> 'void(void)', VAR or (return type, [parameter types]) of the declarations
    of a file that can be called"""
    protos = {}
    # (the functions the headers it includes declare)
    for h in re.findall(r'^#include "([^"]+)"', t, re.M):
        protos.update(header_protos(h))
    for ret, nm, args in re.findall(r'^extern "C" (?:asm )?(\w+ ?\**) ?(\w+)\(([^)]*)\)', t, re.M):
        ret = ret.strip()
        if ret == "void" and args == "void":
            protos.setdefault(nm, "void(void)")
        elif ret == "s32" and args == "...":
            protos[nm] = VAR
        else:
            ts = [re.match(r"(.*[\s*])(\w+)$", a.strip()) for a in args.split(",")] if args != "void" else []
            if all(ts):
                protos[nm] = (ret, [m[1].strip() for m in ts])
    # (a function in C keeps its declaration, 'void F(void)' too)
    for ret, nm in re.findall(r'^extern "C" (?!asm )(\w+ ?\**) ?(\w+)\(void\)\n\{', t, re.M):
        protos[nm] = (ret.strip(), [])
    # (and its parameters are all there are: registers written besides them are left over)
    CDEF.clear()
    CDEF.update(re.findall(r'^extern "C" (?!asm )\w+ ?\**? ?(\w+)\([^)]*\)\n\{', t, re.M))
    ASMP.clear()
    for b in re.finditer(r'^extern "C" asm void (\w+)\(void\)\n\{\n(.*?)\n\}\n', t, re.M | re.S):
        try:
            ASMP[b[1]] = asm_params(b[2], protos)
        except Exception:
            ASMP[b[1]] = None
    return protos


CDEF = set()
ASMP = {}
GLOBALP = {}     # (the same for the functions of every file, and the parameters of the ones in C)


def global_params():
    """GLOBALP from build/params.json, made again when a source file is newer"""
    import glob as glob_, json, os
    files = glob_.glob(f"{ROOT}/src/**/*.c", recursive=True) + glob_.glob(f"{ROOT}/src/**/*.cpp", recursive=True)
    files = [f for f in files if not re.search(r"_(try|diff\w*|perm)\.cpp$", f)]
    cache = f"{ROOT}/build/params.json"
    try:
        GLOBALP.update(json.load(open(cache)))     # (delete it to make it again)
        return
    except (OSError, ValueError):
        pass
    for f in files:
        t = open(f, errors="replace").read()
        for b in re.finditer(r'^(?:extern "C" )?asm void (\w+)\(void\)\n\{\n(.*?)\n\}', t, re.M | re.S):
            try:
                n = asm_params(b[2], {})
            except Exception:
                n = None
            if n is not None:
                GLOBALP[b[1]] = n
        for nm, args in re.findall(r'^(?:extern "C" )?(?!asm )\w+ ?\**? ?(\w+)\(([^)]*)\)\n\{', t, re.M):
            if "..." not in args:
                GLOBALP[nm] = 0 if args.strip() in ("", "void") else args.count(",") + 1
    try:
        os.makedirs(f"{ROOT}/build", exist_ok=True)
        json.dump(GLOBALP, open(cache, "w"))
    except OSError:
        pass


def asm_params(body, protos):
    """how many of r0-r3 an asm function reads before it writes them (its parameters), by
    liveness over its instructions; None if it can't tell"""
    lines = [l.strip() for l in body.strip().split("\n") if l.strip()]
    labels = {l[:-1]: i for i, l in enumerate(lines) if l.endswith(":")}
    A = ["r0", "r1", "r2", "r3"]
    info = []
    since = set()     # (the argument registers written since the last call or label)
    for i, l in enumerate(lines):
        if l.endswith(":"):
            info.append((set(), set(), [i + 1]))
            since = set()
            continue
        m = re.match(r"(\w+)\s*(.*)$", l)
        mn, op = m[1], m[2]
        sm = split_mnemonic(mn)
        rs = re.findall(r"\b(r\d+|lr|ip|sb|sl|fp)\b", op)
        nxt = [i + 1]
        if re.match(r"(ldm|stm)", mn):
            mm = re.match(r"(ldm|stm)(\w*) (\w+)(!?), \{([^}]*)\}$", l)
            if not mm:
                return None
            lst = [x.strip() for x in mm[5].split(",")]
            cond = mm[2][2:] if mm[2][:2] in ("ia", "ib", "da", "db", "fd", "ed", "fa", "ea") else mm[2]
            if mm[3] == "sp":
                u, d = set(), (set(lst) - {"pc"} if mm[1] == "ldm" else set())
                if "pc" in lst:
                    nxt = [i + 1] if cond else []
            elif mm[1] == "ldm":
                u, d = {mm[3]}, set(lst)
            else:
                u, d = {mm[3]} | set(lst), set()
            if cond:
                u = u | d
            info.append((u, d, nxt))
            since |= d & set(A)
            continue
        if sm is None:
            if mn in ("smull", "umull", "smlal", "umlal") or re.match(r"(smull|umull|smlal|umlal)", mn):
                info.append((set(rs[2:]) | (set(rs[:2]) if "la" in mn else set()), set(rs[:2]), nxt))
                since |= set(rs[:2]) & set(A)
                continue
            if re.match(r"(clz|mrs|msr|swi|svc|mcr|mrc|nop)", mn):
                info.append((set(rs[1:]), set(rs[:1]), nxt))
                continue
            return None
        base, cond, _ = sm
        if base == "b":
            t = op.strip()
            if t.startswith("@") and t in labels:
                nxt = [labels[t] + 1] + ([i + 1] if cond else [])
                info.append((set(), set(), nxt))
            else:
                # (a tail call: the registers written for it, or all of them if none were)
                k = max([int(r[1:]) + 1 for r in since] + [0]) or 4
                info.append(({f"r{j}" for j in range(k)}, set(), [i + 1] if cond else []))
            continue
        if base == "bx":
            k = max([int(r[1:]) + 1 for r in since] + [0]) or 4
            info.append(((set() if op.strip() == "lr" else {f"r{j}" for j in range(k)} | set(rs)), set(), [i + 1] if cond else []))
            continue
        if base in ("bl", "blx"):
            pr = protos.get(op.strip()) if base == "bl" else None
            if isinstance(pr, tuple):
                k = min(4, len(pr[1]))
            else:
                k = max([int(r[1:]) + 1 for r in since] + [0])
            info.append(({f"r{j}" for j in range(k)} | (set(rs) if base == "blx" else set()),
                         {"r0", "r1", "r2", "r3", "r12"}, nxt))
            since = set()
            continue
        if "pc" in op.split(",")[0]:
            return None     # (a jump table)
        if base in ("cmp", "cmn", "tst") or base in STORE:
            u, d = set(rs), set()
            if base in STORE and re.search(r"\]!|\], #", op):
                d = {re.search(r"\[(\w+)", op)[1]}
        else:
            u, d = set(rs[1:]), set(rs[:1])
            if base in LOAD and re.search(r"\]!|\], #", op):
                d.add(re.search(r"\[(\w+)", op)[1])
        if cond:
            u = u | d
        info.append((u, d, nxt))
        if not cond:
            since |= d & set(A)
    n = len(info)
    live = [set() for _ in range(n + 1)]
    for _ in range(n + 2):
        ch = False
        for i in range(n - 1, -1, -1):
            u, d, nxt = info[i]
            out_ = set().union(*[live[j] for j in nxt if j < n]) if nxt else set()
            new = u | (out_ - d)
            if new != live[i]:
                live[i], ch = new, True
        if not ch:
            break
    ps = [int(r[1:]) for r in live[0] if r in A]
    return max(ps) + 1 if ps else 0


# (the runtime's float functions: their arguments, in words)
RUNTIME_ARGS = {"_fadd": 2, "_fsub": 2, "_fmul": 2, "_fdiv": 2, "_fflt": 1, "_ffltu": 1, "_ffix": 1, "_fgr": 2,
                "_fls": 2, "_f2d": 1, "_d2f": 2, "_dflt": 1, "_dfltu": 1, "_dfix": 2, "_dfixu": 2, "_dadd": 4,
                "_dsub": 4, "_dgeq": 4, "_dgr": 4, "_dleq": 4, "_dls": 4, "_deq": 4, "_dneq": 4}


def mangled_args(nm):
    """the number of arguments of a C++ function from its mangled name ('this' too, for a
    function in a class), or None"""
    if nm in RUNTIME_ARGS:
        return RUNTIME_ARGS[nm]
    if not nm.startswith("_Z"):
        return None
    s, i = nm, 2

    def ident():
        nonlocal i
        m = re.match(r"\d+", s[i:])
        if not m:
            return False
        i += len(m[0]) + int(m[0])
        return i <= len(s)

    def name_():
        nonlocal i
        if s[i:i + 1].isdigit():
            ok = ident()
        elif re.match(r"C[123]|D[012]", s[i:i + 2]):
            i += 2
            ok = True
        elif re.match(r"[a-z][a-zA-Z]", s[i:i + 2]):
            i += 2     # (an operator)
            ok = True
        elif s.startswith("St", i):
            i += 2
            ok = ident()
        else:
            return False
        if ok and s.startswith("I", i):
            i += 1
            while i < len(s) and s[i] != "E":
                if not type_():
                    return False
            i += 1
        return ok

    def nested():
        nonlocal i
        i += 1
        while s[i:i + 1] in ("K", "V", "r"):
            i += 1
        while i < len(s) and s[i] != "E":
            if s[i] == "S":
                if not subst():
                    return False
            elif not name_():
                return False
        i += 1
        return i <= len(s)

    def subst():
        nonlocal i
        m = re.match(r"S[0-9A-Z]*_|S[tabsiod]", s[i:])
        if not m:
            return False
        i += len(m[0])
        return True

    def type_():
        nonlocal i
        if i >= len(s):
            return False
        ch = s[i]
        if ch in "vbcahstijlmxynofdez":
            i += 1
            return True
        if ch in "PRKVrO":
            i += 1
            return type_()
        if ch == "N":
            return nested()
        if ch == "S":
            if not subst():
                return False
            if s.startswith("I", i):
                i += 1
                while i < len(s) and s[i] != "E":
                    if not type_():
                        return False
                i += 1
            return True
        if ch == "F":
            i += 1
            while i < len(s) and s[i] != "E":
                if not type_():
                    return False
            i += 1
            return True
        if ch == "A":
            m = re.match(r"A\d*_", s[i:])
            if not m:
                return False
            i += len(m[0])
            return type_()
        if ch == "M":
            i += 1
            return type_() and type_()
        if ch.isdigit():
            return name_()
        return False
    if s.startswith("N", i):
        this = 1
        if not nested():
            return None
    else:
        this = 0
        if not name_():
            return None
    n = 0
    if s[i:] == "v":
        return this
    while i < len(s):
        if not type_():
            return None
        n += 1
    return this + n


def is_func(nm, protos):
    """whether a symbol is a function (a declaration 'void F(void)' can be data, for asm)"""
    return nm in protos and (nm in FUNCS or not FUNCS)


def apply(t, name, block, decl, body, protos, callees):
    if OPT.get(name):
        # (compiled at a lower optimization level)
        t = t.replace(block, f'#pragma push\n#pragma optimization_level {OPT[name][0]}\nextern "C" {decl}\n{{\n{body}}}\n#pragma pop\n', 1)
    else:
        t = t.replace(block, f'extern "C" {decl}\n{{\n{body}}}\n', 1)
    # (data declared as a function for asm, used from C: an array)
    for d in set(re.findall(r"\(u8 \*\)&(\w+)\)", body)):
        if FUNCS and d not in FUNCS:
            t = re.sub(r'^extern "C" void %s\(void\);' % d, f'extern "C" char {d}[];', t, count=1, flags=re.M)
    if re.search(r"\((VCall|W\d|WN<\d+>) \*\)", body) and '#include "game/vcall.hpp"' not in t:
        t = re.sub(r'^(#include [^\n]*\n)', r'\1#include "game/vcall.hpp"\n', t, count=1, flags=re.M)
    t = re.sub(r'^extern "C" void %s\(void\);' % name, f'extern "C" {decl};', t, count=1, flags=re.M)
    for f in callees:
        if f in UNDECL and not re.search(r'^extern "C" [^\n]*\b%s\(' % f, t, re.M):
            t = t.replace('extern "C"', f'extern "C" s32 {f}(...);\nextern "C"', 1)     # (not declared yet)
            continue
        if protos[f] == "void(void)":
            t = re.sub(r'^extern "C" void %s\(void\);' % f, f'extern "C" s32 {f}(...);', t, count=1, flags=re.M)
            t = re.sub(r'^extern "C" asm void %s\(void\)$' % f, f'extern "C" asm s32 {f}(...)', t, count=1, flags=re.M)
    return t


def near_save(name, k, c, protos, orig):
    """keeps the closest try at name that didn't match, as build/near/NAME.c (a file for
    scratch handapply.py: '//@near K' with K the words that differ, then the other changes
    to the source it needs, then the C)"""
    block, decl, body, callees = c
    path = f"{ROOT}/build/near/{name}.c"
    try:
        if int(open(path).readline().split()[1]) <= k:
            return
    except (OSError, ValueError, IndexError):
        pass
    out = [f"//@near {k}"]
    if re.search(r"\((VCall|W\d|WN<\d+>) \*\)", body) and '#include "game/vcall.hpp"' not in orig:
        out.append('#include "game/vcall.hpp"')
    for d in sorted(set(re.findall(r"\(u8 \*\)&(\w+)\)", body))):
        if FUNCS and d not in FUNCS and orig.count(f'extern "C" void {d}(void);\n') == 1:
            out.append(f'//@replace extern "C" void {d}(void);\\n => extern "C" char {d}[];\\n')
    for f in sorted(set(callees)):
        if f in UNDECL and not re.search(r'^extern "C" [^\n]*\b%s\(' % f, orig, re.M):
            out.append(f'extern "C" s32 {f}(...);')
        elif protos.get(f) == "void(void)":
            for a in (f'extern "C" void {f}(void);\n', f'extern "C" asm void {f}(void)\n'):
                if orig.count(a) == 1:
                    b_ = a.replace("void " + f + "(void)", f"s32 {f}(...)")
                    out.append(f"//@replace {a[:-1]}\\n => {b_[:-1]}\\n")
    if OPT.get(name):
        out += ["#pragma push", f"#pragma optimization_level {OPT[name][0]}"]
    out.append(f'extern "C" {decl}\n{{\n{body}}}')
    if OPT.get(name):
        out.append("#pragma pop")
    os.makedirs(os.path.dirname(path), exist_ok=True)
    save(path, "\n".join(out) + "\n")


def save(path, text):
    for k in range(20):
        try:
            open(path, "w", newline="\n").write(text)
            return
        except OSError:
            time.sleep(0.5)
    open(path, "w", newline="\n").write(text)


def sym_ptrs(body):
    """body with each symbol used more than once through a pointer variable to it ('u8 *p0
    = (u8 *)&data;'), the way MW gives it a register of its own"""
    syms = re.findall(r"\(\(u8 \*\)&(\w+)\)", body)
    many = [x for x in dict.fromkeys(syms) if syms.count(x) > 1]
    if not many:
        raise Fail("no symbol used twice")
    head = ""
    for k, x in enumerate(many):
        body = body.replace(f"((u8 *)&{x})", f"p{k}")
        head += f"    u8 *p{k} = (u8 *)&{x};\n"
    lines = body.split("\n")
    # (after the declarations at the start)
    n = 0
    while n < len(lines) and re.match(r"    [\w ]+\*? ?\w+(\[\d+\])?;$", lines[n]):
        n += 1
    return "\n".join(lines[:n] + [head.rstrip("\n")] + lines[n:])


def low_opt(body):
    """True for code MW didn't compile at -O4: a counting loop entered by 'b test' though its
    counter starts at a constant (-O4 drops that first test)"""
    L = [l.strip() for l in body.split("\n")]
    for i, l in enumerate(L):
        b = re.fullmatch(r"b (@L_\w+)", l)
        if not b or b[1] + ":" not in L:
            continue
        j = L.index(b[1] + ":")
        c = re.fullmatch(r"cmp (r\d+), #\w+", L[j + 1]) if j + 1 < len(L) else None
        if c and any(re.fullmatch(rf"mov {c[1]}, #\w+", x) for x in L[max(0, i - 8):i]):
            return True
    return False


def exhausted(name, failed):
    """name has no more variants: tried again from the start at the next optimization level, or failed"""
    if len(OPT.get(name, [])) > 1:
        OPT[name].pop(0)
        VARIANT[name] = 0
        return True
    failed.add(name)
    return False


def lift_file(src, sizes, failed):
    """Lifts what it can of a file; the number of functions lifted."""
    t = open(src).read()
    protos = prototypes(t)
    blocks = list(re.finditer(r'^extern "C" asm void (\w+)\(void\)\n\{\n(.*?)\n\}\n', t, re.M | re.S))
    cand = {}
    for b in blocks:
        if b[2].count("\n") > 400 or b[1] in failed:
            continue
        if b[1] not in OPT:
            OPT[b[1]] = [2, 1] if low_opt(b[2]) else []
        v = VARIANT.get(b[1], 0)
        try:
            # (variants: lift() 0-3 (without branches), then lift_cfg() 0-7)
            if "@" not in b[2] and v < 4:
                try:
                    d_, body_, cl_ = lift(b[1], b[2], protos, v & 1)
                    if v & 2:
                        body_ = sym_ptrs(body_)
                    cand[b[1]] = (b[0], d_, body_, cl_)
                except (Fail, KeyError, IndexError):
                    VARIANT[b[1]] = v = 4
            if b[1] not in cand:
                w = v - 4 if "@" not in b[2] else v
                if w >= 32:
                    raise Fail("no more variants")
                cand[b[1]] = (b[0],) + lift_cfg(b[1], b[2], protos, w)
        except (Fail, KeyError, IndexError):
            if v + 1 < VARIANTS:
                VARIANT[b[1]] = v + 1
            else:
                exhausted(b[1], failed)
    # (a function that calls another one lifted now waits: the callee's declaration changes)
    cand = {n: c for n, c in cand.items() if not any(f in cand for f in c[3])}
    if not cand:
        return 0
    orig = t
    for name, (block, decl, body, callees) in cand.items():
        t = apply(t, name, block, decl, body, protos, callees)
    save(src, t)
    r =subprocess.run([sys.executable, f"{ROOT}/tools/fncmp.py", src, *cand], capture_output=True, text=True)
    good = set()
    for mm in re.finditer(r"^(\w+): OK \((\d+) bytes\)", r.stdout, re.M):
        if sizes.get(mm[1]) == int(mm[2]):
            good.add(mm[1])
    for mm in re.finditer(r"^(\w+): (?:OK|(\d+) words differ) \((\d+) bytes\)", r.stdout, re.M):
        if mm[1] in cand and mm[1] not in good:
            # (the words that differ, and those missing or extra)
            k_ = int(mm[2] or 0) + abs(sizes.get(mm[1], 0) - int(mm[3])) // 4
            near_save(mm[1], k_, cand[mm[1]], protos, orig)
    def next_variant(names):
        """True if some of names are tried again (written another way)"""
        again = False
        for n_ in names:
            v = VARIANT.get(n_, 0)
            if v + 1 < VARIANTS:
                VARIANT[n_] = v + 1
                again = True
            elif exhausted(n_, failed):
                again = True
        return again
    if r.returncode and not re.search(r"^\w+: .*bytes\)$", r.stdout, re.M):
        # (the functions with the errors stay asm, and the others are tried again)
        save(src, orig)
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
            failed |= set(cand)
            return 0
        next_variant(bad)
        return -1
    again = next_variant(set(cand) - good)
    # (the ones that don't match go back to asm)
    t = orig
    for name, (block, decl, body, callees) in cand.items():
        if name in good:
            t = apply(t, name, block, decl, body, protos, callees)
    save(src, t)
    return len(good) or (-1 if again else 0)


def main():
    global_params()
    for src in sys.argv[1:]:
        sizes = {}
        cfgs = ["config/yeep/arm9/symbols.txt"]
        m = re.match(r"src/(ov\d{3})/", src.replace("\\", "/"))
        if m:
            cfgs = [f"config/yeep/arm9/overlays/{m[1]}/symbols.txt"]
        cfgs.append("config/yeep/arm9/itcm/symbols.txt")     # (for tail calls to the ITCM)
        for c in cfgs:
            for line in open(f"{ROOT}/{c}"):
                mm = re.match(r"(\S+) kind:function\S*size=(0x[0-9a-f]+)\S* addr", line)
                if mm:
                    sizes[mm[1]] = int(mm[2], 16)
                mm = re.match(r"(\S+) kind:function\S* addr:(0x[0-9a-f]+)", line)
                if mm:
                    FUNCS[mm[1]] = int(mm[2], 16)
        failed, total = set(), 0
        while True:
            n = lift_file(src, sizes, failed)
            total += max(n, 0)
            if not n:
                break
        if total:
            print(f"{src}: {total} functions in C")


main()
