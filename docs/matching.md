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

## Register allocation

Registers follow the order in which local variables are declared (and,
for values that live in the same register, the order of the statements that
set them). `tools/permdecl.py` tries every order of a function's declarations.

- **16-bit masks.** `flags = (flags | 4) & ~2` on a `u16` gives `bic`; the
  original's `and` with `0xFFFD` kept in a register is `& (u16)~2`
  (`SoundManager::func_0203b664`).
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

## Library calls

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
- MW's inline asm merges equal literals (`ldr rX, =sym` twice gives one pool entry):
  functions whose pool has the same address twice stay in the dsd gap code for now.
