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
    void func_02052378(s32 value);
    void func_02052384();
    void func_02052394();
    void func_020523a8();
    void func_020523bc();
    void func_02052438(UnkClass_0203dc7c *scene);
    void func_02052444(int arg, int arg2);
    void *func_02052468();
    void func_02052474(void *dst);      // (saves the boxes)
    void func_020524b0(void *src);      // (loads them)
    void func_020524f0(s32 value);
    int func_02052534();
    void func_02052550();
    void func_020525d4();
    void func_020525f4();
    void func_02052600();
    void func_02052618();
    void func_02052628();
    void func_020526cc();
    void func_020526ec();
    void func_02052720();
    void func_02052c68();
    void func_02052d48();
    void func_02052da8();
    void func_02052db8();
    void func_02052e00();
    void func_02052e0c();
    void func_02052eec();
    void func_02052fd8();
    void func_02053098();
    void func_02053824();
    void func_02053874();
    void func_02053888();
    void func_0205389c();
    void func_020538b0();
    void func_02053aa0();
    void func_02053ae0();
    void func_02053bbc();
    void func_020541d0();
    void func_02054398();
    void func_020544c0();
    void func_02054620();
    void func_020547d4();

    u8 unk_8c[0x2ACC];          // (made by func_02060294)
    u8 unk_2b58[0x3EA0];        // (made by func_02054800)
    u8 unk_69f8[0x40];
    s8 unk_6a38;
    s8 unk_6a39;
    u8 unk_6a3a[2];
    UnkClass_0203dc7c *scene;
    u8 unk_6a40[0xC];
    s32 unk_6a4c;
    u8 unk_6a50[4];
    s32 unk_6a54;
    s32 unk_6a58;               // the screen was touched last frame
    s32 unk_6a5c;               // it was touched this frame
    s32 unk_6a60;
    s32 unk_6a64;
    s32 unk_6a68;
    s32 unk_6a6c;
    s32 unk_6a70;
    u8 unk_6a74[4];
    s32 unk_6a78;
    u8 unk_6a7c[4];
    s32 unk_6a80;               // (4 bytes of treasurebox.dat)
    u8 unk_6a84[4];
    u8 unk_6a88[0x80];
};

extern TreasureBox data_020d9978;

#endif // GAME_TREASUREBOX_HPP
