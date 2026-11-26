# Inazuma Eleven recomp: what it tells us

[InazumaElevenRecomp](https://github.com/2002-source/InazumaElevenRecomp) (by Dosmildos) is a PC
port of this same ROM (`YEEP` rev 0, SHA-1 `d55169c0...`) made by static recompilation with
[ndsrecomp](https://github.com/RetroPortingToolKit/ndsrecomp). It is not a decompilation: the
recompiled code is generated from the ROM on the player's machine, and none of it is in that
repository. What it has is a launcher, runner patches and a mod plugin (`plugin/ie1_mods.cpp`)
that reads and patches the running game. To do that, the plugin's comments document a good
part of the game's data and some of its functions, checked against real play.

**Licence.** MIT for the original code, except `runner-patches/` (GPL-3.0-or-later). As with the
IE3 decompilation, we use it as a reference for names, layouts and meaning only. Nothing is
copied from it, and our code stays our own. The checkout lives outside this repository
(`git clone --depth 1 https://github.com/2002-source/InazumaElevenRecomp ../ext/ie1recomp`).

Its comments are in Spanish. Their terms map to the English release's like this: PE = FP, PT = TP, Tiro = Kick,
Físico = Body, Control, Defensa = Guard, Rapidez = Speed, Aguante = Stamina, Valor = Guts,
supertécnica = special move, Pasión = Passion, pachanga = random battle.

## The player record (`MatchPlayer`, 0xFC bytes)

The records are the entries of `gEntryPool` (0x020E0480), 0xFC bytes each:
`func_ov015_02130ae8(i)` is `gEntryPool.Get(i)` for i < 0x84. The plugin finds the squad among
the first 100.

| Offset | Ours | What it is |
|---|---|---|
| 0x00 | `unk_0` | name (16 bytes) |
| 0x42 | `unk_42` | unit id (`& 0xFFF`; Mark is 1): the row of `unitno.dat` / `unitstat.dat` |
| 0x5A | `unk_5a` | element: 1 wind, 2 wood, 3 fire, 4 earth |
| 0x60 | (in `unk_5b`) | EXP (u32) |
| 0x78, 0x7A | `unk_78`, `unk_7a` | FP and TP trained (s16, up to +50) |
| 0x7C.. | `unk_7c` | partners of the moves that need several players (0: at random) |
| 0x94, 0x96 | `unk_94`, `unk_96` | current FP and TP (at most 0xD0 / 0xD2) |
| 0x98.. | `unk_98` | the 6 moves (u16 ids into `command.dat`) |
| 0xA4..0xA9 | (in `unk_98`) | uses of each move (move levels) |
| 0xAA | (in `unk_a6`) | level (1-99) |
| 0xAF..0xB5 | `unk_af[7]` | stats trained (s8, -127..+50), indexed by stat id - 30 |
| 0xB8 | `unk_b8[0]` | shirt number (1-16, `func_0207c8e0`) |
| 0xBA | `unk_ba` | flags (0x400: captain, cannot leave the team) |
| 0xC1..0xC3 | `unk_c1` | grow with the level |
| 0xD0, 0xD2 | `unk_d0`, `unk_d2` | FP and TP maximum shown (base + team bonuses) |
| 0xD4, 0xD6 | (in `unk_d4`) | FP and TP base maximum (curve at the level + trained) |
| 0xD8..0xDE | (in `unk_d4`) | the 7 stats shown, in screen order |
| 0xDF..0xE5 | (in `unk_d4`) | the 7 stats base (natural at the level + trained) |
| 0xF0 | `unk_f0` | flags (0x40: no redistribution on level up) |
| 0xF8 | `unk_f8` | talent bits (24, set at kick-off) |

Stat ids are 30 Kick, 31 Body, 32 Guard, 33 Control, 34 Speed, 35 Guts and 36 Stamina. The screen
order (0xD8.., 0xDF..) is Kick, Body, Control, Guard, Speed, Stamina and Guts. The trained values
at 0xAF are in id order. When no free aptitude is left, training a stat takes points from its
partner (`func_0207d6bc`): Kick and Control, Speed and Stamina, and Body, Guard and Guts in a ring.

## Functions

| Address | Ours | What it does |
|---|---|---|
| 0x02069394 | `MatchEngine::func_02069394` | the "value" of an action: a player (r1), a move record or 0 (r2), a row of `unitcalc.dat` (r3), the shot's charge level, a u8, the rival. Random part at 0x02069780, the Critical! roll (0-99, critical under 10) at 0x02069C30, the result at 0x0206A05C |
| 0x020690A8 | `MatchEngine::func_020690a8` | element advantage: wind beats earth, wood beats wind, fire beats wood, earth beats fire |
| 0x0206ACE8 | `MatchEngine::func_0206ace8` | a goal replay is playing (match + 0xC78 >= 0; -1 otherwise) |
| 0x0206D9A0 | `MatchEngine::func_0206d9a0` | the IE2 shoot button and long shots are on: match + 0x11918 and bit 8 of match + 0x21A (0x02062258 clears 0x11918; IE1 never sets it) |
| 0x0206FBD0, 0x0206FDAC | `func_0206fbd0`, `func_0206fdac` | the shot's distance percentage (s16 at 0x020FA1A0): written when shooting, read later. A shot is worth value + value * percent / 100 |
| 0x02072FE8 | `func_02072fe8` | learn a move in the first free slot 0-3 (through `func_020808e8`) |
| 0x02072BB8 | `func_02072bb8` | pick the partners of a move that needs several players |
| 0x0207697C | `func_0207697c` | the items of a kind (the Secret notebooks menu, ov48) |
| 0x0207D378 | `func_0207d378` | EXP needed for a level (`lvup_exp.dat`: type at `unitstat` + 0x40, `[type * 98 + level - 2]`; level 1 is 0) |
| 0x0207D394 | `func_0207d394` | a stat at a level: lv1 + (lv99 - lv1) * curve[level] / 100 (`status_up.dat`, 0x68 bytes per curve) |
| 0x0207D3F8 | `func_0207d3f8` | FP or TP at a level, the same way (0-999) |
| 0x0207D6A8, 0x0207D6AC | `func_0207d6a8`, `func_0207d6ac` | empty in IE1: in IE2 they OR talent bits into `unk_f8` of a player / of a list of players. Kick-off calls them from the ITCM (0x01FFA3C4) |
| 0x0207D6BC | `func_0207d6bc` | a stat's partner (above) |
| 0x0207D830 | `func_0207d830` | train a stat: free aptitude first, then from the partner, which cannot go below 1 |
| 0x0207DAC0 | `func_0207dac0` | how far a stat can be trained (+50; the partner's trained value down to -127) |
| 0x0207DBF4, 0x0207DC10 | `func_0207dbf4`, `func_0207dc10` | the level-up loop, one level at a time, then `func_0207e334` |
| 0x0207DE24 | `func_0207de24` | on level up, when the stats pass the player's cap (`unitstat` + 0x3C), takes the excess back from what was trained |
| 0x0207DEC0 | `func_0207dec0` | base values at the level: FP/TP 0xD4/0xD6 and stats 0xDF.. = natural + trained |
| 0x0207E334 | `func_0207e334` | recompute a player at a level |
| 0x02081B44 | `func_02081b44` | the values shown (0xD0/0xD2, 0xD8..) = base + team bonuses |
| 0x0205F15C | `Unk_0205dee0::func_0205f15c` | makes the special move banner (the bar of 3D rectangles) |
| 0x0209B1EC, 0x0209B230 | `func_0209b1ec`, `func_0209b230` | event timers (table at 0x020D3D20, `data_020d3d20`: 4 slots of {event, frames left} at +0x624): register, count down |
| ov015 0x0215F740 | `func_ov015_0215f740` | the script interpreter |
| ov015 0x02155AC8 | | the handler of script instruction 0x3078 (calls the banner) |
| ov087 0x02179A30 | | shot against keeper without a special move: if the save (rows 7, 8, 10) beats the shot (rows 4-6) the keeper wins there, with no random roll |
| ov015 0x02143C70-0x02143DD0 | | blocks: row 32 (block with a shot move: the shot passes if it is at least the block) or 28 (block move: 75 % of the shot passes whole, 125 % passes weakened) |

## The rows of `func_02069394` (`unitcalc.dat`)

Each row is 32 bytes, sixteen s16 columns: c1 a constant, c2 the random range, c5 the factor of the
move's power (plus its level bonus) and c6-c12 the factors of the seven stats in id order. The
fixed part is `(power * c5 + sum(stat * c[6 + k])) * 41 / 4096 + c1`. Random 0..c2 is added
after it, with +10 for a move of the player's own element, then the element advantage, the shot's
charge and Critical!.

| Row | Action |
|---|---|
| 1 | dribble |
| 3 | tackle |
| 4, 5, 6 | shot: normal, chip, direct |
| 7 | normal save against a special move |
| 8 | normal save |
| 9 | shot with a special move |
| 10 | save with a special move |
| 14 | shot strength |
| 15 | control (pass or receive) |
| 20 | keeper, not computed (always 0) |
| 25 | dribble with a special move |
| 27 | block with a special move |
| 28 | shot block: the block |
| 31 | the struggle before a duel |
| 32 | shot block: the shot |

`MatchEngine::func_020751b8` is therefore a dribble against a defender. The dribbler gets row 25
with a special move or 1 without, the defender 27 or 3.

## Data files

- `command.dat` (moves, 28 bytes each): +0 kind (5 dribble, 6 block, 7 shot, 8 keeper, 9 talent:
  ids 51-75), +6 power (s8), +8 element, +0x0A how many players it needs, +0x0F attributes (1
  long shot, 2 block, 4 shot block), +0x10 category for move levels (`lvup_command.dat`).
- `unitstat.dat` (players, 0x50 bytes, found through `unitno.dat`): FP at +0 and TP at +8 as
  {lv1 u16, lv99 u16, curve u8}, the seven stats at +0x10 as 4 bytes {lv1, lv99, curve, -} in id
  order, the moves learnt at +0x2C (4 x {move, level}), the stat cap at +0x3C (u16) and the EXP
  type at +0x40.
- `games.dat`: the match copies its record to match + 0x1FC. +0x20C holds its flags (0x80 a
  match, 0x100 a random battle) and +0x21A its rules.

## Other data

| Address | Ours | What |
|---|---|---|
| 0x020E88A0 | `data_020e88a0` (the `MatchEngine`) | +0x1FC the `games.dat` record, +0xC78 replay, +0x11902-0x11904 long shot state, +0x11918 IE2 shoot button |
| 0x020CA6E0 | `gGameState` | +0x86 / +0x87: the score (ours, theirs) |
| 0x020CABA0 | `gGameState.profile` + 0x14 | Passion (u32) |
| 0x020DC078 | | script variables: 0x10000 + n is the u32 at +4n (0x10004 story progress, 0x10033 story finished) |
| 0x020DBEF8 | | 9 script interpreters (pointers to 0x3C0-byte objects: +0x23C script id, +0x248 running, +0x268 frames) |
| 0x02195000 | | 4 script threads of 0x3C0 bytes (+0x2B0 the current instruction) |

## Overlays

ov001 the move selector in a match, ov015 the match, ov029 the Players menu, ov034 the rules
screen before a random battle (`practice_rule`), ov048 the item menu, ov059 the EXP screen after
a match, ov087 shots against the keeper.
