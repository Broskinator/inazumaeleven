#!/usr/bin/env python3
"""decomp-permuter for this project's C++: prepares a near miss, runs it, gives the result back as C++.

usage: tools/permprep.py run FUNCTION SOURCE [--minutes M] [--jobs J]
       tools/permprep.py prep FUNCTION SOURCE DIR
       tools/permprep.py compile DIR CANDIDATE.c OUT.o     (what DIR/compile.sh runs)
       tools/permprep.py cpp DIR CANDIDATE.c               (a candidate's function, as C++)

FUNCTION is Class::Name for a member or Name for a free function; SOURCE is the file whose
`#ifdef NONMATCHING` block holds the C/C++ attempt (the asm after `#else` is the original code).
tools/permuter_batch.sh runs `run` over every function of permuter/queue.txt.

decomp-permuter (https://github.com/simonlindholm/decomp-permuter, cloned outside the repository:
../ext/decomp-permuter, or set PERMUTER to where it is) reads C only, so `prep` writes into DIR:

    base.c      the function as C, for the permuter to change. A member Class::Name becomes
                Class__Name(Class *this, ...) and reaches its members through this->; the classes
                of the headers become structs whose methods are function-pointer fields, so that
                this->Method() still has a type.
    compile.sh  turns each candidate back into the C++ member and compiles it with the source
                file's own declarations (its other functions left out) and the project's compiler
                and flags: what is scored is the real compiler's code, not a C approximation.
    target.o    the same file compiled with the function's asm: the original code.

`run` prepares permuter/work/NAME, runs the permuter for M minutes (default 30, or PERM_MINUTES)
on J processes (default: PERM_JOBS, or the number of CPUs), and keeps the best candidate in
permuter/results/NAME/: function.cpp (the function as C++, to put in place of the attempt in
SOURCE), diff.txt (what the permuter changed, in the C view) and score.txt. A better earlier
result is not overwritten. It exits with 0 when the function matches (score 0), 1 when it does
not, 2 when it could not be prepared.

Needs a C preprocessor (cpp, or devkitARM's arm-none-eabi-cpp) and arm-none-eabi-objdump.
"""
import glob, json, os, re, shutil, subprocess, sys, time

TOOLS = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(TOOLS)
sys.path.insert(0, TOOLS)
PERMUTER = os.environ.get("PERMUTER", os.path.join(os.path.dirname(ROOT), "ext", "decomp-permuter"))
MARK = "typedef int PERMPREP_FUNCTION_BELOW;"
BASIC = {"void", "char", "short", "int", "long", "float", "double", "signed", "unsigned", "bool", "wchar_t"}
PREAMBLE = "typedef unsigned char bool;\nenum { false, true };\ntypedef unsigned short wchar_t;\n"
DEVKIT_BINS = [os.path.join(os.environ.get("DEVKITARM", "/opt/devkitpro/devkitARM"), "bin"),
               "C:/devkitPro/devkitARM/bin", "/opt/devkitpro/devkitARM/bin"]


# ---------------------------------------------------------------- text helpers

def code_part(line):
    """a line without its // comment"""
    k = line.find("//")
    return line if k < 0 else line[:k]


def skip_quoted(t, i):
    """the index after the string or character literal starting at t[i]"""
    q, i = t[i], i + 1
    while i < len(t) and t[i] != q:
        i += 2 if t[i] == "\\" else 1
    return i + 1


def matching(t, i):
    """the index of the bracket closing the one at t[i]"""
    depth = 0
    while i < len(t):
        c = t[i]
        if c in "\"'":
            i = skip_quoted(t, i)
            continue
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
            if depth == 0:
                return i
        i += 1
    raise ValueError("unbalanced brackets")


def split_top(t, sep=","):
    """t split at the separators outside brackets"""
    out, depth, start, i = [], 0, 0, 0
    while i < len(t):
        c = t[i]
        if c in "\"'":
            i = skip_quoted(t, i)
            continue
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == sep and depth == 0:
            out.append(t[start:i].strip())
            start = i + 1
        i += 1
    out.append(t[start:].strip())
    return out


def items(t):
    """the top-level declarations of t: each ends at a ';' outside brackets, or at the '}' of a
    function body (one whose head ends with ')')"""
    out, start, depth, opened, i = [], 0, 0, 0, 0
    while i < len(t):
        c = t[i]
        if c in "\"'":
            i = skip_quoted(t, i)
            continue
        if c in "([{":
            if depth == 0 and c == "{":
                opened = i
            depth += 1
        elif c in ")]}":
            depth -= 1
            if c == "}" and depth == 0:
                head = t[start:opened].strip()
                if re.search(r"\)\s*(const\s*)?$", head) or re.search(r"\)\s*:\s*\w+\s*\(.*\)$", head, re.S):
                    out.append(t[start:i + 1])
                    start = i + 1
        elif c == ";" and depth == 0:
            out.append(t[start:i + 1])
            start = i + 1
        i += 1
    if t[start:].strip():
        out.append(t[start:])
    return [x.strip() for x in out if x.strip()]


# ---------------------------------------------------------------- the source file

def header_re(func):
    if "::" in func:
        cls, name = func.split("::")
        return re.compile(r"(?<![\w:])%s\s*::\s*%s\s*\(" % (re.escape(cls), re.escape(name)))
    return re.compile(r"(?<![\w:])%s\s*\(" % re.escape(func))


def resolve(lines, pat, mode):
    """the lines with every #ifdef NONMATCHING block resolved: the one defining the function keeps
    its attempt (mode "c") or its asm (mode "asm"), the others their asm"""
    out, i, found = [], 0, False
    while i < len(lines):
        if lines[i].strip() != "#ifdef NONMATCHING":
            out.append(lines[i])
            i += 1
            continue
        depth, els, j = 0, None, i + 1
        while j < len(lines):
            s = lines[j].strip()
            if s.startswith("#if"):
                depth += 1
            elif s.startswith("#endif"):
                if depth == 0:
                    break
                depth -= 1
            elif s.startswith("#else") and depth == 0:
                els = j
            j += 1
        attempt = lines[i + 1:els if els is not None else j]
        original = lines[els + 1:j] if els is not None else []
        mine = any(pat.search(code_part(l)) and not l[:1].isspace() for l in attempt)
        found |= mine
        out += attempt if mine and mode == "c" else original
        i = j + 1
    return out, found


def definitions(lines):
    """[(first header line, '{' line, '}' line)] of the function definitions: a body opens with a
    line '{' and closes with a line '}'; the header is the lines above, back to a blank line or
    one that ends a declaration"""
    defs, i = [], 0
    while i < len(lines):
        if lines[i].rstrip() != "{":
            i += 1
            continue
        s = i
        while s > 0:
            c = code_part(lines[s - 1]).strip()
            if not c or c.endswith((";", "}", "{", "*/")) or c.startswith("#"):
                break
            s -= 1
        head = " ".join(code_part(l) for l in lines[s:i])
        e = i + 1
        while e < len(lines) and lines[e].rstrip() != "}":
            e += 1
        if "(" in head:
            defs.append((s, i, e))
            i = e + 1
        else:
            i += 1
    return defs


def reduce(lines, pat):
    """(prefix, function, suffix): the file with the function apart and every other function left
    out (members are declared in their class; a free function keeps its prototype, an inline one
    its definition)"""
    out, pos, prefix, func = [], 0, None, None
    for s, b, e in definitions(lines):
        out += lines[pos:s]
        head = " ".join(code_part(l).strip() for l in lines[s:b])
        if func is None and pat.search(head):
            prefix, out, func = out, [], lines[s:e + 1]
        elif "::" in head.split("(")[0]:
            pass
        elif re.search(r"\binline\b", head):
            out += lines[s:e + 1]
        else:
            out.append(re.sub(r"\basm\s+", "", head).strip() + ";")
        pos = e + 1
    out += lines[pos:]
    if func is None:
        raise SystemExit("the function's definition was not found")
    return prefix, func, out


# ---------------------------------------------------------------- compiling and comparing

def compile_src(text, out, lang):
    """compiles text with the project's compiler and flags into out; the error output, or ''"""
    import fncmp
    tmp = os.path.join("build", "tmp", f"permprep_{os.getpid()}")
    os.makedirs(os.path.join(ROOT, "build", "tmp"), exist_ok=True)
    src = tmp + (".cpp" if lang == "c++" else ".c")
    open(os.path.join(ROOT, src), "w", encoding="utf-8", newline="\n").write(text)
    env = dict(os.environ, LM_LICENSE_FILE=f"{ROOT}/tools/mwccarm/license.dat", MWCIncludes=f"{ROOT}/include")
    wibo = [] if os.name == "nt" else [f"{ROOT}/tools/bin/wibo"]
    flags = [f for f in fncmp.CFLAGS if f != "-DNONMATCHING"]
    r = subprocess.run([*wibo, f"{ROOT}/tools/mwccarm/{fncmp.CC_VER}/mwccarm.exe", "-lang", lang, *flags,
                        "-c", src, "-o", tmp + ".o"], cwd=ROOT, env=env, capture_output=True, text=True)
    os.remove(os.path.join(ROOT, src))
    if r.returncode or not os.path.exists(os.path.join(ROOT, tmp + ".o")):
        return (r.stdout + r.stderr) or "compile failed"
    shutil.move(os.path.join(ROOT, tmp + ".o"), out)
    return ""


def symbol_of(obj, func):
    """the name of FUNCTION's symbol in obj"""
    from elftools.elf.elffile import ELFFile
    if "::" in func:
        cls, name = func.split("::")
        want = f"{len(cls)}{cls}{len(name)}{name}"
    else:
        want = None
    with open(obj, "rb") as f:
        for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols():
            if s["st_info"]["type"] == "STT_FUNC" and s["st_shndx"] != "SHN_UNDEF":
                if (want and s.name.startswith("_ZN") and want in s.name) or s.name == func:
                    return s.name
    return None


def words_differ(obj, func):
    """how many words of FUNCTION in obj differ from the ROM (the words the linker fills in are not
    compared), or None when it is not there"""
    import fncmp
    from elftools.elf.elffile import ELFFile
    from elftools.elf.relocation import RelocationSection
    name = symbol_of(obj, func)
    if name is None:
        return None
    mods, syms = fncmp.modules()
    if name not in syms:
        m = re.search(r"func_(?:ov(\d{3})_)?([0-9a-f]{8})", name)
        if not m:
            return None
        ad = int(m[2], 16)
        mod = f"ov{m[1]}" if m[1] else next(k for k, (b, blob) in mods.items()
                                           if not k.startswith("ov") and b <= ad < b + len(blob))
        syms[name] = (mod, ad)
    mod, addr = syms[name]
    base, blob = mods[mod]
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        rel = {}
        for s in elf.iter_sections():
            if isinstance(s, RelocationSection):
                for x in s.iter_relocations():
                    rel.setdefault(s["sh_info"], set()).update(range(x["r_offset"], x["r_offset"] + 4))
        for s in elf.get_section_by_name(".symtab").iter_symbols():
            if s.name == name:
                start = s["st_value"] & ~1
                mine = elf.get_section(s["st_shndx"]).data()[start:start + s["st_size"]]
                orig = blob[addr - base:addr - base + len(mine)]
                relocs = rel.get(s["st_shndx"], set())
                return sum(1 for k in range(0, len(mine), 4)
                           if not any(start + k + j in relocs for j in range(4)) and mine[k:k + 4] != orig[k:k + 4])
    return None


# ---------------------------------------------------------------- the C view

def find_tool(names):
    for n in names:
        p = shutil.which(n)
        if p:
            return p
        for d in DEVKIT_BINS:
            for ext in ("", ".exe"):
                if os.path.exists(os.path.join(d, n + ext)):
                    return os.path.join(d, n + ext)
    return None


def preprocess(text, source):
    cpp = find_tool([os.environ.get("CPP", "cpp"), "arm-none-eabi-cpp"])
    if cpp is None:
        raise SystemExit("no C preprocessor: install cpp (gcc) or devkitARM, or set CPP")
    r = subprocess.run([cpp, "-x", "c++", "-P", "-nostdinc", "-I", os.path.join(ROOT, "include"),
                        "-I", os.path.dirname(os.path.abspath(source)), "-"], input=text,
                       capture_output=True, text=True)
    if r.returncode:
        raise SystemExit("preprocessing failed:\n" + r.stderr)
    return r.stdout


def fix_params(t):
    """a parameter list as C: no default values, references as pointers"""
    out = []
    for p in split_top(t):
        k = next((i for i, c in enumerate(p) if c == "=" and split_top(p[:i]) == [p[:i].strip()]), -1)
        if k >= 0:
            p = p[:k].strip()
        out.append(fix_decl(p))
    return ", ".join(x for x in out if x)


def fix_decl(s):
    """a declaration as C"""
    s = re.sub(r"\bclass\s+(?=\w)", "struct ", s)
    s = re.sub(r"\b(inline|__inline|explicit|virtual|mutable|asm)\b\s*", "", s)
    s = re.sub(r"(\w|\*)\s*&\s*(\w+)\s*(?=[,)=;\[])", r"\1 *\2", s)
    s = re.sub(r"\)\s*const\b", ")", s)

    def params(m):
        return m[1] + "(" + fix_params(m[2]) + ")"
    # (the parameters of the function declarators: an identifier, or a (*name), before the '(')
    out, i = "", 0
    while i < len(s):
        m = re.compile(r"(\w\s*|\)\s*)\(").search(s, i)
        if not m:
            break
        k = m.end() - 1
        e = matching(s, k)
        out += s[i:k] + "(" + fix_params(s[k + 1:e]) + ")"
        i = e + 1
    return out + s[i:]


def field_names(s):
    return set(re.findall(r"(\w+)\s*(?:\[[^\]]*\])*\s*(?::\s*\w+)?\s*(?=[;,])", s)) | set(
        re.findall(r"\(\s*\*\s*(\w+)\s*\)", s))


class Context:
    def __init__(self):
        self.tags = {}          # struct/class/union name -> "struct" or "union"
        self.types = set(BASIC)
        self.classes = {}       # name -> {"fields": [text], "names": set, "methods": {name: (ret, params, static)}, "base"}
        self.out = []

    def members(self, cls):
        """(field names, methods) of cls and its bases"""
        info = self.classes.get(cls)
        if info is None:
            return set(), {}
        names, methods = self.members(info["base"]) if info["base"] else (set(), {})
        return names | info["names"], {**methods, **info["methods"]}

    def body(self, cls, body, base, hoist):
        fields, methods = [], {}
        for s in items(body):
            s = re.sub(r"^(?:(?:public|private|protected)\s*:\s*)+", "", s).strip()
            if not s or s == ";" or re.match(r"(friend|using|template)\b", s):
                continue
            if re.match(r"(typedef|enum)\b", s) or (re.match(r"(struct|class|union)\s+\w+\s*\{", s)
                                                     and re.search(r"\}\s*;$", s)):
                self.item(s, hoist)
                continue
            k = s.find("(")
            if k >= 0 and "{" not in s[:k] and not re.match(r"\(\s*\*", s[k:]):
                before = s[:k].rstrip()
                m = re.search(r"(~?\w+)$", before)
                if not m or m[1] in (cls, "~" + cls) or "operator" in before:
                    continue
                ret = before[:m.start()]
                static = bool(re.search(r"\bstatic\b", ret))
                ret = fix_decl(re.sub(r"\b(static|virtual|inline|explicit)\b", "", ret)).strip()
                methods.setdefault(m[1], (ret, fix_params(s[k + 1:matching(s, k)]), static))
                continue
            if re.match(r"static\b", s):
                continue
            fields.append(fix_decl(s))
        self.classes[cls] = {"fields": fields, "names": set().union(*map(field_names, fields)) if fields else set(),
                             "methods": methods, "base": base}

    def struct_text(self, cls):
        """the fields of cls as C: its bases' fields first, then its own, then the methods"""
        chain, c = [], cls
        while c in self.classes:
            chain.insert(0, c)
            c = self.classes[c]["base"]
        fields = [f for c in chain for f in self.classes[c]["fields"]]
        names, methods = self.members(cls)
        for name, (ret, params, static) in methods.items():
            if not static and name not in names and name not in self.types:
                fields.append(f"{ret} (*{name})({params});")
        return "\n".join("    " + f for f in fields) or "    char unused;"

    def item(self, s, out):
        if re.match(r"(template|using|namespace|friend)\b", s) or s.startswith("#"):
            return
        m = re.match(r"(typedef\s+)?(class|struct|union)\s+(\w+)?\s*(?::\s*(?:(?:public|private|protected|virtual)\s+)*(\w+))?\s*\{", s)
        if m:
            k = m.end() - 1
            e = matching(s, k)
            kind = "union" if m[2] == "union" else "struct"
            name = m[3]
            tail = fix_decl(s[e + 1:].strip()) or ";"
            if name:
                self.tags[name] = kind
                self.body(name, s[k + 1:e], m[4], out)
                text = self.struct_text(name)
                out.append(f"{m[1] or ''}{kind} {name} {{\n{text}\n}} {tail}")
                for meth, (ret, params, static) in self.classes[name]["methods"].items():
                    if static:
                        out.append(f"{ret} {name}__{meth}({params});")
            else:
                hoist = []
                anon = f"PERMPREP_anon_{len(self.classes)}"
                self.body(anon, s[k + 1:e], None, hoist)
                out += hoist
                out.append(f"{m[1] or ''}{kind} {{\n{self.struct_text(anon)}\n}} {tail}")
            if m[1]:
                self.types.update(re.findall(r"(\w+)\s*(?=[;,])", tail))
            return
        m = re.match(r"(class|struct|union)\s+(\w+)\s*;$", s)
        if m:
            self.tags.setdefault(m[2], "union" if m[1] == "union" else "struct")
            out.append(f"{self.tags[m[2]]} {m[2]};")
            return
        m = re.match(r"(typedef\s+)?enum\s+(\w+)?\s*(?::\s*\w+\s*)?\{", s)
        if m:
            s = re.sub(r"^((?:typedef\s+)?enum\s+\w*)\s*:\s*\w+\s*\{", r"\1 {", s)
            out.append(s)
            if m[2] and not m[1]:
                out.append(f"typedef enum {m[2]} {m[2]};")
                self.types.add(m[2])
            if m[1]:
                self.types.update(re.findall(r"(\w+)\s*(?=[;,])", s[s.rindex("}"):]))
            return
        if s.endswith("}"):
            s = s[:s.index("{")].rstrip() + ";"
        if "::" in s.split("(")[0] or "operator" in s:
            return
        if s.startswith("typedef"):
            s = fix_decl(s)
            m = re.search(r"\(\s*\*\s*(\w+)\s*\)", s) or re.search(r"(\w+)\s*(?:\[[^\]]*\])*\s*;$", s)
            if m:
                self.types.add(m[1])
            out.append(s)
            return
        k = s.find("=")
        if k >= 0 and re.search(r"\bnew\b|\bthis\b|::", s[k:]):
            s = s[:k].rstrip() + ";"
        out.append(fix_decl(s))

    def text(self):
        typedefs = [f"typedef {kind} {name} {name};" for name, kind in self.tags.items() if name not in BASIC]
        self.types.update(self.tags)
        return PREAMBLE + "\n".join(typedefs) + "\n" + "\n".join(self.out) + "\n"


def strip_extern_c(t):
    """t without its extern "C" { } blocks (their contents stay) and extern "C" prefixes"""
    out, stack, i = [], [], 0
    while i < len(t):
        c = t[i]
        if c in "\"'":
            j = skip_quoted(t, i)
            out.append(t[i:j])
            i = j
            continue
        m = re.compile(r'extern\s*"C(?:\+\+)?"\s*\{').match(t, i)
        if m:
            stack.append(True)
            i = m.end()
            continue
        if c == "{":
            stack.append(False)
        elif c == "}" and stack:
            if stack.pop():
                i += 1
                continue
        out.append(c)
        i += 1
    return re.sub(r'extern\s*"C(?:\+\+)?"\s*', "extern ", "".join(out))


def local_names(body, types):
    """the names the function declares (approximately: a type name, then a declarator)"""
    toks = re.findall(r"[A-Za-z_]\w*|->|::|\S", body)
    names, i = set(), 0
    quals = {"const", "volatile", "static", "register", "unsigned", "signed", "struct", "union", "enum", "class"}
    while i < len(toks):
        if toks[i] in types and (i == 0 or toks[i - 1] in (";", "{", "}", "(", ",") or toks[i - 1] in quals):
            j = i + 1
            while j < len(toks):
                while j < len(toks) and toks[j] in ("*", "const", "volatile"):
                    j += 1
                if j + 1 < len(toks) and re.match(r"[A-Za-z_]\w*$", toks[j]) and toks[j + 1] in ("=", ";", ",", "[", ")"):
                    names.add(toks[j])
                    if toks[j + 1] != ",":
                        break
                    j += 2
                else:
                    break
            i = j
        i += 1
    return names


def to_c(ftext, func, ctx):
    """the function as C, and what the way back needs"""
    k = ftext.index("{")
    head, body = " ".join(ftext[:k].split()), ftext[k:].rstrip()
    member = "::" in func
    bridge = {"func": func, "member": member, "this": False, "classes": []}
    if member:
        cls, name = func.split("::")
        m = header_re(func).search(head)
        ret = re.sub(r"\b(asm|inline)\b", "", head[:m.start()]).strip()
        e = matching(head, m.end() - 1)
        params = [p for p in split_top(head[m.end():e]) if p and p != "void"]
        static = ctx.classes.get(cls, {}).get("methods", {}).get(name, ("", "", False))[2]
        cname = f"{cls}__{name}"
        cparams = ([f"{cls} *this"] if not static else []) + [fix_params(p) for p in params]
        head = f"{ret} {cname}({', '.join(cparams) or 'void'})"
        bridge["this"] = not static
        # (a member reached without this-> gets it, unless a parameter or a local has its name)
        own = set(re.findall(r"(\w+)\s*(?=[,)\[]|$)", " , ".join(params) + " ,"))
        names, methods = ctx.members(cls)
        implicit = (names | set(methods)) - own - local_names(body, ctx.types | set(ctx.tags))
        if implicit:
            body = re.sub(r"(?<![\w.>:])(?<!->)\b(%s)\b(?!\s*::)" % "|".join(map(re.escape, sorted(implicit))),
                          r"this->\1", body)
    else:
        cname = func
        head = re.sub(r"\b(asm|inline)\b\s*", "", head)
    pairs = set(re.findall(r"\b(\w+)\s*::\s*(~?\w+)", body))
    body = re.sub(r"\b(\w+)\s*::\s*(~?\w+)", r"\1__\2", body)
    body = re.sub(r"\b(?:static|reinterpret|const)_cast\s*<([^<>]+)>\s*\(", r"((\1))(", body)
    bridge["classes"] = sorted({c for c, _ in pairs} | ({func.split("::")[0]} if member else set()))
    bridge["cname"] = cname
    return head + "\n" + body + "\n", bridge


def from_c(text, bridge):
    """the function of a candidate (C) as C++"""
    cname = bridge["cname"]
    best = None
    for m in re.finditer(r"(?m)^([^\n;{}#]*?)\b%s\s*\(" % re.escape(cname), text):
        e = matching(text, m.end() - 1)
        rest = text[e + 1:]
        if rest.lstrip().startswith("{"):
            best = (m, e)
    if best is None:
        raise ValueError(f"{cname} not found in the candidate")
    m, e = best
    params = [p for p in split_top(text[m.end():e]) if p and p != "void"]
    k = text.index("{", e)
    body = text[k:matching(text, k) + 1]
    if bridge["member"]:
        cls, name = bridge["func"].split("::")
        if bridge["this"]:
            params = params[1:]
        head = f"{m[1].strip()} {cls}::{name}({', '.join(params)})"
    else:
        head = f"{m[1].strip()} {cname}({', '.join(params) or 'void'})"
    if bridge["classes"]:
        body = re.sub(r"\b(%s)__(~?\w+)" % "|".join(map(re.escape, bridge["classes"])), r"\1::\2", body)
    return head + "\n" + body + "\n"


# ---------------------------------------------------------------- commands

def safe_name(func):
    return func.replace("::", "__").replace("~", "D")


def prep(func, source, d):
    source = os.path.abspath(source)
    lines = open(source, encoding="utf-8").read().split("\n")
    pat = header_re(func)
    attempt, found = resolve(lines, pat, "c")
    if not found:
        raise SystemExit(f"{func}: no #ifdef NONMATCHING block of {source} defines it")
    original, _ = resolve(lines, pat, "asm")
    cpre, cfun, csuf = reduce(attempt, pat)
    apre, afun, asuf = reduce(original, pat)
    lang = "c++" if source.endswith((".cpp", ".cc")) else "c99"
    os.makedirs(d, exist_ok=True)
    for f in glob.glob(os.path.join(d, "output-*")):
        shutil.rmtree(f)
    err = compile_src("\n".join(apre + afun + asuf), os.path.join(d, "target.o"), lang)
    if err:
        raise SystemExit(f"the file with the asm does not compile:\n{err}")
    if words_differ(os.path.join(d, "target.o"), func) != 0:
        raise SystemExit("the file reduced to the asm of the function does not give the original code")
    err = compile_src("\n".join(cpre + cfun + csuf), os.path.join(d, "attempt.o"), lang)
    if err:
        raise SystemExit(f"the attempt does not compile:\n{err}")
    before = words_differ(os.path.join(d, "attempt.o"), func)

    pp = preprocess("\n".join(cpre + [MARK] + cfun), source)
    context, ftext = pp.split(MARK, 1)
    ctx = Context()
    for it in items(strip_extern_c("\n".join(l for l in context.split("\n") if not l.lstrip().startswith("#")))):
        try:
            ctx.item(it, ctx.out)
        except ValueError:
            pass
    ctext = ctx.text()
    fc, bridge = to_c(ftext, func, ctx)
    bridge.update(lang=lang, source=source)
    open(os.path.join(d, "base.c"), "w", encoding="utf-8", newline="\n").write(ctext + "\n" + fc)
    open(os.path.join(d, "prefix.txt"), "w", encoding="utf-8", newline="\n").write("\n".join(cpre) + "\n")
    open(os.path.join(d, "suffix.txt"), "w", encoding="utf-8", newline="\n").write("\n".join(csuf) + "\n")
    json.dump(bridge, open(os.path.join(d, "bridge.json"), "w"), indent=1)
    open(os.path.join(d, "settings.toml"), "w", newline="\n").write(
        f'func_name = "{bridge["cname"]}"\ncompiler_type = "mwcc"\n')
    py = sys.executable.replace("\\", "/")
    me = os.path.abspath(__file__).replace("\\", "/")
    dd = os.path.abspath(d).replace("\\", "/")
    open(os.path.join(d, "compile.sh"), "w", newline="\n").write(
        "#!/bin/sh\n# written by tools/permprep.py: decomp-permuter runs it as compile.sh CANDIDATE.c -o OUT.o\n"
        f'exec "{py}" "{me}" compile "{dd}" "$1" "$3"\n')

    # the way back must give the attempt's code again, or the permuter would score something else
    err = compile_one(d, os.path.join(d, "base.c"), os.path.join(d, "roundtrip.o"))
    if err:
        raise SystemExit(f"base.c, turned back into C++, does not compile:\n{err}")
    after = words_differ(os.path.join(d, "roundtrip.o"), func)
    if after != before:
        raise SystemExit(f"base.c turned back into C++ differs from the attempt ({after} words differ, "
                         f"the attempt {before}): see {d}")
    check_parse(os.path.join(d, "base.c"))
    print(f"{func}: {before} words differ; {d} ready")
    return before


def check_parse(path):
    """parses path with the permuter's C parser, when the permuter is there"""
    if not os.path.isdir(PERMUTER):
        return
    sys.path.insert(0, PERMUTER)
    try:
        from pycparser import c_parser
    except ImportError:
        try:
            from perm_pycparser import c_parser
        except ImportError:
            return
    try:
        c_parser.CParser().parse(open(path, encoding="utf-8").read(), path)
    except Exception as e:
        raise SystemExit(f"{path} is not C the permuter can read: {e}")


def compile_one(d, cand, out):
    bridge = json.load(open(os.path.join(d, "bridge.json")))
    text = open(os.path.join(d, "prefix.txt"), encoding="utf-8").read()
    text += from_c(open(cand, encoding="utf-8").read(), bridge)
    text += open(os.path.join(d, "suffix.txt"), encoding="utf-8").read()
    return compile_src(text, out, bridge["lang"])


def permuter_main(args):
    """decomp-permuter itself, with base.c read as it is (it is preprocessed already)"""
    sys.path.insert(0, PERMUTER)
    import src.main
    import src.preprocess

    def read(filename, cpp_args=[]):
        return open(filename, encoding="utf-8").read()
    src.preprocess.preprocess = read
    src.main.preprocess = read
    tool = find_tool(["arm-none-eabi-objdump"])
    if tool:
        os.environ["PATH"] = os.path.dirname(tool) + os.pathsep + os.environ["PATH"]
    sys.argv = ["permuter.py"] + args
    src.main.main()


def kill_tree(p):
    if os.name == "nt":
        subprocess.run(["taskkill", "/F", "/T", "/PID", str(p.pid)], capture_output=True)
    else:
        import signal
        try:
            os.killpg(p.pid, signal.SIGINT)
            p.wait(20)
        except Exception:
            os.killpg(p.pid, signal.SIGKILL)
    p.wait()


def run(func, source, minutes, jobs):
    name = safe_name(func)
    d = os.path.join(ROOT, "permuter", "work", name)
    res = os.path.join(ROOT, "permuter", "results", name)
    if not os.path.isdir(PERMUTER):
        print(f"decomp-permuter is not at {PERMUTER}: clone https://github.com/simonlindholm/decomp-permuter there, or set PERMUTER")
        return 2
    try:
        base = prep(func, source, d)
    except SystemExit as e:
        print(f"{func}: not prepared: {e}")
        return 2
    if base == 0:
        print(f"{func}: matches already")
        return 0
    log = os.path.join(d, "permuter.log")
    cmd = [sys.executable, os.path.abspath(__file__), "permuter-main", d, "--best-only", "--stop-on-zero", "-j", str(jobs)]
    start = time.time()
    with open(log, "w") as f:
        kw = {} if os.name == "nt" else {"start_new_session": True}
        p = subprocess.Popen(cmd, stdout=f, stderr=subprocess.STDOUT, cwd=ROOT, **kw)
        try:
            p.wait(minutes * 60)
        except subprocess.TimeoutExpired:
            kill_tree(p)
    spent = (time.time() - start) / 60
    text = open(log, encoding="utf-8", errors="replace").read()
    m = re.search(r"base score = (\d+)", text)
    base_score = int(m[1]) if m else None
    outs = []
    for sc in glob.glob(os.path.join(d, "output-*", "score.txt")):
        try:
            outs.append((int(open(sc).read().split()[0]), os.path.dirname(sc)))
        except (ValueError, IndexError):
            pass
    outs.sort()
    old = None
    if os.path.exists(os.path.join(res, "score.txt")):
        m = re.match(r"best (\d+)", open(os.path.join(res, "score.txt")).read())
        old = int(m[1]) if m else None
    stamp = time.strftime("%Y-%m-%d %H:%M")
    if base_score is None:
        print(f"{func}: the permuter did not start, see {log}")
        print(text[-1500:])
        return 2
    if not outs:
        print(f"{func}: no improvement in {spent:.0f} min (base score {base_score})")
        if old is None:
            os.makedirs(res, exist_ok=True)
            open(os.path.join(res, "score.txt"), "w").write(
                f"no improvement (base score {base_score}, {before_text(d)}), {spent:.0f} min on {jobs} processes, {stamp}\n")
        return 1
    score, out = outs[0]
    if old is not None and old <= score:
        print(f"{func}: best {score}, not better than the earlier result ({old})")
        return 0 if old == 0 else 1
    os.makedirs(res, exist_ok=True)
    bridge = json.load(open(os.path.join(d, "bridge.json")))
    open(os.path.join(res, "function.cpp"), "w", newline="\n").write(
        f"// {func} from {os.path.relpath(source, ROOT)}: permuter score {score} (base {base_score})\n"
        + from_c(open(os.path.join(out, "source.c"), encoding="utf-8").read(), bridge))
    shutil.copy(os.path.join(out, "diff.txt"), os.path.join(res, "diff.txt"))
    words = None
    if compile_one(d, os.path.join(out, "source.c"), os.path.join(d, "best.o")) == "":
        words = words_differ(os.path.join(d, "best.o"), func)
    open(os.path.join(res, "score.txt"), "w").write(
        f"best {score} (base score {base_score}; {words} words differ, {before_text(d)}), "
        f"{spent:.0f} min on {jobs} processes, {stamp}\n")
    print(f"{func}: best score {score} (base {base_score}), {words} words differ -> {os.path.relpath(res, ROOT)}")
    return 0 if score == 0 and words == 0 else 1


def before_text(d):
    o = os.path.join(d, "attempt.o")
    return "attempt: see SOURCE" if not os.path.exists(o) else "the attempt had " + str(
        words_differ(o, json.load(open(os.path.join(d, "bridge.json")))["func"]))


def main():
    a = sys.argv[1:]
    if not a:
        sys.exit(__doc__)
    if a[0] == "permuter-main":
        permuter_main(a[1:])
    elif a[0] == "compile":
        err = compile_one(a[1], a[2], a[3])
        if err:
            sys.stderr.write(err)
            sys.exit(1)
    elif a[0] == "cpp":
        print(from_c(open(a[2], encoding="utf-8").read(), json.load(open(os.path.join(a[1], "bridge.json")))), end="")
    elif a[0] == "prep":
        prep(a[1], a[2], a[3])
    elif a[0] == "run":
        minutes = float(a[a.index("--minutes") + 1]) if "--minutes" in a else float(os.environ.get("PERM_MINUTES", "30"))
        jobs = int(a[a.index("--jobs") + 1]) if "--jobs" in a else int(os.environ.get("PERM_JOBS", os.cpu_count() or 1))
        sys.exit(run(a[1], a[2], minutes, jobs))
    else:
        sys.exit(__doc__)


if __name__ == "__main__":
    main()
