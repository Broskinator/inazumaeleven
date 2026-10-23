#ifndef GAME_UNKCLASS_0206EE34_HPP
#define GAME_UNKCLASS_0206EE34_HPP

#include "nitro/types.h"

// The match's rules (flags at 6): data_020e88a0 has one at 0x22C
class UnkClass_0206ee34 {
public:
    void func_0206ee34(int a);
    void func_0206ee98();
    BOOL func_0206eea8();
    BOOL func_0206eebc();
    BOOL func_0206eed0();
    BOOL func_0206eee4();
    BOOL func_0206eef8();
    BOOL func_0206ef0c();
    BOOL func_0206ef20(int side);
    BOOL func_0206ef4c();
    BOOL func_0206ef60();
    BOOL func_0206ef74();
    BOOL func_0206ef88();
    BOOL func_0206ef9c();
    u8 func_0206efb0(int i);
    s8 func_0206efb8(int i);
    void func_0206efc4();
    void func_0206efd4();
    void func_0206efec();
    void func_0206effc();
    BOOL func_0206f014();
    struct {
        u8 unk_0;
        s8 unk_1;
    } unk_0[3];
    u16 flags;          // 0x06
    u8 unk_8[8];
    s32 unk_10;
    u8 unk_14[0x1C - 0x14];
    u16 unk_1c[8];
    u8 unk_2c;
    u8 unk_2d;
    s8 unk_2e;
    u8 unk_2f;
    u8 unk_30;
    u8 unk_31;
    u16 unk_32;
    u8 unk_34[0x88 - 0x34];
    u8 unk_88;
};

#endif // GAME_UNKCLASS_0206EE34_HPP
