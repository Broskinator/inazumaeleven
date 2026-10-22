#ifndef GAME_SCENEMANAGER_HPP
#define GAME_SCENEMANAGER_HPP

#include "nitro/types.h"
#include "game/UnkClass_0203dc7c.hpp"

// (NitroSDK TP)
struct TPData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
};

// What a scene is made from
struct SceneDesc {
    s32 id;
    FSOverlayID overlay;        // its code
};

// A part of the scene of type 3
struct Scene3Part {
    void *vtable;
    struct {
        void *vtable;
    } inner;
};

// (NitroSDK PM)
struct PMSleepCallbackInfo {
    void (*callback)(void *arg);
    void *arg;
    PMSleepCallbackInfo *next;
    u32 unk_0c;
};

#define SCENE_OBJECT 2           // (the current scene in objects)

#define PLAY_TIME_MAX (((999 * 60 + 59) * 60 + 59) * 60 + 59)   // frames

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

// (what a scene is started with, in data_020c4ab4)
struct SceneStartInfo {
    u8 unk_00[0xBE];
    u8 unk_be;
    u8 unk_bf;
    u8 unk_c0;
    u8 unk_c1_0 : 3;
    u8 unk_c1_3 : 3;
    u8 unk_c1_6 : 2;
};

// Creates the game's scenes (each a subclass of UnkClass_0203dc7c, its code in an overlay) and switches between them; its state is in data_020c45a0
class SceneManager {
public:
    static void func_0203e2fc(s32 value);
    static s32 func_0203e30c();
    static SceneDesc *func_0203e31c(s32 id);
    static UnkClass_0203dc7c *func_0203e348(SceneDesc *desc);
    static UnkClass_0203dc7c *func_0203e3d0(FSOverlayID overlay);
    void func_0203e450();
    void func_0203e454();
    void func_0203e458();
    static UnkClass_0203dc7c *func_0203e45c(FSOverlayID overlay);
    static UnkClass_0203dc7c *func_0203e498(FSOverlayID overlay);
    void func_0203e4f4();
    void func_0203e4f8();
    static UnkClass_0203dc7c *func_0203e4fc(FSOverlayID overlay);
    void func_0203e548();
    static UnkClass_0203dc7c *func_0203e54c(FSOverlayID overlay);
    void func_0203e5b8();
    void func_0203e5bc();
    void func_0203e5c0();
    static UnkClass_0203dc7c *func_0203e5c4(FSOverlayID overlay);
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
    static UnkClass_0203dc7c *func_0203e7b0(FSOverlayID overlay);
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
    static UnkClass_0203dc7c *func_0203e9c4(FSOverlayID overlay);
    void func_0203ea8c();
    void func_0203ea90();
    void func_0203ea94();
    void func_0203ea98();
    static Scene3Part *func_0203ea9c(Scene3Part *part);
    void func_0203ead4();
    static void func_0203ead8();
    static void func_0203eba4();
    static void func_0203ecd4(void *arg);
    static void func_0203ed14(void *arg);
    static void func_0203ed3c();
    static void func_0203ed88();
    static void func_0203ee70();
    static void func_0203ef38();
    static void func_0203efc8();
    static void func_0203f0dc();
    static void func_0203f248();
    static void func_0203f2e8();
    static void func_0203f310();
    static void func_0203f338();
    static void func_0203f3b4();
    static void func_0203f42c();
    static void func_0203f500();
    static void func_0203f5d0();
    static void func_0203f604();
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
    u8 sampled;                 // a touch sample was taken
    u8 unk_01[3];
    s32 sampleIndex;            // in data_020c4600
    s32 nextScene;              // (0: none)
    s32 currentScene;
    s32 previousScene;
    u8 unk_14[0xC];
    TPData touch;               // data_020c45c0: the touch screen this frame
    UnkObject *objects[3];      // the last one is the current scene
    PMSleepCallbackInfo preSleep;
    PMSleepCallbackInfo postSleep;
};

extern SceneManagerGlobals data_020c45a0;

#endif // GAME_SCENEMANAGER_HPP
