# Matching notes

Things that made functions of this game match, collected while decompiling.
The compiler is Metrowerks CodeWarrior for DSi (`mwccarm` 1.x), C++.

## Code shape

- **Loop tests.** `for`/`while` loops get a test before the loop and the
  condition at the bottom. A loop whose original has no test before it, but a
  jump to the condition at the bottom, has either a compound condition
  (`a && b`) or a `goto` out of an inner loop (`ChunkFile::Init`).
- **Values computed in a loop.** Expressions that do not change in a loop are
  moved out of it by the compiler. If the original keeps such values on the
  stack and the loop's own test is the only check before it, the source most
  likely computed them inside the loop (`TextFont::ClearRect4`).
- **Empty switch cases still count.** `case 0x30: case 0x80: break;` keeps
  the comparison tree of the original even though the cases do nothing
  (`FileManager::Decompress`). In a jump table they set its size: the table
  of `SoundManager::EndScene` goes up to 11 because of an empty `case 11:`.
- **Switch layout.** The code of the cases is laid out in the order of the
  cases in the source, and identical cases are merged into chains of `b` to
  each other's code; write one case per value, in the order of the code
  (`SoundManager::EndScene`). A case that the original jumps over to the code
  after the switch is a `break` to code after the switch, not a fallthrough
  (`SoundManager::PrepareBank`).
- **Returns in a jump table.** A case whose code is only the function's return shows
  up as the `pop` itself in the jump table when the switch is the end of the function
  and the case `break`s; a `return;` in the case gives a branch to a shared `pop`
  instead (`Wireless::func_0203dad8`).
- **Range checks in a comparison tree.** `cmp #2; bgt; cmp #0; blt; beq` in a tree is
  a group of cases 0..2 where only 0 has code: an empty `case 2:` (not 1 and 2) keeps
  the tree instead of a jump table (`Wireless::func_0203d17c`).
- **Which branch comes first.** `if (a) { x } else { y }` and
  `if (!a) { y } else { x }` give the same instructions but can give other
  registers (`SoundManager::SaveState`), and the branch written first is laid
  out first (`SoundManager::FreeBank`).
- **Inline helpers evaluate their arguments first.** A call through a pointer
  that is checked for NULL, with its arguments loaded before the check, is an
  inline function taking those arguments (`ReleaseFile`/`CancelFile` in
  `SoundManager.cpp`: `heap->fileManager` is checked after the buffer is
  loaded).
- **Signed switches.** A `switch` on a masked unsigned value compares signed
  (`bgt`/`bge`) when the value is cast to `int`.
- **Unused stack slots.** Four unused stack bytes with an extra `r3` in the
  register list can be a scoped object: a lock whose constructor and
  destructor are inlined (`MutexLock` in `GameHeap::Free`).
- **Volatile members.** A member read again at every step of a loop (and not
  only once before it) is `volatile` (`FileManager::numRequests`).
- **Pointer to a local struct.** `add rX, sp, #n` followed by `[rX, #field]`
  instead of `[sp, #n+field]` means the struct is accessed through a pointer
  (`FileRequest *request = &localRequest;` in `FileManager::Load`).
- **Argument evaluation.** `WriteByte(dest, *dest & 0x0F); dest++;` and
  `WriteByte(dest, *dest++ & 0x0F)` compile differently; the separate
  increment is what the original's post-indexed load came from.

- **Struct copies.** `a = b` for a struct copies memberwise when the struct has
  members of different kinds (byte arrays, words, ...), and as one block (pairs of
  bytes, halfwords, or `ldm`/`stm` of 16 bytes, by the struct's alignment) when it is an
  array or a union (`SaveProfile`, `SaveTeam`). Copies of 4-byte structs of bytes and
  12-byte structs of halfwords are unrolled.
- **Constants in other registers.** A size passed to a call and the same size
  kept in a variable can be loaded twice in the original and once in a rebuild (or the
  reverse); no source change found for this yet (`SaveManager::Save`).

- **Pooled globals.** A function that uses several global variables of its file loads
  one address and reaches the others by offsets from it, while a function that uses
  only one loads that variable's own address: `data_020c45a0` + 0x28 and `data_020c45c8`
  are the same array (`SceneManager.cpp`). Until the file's `.bss` is decompiled, the
  variables are declared both ways.
- **Volatile reads that are not used.** Loads of hardware registers stay even when the
  result is dropped (a `PAD_Read()` whose result is not used in
  `SceneManager::func_0203ef38`); the order of the loads is the order of the reads.

- **Loading through the heap's file manager.** The helper that matches keeps the file
  manager and the path in locals and returns 0 without a file manager; the path is
  then loaded before the check, as in the original (`LoadFile` in `TreasureBox.cpp`
  and `System.cpp`).

- **Merged calls.** Two calls of one function in an `if`/`else` that differ only in one
  argument become one call, the branches setting that argument (`b` over the other
  branch); a `?:` in the argument gives conditional moves instead
  (`MatchEngine::func_02068b5c`).
- **A jump to shared code.** A test whose one outcome branches to the code that the other
  cases reach by falling through (`cmp r0, #1; beq found; b next`) came from a `goto` to a
  label before that code; the same test with `continue` on the other outcome inverts the
  branch (`MatchEngine::func_020745e4`).
- **Reading a table again.** When the original loads a table entry twice but our C++ reuses
  the first load, reading the first value through the global itself (and the rest through
  the local pointer) makes MWCC load it again (`MatchEngine::func_0207e738`; the permuter
  found the effect with a 64-bit index).
- **Members of another object.** A member function whose `this` is a player or a stack
  buffer (look at what its callers pass in r0) is static and takes that object
  (`MatchEngine::func_0207f3cc`, `func_02074aac`).
- **Loops entered through their test.** When the original jumps to a loop's test before the
  first pass and the rebuild does not, the function was built at a lower level:
  `#pragma push` / `#pragma optimization_level 2` / `#pragma pop` around it gives the jump
  (`func_02068028`, `func_0206eb34`, `func_02065a90` and about 15 others). A few of those
  also compute an expression again after each call where level 2 reuses it (an entry's
  address, a player's `body->pos.y`): `#pragma opt_common_subs off` with the level gives
  that (`func_0206ecbc`). Every level-2 function of `src/match` still matches with common
  subexpressions off, but the rest of the code does not, so it is not a file setting.
- **Switch tables up to a high label.** When the ROM's jump table runs further than the last
  case that does something (`cmp r1, #0x1e` with entries 17-30 all on the default), the
  original listed those labels before `default:`; without them MWCC splits the range
  (`func_02077224`).
- **A flag from several values.** `BOOL flag = (k == 2 || k == 5 || k == 8 || ...);` gives
  the ROM's bit test (`sub; cmp; tst r0, r1, lsl r2`); a switch setting the flag or an `if`
  do not (`func_0206d358`).
- **Leaving a loop.** A `return` in a loop that the ROM writes as a branch to the common
  epilogue was a `break` before a shared `return` (`func_0206ba84`).
- **Struct arguments.** A function taking a `MatchPoint` by value gets it in two registers
  (`ldmia rN, {r2, r3}`): `*(MatchPoint *)&player->body->pos` (`func_02065a90`).
- **Not solved yet.** Stores to a local array that is never read, which the original keeps
  and MWCC drops unless the array is `volatile` (`func_02068434`); two adjacent loads that
  MWCC merges into an `ldm` where the original has two `ldr` in the other order
  (`func_0206a3b8`); identical blocks of two branches that the ROM shares and the rebuild
  does not, at any level (`func_02066e28`); a field read again for a second test where the
  rebuild keeps it (`MatchBallPhysics::func_02061bc0`: only `opt_common_subs off` gives it).
- **u8 against u8.** `a >= b` on two `u8` gives an unsigned branch (`blo`); the original's
  `blt` came from `(int)a >= (int)b` (`MatchEngine::func_0207e334`).
- **Stores under a test already made.** Stores right after `if (p == NULL) return ...;` that
  the original predicates on the old flags (`strneh`) sit under their own `if (p != NULL)`, as
  an inline helper would have it (`func_02073a9c`).
- **Copies of stack parameters.** A loop reading two stack parameters through new spill slots
  (`ldr r0, [sp, #0x68]; str r0, [sp, #0x1c]` before it) used local copies, `list = ids;
  n = count;`, at level 2 (`func_02067aec`).
- **A BOOL into a bool.** `tst; moveq #1; movne #0` followed by `cmp; mov #1; moveq #0` is an
  inline returning `cond ? FALSE : TRUE` assigned to a `bool` (`func_02075428`).
- **A bigger frame than the locals read.** The buffer a callee fills is longer than what the
  caller reads (`int ids[8]` where two are used, `func_02075428`).
- **Not solved yet (2).** A struct returned by value, copied word by word into a second stack
  slot whose stores stay (`func_0207bb9c`; the same idiom in `func_ov029_0216c640` and in IE3):
  a POD copy gives `ldm/stm`, a copy constructor is elided, a converting constructor is
  scalarised. Two `u16` swapped through a stack temporary the original keeps
  (`func_020793bc`): arrays, a 2-byte-aligned struct, a union and a copy-constructed pair all
  stay in registers.

## Register allocation

Registers follow the order in which local variables are declared (and,
for values that live in the same register, the order of the statements that
set them). `tools/permdecl.py` tries every order of a function's declarations.

- **16-bit masks.** `flags = (flags | 4) & ~2` on a `u16` gives `bic`; the
  original's `and` with `0xFFFD` kept in a register is `& (u16)~2`. Two statements,
  `flags |= 4; flags &= (u16)~2;`, also load the arguments of the call before them in another order than
  the one expression (`SoundManager::func_0203b664`, found by the permuter).
- **A value tested before it is stored.** `cmp r0, #0; blt ...; str r0, [...];
  mov r6, r0` is `x = f(); if (x < 0) ...; local = member = x;`, while
  `local = f()` with the test on `local` gives `movs r6, r0`
  (`SoundManager::func_0203bd04`).
- **Return values that nobody reads.** A `mov r0, #1` before the return of a
  function whose callers ignore it means it returns `BOOL`
  (`SoundManager::func_0203bab8`). Arguments are worth checking the same way: a
  caller that sets only `r2` for a parameter shows that it is 32-bit, even if
  another caller computes 64 bits for it.
- **Chained assignments.** `a = b = x` sets `b` first: the `mov`s of the original
  tell which of the two is assigned first (`ConfigFile::Load`).
- **Clamps.** `if (n >= 8) n = 8;` gives `movge`, `if (n > 8)` gives `movgt`
  (`ConfigFile::GetInt`).
- **A constant the compiler reuses from a register.** When the original has
  `movhs r0, #0` (or `movhs r2, #0`) where our C++ reuses a register that holds 0
  (`movhs r0, r4`), the source checked a pointer twice: a copy of it is kept,
  `T *p = ptr; if (ptr == NULL) return FALSE; if (ptr != NULL) p = ptr;`, and the
  rest uses the copy (`TextFont::SetFont`, `MatchEngine::func_020747e4`, found by
  decomp-permuter through `tools/permprep.py`).
- **Arguments that pass through.** A C caller can match with too few arguments when the
  others stay in r2/r3 untouched until its own call (`return f(a);` where `f` reads r2):
  look at what the callee does with r1-r3 before trusting the caller's signature
  (`MatchEngine::func_020670ec`, `func_0207aeac`, `func_020790cc`, `func_0207922c`).
- **Narrowing twice.** Three `lsl #16; lsr #16` pairs around one `+ 0x8000` came from
  `(u16)(int)back` with `back` a `u16` (`MatchEngine::func_02079148`); a plain cast or an
  inline function gave two.
- **Branches merged by case.** `case 5: case 7:` on one line gives one target for both;
  separate cases with the same body give two (`MatchEngine::func_0206c180`). A
  `switch` whose cases each return a field offset puts the blocks in source order.

- **`bool` parameters.** A `u8` parameter makes C callers mask the argument (`and 0xff`);
  with C++ `bool` they pass a `!= 0` result as it is, as the original does
  (`MatchEngine::func_0207436c`). A `u8` stack parameter is read with `ldrb`, an `int` one
  with `ldr` (`func_020730dc`).
- **Tail calls.** The original jumps (`b`) to a function only when the caller returns the
  same type; a wrong return type on either side turns it into `bl` and a return.
- **Unused parameters.** Stores to the stack in every caller for an argument the callee
  never reads mean a trailing parameter that is unused (`func_0206e100`'s `mode`).
- **Operand order of an indexed add.** `add r0, base, idx` against `add r0, idx, base`
  follows whether the array is indexed through a local `base` pointer
  (`entry[base + i]`, `func_0207c7f4`).
- **Masks of 16-bit results.** `FX_SinIdx(a) & 0xFFFF` gives `ldrh` then `smull`, a
  `(u16)` cast does not; `x &= 0xFF - bit` gives `rsb #0xff`, `x |= (u8)bit` an
  `and 0xff` before the `orr` (`MatchPlayerState_SetBit_88`).
- **Locals declared in another order.** Most of the near misses of this engine were only
  registers swapped between two locals; generating every order of the declarations (as a
  `tools/hand.py` batch with one section per order) often found the match.
- **The type of a parameter changes its callers.** Retyping a callee's `int` parameter as
  `u32` moved a stack load in one of its C callers (`func_02078bc0` after
  `func_02079f98`); keep the type that leaves the callers matching.
- **Index forms.** `(p + k)[0xF]` gives `add r0, p, k; ldrb [r0, #0xf]`, `p[0xF + k]` gives
  `add r0, k, #0xf; ldrb [p, r0]`; `table[team * 7 + i]` keeps `this + team * 7` in a
  register where a pointer `&table[team * 7]` keeps the field's address (`func_0207e19c`).
- **The type of a local.** An `int` local for an `s8` result stored to the stack right after
  the call; with `s8` the store moved after the next load (`func_0206ba84`).
- **Post-increment index.** `out[n++] = x` keeps `n` in a second register for the store;
  `out[n] = x; n++;` stores through `n` and adds after, as the original (`func_0207e334`).
- **Recording a new best.** The order of the assignments in the block that keeps a new best
  (id first, then the distance) and declaring the loop index before the distances decided
  the registers (`func_02062d74`).
- **One index per inner loop.** Two inner loops of a loop (a search, then a fill) with their
  own index variables instead of one shared gave the original's registers (`func_02073a9c`).
- **A local declared last** gets the lowest callee-saved register: the team list of
  `func_0207b780` (`r4`, below the parameters) matched only as the last declaration.
- **A counter per phase, and the first search on `i`.** In `func_02072bb8` the partner count
  needs its own variable (not the list count reset to 0), the formation position is `u32` like
  the search index, `n` comes before it, and the first search of the order runs on `i`; each
  fixed a register or a spill slot.
- **`(u16)(id & 0xFFF)` on a `u16` parameter** keeps the `lsl/lsr #16` the original has after
  the `and` (`id &= 0xFFF` drops it), and changed the whole register assignment
  (`func_0207b780`).
- **Row pointers of a 2D local array.** At O2 with `opt_common_subs off`, `ids[team][i]` and
  `ids[other][i]` written in the loop give the hoisted row bases of the original; pointers set
  before the loop don't; a separate counter for the set-up loop and row pointers `pi` before
  `pd` fixed the rest (`func_02074b30`, 9 words left).
- **Blockers seen.** At O2, `team == 0 || team == 1` becomes an unsigned range check
  (`cmp #1; bhi`) that the original doesn't have, whatever the form (inline, order, `!`)
  (`func_0207b28c`). A local struct is split into registers even as a one-element array or
  when an inline takes its address; the original keeps `func_0206ffe0`'s best record in memory.

## Library calls

- Double arithmetic (`2.0 * v * ((float)(r + 80) / 100.0)`) calls `_dmul`/`_ddiv`;
  the conversions are `_fflt`, `_ffix`, `_d2f`.
- `float f() { return atof(s); }` calls the runtime's double-to-float helper
  (`_d2f`) after `atof`; softfloat values come back in `r0`/`r1`.

## Tools

- `tools/fncmp.py src/file.cpp [-d]`: compares the functions of a file with
  the original.
- `tools/permdecl.py`: tries every order of a function's local declarations.
- `tools/romasm.py ADDRESS [CLASS]`: a function of the ROM as inline asm, for
  an asm fallback or as the target of decomp-permuter. Literal pool loads become
  `ldr rX, =value`; the declarations the asm needs are listed on stderr.
- `tools/disrange.py START END`: a disassembly of a range with the current names
  and the literal values inline.
- `tools/asmwrap.py` / `tools/asmunwrap.py`: add or remove an asm fallback.
- [decomp-permuter](https://github.com/simonlindholm/decomp-permuter) works on
  these functions when they are rewritten as free functions taking `self`
  (it parses C, so the C++ has to look like C) and compiled as C++ inside
  `extern "C" { }`; `arm-none-eabi-objdump` can be replaced by
  `llvm-objdump --triple=armv5te` with its output reformatted.
- A "function" of a few bytes that nothing references and that is only an epilogue
  (`ldmia sp!, {..., pc}`) is the unreachable end of the function before it (after an
  endless loop): as a separate asm function the linker strips it and everything after
  moves. It goes at the end of the function before it (the symbols too).
- MW's inline asm merges equal literals (`ldr rX, =sym` twice gives one pool entry),
  but compiled C sometimes has the same address twice in a pool. For the asm of such
  functions a second name of the address is defined in `config/yeep/arm9/lcf_symbols.txt`
  (`data_X_b = 0x...;`) and the loads of the second entry use it.
- The linker strips functions nothing refers to. The original keeps them, so
  `tools/lcfextra.py` lists the unreferenced functions of the source files in a
  `FORCE_ACTIVE` block of the linker script (a reference "into one of several overlays"
  doesn't count: it isn't linked by name).
