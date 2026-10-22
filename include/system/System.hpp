#ifndef SYSTEM_SYSTEM_HPP
#define SYSTEM_SYSTEM_HPP

#include "nitro/types.h"

class FileManager;

// The game's start-up (arena, heaps, file loader, overlays) and the vblank handler; its state is in data_020c4638
class System {
public:
    static void func_0203f8ec();
    static void *func_0203f93c(u32 size);
    static void func_0203f9b8();
    static void func_0203fa48();
    static void func_0203fac8();
    static void func_0203fb90();
    static void func_0203fc1c();
    static void func_0203fc70();
    static void func_0203fc74();
    static void func_0203fca4();
    static void func_0203ff30();
    static void func_0203ff78();
    static void func_0203ffb4();
    static void func_0203ffd4();
    static void func_020401bc();
    static void func_02040358();
    static void func_020404bc();
};

// The game's systems, made at the start
struct SystemGlobals {
    u8 unk_00[0x10];
    void *unk_10;
    void *unk_14;
    void *unk_18;
    u8 unk_1c[0xC];
    void *unk_28;
    u8 unk_2c[4];
    void *unk_30;
    u8 unk_34[4];
    void *unk_38;
    void *unk_3c;
    void *unk_40;
    void *unk_44;
    u32 heapSize;               // the game's heap (data_020c47b4)
    u32 arenaLo;
    void *unk_50;
    s32 systemHeap;             // the SDK's heap
    u32 heapEnd;
    void *unk_5c;
    u32 arenaHi;
    u8 unk_64[0x14];
    u32 heapMin;
    u8 unk_7c[4];
    void *unk_80;
    u8 unk_84[8];
    void *unk_8c;
    void *unk_90;
    void *unk_94;
    void *unk_98;
    void *unk_9c;
    u8 unk_a0[0xDC];
    FileManager *fileManager;
};

extern SystemGlobals data_020c4638;

#endif // SYSTEM_SYSTEM_HPP
