#!/usr/bin/env python3
"""Find functions of reference libraries (built SDK objects) in the game's code.

usage: sigmatch.py EXTRACT_DIR OUT.json REF_DIR... [--config CONFIG_DIR] [--min BYTES] [--calls]

Each function of each reference object is compared, with its relocated words
masked, against the game's modules (ARM9 main, ITCM, DTCM, overlays).

The reference objects are built libraries (the SDK), or the assembled asm of another
game's decompilation (tools/refasm.py). For the latter:
    --calls    also mask the calls and tail calls that leave the function (an assembler
               resolves the ones inside its own file, so they carry no relocation)
    --config   the game's config directory (config/yeep/arm9): each hit is given with the
               name and size this project has at that address ("ours" in the JSON)
    --min      the smallest function looked for, in bytes (default 8)

    python tools/sigmatch.py extract/yeep build/ie3_matches.json ../ext/ie3obj --calls --min 16 --config config/yeep/arm9
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

def mask_calls(body, mask):
    """masks the offsets of the ARM calls, and of the branches that leave the function"""
    n = len(body)
    for i in range(0, n - 3, 4):
        if not all(mask[i:i + 4]):
            continue
        w = int.from_bytes(body[i:i + 4], "little")
        cls = w & 0x0F000000
        if cls == 0x0B000000 or (w >> 25) == 0x7D:        # bl, blx
            mask[i] = mask[i + 1] = mask[i + 2] = 0
        elif cls == 0x0A000000 and (w >> 28) != 0xF:       # b: only when it goes outside
            off = w & 0xFFFFFF
            if off & 0x800000:
                off -= 0x1000000
            if not 0 <= i + 8 + off * 4 < n:
                mask[i] = mask[i + 1] = mask[i + 2] = 0


def load_symbols(cfg):
    """(module, address) -> (name, size) of the game's functions"""
    syms = {}
    for p in glob.glob(f"{cfg}/**/symbols.txt", recursive=True):
        rel = os.path.relpath(os.path.dirname(p), cfg)
        mod = "main" if rel == "." else os.path.basename(rel)
        for line in open(p):
            m = re.match(r"(\S+) kind:function\((\w+)(?:,size=(0x[0-9a-f]+))?\S* addr:(0x[0-9a-f]+)", line)
            if m:
                syms[(mod, int(m.group(4), 16))] = (m.group(1), int(m.group(3) or "0", 16))
    return syms


def functions(path, calls=False):
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
        if calls and not sym["st_value"] & 1:
            mask_calls(body, mask)
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
    argv = sys.argv[1:]
    calls = "--calls" in argv
    opt = {}
    for o in ("--config", "--min"):
        if o in argv:
            opt[o] = argv[argv.index(o) + 1]
            del argv[argv.index(o):argv.index(o) + 2]
    argv = [a for a in argv if a != "--calls"]
    ex, outp, refs = argv[0], argv[1], argv[2:]
    smallest = int(opt.get("--min", "8"), 0)
    syms = load_symbols(opt["--config"]) if "--config" in opt else None
    mods = load_modules(ex)
    results = []
    seen = 0
    for ref in refs:
        for path in sorted(glob.glob(f"{ref}/**/*.o", recursive=True)):
            obj = os.path.relpath(path, ref)
            for name, thumb, body, mask in functions(path, calls):
                seen += 1
                if len(body) < smallest:
                    continue
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
                    results.append({"ref": os.path.basename(ref.rstrip("/")), "obj": obj.replace(os.sep, "/"), "name": name, "thumb": thumb,
                                    "size": len(body), "masked": len(body) - sum(1 for m in mask if m), "hits": hits})
                    if syms is not None:
                        results[-1]["ours"] = [list(syms.get((m, a), ("", 0))) for m, a in hits]
    json.dump(results, open(outp, "w"), indent=0)
    print(f"{seen} reference functions, {len(results)} found")

if __name__ == "__main__":
    main()
