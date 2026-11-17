#ifndef SYSTEM_SYSTEM_HPP
#define SYSTEM_SYSTEM_HPP

#include "nitro/types.h"

class FileManager;
class TextFont;
class TextFont2bpp;

// a font file found by the overlay 15 loader
struct FontFile {
    void *data;
    u32 unk_04;
    u32 unk_08;
};

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
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    s32 unk_1c;
    u16 unk_20[2];              // (data_020c4658)
    s32 unk_24;
    void *unk_28;
    s32 unk_2c;
    void *unk_30;
    TextFont2bpp *font2bpp;
    void *unk_38;
    void *unk_3c;
    void *unk_40;
    void *unk_44;
    u32 heapSize;               // the game's heap (gAllocator)
    u32 arenaLo;
    void *unk_50;
    s32 systemHeap;             // the SDK's heap
    u32 heapEnd;
    void *unk_5c;
    u32 arenaHi;
    s32 unk_64;
    TextFont *font1;
    s32 unk_6c;
    TextFont *font2;
    s32 unk_74;
    u32 heapMin;
    TextFont *font0;
    void *unk_80;
    u8 unk_84[4];
    s32 unk_88;
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
