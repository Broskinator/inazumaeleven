#ifndef MATCH_MATCHENGINE_HPP
#define MATCH_MATCHENGINE_HPP

#include "nitro/types.h"
#include "nitro/fx.h"

#include "match/Match.hpp"
#include "match/MatchRules.hpp"
#include "match/MatchPlayerList.hpp"

struct SaveBody;

// A team as MatchEngine::unk_17c keeps it
struct MatchTeamRecord {
    char name[0x1F];
    u8 unk_1f;
    u16 unk_20;
    u16 unk_22;
    u16 unk_24;
    u16 unk_26;
    u16 unk_28;
    u16 unk_2a;
    u8 unk_2c;
    u8 unk_2d;
    u16 unk_2e;
    u16 unk_30;
    u16 unk_32;
    u16 unk_34;
    s8 unk_36;
    s8 unk_37;
    s8 unk_38;
    s8 unk_39;
    u16 unk_3a;
    u8 unk_3c;
    u8 unk_3d;
    u16 unk_3e;
};

// The ids of a team's members (MatchEngine::unk_34c)
struct MatchIdList {
    u16 ids[16];
};

// A saved team (0x834 bytes, see func_02082d9c)
struct MatchTeamSave {
    u8 unk_0[0xD4];
    u8 players[16][0x70];   // 0xD4
    MatchTeamRecord record; // 0x7D4
    MatchIdList members;    // 0x814
};

// (what func_ov015_02143664 gives)
struct UnkPair_020621b4 {
    MatchPoint pos;
    s16 unk_8;
    s16 unk_a;
    s8 unk_c;           // (a team)
    s8 unk_d;
    u8 unk_e[2];
    u8 unk_10;          // (flags)
    u8 unk_11[0x18 - 0x11];
};

static inline BOOL UnkPair_020621b4_HasFlag(UnkPair_020621b4 *pair, u8 flag)
{
    return (pair->unk_10 & flag) ? TRUE : FALSE;
}

// A state of the match (the current one is at 0xB84, the past ones in a ring at 0xC7C)
// A record of 0x18 bytes, ten of them at MatchEngine::unk_116a4 (func_02076168 gives the next one
// and clears it, func_02076318 fills it)
// (0x38 bytes, the entries of the file func_0207efd8 loads)
struct UnkEntry_0207efd8 {
    u8 unk_0[0x2A];
    u16 unk_2a;         // (an id)
    u8 unk_2c[0x30 - 0x2C];
    u8 unk_30;          // (a kind)
    u8 unk_31;          // (flags)
    u8 unk_32[0x38 - 0x32];
};

// (0x18 bytes, two of them at 0x554: one value per team first)
struct UnkRecord_0206b3fc {
    s32 unk_0[2];
    u8 unk_8[0x10];
};

struct UnkRecord_02076168 {
    u8 unk_0[4];
    s8 unk_4[3];
    s8 unk_7[3];
    u8 unk_a[0x10 - 0xA];
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;          // (bit 7: empty?)
    u8 unk_13[0x18 - 0x13];
};

// An id and its score (func_0207f634 sorts ids through a list of them, func_0207f4bc)
struct MatchIdScore {
    s32 score;
    u16 id;
    u8 unk_6[2];
};

struct MatchState {
    u8 unk_0;
    u8 unk_1;
    s8 unk_2;           // (the current record of MatchEngine::unk_116a4)
    s8 unk_3;
    u8 flags;
    u8 unk_5[2];
    s8 unk_7;
};

// What func_0206eb34 gathers at MatchEngine+0x6B0 (0x4CC bytes)
struct UnkRecord_0206eb34 {
    u8 unk_0[0x40][0x10];     // (a copy of unk_bcc)
    u8 unk_400[2][0x10];      // (unk_15c)
    u8 unk_420[8];            // (these four from func_0209e174)
    s32 unk_428[2];           // (unk_c08)
    s32 unk_430[2];           // (unk_c10)
    s32 unk_438[2];           // (unk_c18)
    s32 unk_440;              // (unk_bac)
    s32 unk_444;              // (unk_118f8)
    u8 unk_448[2][6];         // (unk_118be)
    u8 unk_454[2][6];         // (unk_118ca)
    u8 unk_460[2];
    u8 unk_462[2];
    u8 unk_464;               // (gGameState.unk_07c[0xA])
    u8 unk_465;               // (gGameState.unk_07c[0xB])
    u8 unk_466[2];
    struct {
        u16 id;               // (MatchPlayer::unk_42)
        s16 x;                // (MatchPlayer::unk_94)
        s16 y;                // (MatchPlayer::unk_96)
    } unk_468[16];            // (the players of team 1, in order)
    u8 unk_4c8[4];
};

// A place a player could go to, with what its score is made of (func_020671e4 compares two)
struct UnkSpot_020671e4 {
    fx32 x;
    fx32 y;
    u8 unk_8[4];
    fx32 unk_c;
    s16 unk_10;
    s16 unk_12;
};

// A player's data kept by MatchEngine::func_0207a5c0 (unk_bf0)
struct MatchPlayerCache {
    u8 unk_0[0x42];
    u16 id;             // 0x42 (12 bits)
    u8 unk_44[0x60 - 0x44];
    u16 age;            // 0x60 (reads since it was last used, at most 0xFFFF)
    u8 unk_62[2];
};

// (what func_ov015_02143750 gives)
struct UnkSlot_020621b4 {
    u8 unk_0[0x18];
    void *unk_18;       // (where unk_0 is saved)
    u8 unk_1c;          // (0xFF: not saved)
    u8 unk_1d[0x22 - 0x1D];
    u8 flags : 4;
    u8 unk_22 : 4;
};

static inline BOOL UnkSlot_020621b4_HasFlag(UnkSlot_020621b4 *slot, u8 flag)
{
    return (slot->flags & flag) ? TRUE : FALSE;
}


// The object at data_020e88a0 (0x11920+ bytes, made by the static constructors): the match's data
class MatchEngine {
public:
    MatchEngine *func_020621b4();
    MatchEngine *func_02062268();
    MatchEngine *func_02062288();
    void func_020622b0();
    void func_020622b4();
    BOOL func_02062b58(fx32 *segment, MatchPlayer *player, int a, int *index);
    void func_02062bfc(fx32 *segment, fx32 x, fx32 y, u16 angle, fx32 from, fx32 to);
    BOOL func_02062ca4(MatchPlayer *player);
    void func_02062d74();
    void func_02063038(MatchPlayer *player);
    void func_020630a8();
    void func_020630d8();
    void func_020630fc();
    void func_0206313c();
    BOOL func_020632b4(MatchPlayer *a, MatchPlayer *b, s32 *distance);
    BOOL func_02063328(MatchPlayer *player);
    BOOL func_02063388(s16 team, fx32 x, fx32 y);
    BOOL func_0206340c(int value);
    void func_02063430();
    BOOL func_02063480(MatchPlayer *player, fx32 *pos);
    void func_020634e8(int index, u16 time, BOOL b);
    void func_02063550(MatchPlayer *player, u16 time, BOOL b, u8 c, BOOL d);
    BOOL func_020636b8(MatchPlayer *player);
    void func_0206371c();
    void func_02063c14(MatchPlayer *player);
    u16 func_02063e4c(fx32 x, fx32 y);
    void func_02063e6c(fx32 x, fx32 y);
    void func_02063e7c(MatchPlayer *player);
    void func_02063ec8(MatchPlayer *player);
    BOOL func_02063f24(MatchPlayer *player, MatchPoint *pos, int *dir, int unused, fx32 x0, fx32 y0, fx32 x1, fx32 y1);
    void func_020640b4();
    BOOL func_02064500(MatchPlayer *player, fx32 *pos, int *dir, int *kind);
    void func_020646d4();
    void func_02065178();
    void func_02065414(MatchPlayer *player);
    void func_020654cc(MatchPlayer *player, int action, int a, MatchPoint *b, MatchPoint *c, int d);     // (sets the player's action)
    void func_020657a8(MatchPlayer *player);
    void func_020658ec(MatchPlayer *player);
    void func_020659f8(MatchPlayer *player);
    void func_02065a04(MatchPlayer *player);
    void func_02065a90(MatchPlayer *player);
    void func_02065c00(MatchPlayer *player);
    void func_02065dec(MatchPlayer *player);
    void func_02065fa0(MatchPlayer *player);
    void func_02066338();
    void func_020663b0(MatchPlayer *player, int a);
    void func_02066504(int flags, int a, int b);
    int func_020665a4(MatchPoint *target, int count, s32 *ids, fx32 *dists, u32 flags, MatchPlayer *player);
    void func_02066768();
    BOOL func_02066e14(int value);
    int func_02066e28(int side, int b, BOOL refresh);
    int func_02067014(MatchPlayer *player, int a, int b);
    fx32 func_02067044(int a, int b);
    fx32 func_0206707c(int a, int b);
    void func_020670ec(fx32 *pos, fx32 margin);     // (clamps pos into the field, margin inside its edges)
    BOOL func_02067104(fx32 x, fx32 y, fx32 targetX, fx32 targetY, fx32 radius, MatchPoint *pos);
    BOOL func_020671e4(int team, UnkSpot_020671e4 *a, UnkSpot_020671e4 *b, MatchPlayerBody *body);
    void func_020673d8(MatchPlayer *player, fx32 distance, MatchPoint *pos);
    void func_02067448(MatchPlayer *player, fx32 distance, MatchPoint *pos);
    void func_020674f8();
    int func_020678d0(MatchPlayer *player, u32 flags, MatchPlayer *target, MatchPoint *point, int a, int b);
    BOOL func_02067aec(MatchPlayer *player, int a, int b, void *c, int d, int e);
    BOOL func_02067e00(MatchPlayer *player, int a, int b, int c);
    BOOL func_02067e78(MatchPlayer *player, int a, int b);
    int func_02067f44(MatchPlayer *player, int angle);
    BOOL func_02068028(MatchPlayer *player, MatchPoint *out, int a, fx32 dist);
    BOOL func_0206811c(u16 *action);
    void func_0206815c(MatchPoint *pos, MatchPoint *a, MatchPoint *b, fx32 percent);
    void func_020681d8(MatchPoint *from, int angle, fx32 distance, MatchPoint *pos);
    BOOL func_02068248(MatchPlayer *player, fx32 x0, fx32 y0, fx32 x1, fx32 y1, BOOL direct);
    BOOL func_02068434(MatchPlayer *player, fx32 x, fx32 y);
    int func_020684f0(int kind, int a, int b);
    int func_02068548(int a, int b);
    int func_02068560(int a, int b, int c);
    int func_02068578(int a, int b, int c);
    int func_02068590(int a, int b);
    BOOL func_020685a8(int team, int position, BOOL force);
    BOOL func_02068614(MatchPlayer *player, fx32 x, fx32 y);
    BOOL func_020687cc(MatchPoint *from, int angle, fx32 distance, MatchPoint *pos);
    fx32 func_02068844(int a, fx32 speed, u16 angle, fx32 from, fx32 to, u8 flag, fx32 g);
    fx32 func_0206896c(MatchBall *ball, MatchPoint *pos);
    fx32 func_020689c4(fx32 speed, u16 angle, fx32 height, u8 flag);
    s32 func_02068b08(fx32 value);
    fx32 func_02068b5c(MatchPlayer *player, fx32 dist, int c);
    u16 func_02068c28(int direction, int target, int *amount);
    int func_02068ce4(MatchPlayer *player, int target, int amount);
    void func_02068d20(MatchPlayer *player, int value);
    fx32 func_02068d74(MatchPlayer *player);
    int func_02068eb4(MatchPlayer *player);
    int func_02068ed4(int value);
    BOOL func_02068edc(MatchPlayer *player, int angle);
    fx32 func_02068f68(fx32 value);
    int func_02068f90(MatchPlayer *player);
    BOOL func_020690a8(int a, int b);
    BOOL func_02069110(MatchPlayer *player);
    int func_02069184(MatchPlayer *player);
    int func_02069344(int a, int b, int c, int d, u8 e, int f);
    int func_02069394(int a, int b, int c, int d, u8 e, int f);
    fx32 func_0206a078(MatchPlayer *player);
    fx32 func_0206a100(MatchPlayer *player, int fast);
    BOOL func_0206a3b8(MatchPlayer *player);
    BOOL func_0206a494(MatchPlayer *player, MatchPoint *point);
    BOOL func_0206a54c(MatchPlayer *player);
    int func_0206a590(fx32 x, fx32 y, fx32 radius, MatchPlayer *player, int a);
    int func_0206a648(fx32 x, fx32 y, fx32 radius, MatchPlayer *player, int a);
    BOOL func_0206a700(int value);
    BOOL func_0206a720(int value);
    MatchState *func_0206a748(int n);
    BOOL func_0206a774(int a);     // (a stub: TRUE)
    BOOL func_0206a77c(MatchState *state);
    int func_0206a7f0(int n, BOOL convert);
    u8 *func_0206a890(int n, BOOL convert);
    u8 *func_0206a8d8(int player, int n, BOOL convert);
    s32 func_0206a93c();
    u8 *GetTeamInfo(int i);
    MatchState *func_0206a970();
    u8 *func_0206a9a4(int a, int b);
    u8 *func_0206a9d0(int team, BOOL convert);
    u8 *func_0206aa30(int a);
    void func_0206aa54();
    void func_0206aa6c(int phase, int count, BOOL flag);
    int func_0206abfc(MatchState *state);
    void func_0206ac44();
    BOOL func_0206ace8();
    BOOL func_0206acfc(int value);
    void func_0206ad1c();
    void func_0206ad68(BOOL a, BOOL b);
    void func_0206ad94(int force, int b);
    void func_0206b018(void *body, MatchPlayer *player);
    void func_0206b050();
    void func_0206b1a0(MatchState *state, u8 value);
    s32 func_0206b1c4(int i);
    s32 func_0206b1d0(int i);
    int func_0206b1dc(int side);
    BOOL func_0206b274(int team, int value);
    u8 *func_0206b2c8(int team);
    u8 *func_0206b308();
    u8 *func_0206b390(int side);
    u8 *func_0206b3a4(int side, u32 index);
    void func_0206b3c4(int a, int b);
    u8 func_0206b3dc(int i);
    u8 func_0206b3ec(int i);
    void func_0206b3fc();
    void func_0206b464(u8 value);
    u8 func_0206b470();
    int func_0206b47c(BOOL invert);
    int func_0206b4a8(int a);
    int func_0206b4b8(int a);
    u8 *func_0206b4cc(int i);
    void func_0206b4d8();
    BOOL func_0206b508(MatchPoint *out, BOOL force);
    void func_0206b5a0(MatchPoint *pos);
    int func_0206b628(MatchPlayer *player, MatchPoint *out);
    int func_0206b89c(MatchPlayer *player, MatchPoint *target);
    int func_0206b9c4(MatchBall *ball, fx32 distance);
    int func_0206ba84(MatchPlayer *player, u16 *ids, int max, int *best, int *angle, s8 *level);
    void func_0206bc70(int index);
    void func_0206befc(MatchPoint *a, MatchPoint *b);
    BOOL func_0206bf2c(MatchPlayer *player);
    void func_0206bf88();
    u8 func_0206bf98();
    void func_0206bfa0(u8 value);
    s8 func_0206bfa8();
    void func_0206bfb4(int value);
    u8 func_0206bfec();
    void func_0206bff4(int phase);
    u8 func_0206bffc();
    void func_0206c004(u8 value);
    u8 *func_0206c00c(int i);
    u8 *func_0206c018(int i);
    u8 *func_0206c024(MatchPlayer *player);
    MatchPlayer *func_0206c064(int team);
    s16 func_0206c0c0(u32 i);
    u8 *func_0206c0d8(int team);
    void func_0206c104(u8 value);
    BOOL func_0206c110();
    BOOL func_0206c148();
    void *func_0206c180(int kind);
    void *func_0206c1fc(int kind, int i);
    void func_0206c23c(MatchSegment *area, fx32 inset, fx32 extra, u8 flag);
    void func_0206c37c();
    BOOL func_0206c42c(int team);
    BOOL func_0206c5b0(int team, int index);
    BOOL func_0206c644();
    void func_0206c670(u8 value);
    void func_0206c67c(u8 value);
    u8 func_0206c688();
    void func_0206c694();
    void func_0206c758(MatchPlayer *player);
    BOOL func_0206c7d8();
    BOOL func_0206c7e0(int value);
    BOOL func_0206c7f8(int value);
    BOOL func_0206c80c(int value);
    BOOL func_0206c820(int value);
    void func_0206c834();
    s32 func_0206c858();
    void func_0206c864(u32 value);
    s32 func_0206c878();
    s32 func_0206c884();
    void func_0206c890(u32 value);
    void func_0206c8a4(u32 value);
    void func_0206c8b8(s32 value);
    void func_0206c8c0(s32 value);
    BOOL func_0206c8c8(MatchPlayer *player, fx32 x, fx32 y, fx32 *outX, fx32 *outY);
    BOOL func_0206c9b0(MatchBall *ball, int kind, fx32 x, fx32 y);
    void func_0206caa4();
    void func_0206cad4();
    void func_0206cbbc();
    void func_0206cca4(u8 a, s8 b);
    int func_0206ccb8();
    BOOL func_0206cd08(int index, void *buffer);
    BOOL func_0206cd78(int index);
    void func_0206ce4c(u16 value);
    u16 func_0206ce5c();
    void func_0206ce6c(u16 value);
    u16 func_0206ce7c();
    void func_0206ce8c(u8 value);
    u8 func_0206ce9c();
    u8 func_0206ceac();
    u8 func_0206ceb4();
    BOOL func_0206cec0();
    int func_0206cf6c();
    BOOL func_0206cfc8(int index);
    BOOL func_0206d094(int team);
    BOOL func_0206d114(int team);
    BOOL func_0206d188(int team, BOOL flag);
    int func_0206d358(int kind);
    void func_0206d4ec();
    BOOL func_0206d690(u8 value);
    u8 func_0206d6a4();
    void func_0206d6b4();
    BOOL func_0206d828();
    BOOL func_0206d840(int kind);
    BOOL func_0206d8e0();
    BOOL func_0206d8f8();
    BOOL func_0206d910();
    BOOL func_0206d940();
    BOOL func_0206d958();
    BOOL func_0206d970();
    BOOL func_0206d988();
    BOOL func_0206d9a0();
    u32 func_0206d9d0(int value);
    u32 func_0206da44(int value);
    BOOL func_0206dad4(int id);
    BOOL func_0206daec(int id);
    BOOL func_0206db10(SaveBody *dst);
    BOOL func_0206dc34(u8 *out);
    BOOL func_0206dcdc(SaveBody *src);
    void func_0206ddc8(int i, int flags);
    void func_0206dde8(int i, int flags);
    BOOL func_0206de18(int i, u16 flags);
    BOOL func_0206de34(int i);
    u8 *func_0206de44();
    MatchRules *func_0206de4c();
    BOOL func_0206de54(int side);
    int func_0206de64();
    BOOL func_0206dedc();
    BOOL func_0206deec();
    BOOL func_0206df08();
    BOOL func_0206df34();
    int func_0206df44();
    void func_0206df58(int i, u8 value);
    u8 func_0206df68(int team);
    void func_0206df9c(s32 value);
    int func_0206dfa4(int team, int mode);
    int func_0206e018(int team, BOOL bench, int kind);
    BOOL func_0206e100(int team, int pos, BOOL bench, int mode);     // (mode unused)
    BOOL func_0206e174(int team, u8 *out, int n);
    u8 func_0206e1c4(int i);
    void func_0206e1d4(int i, u8 value);
    void func_0206e1e4(u8 value);
    u8 func_0206e1f0();
    int func_0206e1fc(int a);
    int func_0206e298(int team);
    int func_0206e2e4(int team);
    BOOL func_0206e330();
    void func_0206e3a8();
    void func_0206e3d4();
    BOOL func_0206e50c(u32 index, void *buffer);
    BOOL func_0206e5e4(u32 index, void *out, int size);
    BOOL func_0206e6bc();
    BOOL func_0206e738();
    int func_0206e76c(int mode);
    void func_0206e828(int value);
    void func_0206e840(u16 value);
    u16 func_0206e84c();
    BOOL func_0206e858(u32 kind, MatchPlayer **players, int count);
    void func_0206ea30(int i, u16 value);
    u16 func_0206ea40(int i);
    void func_0206ea50(u16 value);
    u16 func_0206ea5c();
    int func_0206ea68(const char *name);
    void func_0206eb34();
    void func_0206ecbc();
    void func_0206f028(s32 value);
    void func_0206f034();
    u32 func_0206f04c();
    u8 func_0206f058();
    void func_0206f064();
    void func_0206f08c();
    BOOL func_0206f09c(MatchPlayer *player);
    BOOL func_0206f178(MatchPlayer *player);
    BOOL func_0206f278(MatchPlayer *player);
    BOOL func_0206f354(MatchPlayer *player);
    void func_0206f430();
    void func_0206f4ac(int index, s8 *data);
    int func_0206f500(int id);
    int func_0206f550(int id, int percent, int mode);
    int func_0206f600(int id, int percent, int mode);
    void func_0206f6b0(int a, BOOL b);
    u16 func_0206f70c(u16 id);
    u16 func_0206f750(u16 id);
    BOOL func_0206f7a4();
    void func_0206f824(u32 id, BOOL second);
    BOOL func_0206f8c8(u32 id);
    u16 func_0206f98c(u16 id);
    u32 func_0206f9e0(u32 id);
    BOOL func_0206faa0(int index);
    void func_0206facc();
    void func_0206fad0(int index, int kind, int minutes);
    void func_0206fbb4(int i);
    void func_0206fbd0(MatchPlayer *player, u8 *action);
    s16 func_0206fdac();
    BOOL func_0206fdbc(int team, fx32 y);
    BOOL func_0206fe28(int team, fx32 y);
    void func_0206fe94(int delta);
    void func_0206fec0(s16 value);
    void func_0206fed0(MatchPlayer *player, fx32 x, fx32 y, fx32 toX, fx32 toY);
    void func_0206ffe0();
    void func_020704b0(BOOL a);
    void func_02070548(int id);
    void func_020705b4(int id);
    void func_020705dc(int id);
    void func_020705f8(u8 value);
    u8 func_02070604();
    void func_02070610(int amount);
    BOOL func_02070644();
    void func_0207065c();
    u8 func_0207066c();
    void func_02070678(BOOL value);
    u8 func_020706a8();
    void func_020706b4(int index, int frame);
    void func_0207070c();
    s32 func_02070760();
    int func_020725ac(MatchPlayer *player, int a, int b, bool flag, int *ids);
    int func_020728e0(int value);
    BOOL func_02072914(MatchPlayer *player, int value, u8 *req, int i);
    BOOL func_02072a5c(MatchPlayer *player, MatchPlayer *target, u8 *req);
    void func_02072bb8(MatchPlayer *player, int id, int slot);
    int func_02072fe8(MatchPlayer *player, int id, BOOL first);
    int func_02073094(int index, int a, int b);
    BOOL func_020730dc(MatchPlayer *player, int id, int slot, u8 force);
    BOOL func_020731c4(MatchPlayer *player, u8 *move, BOOL any);
    BOOL func_020732b0(MatchPlayer *player, int id, int *error);
    BOOL func_020733d4(MatchPlayer *player, int a, int id, int b, int c, BOOL flag, int d, int e);
    BOOL func_020738e4(void *buffer, int index);
    u8 *func_020739a8(int i);
    u8 *func_020739cc(int i);
    u8 func_020739e4(void *team, int i);
    int func_02073a20(void *team, int id, u16 *out);
    int func_02073a9c(void *team, int i, u16 *out, int b);
    int func_02073df8(void *team, int i, int a, u8 b);
    int func_02073e3c(MatchPlayer *player, int id, MatchPlayer *target, u8 check);
    BOOL func_02073fa0(MatchPlayer *player, int id, MatchPlayer *a, MatchPlayer *b);
    BOOL func_020740cc(MatchPlayer *player, int i, int a, int b);
    int func_02074154(MatchPlayer *player, int *first, int nfirst, int *second, int nsecond);
    int func_02074210(MatchPlayer *player, int a, int b, int c, int *out, int max);
    BOOL func_020742f0(MatchPlayer *player, int a, int b);
    BOOL func_0207436c(MatchPlayer *player, int a, int b, int i, bool flag);
    BOOL func_02074424(MatchPlayer *player, int a, int b, int c);
    BOOL func_020744d4(int a);
    int func_0207455c(int a, BOOL b, u32 flags);
    int func_02074584(int a, BOOL b, u32 flags);
    int func_020745ac(int a, BOOL b, u32 flags);
    int func_020745d4(int a, BOOL b, u32 flags);
    int func_020745e4(int a, int kind, int b, int c, u8 d);
    int func_02074700(int a, int b, int c, u8 d);
    int func_02074728(int a, int b, int c, u8 d);
    int func_02074750(int a, int b, int c, u8 d);
    int func_02074778(int a, int b, int c, u8 d);
    s8 func_020747a0(int i);
    BOOL func_020747b4(int i, int value);
    BOOL func_020747e4(int index, u32 value);
    void func_02074820(int id, int slot, BOOL set);
    int func_020748fc(int id);
    static u16 func_020749c8(s16 *values, BOOL reduce, int percent);
    static u16 func_02074a18(s16 *values, MatchPlayer *player);
    static int func_02074aac(u8 *req);     // (req: the 12 bytes func_020738e4 copies)
    static int func_02074abc(u8 *req);
    static u8 func_02074ac8(u8 *req);
    void func_02074b30();
    void func_02074f90(int team, int *out);
    void func_020751b8();
    void func_02075428();
    void func_0207577c(UnkRecord_02076168 *record);
    void func_0207597c();
    void func_02075f7c(MatchPlayer *player, UnkRecord_02076168 *rec);
    BOOL func_020760e4(int a, int b);
    UnkRecord_02076168 *func_02076168();
    UnkRecord_02076168 *func_0207620c();
    s8 func_02076268();
    s8 func_020762c0();
    void func_02076318(int a, int b, int mode);
    BOOL func_0207635c();
    static void func_02076370(u8 *rec, int mode);
    static s8 func_02076424(u8 *data);
    static s8 func_02076460(u8 *data);
    static int func_0207649c(u8 *data);     // (on another struct)
    static int func_020764b4(u8 *data);     // (on another struct)
    static int func_020764cc(u8 *data);     // (on another struct)
    static int func_020764e4(u8 *data);     // (on another struct)
    int func_020765d4(int i, int n);     // (adds n to item i's count, at most 99: 0, or 13/27 on error)
    int func_02076620(u32 id, int n);
    int func_020766e8(u32 i);
    u8 func_020767a4(u32 i);
    u32 func_020767bc();
    s32 func_020767cc(s32 amount);
    void func_02076808(u8 value);
    u8 func_02076818();
    void func_02076828(u32 value);
    u8 func_02076848();
    u32 func_02076858();
    s32 func_02076868(s32 value);
    s32 func_020768a8(s32 amount);
    u8 *func_020768e4(u8 *team, int i);
    u8 *func_020768fc(u32 i);
    u8 *func_02076914(u8 *team);
    int func_02076924(u16 *out, int max);
    int func_0207697c(int kind, u16 *out, int max);
    int func_020769f0(u16 *out, int max);
    BOOL func_02076a64(u8 a, u8 b);
    int func_02076a7c(u16 *out, int max, int *error);
    int func_02076ba0(u32 id, int cost, BOOL force);
    int func_02076c08(MatchPlayer *player, u32 id);
    int func_02076c98(int team, u32 id);
    int func_02076ddc(int team, BOOL all);
    u16 func_02076ec8(MatchPlayer *player);
    u16 func_02076f04(int i);
    u8 *func_02076f14(MatchPlayer *player);
    u8 *func_02076f34(int i);
    int func_02076f50(u32 id, int n);
    BOOL func_02077064(u32 item, int n);
    BOOL func_020770a8(u32 id, int count);
    BOOL func_02077104(u32 item, int n);
    BOOL func_02077148(u8 *data, int *error);
    BOOL func_020771d4(u32 id, int *error);
    BOOL func_02077224(MatchPlayer *player, u32 id, int *error);
    int func_02077448(MatchPlayer *player, u32 id, int a);
    BOOL func_0207765c(MatchPlayer *player, u32 id, int mode, int *error);
    BOOL func_020776f8(MatchPlayer *player, u32 id, int *error);
    int func_020777e4(MatchPlayer *player, u32 id, u32 i, u8 update);     // (sets the player's item in slot i)
    int func_02077830(int index, u32 id, u32 slot, u8 update);
    int func_0207793c(int index, u32 id, u32 slot, u8 update);
    int func_02077a80(int index, BOOL update);
    int func_02077b00(MatchPlayer *player, u32 slot, BOOL flag);
    int func_02077ba0(int index, u32 slot, BOOL flag);
    BOOL func_02077bd4();
    BOOL func_02077c4c(void **file);
    BOOL func_02077ce4();
    int func_02077d18(void *buffer, int index);
    int func_02077da8(void *buffer, int index);
    BOOL func_02077e14(u8 *team, int value);
    u16 func_02077e58(u8 *team, u32 i);
    int func_02077e78(u8 *entry, void *buffer);
    int func_02077eb8(u8 *data, void *buffer);
    int func_02077eec(int index, u32 id, int a);
    BOOL func_02077f20(u8 *data);
    u16 func_02077fa0(int level);
    u16 func_02078148(int level);
    BOOL func_020782f0(u32 id, BOOL last);
    BOOL func_02078394(u32 id);
    // (on an entry of unk_bbc: its u16 at 0x22 packs a kind in bits 14-15, a sign in bit 10
    // and a value in bits 0-9)
    static int func_02078428(u8 *entry);
    static int func_02078434(u8 *entry);
    static int func_02078450(u8 *entry);
    static int func_02078474(u8 *entry);
    void func_02078498();
    void func_020784b8(int team);
    BOOL func_020784ec(MatchPlayer *player, fx32 x, fx32 y);
    MatchPoint *func_02078520(int team, u8 *data);
    MatchPoint *func_02078560(int team, u8 *data);
    int func_020785a0(int team);
    BOOL func_02078664(MatchPlayer *player, MatchPoint *out, int force);
    MatchPlayerInfo *func_020787e8(MatchPlayer *player);
    int func_02078800(int a, BOOL b, int c);
    int func_02078844(int team, u16 *out, int max, u8 flag);
    int func_02078990(int team, u16 *out, int max, BOOL bare);
    int func_02078aac(int team, u16 *out, int max, u8 flag, int kind);
    int func_02078bc0(MatchPlayer *player, void *buffer, int max, int flags, BOOL mask);
    int func_02078c70(int team, u16 *out, int max, BOOL bare, int kind);
    int func_02078d84(int team, u16 *out, int max, u8 flag);
    BOOL func_02078ea8(int id);
    u8 func_02078f14(MatchPlayer *player);
    BOOL func_02078f74(MatchPlayer *player);
    BOOL func_02078f8c(MatchPlayer *player);
    BOOL func_02078fa4(MatchPlayer *player);
    BOOL func_02078ff4(MatchPlayer *player);
    BOOL func_0207900c(MatchPlayer *player);
    BOOL func_02079024(MatchPlayer *player);
    BOOL func_0207903c(MatchPlayer *player);
    BOOL func_02079064(MatchPlayer *player);
    u8 func_020790cc(MatchPlayerBody *body, fx32 x, fx32 y);
    u16 func_020790e8(MatchPlayerBody *body, u16 dir);
    u16 func_02079114(MatchPlayerBody *body, fx32 x, fx32 y);     // (the direction to (x, y), from the body's)
    u8 func_02079148(MatchPlayerBody *body, u8 *data);
    u16 func_0207918c(MatchPlayer *player, fx32 x, fx32 y);
    int func_020791cc(int a, int b);
    int func_0207922c(MatchPlayer *player, fx32 x, fx32 y);
    void func_0207924c(int team, BOOL on);
    void func_020792cc(int team, BOOL on);
    void func_0207934c();
    void func_020793bc();
    void func_020795b4(int a, int b, int mask);
    void func_020797d4();
    void func_02079838(int level);
    void func_020798c0(int team, int level);
    void func_02079940(int team, int level);
    void func_020799b4();
    void func_02079ae4();
    void func_02079c08();
    void func_02079cec();
    void func_02079d1c();
    MatchPlayer *func_02079d2c(int index);
    int func_02079d3c(int team);
    int func_02079d9c(MatchPlayer *player);
    void func_02079dd8(u8 *order);
    MatchPlayer *func_02079e90(int team, int i);
    MatchPlayer *func_02079ea0(int team, int value, int kind);
    int func_02079f20(int a, int flags, int b);
    int func_02079f30(int a, int flags, int b);
    int func_02079f40(int a, int flags, int b);
    BOOL func_02079f98(MatchPlayer *player, int flags, MatchPlayer *other);
    BOOL func_0207a144(MatchPlayer *player, u32 flags, MatchPlayer *other, u8 *info);
    MatchPlayer *func_0207a2a8(int team);
    void func_0207a304(MatchPlayer *player);
    BOOL func_0207a350(MatchPlayer *player);
    BOOL func_0207a394(MatchPlayer *player);
    s32 func_0207a3e8(MatchPlayer *player);
    BOOL func_0207a46c(MatchPlayer *player);
    void func_0207a4a0(MatchPlayer *player);
    BOOL func_0207a510(MatchPlayer *a, MatchPlayer *b);
    int func_0207a534(u32 id);
    int func_0207a5c0(int id, void *out);
    BOOL func_0207a78c();
    BOOL func_0207a820();
    BOOL func_0207a854(u16 id, s8 *data);
    BOOL func_0207a950(MatchPlayer *player);
    BOOL func_0207a990(int team, int n, int kind);
    int func_0207aa58(int team);
    int func_0207aa94(int team);
    int func_0207aaf4(int team, int kind);
    int func_0207ab64(int team);
    int func_0207aba0(int team);
    int func_0207ac0c(int team, int kind);
    int func_0207ac90(int team);
    int func_0207acf0(int team);
    int func_0207ad74(int team);
    int func_0207add4(int team, u32 id);     // (1 + where id is in the team's unk_3ac, or 0)
    int func_0207ae40(int team, u32 id);     // (the same in unk_34c)
    BOOL func_0207aeac(int team, u32 id);
    BOOL func_0207aec4(int team, u32 id);
    BOOL func_0207aedc(int team, int id);
    BOOL func_0207af84(int team, int id);
    int func_0207b00c(int team, u16 id, BOOL flag, u8 a, int b, u8 c);
    u8 func_0207b160(int team);
    int func_0207b28c(int team, int index, BOOL flag, u8 a);
    int func_0207b708(u32 mode, MatchPlayer *player, int a, int b, int c);
    void func_0207b780();
    void func_0207bb9c();
    int func_0207bdf8(int team, int id);
    int func_0207bee8(int team, int id, int shift);
    int func_0207bfd0(int team, int id, int value);
    int func_0207c064(int team, int id);
    int func_0207c110(int team, u32 id);
    BOOL func_0207c178(int a, int index);
    void func_0207c1b0();
    void func_0207c3d8(int team);
    int func_0207c478(MatchPlayer *player, int a, int b, int c);
    void func_0207c65c(u32 id, int a, int b, int c);
    void func_0207c6b4(int a, BOOL update, BOOL force);
    void func_0207c720(MatchPlayer *player);
    void func_0207c7f4(MatchPlayer *player);
    void func_0207c8e0(int a);
    void func_0207cbd8(int a);
    void func_0207d118(int team);
    BOOL func_0207d214(int team, int i);
    BOOL func_0207d244(int team, int i);
    u16 func_0207d274(int team, int value);
    int func_0207d308(u8 *data);
    void func_0207d330(u8 *data, int add, int value, u8 quiet);
    int func_0207d378(u8 *data, int level);
    u8 func_0207d394(u8 *range, int level);
    u16 func_0207d3f8(u16 *range, int level);
    u8 *func_0207d468(u8 *data, int kind);
    u8 *func_0207d494(u8 *data, int kind);
    s16 func_0207d500(MatchPlayer *player, int kind);
    void func_0207d538(MatchPlayer *player, int kind, s16 value);
    int func_0207d568(MatchPlayer *player, int kind);
    void func_0207d60c(MatchPlayer *player, int kind, int value);
    void func_0207d6a8();
    void func_0207d6ac();
    void func_0207d6b0(u8 *data);
    int func_0207d6bc(int value);
    int func_0207d728(MatchPlayer *player, int kind, int delta);
    int func_0207d830(MatchPlayer *player, int kind, int delta, u8 apply);
    int func_0207da34(MatchPlayer *player, int kind);
    int func_0207dac0(MatchPlayer *player, int kind);
    int func_0207dbf4(u8 *data, int *moves);     // (the moves data learns at its level)
    BOOL func_0207dc10(u8 *data, int a);
    void func_0207de24(MatchPlayer *player, int max, int base, s8 *value, u8 *rest);
    void func_0207dec0();
    void func_0207e19c(MatchPlayer *player);
    int func_0207e334(int a, int b, int c, int d);
    void func_0207e5a4(u8 *data, int level, int a);
    u8 func_0207e5fc();
    void func_0207e60c(int value);
    BOOL func_0207e62c(int index);
    void func_0207e6dc(MatchPlayer *player, fx32 x, fx32 y);
    void func_0207e738(int index, int px, int py);
    int func_0207e810(int index);
    int func_0207e884(int index);
    void func_0207e8f8();
    BOOL func_0207ec28(int index, int value);
    BOOL func_0207ec70(int team, u32 id, int pos);
    int func_0207ee18(u32 id);
    void func_0207ee3c(int id, int value);
    void func_0207ef0c(MatchPlayer *player);
    void func_0207ef30(int index);
    void func_0207ef54(int team);
    u8 func_0207efc0();
    void func_0207efcc(u8 value);
    BOOL func_0207efd8();
    BOOL func_0207f07c();
    int func_0207f0b0(u16 *out, int max);
    int func_0207f140(u16 *out, int max);
    int func_0207f1d0(u16 *out, int max);
    int func_0207f260(u16 *out, int max);
    BOOL func_0207f2f8(int id);
    static void func_0207f38c(MatchPlayer *player, u8 dir, BOOL update);
    static void func_0207f3b8(MatchPlayer *player, int value);     // (state->unk_22, at least 0)
    static u16 func_0207f3cc(MatchPlayer *player, u32 i);     // (the item in the player's slot i)
    static s8 func_0207f3e0(MatchPlayer *player);     // (player->body->unk_1e)
    BOOL func_0207f42c(MatchPlayer *player);
    int func_0207f4bc(MatchIdScore *list, int n, u8 order);
    BOOL func_0207f5d0(char *dst, const char *src);
    int func_0207f634(u16 *ids, int n, int kind, u8 order);
    BOOL func_0207f730(int kind);
    int func_0207f7cc(MatchPlayer *player, int kind, int c);
    int func_0207ff44(int team, int kind, int c);
    int func_0207fff0(int kind, int arg);
    MatchAction *func_02080288(MatchPlayer *player);
    int func_02082d5c(int id);
    BOOL func_02082d80(int id, int value);
    void func_02082d9c(int team, MatchTeamSave *src);
    void func_02082f3c(int team, int kind);
    u8 *func_02083048(int team);
    u8 *func_02083054(int team);

    void *vtable;
    MatchSegment unk_4[6];     // (areas of the field, see func_0206c180)
    u8 unk_64[0x74 - 0x64];
    u8 unk_74[5][8];
    u8 unk_9c[2][8];
    MatchPoint unk_ac[22];     // (per player)
    u8 unk_15c[2][0x10];
    u8 unk_17c[2][0x40];
    u8 unk_1fc[0x20C - 0x1FC];
    u16 unk_20c;        // (flags)
    u8 unk_20e[0x21A - 0x20E];
    u16 unk_21a;        // (flags)
    u8 unk_21c[0x22C - 0x21C];
    MatchRules rules;   // 0x22C
    u8 unk_2b8[0x34C - 0x2B8];
    u8 unk_34c[2][0x20];     // (per team)
    u8 unk_38c[0x3AC - 0x38C];
    u8 unk_3ac[2][0x10];     // (per team)
    u8 unk_3cc[0x554 - 0x3CC];
    UnkRecord_0206b3fc unk_554;
    UnkRecord_0206b3fc unk_56c;     // (unk_554 as it was, see func_0206b3fc)
    u8 unk_584[0x6B0 - 0x584];
    UnkRecord_0206eb34 unk_6b0;
    s32 unk_b7c;
    MatchPlayerList *unk_b80;     // (an object with a vtable)
    MatchState unk_b84;   // (unk_0: the phase)
    u8 unk_b8c[2];
    s8 unk_b8e;
    u8 unk_b8f;
    u8 unk_b90[2];
    u16 unk_b92;        // (what an item sells for, in % of its price: func_02076f50)
    u8 unk_b94[0xB98 - 0xB94];
    s32 unk_b98;
    s32 unk_b9c;
    s32 unk_ba0;        // (a phase, see func_0206ac44)
    s32 unk_ba4;
    s32 unk_ba8;
    s32 unk_bac;
    u16 unk_bb0;
    u8 unk_bb2;
    u8 unk_bb3;
    MatchPlayerInfo *unk_bb4;     // (indexed by MatchPlayerState::unk_1c)
    u8 (*unk_bb8)[0x1C];
    u8 (*unk_bbc)[0x30];
    void *unk_bc0;      // (on the heap)
    s32 unk_bc4;
    s16 *unk_bc8;
    u8 (*unk_bcc)[0x10];
    u8 (*unk_bd0)[0x68];
    UnkEntry_0207efd8 *unk_bd4;     // (a file's entries, on the heap; see func_0207efd8)
    s32 unk_bd8;
    void *unk_bdc;      // (on the heap)
    u16 (*unk_be0)[2];     // (unk_c24 pairs: [1] looked up, [0] returned)
    u8 (*unk_be4)[0xC];
    s8 *unk_be8;
    s16 *unk_bec;       // (sorted ids, data_020c4828 of them; see func_0207a534)
    MatchPlayerCache *unk_bf0;      // (64 of them: func_0207a5c0)
    MatchAction *unk_bf4;     // (per player, indexed by MatchPlayer::unk_f4)
    s32 unk_bf8[2];
    void *unk_c00;      // (on the heap)
    void *unk_c04;      // (on the heap)
    s32 unk_c08[2];
    s32 unk_c10[2];
    s32 unk_c18[2];
    u8 unk_c20[4];
    s32 unk_c24;        // (how many pairs unk_be0 has)
    s32 unk_c28;
    s32 unk_c2c;
    u8 unk_c30[0xC70 - 0xC30];
    s32 unk_c70;        // (how many entries of unk_c7c there are)
    s32 unk_c74;        // (the newest one)
    s32 unk_c78;
    MatchState unk_c7c[90];     // (rings of 90: the past states)
    u8 unk_f4c[90][0x2C];
    u8 unk_1ec4[90 * 22][0x20];    // (per player)
    u8 unk_11644[0x116A4 - 0x11644];
    UnkRecord_02076168 unk_116a4[10];
    u8 unk_11794[4];
    u8 unk_11798[0x117A4 - 0x11798];
    u8 unk_117a4[2][11];     // (per team and position)
    u8 unk_117ba[0x117C0 - 0x117BA];
    u8 unk_117c0[4];     // (the start of what func_0209e020 and func_0209e220 read)
    s32 unk_117c4[2];    // (per team)
    u8 unk_117cc[4];
    u8 unk_117d0[4];     // (the limits of unk_117cc)
    u8 unk_117d4;
    u8 unk_117d5;
    u8 unk_117d6[2];     // (per team: flags)
    u8 unk_117d8[2];
    u8 unk_117da[2];     // (per team)
    u8 unk_117dc[0x117E4 - 0x117DC];
    s32 unk_117e4[2];
    u8 unk_117ec[0x117F0 - 0x117EC];
    u32 unk_117f0[2];   // (per team: flags)
    u8 unk_117f8[0x117FC - 0x117F8];
    u16 unk_117fc;
    u16 unk_117fe;
    s16 unk_11800;      // (what func_020663b0 gives the players' state->unk_22)
    u8 unk_11802[0x11842 - 0x11802];
    u16 unk_11842;      // (the number of unk_bd4's entries)
    u8 unk_11844[0x11848 - 0x11844];
    u16 unk_11848[2];   // (per team)
    u8 unk_1184c[0x1188C - 0x1184C];
    u8 unk_1188c[2];
    u8 unk_1188e[2];
    u8 unk_11890[0x11895 - 0x11890];
    u8 unk_11895;
    u8 unk_11896[2];
    u8 unk_11898;
    u8 unk_11899;
    u8 unk_1189a;
    u8 unk_1189b;
    u8 unk_1189c[0x118A7 - 0x1189C];
    s8 unk_118a7;
    s8 unk_118a8;
    s8 unk_118a9;       // (a player, see func_02065a90)
    u8 unk_118aa[2];
    s32 unk_118ac;
    s32 unk_118b0;
    s32 unk_118b4;
    u8 unk_118b8[2];
    u8 unk_118ba;
    u8 unk_118bb[0x118BE - 0x118BB];
    u8 unk_118be[2][6];
    u8 unk_118ca[2][6];     // (per team)
    u8 unk_118d6[0x118DB - 0x118D6];
    u8 unk_118db;
    u8 unk_118dc;
    u8 unk_118dd;
    u8 unk_118de;
    u8 unk_118df[0x118E4 - 0x118DF];
    u8 unk_118e4[2 * 7];    // (7 per team: func_0207c7f4)
    u8 unk_118f2[0x118F4 - 0x118F2];
    u8 unk_118f4;
    u8 unk_118f5;
    u8 unk_118f6[2];
    s32 unk_118f8;
    s32 unk_118fc;
    s16 unk_11900;
    u8 unk_11902;
    u8 unk_11903;
    u8 unk_11904;       // (a gauge: 100 is full)
    u8 unk_11905[0x11910 - 0x11905];
    u8 unk_11910;
    u8 unk_11911;
    u8 unk_11912;
    u8 unk_11913;
    u8 unk_11914;
    u8 unk_11915[0x11918 - 0x11915];
    s32 unk_11918;
    fx32 unk_1191c;
    fx32 unk_11920;     // (the ball's distance per step of speed)
    fx32 unk_11924;
    s32 unk_11928;      // (the range of func_0206a078's value)
    s32 unk_1192c;
};

extern MatchEngine data_020e88a0;

#endif // MATCH_MATCHENGINE_HPP
