#ifndef MATCH_MATCH_HPP
#define MATCH_MATCH_HPP

#include "nitro/types.h"
#include "nitro/fx.h"

// A point on the field
typedef struct {
    fx32 x;
    fx32 y;
} MatchPoint;

// A line from a to b
typedef struct {
    MatchPoint a;
    MatchPoint b;
} MatchSegment;

// The ball (data_020c4920)
struct MatchBall {
    VecFx32 pos;        // 0x00
    VecFx32 prevPos;    // 0x0C
    MatchPoint unk_18;  // (data_020c4938)
    MatchPoint unk_20;  // (where it is going)
    u8 unk_28[0x30 - 0x28];
    fx32 height;        // 0x30
    s32 unk_34;
    fx32 unk_38;
    fx32 unk_3c;
    fx32 unk_40;
    fx32 unk_44;
    s32 unk_48;         // (negative: none)
    s32 unk_4c;         // a player's index
    u16 unk_50;
    u16 unk_52;         // the direction
    u16 unk_54;
    u8 unk_56;
    u8 unk_57;
    u8 unk_58;
    volatile u8 unk_59; // flags (read again at each test: func_020618d4)
    u8 unk_5a;
    u8 unk_5b;
    u8 unk_5c;
};

static inline BOOL MatchBall_HasFlag(MatchBall *ball, u8 flag)
{
    return (ball->unk_59 & flag) ? TRUE : FALSE;
}

static inline BOOL MatchBall_IsHeld(MatchBall *ball)
{
    return ball->unk_48 >= 0 ? TRUE : FALSE;
}

// A player's position and state, pointed to by MatchPlayer::body
struct MatchPlayerBody {
    VecFx32 pos;
    u8 unk_c[0x12 - 0xC];
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;         // flags
    u16 direction;      // 0x18
    u8 unk_1a;          // (the direction as one of 8)
    u8 unk_1b;
    u8 unk_1c;
    u8 unk_1d;
    s8 unk_1e;
};

struct MatchPlayerState {
    fx32 unk_0;         // (a position: x, 0x80000000 when there is none)
    fx32 unk_4;
    MatchPoint unk_8;   // (where it kicks to: 0x80000000 when nowhere, func_02063c14)
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    s16 unk_22;
    s16 unk_24;
    s16 unk_26;
    u8 unk_28[0x2A - 0x28];
    u16 unk_2a;
    u8 unk_2c;          // (the player's slot in MatchPlayerList::players)
    u8 unk_2d;          // (counts 0-7, func_02068d74)
    u8 unk_2e;
    u8 unk_2f;
    u8 unk_30[2];
    u16 unk_32;
    fx32 unk_34[10][2];     // 0x34
    u8 unk_84;
    u8 unk_85;
    s16 unk_86;
    u8 unk_88;
    u8 unk_89;
};

// A player record: an entry of gEntryPool, 0x84 of them (func_ov015_02130ae8). What the fields are:
// docs/ie1_recomp.md
struct MatchPlayer {
    u8 unk_0[0x41];             // (the name: 16 bytes)
    u8 unk_41;
    u16 unk_42;                 // (the unit id, & 0xFFF)
    u8 unk_44[0x52 - 0x44];
    u8 unk_52;          // (1 or 2: func_0206e858)
    u8 unk_53[0x55 - 0x53];
    u8 unk_55;          // (bits 5-7 and 0-4)
    u8 unk_56[0x5A - 0x56];
    u8 unk_5a;                  // (the element: 1 wind, 2 wood, 3 fire, 4 earth)
    u8 unk_5b[0x64 - 0x5B];     // (0x60: EXP)
    u16 unk_64;
    u8 unk_66[0x70 - 0x66];
    u16 unk_70[4];      // (ids)
    s16 unk_78;         // (FP trained; MatchEngine::func_0207d500/func_0207d538: kinds 20 and 21)
    s16 unk_7a;         // (TP trained; kinds 22 and 23)
    u16 unk_7c[12];     // (pairs: the partners of the moves)
    s16 unk_94;         // (FP now, at most unk_d0)
    s16 unk_96;         // (TP now, at most unk_d2)
    u16 unk_98[7];      // (the 6 moves; 0xA4-0xA9: their uses)
    u8 unk_a6[0xAA - 0xA6];
    u8 unk_aa;                  // (the level)
    u8 unk_ab[0xAF - 0xAB];
    s8 unk_af[7];       // (the stats trained, by id - 30; func_0207d568/func_0207d60c: kinds 30 to 36)
    u8 unk_b6;          // (the team)
    u8 unk_b7;
    u8 unk_b8[2];       // (unk_b8[0]: the shirt number, 1-16)
    u16 unk_ba;         // flags (0x400: captain)
    u8 unk_bc;
    u8 unk_bd;
    u8 unk_be[0xC0 - 0xBE];
    u8 unk_c0;          // (unk_c1 is set)
    s8 unk_c1[4];
    u8 unk_c5;
    u8 unk_c6[0xD0 - 0xC6];
    s16 unk_d0;         // (FP maximum shown: base + team bonuses)
    s16 unk_d2;         // (TP maximum shown)
    s16 unk_d4;         // (FP base maximum: at the level + trained)
    s16 unk_d6;         // (TP base maximum)
    u8 unk_d8[7];       // (the 7 stats shown, in screen order)
    u8 unk_df[7];       // (the 7 stats base: at the level + trained)
    u8 unk_e6;
    u8 unk_e7;
    MatchPlayerBody *body;      // 0xE8
    MatchPlayerState *state;    // 0xEC
    u16 unk_f0;                 // flags
    u8 unk_f2[2];
    s16 unk_f4;                 // the team
    u8 unk_f6[2];
    u32 unk_f8;                 // flags (the talents)
};

static inline BOOL MatchPlayer_HasFlag(MatchPlayer *player, u16 flag)
{
    return (player->unk_f0 & flag) ? TRUE : FALSE;
}

// What func_020787e8 gives for a player
struct MatchPlayerInfo {
    s16 unk_0;
    u8 unk_2[6];
    u8 unk_8;
    u8 unk_9;
    u8 unk_a;
    u8 unk_b;
    u8 unk_c;
    u8 unk_d;
    u8 unk_e;
    u8 unk_f;
    u16 unk_10;         // flags
    u16 unk_12;         // flags
    u8 unk_14[0x18 - 0x14];
};

static inline BOOL MatchPlayerInfo_HasFlag(MatchPlayerInfo *info, int flag)
{
    return info->unk_10 & flag;
}

// A player's next action, as func_02080288 gives it
struct MatchAction {
    u8 unk_0[8];
    MatchPoint unk_8;
    MatchPoint unk_10;
    u8 unk_18[0x1C - 0x18];
    u16 action;         // 0x1C (0: none)
    s8 unk_1e;
    u8 unk_1f[0x40 - 0x1F];
};

extern "C" MatchPlayer *func_ov015_02130ae8(int index);     // (the player with that index, or NULL)

extern MatchBall data_020c4920;

#endif // MATCH_MATCH_HPP
