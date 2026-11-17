# The match engine

A map of the football match code: where it is, which classes it is made of, what is understood
so far and what is not. The numbers (how much of each part is C++ already) are in
[progress.md](progress.md), which `python tools/cprogress.py` rewrites.

The names below are the ones the sources use. A name that still carries an address
(`func_02069394`, `unk_b84`, `UnkClass_0208351c`) is one whose meaning is not pinned down yet;
`python tools/rename.py OLD=NEW` renames an identifier everywhere, mangled names and asm
references included, once it is.

## Where the code is

| Part | Where | What it is |
|---|---|---|
| Ball physics | `src/match/MatchBallPhysics.cpp` (0x02061498) | `MatchBallPhysics` (data_020c475c): the ball's flight and bounces, the field's areas (`MatchArea`), and the distance tables (`DistanceTable`, `DistanceTable32`) |
| Match object | `src/match/MatchEngine.cpp` (0x020621b4), `MatchEngine_2.cpp` (0x0206f028), `MatchEngine_3.cpp` (0x02082d5c) | `MatchEngine` (data_020e88a0, about 690 members): the state of the match, the players' actions, the duels and their calculations, the replay ring |
| Rules | `src/match/MatchRules.cpp` (0x0206ee34) | `MatchRules`, the member at `MatchEngine + 0x22C`: the values of `gamerule.dat` |
| Helpers | `src/match/MatchUtil.cpp` (0x020802a0) | small free functions over players, actions and teams |
| Players' lists | `src/match/MatchPlayerList.cpp` (0x02083060), `UnkClass_0208351c.cpp` (0x0208351c) | `MatchPlayerList` (the object `MatchEngine + 0xB80` points to) and a class derived from it |
| Geometry | `src/match/MatchGeometry.cpp` (0x02083afc) | points, segments, angles and distances on the field (`MatchPoint`, `MatchSegment`) |
| Match logic | `src/ov087/` (overlay 87) | the per-frame logic of the players and the CPU's decisions: no strings, almost all calls go to `MatchEngine` |
| Match scene | `src/ov001/` (overlay 1) | what the match shows and reads: the 3D scene, the touch-screen commands, the technique (hissatsu) cut-ins, the menus between the halves |

Other files of `src/game/` between 0x02054800 and 0x02087500 belong to the match as well and
are not named yet: `Unk_0205dee0` (it reads `REPLAY_FLICKER_TIME_*`: the replay's display),
`UnkClass_02054800`, `UnkClass_02060294`, `Unk_02081740`, `Unk_02081c3c`, `Unk_02084ff4`,
`Unk_02086070`, `Unk_02087500`.

The RPG side meets the match in overlay 0 (the overworld, with `RPG_ENCOUNT_TIME` for the random
encounters) and overlay 15, which owns the players: `func_ov015_02130ae8(index)` gives the
`MatchPlayer` with that index.

## The data

Declared in `include/match/Match.hpp` and `include/match/MatchEngine.hpp`.

| Object | Type | What it is |
|---|---|---|
| `data_020e88a0` | `MatchEngine` | the match (0x11920 bytes and more, built by the static constructors) |
| `data_020c4920` | `MatchBall` | the ball: position, previous position, where it is going, height, who holds it (`unk_48`, negative for nobody), direction, flags |
| `data_020c475c` | `MatchBallPhysics` | the ball's physics |
| `data_020aedc8` | `const char *[33]` | the names of the calculation kinds (see below) |

A player is a `MatchPlayer` (0xF8 bytes; `unk_b6` and `unk_f4` are the team, `unk_f0` the
flags), with a `MatchPlayerBody` (position, direction, flags) and a `MatchPlayerState`. The
action a player is about to take is a `MatchAction` (`MatchEngine::unk_bf4`, one per player);
`MatchEngine::func_020654cc(player, action, ...)` sets it.

`MatchEngine` keeps the current state of the match at 0xB84 (`MatchState`) and the last 90
states in rings from 0xC7C on (the states, 0x2C bytes per frame, and 0x20 bytes per player and
frame): this is what the replay plays back (`EXEC_REPLAY`, read by `func_0206aa6c`).

## The calculations

`MatchEngine::func_02069394` is the calculation every duel and every kick goes through: it takes
a kind and the players involved, and computes the value from `unitcalc.dat` / `calcbase.dat`.
The kinds have names in the ROM (`data_020aedc8`):

| Kind | Name | Kind | Name |
|---:|---|---:|---|
| 1 | `ENCOUNT_OFFENSE_DRIBBLE` | 17 | `PASS_KICK` |
| 2 | `ENCOUNT_OFFENSE_PASS` | 18 | `PASS_GET` |
| 3 | `ENCOUNT_DEFENSE` | 19 | `PASS_CUT` |
| 5 | `SHOOT_LOOP` | 20 | `GK_SAVE_RANGE_NON_SHOOT` |
| 6 | `SHOOT_DIRECT` | 21 | `UCALC_SPEED_RUN` |
| 7 | `SAVING_NEAR` | 22 | `UCALC_SPEED_DRIBBLE` |
| 8 | `SAVING_JUMP` | 25 | `ENCOUNT_SP_OFFENSE_DRIBBLE` |
| 9 | `SP_SHOOT` | 26 | `ENCOUNT_SP_OFFENSE_PASS` |
| 10 | `SP_SAVEING` | 27 | `ENCOUNT_SP_DEFENSE` |
| 11 | `DIRECT_ENCOUNT_OFFENSE` | 29 | `ON_FAINT_FAINT` |
| 12 | `DIRECT_ENCOUNT_DEFENSE` | 30 | `ON_FAINT_CHASE` |
| 13 | `DIRECT_ENCOUNT_KEEP` | 31, 32 | `BALL_PENALTY_TIME_ADJUST` |
| 14 | `ADJUST_SHOOT` | 4, 23, 24, 28 | (no name) |
| 15 | `ADJUST_PASS` | | |
| 16 | `GET_FREEBALL` | | |

An "encount" is a duel between the player with the ball and a defender; "SP" marks the ones
fought with a technique (hissatsu); "saving" is the goalkeeper's side of a shot.

## The parameters and the data files

The engine reads its tuning values by name: `GAME_TIME_STEPS`, `LOGIC_MOVE_STEP`,
`LOGIC_BALL_STEP`, `LOGIC_MOVE_ADD_STEP`, `LOGIC_MOVE_BASE_SPPED_MIN` / `_MAX`,
`CPU_USE_SPECIAL_PERCENT`, `WAIT_NOTICE_FRAME`, `OFFSIDE_EFFECTIVE`, and the field's model names
(`MDL_FIELD_*`, read by `SceneManager::func_0203ee70`). Which function reads each of them is not
traced yet.

The tables come from `/data_iz/logic/`: `gamerule.dat` (the rules), `fieldinf.dat` (the field),
`fmt.dat` (formations), `team.dat`, `action.dat`, `command.dat` and `cmd_cond.dat` (the CPU's
commands and their conditions), `unitcalc.dat` and `calcbase.dat` (the calculations above).

## Converting a member to C++

A member that is still assembly looks like this in its source, and is declared `void func_X();`
in the class:

```cpp
asm void MatchEngine::func_0206daec()
{
    ...
}
```

Its C++ replaces the asm in place; the declaration in `include/match/MatchEngine.hpp` gets the
real return type and parameters. Changing the parameters changes the mangled name
(`_ZN11MatchEngine13func_0206daecEv` becomes `...Ei`), which the assembly of other functions
calls by name: `python tools/fixsyms.py src/match/MatchEngine.cpp` recompiles the file and
renames the symbol in `config/yeep/arm9/symbols.txt` and in every asm reference under `src/`.
`python tools/fncmp.py src/match/MatchEngine.cpp func_0206daec` compares the compiled function
with the ROM's, word by word.

When the C++ calls a member that is assembly, give that member its real signature too (the
declaration, and the first line of its asm definition), so that the call is a typed one.

## Not known yet

- What most of the members of `MatchEngine` do: about 400 of them are still assembly, and most
  of the C++ ones are small accessors.
- The layout of `MatchEngine` between 0x3CC and 0xB7C, and of `MatchPlayer` before 0x42.
- Which member is the frame step of the match, and where the parameters above are read.
- The classes of `src/game/` listed above, and the split of ov001 and ov087 into classes.
