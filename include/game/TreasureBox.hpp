#ifndef GAME_TREASUREBOX_HPP
#define GAME_TREASUREBOX_HPP

#include "nitro/types.h"
#include "nitro/tp.h"
#include "game/UnkClass_0203dc7c.hpp"

// The treasure boxes (/data_iz/script/treasurebox.dat): a scene object, the global data_020d9978 (objects[1] of the scene manager)
class TreasureBox : public UnkClass_0203dc7c {
public:
    TreasureBox *func_02051ba0();
    void func_02051bd4();
    void func_02051c54();
    void func_02051d20();
    int func_020522b8();
    void func_020522c0();
    int func_020522c4(u32 keys, u32 arg);
    int func_020522fc(TPData *touch);
    void func_02052374();
    u8 unk_8c[0x2ACC];          // (made by func_02060294)
    u8 unk_2b58[0x3EA0];        // (made by func_02054800)
    u8 unk_69f8[0x40];
    s8 unk_6a38;
    s8 unk_6a39;
    u8 unk_6a3a[0x1A];
    s32 unk_6a54;
    s32 unk_6a58;               // the screen was touched last frame
    s32 unk_6a5c;               // it was touched this frame
    s32 unk_6a60;
    s32 unk_6a64;
    u8 unk_6a68[0x10];
    s32 unk_6a78;
    u8 unk_6a7c[4];
    s32 unk_6a80;               // (4 bytes of treasurebox.dat)
    u8 unk_6a84[4];
    u8 unk_6a88[0x80];
};

extern TreasureBox data_020d9978;

#endif // GAME_TREASUREBOX_HPP
