#ifndef GAME_UNKCLASS_0203DC7C_HPP
#define GAME_UNKCLASS_0203DC7C_HPP

#include "nitro/types.h"
#include "nitro/fs.h"

#define UNK_STACK_DEPTH 4

enum UnkStackMode {
    UNK_STACK_SET = 0,      // the top is replaced
    UNK_STACK_PUSH,
    UNK_STACK_POP,
};

struct UnkObject;

// (the virtual functions of the child objects, called through their vtable)
struct UnkObjectVtable {
    void *unk_00;
    void (*Delete)(UnkObject *object);
    void (*func_08)(UnkObject *object, int a, int b);
    void (*func_0c)(UnkObject *object, int a);
    void *unk_10;
    int (*func_14)(UnkObject *object);
    void (*func_18)(UnkObject *object, int a);
    void (*func_1c)(UnkObject *object);
    void *unk_20[16];
    int (*func_60)(UnkObject *object, int a);
    int (*func_64)(UnkObject *object, int a);
    int (*func_68)(UnkObject *object);
};

struct UnkObject {
    UnkObjectVtable *vtable;
};

// An object whose code is in an overlay (lists end with id 0)
struct UnkOverlayObject {
    s32 id;
    UnkObject *object;
    u8 loaded;
    u8 unk_09[3];
    FSOverlayID overlay;
};

struct UnkStackEntry {
    s32 previous;
    s32 value;
    s32 next;
};


// A base class with virtual functions (vtable data_020abe94); its subclasses follow it in the ROM
class UnkClass_0203dc7c {
public:
    UnkClass_0203dc7c *func_0203dc7c();
    void func_0203dc9c();
    int func_0203dcec(int a, int b);
    int func_0203dd74(int a);
    int func_0203dde0(int which);
    int func_0203de48();
    int func_0203de50(int which);
    void func_0203de9c(UnkObject *object, UnkOverlayObject *list);
    void func_0203df08();
    void func_0203df24();
    void func_0203df40();
    int func_0203df5c(int a);
    int func_0203df80();
    int func_0203df88(int a);
    int func_0203dfac(int a);
    int func_0203dfd0();
    int func_0203dfd8(int a);
    int func_0203dffc();
    int func_0203e020();
    int func_0203e028();
    void func_0203e04c(int index, int value);
    void func_0203e090(int index, int value);
    void func_0203e0cc(int index);
    void func_0203e114(int index, int arg);
    int func_0203e18c();
    int func_0203e1bc();
    int func_0203e1ec();
    int func_0203e1f4();
    int func_0203e224();
    int func_0203e254();
    void func_0203e25c();
    BOOL func_0203e2b0(int value);
    void func_0203e2c4();
    void func_0203e2c8();
    UnkClass_0203dc7c *func_0203e2cc();
    void func_0203e2e0();
    void func_0203e2e4();
    void func_0203e2e8();
    void func_0203e2ec();
    void func_0203e2f0();
    void func_0203e2f4();
    void func_0203e2f8();
    void *vtable;               // data_020abe94 (the class is virtual; its functions are kept non-virtual here for now)
    u8 changed[2];
    u8 unk_06[2];
    s32 mode[2];                // UnkStackMode, applied by func_0203e114
    s32 current[2];
    s32 depth[2];
    UnkStackEntry stack[UNK_STACK_DEPTH][2];
    UnkObject *children[2];
    u8 swapped;                 // the screens are swapped
    u8 swapPending;
};

#define REG_POWCNT (*(volatile u16 *)0x04000304)

#endif // GAME_UNKCLASS_0203DC7C_HPP
