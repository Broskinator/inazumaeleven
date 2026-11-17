#include "ov005/Unk_ov005_020fc7e0.hpp"
#include "game/vcall.hpp"
struct E020fcbf4 { u8 a[0xC]; };

extern "C" void func_ov005_020fc7e0(void);
extern "C" s32 func_ov005_020fc93c(u8 *arg0);
extern "C" void func_ov005_020fc98c(void);
extern "C" s32 func_ov005_020fcac4(s32 arg0, s32 arg1);
extern "C" s32 func_ov005_020fcb08(s32 arg0, s32 arg1);
extern "C" s32 func_ov005_020fcb5c(s32 arg0);
extern "C" void func_ov005_020fcb70(void);
extern "C" void func_ov005_020fcb74(u8 *arg0, s32 arg1);
extern "C" void func_ov005_020fcbb0(u8 *arg0, u8 *arg1);
extern "C" void func_ov005_020fcbf4(u8 *arg0);
extern "C" s32 func_ov005_020fcc58(...);
extern "C" s32 func_ov005_020fcc9c(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov005_020fccc4(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_ov005_020fcdb0(void);
extern "C" s32 func_ov005_020fcdc8(...);
extern "C" s32 func_ov005_020fce34(u8 *arg0);
extern "C" void func_ov005_020fce84(u8 *arg0);
extern "C" void func_ov005_020fcee4(void);
extern "C" void func_ov005_020fd3a4(void);
extern "C" void func_ov005_020fd3a8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov005_020fd3e0(s32 arg0);
extern "C" s32 func_ov005_020fd3f4(...);
extern "C" s32 func_ov005_020fd488(u8 *arg0);
extern "C" s32 func_ov005_020fd4ac(void);
extern "C" s32 func_ov005_020fd524(void);
extern "C" void func_ov005_020fd52c(s32 arg0, s32 arg1);
extern "C" s32 func_ov005_020fd544(u8 *arg0, s32 arg1);
extern "C" void func_ov005_020fd5a0(void);
extern "C" s32 func_ov005_020fd5e4(...);
extern "C" s32 func_ov005_020fd60c(...);
extern "C" void func_ov005_020fd670(u8 *arg0);
extern "C" s32 func_ov005_020fd6dc(u8 *arg0, u8 *arg1);
extern "C" void func_ov005_020fd6f8(void);
extern "C" void func_ov005_020fd8c0(void);
extern "C" void func_ov005_020fd8c4(s32 arg0);
extern "C" s32 func_ov005_020fd8dc(s32 arg0);
extern "C" void func_ov005_020fd8f0(void);
extern "C" void func_ov005_020fd8f4(void);

extern "C" char g3DDevice[];
extern "C" char gAllocator[];
extern "C" char data_020c4c70[];
extern "C" char gAudioPlayer[];
extern "C" char data_ov005_020fdb1c[];
extern "C" char data_ov005_020fdb40[];
extern "C" char data_ov005_020fdb4c[];
extern "C" char data_ov005_020fdb58[];
extern "C" char data_ov005_020fdbf0[];
extern "C" char data_ov005_020fdc10[];
extern "C" char data_ov005_020fdc30[];
extern "C" char data_ov005_020fdc54[];
extern "C" char data_ov005_020fdc80[];
extern "C" s32 DC_FlushRange(...);
extern "C" s32 GXS_BeginLoadBGExtPltt(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void OS_Sleep(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" s32 _ZN12SceneManager11SetNextModeEl(...);
extern "C" void _ZN12SoundManager13AreBanksReadyEv(void);
extern "C" void _ZN12SoundManager13func_0203a790Eii(void);
extern "C" void _ZN12SoundManager13func_0203ba5cEi(void);
extern "C" void _ZN12SoundManager13func_0203bc10EPKc(void);
extern "C" void _ZN12SoundManager13func_0203bcb0EPKci(void);
extern "C" void _ZN12SoundManager6IsIdleEv(void);
extern "C" void _ZN12SoundManager8SetSceneEiii(void);
extern "C" void _ZN13ScreenManager12SetNextSceneEii(void);
extern "C" void _ZN13ScreenManager13func_0203e114Eii(void);
extern "C" void _ZN13ScreenManager15GetCurSceneMainEv(void);
extern "C" void _ZN13ScreenManager16GetNextSceneMainEv(void);
extern "C" void _ZN13ScreenManager14GetCurSceneSubEv(void);
extern "C" void _ZN13ScreenManager13func_0203e224Ev(void);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" s32 _ZN8GameHeap5AllocEiii(...);
extern "C" s32 _ZdlPv(...);
extern "C" s32 GX_LoadBGPltt(...);
extern "C" s32 GX_LoadBG1Scr(...);
extern "C" s32 GX_LoadBG2Scr(...);
extern "C" void GXS_LoadBG2Scr(void);
extern "C" s32 GX_LoadBG1Char(...);
extern "C" s32 GX_LoadBG2Char(...);
extern "C" void GXS_LoadBG2Char(void);
extern "C" s32 GXS_LoadBGExtPltt(...);
extern "C" s32 GXS_EndLoadBGExtPltt(...);
extern "C" s32 C3DDevice_SetClearColor(...);
extern "C" s32 Graphics_LoadBGPaletteSub(...);
extern "C" s32 Graphics_LoadTempPaletteFromPac(...);
extern "C" s32 Graphics_FadeInScreen(...);
extern "C" s32 Graphics_FadeScreensBlack(...);
extern "C" s32 Graphics_SetupScreen_2(...);
extern "C" s32 func_ov015_02133efc(...);
extern "C" s32 func_ov015_02134ccc(...);
extern "C" s32 func_ov015_021353a4(...);
extern "C" s32 func_ov015_02135440(...);
extern "C" s32 func_ov015_02135e10(...);
extern "C" void gGameState(void);
extern "C" s32 sprintf(...);

extern "C" void func_ov015_021326cc(void);
extern "C" void func_ov015_02132614(void);
extern "C" void Graphics_IsScreenBrightAdjusted(void);
extern "C" void Graphics_IsScreenFading(void);
extern "C" asm void func_ov005_020fc7e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =data_020c4c70
    mov r4, #0
    ldr r6, [r1, #0x28]
    mov r5, #1
    mov r3, r4, lsl #0x15
    ldr r2, [r1, #0x2c]
    orr r3, r3, r5, lsr #11
    orr r6, r6, r5, lsl #21
    str r6, [r1, #0x28]
    orr r2, r2, r3
    str r2, [r1, #0x2c]
    strb r5, [r1, #0x40]
    ldr r2, [r0]
    mov r1, #2
    ldr r2, [r2, #0xc]
    mov r6, r0
    blx r2
    ldr r3, =data_ov005_020fdc80
    mov r0, r6
    mov r1, r4
    mov r2, r4
    str r4, [r6, #0x80]
    str r4, [r6, #0x84]
    strb r5, [r3]
    bl _ZN13ScreenManager13func_0203e114Eii
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl _ZN13ScreenManager13func_0203e114Eii
    mov r7, #0x96
    mov r0, r6
    mov r1, r4
    mov r2, r7
    bl _ZN13ScreenManager12SetNextSceneEii
    mov r1, r5
    mov r2, r7
    mov r0, r6
    bl _ZN13ScreenManager12SetNextSceneEii
    mov r5, #6
    mov r0, r5
    strb r4, [r6, #0x89]
    strb r4, [r6, #0x88]
    bl Graphics_FadeScreensBlack
    mov r1, r5
    ldr r5, =gAudioPlayer
    mov r2, r4
    mov r0, r5
    mov r3, r4
    bl _ZN12SoundManager8SetSceneEiii
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl _ZN12SoundManager13func_0203a790Eii
    mov r4, #0x14
    b @L_020fc8c8
@L_020fc8c0:
    mov r0, r4
    bl OS_Sleep
@L_020fc8c8:
    mov r0, r5
    bl _ZN12SoundManager6IsIdleEv
    cmp r0, #0
    beq @L_020fc8c0
    mov r5, #0x14
    ldr r4, =gAudioPlayer
    b @L_020fc8ec
@L_020fc8e4:
    mov r0, r5
    bl OS_Sleep
@L_020fc8ec:
    mov r0, r4
    bl _ZN12SoundManager13AreBanksReadyEv
    cmp r0, #0
    beq @L_020fc8e4
    mov r0, r6
    ldr r1, [r0]
    ldr r1, [r1, #0x34]
    blx r1
    ldr r0, =g3DDevice
    ldr r1, =0x7335
    ldr r0, [r0]
    mov r2, #0x1f
    mov r3, #0
    bl C3DDevice_SetClearColor
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov005_020fc93c(u8 *arg0)
{
    u8 *r4;
    s32 v2;
    r4 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x80);
    if ((s32)arg0 != 0) {
        ((VCall *)arg0)->f8();
    }
    arg0 = (u8 *)*(s32 *)(r4 + 0x84);
    if ((s32)arg0 != 0) {
        ((VCall *)arg0)->f8();
    }
    v2 = ((VCall *)r4)->f10(2);
    return v2;
}

extern "C" asm void func_ov005_020fc98c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl _ZN13ScreenManager16GetNextSceneMainEv
    mov r5, r0
    mov r0, r4
    bl _ZN13ScreenManager15GetCurSceneMainEv
    cmp r5, r0
    bne @L_020fc9b8
    ldrb r0, [r4, #5]
    cmp r0, #0
    beq @L_020fca28
@L_020fc9b8:
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fc9d8
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_020fca28
@L_020fc9d8:
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fc9f0
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc9f0:
    cmp r5, #0x96
    addeq r0, r4, #0x8c
    movne r0, #0
    str r0, [r4, #0x80]
    mov r0, r4
    mov r2, r5
    mov r1, #0
    bl _ZN13ScreenManager13func_0203e114Eii
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fca28
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
@L_020fca28:
    mov r0, r4
    bl _ZN13ScreenManager13func_0203e224Ev
    mov r5, r0
    mov r0, r4
    bl _ZN13ScreenManager14GetCurSceneSubEv
    cmp r5, r0
    bne @L_020fca50
    ldrb r0, [r4, #5]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_020fca50:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_020fca70
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
@L_020fca70:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_020fca88
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fca88:
    cmp r5, #0x96
    addeq r0, r4, #0x24c
    movne r0, #0
    str r0, [r4, #0x84]
    mov r0, r4
    mov r2, r5
    mov r1, #1
    bl _ZN13ScreenManager13func_0203e114Eii
    ldr r0, [r4, #0x84]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov005_020fcac4(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 v1;
    s32 t0;
    t0 = (*(u16 *)(((u8 *)0x4000304)) & -0x8001);
    *(u16 *)(((u8 *)0x4000304)) = t0;
    r4 = arg1;
    if ((r4 == 0 || r4 == 2)) {
        func_ov015_02134ccc(9);
    }
    if ((u32)(r4 - 1) > (u32)1)
        return (r4 - 1);
    v1 = func_ov015_02135440(9);
    return v1;
}

extern "C" s32 func_ov005_020fcb08(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 t0;
    r4 = arg1;
    if ((r4 == 0 || r4 == 2)) {
        func_ov015_021353a4();
    }
    if ((u32)(r4 - 1) <= (u32)1) {
        func_ov015_02135e10();
    }
    if (r4 == 2) {
        MIi_CpuClearFast(0, 0x6800000, 0xA4000);
    }
    t0 = (*(u16 *)(((u8 *)0x4000304)) & -0x8001);
    *(u16 *)(((u8 *)0x4000304)) = t0;
    return t0;
}

extern "C" s32 func_ov005_020fcb5c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov005_020fcb70(void)
{
}

extern "C" void func_ov005_020fcb74(u8 *arg0, s32 arg1)
{
    s32 t0;
    if (*(u8 *)(arg0 + 0x1AC) != 0) {
        if ((arg1 & 1) == 0)
            return;
        func_ov005_020fcdc8();
        return;
    } else {
        if (*(s32 *)(arg0 + 0x190) != 7)
            return;
        if ((arg1 & 1) == 0)
            return;
        t0 = *(s32 *)(arg0 + 0x190);
        ((s32 (*)(...))func_ov005_020fcdb0)((s32)arg0, arg1, t0);
        return;
    }
}

extern "C" void func_ov005_020fcbb0(u8 *arg0, u8 *arg1)
{
    if (arg0[0x1AC] != 0) {
        if (*(s32 *)(arg0 + 0x190) == 7 && *(u16 *)(arg1 + 4) == 1)
            ((void (*)(u8 *))func_ov005_020fcdc8)(arg0);
    } else {
        if (*(s32 *)(arg0 + 0x190) == 7 && *(u16 *)(arg1 + 4) == 1)
            ((void (*)(u8 *))func_ov005_020fcdb0)(arg0);
    }
}

extern "C" void func_ov005_020fcbf4(u8 *arg0)
{
    char buf[0x100];
    s32 i = 0;
    ((s32 (*)(...))MI_CpuFill8)(buf, i, 0x100);
    do {
        ((s32 (*)(...))sprintf)(buf, data_ov005_020fdb1c, i + 1);
        ((s32 (*)(...))func_ov015_02133efc)(buf, &((E020fcbf4 *)(arg0 + 4))[i]);
        i++;
    } while (i < 0x20);
}

extern "C" asm s32 func_ov005_020fcc58(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0xc
    mul r4, r1, r2
    mov r5, r0
    add r0, r5, r4
    ldr r1, [r0, #4]
    cmp r1, #0
    ldrneb r0, [r0, #0xd]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    add r0, r5, r4
    mov r1, #0
    str r1, [r0, #4]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov005_020fcc9c(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    r4 = 0;
    r5 = arg0;
    do {
        s32 v0 = func_ov005_020fcc58(r5, r4);
        arg0 = v0;
        r4 = (r4 + 1);
    } while (r4 < 0x21);
    return arg0;
}

extern "C" s32 func_ov005_020fccc4(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r4;
    s32 v4;
    s32 v9;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    s32 t9;
    s32 t10;
    s32 t11;
    if (*(s32 *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x4) == 0)
        return ((arg1 * 0xC) + arg0);
    r4 = (u8 *)*(s32 *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x4);
    if (arg2 == 0) {
        Graphics_SetupScreen_2((s32)r4, 0, 1);
        t0 = (s32)(r4 + *(s32 *)(r4 + 0xC));
        t1 = *(s32 *)(r4 + 0x10);
        GX_LoadBG2Scr(t0, 0, t1);
        t2 = (s32)(r4 + *(s32 *)(r4 + 0x14));
        t3 = *(s32 *)(r4 + 0x18);
        GX_LoadBG2Char(t2, 0, t3);
        Graphics_LoadTempPaletteFromPac((s32)r4, 0, 1);
        t4 = (s32)(r4 + *(s32 *)(r4 + 0x4));
        t5 = *(s32 *)(r4 + 0x8);
        v4 = GX_LoadBGPltt(t4, 0x20, t5);
        return v4;
    } else {
        Graphics_SetupScreen_2((s32)r4, 0, 2);
        t6 = (s32)(r4 + *(s32 *)(r4 + 0xC));
        t7 = *(s32 *)(r4 + 0x10);
        GX_LoadBG1Scr(t6, 0, t7);
        t8 = (s32)(r4 + *(s32 *)(r4 + 0x14));
        t9 = *(s32 *)(r4 + 0x18);
        GX_LoadBG1Char(t8, 0, t9);
        Graphics_LoadTempPaletteFromPac((s32)r4, 0, 2);
        t10 = (s32)(r4 + *(s32 *)(r4 + 0x4));
        t11 = *(s32 *)(r4 + 0x8);
        v9 = GX_LoadBGPltt(t10, 0x40, t11);
        return v9;
    }
}

extern "C" void func_ov005_020fcdb0(void)
{
    Graphics_FadeScreensBlack(6);
    _ZN12SceneManager11SetNextModeEl(3);
}

extern "C" asm s32 func_ov005_020fcdc8(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =gAudioPlayer
    ldr r1, =data_ov005_020fdb40
    mov r5, r0
    mov r0, r4
    bl _ZN12SoundManager13func_0203bc10EPKc
    cmp r0, #0
    beq @L_020fce04
    ldr r1, =data_ov005_020fdb4c
    mov r0, r4
    mov r2, #0x1f4
    bl _ZN12SoundManager13func_0203bcb0EPKci
    mov r0, r4
    mov r1, #0
    bl _ZN12SoundManager13func_0203ba5cEi
@L_020fce04:
    mov r1, #9
    mov r0, r5
    str r1, [r5, #0x190]
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r0, #1
    bl _ZN12SceneManager11SetNextModeEl
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov005_020fce34(u8 *arg0)
{
    s32 r1;
    r1 = *(s32 *)(arg0 + 0x19C);
    if (r1 >= 0x1F) {
        if ((r1 % 2) != 0) {
            if (*(s32 *)(arg0 + 0x194) >= 0xC0) {
                *(u8 *)(arg0 + 0x1A4) = 2;
                *(s32 *)(arg0 + 0x1A8) = 1;
            }
        } else {
            if (*(s32 *)(arg0 + 0x198) >= 0xC0) {
                *(u8 *)(arg0 + 0x1A4) = 1;
                *(s32 *)(arg0 + 0x1A8) = 1;
            }
        }
    }
    return *(s32 *)(arg0 + 0x1A8);
}

extern "C" void func_ov005_020fce84(u8 *arg0)
{
    *(s32 *)(arg0 + 0x190) = 0;
    *(s32 *)(arg0 + 0x198) = 0;
    *(s32 *)(arg0 + 0x194) = (0 - 0xC0);
    *(s32 *)(arg0 + 0x19C) = 0;
    *(s32 *)(arg0 + 0x1A0) = 0;
    *(s32 *)(arg0 + 0x1A8) = 0;
    *(u8 *)(arg0 + 0x1A4) = 0;
    *(u8 *)(arg0 + 0x1AC) = 0;
    MI_CpuFill8((arg0 + 0x1B4), 0, 0xC, (0 - 0xC0));
    *(s32 *)(arg0 + 0x1B4) = 0;
    *(s32 *)(arg0 + 0x1B8) = 0;
    *(s32 *)(arg0 + 0x1BC) = 0;
    MI_CpuFill8((arg0 + 4), 0, 0x18C);
}

extern "C" asm void func_ov005_020fcee4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r1, [r4, #0x190]
    mov r5, #1
    cmp r1, #8
    mov r6, #0
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    dcd 0xea000007
    dcd 0xe8bd8070
    dcd 0xea000028
    dcd 0xea000056
    dcd 0xea000049
    dcd 0xea0000eb
    dcd 0xea000109
    dcd 0xe8bd8070
    dcd 0xe8bd8070
    dcd 0xe59f2458
    dcd 0xe59f1458
    dcd 0xe5d2509b
    dcd 0xe5943198
    dcd 0xe59f2450
    dcd 0xe5c451ac
    dcd 0xe0023803
    dcd 0xe5813000
    dcd 0xe5943194
    dcd 0xe241500a
    dcd 0xe0022803
    dcd 0xe5812004
    dcd 0xe1d520b0
    dcd 0xe2413008
    dcd 0xe3c22003
    dcd 0xe1c520b0
    dcd 0xe1d320b0
    dcd 0xe3c22003
    dcd 0xe3822001
    dcd 0xe1c320b0
    dcd 0xe1d123b4
    dcd 0xe3c2203f
    dcd 0xe3822004
    dcd 0xe1c123b4
    dcd 0xe1d123b4
    dcd 0xe3c22c3f
    dcd 0xe3822b01
    dcd 0xe1c123b4
    dcd 0xe1d123b6
    dcd 0xe3c2203f
    dcd 0xe3822002
    dcd 0xe1c123b6
    dcd 0xebffff11
    dcd 0xe3a00002
    dcd 0xe5840190
    dcd 0xe594019c
    dcd 0xe2400001
    dcd 0xe1a01fa0
    dcd 0xe0610f80
    dcd 0xe0910fe0
    dcd 0xe594119c
    dcd 0x13a02001
    dcd 0xe2813001
    dcd 0x03a02000
    dcd 0xe1a00004
    dcd 0xe584319c
    dcd 0xebffff37
    dcd 0xe594019c
    dcd 0xe2400001
    dcd 0xe1a01fa0
    dcd 0xe0610f80
    dcd 0xe0910fe0
    dcd 0xe594119c
    dcd 0x13a02001
    dcd 0xe2813001
    dcd 0x03a02000
    dcd 0xe1a00004
    dcd 0xe584319c
    dcd 0xebffff2b
    dcd 0xe3a01003
    dcd 0xe5841190
    dcd 0xe59401b0
    dcd 0xe2841f6d
    dcd 0xe5902000
    dcd 0xe592203c
    dcd 0xe12fff32
    dcd 0xe1a00004
    dcd 0xe5901000
    dcd 0xe591104c
    dcd 0xe12fff31
    dcd 0xe59401b8
    dcd 0xe3a01004
    dcd 0xe5841190
    dcd 0xe3500000
    dcd 0x08bd8070
    dcd 0xe59f0338
    dcd 0xe59f2338
    dcd 0xe3a01000
    dcd 0xebfcfa84
    dcd 0xe3a00003
    dcd 0xe5840190
    dcd 0xe8bd8070
    dcd 0xe1a05006
    dcd 0xe1a00005
    dcd 0xeb00d5d2
    dcd 0xe3500000
    dcd 0x18bd8070
    dcd 0xe3a01301
    dcd 0xe5910000
    dcd 0xe3c00a0e
    dcd 0xe3800a06
    dcd 0xe5810000
    dcd 0xe59401a8
    dcd 0xe3500000
    dcd 0x1a000034
    dcd 0xe5941198
    dcd 0xe5940194
    dcd 0xe2811001
    dcd 0xe2800001
    dcd 0xe5841198
    dcd 0xe5840194
    dcd 0xe35100c0
    dcd 0xda000010
    dcd 0xe594019c
    dcd 0xe3500020
    dcd 0xaa00000d
    dcd 0xe2400001
    dcd 0xe1a01fa0
    dcd 0xe0610f80
    dcd 0xe0910fe0
    dcd 0xe594119c
    dcd 0x13a05001
    dcd 0xe2813001
    dcd 0xe1a00004
    dcd 0xe1a02005
    dcd 0xe584319c
    dcd 0xebfffef1
    dcd 0xe5940198
    dcd 0xe2400d06
    dcd 0xe5840198
    dcd 0xe5940194
    dcd 0xe35000c0
    dcd 0xda000010
    dcd 0xe594019c
    dcd 0xe3500020
    dcd 0xaa00000d
    dcd 0xe2400001
    dcd 0xe1a01fa0
    dcd 0xe0610f80
    dcd 0xe0910fe0
    dcd 0xe594119c
    dcd 0x13a02001
    dcd 0xe2813001
    dcd 0x03a02000
    dcd 0xe1a00004
    dcd 0xe584319c
    dcd 0xebfffedd
    dcd 0xe5940194
    dcd 0xe2400d06
    dcd 0xe5840194
    dcd 0xe5941198
    dcd 0xe59f022c
    dcd 0xe59f2224
    dcd 0xe0001801
    dcd 0xe5821000
    dcd 0xe5941194
    dcd 0xe0000801
    dcd 0xe5820004
    dcd 0xe5940194
    dcd 0xe3a020ff
    dcd 0xe3500000
    dcd 0xe59f0210
    dcd 0xe3a01cff
    dcd 0xca000013
    dcd 0xe1d030b0
    dcd 0xe3c3303f
    dcd 0xe3833002
    dcd 0xe1c030b0
    dcd 0xe1d030b0
    dcd 0xe3c33c3f
    dcd 0xe3833c02
    dcd 0xe1c030b0
    dcd 0xe1d030b2
    dcd 0xe3c3303f
    dcd 0xe3833004
    dcd 0xe1c030b2
    dcd 0xe5943194
    dcd 0xe2633000
    dcd 0xe14020b8
    dcd 0xe20320ff
    dcd 0xe14020b4
    dcd 0xe5942194
    dcd 0xe2622000
    dcd 0xea000012
    dcd 0xe1d030b0
    dcd 0xe3c3303f
    dcd 0xe3833004
    dcd 0xe1c030b0
    dcd 0xe1d030b0
    dcd 0xe3c33c3f
    dcd 0xe3833b01
    dcd 0xe1c030b0
    dcd 0xe1d030b2
    dcd 0xe3c3303f
    dcd 0xe3833002
    dcd 0xe1c030b2
    dcd 0xe5943194
    dcd 0xe26330c0
    dcd 0xe14020b8
    dcd 0xe20320ff
    dcd 0xe14020b4
    dcd 0xe5942194
    dcd 0xe26220c0
    dcd 0xe14010b6
    dcd 0xe20210ff
    dcd 0xe14010b2
    dcd 0xe1a00004
    dcd 0xebfffefc
    dcd 0xe3500000
    dcd 0x159401b4
    dcd 0x13500000
    dcd 0x08bd8070
    dcd 0xe3a0501e
    dcd 0xe1a01005
    dcd 0xe3a00000
    dcd 0xeb00d528
    dcd 0xe1a01005
    dcd 0xe3a00001
    dcd 0xeb00d525
    dcd 0xe3a01301
    dcd 0xe5910000
    dcd 0xe3c00a0e
    dcd 0xe5810000
    dcd 0xe5d401a4
    dcd 0xe3500001
    dcd 0x1a000006
    dcd 0xe1d100ba
    dcd 0xe3c00003
    dcd 0xe3800001
    dcd 0xe1c100ba
    dcd 0xe1d100bc
    dcd 0xe3c00003
    dcd 0xea000005
    dcd 0xe1d100ba
    dcd 0xe3c00003
    dcd 0xe1c100ba
    dcd 0xe1d100bc
    dcd 0xe3c00003
    dcd 0xe3800001
    dcd 0xe1c100bc
    dcd 0xe3a00005
    dcd 0xe5840190
    dcd 0xe8bd8070
    dcd 0xe1a00006
    dcd 0xeb00d53c
    dcd 0xe3500000
    dcd 0x18bd8070
    dcd 0xe1a00004
    dcd 0xe1a02005
    dcd 0xe3a0101f
    dcd 0xebfffe75
    dcd 0xe59fc0ac
    dcd 0xe3a03301
    dcd 0xe1dc00b0
    dcd 0xe3a02006
    dcd 0xe2841f6d
    dcd 0xe3c00003
    dcd 0xe1cc00b0
    dcd 0xe1dc00b2
    dcd 0xe3c00003
    dcd 0xe3800001
    dcd 0xe1cc00b2
    dcd 0xe58c600a
    dcd 0xe58c600e
    dcd 0xe5930000
    dcd 0xe3c00a0e
    dcd 0xe5830000
    dcd 0xe59401b0
    dcd 0xe58451bc
    dcd 0xe5842190
    dcd 0xe5902000
    dcd 0xe592203c
    dcd 0xe12fff32
    dcd 0xe8bd8070
    dcd 0xe59401a0
    dcd 0xe2800001
    dcd 0xe58401a0
    dcd 0xe350003c
    dcd 0xb8bd8070
    dcd 0xe3a0501e
    dcd 0xe1a00006
    dcd 0xe3a02007
    dcd 0xe1a01005
    dcd 0xe58401a0
    dcd 0xe5842190
    dcd 0xeb00d489
    dcd 0xe1a01005
    dcd 0xe3a00001
    dcd 0xeb00d486
    dcd 0xe8bd8070
    dcd gGameState
    dcd 0x04000014
    dcd 0x01ff0000
    dcd gAudioPlayer
    dcd data_ov005_020fdb58
    dcd 0x04000048
    dcd 0x0400000a
}

extern "C" void func_ov005_020fd3a4(void)
{
}

extern "C" void func_ov005_020fd3a8(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    func_ov005_020fcc9c(arg0, arg1, arg2, arg3);
    *(s32 *)(((u8 *)0x4000014)) = 0;
    *(s32 *)(((u8 *)0x4000014) + 0x4) = 0;
    C3DDevice_SetClearColor(*(s32 *)(g3DDevice), 0, 0, 0);
}

extern "C" s32 func_ov005_020fd3e0(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" asm s32 func_ov005_020fd3f4(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    ldr r3, =gAllocator
    mov r4, r0
    ldr r0, [r3]
    ldr r1, =data_ov005_020fdbf0
    cmp r0, #0
    moveq r0, #0
    beq @L_020fd43c
    mov r2, #0
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r4, #0x170
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020fd43c:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r3, r4, pc}
    mov r3, #0
    mov r0, #0x22
@L_020fd454:
    ldr r1, [r4, #0x170]
    mla r2, r3, r0, r1
    ldrh r1, [r2, #0x20]
    add r3, r3, #1
    cmp r3, #0x1c
    add r1, r1, #1
    strh r1, [r2, #0x20]
    blt @L_020fd454
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, pc}
}

extern "C" s32 func_ov005_020fd488(u8 *arg0)
{
    _ZN8GameHeap4FreeEPv((s32)gAllocator, *(s32 *)(arg0 + 0x170));
    *(s32 *)(arg0 + 0x170) = 0;
    return 0;
}

extern "C" s32 func_ov005_020fd4ac(void)
{
    s32 v0;
    s32 v7;
    v0 = _ZN8GameHeap5AllocEiii((s32)gAllocator, 0x200, 0, 1);
    if (v0 == 0)
        return v0;
    MIi_CpuClearFast(0, v0, 0x200);
    DC_FlushRange(v0, 0x200);
    GXS_BeginLoadBGExtPltt();
    GXS_LoadBGExtPltt(v0, 0x4000, 0x200);
    GXS_EndLoadBGExtPltt();
    Graphics_LoadBGPaletteSub();
    v7 = _ZN8GameHeap4FreeEPv((s32)gAllocator, v0);
    return v7;
}

extern "C" s32 func_ov005_020fd524(void)
{
    return 1;
}

extern "C" void func_ov005_020fd52c(s32 arg0, s32 arg1)
{
    func_ov015_02133efc(arg1, (arg0 + 0x164), arg0);
}

extern "C" s32 func_ov005_020fd544(u8 *arg0, s32 arg1)
{
    s32 local[64];
    s32 v2;
    s32 t0;
    MI_CpuFill8((s32)((u8 *)local), 0, 0x100);
    t0 = ((arg1 * 0x22) + *(s32 *)(arg0 + 0x170));
    sprintf((s32)((u8 *)local), (s32)data_ov005_020fdc10, t0);
    v2 = func_ov015_02133efc((s32)((u8 *)local), ((arg1 * 0xC) + (arg0 + 8)));
    return v2;
}

extern "C" asm void func_ov005_020fd5a0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0xc
    mul r4, r1, r2
    mov r5, r0
    add r0, r5, r4
    ldr r1, [r0, #8]
    cmp r1, #0
    ldrneb r0, [r0, #0x11]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    add r0, r5, r4
    mov r1, #0
    str r1, [r0, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov005_020fd5e4(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
@L_020fd5f0:
    mov r0, r5
    mov r1, r4
    bl func_ov005_020fd5a0
    add r4, r4, #1
    cmp r4, #0x1e
    blt @L_020fd5f0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov005_020fd60c(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0xc
    mla r0, r1, r2, r0
    ldr r5, [r0, #8]
    cmp r5, #0
    beq @L_020fd668
    ldr r0, [r5, #0xc]
    mov r4, #0
    ldr r2, [r5, #0x10]
    mov r1, r4
    add r0, r5, r0
    bl GXS_LoadBG2Scr
    ldr r0, [r5, #0x14]
    ldr r2, [r5, #0x18]
    mov r1, r4
    add r0, r5, r0
    bl GXS_LoadBG2Char
    bl GXS_BeginLoadBGExtPltt
    ldmib r5, {r0, r2}
    add r0, r5, r0
    mov r1, #0x4000
    bl GXS_LoadBGExtPltt
    bl GXS_EndLoadBGExtPltt
@L_020fd668:
    bl Graphics_LoadBGPaletteSub
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov005_020fd670(u8 *arg0)
{
    *(s32 *)(arg0 + 0x170) = 0;
    *(u16 *)(((u8 *)(arg0 + 0x100)) + 0x78) = 0;
    *(u16 *)(((u8 *)(arg0 + 0x100)) + 0x7A) = 0;
    *(u8 *)(arg0 + 0x17C) = 0;
    func_ov005_020fd3f4((s32)arg0, (arg0 + 0x100));
    MI_CpuFill8((arg0 + 8), 0, 0x168);
    func_ov005_020fd52c((s32)arg0, (s32)data_ov005_020fdc30);
    func_ov005_020fd60c((s32)arg0, 0x1D);
    Graphics_FadeInScreen(1, 8);
    *(s32 *)(arg0 + 0x174) = 1;
    *(s32 *)(arg0 + 0x180) = 0;
}

extern "C" s32 func_ov005_020fd6dc(u8 *arg0, u8 *arg1)
{
    *(s32 *)(arg0 + 0x180) = (s32)arg1;
    if (*(s32 *)(arg1 + 0x8) != 0)
        *(s32 *)(arg0 + 0x174) = 3;
    return 1;
}

extern "C" asm void func_ov005_020fd6f8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #0x174]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_020fd724
    b @L_020fd7b0
    b @L_020fd89c
    ldmia sp!, {r3, r4, r5, pc}
@L_020fd724:
    add r0, r4, #0x100
    ldrh r1, [r0, #0x78]
    add r1, r1, #1
    strh r1, [r0, #0x78]
    ldrh r1, [r0, #0x78]
    cmp r1, #0x7e
    bne @L_020fd74c
    mov r0, #0x10
    bl func_ov015_021326cc
    ldmia sp!, {r3, r4, r5, pc}
@L_020fd74c:
    cmp r1, #0x8e
    bne @L_020fd788
    mov r0, #1
    mov r1, #0x10
    bl Graphics_FadeInScreen
    mov r0, r4
    mov r1, #0
    bl func_ov005_020fd544
    ldrb r1, [r4, #0x17c]
    mov r0, r4
    bl func_ov005_020fd60c
    mov r0, r4
    mov r1, #0x1d
    bl func_ov005_020fd5a0
    ldmia sp!, {r3, r4, r5, pc}
@L_020fd788:
    cmp r1, #0x96
    ldmloia sp!, {r3, r4, r5, pc}
    ldr r1, [r4, #0x180]
    mov r2, #1
    str r2, [r1, #4]
    mov r2, #0
    mov r1, #2
    strh r2, [r0, #0x78]
    str r1, [r4, #0x174]
    ldmia sp!, {r3, r4, r5, pc}
@L_020fd7b0:
    ldrb r3, [r4, #0x17c]
    ldr r2, [r4, #0x170]
    mov r0, #0x22
    add r1, r4, #0x100
    ldrh r5, [r1, #0x7a]
    mla r0, r3, r0, r2
    add r2, r5, #1
    strh r2, [r1, #0x7a]
    ldrh r2, [r0, #0x20]
    ldrh r0, [r1, #0x7a]
    cmp r0, r2
    bne @L_020fd818
    cmp r3, #0x1b
    bne @L_020fd7f4
    mov r0, #8
    bl func_ov015_021326cc
    b @L_020fd7fc
@L_020fd7f4:
    mov r0, #6
    bl func_ov015_02132614
@L_020fd7fc:
    ldrb r0, [r4, #0x17c]
    add r1, r0, #1
    cmp r1, #0x1c
    ldmgeia sp!, {r3, r4, r5, pc}
    mov r0, r4
    bl func_ov005_020fd544
    ldmia sp!, {r3, r4, r5, pc}
@L_020fd818:
    ldmlsia sp!, {r3, r4, r5, pc}
    mov r5, #1
    mov r0, r5
    bl Graphics_IsScreenBrightAdjusted
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl Graphics_IsScreenFading
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldrb r0, [r4, #0x17c]
    add r0, r0, #1
    and r1, r0, #0xff
    strb r0, [r4, #0x17c]
    cmp r1, #0x1c
    mov r0, r4
    bhs @L_020fd88c
    bl func_ov005_020fd60c
    ldrb r1, [r4, #0x17c]
    mov r0, r4
    sub r1, r1, #1
    bl func_ov005_020fd5a0
    mov r0, r5
    mov r1, #8
    bl Graphics_FadeInScreen
    add r0, r4, #0x100
    mov r1, #0
    strh r1, [r0, #0x7a]
    ldmia sp!, {r3, r4, r5, pc}
@L_020fd88c:
    bl func_ov005_020fd4ac
    ldr r0, [r4, #0x180]
    str r5, [r0]
    ldmia sp!, {r3, r4, r5, pc}
@L_020fd89c:
    ldr r1, =data_ov005_020fdc54
    bl func_ov005_020fd52c
    mov r0, r4
    mov r1, #0x1d
    bl func_ov005_020fd60c
    mov r0, #4
    str r0, [r4, #0x174]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov005_020fd8c0(void)
{
}

extern "C" void func_ov005_020fd8c4(s32 arg0)
{
    func_ov005_020fd488((u8 *)arg0);
    func_ov005_020fd5e4(arg0);
}

extern "C" s32 func_ov005_020fd8dc(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov005_020fd8f0(void)
{
}

extern "C" void func_ov005_020fd8f4(void)
{
}
