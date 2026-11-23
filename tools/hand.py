"""hand.py [--write | --nonmatching REASON] FILE...: checks hand-written C/C++ against the ROM.

Each function of a FILE takes the place of its asm (found in src/ by name) in a copy of its source,
which is compiled and compared with the original (tools/fncmp.py); nothing is written unless asked.
A FILE is either one function (name.c, the function func_X or Class::func_X) or a text file of
sections '#### func_X' (one function each; the same name may come several times to try variants:
each is checked alone, and with --write the first that matches is the one written).

    --write                 the functions that match go into the sources, the asm removed; a
                            member's declaration in its class's header follows the definition, and
                            when its parameters change tools/fixsyms.py renames the symbol and the
                            asm that calls it
    --nonmatching REASON    as --write, and the ones that don't match go in too, under
                            '#ifdef NONMATCHING' with the asm (given the attempt's signature) in
                            the '#else', after a comment '// (nonmatching: REASON)'

Lines before a function's definition are a preamble, put after its source's #includes (a struct,
an inline helper), or where the asm was after a line '//@local'; comment lines right before the
definition stay with it. Directives, on lines of their own:

    //@replace OLD => NEW             other text of the source changed with it (\\n for a line end),
                                      e.g. a placeholder 'extern "C" void func_Y(void);' typed
    //@sig [Class::]func_Y RET (ARGS) the real signature of a member this one calls that is still
                                      asm and declared 'void func_Y()': its declaration and its asm
                                      definition's first line become this (//@sig static ...)
    //@static                         the member is a static one (its definition cannot say so)

Example: python tools/hand.py batch.txt, then python tools/hand.py --write batch.txt and make.
"""
import glob, os, re, subprocess, sys, time
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__))).replace("\\", "/")
SIZES = {}
NL = chr(10)
SIG = re.compile(r"^//@sig (static )?(?:(\w+)::)?(\w+) (.+?) ?\((.*)\)\s*\n", re.M)


def size(fn):
    """fn's size in the ROM (symbols.txt), or None"""
    if not SIZES:
        for c in glob.glob(f"{ROOT}/config/yeep/arm9/**/symbols.txt", recursive=True):
            for line in open(c):
                m = re.match(r"(\S+) kind:function\S*size=(0x[0-9a-f]+)", line)
                if m:
                    k = re.search(r"func_(?:ov\d{3}_)?[0-9a-f]{8}", m[1])
                    SIZES[k[0] if k else m[1]] = int(m[2], 16)
    return SIZES.get(fn)


def asm_re(fn):
    """the asm definition of fn (free or member): group 1 the name with its class"""
    return re.compile(r'^(?:extern "C" )?asm [^\n(;]*?\b((?:\w+::)?%s)\([^\n]*\)\n\{\n.*?\n\}\n' % fn, re.M | re.S)


def sources():
    return [f.replace("\\", "/") for f in glob.glob(f"{ROOT}/src/**/*.cpp", recursive=True)
            if not re.search(r"_(try|diff\w*|perm)\.cpp$", f)]


def read(p):
    return open(p, encoding="utf-8", errors="replace").read()


def save(p, text, encoding="utf-8"):
    """writes text to p; retries while Windows holds the file (a compile reading it)"""
    for i in range(40):
        try:
            with open(p, "w", newline="\n", encoding=encoding) as f:
                f.write(text)
            return
        except PermissionError:
            if i == 39:
                raise
            time.sleep(0.25)


def find_src(fn):
    pat = re.compile(r'^(?:extern "C" )?asm [^\n(;]*?\b(?:\w+::)?%s\(' % fn, re.M)
    for f in sources():
        t = read(f)
        if fn in t and pat.search(t):
            return f
    return None


def def_match(code, fn):
    """the match of fn's definition line in a hand-format file (not a declaration, not a call):
    group 1 is the name, with its class when it is a member"""
    for m in re.finditer(r'^(?:extern "C" )?(?:static )?[^\n(;#/ ][^\n(;#/]*?\b((?:\w+::)?%s)\(([^\n]*)$' % fn, code, re.M):
        if not m[0].rstrip().endswith(";"):
            return m
    return None


def class_header(cls):
    for h in glob.glob(f"{ROOT}/include/**/*.hpp", recursive=True):
        t = read(h)
        if re.search(r"^(?:class|struct) %s\b[^;\n]*\{" % cls, t, re.M) or re.search(r"^(?:class|struct) %s\b[^;\n]*\n\{" % cls, t, re.M):
            return h.replace("\\", "/"), t
    return None, None


def decl_re(fn):
    return re.compile(r"^[ \t]+(?:static |virtual )*[^\n(;/]*\b%s\([^;\n]*\);[^\n]*$" % fn, re.M)


def member_decl(d, old, static=False):
    """the declaration line for the header: d is 'RET name(ARGS)', old the line it replaces"""
    pre = re.match(r"^(\s*)((?:static |virtual )*)", old)
    tail = re.search(r";(\s*//.*)?$", old)
    st = pre[2] if "static" in pre[2] or not static else "static " + pre[2]
    return pre[1] + st + d + ";" + ((tail[1] or "") if tail else "")


def same(a, b):
    return a.split("//")[0].split() == b.split("//")[0].split()


def named(ret, name, args):
    return f"{ret}{name}({args})" if ret.endswith("*") else f"{ret} {name}({args})"


def check(code, fn, write=False, tag="hand", src=None, nm=None):
    """(k, output): k the words that differ (with those missing or extra; 0: it matches, None: it
    doesn't compile or there's no asm of fn) of code in place of fn's asm"""
    code = re.sub(r"^//@near.*\n", "", code.strip() + "\n", flags=re.M)
    sigs = SIG.findall(code)
    code = SIG.sub("", code)
    static = "//@static" + NL in code
    code = code.replace("//@static" + NL, "")
    dm = def_match(code, fn)
    if not dm:
        return None, f"{fn} no definition of it in the file"
    i = dm.start()
    # pragmas and comments just before it go with it, in any order: the comments before it
    # (lead), the pragmas with its code (inside the #ifdef of an attempt)
    j = i
    pragmas, comments = [], []
    while code[:j].endswith("\n"):
        last = code[:j].rstrip("\n").split("\n")[-1]
        if last.startswith("#pragma"):
            pragmas.insert(0, last + "\n")
        elif last.startswith("//") and not last.startswith("//@"):
            comments.insert(0, last + "\n")
        else:
            break
        j = code[:j].rstrip("\n").rfind("\n") + 1
    pre, lead, body = code[:j], "".join(comments), "".join(pragmas) + code[i:]
    if "//@local\n" in code:
        k = code.index("//@local\n")
        pre, lead, body = code[:k], "", code[k + len("//@local\n"):]
    src = src or find_src(fn)
    if not src:
        return None, f"{fn} no asm of it"
    t = read(src)
    for m in re.finditer(r"^//@replace (.*?) => (.*)\n", pre + body, re.M):
        old, new = m[1].replace("\\n", "\n"), m[2].replace("\\n", "\n")
        if t.count(old) != 1:
            return None, f"{fn} //@replace: {old!r} found {t.count(old)} times"
        t = t.replace(old, new)
    pre = re.sub(r"^//@replace .*\n", "", pre, flags=re.M)
    body = re.sub(r"^//@replace .*\n", "", body, flags=re.M)
    b = asm_re(fn).search(t)
    if not b:
        return None, f"{fn} no asm of it"
    sig = next(l for l in body.split("\n") if def_match(l + "\n", fn))
    # (nm: what --nonmatching writes when it does not match: the attempt under NONMATCHING, the asm
    # with the attempt's signature otherwise)
    s = sig.strip().rstrip("{").strip()
    head = 'extern "C" asm ' + s[len('extern "C" '):] if s.startswith('extern "C" ') else "asm " + s
    block = (lead + f"// (nonmatching: {nm})\n#ifdef NONMATCHING\n" + body.rstrip("\n") + "\n#else\n" + head
             + "\n" + b[0].split("\n", 1)[1] + "#endif\n") if nm else None
    t_nm = t.replace(b[0], block, 1) if nm else None
    t = t.replace(b[0], lead + body, 1)
    hdr = ht = ht0 = None
    others = {}       # (other sources whose asm definitions change with a //@sig)
    if "::" in dm[1]:
        if "::" not in b[1]:
            return None, f"{fn} is not a member in {src}"
        cls = dm[1].split("::")[0]
        hdr, ht0 = class_header(cls)
        if not hdr:
            return None, f"{fn} no header declares class {cls}"
        ht = ht0
        od = decl_re(fn).search(ht)
        if not od:
            return None, f"{fn} not declared in {hdr}"
        d = re.sub(r"\b%s::%s\(" % (cls, fn), fn + "(", sig.strip())
        nd = member_decl(re.sub(r"\s*\{?\s*$", "", d), od[0], static)
        if not same(nd, od[0]):
            ht = ht[:od.start()] + nd + ht[od.end():]
        for st, scls, name, ret, args in sigs:
            scls = scls or cls
            if scls != cls:
                return None, f"{fn} //@sig {scls}::{name}: only members of {cls} for now"
            od = decl_re(name).search(ht)
            if not od:
                return None, f"{fn} //@sig {name}: not declared in {hdr}"
            nd = member_decl(named(ret, name, args), od[0], bool(st))
            if same(nd, od[0]):
                continue
            ht = ht[:od.start()] + nd + ht[od.end():]
            # (its asm definition's first line follows: here, or in another source of the class)
            line = re.compile(r"^asm [^\n(;]*?\b%s::%s\([^\n]*\)$" % (cls, name), re.M)
            new = "asm " + named(ret, f"{cls}::{name}", args)
            if line.search(t):
                t = line.sub(new, t, 1)
                if t_nm is not None:
                    t_nm = line.sub(new, t_nm, 1)
            else:
                for f in sources():
                    if f == src:
                        continue
                    ft = others.get(f) or read(f)
                    if name in ft and line.search(ft):
                        others[f] = line.sub(new, ft, 1)
                        break
                else:
                    return None, f"{fn} //@sig {name}: no asm definition of it (is it C already?)"
    else:
        if sigs:
            return None, f"{fn} //@sig is for members"
        t = re.sub(r'^extern "C" [^\n(]*\b%s\([^)]*\);' % fn, lambda m: sig + ";", t, flags=re.M)
        if t_nm is not None:
            t_nm = re.sub(r'^extern "C" [^\n(]*\b%s\([^)]*\);' % fn, lambda m: sig + ";", t_nm, flags=re.M)
    if pre.strip():
        names = re.findall(r"struct (\w+)", pre)
        if not names or not all(re.search(rf"struct {n}\b", t) for n in names):
            incs = list(re.finditer(r'^#include [^\n]*\n', t, re.M))
            at = incs[-1].end() if incs else 0
            t = t[:at] + pre + t[at:]
            if t_nm is not None:
                incs = list(re.finditer(r'^#include [^\n]*\n', t_nm, re.M))
                at = incs[-1].end() if incs else 0
                t_nm = t_nm[:at] + pre + t_nm[at:]
    # (the try sees a changed header in place of its #include, or before everything else: the guard
    # keeps the real one out)
    tt = t
    if ht is not None and ht != ht0:
        inc = '#include "%s"\n' % hdr.split("/include/")[1]
        tt = t.replace(inc, ht, 1) if inc in t else ht + t
    # (the try is compiled from build/tmp/, not next to the source, so that a make running meanwhile,
    # which builds every .cpp under src/, never sees it; src/ holds no headers, all come from include/)
    os.makedirs(f"{ROOT}/build/tmp", exist_ok=True)
    tmp = f"{ROOT}/build/tmp/" + os.path.basename(src).replace(".cpp", f"_diff{tag}_{os.getpid()}.cpp")
    save(tmp, tt)
    r = subprocess.run([sys.executable, "tools/fncmp.py", tmp, fn, "-d"], cwd=ROOT, capture_output=True, text=True)
    os.remove(tmp)
    m = re.search(r"^\S*%s\S*: (?:OK|(\d+) words differ) \((\d+) bytes\)" % fn, r.stdout, re.M)
    if not m:
        return None, (r.stdout + r.stderr)[-4000:]
    k = int(m[1] or 0) + abs((size(fn) or int(m[2])) - int(m[2])) // 4
    out = r.stdout if os.environ.get("HAND_FULL") else r.stdout[-4000:]   # (HAND_FULL=1: all of it)
    if write and (k == 0 or nm):
        save(src, t if k == 0 else t_nm)
        for f, ft in others.items():
            save(f, ft)
        if ht is not None and ht != ht0:
            save(hdr, ht)
            for f in [src] + list(others):
                env = dict(os.environ)
                ov = re.search(r"/src/ov(\d{3})/", f)
                if ov:
                    env["IE_OV"] = str(int(ov[1]))
                x = subprocess.run([sys.executable, "tools/fixsyms.py", f.split(ROOT + "/")[1]], cwd=ROOT, env=env,
                                   capture_output=True, text=True)
                out += x.stdout + x.stderr
    return k, out


def functions(path):
    """(name, code) of each function of a file: one, or '#### name' sections"""
    text = open(path, encoding="utf-8").read()
    if re.search(r"^#### \w+$", text, re.M):
        parts = re.split(r"^#### (\w+)[ \t]*\n", text, flags=re.M)[1:]
        return [(parts[k], parts[k + 1]) for k in range(0, len(parts), 2)]
    return [(os.path.splitext(os.path.basename(path))[0], text)]


if __name__ == "__main__":
    args = sys.argv[1:]
    nm = None
    if "--nonmatching" in args:
        i = args.index("--nonmatching")
        nm = args[i + 1]
        del args[i:i + 2]
        args.append("--write")
    write = "--write" in args
    todo = [f for path in args if path != "--write" for f in functions(path)]
    names = [fn for fn, _ in todo]
    done = set()
    for n, (fn, code) in enumerate(todo):
        if fn in done:
            continue
        last = fn not in names[n + 1:]     # (a variant: only the last one of a name goes in unmatched)
        k, out = check(code, fn, write, nm=nm if last else None)
        if k == 0:
            print(fn + " OK")
            if write and "->" in out:
                print(NL.join(l for l in out.split(NL) if "->" in l))
            done.add(fn)
        elif k and nm and last:
            print(fn, f"NONMATCHING ({k} words)")
        elif k:
            print(fn, f"{k} words differ")
            if not write:
                print(NL.join(l for l in out.split(NL) if l.startswith(">>") or l.startswith("   ")))
        else:
            print(fn, out)
    print(len(done), "match")
