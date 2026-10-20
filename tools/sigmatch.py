#!/usr/bin/env python3
"""Find functions of reference libraries (built SDK objects) in the game's code.

usage: sigmatch.py EXTRACT_DIR OUT.json REF_DIR...

Each function of each reference object is compared, with its relocated words
masked, against the game's modules (ARM9 main, ITCM, DTCM, overlays).
"""
import json, os, sys, glob, re
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

def load_modules(ex):
    import yaml  # noqa
    mods = []
    def y(path):
        import yaml
        return yaml.safe_load(open(path))
    a9 = y(f"{ex}/arm9/arm9.yaml")
    mods.append(("main", a9.get("base_address", 0x02000000), open(f"{ex}/arm9/arm9.bin", "rb").read()))
    for nm in ("itcm", "dtcm"):
        p = f"{ex}/arm9/{nm}.bin"
        if os.path.exists(p):
            meta = y(f"{ex}/arm9/{nm}.yaml")
            mods.append((nm, meta["base_address"], open(p, "rb").read()))
    ov = y(f"{ex}/arm9_overlays/overlays.yaml")
    for o in ov["overlays"]:
        mods.append((f"ov{o['id']:03d}", o["base_address"], open(f"{ex}/arm9_overlays/{o['file_name']}", "rb").read()))
    return mods

def functions(path):
    out = []
    try:
        f = ELFFile(open(path, "rb"))
    except Exception:
        return out
    symtab = f.get_section_by_name(".symtab")
    if not symtab:
        return out
    # relocations per section index
    rel = {}
    for s in f.iter_sections():
        if isinstance(s, RelocationSection):
            tgt = s["sh_info"]
            for r in s.iter_relocations():
                rel.setdefault(tgt, []).append((r["r_offset"], r["r_info_type"]))
    for sym in symtab.iter_symbols():
        if sym["st_info"]["type"] != "STT_FUNC" or sym["st_size"] < 8:
            continue
        shn = sym["st_shndx"]
        if not isinstance(shn, int):
            continue
        sec = f.get_section(shn)
        data = sec.data()
        start = sym["st_value"] & ~1
        size = sym["st_size"]
        body = bytearray(data[start:start + size])
        if len(body) != size:
            continue
        mask = bytearray(b"\xff" * size)
        for off, typ in rel.get(shn, []):
            if start <= off < start + size:
                for k in range(4):
                    if off - start + k < size:
                        mask[off - start + k] = 0
        out.append((sym.name, bool(sym["st_value"] & 1), bytes(body), bytes(mask)))
    return out

def anchor(body, mask):
    best = (0, 0)
    i = 0
    n = len(body)
    while i < n:
        if mask[i]:
            j = i
            while j < n and mask[j]:
                j += 1
            if j - i > best[1] - best[0]:
                best = (i, j)
            i = j
        else:
            i += 1
    return best

def main():
    ex, outp, refs = sys.argv[1], sys.argv[2], sys.argv[3:]
    mods = load_modules(ex)
    results = []
    seen = 0
    for ref in refs:
        for path in sorted(glob.glob(f"{ref}/**/*.o", recursive=True)):
            obj = os.path.relpath(path, ref)
            for name, thumb, body, mask in functions(path):
                seen += 1
                a0, a1 = anchor(body, mask)
                if a1 - a0 < 8:
                    continue
                key = body[a0:a1]
                hits = []
                for mname, base, blob in mods:
                    p = blob.find(key)
                    while p >= 0:
                        s = p - a0
                        if s >= 0 and s % 2 == 0 and s + len(body) <= len(blob):
                            seg = blob[s:s + len(body)]
                            if all((seg[k] == body[k]) or not mask[k] for k in range(len(body))):
                                hits.append((mname, base + s))
                        p = blob.find(key, p + 1)
                if hits:
                    results.append({"ref": os.path.basename(ref.rstrip("/")), "obj": obj, "name": name, "thumb": thumb,
                                    "size": len(body), "masked": len(body) - sum(1 for m in mask if m), "hits": hits})
    json.dump(results, open(outp, "w"), indent=0)
    print(f"{seen} reference functions, {len(results)} found")

main()
