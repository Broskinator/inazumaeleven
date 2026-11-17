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
    u8 unk_59;          // flags
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
    u8 unk_c[0x16 - 0xC];
    u16 unk_16;         // flags
    u16 direction;      // 0x18
    u8 unk_1a;          // (the direction as one of 8)
    u8 unk_1b;
    u8 unk_1c;
    u8 unk_1d;
    s8 unk_1e;
};

struct MatchPlayerState {
    u8 unk_0[0x10];
    s32 unk_10;
    s32 unk_14;
    u8 unk_18[0x1C - 0x18];
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    s16 unk_22;
    u8 unk_24[2];
    s16 unk_26;
    u8 unk_28[0x2F - 0x28];
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

// A player of the match (one of 0x20, see func_ov015_02130ae8)
struct MatchPlayer {
    u8 unk_0[0x42];
    u16 unk_42;
    u8 unk_44[0x55 - 0x44];
    u8 unk_55;          // (bits 5-7 and 0-4)
    u8 unk_56[0x5A - 0x56];
    u8 unk_5a;
    u8 unk_5b[0x78 - 0x5B];
    s16 unk_78;         // (MatchEngine::func_0207d500/func_0207d538: kinds 20 and 21)
    s16 unk_7a;         // (kinds 22 and 23)
    u16 unk_7c[12];     // (pairs)
    s16 unk_94;         // (at most unk_d0)
    s16 unk_96;         // (at most unk_d2)
    u16 unk_98[7];
    u8 unk_a6[0xB6 - 0xA6];
    u8 unk_b6;          // (the team)
    u8 unk_b7;
    u8 unk_b8[2];
    u16 unk_ba;         // flags
    u8 unk_bc;
    u8 unk_bd;
    u8 unk_be[0xC5 - 0xBE];
    u8 unk_c5;
    u8 unk_c6[0xD0 - 0xC6];
    s16 unk_d0;
    s16 unk_d2;
    u8 unk_d4[0xE8 - 0xD4];
    MatchPlayerBody *body;      // 0xE8
    MatchPlayerState *state;    // 0xEC
    u16 unk_f0;                 // flags
    u8 unk_f2[2];
    s16 unk_f4;                 // the team
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
    u8 unk_9[0x10 - 0x9];
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
