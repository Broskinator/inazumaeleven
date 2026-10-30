#!/usr/bin/env python3
"""Prints a function of the original ROM as MWCC inline asm.

usage: tools/romasm.py [--ov N] ADDRESS [CLASS]

--ov N: the function is in overlay N (default: the main module).

Calls are named from relocs.txt/symbols.txt (members of CLASS by their short name).
Literal pool loads become "ldr rX, =value" (the compiler puts the pool at the end of the
function, in the order of first use, as the original does).
"""
import glob, os, re, sys
import capstone

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, f"{ROOT}/tools")
from asmconv import short  # noqa: E402


_tables = {}


def module_names(mod):
    """{address: name} of a module's symbols ("main" or an overlay number)."""
    if mod not in _tables:
        path = f"{ROOT}/config/yeep/arm9/symbols.txt" if mod == "main" else \
            f"{ROOT}/config/yeep/arm9/overlays/ov{mod:03d}/symbols.txt"
        table = {}
        for line in open(path):
            m = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", line)
            if m and int(m.group(2), 16) not in table:
                table[int(m.group(2), 16)] = m.group(1)
        _tables[mod] = table
    return _tables[mod]


def pc_outside(i, op, start, end):
    """A load of data outside the function [START, END) (it stays as it is)."""
    m = re.search(r"\[pc(?:, #(-?0x[0-9a-f]+|-?\d+))?\]", op)
    return bool(m) and not start <= i.address + 8 + int(m.group(1) or "0", 0) < end


def main():
    # --ov N: the function is in overlay N
    ov = None
    if "--ov" in sys.argv:
        i = sys.argv.index("--ov")
        ov = int(sys.argv[i + 1])
        del sys.argv[i:i + 2]
    addr = int(sys.argv[1], 16)
    cls = sys.argv[2] if len(sys.argv) > 2 else None
    cfg = f"{ROOT}/config/yeep/arm9" if ov is None else f"{ROOT}/config/yeep/arm9/overlays/ov{ov:03d}"
    names, sizes = {}, {}
    for line in open(f"{cfg}/symbols.txt"):
        m = re.match(r"(\S+) kind:function\(\w+,size=(0x[0-9a-f]+)\S*\) addr:(0x[0-9a-f]+)", line)
        if m:
            names[int(m.group(3), 16)] = m.group(1)
            sizes[int(m.group(3), 16)] = int(m.group(2), 16)
    calls = {}
    loads = {}
    if ov is not None:
        # (an overlay: its references to the main module and to other overlays are named
        # from their own symbols)
        main_names = module_names("main")
        for line in open(f"{cfg}/relocs.txt"):
            line = re.sub(r"module:overlays\((\d+)[^)]*\)", r"module:overlay(\1)", line)
            m = re.match(r"from:(0x[0-9a-f]+) kind:(\w+) to:(0x[0-9a-f]+)(?: add:(\S+))? module:(\w+)(?:\((\d+)\))?", line)
            if not m:
                continue
            frm, kind, to = int(m.group(1), 16), m.group(2), int(m.group(3), 16)
            add = int(m.group(4), 0) if m.group(4) else 0
            if m.group(5) == "main":
                name = main_names.get(to, f"func_{to:08x}" if "call" in kind else f"data_{to:08x}")
            elif m.group(5) == "overlay" and int(m.group(6)) != ov:
                o = int(m.group(6))
                name = module_names(o).get(to, f"func_ov{o:03d}_{to:08x}" if "call" in kind else f"data_ov{o:03d}_{to:08x}")
            elif m.group(5) == "overlay":
                name = None     # (this overlay: named below)
            else:
                continue
            if "call" in kind:
                calls[frm] = name if name else to
            elif kind == "load":
                loads[frm] = (name if name else to, add)
    for line in (open(f"{ROOT}/config/yeep/arm9/relocs.txt") if ov is None else []):
        if "module:overlays(" in line:
            if "kind:arm_call" not in line:
                continue    # (data at an address in several overlays: kept as a number)
            # (a call to an address in several overlays: named from the first one)
            line = re.sub(r"module:overlays\((\d+)[^)]*\)", r"module:overlay(\1)", line)
        m = re.match(r"from:(0x[0-9a-f]+) kind:arm_call to:(0x[0-9a-f]+) module:overlay\((\d+)\)", line)
        if m:
            # (a call into an overlay: named from that overlay's symbols)
            o = int(m.group(3))
            to = int(m.group(2), 16)
            calls[int(m.group(1), 16)] = ("ov", o, to)
            continue
        m = re.match(r"from:(0x[0-9a-f]+) kind:arm_call to:(0x[0-9a-f]+)", line)
        if m:
            calls[int(m.group(1), 16)] = int(m.group(2), 16)
        m = re.match(r"from:(0x[0-9a-f]+) kind:load to:(0x[0-9a-f]+)(?: add:(\S+))? module:overlay\((\d+)\)", line)
        if m:
            # (data of an overlay: named from that overlay's symbols)
            o = int(m.group(4))
            to = int(m.group(2), 16)
            name = f"data_ov{o:03d}_{to:08x}"
            for l2 in open(f"{ROOT}/config/yeep/arm9/overlays/ov{o:03d}/symbols.txt"):
                mm = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", l2)
                if mm and int(mm.group(2), 16) == to:
                    name = mm.group(1)
                    break
            loads[int(m.group(1), 16)] = (name, int(m.group(3), 0) if m.group(3) else 0)
            continue
        m = re.match(r"from:(0x[0-9a-f]+) kind:load to:(0x[0-9a-f]+)(?: add:(\S+))?", line)
        if m:
            loads[int(m.group(1), 16)] = (int(m.group(2), 16), int(m.group(3), 0) if m.group(3) else 0)
    for line in open(f"{cfg}/symbols.txt"):
        m = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", line)
        if m and int(m.group(2), 16) not in names:
            names[int(m.group(2), 16)] = m.group(1)
    for tcm in ("itcm", "dtcm"):
        # (the code and data of the TCMs, by their names)
        for line in open(f"{ROOT}/config/yeep/arm9/{tcm}/symbols.txt"):
            m = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", line)
            if m and int(m.group(2), 16) not in names:
                names[int(m.group(2), 16)] = m.group(1)
    if ov is None:
        blob, base = open(f"{ROOT}/extract/yeep/arm9/arm9.bin", "rb").read(), 0x02000000
    else:
        blob = open(f"{ROOT}/extract/yeep/arm9_overlays/ov{ov:03d}.bin", "rb").read()
        base = int(re.search(r"\.text\s+start:(0x[0-9a-f]+)", open(f"{cfg}/delinks.txt").read()).group(1), 16)
    size = sizes[addr]
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md.syntax = capstone.CS_OPT_SYNTAX_NOREGNAME
    # the code ends where the literal pool starts
    import struct
    end = addr + size
    insns = []
    pc = addr
    # (data inside the code, as "START END" lines in codedata.txt)
    data = []
    if os.path.exists(f"{cfg}/codedata.txt"):
        data = [tuple(int(x, 16) for x in l.split()) for l in open(f"{cfg}/codedata.txt") if l.strip()]
    while pc < end:
        i = None if any(a <= pc < b for a, b in data) else next(md.disasm(blob[pc - base:pc - base + 4], pc), None)
        if i is None:
            # (a word that is no instruction: data in the code, written as a dcd)
            insns.append((pc, struct.unpack("<I", blob[pc - base:pc - base + 4])[0]))
            pc += 4
            continue
        insns.append(i)
        m = re.search(r"\[pc(?:, #(-?0x[0-9a-f]+|-?\d+))?\]", i.op_str)
        if m:
            if addr <= pc + 8 + int(m.group(1) or "0", 0) < addr + size:     # (not data outside the function)
                end = min(end, pc + 8 + int(m.group(1) or "0", 0))
        pc += 4
    targets = set()
    for i in insns:
        if isinstance(i, tuple):
            continue
        if i.id == capstone.arm.ARM_INS_B and i.op_str.startswith("#"):
            targets.add(int(i.op_str[1:], 16))
    # (a function with data in it: after a return, up to the next place a branch of the real
    # code goes, a table; or code after a literal pool in the middle. It is written word by
    # word: its loads as they are, the pool and the data as dcds, MW's own pool would go at
    # the end.)
    words = {}
    for p in range(addr, addr + size, 4):
        words[p] = None if any(s <= p < e for s, e in data) else next(md.disasm(blob[p - base:p - base + 4], p), None)
    PCREL = r"\[pc(?:, #(-?0x[0-9a-f]+|-?\d+))?\]"

    def stop(i):
        return (i.mnemonic == "bx" and i.op_str == "lr" or i.mnemonic == "b" or
                i.mnemonic in ("pop", "ldm") and "pc" in i.op_str or i.mnemonic == "mov" and i.op_str.startswith("pc,"))
    dead, pool = {p for p, i in words.items() if i is None}, set()
    for _ in range(10):
        live = [i for p, i in words.items() if p not in dead and p not in pool]
        pool = set()
        real = set()
        for i in live:
            m = re.search(PCREL, i.op_str)
            if m and addr <= i.address + 8 + int(m.group(1) or "0", 0) < addr + size:
                pool.add(i.address + 8 + int(m.group(1) or "0", 0))
            if i.id == capstone.arm.ARM_INS_B and i.op_str.startswith("#"):
                real.add(int(i.op_str[1:], 16))
        new, off = set(dead), False
        for p in sorted(words):
            if p in real:
                off = False
            if p in pool:
                continue
            if off:
                new.add(p)
            elif p not in new and stop(words[p]):
                off = True
        new -= pool
        if new == dead:
            break
        dead = new
    first_pool = min(pool, default=addr + size)
    literal = any(t >= first_pool for t in real if addr <= t < addr + size) or \
        any(p < first_pool and words[p] is not None for p in dead) or \
        any(p > first_pool and p not in pool and p not in dead for p in words)
    # (the same number twice in the pool: MW's asm would merge them, see docs/matching.md)
    nums = [blob[p - base:p - base + 4] for p in pool if p not in loads]
    literal = literal or len(nums) != len(set(nums))
    if literal:
        targets = real
        insns = [(p, struct.unpack("<I", blob[p - base:p - base + 4])[0]) if p in pool or p in dead else words[p]
                 for p in sorted(words)]
    out = []
    pools = {}
    for i in insns:
        if isinstance(i, tuple):
            if i[0] in targets:
                out.append(f"@L_{i[0]:08x}:")
            value = f"{i[1]:#010x}"
            if i[0] in loads:
                to, add = loads[i[0]]
                value = to if isinstance(to, str) else names.get(to, f"data_{to:08x}")
                if value.startswith(".L_"):
                    value = f"{i[1] - add:#010x}"     # (no name for it: as a number)
                value += f"+{add:#x}" if add else ""
            out.append(f"    dcd {value}")
            continue
        if i.address in targets:
            out.append(f"@L_{i.address:08x}:")
        op = i.op_str
        mn = i.mnemonic
        if i.address in calls and isinstance(calls[i.address], tuple):
            _, cov, to = calls[i.address]
            t = f"func_ov{cov:03d}_{to:08x}"
            for line in open(f"{ROOT}/config/yeep/arm9/overlays/ov{cov:03d}/symbols.txt"):
                mm = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", line)
                if mm and int(mm.group(2), 16) == to:
                    t = mm.group(1)
                    break
            op = t
        elif i.address in calls and isinstance(calls[i.address], str):
            op = calls[i.address]
            if op.startswith(".L_"):
                # (a label inside a function of another module, as a second entry: MW's asm
                # takes no such name, so the linker gets another one for the address)
                op = "func_" + op[3:]
                lcf = f"{ROOT}/config/yeep/arm9/lcf_symbols.txt"
                if f"{op} =" not in open(lcf).read():
                    with open(lcf, "a", newline="\n") as f:
                        f.write(f"{op} = 0x{op[5:]};\n")
            if mn == "blx":
                mn = "bl"     # (the linker makes it a blx: MW's asm can't take blx with a name)
        elif i.address in calls:
            t = names.get(calls[i.address], f"func_{calls[i.address]:08x}")
            if mn == "blx":
                mn = "bl"
            if t.startswith("_Z"):
                t = short(t, cls) or t
            op = t
        elif i.id == capstone.arm.ARM_INS_B and op.startswith("#") and not addr <= int(op[1:], 16) < addr + size:
            # (a branch into another function, without a relocation: the linker gets a name)
            to = int(op[1:], 16)
            op = names.get(to)
            if op is None or op.startswith(".L_"):
                op = f"func_{to:08x}"
                lcf = f"{ROOT}/config/yeep/arm9/lcf_symbols.txt"
                if f"{op} =" not in open(lcf).read():
                    with open(lcf, "a", newline="\n") as f:
                        f.write(f"{op} = {to:#010x};\n")
        elif i.id == capstone.arm.ARM_INS_B and op.startswith("#"):
            op = f"@L_{int(op[1:], 16):08x}"
        elif re.fullmatch(r"bl(eq|ne|cs|cc|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le)?", mn) and op.startswith("#"):
            # (a call without a relocation, in hand-written code; a target without a symbol
            # gets a name for the linker)
            to = int(op[1:], 16)
            op = names.get(to)
            if op is None:
                op = f"func_{to:08x}"
                lcf = f"{ROOT}/config/yeep/arm9/lcf_symbols.txt"
                if f"{op} =" not in open(lcf).read():
                    with open(lcf, "a", newline="\n") as f:
                        f.write(f"{op} = {to:#010x};\n")
        elif mn == "blx" and op.startswith("#"):
            # (a call of a Thumb function has no relocation: 'bl NAME', the linker makes it a blx)
            to = int(op[1:], 16)
            mn, op = "bl", names.get(to, names.get(to | 1, f"func_{to:08x}"))
        elif "[pc" in op and not literal and not pc_outside(i, op, addr, addr + size):
            m = re.search(r"\[pc(?:, #(-?0x[0-9a-f]+|-?\d+))?\]", op)
            lit = i.address + 8 + int(m.group(1) or "0", 0)
            if lit in loads:
                to, add = loads[lit]
                value = to if isinstance(to, str) else names.get(to, f"data_{to:08x}")
                if value.startswith("_Z"):
                    value = short(value, cls) or value     # (members of the class by their short name)
                value += f"+{add:#x}" if add else ""
                # (MW's asm merges equal literals: a second pool entry of the same value
                # uses a second name of the address, see docs/matching.md)
                seen = pools.setdefault(value, [])
                if lit not in seen:
                    seen.append(lit)
                k = seen.index(lit)
                if k and not isinstance(to, str) and not add:
                    alias = f"{value}_{'bcdefgh'[k - 1]}"
                    lcf = f"{ROOT}/config/yeep/arm9/lcf_symbols.txt"
                    if f"{alias} =" not in open(lcf).read():
                        with open(lcf, "a", newline="\n") as f:
                            f.write(f"{alias} = {to:#010x};\n")
                    value = alias
            else:
                value = hex(struct.unpack("<I", blob[lit - base:lit - base + 4])[0])
            op = op.split(",")[0] + ", =" + value
        # MWCC (pre-UAL) syntax: shifts are a mov with a shifted operand
        m = re.match(r"(lsl|lsr|asr|ror)(s?)(\w*)$", mn)
        if m and op.count(",") == 2:
            rd, rm, sh = [x.strip() for x in op.split(",")]
            mn, op = "mov" + m.group(3) + m.group(2), f"{rd}, {rm}, {m.group(1)} {sh}"
        m = re.match(r"rrx(s?)(\w*)$", mn)
        if m and op.count(",") == 1:
            mn, op = "mov" + m.group(2) + m.group(1), op + ", rrx"
        # MWCC (pre-UAL) syntax: the condition before the s (andseq -> andeqs)
        m = re.match(r"(and|eor|sub|rsb|add|adc|sbc|rsc|orr|mov|bic|mvn|mul|mla|umull|umlal|smull|smlal)s"
                     r"(eq|ne|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|cs|cc)$", mn)
        if m:
            mn = m.group(1) + m.group(2) + "s"
        # MWCC syntax for push/pop
        # MWCC (pre-UAL) syntax: ldr<cond>b, str<cond>h, ...
        m = re.match(r"(ldr|str)(sb|sh|b|h|d)(eq|ne|hs|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|cs|cc)$", mn)
        if m:
            mn = m.group(1) + m.group(3) + m.group(2)
        # MWCC syntax: ldm<cond>ia, stm<cond>db
        if mn[:3] in ("ldm", "stm") and len(mn) in (3, 5) and not mn.endswith(("ia", "db", "ib", "da")):
            mn = mn[:3] + mn[3:] + "ia"
        if mn.startswith("push"):
            mn, op = "stm" + mn[4:] + "db", "sp!, " + op
        elif mn.startswith("pop") and "," not in op and (int.from_bytes(i.bytes, "little") >> 25) & 7 == 2:
            # (one register: capstone shows 'ldr rX, [sp], #4' as a pop)
            mn, op = "ldr" + mn[3:], f"{op.strip('{}')}, [sp], #4"
        elif mn.startswith("pop"):
            mn, op = "ldm" + mn[3:] + "ia", "sp!, " + op
        # MWCC syntax for the system instructions
        if mn[:3] in ("mcr", "mrc"):
            op = op.replace("#", "")
        if mn[:3] in ("mrs", "msr"):
            op = op.replace("apsr_nzcvq", "CPSR_f").replace("apsr", "CPSR")
        if mn.startswith("bl") and op.startswith(".L_"):
            # (a label inside a function, as a second entry: MW's asm takes no such name,
            # so the linker gets another one for the address)
            op = "func_" + op[3:]
            lcf = f"{ROOT}/config/yeep/arm9/lcf_symbols.txt"
            if f"{op} =" not in open(lcf).read():
                with open(lcf, "a", newline="\n") as f:
                    f.write(f"{op} = 0x{op[5:]};\n")
        out.append(f"    {mn} {op}")
    print("\n".join(out))
    # the C++ functions of other classes and the data it uses need a declaration
    for line in out:
        m = re.match(r"\s*(?:b\S*|ldr\S*|dcd)\s+(?:\w+, =)?([A-Za-z_]\w*)(?:\+0x[0-9a-f]+)?$", line)
        if m and (m.group(1).startswith("r") and m.group(1)[1:].isdigit() or m.group(1) in ("sp", "lr", "pc")):
            m = None
        if m:
            print(f'extern "C" void {m.group(1)}(void);' if not m.group(1).startswith("data_")
                  else f'extern "C" char {m.group(1)}[];', file=sys.stderr)


main()
