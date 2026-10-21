#!/usr/bin/env python3
"""Disassembles a range of the main module with the current names.

usage: tools/disrange.py START END
"""
import re, struct, sys
import capstone

ROOT = __file__.rsplit("/tools/", 1)[0]
names = {}
for line in open(f"{ROOT}/config/yeep/arm9/symbols.txt"):
    m = re.match(r"(\S+) kind:(\S+) addr:(0x[0-9a-f]+)", line)
    if m:
        names[int(m.group(3), 16)] = m.group(1)
relocs = {}
for line in open(f"{ROOT}/config/yeep/arm9/relocs.txt"):
    m = re.match(r"from:(0x[0-9a-f]+) kind:(\S+) to:(0x[0-9a-f]+)", line)
    if m:
        relocs[int(m.group(1), 16)] = int(m.group(3), 16)
start, end = (int(a, 16) for a in sys.argv[1:3])
blob = open(f"{ROOT}/extract/yeep/arm9/arm9.bin", "rb").read()
md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
funcs = sorted(a for a in names if start <= a < end)
pools = set()
addr = start
while addr < end:
    if addr in names and not names[addr].startswith("data_"):
        print(f"\n{names[addr]}:  ; {addr:#x}")
    word = struct.unpack("<I", blob[addr - 0x02000000:addr - 0x02000000 + 4])[0]
    if addr in pools:
        t = relocs.get(addr)
        print(f"  {addr:08x}  .word {names.get(t, hex(t)) if t is not None else hex(word)}")
        addr += 4
        continue
    ins = next(md.disasm(blob[addr - 0x02000000:addr - 0x02000000 + 4], addr), None)
    if ins is None:
        print(f"  {addr:08x}  .word {word:#x}")
        addr += 4
        continue
    text = f"{ins.mnemonic} {ins.op_str}"
    m = re.search(r"\[pc, #(-?0x[0-9a-f]+|-?\d+)\]", ins.op_str)
    if m:
        lit = addr + 8 + int(m.group(1), 0)
        pools.add(lit)
        val = struct.unpack("<I", blob[lit - 0x02000000:lit - 0x02000000 + 4])[0]
        t = relocs.get(lit)
        shown = names.get(t, hex(t)) if t is not None else hex(val)
        text = ins.mnemonic + " " + ins.op_str.split(",")[0] + ", =" + shown
    if ins.mnemonic.startswith("bl") or ins.mnemonic.startswith("b"):
        t = relocs.get(addr)
        m2 = re.match(r"#(0x[0-9a-f]+)", ins.op_str)
        if t is None and m2:
            t = int(m2.group(1), 16)
        if t is not None and t in names:
            text = f"{ins.mnemonic} {names[t]}"
    print(f"  {addr:08x}  {text}")
    addr += 4
