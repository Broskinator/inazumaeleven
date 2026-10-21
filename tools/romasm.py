#!/usr/bin/env python3
"""Prints a function of the original ROM (main module) as MWCC inline asm.

usage: tools/romasm.py ADDRESS [CLASS]

Calls are named from relocs.txt/symbols.txt (members of CLASS by their short name).
Functions with literal pools are not supported (MWCC inline asm has no data words).
"""
import glob, re, sys
import capstone

ROOT = __file__.rsplit("/tools/", 1)[0]
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
    for line in open(f"{ROOT}/config/yeep/arm9/relocs.txt"):
        m = re.match(r"from:(0x[0-9a-f]+) kind:arm_call to:(0x[0-9a-f]+)", line)
        if m:
            calls[int(m.group(1), 16)] = int(m.group(2), 16)
    blob = open(f"{ROOT}/extract/yeep/arm9/arm9.bin", "rb").read()
    size = sizes[addr]
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md.syntax = capstone.CS_OPT_SYNTAX_NOREGNAME
    insns = list(md.disasm(blob[addr - 0x02000000:addr - 0x02000000 + size], addr))
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
        if i.address in calls:
            t = names.get(calls[i.address], f"func_{calls[i.address]:08x}")
            if t.startswith("_Z"):
                t = short(t, cls) or t
            op = t
        elif i.id == capstone.arm.ARM_INS_B and op.startswith("#"):
            op = f"@L_{int(op[1:], 16):08x}"
        elif "[pc" in op:
            sys.exit("literal pool load: not supported")
        # MWCC syntax for push/pop
        if mn.startswith("push"):
            mn, op = "stmdb" + mn[4:], "sp!, " + op
        elif mn.startswith("pop"):
            mn, op = "ldmia" + mn[3:], "sp!, " + op
        out.append(f"    {mn} {op}")
    print("\n".join(out))


main()
