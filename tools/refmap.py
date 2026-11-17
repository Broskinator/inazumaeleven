#!/usr/bin/env python3
"""Pairs the symbols of a reference decompilation with this game: functions and data.

usage: tools/refmap.py EXTRACT_DIR CONFIG_DIR REF_OBJ_DIR OUT.json

REF_OBJ_DIR holds the objects tools/refasm.py assembled from another game of the same engine
(Inazuma Eleven 3: ../ext/ie3obj). Three steps, each building on the one before:

  bytes   a reference function whose code, with the relocated words and the calls masked, is
          found at exactly one place in this game, where no other reference function fits
  calls   from a pair, every call and every pointer of the reference function names the symbol
          this game has at the same place: its target here is that symbol. A symbol is taken
          when all the pairs that reach it agree. This names functions whose code differs
          (other struct offsets), the functions the reference has in C++ already, and data.
  size    a function paired by calls that has the same size in both games is followed in turn

The output lists every pair with how it was found and how many call sites agree ("votes").
tools/refdoc.py turns it into docs/ie3_mapping.md and into a list of renames.

    python tools/refasm.py ../ext/ie3ogres ../ext/ie3obj
    python tools/refmap.py extract/yeep config/yeep/arm9 ../ext/ie3obj build/ie3_map.json
"""
import collections, glob, json, os, re, sys

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from sigmatch import anchor, load_modules, mask_calls

R_ARM_ABS32 = 2
CALL_TYPES = (1, 27, 28, 29)        # PC24, PLT32, CALL, JUMP24


def load_symbols(cfg):
    """module -> {address: (name, kind, size)}"""
    out = collections.defaultdict(dict)
    for p in glob.glob(f"{cfg}/**/symbols.txt", recursive=True):
        rel = os.path.relpath(os.path.dirname(p), cfg)
        mod = "main" if rel == "." else os.path.basename(rel)
        for line in open(p):
            m = re.match(r"(\S+) kind:(\w+)(?:\(([^)]*)\))? addr:(0x[0-9a-f]+)", line)
            if not m:
                continue
            size = re.search(r"size=(0x[0-9a-f]+)", m.group(3) or "")
            out[mod][int(m.group(4), 16)] = (m.group(1), m.group(2), int(size.group(1), 16) if size else 0)
    return out


class RefFunc:
    __slots__ = ("key", "name", "obj", "thumb", "size", "body", "mask", "refs", "local", "sec", "off")


def load_ref(objdir):
    """the functions of the reference objects, by the key of their symbol"""
    funcs, defined = [], {}
    for path in sorted(glob.glob(f"{objdir}/**/*.o", recursive=True)):
        obj = os.path.relpath(path, objdir).replace(os.sep, "/")
        try:
            f = ELFFile(open(path, "rb"))
        except Exception:
            continue
        symtab = f.get_section_by_name(".symtab")
        if not symtab:
            continue
        syms = list(symtab.iter_symbols())
        at = {}             # (section, offset) -> (name, is local)
        for s in syms:
            if not s.name or s.name.startswith("$") or not isinstance(s["st_shndx"], int):
                continue
            if s["st_info"]["type"] in ("STT_FUNC", "STT_OBJECT", "STT_NOTYPE"):
                at[(s["st_shndx"], s["st_value"] & ~1)] = (s.name, s["st_info"]["bind"] == "STB_LOCAL")
        rel = collections.defaultdict(list)
        for sec in f.iter_sections():
            if not isinstance(sec, RelocationSection):
                continue
            for r in sec.iter_relocations():
                s = syms[r["r_info_sym"]]
                add = r["r_addend"] if sec.is_RELA() else 0
                typ = r["r_info_type"]
                if s["st_info"]["type"] == "STT_SECTION":
                    hit = at.get((s["st_shndx"], add & ~1))
                    if not hit:
                        continue
                    name, local, add = hit[0], hit[1], 0
                else:
                    name, local = s.name, s["st_info"]["bind"] == "STB_LOCAL"
                    if typ in CALL_TYPES:
                        add = 0
                rel[sec["sh_info"]].append((r["r_offset"], typ, name, local, add))
        for s in syms:
            if s["st_info"]["type"] != "STT_FUNC" or s["st_size"] < 4 or not isinstance(s["st_shndx"], int) or s.name.startswith("$"):
                continue
            sec = f.get_section(s["st_shndx"])
            data = sec.data()
            start, size = s["st_value"] & ~1, s["st_size"]
            body = bytearray(data[start:start + size])
            if len(body) != size:
                continue
            fn = RefFunc()
            local = s["st_info"]["bind"] == "STB_LOCAL"
            fn.name, fn.obj, fn.thumb, fn.size, fn.local = s.name, obj, bool(s["st_value"] & 1), size, local
            fn.key = f"{obj}:{s.name}" if local else s.name
            fn.sec, fn.off = sec.name, start
            mask = bytearray([255] * size)
            fn.refs = []    # (offset, "call" or "word", symbol key, addend)
            for off, typ, name, loc, add in rel.get(s["st_shndx"], []):
                if start <= off < start + size:
                    for k in range(4):
                        if off - start + k < size:
                            mask[off - start + k] = 0
                    kind = "call" if typ in CALL_TYPES else "word" if typ == R_ARM_ABS32 else None
                    if kind:
                        fn.refs.append((off - start, kind, f"{obj}:{name}" if loc else name, add))
            if not fn.thumb:
                # (the calls the assembler resolved inside its own file carry no relocation)
                for i in range(0, size - 3, 4):
                    if not all(mask[i:i + 4]):
                        continue
                    w = int.from_bytes(body[i:i + 4], "little")
                    if (w & 0x0E000000) != 0x0A000000 or (w >> 28) == 0xF:
                        continue
                    d = w & 0xFFFFFF
                    if d & 0x800000:
                        d -= 0x1000000
                    tgt = start + i + 8 + d * 4
                    if start <= tgt < start + size:
                        continue
                    hit = at.get((s["st_shndx"], tgt))
                    if hit:
                        fn.refs.append((i, "call", f"{obj}:{hit[0]}" if hit[1] else hit[0], 0))
                mask_calls(body, mask)
            fn.body, fn.mask = bytes(body), bytes(mask)
            funcs.append(fn)
            defined[fn.key] = fn
    return funcs, defined


class Game:
    def __init__(self, ex, cfg):
        import yaml
        self.mods = {name: (base, blob) for name, base, blob in load_modules(ex)}
        self.syms = load_symbols(cfg)
        ovs = yaml.safe_load(open(f"{ex}/arm9_overlays/overlays.yaml"))["overlays"]
        self.ov = {"ov%03d" % o["id"]: (o["base_address"], o["base_address"] + o["code_size"] + o["bss_size"]) for o in ovs}
        self.ov_base = min(b for b, e in self.ov.values())
        self.fixed = [(n, b, b + len(blob)) for n, (b, blob) in self.mods.items() if n in ("itcm", "dtcm")]

    def word(self, mod, addr):
        base, blob = self.mods[mod]
        o = addr - base
        if 0 <= o <= len(blob) - 4:
            return int.from_bytes(blob[o:o + 4], "little")
        return None

    def module_of(self, caller, addr):
        """the module an address seen from the code of caller is in, or None when it cannot be told"""
        for n, b, e in self.fixed:
            if b <= addr < e:
                return n
        if 0x02000000 <= addr < self.ov_base:
            return "main"
        if caller in self.ov and self.ov[caller][0] <= addr < self.ov[caller][1]:
            return caller
        cands = [n for n, (b, e) in self.ov.items() if b <= addr < e and addr in self.syms.get(n, {})]
        return cands[0] if len(cands) == 1 else None

    def find(self, fn):
        a0, a1 = anchor(fn.body, fn.mask)
        if a1 - a0 < 8:
            return []
        key, hits, n = fn.body[a0:a1], [], len(fn.body)
        for mname, (base, blob) in self.mods.items():
            p = blob.find(key)
            while p >= 0:
                s = p - a0
                if s >= 0 and s % 2 == 0 and s + n <= len(blob):
                    seg = blob[s:s + n]
                    if all(seg[k] == fn.body[k] or not fn.mask[k] for k in range(n)):
                        hits.append((mname, base + s))
                p = blob.find(key, p + 1)
        return hits


def target(game, mod, addr, kind, add):
    """what the word at addr of this game points to, read as a call or as a pointer"""
    w = game.word(mod, addr)
    if w is None:
        return None
    if kind == "call":
        if (w & 0x0E000000) != 0x0A000000:
            return None
        d = w & 0xFFFFFF
        if d & 0x800000:
            d -= 0x1000000
        t = addr + 8 + d * 4
        if (w >> 28) == 0xF:
            t += (w >> 23) & 2
        return t
    t = (w - add) & 0xFFFFFFFF
    return t if 0x01FF8000 <= t < 0x02400000 or 0x027E0000 <= t < 0x02800000 else None


def main():
    ex, cfg, objdir, outp = sys.argv[1:5]
    smallest = 16
    game = Game(ex, cfg)
    funcs, defined = load_ref(objdir)

    # 1. bytes
    hits = {}
    at = collections.defaultdict(list)
    for fn in funcs:
        if fn.size < smallest:
            continue
        h = game.find(fn)
        if h:
            hits[fn.key] = h
            for x in h:
                at[x].append(fn.key)
    pairs = {}      # reference symbol -> [module, address, how, votes]
    for key, h in hits.items():
        if len(h) == 1 and len(at[h[0]]) == 1:
            pairs[key] = [h[0][0], h[0][1], "bytes", 0]

    # 2. calls and pointers, from every pair whose code lines up; 3. again from the new ones
    votes = collections.defaultdict(collections.Counter)
    done = set()
    todo = list(pairs)
    rounds = 0
    while todo:
        rounds += 1
        for key in todo:
            done.add(key)
            fn = defined[key]
            if fn.thumb:
                continue
            mod, addr = pairs[key][0], pairs[key][1]
            for off, kind, sym, add in fn.refs:
                t = target(game, mod, addr + off, kind, add)
                if t is None:
                    continue
                if kind == "call":
                    t &= ~1
                tm = game.module_of(mod, t)
                if tm:
                    votes[sym][(tm, t, kind)] += 1
        todo = []
        for sym, c in votes.items():
            total = sum(c.values())
            where = collections.Counter()
            for (m, a, k), n in c.items():
                where[(m, a)] += n
            (m, a), n = where.most_common(1)[0]
            if n != total and not (n >= 5 and n >= 0.9 * total):
                continue
            if sym in pairs:
                pairs[sym][3] = n if (pairs[sym][0], pairs[sym][1]) == (m, a) else -total
                continue
            fn = defined.get(sym)
            ours = game.syms.get(m, {}).get(a)
            if fn is not None:
                # (a reference function: only where this game has a function too)
                if not ours or ours[1] != "function":
                    continue
                if sym in hits and (m, a) in hits[sym]:
                    how = "bytes+calls"
                else:
                    how = "calls+size" if ours[2] == fn.size else "calls"
                pairs[sym] = [m, a, how, n]
                if how != "calls" and sym not in done:
                    todo.append(sym)
            else:
                pairs[sym] = [m, a, "calls", n]

    out = []
    for sym, (m, a, how, n) in pairs.items():
        fn = defined.get(sym)
        ours = game.syms.get(m, {}).get(a) or ("", "", 0)
        kinds = {k for (mm, aa, k) in votes.get(sym, {}) if (mm, aa) == (m, a)}
        out.append({"theirs": sym.split(":")[-1], "obj": fn.obj if fn else "", "local": bool(fn and fn.local),
                    "size": fn.size if fn else 0, "sec": fn.sec if fn else "", "off": fn.off if fn else 0, "module": m, "addr": a, "ours": ours[0], "ours_kind": ours[1],
                    "ours_size": ours[2], "how": how, "votes": n,
                    "ref": "function" if fn or "call" in kinds else "data"})
    out.sort(key=lambda r: (r["module"], r["addr"]))
    json.dump(out, open(outp, "w"), indent=0)
    c = collections.Counter(r["how"] for r in out)
    bad = sum(1 for r in out if r["votes"] < 0)
    print(f"{len(funcs)} reference functions, {len(hits)} found by bytes, {rounds} rounds")
    print(", ".join(f"{k}: {v}" for k, v in sorted(c.items())) + f"; {bad} byte pairs the calls disagree with")


if __name__ == "__main__":
    main()
