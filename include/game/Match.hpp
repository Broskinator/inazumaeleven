#ifndef GAME_MATCH_HPP
#define GAME_MATCH_HPP

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
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
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
};

struct MatchPlayerState {
    u8 unk_0[0x1C];
    u16 unk_1c;
    u8 unk_1e[2];
    u16 unk_20;
    u8 unk_22[0x34 - 0x22];
    fx32 unk_34[10][2];     // 0x34
    u8 unk_84;
    u8 unk_85;
    s16 unk_86;
    u8 unk_88;
    u8 unk_89;
};

// A player of the match (one of 0x20, see func_ov015_02130ae8)
struct MatchPlayer {
    u8 unk_0[0xE8];
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
};

static inline BOOL MatchPlayerInfo_HasFlag(MatchPlayerInfo *info, int flag)
{
    return info->unk_10 & flag;
}

extern "C" MatchPlayer *func_ov015_02130ae8(int index);     // (the player with that index, or NULL)

extern MatchBall data_020c4920;

#endif // GAME_MATCH_HPP
