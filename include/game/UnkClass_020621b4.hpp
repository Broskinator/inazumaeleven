#ifndef GAME_UNKCLASS_020621B4_HPP
#define GAME_UNKCLASS_020621B4_HPP

#include "nitro/types.h"
#include "nitro/fx.h"

#include "game/Match.hpp"

// The object at data_020e88a0 (0x11920+ bytes, made by the static constructors): the match's data
class UnkClass_020621b4 {
public:
    UnkClass_020621b4 *func_020621b4();
    UnkClass_020621b4 *func_02062268();
    UnkClass_020621b4 *func_02062288();
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
    void func_020634e8(int index, int a, int b);
    void func_02063550(MatchPlayer *player, int a, int b, int c, int d);
    BOOL func_020636b8(MatchPlayer *player);
    void func_0206371c();
    void func_02063c14();
    u16 func_02063e4c(fx32 x, fx32 y);
    void func_02063e6c(fx32 x, fx32 y);
    void func_02063e7c(MatchPlayer *player);
    void func_02063ec8(MatchPlayer *player);
    void func_02063f24();
    void func_020640b4();
    void func_02064500();
    void func_020646d4();
    void func_02065178();
    void func_02065414(MatchPlayer *player);
    void func_020654cc(MatchPlayer *player, int action, int a, MatchPoint *b, MatchPoint *c, int d);     // (sets the player's action)
    void func_020657a8(MatchPlayer *player);
    void func_020658ec(MatchPlayer *player);
    void func_020659f8(MatchPlayer *player);
    void func_02065a04(MatchPlayer *player);
    void func_02065a90();
    void func_02065c00();
    void func_02065dec();
    void func_02065fa0(MatchPlayer *player);
    void func_02066338();
    void func_020663b0();
    void func_02066504(int flags, int a, int b);
    void func_020665a4();
    void func_02066768();
    BOOL func_02066e14(int value);
    int func_02066e28(int a, int b, int c);
    int func_02067014(MatchPlayer *player, int a, int b);
    fx32 func_02067044(int a, int b);
    fx32 func_0206707c(int a, int b);
    BOOL func_020670ec(fx32 *pos);
    void func_02067104();
    void func_020671e4();
    void func_020673d8(MatchPlayer *player, fx32 distance, MatchPoint *pos);
    void func_02067448();
    void func_020674f8();
    void func_020678d0();
    void func_02067aec(MatchPlayer *player, int a, int b, void *c, int d, int e);
    void func_02067e00(MatchPlayer *player, int a, int b, int c);
    void func_02067e78();
    void func_02067f44();

    void *vtable;
    u8 unk_4[0x9C - 0x4];
    u8 unk_9c[2][8];
    u8 unk_ac[0xB7C - 0xAC];
    s32 unk_b7c;
    s32 unk_b80;
    u8 unk_b84[0xB98 - 0xB84];
    s32 unk_b98;
    u8 unk_b9c[0xBB0 - 0xB9C];
    u16 unk_bb0;
    u8 unk_bb2;
    u8 unk_bb3;
    s32 unk_bb4[21];
    u8 unk_c08[0xC28 - 0xC08];
    s32 unk_c28;
    s32 unk_c2c;
    u8 unk_c30[0xC70 - 0xC30];
    s32 unk_c70;
    u8 unk_c74[0x117D4 - 0xC74];
    u8 unk_117d4;
    u8 unk_117d5;
    u8 unk_117d6[0x117E4 - 0x117D6];
    s32 unk_117e4[2];
    u8 unk_117ec[0x11899 - 0x117EC];
    u8 unk_11899;
    u8 unk_1189a[0x118DD - 0x1189A];
    u8 unk_118dd;
    u8 unk_118de;
    u8 unk_118df[0x118F5 - 0x118DF];
    u8 unk_118f5;
    u8 unk_118f6[0x118FC - 0x118F6];
    s32 unk_118fc;
    u16 unk_11900;
    u8 unk_11902[0x11918 - 0x11902];
    s32 unk_11918;
};

#endif // GAME_UNKCLASS_020621B4_HPP
