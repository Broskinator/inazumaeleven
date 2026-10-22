#include "game/SceneManager.hpp"
#include "nitro/os.h"
#include "sound/SoundManager.hpp"
#include "movie/MoviePlayer.hpp"
#include "game/GameState.hpp"
#include "data/ConfigFile.hpp"
#include "nitro/mi.h"

extern "C" u8 data_020c5320[];
extern "C" void func_0209bebc(void *);
extern "C" void func_020100e4(PMSleepCallbackInfo *info);        // adds a callback before sleep
extern "C" void func_02010124(PMSleepCallbackInfo *info);        // adds a callback after sleep
extern "C" void *data_020c46d0;
extern "C" void func_ov015_0213cc18(void *);
extern ConfigFile data_020c46e4;            // the settings file
extern "C" s32 data_020ac094[];             // settings read from it
extern "C" u16 data_020c4818;
extern "C" u16 data_020c4820;
extern "C" u16 data_020c4814;
extern "C" u8 data_020c4618[0x20];
extern "C" u8 data_020c4600[0x18];
extern "C" void func_0200eca8(u16 arm7keys, u16 keys);
extern "C" void TP_WaitCalibratedResult(void *);
extern "C" s32 data_020c484c;               // frames since the last update
extern "C" void func_ov000_02110e04(void *);
extern "C" void func_ov000_02110e00(void *);

extern "C" char data_020a4944[];
extern "C" char data_020abf04[];
extern "C" char data_020abf70[];
extern "C" char data_020abf80[];
extern "C" char data_020abf94[];
extern "C" char data_020abfa8[];
extern "C" char data_020abfbc[];
extern "C" char data_020abfcc[];
extern "C" char data_020abfe0[];
extern "C" char data_020abff4[];
extern "C" char data_020ac008[];
extern "C" char data_020afeac[];
extern "C" char data_020c45c0[];
extern "C" char data_020c45c8[];
extern "C" char data_020c45d4[];
extern "C" char data_020c45e4[];
extern "C" char data_020c4650[];
extern "C" char data_020c4660[];
extern "C" char data_020c4668[];
extern "C" char data_020c4674[];
extern "C" char data_020c4678[];
extern "C" char data_020c467c[];
extern "C" char data_020c4694[];
extern "C" char data_020c46c0[];
extern "C" char data_020c46d4[];
extern "C" char data_020c47b4[];
extern "C" char data_020c4808[];
extern "C" char data_020c4850[];
extern "C" char data_020c4a40[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4c70[];
extern "C" char data_020d9978[];
extern "C" char data_020e88a0[];
extern "C" char data_ov000_02117c6c[];
extern "C" char data_ov000_02117cdc[];
extern "C" char data_ov000_02117d68[];
extern "C" char data_ov000_02117df4[];
extern "C" char data_ov000_021181c4[];
extern "C" char data_ov000_02118238[];
extern "C" char data_ov000_02118388[];
extern "C" char data_ov002_020fd550[];
extern "C" char data_ov003_0211d7b4[];
extern "C" char data_ov003_0211d93c[];
extern "C" char data_ov003_0211da74[];
extern "C" char data_ov003_0211db54[];
extern "C" char data_ov003_0211dc00[];
extern "C" char data_ov003_0211dd50[];
extern "C" char data_ov003_0211de10[];
extern "C" char data_ov003_0211df94[];
extern "C" char data_ov003_0211e1d8[];
extern "C" char data_ov003_0211e398[];
extern "C" char data_ov003_0211e440[];
extern "C" char data_ov003_0211ea0c[];
extern "C" char data_ov003_0211eb88[];
extern "C" char data_ov003_0211ecc0[];
extern "C" char data_ov004_020fd2c0[];
extern "C" char data_ov004_020fd330[];
extern "C" char data_ov004_020fd3c4[];
extern "C" char data_ov005_020fdab0[];
extern "C" char data_ov005_020fdb84[];
extern "C" char data_ov014_02124380[];
extern "C" char data_ov014_021243f0[];
extern "C" char data_ov014_02124500[];
extern "C" char data_ov014_021245c8[];
extern "C" char data_ov014_021246fc[];
extern "C" char data_ov046_0216acc0[];
extern "C" void _ZN10ConfigFile6GetIntEPKc(void);

#define REG_KEYINPUT (*(volatile u16 *)0x04000130)

extern "C" void func_ov015_021323a4(int);
extern "C" void func_ov015_021323fc(void);
extern "C" void func_ov015_0213240c(void);
extern "C" void func_ov015_021324a4(void);
extern "C" void func_ov015_021324b4(void);
extern "C" BOOL func_ov015_02134bd8(FSOverlayID overlay);     // loads the overlay of a scene
extern "C" void func_0200878c(void);
extern "C" void _Znwm(void);       // (operator new, for the asm functions)
extern "C" void func_ov015_02132554(int);
extern "C" void func_ov015_02132568(int);
extern "C" void func_ov015_02132600(int);
extern "C" void func_ov015_02132614(int);
extern "C" void func_ov015_021326b8(int);
extern "C" void func_ov015_021326cc(int);
extern "C" void func_ov015_02132774(void);
extern "C" void func_ov015_02132784(void);
extern "C" void func_ov015_021327ec(int);
extern "C" void func_ov015_0213290c(void);
extern "C" void func_ov015_0213291c(void);

extern "C" void PM_GetLCDPower(void);
extern "C" void _ZN11MoviePlayer5PauseEv(void);
extern "C" void _ZN11SaveManager6IsDoneEv(void);
extern "C" void _ZN12SoundManager13func_02039bccEv(void);
extern "C" void _ZN12SoundManager6UpdateEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203dc7cEv(void);
extern "C" void _ZN8GameHeap7GetInfoEPmS0_S0_(void);
extern "C" void _ZN9EntryPool4InitEv(void);
extern "C" void _ZdlPv(void);
extern "C" void func_01ff9ea4(void);
extern "C" void func_020025b8(void);
extern "C" void func_020025f8(void);
extern "C" void func_0200846c(void);
extern "C" void func_0200fa3c(void);
extern "C" void func_0200ff28(void);
extern "C" void func_0202b4c4(void);
extern "C" void func_02051c54(void);
extern "C" void func_0208897c(void);
extern "C" void func_02088990(void);
extern "C" void func_02089004(void);
extern "C" void func_020898ac(void);
extern "C" void func_0208b130(void);
extern "C" void func_0208b210(void);
extern "C" void func_0208c48c(void);
extern "C" void func_0208de5c(void);
extern "C" void func_0208de6c(void);
extern "C" void func_020920a4(void);
extern "C" void func_020920b4(void);
extern "C" void func_02096048(void);
extern "C" void func_0209605c(void);
extern "C" void func_02096070(void);
extern "C" void func_0209be60(void);
extern "C" void func_0209c628(void);
extern "C" void func_0209c648(void);
extern "C" void func_0209d240(void);
extern "C" void func_0209d480(void);
extern "C" void func_ov000_0210048c(void);
extern "C" void func_ov000_02110de4(void);
extern "C" void func_ov001_0211bcd0(void);
extern "C" void func_ov003_020fd8ec(void);
extern "C" void func_ov003_0210eb00(void);
extern "C" void func_ov015_02131828(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_0213238c(void);
extern "C" BOOL func_ov015_02132794(void);      // TRUE while busy
extern "C" void func_ov015_02133efc(void);
extern "C" void func_ov015_02134c78(void);
extern "C" void func_ov015_0213d1ac(void);
extern "C" void func_ov015_0213d1d0(void);
extern "C" void func_ov015_02148f94(void);
extern "C" void gEntryPool(void);

void SceneManager::func_0203e2fc(s32 value)
{
    data_020c45a0.nextScene = value;
}

s32 SceneManager::func_0203e30c()
{
    return data_020c45a0.currentScene;
}

asm SceneDesc *SceneManager::func_0203e31c(s32 id)
{
    ldr r1, =data_020a4944
    mov r2, #3
@L_0203e324:
    cmp r0, r2
    moveq r0, r1
    bxeq lr
    ldr r2, [r1, #8]!
    cmp r2, #0
    bne @L_0203e324
    mov r0, #0
    bx lr
}

// creates the scene described by desc (NULL for an unknown type)
UnkClass_0203dc7c *SceneManager::func_0203e348(SceneDesc *desc)
{
    FSOverlayID overlay = desc->overlay;

    switch (desc->id) {
    case 3:
        return func_0203e9c4(overlay);
    case 2:
        return func_0203e7b0(overlay);
    case 1:
        return func_0203e5c4(overlay);
    case 4:
        return func_0203e54c(overlay);
    case 5:
        return func_0203e4fc(overlay);
    case 6:
        return func_0203e498(overlay);
    case 7:
        return func_0203e45c(overlay);
    case 8:
        return func_0203e3d0(overlay);
    default:
        func_0200878c();
        return NULL;
    }
}

// (nonmatching: the parts are built by nested inline constructors (their stores are relative to the first part))
#ifdef NONMATCHING
UnkClass_0203dc7c *SceneManager::func_0203e3d0(FSOverlayID overlay)
{
    Scene8 *scene;

    if (!func_ov015_02134bd8(overlay)) {
        return NULL;
    }
    scene = (Scene8 *)operator new(sizeof(Scene8));
    if (scene != NULL) {
        scene->func_0203dc7c();
        scene->vtable = data_ov014_02124380;
        scene->part0.vtable = data_ov014_02124500;
        scene->part0.owner = scene;
        scene->part1Vtable = data_ov014_021245c8;
        scene->part1Owner = scene;
        scene->part2.vtable = data_ov014_021246fc;
        scene->part2.owner = scene;
        scene->unk_700 = 0;
    }
    return scene;
}
#else
asm UnkClass_0203dc7c *SceneManager::func_0203e3d0(FSOverlayID overlay)
{
    stmdb sp!, {r4, lr}
    bl func_ov015_02134bd8
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, =0x704
    bl _Znwm
    movs r4, r0
    beq @L_0203e434
    bl _ZN17UnkClass_0203dc7c13func_0203dc7cEv
    ldr r1, =data_ov014_02124380
    ldr r0, =data_ov014_02124500
    str r1, [r4]
    str r0, [r4, #0x234]
    add r1, r4, #0x234
    ldr r0, =data_ov014_021245c8
    str r4, [r1, #4]
    str r0, [r4, #0x634]
    ldr r0, =data_ov014_021246fc
    str r4, [r1, #0x408]
    str r0, [r4, #0x67c]
    add r0, r4, #0x27c
    str r4, [r0, #0x404]
    mov r0, #0
    str r0, [r4, #0x700]
@L_0203e434:
    mov r0, r4
    ldmia sp!, {r4, pc}
}
#endif

void SceneManager::func_0203e450()
{
}

void SceneManager::func_0203e454()
{
}

void SceneManager::func_0203e458()
{
}

UnkClass_0203dc7c *SceneManager::func_0203e45c(FSOverlayID overlay)
{
    UnkClass_0203dc7c *scene;

    if (!func_ov015_02134bd8(overlay)) {
        return NULL;
    }
    scene = (UnkClass_0203dc7c *)operator new(sizeof(UnkClass_0203dc7c));
    if (scene != NULL) {
        scene->func_0203dc7c();
        scene->vtable = data_ov014_021243f0;
    }
    return scene;
}

UnkClass_0203dc7c *SceneManager::func_0203e498(FSOverlayID overlay)
{
    Scene6 *scene;

    if (!func_ov015_02134bd8(overlay)) {
        return NULL;
    }
    scene = (Scene6 *)operator new(sizeof(Scene6));
    if (scene != NULL) {
        scene->func_0203dc7c();
        scene->vtable = (void *)0x020FDA40;     // (in overlays 5 and 6)
        scene->part0Vtable = data_ov005_020fdab0;
        scene->part0Owner = scene;
        scene->part1.vtable = data_ov005_020fdb84;
        scene->part1.owner = scene;
    }
    return scene;
}

void SceneManager::func_0203e4f4()
{
}

void SceneManager::func_0203e4f8()
{
}

UnkClass_0203dc7c *SceneManager::func_0203e4fc(FSOverlayID overlay)
{
    Scene5 *scene;

    if (!func_ov015_02134bd8(overlay)) {
        return NULL;
    }
    scene = (Scene5 *)operator new(sizeof(Scene5));
    if (scene != NULL) {
        scene->func_0203dc7c();
        scene->vtable = (void *)0x020FD4A0;     // (in overlays 2 and 4)
        scene->part0.vtable = data_ov002_020fd550;
        scene->part0.owner = scene;
    }
    return scene;
}

void SceneManager::func_0203e548()
{
}

UnkClass_0203dc7c *SceneManager::func_0203e54c(FSOverlayID overlay)
{
    Scene4 *scene;

    if (!func_ov015_02134bd8(overlay)) {
        return NULL;
    }
    scene = (Scene4 *)operator new(sizeof(Scene4));
    if (scene != NULL) {
        scene->func_0203dc7c();
        scene->vtable = data_ov004_020fd2c0;
        scene->part0.vtable = data_ov004_020fd3c4;
        scene->part0.owner = scene;
        scene->part1.vtable = data_ov004_020fd330;
        scene->part1.owner = scene;
        scene->part2.vtable = (void *)0x020FD4A4;   // (in overlays 2 and 4)
        scene->part2.owner = scene;
    }
    return scene;
}

void SceneManager::func_0203e5b8()
{
}

void SceneManager::func_0203e5bc()
{
}

void SceneManager::func_0203e5c0()
{
}

asm UnkClass_0203dc7c *SceneManager::func_0203e5c4(FSOverlayID overlay)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    bl func_ov015_02134bd8
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =0x436c
    bl _Znwm
    movs r4, r0
    beq @L_0203e730
    bl _ZN17UnkClass_0203dc7c13func_0203dc7cEv
    ldr r2, =data_ov003_0211dc00
    add r0, r4, #0x38c
    add r1, r4, #0x3c
    ldr r5, =data_ov003_0211df94
    str r2, [r4]
    add r3, r4, #0x1000
    add r2, r4, #0x9c
    add r12, r4, #0x37c
    str r5, [r3, #0xb8c]
    add r6, r0, #0x1800
    add r0, r4, #0x450
    ldr r5, =data_ov003_0211de10
    str r4, [r6, #4]
    add lr, r4, #0x88
    str r5, [r3, #0xc3c]
    add r6, r1, #0x1c00
    add r1, r4, #0x124
    add r5, r4, #0x1b8
    ldr r7, =data_ov003_0211dd50
    str r4, [r6, #4]
    add r6, r4, #0x238
    str r7, [r3, #0xc80]
    add r9, r4, #0x1c80
    add r7, r4, #0xd4
    add r8, r4, #0x1ec
    str r4, [r9, #4]
    ldr r9, =data_ov003_0211e1d8
    add r2, r2, #0x1c00
    str r9, [r3, #0xc9c]
    ldr r3, =data_ov003_0211e398
    str r4, [r2, #4]
    add r2, r4, #0x2000
    str r3, [r2, #0x37c]
    add r12, r12, #0x2000
    ldr r3, =data_ov003_0211da74
    str r4, [r12, #4]
    str r3, [r2, #0x450]
    add r3, r0, #0x2000
    ldr r0, =data_ov003_0211db54
    str r4, [r3, #4]
    str r0, [r2, #0x840]
    add r3, r4, #0x2840
    ldr r0, =data_ov003_0211ea0c
    str r4, [r3, #8]
    str r0, [r2, #0x888]
    add r3, lr, #0x2800
    ldr r0, =data_ov003_0211eb88
    str r4, [r3, #4]
    str r0, [r2, #0x924]
    add r1, r1, #0x2800
    ldr r0, =data_ov003_0211d93c
    str r4, [r1, #4]
    str r0, [r2, #0x9b8]
    add r1, r5, #0x2800
    ldr r0, =data_ov046_0216acc0
    str r4, [r1, #4]
    str r0, [r2, #0xa38]
    add r0, r6, #0x2800
    ldr r1, =data_ov003_0211e440
    str r4, [r0, #4]
    ldr r0, =data_ov003_0211ecc0
    str r1, [r2, #0xa38]
    mov r1, r4
    str r0, [r2, #0xcd4]
    add r2, r7, #0x2c00
    add r0, r8, #0x2c00
    str r4, [r2, #4]
    bl func_ov003_0210eb00
    add r0, r4, #0x2c
    mov r1, r4
    add r0, r0, #0x3800
    bl func_ov003_020fd8ec
    add r0, r4, #0x310
    ldr r2, =data_ov003_0211d7b4
    add r1, r4, #0x4000
    str r2, [r1, #0x310]
    add r0, r0, #0x4000
    str r4, [r0, #4]
    mov r0, #0
    str r0, [r1, #0x364]
    str r0, [r1, #0x368]
@L_0203e730:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

void SceneManager::func_0203e778()
{
}

void SceneManager::func_0203e77c()
{
}

void SceneManager::func_0203e780()
{
}

void SceneManager::func_0203e784()
{
}

void SceneManager::func_0203e788()
{
}

void SceneManager::func_0203e78c()
{
}

void SceneManager::func_0203e790()
{
}

void SceneManager::func_0203e794()
{
}

void SceneManager::func_0203e798()
{
}

void SceneManager::func_0203e79c()
{
}

void SceneManager::func_0203e7a0()
{
}

void SceneManager::func_0203e7a4()
{
}

void SceneManager::func_0203e7a8()
{
}

void SceneManager::func_0203e7ac()
{
}

asm UnkClass_0203dc7c *SceneManager::func_0203e7b0(FSOverlayID overlay)
{
    stmdb sp!, {r4, r5, r6, lr}
    bl func_ov015_02134bd8
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, =0x3b4c
    bl _Znwm
    movs r4, r0
    beq @L_0203e930
    bl _ZN17UnkClass_0203dc7c13func_0203dc7cEv
    ldr r1, =0x2129340
    ldr r0, =0x2129c24
    str r1, [r4]
    str r0, [r4, #0x8c]
    ldr r0, =0x21298fc
    str r4, [r4, #0x90]
    str r0, [r4, #0x94]
    ldr r0, =0x2129594
    str r4, [r4, #0x98]
    str r0, [r4, #0xc4]
    str r4, [r4, #0xc8]
    str r0, [r4, #0x85c]
    add r0, r4, #0x5c
    add r1, r4, #4
    add r2, r4, #0x14
    ldr r5, =0x2129d1c
    str r4, [r0, #0x804]
    add r3, r4, #0x20
    add r12, r4, #0x34
    add lr, r4, #0xa4
    ldr r0, =0x2129a38
    str r5, [r4, #0x85c]
    str r0, [r4, #0xff4]
    add r0, r4, #0x3f4
    ldr r5, =0x2129b98
    str r4, [r0, #0xc04]
    str r5, [r4, #0xffc]
    add r0, r4, #0x3fc
    ldr r5, =0x2129ae8
    str r4, [r0, #0xc04]
    add r0, r4, #0x1000
    str r5, [r0, #4]
    add r5, r1, #0x1000
    ldr r1, =0x21299ac
    str r4, [r5, #8]
    str r1, [r0, #0x14]
    add r2, r2, #0x1000
    ldr r1, =0x2129ef4
    str r4, [r2, #4]
    str r1, [r0, #0x20]
    add r1, r3, #0x1000
    ldr r2, =0x2129df8
    str r4, [r1, #4]
    mov r1, r4
    str r2, [r0, #0x434]
    add r2, r12, #0x1400
    add r0, lr, #0x1400
    str r4, [r2, #4]
    bl func_ov001_0211bcd0
    add r0, r4, #0x2c4
    add r2, r4, #0xc
    add r3, r4, #0x358
    add r12, r4, #0x2a4
    add lr, r4, #0x9f0
    add r5, r4, #0xab0
    ldr r6, =0x212a2ac
    add r1, r4, #0x2000
    str r6, [r1, #0xec4]
    add r0, r0, #0x2c00
    ldr r6, =0x212a678
    str r4, [r0, #4]
    add r0, r4, #0x3000
    str r6, [r0, #0xc]
    add r1, r2, #0x3000
    str r4, [r1, #4]
    str r6, [r0, #0x358]
    add r2, r3, #0x3000
    ldr r1, =0x212a754
    str r4, [r2, #4]
    str r1, [r0, #0x358]
    str r6, [r0, #0x6a4]
    add r1, r12, #0x3400
    ldr r2, =data_020afeac
    str r4, [r1, #4]
    ldr r1, =0x212a408
    str r2, [r0, #0x6a4]
    str r1, [r0, #0x9f0]
    add r2, lr, #0x3000
    ldr r1, =0x212a82c
    str r4, [r2, #4]
    str r1, [r0, #0xab0]
    add r1, r5, #0x3000
    str r4, [r1, #4]
    mov r1, #0
    str r1, [r0, #0xb40]
    str r1, [r0, #0xb44]
@L_0203e930:
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

void SceneManager::func_0203e980()
{
}

void SceneManager::func_0203e984()
{
}

void SceneManager::func_0203e988()
{
}

void SceneManager::func_0203e98c()
{
}

void SceneManager::func_0203e990()
{
}

void SceneManager::func_0203e994()
{
}

void SceneManager::func_0203e998()
{
}

void SceneManager::func_0203e99c()
{
}

void SceneManager::func_0203e9a0()
{
}

void SceneManager::func_0203e9a4()
{
}

void SceneManager::func_0203e9a8()
{
}

void SceneManager::func_0203e9ac()
{
}

void SceneManager::func_0203e9b0()
{
}

void SceneManager::func_0203e9b4()
{
}

void SceneManager::func_0203e9b8()
{
}

void SceneManager::func_0203e9bc()
{
}

void SceneManager::func_0203e9c0()
{
}

asm UnkClass_0203dc7c *SceneManager::func_0203e9c4(FSOverlayID overlay)
{
    stmdb sp!, {r4, lr}
    bl func_ov015_02134bd8
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, =0xf24
    bl _Znwm
    movs r4, r0
    beq @L_0203ea60
    bl _ZN17UnkClass_0203dc7c13func_0203dc7cEv
    ldr r1, =data_ov000_02117c6c
    ldr r0, =data_ov000_02117df4
    str r1, [r4]
    str r0, [r4, #0x8c]
    mov r1, r4
    add r0, r4, #0x100
    str r4, [r4, #0x90]
    bl func_ov000_0210048c
    ldr r1, =data_ov000_02117cdc
    ldr r0, =data_ov000_02117d68
    str r1, [r4, #0x274]
    str r4, [r4, #0x278]
    str r0, [r4, #0x280]
    ldr r1, =data_020abf04
    str r4, [r4, #0x284]
    add r0, r4, #0x290
    str r1, [r4, #0x28c]
    bl func_ov000_02110de4
    ldr r1, =data_ov000_021181c4
    ldr r0, =data_ov000_02118238
    str r1, [r4, #0x28c]
    str r0, [r4, #0x290]
    ldr r0, =data_ov000_02118388
    str r4, [r4, #0x29c]
    str r0, [r4, #0xd24]
    str r4, [r4, #0xd28]
    mov r0, #0
    str r0, [r4, #0xf1c]
    str r0, [r4, #0xf20]
@L_0203ea60:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

void SceneManager::func_0203ea8c()
{
}

void SceneManager::func_0203ea90()
{
}

void SceneManager::func_0203ea94()
{
}

void SceneManager::func_0203ea98()
{
}

Scene3Part *SceneManager::func_0203ea9c(Scene3Part *part)
{
    part->vtable = data_ov000_021181c4;
    part->inner.vtable = data_ov000_02118238;
    func_ov000_02110e04(&part->inner);
    func_ov000_02110e00(&part->inner);
    return part;
}

void SceneManager::func_0203ead4()
{
}

// switches to the next scene: deletes the current one and unloads its overlay
void SceneManager::func_0203ead8()
{
    SceneDesc *desc;

    if (data_020c45a0.nextScene == 0) {
        return;
    }
    if (func_ov015_02132794()) {
        return;
    }

    if (data_020c45a0.scene != NULL) {
        data_020c45a0.scene->vtable->func_2c(data_020c45a0.scene);
        if (data_020c45a0.scene != NULL) {
            data_020c45a0.scene->vtable->Delete(data_020c45a0.scene);
        }
        data_020c45a0.scene = NULL;
    }
    if (data_020c45a0.currentScene != 0) {
        desc = func_0203e31c(data_020c45a0.currentScene);
        if (desc != NULL) {
            FS_UnloadOverlay(MI_PROCESSOR_ARM9, desc->overlay);
        }
    }
    desc = func_0203e31c(data_020c45a0.nextScene);
    if (desc != NULL) {
        data_020c45a0.scene = (UnkObject *)func_0203e348(desc);
    }

    data_020c45a0.previousScene = data_020c45a0.currentScene;
    data_020c45a0.currentScene = data_020c45a0.nextScene;
    data_020c45a0.nextScene = 0;
    if (data_020c45a0.scene == NULL) {
        return;
    }
    ((void (*)(UnkObject *))data_020c45a0.scene->vtable->func_08)(data_020c45a0.scene);
}

asm void SceneManager::func_0203eba4()
{
    stmdb sp!, {r3, lr}
    ldr r2, =data_020c45a0
    mov r12, #0
    str r12, [r2, #0x10]
    ldr r0, =data_020c46c0
    str r12, [r2, #0xc]
    ldr r0, [r0]
    cmp r0, #0
    bne @L_0203ecb0
    ldr r0, =0x2fffc20
    ldr r1, =gGameState
    ldr r3, [r0]
    cmp r3, #0
    strb r12, [r1, #0x7c]
    moveq r0, #4
    streq r0, [r2, #8]
    beq @L_0203ecb8
    cmp r3, #0x16
    cmpne r3, #0x15
    bne @L_0203ec14
    ldr r1, =data_020c4ab4
    mov r3, #1
    strb r3, [r1, #0xbe]
    mov r2, #6
    ldr r0, =data_020c45a0
    strb r2, [r1, #0xc0]
    str r3, [r0, #8]
    b @L_0203ecb8
@L_0203ec14:
    cmp r3, #0x17
    blo @L_0203ec54
    cmp r3, #0x19
    bhi @L_0203ec54
    ldr r0, =data_020c4ab4
    sub r3, r3, #0x16
    strb r12, [r0, #0xbe]
    ldrb r12, [r0, #0xc1]
    and r3, r3, #0xff
    and r3, r3, #7
    bic r12, r12, #7
    orr r3, r12, r3
    strb r3, [r0, #0xc1]
    mov r0, #1
    strb r0, [r1, #0x7c]
    b @L_0203ecb4
@L_0203ec54:
    cmp r3, #0x1a
    blo @L_0203ec9c
    cmp r3, #0x1c
    bhi @L_0203ec9c
    ldr r1, =data_020c4ab4
    mov r0, #0
    strb r0, [r1, #0xbe]
    ldrb r2, [r1, #0xc1]
    sub r0, r3, #0x19
    and r0, r0, #0xff
    bic r2, r2, #0x38
    mov r0, r0, lsl #0x1d
    orr r2, r2, r0, lsr #26
    ldr r0, =data_020c45a0
    strb r2, [r1, #0xc1]
@L_0203ec90:
    mov r1, #1
    str r1, [r0, #8]
    b @L_0203ecb8
@L_0203ec9c:
    ldr r1, =data_020c4ab4
    mov r2, #0
    ldr r0, =data_020c45a0
    strb r2, [r1, #0xbe]
    b @L_0203ec90
@L_0203ecb0:
    mov r0, #5
@L_0203ecb4:
    str r0, [r2, #8]
@L_0203ecb8:
    bl func_0203ead8
    ldmia sp!, {r3, pc}
}

// (before the DS goes to sleep)
void SceneManager::func_0203ecd4(void *arg)
{
    func_0209bebc(data_020c5320);
    data_020c4f60.Pause();
    data_020c5e40.Update();
    OS_Sleep(20);
    data_020c5e40.func_02039bcc();
}

// (after the DS wakes up)
void SceneManager::func_0203ed14(void *arg)
{
    OS_Sleep(20);
    data_020c5e40.func_02039bdc();
    data_020c4f60.Resume();
}

void SceneManager::func_0203ed3c()
{
    data_020c45a0.preSleep.callback = func_0203ecd4;
    data_020c45a0.preSleep.arg = NULL;
    data_020c45a0.postSleep.callback = func_0203ed14;
    data_020c45a0.postSleep.arg = NULL;
    func_020100e4(&data_020c45a0.preSleep);
    func_02010124(&data_020c45a0.postSleep);
}

asm void SceneManager::func_0203ed88()
{
    stmdb sp!, {r4, lr}
    ldr r0, =data_020c4c70
    bl _ZN11SaveManager6IsDoneEv
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r4, #0
    bl func_ov015_02131828
    cmp r0, #0
    ldreq r0, =gGameState
    ldreqb r1, [r0, #0x9a]
    cmpeq r1, #0
    ldreqb r0, [r0, #0x99]
    cmpeq r0, #0
    movne r4, #1
    bne @L_0203ee10
    ldr r0, =data_020c5320
    ldr r0, [r0, #0x58]
    cmp r0, #0
    moveq r0, #1
    movne r0, r4
    cmp r0, #0
    bne @L_0203ee10
    ldr r0, =data_020c5320
    ldr r1, [r0, #0x5c]
    cmp r1, #1
    beq @L_0203edfc
    cmp r1, #2
    beq @L_0203ee04
    b @L_0203ee0c
@L_0203edfc:
    bl func_0209c628
    b @L_0203ee10
@L_0203ee04:
    bl func_0209c648
    b @L_0203ee10
@L_0203ee0c:
    bl func_0209be60
@L_0203ee10:
    cmp r4, #0
    beq @L_0203ee4c
    bl PM_GetLCDPower
    cmp r0, #1
    ldmneia sp!, {r4, pc}
    bl func_0200846c
    bl func_020025b8
    ldr r1, =0x4001000
    ldr r0, [r1]
    bic r0, r0, #0x10000
    str r0, [r1]
    bl func_0200846c
    mov r0, #0
    bl func_0200ff28
    ldmia sp!, {r4, pc}
@L_0203ee4c:
    mov r1, #0
    mov r2, r1
    mov r0, #0xc
    bl func_0200fa3c
    ldmia sp!, {r4, pc}
}

// reads the settings of the game from its settings file
void SceneManager::func_0203ee70()
{
    func_ov015_0213cc18(data_020c46d0);
    data_020ac094[0] = data_020c46e4.GetInt(data_020abf70);
    data_020ac094[1] = data_020c46e4.GetInt(data_020abf80);
    data_020ac094[3] = data_020c46e4.GetInt(data_020abf94);
    data_020ac094[4] = data_020c46e4.GetInt(data_020abfa8);
    data_020ac094[10] = data_020c46e4.GetInt(data_020abfbc);
    data_020ac094[11] = data_020c46e4.GetInt(data_020abfcc);
    data_020ac094[12] = data_020c46e4.GetInt(data_020abfe0);
    data_020ac094[13] = data_020c46e4.GetInt(data_020abff4);
}

void SceneManager::func_0203ef38()
{
    data_020c4818 = 0;
    data_020c4820 = 0;
    data_020c4814 = 0;
    MI_CpuFill8(data_020c4618, 0, sizeof(data_020c4618));
    {
        u16 keys = REG_KEYINPUT;

        func_0200eca8(*(u16 *)0x02FFFFA8, keys);
    }
    TP_WaitCalibratedResult(data_020c45a0.calibrate);
    data_020c45a0.unk_00 = 0;
    data_020c45a0.unk_04 = 0;
    MI_CpuFill8(data_020c4600, 0, sizeof(data_020c4600));
}

asm void SceneManager::func_0203efc8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =0x2ffffa8
    ldrh r0, [r2]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    movne r12, #0
    bne @L_0203f024
    ldr r0, =0x4000130
    ldrh r1, [r0]
    ldrh r0, [r2]
    orr r0, r1, r0
    eor r0, r0, r2, lsr #12
    and r0, r0, r2, lsr #12
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    and r1, r2, #0x40
    and r2, r2, #0x20
    mvn r1, r1, lsl #1
    mvn r2, r2, asr #1
    and r0, r1, r0, lsr #16
    and r0, r2, r0
    mov r0, r0, lsl #0x10
    mov r12, r0, lsr #0x10
@L_0203f024:
    ldr r0, =data_020c4820
    mov r1, #1
    ldrh r3, [r0]
    ldr lr, =data_020c4814
    mov r2, #0
    ldr r0, =data_020c4618
    strh r2, [lr]
    mov r5, r1
    mov r7, #0xe
@L_0203f048:
    tst r12, r1
    beq @L_0203f094
    tst r3, r1
    beq @L_0203f080
    mov r6, r2, lsl #1
    ldrh r4, [r0, r6]
    cmp r4, #0x10
    ldrhih r4, [lr]
    strhih r7, [r0, r6]
    orrhi r4, r4, r1
    strhih r4, [lr]
    addls r4, r4, #1
    strlsh r4, [r0, r6]
    b @L_0203f094
@L_0203f080:
    ldrh r6, [lr]
    mov r4, r2, lsl #1
    strh r5, [r0, r4]
    orr r4, r6, r1
    strh r4, [lr]
@L_0203f094:
    mov r1, r1, lsl #0x11
    add r2, r2, #1
    cmp r2, #0x10
    mov r1, r1, lsr #0x10
    blt @L_0203f048
    eor r2, r12, r3
    ldr r0, =data_020c4820
    ldr r1, =data_020c4818
    and r2, r12, r2
    strh r2, [r1]
    strh r12, [r0]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void SceneManager::func_0203f0dc()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, =data_020c45a0
    ldr r5, =data_020c4600
    ldr r0, [r4, #4]
    add r6, r5, r0, lsl #3
    bl func_0200eca8
    mov r0, r6
    bl TP_WaitCalibratedResult
    ldrb r0, [r4]
    cmp r0, #0
    bne @L_0203f128
    ldr r0, [r4, #4]
    add r1, r5, r0, lsl #3
    ldrh r0, [r1, #4]
    cmp r0, #1
    moveq r0, #0
    streqh r0, [r1, #4]
    movne r0, #1
    strneb r0, [r4]
@L_0203f128:
    ldr r0, =0x2ffffa8
    ldrh r0, [r0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    beq @L_0203f154
    ldr r0, =data_020c45a0
    ldr r1, =data_020c4600
    ldr r0, [r0, #4]
    mov r2, #0
    add r0, r1, r0, lsl #3
    strh r2, [r0, #4]
@L_0203f154:
    ldr r5, =data_020c45a0
    ldr lr, =0x55555556
    ldr r7, [r5, #4]
    mov r4, #3
    add r2, r7, #2
    smull r0, r1, lr, r2
    add r1, r1, r2, lsr #31
    smull r0, r1, r4, r1
    sub r1, r2, r0
    ldr r2, =data_020c4600
    mov r3, r1, lsl #3
    add r1, r2, r1, lsl #3
    ldrh r0, [r1, #4]
    cmp r0, #1
    bne @L_0203f1ec
    add r0, r2, r7, lsl #3
    ldrh r6, [r0, #4]
    cmp r6, #1
    bne @L_0203f1c0
@L_0203f1a0:
    ldrh r1, [r0]
    strh r1, [r5, #0x20]
    ldrh r1, [r0, #2]
    strh r1, [r5, #0x22]
    ldrh r1, [r0, #4]
    strh r1, [r5, #0x24]
    ldrh r0, [r0, #6]
    b @L_0203f208
@L_0203f1c0:
    add r6, r7, #1
    smull r12, r7, lr, r6
    add r7, r7, r6, lsr #31
    smull r12, lr, r4, r7
    sub r7, r6, r12
    add r4, r2, r7, lsl #3
    ldrh r4, [r4, #4]
    cmp r4, #1
    bne @L_0203f1e8
    b @L_0203f1ec
@L_0203f1e8:
    b @L_0203f1a0
@L_0203f1ec:
    ldrh r0, [r2, r3]
    strh r0, [r5, #0x20]
    ldrh r0, [r1, #2]
    strh r0, [r5, #0x22]
    ldrh r0, [r1, #4]
    strh r0, [r5, #0x24]
    ldrh r0, [r1, #6]
@L_0203f208:
    strh r0, [r5, #0x26]
    ldr r3, =data_020c45a0
    ldr r1, =0x55555556
    ldr r0, [r3, #4]
    mov r2, #3
    add r5, r0, #1
    smull r0, r4, r1, r5
    add r4, r4, r5, lsr #31
    smull r0, r1, r2, r4
    sub r4, r5, r0
    str r4, [r3, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void SceneManager::func_0203f248()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, #0
    ldr r6, =data_020c45c8
    ldr r5, =data_020c4818
    ldr r4, =data_020c4820
    b @L_0203f28c
@L_0203f260:
    ldr r0, [r6, r7, lsl #2]
    cmp r0, #0
    beq @L_0203f288
    ldr r3, [r0]
    ldrh r1, [r5]
    ldrh r2, [r4]
    ldr r3, [r3, #0x14]
    blx r3
    cmp r0, #0
    bne @L_0203f294
@L_0203f288:
    add r7, r7, #1
@L_0203f28c:
    cmp r7, #3
    blt @L_0203f260
@L_0203f294:
    mov r6, #0
    ldr r4, =data_020c45c0
    ldr r5, =data_020c45c8
    b @L_0203f2cc
@L_0203f2a4:
    ldr r0, [r5, r6, lsl #2]
    cmp r0, #0
    beq @L_0203f2c8
    ldr r2, [r0]
    mov r1, r4
    ldr r2, [r2, #0x18]
    blx r2
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203f2c8:
    add r6, r6, #1
@L_0203f2cc:
    cmp r6, #3
    blt @L_0203f2a4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

void SceneManager::func_0203f2e8()
{
    if (data_020c45a0.scene == NULL) {
        return;
    }
    data_020c45a0.scene->vtable->func_10(data_020c45a0.scene);
}

void SceneManager::func_0203f310()
{
    if (data_020c45a0.scene == NULL) {
        return;
    }
    data_020c45a0.scene->vtable->func_20(data_020c45a0.scene);
}

asm void SceneManager::func_0203f338()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, #0
    ldr r6, =data_020c45c8
    strb r7, [sp]
    strb r7, [sp, #1]
    add r4, sp, #0
    mov r5, r7
@L_0203f358:
    ldr r0, [r6, r7, lsl #2]
    cmp r0, #0
    beq @L_0203f398
    mov r8, r5
@L_0203f368:
    ldrb r0, [r4, r8]
    cmp r0, #0
    bne @L_0203f38c
    ldr r0, [r6, r7, lsl #2]
    mov r1, r8
    ldr r2, [r0]
    ldr r2, [r2, #0x1c]
    blx r2
    strb r0, [r4, r8]
@L_0203f38c:
    add r8, r8, #1
    cmp r8, #2
    blt @L_0203f368
@L_0203f398:
    add r7, r7, #1
    cmp r7, #3
    blt @L_0203f358
    bl func_0203f310
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void SceneManager::func_0203f3b4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, #0
    ldr r6, =data_020c45c8
    strb r7, [sp]
    strb r7, [sp, #1]
    add r4, sp, #0
    mov r5, r7
@L_0203f3d4:
    ldr r0, [r6, r7, lsl #2]
    cmp r0, #0
    beq @L_0203f414
    mov r8, r5
@L_0203f3e4:
    ldrb r0, [r4, r8]
    cmp r0, #0
    bne @L_0203f408
    ldr r0, [r6, r7, lsl #2]
    mov r1, r8
    ldr r2, [r0]
    ldr r2, [r2, #0x24]
    blx r2
    strb r0, [r4, r8]
@L_0203f408:
    add r8, r8, #1
    cmp r8, #2
    blt @L_0203f3e4
@L_0203f414:
    add r7, r7, #1
    cmp r7, #3
    blt @L_0203f3d4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void SceneManager::func_0203f42c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r4, =data_020c46d0
    ldr r1, =data_020c484c
    ldr r0, [r4]
    ldr r1, [r1]
    bl func_02089004
    bl func_0202b4c4
    ldr r9, =data_020c4694
    ldr r0, [r9]
    bl func_0209605c
    ldr r0, =data_020c4660
    ldr r0, [r0]
    bl func_0208c48c
    ldr r0, [r9]
    bl func_02096070
    ldr r8, =data_020c4678
    ldr r0, [r8]
    bl func_0208de5c
    ldr r7, =data_020c4650
    mov r1, #0
    ldr r0, [r7]
    bl func_020898ac
    ldr r6, =data_020c4674
    ldr r0, [r6]
    bl func_0208b130
    ldr r5, =data_020c46d4
    ldr r0, [r5]
    bl func_020920b4
    bl func_0202b4c4
    ldr r0, [r4]
    bl func_ov015_0213d1ac
    ldr r0, [r8]
    bl func_0208de6c
    ldr r0, [r7]
    mov r1, #1
    bl func_020898ac
    ldr r0, [r6]
    bl func_0208b210
    ldr r0, [r5]
    bl func_020920a4
    ldr r0, [r9]
    bl func_02096048
    ldr r0, [r4]
    bl func_ov015_0213d1d0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void SceneManager::func_0203f500()
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, =data_020c484c
    mov r5, #0
    str r5, [r0]
    bl func_0203ee70
    bl func_ov015_02134c78
    bl func_0203ef38
    ldr r4, =data_020c4850
    ldr r2, =data_020c4808
    ldr r0, =data_020ac008
    mov r1, r4
    strb r5, [r2]
    bl func_ov015_02133efc
    ldr r4, [r4]
    mov r1, r5
    mov r0, r4
    mov r2, r5
    bl func_ov015_021322b0
    mov r0, r4
    mov r1, #1
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, =data_020c45c8
    mov r1, r5
@L_0203f560:
    str r1, [r0, r5, lsl #2]
    add r5, r5, #1
    cmp r5, #3
    blt @L_0203f560
    ldr r0, =data_020c4a40
    ldr r4, =data_020c45a0
    str r0, [r4, #0x28]
    bl func_ov015_02148f94
    ldr r0, =data_020d9978
    str r0, [r4, #0x2c]
    bl func_02051c54
    bl func_0203eba4
    ldr r0, =gEntryPool
    bl _ZN9EntryPool4InitEv
    ldr r0, =data_020e88a0
    bl func_01ff9ea4
    bl func_0203ed3c
    ldmia sp!, {r3, r4, r5, pc}
}

// counts the play time (up to 999:59:59)
void SceneManager::func_0203f5d0()
{
    gGameState.profile.playTime += data_020c484c;
    if (gGameState.profile.playTime > PLAY_TIME_MAX) {
        gGameState.profile.playTime = PLAY_TIME_MAX;
    }
}

asm void SceneManager::func_0203f604()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    bl func_0203f500
    ldr r9, =0x2fffc3c
    ldr r10, [r9]
    bl func_0200846c
    bl func_020025f8
    ldr r8, =0x4001000
    ldr r0, [r8]
    orr r0, r0, #0x10000
    str r0, [r8]
    bl func_0209d240
    ldr r5, =data_020c467c
    ldr r4, =data_020c484c
    ldr r11, =data_020c45a0
    add r7, r9, #0x36c
@L_0203f644:
    ldrh r0, [r7]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    beq @L_0203f660
    bl func_0203ed88
    ldr r10, [r9]
    b @L_0203f690
@L_0203f660:
    bl PM_GetLCDPower
    cmp r0, #0
    bne @L_0203f690
    mov r0, #1
    bl func_0200ff28
    bl func_0200846c
    bl func_020025f8
    ldr r0, [r8]
    orr r0, r0, #0x10000
    str r0, [r8]
    bl func_ov015_0213238c
    bl func_0200846c
@L_0203f690:
    ldr r0, [r5]
    bl func_0208897c
    bl func_0203f2e8
    bl func_0203efc8
    bl func_0203f0dc
    bl func_0203f248
    bl func_0203f338
    bl func_0203f42c
    ldr r0, =data_020c4668
    ldr r1, [r0]
    mov r0, #1
    str r0, [r1, #0x38]
    ldr r0, [r5]
    bl func_02088990
    bl func_0209d480
    ldr r0, =data_020c4820
    ldrh r0, [r0]
    tst r0, #0x100
    beq @L_0203f700
    ldr r0, =data_020c4818
    ldrh r0, [r0]
    tst r0, #0x200
    beq @L_0203f700
    ldr r0, =data_020c47b4
    add r1, sp, #8
    add r2, sp, #4
    add r3, sp, #0
    bl _ZN8GameHeap7GetInfoEPmS0_S0_
@L_0203f700:
    bl func_0200846c
    bl func_0203f3b4
    ldr r0, [r11, #0x30]
    ldr r1, [r0]
    ldr r1, [r1, #0x30]
    blx r1
    ldr r0, [r11, #0x30]
    ldr r1, [r0]
    ldr r1, [r1, #0x34]
    blx r1
    ldr r6, [r9]
    ldr r0, =data_020c5e40
    sub r1, r6, r10
    str r1, [r4]
    mov r10, r6
    bl _ZN12SoundManager6UpdateEv
    ldr r0, [r4]
    cmp r0, #1
    bhi @L_0203f764
    bl func_0203f0dc
    bl func_0200846c
    add r10, r6, #1
    ldr r0, [r4]
    add r0, r0, #1
    str r0, [r4]
@L_0203f764:
    bl func_0203f5d0
    bl func_0203ead8
    b @L_0203f644
}

int SceneManager::func_0203f798()
{
    return 0;
}

int SceneManager::func_0203f7a0()
{
    return 0;
}

int SceneManager::func_0203f7a8()
{
    return 0;
}

int SceneManager::func_0203f7b0()
{
    return 1;
}

void SceneManager::func_0203f7b8()
{
}

void SceneManager::func_0203f7bc()
{
}

SceneManager *SceneManager::func_0203f7c0()
{
    operator delete(this);
    return this;
}

void SceneManager::func_0203f7d4()
{
    func_ov015_0213291c();
}

void SceneManager::func_0203f7e0()
{
    func_ov015_02132784();
}

void SceneManager::func_0203f7ec()
{
    func_ov015_021326cc(8);
}

void SceneManager::func_0203f7fc()
{
    func_ov015_02132614(6);
}

void SceneManager::func_0203f80c()
{
    func_ov015_02132568(6);
}

void SceneManager::func_0203f81c()
{
    func_ov015_021324b4();
}

void SceneManager::func_0203f828()
{
    func_ov015_0213240c();
}

void SceneManager::func_0203f834()
{
    func_ov015_021327ec(1);
}

void SceneManager::func_0203f844()
{
    func_ov015_021323a4(1);
}

void SceneManager::func_0203f854()
{
}

void SceneManager::func_0203f858()
{
}

void SceneManager::func_0203f85c()
{
}

void SceneManager::func_0203f860()
{
    func_ov015_0213290c();
}

void SceneManager::func_0203f86c()
{
    func_ov015_02132774();
}

void SceneManager::func_0203f878()
{
    func_ov015_021326b8(8);
}

void SceneManager::func_0203f888()
{
    func_ov015_02132600(6);
}

void SceneManager::func_0203f898()
{
    func_ov015_02132554(6);
}

void SceneManager::func_0203f8a8()
{
    func_ov015_021324a4();
}

void SceneManager::func_0203f8b4()
{
    func_ov015_021323fc();
}

void SceneManager::func_0203f8c0()
{
    func_ov015_021327ec(0);
}

void SceneManager::func_0203f8d0()
{
    func_ov015_021323a4(0);
}

void SceneManager::func_0203f8e0()
{
}

void SceneManager::func_0203f8e4()
{
}

void SceneManager::func_0203f8e8()
{
}
