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
  (`FileManager::Decompress`).
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

## Register allocation

Registers follow the order in which local variables are declared (and,
for values that live in the same register, the order of the statements that
set them). `tools/permdecl.py` tries every order of a function's declarations.

## Tools

- `tools/fncmp.py src/file.cpp [-d]`: compares the functions of a file with
  the original.
- `tools/permdecl.py`: tries every order of a function's local declarations.
- `tools/romasm.py ADDRESS [CLASS]`: a function of the ROM as inline asm, for
  an asm fallback or as the target of decomp-permuter.
- `tools/asmwrap.py` / `tools/asmunwrap.py`: add or remove an asm fallback.
- [decomp-permuter](https://github.com/simonlindholm/decomp-permuter) works on
  these functions when they are rewritten as free functions taking `self`
  (it parses C, so the C++ has to look like C) and compiled as C++ inside
  `extern "C" { }`; `arm-none-eabi-objdump` can be replaced by
  `llvm-objdump --triple=armv5te` with its output reformatted.
