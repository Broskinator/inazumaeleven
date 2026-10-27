#!/usr/bin/env python3
"""Prints a function of the original ROM (main module) as MWCC inline asm.

usage: tools/romasm.py ADDRESS [CLASS]

Calls are named from relocs.txt/symbols.txt (members of CLASS by their short name).
Literal pool loads become "ldr rX, =value" (the compiler puts the pool at the end of the
function, in the order of first use, as the original does).
"""
import glob, os, re, sys
import capstone

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, f"{ROOT}/tools")
from asmconv import short  # noqa: E402


def main():
    addr = int(sys.argv[1], 16)
    cls = sys.argv[2] if len(sys.argv) > 2 else None
    names, sizes = {}, {}
    for line in open(f"{ROOT}/config/yeep/arm9/symbols.txt"):
        m = re.match(r"(\S+) kind:function\(\w+,size=(0x[0-9a-f]+)\S*\) addr:(0x[0-9a-f]+)", line)
        if m:
            names[int(m.group(3), 16)] = m.group(1)
            sizes[int(m.group(3), 16)] = int(m.group(2), 16)
    calls = {}
    loads = {}
    for line in open(f"{ROOT}/config/yeep/arm9/relocs.txt"):
        if "module:overlays(" in line:
            if "kind:arm_call" not in line:
                continue    # (data at an address in several overlays: kept as a number)
            # (a call to an address in several overlays: named from the first one)
            line = re.sub(r"module:overlays\((\d+)[^)]*\)", r"module:overlay(\1)", line)
        m = re.match(r"from:(0x[0-9a-f]+) kind:arm_call to:(0x[0-9a-f]+) module:overlay\((\d+)\)", line)
        if m:
            # (a call into an overlay: named from that overlay's symbols)
            ov = int(m.group(3))
            to = int(m.group(2), 16)
            calls[int(m.group(1), 16)] = ("ov", ov, to)
            continue
        m = re.match(r"from:(0x[0-9a-f]+) kind:arm_call to:(0x[0-9a-f]+)", line)
        if m:
            calls[int(m.group(1), 16)] = int(m.group(2), 16)
        m = re.match(r"from:(0x[0-9a-f]+) kind:load to:(0x[0-9a-f]+)(?: add:(\S+))? module:overlay\((\d+)\)", line)
        if m:
            # (data of an overlay: named from that overlay's symbols)
            ov = int(m.group(4))
            to = int(m.group(2), 16)
            name = f"data_ov{ov:03d}_{to:08x}"
            for l2 in open(f"{ROOT}/config/yeep/arm9/overlays/ov{ov:03d}/symbols.txt"):
                mm = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", l2)
                if mm and int(mm.group(2), 16) == to:
                    name = mm.group(1)
                    break
            loads[int(m.group(1), 16)] = (name, int(m.group(3), 0) if m.group(3) else 0)
            continue
        m = re.match(r"from:(0x[0-9a-f]+) kind:load to:(0x[0-9a-f]+)(?: add:(\S+))?", line)
        if m:
            loads[int(m.group(1), 16)] = (int(m.group(2), 16), int(m.group(3), 0) if m.group(3) else 0)
    for line in open(f"{ROOT}/config/yeep/arm9/symbols.txt"):
        m = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", line)
        if m and int(m.group(2), 16) not in names:
            names[int(m.group(2), 16)] = m.group(1)
    blob = open(f"{ROOT}/extract/yeep/arm9/arm9.bin", "rb").read()
    size = sizes[addr]
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md.syntax = capstone.CS_OPT_SYNTAX_NOREGNAME
    # the code ends where the literal pool starts
    import struct
    end = addr + size
    insns = []
    pc = addr
    while pc < end:
        i = next(md.disasm(blob[pc - 0x02000000:pc - 0x02000000 + 4], pc))
        insns.append(i)
        m = re.search(r"\[pc(?:, #(-?0x[0-9a-f]+|-?\d+))?\]", i.op_str)
        if m:
            end = min(end, pc + 8 + int(m.group(1) or "0", 0))
        pc += 4
    targets = set()
    for i in insns:
        if i.id == capstone.arm.ARM_INS_B and i.op_str.startswith("#"):
            targets.add(int(i.op_str[1:], 16))
    out = []
    for i in insns:
        if i.address in targets:
            out.append(f"@L_{i.address:08x}:")
        op = i.op_str
        mn = i.mnemonic
        if i.address in calls and isinstance(calls[i.address], tuple):
            _, ov, to = calls[i.address]
            t = f"func_ov{ov:03d}_{to:08x}"
            for line in open(f"{ROOT}/config/yeep/arm9/overlays/ov{ov:03d}/symbols.txt"):
                mm = re.match(r"(\S+) kind:\S* addr:(0x[0-9a-f]+)", line)
                if mm and int(mm.group(2), 16) == to:
                    t = mm.group(1)
                    break
            op = t
        elif i.address in calls:
            t = names.get(calls[i.address], f"func_{calls[i.address]:08x}")
            if t.startswith("_Z"):
                t = short(t, cls) or t
            op = t
        elif i.id == capstone.arm.ARM_INS_B and op.startswith("#"):
            op = f"@L_{int(op[1:], 16):08x}"
        elif mn == "blx" and op.startswith("#"):
            # (a call of a Thumb function has no relocation: 'bl NAME', the linker makes it a blx)
            to = int(op[1:], 16)
            mn, op = "bl", names.get(to, names.get(to | 1, f"func_{to:08x}"))
        elif "[pc" in op:
            m = re.search(r"\[pc(?:, #(-?0x[0-9a-f]+|-?\d+))?\]", op)
            lit = i.address + 8 + int(m.group(1) or "0", 0)
            if lit in loads:
                to, add = loads[lit]
                value = to if isinstance(to, str) else names.get(to, f"data_{to:08x}")
                if value.startswith("_Z"):
                    value = short(value, cls) or value     # (members of the class by their short name)
                value += f"+{add:#x}" if add else ""
            else:
                value = hex(struct.unpack("<I", blob[lit - 0x02000000:lit - 0x02000000 + 4])[0])
            op = op.split(",")[0] + ", =" + value
        # MWCC (pre-UAL) syntax: shifts are a mov with a shifted operand
        m = re.match(r"(lsl|lsr|asr|ror)(s?)(\w*)$", mn)
        if m and op.count(",") == 2:
            rd, rm, sh = [x.strip() for x in op.split(",")]
            mn, op = "mov" + m.group(3) + m.group(2), f"{rd}, {rm}, {m.group(1)} {sh}"
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
        elif mn.startswith("pop"):
            mn, op = "ldm" + mn[3:] + "ia", "sp!, " + op
        out.append(f"    {mn} {op}")
    print("\n".join(out))
    # the C++ functions of other classes and the data it uses need a declaration
    for line in out:
        m = re.match(r"\s*(?:bl\S*|ldr\S*)\s+(?:\w+, =)?([A-Za-z_]\w*)(?:\+0x[0-9a-f]+)?$", line)
        if m and (m.group(1).startswith("r") and m.group(1)[1:].isdigit() or m.group(1) in ("sp", "lr", "pc")):
            m = None
        if m:
            print(f'extern "C" void {m.group(1)}(void);' if not m.group(1).startswith("data_")
                  else f'extern "C" char {m.group(1)}[];', file=sys.stderr)


main()
