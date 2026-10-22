#ifndef GAME_SCENEMANAGER_HPP
#define GAME_SCENEMANAGER_HPP

#include "nitro/types.h"
#include "game/UnkClass_0203dc7c.hpp"

// What a scene is made from
struct SceneDesc {
    s32 type;
    void *arg;
};

// A part of a scene with its own vtable and a pointer back to the scene
struct ScenePart {
    void *vtable;
    UnkClass_0203dc7c *owner;
};

struct Scene4 : public UnkClass_0203dc7c {
    ScenePart part0;
    u8 unk_94[0x34];
    ScenePart part1;
    u8 unk_d0[0x40];
    ScenePart part2;
    u8 unk_118[0xC];
};

struct Scene5 : public UnkClass_0203dc7c {
    ScenePart part0;
    u8 unk_94[0x44];
};

struct Scene6 : public UnkClass_0203dc7c {
    void *part0Vtable;          // (a part of 0x1B4 bytes, its owner at the end)
    u8 unk_90[0x1AC];
    UnkClass_0203dc7c *part0Owner;
    u8 unk_240[0xC];
    ScenePart part1;
    u8 unk_254[0x17C];
};

struct Scene8 : public UnkClass_0203dc7c {
    u8 unk_8c[0x1A8];
    ScenePart part0;
    u8 unk_23c[0x3F8];
    void *part1Vtable;
    u8 unk_638[4];
    UnkClass_0203dc7c *part1Owner;
    u8 unk_640[0x3C];
    ScenePart part2;
    u8 unk_684[0x7C];
    s32 unk_700;
};

// Creates the game's scenes (each a subclass of UnkClass_0203dc7c, its code in an overlay) and switches between them; its state is in data_020c45a0
class SceneManager {
public:
    static void func_0203e2fc(s32 value);
    static s32 func_0203e30c();
    void func_0203e31c();
    static UnkClass_0203dc7c *func_0203e348(SceneDesc *desc);
    static UnkClass_0203dc7c *func_0203e3d0(void *arg);
    void func_0203e450();
    void func_0203e454();
    void func_0203e458();
    static UnkClass_0203dc7c *func_0203e45c(void *arg);
    static UnkClass_0203dc7c *func_0203e498(void *arg);
    void func_0203e4f4();
    void func_0203e4f8();
    static UnkClass_0203dc7c *func_0203e4fc(void *arg);
    void func_0203e548();
    static UnkClass_0203dc7c *func_0203e54c(void *arg);
    void func_0203e5b8();
    void func_0203e5bc();
    void func_0203e5c0();
    static UnkClass_0203dc7c *func_0203e5c4(void *arg);
    void func_0203e778();
    void func_0203e77c();
    void func_0203e780();
    void func_0203e784();
    void func_0203e788();
    void func_0203e78c();
    void func_0203e790();
    void func_0203e794();
    void func_0203e798();
    void func_0203e79c();
    void func_0203e7a0();
    void func_0203e7a4();
    void func_0203e7a8();
    void func_0203e7ac();
    static UnkClass_0203dc7c *func_0203e7b0(void *arg);
    void func_0203e980();
    void func_0203e984();
    void func_0203e988();
    void func_0203e98c();
    void func_0203e990();
    void func_0203e994();
    void func_0203e998();
    void func_0203e99c();
    void func_0203e9a0();
    void func_0203e9a4();
    void func_0203e9a8();
    void func_0203e9ac();
    void func_0203e9b0();
    void func_0203e9b4();
    void func_0203e9b8();
    void func_0203e9bc();
    void func_0203e9c0();
    static UnkClass_0203dc7c *func_0203e9c4(void *arg);
    void func_0203ea8c();
    void func_0203ea90();
    void func_0203ea94();
    void func_0203ea98();
    void func_0203ea9c();
    void func_0203ead4();
    void func_0203ead8();
    void func_0203eba4();
    void func_0203ecd4();
    static void func_0203ed14();
    void func_0203ed3c();
    void func_0203ed88();
    void func_0203ee70();
    void func_0203ef38();
    void func_0203efc8();
    void func_0203f0dc();
    void func_0203f248();
    static void func_0203f2e8();
    static void func_0203f310();
    void func_0203f338();
    void func_0203f3b4();
    void func_0203f42c();
    void func_0203f500();
    void func_0203f5d0();
    void func_0203f604();
    int func_0203f798();
    int func_0203f7a0();
    int func_0203f7a8();
    int func_0203f7b0();
    void func_0203f7b8();
    void func_0203f7bc();
    SceneManager *func_0203f7c0();
    void func_0203f7d4();
    void func_0203f7e0();
    void func_0203f7ec();
    void func_0203f7fc();
    void func_0203f80c();
    void func_0203f81c();
    void func_0203f828();
    void func_0203f834();
    void func_0203f844();
    void func_0203f854();
    void func_0203f858();
    void func_0203f85c();
    void func_0203f860();
    void func_0203f86c();
    void func_0203f878();
    void func_0203f888();
    void func_0203f898();
    void func_0203f8a8();
    void func_0203f8b4();
    void func_0203f8c0();
    void func_0203f8d0();
    void func_0203f8e0();
    void func_0203f8e4();
    void func_0203f8e8();
};

// The state of the scenes
struct SceneManagerGlobals {
    u8 unk_00[8];
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10[0x20];
    UnkObject *scene;           // the current scene
};

extern SceneManagerGlobals data_020c45a0;

#endif // GAME_SCENEMANAGER_HPP
