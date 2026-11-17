#include "ov018/Unk_ov018_02165d60.hpp"
struct E0216604c { s32 a; s32 b; s32 c; };
struct P0216604c { u8 pad[0xf4]; E0216604c arr[1]; };
struct E02166004 { s32 a; s32 b; u8 c, d, e; };
struct P02166004 { u8 pad[0xE8]; E02166004 arr[4]; };
struct P02165fb0 { s32 a; s32 b; };

extern "C" void func_ov018_02165d60(u8 *arg0, s32 arg1);
extern "C" void func_ov018_02165d74(void);
extern "C" s32 func_ov018_02165d78(s32 arg0);
extern "C" s32 func_ov018_02165d8c(u8 *arg0, u16 arg1, u16 arg2);
extern "C" void func_ov018_02165e14(void);
extern "C" s32 func_ov018_02165f10(u8 *arg0);
extern "C" void func_ov018_02165f94(s32 arg0);
extern "C" void func_ov018_02165fb0(u8 *arg0);
extern "C" void func_ov018_02166004(P02166004 *arg0, s32 arg1);
extern "C" s32 func_ov018_0216604c(P0216604c *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5);
extern "C" void func_ov018_021660c4(void);
extern "C" void func_ov018_021661cc(void);
extern "C" s32 func_ov018_021663b8(s32 arg0);
extern "C" char *func_ov018_02166408(u8 *arg0);
extern "C" void func_ov018_0216641c(u8 *arg0);
extern "C" void func_ov018_02166490(void);
extern "C" s32 func_ov018_02166608(u8 *arg0);
extern "C" s32 func_ov018_0216666c(u8 *arg0, s32 arg1);
extern "C" void func_ov018_021666c8(void);
extern "C" s32 func_ov018_021667b0(u8 *arg0);
extern "C" s32 func_ov018_02166824(...);
extern "C" s32 func_ov018_02166838(...);
extern "C" void func_ov018_02166904(u8 *arg0, s32 arg1);
extern "C" void func_ov018_02166918(s32 arg0, s32 arg1);
extern "C" void func_ov018_0216694c(void);
extern "C" s32 func_ov018_02166a58(...);
extern "C" s32 func_ov018_02166ac0(...);
extern "C" s32 func_ov018_02166b2c(...);
extern "C" s32 func_ov018_02166b8c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11);
extern "C" void func_ov018_02166ce4(u8 *arg0);
extern "C" void func_ov018_02166cf0(u8 *arg0);
extern "C" void func_ov018_02166d0c(u8 *arg0);
extern "C" char *func_ov018_02166d18(u8 *arg0);
extern "C" s32 func_ov018_02166d30(...);
extern "C" void func_ov018_02166eb0(s32 arg0);
extern "C" void func_ov018_02166ef0(void);
extern "C" s32 func_ov018_02166fa8(...);
extern "C" void func_ov018_02166ff8(void);

extern "C" char gSprButtonCtrl[];
extern "C" char gKeysRepeated[];
extern "C" char gAudioPlayer[];
extern "C" char gSubScreen0[];
extern "C" char gSubScreen1[];
extern "C" char gSubScreen2[];
extern "C" char data_ov018_02167044[];
extern "C" char data_ov018_02167064[];
extern "C" char data_ov018_0216708c[];
extern "C" char data_ov018_02167160[];
extern "C" char data_ov018_021671cc[];
extern "C" char data_ov018_021671f0[];
extern "C" char data_ov018_02167200[];
extern "C" char data_ov069_02170720[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG0CharPtr(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" void _ZN13ScreenManager8PopSceneEi(void);
extern "C" void _ZN13ScreenManager15GetCurSceneMainEv(void);
extern "C" void _ZN13ScreenManager14GetCurSceneSubEv(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 GXS_LoadBG0Scr(...);
extern "C" s32 GXS_LoadBG1Scr(...);
extern "C" s32 GXS_LoadBG2Scr(...);
extern "C" void func_020412f0(void);
extern "C" void Graphics_LoadBGPaletteSub(void);
extern "C" void Graphics_LoadTempPaletteFromPac(void);
extern "C" void Graphics_FadeInScreen(void);
extern "C" void Graphics_FadeScreenBlack(void);
extern "C" void Graphics_IsScreenFading(void);
extern "C" void Graphics_SetupScreen_2(void);
extern "C" void Graphics_LoadBGXCharSub(void);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" void Archive_ReadFromSFP(void);
extern "C" void Archive_TryFinalize(void);
extern "C" void Archive_Close(void);
extern "C" void Archive_Deallocate(void);
extern "C" s32 func_ov015_02135440(...);
extern "C" void func_ov015_02161c78(void);
extern "C" s32 func_ov015_02161c90(...);
extern "C" s32 func_ov015_02161c98(...);
extern "C" s32 func_ov015_02161d00(...);
extern "C" s32 func_ov015_02161d24(...);
extern "C" void func_ov015_02161dd4(void);
extern "C" s32 func_ov015_02161f84(...);
extern "C" s32 func_ov015_02161fdc(...);
extern "C" s32 func_ov015_021621dc(...);
extern "C" void func_ov015_02162420(void);
extern "C" s32 func_ov015_02162494(...);
extern "C" s32 func_ov015_021624cc(...);
extern "C" void func_ov015_02162750(void);
extern "C" s32 func_ov015_02162944(...);
extern "C" void func_ov015_021629c8(void);
extern "C" s32 func_ov015_02162f70(...);
extern "C" char gGameState[];

extern "C" void func_ov018_02165d60(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0) = (s32)data_ov018_02167160;
}

extern "C" void func_ov018_02165d74(void)
{
}

extern "C" s32 func_ov018_02165d78(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" s32 func_ov018_02165d8c(u8 *arg0, u16 arg1, u16 arg2)
{
    s32 local[1];
    s32 r2;
    s32 v1;
    s32 v2;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02162944(t0, arg1, arg2);
    t1 = *(s32 *)(arg0 + 0x24);
    *(u16 *)(arg0 + 0xA) = arg2;
    *(u16 *)(arg0 + 0x8) = arg1;
    r2 = (s32)((u8 *)local);
    if (t1 != 0) {
        t2 = (*(u16 *)(arg0 + 0xA) | 0x4000);
        *(u16 *)(arg0 + 0xA) = t2;
    }
    if (*(s32 *)(arg0 + 0x2C) != 0) {
        t3 = (*(u16 *)(arg0 + 0x8) | 0x4000);
        *(u16 *)(arg0 + 0x8) = t3;
    }
    t4 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    v1 = func_ov015_021621dc(t4, arg1, r2);
    if (v1 == 0)
        return v1;
    t5 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    t6 = *(s32 *)(((u8 *)local));
    v2 = func_ov015_021624cc(t5, t6);
    return v2;
}

extern "C" asm void func_ov018_02165e14(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r6, =gSprButtonCtrl
    mov r5, r0
    ldr r0, [r6]
    mov r2, #0
    mov r4, r1
    bl func_ov015_02162750
    cmp r0, #2
    bne @L_02165e48
    ldr r0, [r6]
    bl func_ov015_021629c8
    ldr r1, =data_ov018_02167200
    str r0, [r1, #4]
@L_02165e48:
    mov r0, #0
    str r0, [r5, #0x28]
    str r0, [r5, #0x2c]
    ldrh r0, [r4, #4]
    cmp r0, #1
    bne @L_02165ec8
    ldrh r0, [r4]
    strh r0, [r5, #0xc]
    ldrh r0, [r4, #2]
    strh r0, [r5, #0xe]
    ldrh r0, [r4, #4]
    strh r0, [r5, #0x10]
    ldrh r0, [r4, #6]
    strh r0, [r5, #0x12]
    ldrh r0, [r4, #6]
    cmp r0, #0
    ldreq r0, [r5, #0x24]
    cmpeq r0, #0
    bne @L_02165ebc
    ldrh r4, [r5, #0xc]
    ldrh r3, [r5, #0xe]
    ldrh r2, [r5, #0x10]
    ldrh r1, [r5, #0x12]
    mov r0, #1
    strh r4, [r5, #0x14]
    strh r3, [r5, #0x16]
    strh r2, [r5, #0x18]
    strh r1, [r5, #0x1a]
    str r0, [r5, #0x28]
@L_02165ebc:
    mov r0, #1
    str r0, [r5, #0x24]
    ldmia sp!, {r4, r5, r6, pc}
@L_02165ec8:
    ldr r0, [r5, #0x24]
    cmp r0, #0
    beq @L_02165efc
    ldrh r4, [r5, #0xc]
    ldrh r3, [r5, #0xe]
    ldrh r2, [r5, #0x10]
    ldrh r1, [r5, #0x12]
    mov r0, #1
    strh r4, [r5, #0x1c]
    strh r3, [r5, #0x1e]
    strh r2, [r5, #0x20]
    strh r1, [r5, #0x22]
    str r0, [r5, #0x2c]
@L_02165efc:
    mov r0, #0
    str r0, [r5, #0x24]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov018_02165f10(u8 *arg0)
{
    MI_CpuFill8((s32)(arg0 + 0xF4), 0, 0x30);
    *(s32 *)(arg0 + 0x124) = 0;
    s32 t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02161f84(t0);
    *(s32 *)(arg0 + 0x134) = 0;
    *(s32 *)(arg0 + 0x12C) = 0;
    *(u8 *)(arg0 + 0x138) = 3;
    *(u8 *)(arg0 + 0x130) = 3;
    s32 t2 = (*(u8 *)(((u8 *)&gGameState) + 0x9B6) % 2);
    *(u8 *)(arg0 + 0x54) = t2;
    s32 t3 = (*(u8 *)(((u8 *)&gGameState) + 0x9B7) % 2);
    *(u8 *)(arg0 + 0x55) = t3;
    *(s32 *)(arg0 + 0x4C) = (t2 & 0xFF);
    *(s32 *)(arg0 + 0x30) = 0;
    return t3;
}

extern "C" void func_ov018_02165f94(s32 arg0)
{
    Archive_RequestNewRead((s32)data_ov018_021671cc, (arg0 + 0xE8));
}

extern "C" void func_ov018_02165fb0(u8 *arg0)
{
    s32 v = *(s32 *)(arg0 + 0xE8);
    s32 a;
    P02165fb0 *e;
    if (v == 0)
        return;
    a = ((s32 *)data_ov018_02167044)[8];
    e = (P02165fb0 *)data_ov018_02167064;
    if (a == 0)
        return;
    do {
        ((void (*)(s32, u8 *, s32))Archive_ReadFromSFP)(a, arg0 + 0xF4 + e->b * 0xC, v);
        e++;
        a = e->a;
    } while (a != 0);
}

extern "C" void func_ov018_02166004(P02166004 *arg0, s32 arg1)
{
    ((void (*)(E02166004 *, s32))Archive_Close)(&arg0->arr[arg1], 1);
    ((void (*)(E02166004 *))Archive_Deallocate)(&arg0->arr[arg1]);
    arg0->arr[arg1].a = 0;
    arg0->arr[arg1].b = 0;
    arg0->arr[arg1].c = 0;
    arg0->arr[arg1].d = 0;
    arg0->arr[arg1].e = 0;
}

extern "C" s32 func_ov018_0216604c(P0216604c *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5)
{
    s32 v = arg0->arr[arg1].a;
    if (v == 0)
        return arg2;
    arg2 = ((s32 (*)(s32, s32, s32))Graphics_SetupScreen_2)(v, arg2 + 1, arg3);
    if (arg5 != 0)
        *arg5 = ((s32 (*)(s32, s32, s32))Graphics_LoadBGXCharSub)(arg4, v, *arg5);
    if (arg3 >= 0)
        ((void (*)(s32, s32, s32))Graphics_LoadTempPaletteFromPac)(v, 0x1, arg3);
    return arg2;
}

extern "C" asm void func_ov018_021660c4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r9, r0
    bl G2S_GetBG2CharPtr
    mov r7, #0x20
    mov r8, #0
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r7
    bl DC_FlushRange
    mov r6, #2
    str r7, [sp, #8]
    mov r4, #3
    str r6, [sp]
    add r5, sp, #8
    mov r0, r9
    mov r1, r4
    mov r2, r8
    mov r3, r6
    str r5, [sp, #4]
    bl func_ov018_0216604c
    mov r3, r4
    mov r4, #1
    str r6, [sp]
    mov r2, r0
    mov r0, r9
    mov r1, r4
    str r5, [sp, #4]
    bl func_ov018_0216604c
    bl G2S_GetBG1CharPtr
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r7
    bl DC_FlushRange
    str r7, [sp, #8]
    mov r0, r9
    mov r1, r6
    mov r3, r6
    mov r2, r8
    stmia sp, {r4, r5}
    bl func_ov018_0216604c
    bl G2S_GetBG0CharPtr
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG0CharPtr
    mov r1, r7
    bl DC_FlushRange
    str r7, [sp, #8]
    str r8, [sp]
    mov r0, r9
    mov r3, r4
    mov r1, r8
    mov r2, r8
    str r5, [sp, #4]
    bl func_ov018_0216604c
    bl Graphics_LoadBGPaletteSub
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov018_021661cc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r1, =gSprButtonCtrl
    mov r10, r0
    ldr r0, [r1]
    mov r1, #0xc8
    bl func_ov015_02162420
    mov r9, #0
    mov r11, #0x38
    mov r8, r9
    mov r7, #0x100
    mov r6, #0x20
    mov r5, #0x190
    mov r4, r11
    b @L_02166280
@L_02166208:
    add r0, r9, r9, lsr #31
    mov r0, r0, asr #1
    mul r1, r0, r11
    str r9, [sp]
    str r9, [sp, #4]
    str r8, [sp, #8]
    add r0, r1, #0x40
    str r8, [sp, #0xc]
    str r0, [sp, #0x10]
    str r7, [sp, #0x14]
    str r6, [sp, #0x18]
    mov r0, r10
    mov r2, #2
    mov r3, r9
    add r1, r9, #1
    str r5, [sp, #0x1c]
    bl func_ov018_02166b8c
    mov r2, r9, lsr #0x1f
    rsb r1, r2, r9, lsl #31
    add r1, r2, r1, ror #31
    add r2, r9, r9, lsr #31
    mov r2, r2, asr #1
    mul r3, r2, r4
    mov r1, r1, lsl #7
    add r2, r3, #0x40
    add r1, r1, #8
    mov r3, #0x70
    str r6, [sp]
    bl func_ov015_02161c78
    add r9, r9, #1
@L_02166280:
    cmp r9, #3
    ble @L_02166208
    mov r8, #1
    str r8, [sp]
    mov r3, #0
    ldr r9, =data_ov018_02167044
    stmib sp, {r3, r8}
    ldr r0, [r9]
    mov r6, #5
    str r0, [sp, #0xc]
    ldr r1, [r9, #4]
    mov r0, r10
    str r1, [sp, #0x10]
    ldr r2, [r9, #0x10]
    mov r1, r6
    str r2, [sp, #0x14]
    ldr r4, [r9, #0x14]
    mov r2, r8
    str r4, [sp, #0x18]
    mov r7, #0x190
    str r7, [sp, #0x1c]
    bl func_ov018_02166b8c
    mov r0, #3
    mov r5, #2
    stmia sp, {r0, r5}
    str r5, [sp, #8]
    ldr r0, [r9, #0x18]
    mov r4, #7
    str r0, [sp, #0xc]
    ldr r1, [r9, #0x1c]
    mov r0, r10
    str r1, [sp, #0x10]
    ldr r2, [r9, #8]
    mov r1, r4
    str r2, [sp, #0x14]
    ldr r3, [r9, #0xc]
    mov r2, r8
    str r3, [sp, #0x18]
    str r7, [sp, #0x1c]
    mov r3, r5
    bl func_ov018_02166b8c
    str r6, [sp]
    mov r3, #4
    stmib sp, {r3, r8}
    ldr r1, [r9]
    mov r6, #6
    str r1, [sp, #0xc]
    ldr r1, [r9, #4]
    mov r0, r10
    str r1, [sp, #0x10]
    ldr r2, [r9, #0x10]
    mov r1, r6
    str r2, [sp, #0x14]
    ldr r11, [r9, #0x14]
    mov r2, r8
    str r11, [sp, #0x18]
    str r7, [sp, #0x1c]
    bl func_ov018_02166b8c
    stmia sp, {r4, r6}
    str r5, [sp, #8]
    ldr r4, [r9, #0x18]
    mov r0, r10
    str r4, [sp, #0xc]
    ldr r4, [r9, #0x1c]
    mov r2, r8
    str r4, [sp, #0x10]
    ldr r4, [r9, #8]
    mov r3, r6
    str r4, [sp, #0x14]
    ldr r4, [r9, #0xc]
    mov r1, #8
    str r4, [sp, #0x18]
    str r7, [sp, #0x1c]
    bl func_ov018_02166b8c
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

#pragma push
#pragma optimization_level 2
extern "C" s32 func_ov018_021663b8(s32 arg0)
{
    s32 r4;
    s32 v1;
    s32 t0;
    r4 = arg0;
    arg0 = 0;
    while (arg0 < 1) {
        arg0 = (arg0 + 1);
    }
    arg0 = 0;
    while (arg0 < 4) {
        arg0 = (arg0 + 1);
    }
    t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02161fdc(t0);
    v1 = ((s32 (*)(...))func_ov018_02166004)((P02166004 *)r4, 0);
    return v1;
}
#pragma pop

extern "C" char *func_ov018_02166408(u8 *arg0)
{
    u8 t0 = *(u8 *)(arg0 + 0x55);
    *(u8 *)(((u8 *)&gGameState) + 0x9B7) = t0;
    return (char *)((u8 *)&gGameState);
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov018_0216641c(u8 *arg0)
{
    u16 i;
    i = 1;
    for (; i <= 4; i++)
        ((s32 (*)(...))func_ov015_02161c98)(((s32 (*)(...))func_ov015_02161dd4)(*((s32 *)gSprButtonCtrl), i), 0x12C);
    ((s32 (*)(...))func_ov018_02166904)(arg0, arg0[0x54] + 1);
    *(u16 *)(arg0 + 0x56) = 0xF0;
    *(void **)data_ov069_02170720 = data_ov018_021671f0;
}
#pragma pop

extern "C" asm void func_ov018_02166490(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r1, [r5, #0x30]
    mov r6, #1
    cmp r1, #6
    mov r4, #0
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    b @L_021664cc
    b @L_021664f0
    b @L_02166530
    b @L_02166558
    b @L_02166584
    b @L_02166598
    b @L_021665bc
@L_021664cc:
    ldr r0, [r5, #4]
    bl _ZN13ScreenManager14GetCurSceneSubEv
    cmp r0, #0x6a
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5, #4]
    bl _ZN13ScreenManager15GetCurSceneMainEv
    cmp r0, #0x6a
    streq r6, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_021664f0:
    ldr r0, [r5, #4]
    bl _ZN13ScreenManager14GetCurSceneSubEv
    cmp r0, #0x6a
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5, #4]
    bl _ZN13ScreenManager15GetCurSceneMainEv
    cmp r0, #0x6a
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r5
    mov r1, #6
    bl func_ov018_0216666c
    mov r0, r5
    bl func_ov018_02165f94
    mov r0, #2
    str r0, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166530:
    add r0, r5, #0xe8
    mov r1, r6
    bl Archive_TryFinalize
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl func_ov018_02165fb0
    mov r0, #3
    str r0, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166558:
    bl func_ov018_021660c4
    mov r0, r5
    bl func_ov018_021661cc
    mov r0, r5
    bl func_ov018_0216641c
    mov r0, r6
    mov r1, #8
    bl Graphics_FadeInScreen
    mov r0, #4
    str r0, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166584:
    ldr r1, [r5, #0x4c]
    bl func_ov018_021666c8
    mov r0, r5
    bl func_ov018_021667b0
    ldmia sp!, {r4, r5, r6, pc}
@L_02166598:
    mov r0, r6
    bl Graphics_IsScreenFading
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl func_ov018_021663b8
    mov r0, #6
    str r0, [r5, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
@L_021665bc:
    ldr r1, =data_ov069_02170720
    ldr r1, [r1, #8]
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r3, [r5, #0x54]
    ldr r2, =gGameState
    mov r1, #4
    strb r3, [r2, #0x9b6]
    bl func_ov018_0216666c
    ldr r5, [r5, #4]
    mov r1, r4
    mov r0, r5
    bl _ZN13ScreenManager8PopSceneEi
    mov r0, r5
    mov r1, r6
    bl _ZN13ScreenManager8PopSceneEi
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov018_02166608(u8 *arg0)
{
    s32 v4;
    if ((*(s32 *)(arg0 + 0x30) != 4 && *(s32 *)(arg0 + 0x30) != 5))
        return *(s32 *)(arg0 + 0x30);
    MIi_CpuClearFast(0, (s32)gSubScreen1, 0x600);
    MIi_CpuClearFast(0, (s32)gSubScreen2, 0x600);
    func_ov018_02166eb0((s32)arg0);
    func_ov018_02166d30((s32)arg0);
    v4 = ((s32 (*)(...))func_ov018_02166ff8)((s32)arg0);
    return v4;
}

extern "C" s32 func_ov018_0216666c(u8 *arg0, s32 arg1)
{
    s32 r4;
    s32 v1;
    u8 *t0;
    s32 t1;
    s32 t2;
    s32 t3;
    t0 = *(u8 * *)(arg0 + 0x4);
    t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x28);
    ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x28))(t0, 1, t1);
    v1 = func_ov015_02135440(arg1);
    arg0 = (u8 *)v1;
    r4 = arg1;
    if (r4 != 4) {
        if (r4 == 6) {
            t2 = (*(u16 *)(((u8 *)0x4000304)) | 0x8000);
            *(u16 *)(((u8 *)0x4000304)) = t2;
            arg0 = (u8 *)t2;
        }
        return (s32)arg0;
    } else {
        t3 = (*(u16 *)(((u8 *)0x4000304)) & -0x8001);
        *(u16 *)(((u8 *)0x4000304)) = t3;
        return t3;
    }
}

extern "C" asm void func_ov018_021666c8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    ldr r2, =gKeysRepeated
    mov r5, r0
    ldrh r0, [r2]
    ldrh r3, [r5, #8]
    ldrh r2, [r5, #0x56]
    orr r0, r3, r0
    tst r0, r2
    addeq sp, sp, #0x10
    ldmeqia sp!, {r3, r4, r5, pc}
    add r3, sp, #0
    mov r2, #0
    str r2, [r3]
    str r2, [r3, #4]
    str r2, [r3, #8]
    str r2, [r3, #0xc]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_02166768
    b @L_02166768
    b @L_0216672c
    b @L_02166738
    b @L_02166744
    b @L_02166750
@L_0216672c:
    mov r2, #3
    mov r1, #2
    b @L_02166758
@L_02166738:
    mov r2, #4
    mov r1, #1
    b @L_02166758
@L_02166744:
    mov r2, #1
    mov r1, #4
    b @L_02166758
@L_02166750:
    mov r2, #2
    mov r1, #3
@L_02166758:
    str r2, [sp]
    str r2, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
@L_02166768:
    tst r0, #0x40
    ldrne r4, [sp]
    tst r0, #0x80
    ldrne r4, [sp, #4]
    tst r0, #0x20
    ldrne r4, [sp, #8]
    tst r0, #0x10
    ldrne r4, [sp, #0xc]
    ldr r0, =gAudioPlayer
    mov r1, #3
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r5
    mov r1, r4
    bl func_ov018_02166904
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov018_021667b0(u8 *arg0)
{
    u8 *r4;
    s32 t0;
    *(s32 *)(arg0 + 0x50) = -1;
    t0 = *(s32 *)(gSprButtonCtrl);
    func_ov015_02162494(t0, 1);
    r4 = arg0;
    if (*(s32 *)(data_ov018_02167200 + 0x4) < 0) {
        func_ov018_02166824((s32)r4);
    }
    func_ov018_02166ac0((s32)r4);
    func_ov018_02166b2c((s32)r4);
    func_ov018_02166838((s32)r4);
    *(s32 *)(data_ov018_02167200 + 0x4) = -1;
    *(u16 *)(r4 + 0x8) = 0;
    *(u16 *)(r4 + 0xA) = 0;
    return 0;
}

extern "C" asm s32 func_ov018_02166824(...)
{
    ldr r0, =data_ov018_02167200
    ldr r0, [r0]
    cmp r0, #1
    bx lr
}

extern "C" asm s32 func_ov018_02166838(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldrh r2, [r4, #8]
    ldr r1, =data_ov018_02167200
    cmp r2, #1
    ldr r5, [r1, #4]
    bne @L_02166858
    bl func_ov018_02166a58
@L_02166858:
    cmp r5, #1
    blt @L_02166880
    cmp r5, #4
    bgt @L_02166880
    mov r0, r4
    mov r1, r5
    bl func_ov018_02166904
    mov r0, r4
    mov r1, r5
    bl func_ov018_02166918
@L_02166880:
    cmp r5, #8
    addls pc, pc, r5, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_021668b0
    b @L_021668b0
    b @L_021668c8
    b @L_021668c8
@L_021668b0:
    ldr r1, [r4, #0x4c]
    mov r0, r4
    bl func_ov018_02166918
    mov r0, r4
    bl func_ov018_02166a58
    ldmia sp!, {r3, r4, r5, pc}
@L_021668c8:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r5, #1
    mov r0, r5
    mov r1, #8
    bl Graphics_FadeScreenBlack
    ldr r0, =data_ov069_02170720
    mov r1, #5
    str r5, [r0, #4]
    str r1, [r4, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov018_02166904(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4C) = arg1;
    *(s32 *)(data_ov018_02167200) = arg1;
}

extern "C" void func_ov018_02166918(s32 arg0, s32 arg1)
{
    if (arg1 < 1)
        return;
    if (arg1 > 4)
        return;
    _ZN12SoundManager9PlaySoundEi((s32)gAudioPlayer, 1);
    func_ov018_02166a58(arg0);
}

extern "C" asm void func_ov018_0216694c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r9, #0
    mov r10, r0
    mov r11, r9
    mov r6, #1
    mov r5, #2
    ldr r4, =gSprButtonCtrl
    b @L_02166a44
@L_02166970:
    cmp r9, #0
    bne @L_02166998
    ldrb r1, [r10, #0x54]
    add r0, r1, #1
    mov r0, r0, lsl #0x10
    cmp r1, #0
    mov r7, r0, lsr #0x10
    moveq r0, r6
    movne r0, r11
    b @L_021669b4
@L_02166998:
    ldrb r1, [r10, #0x55]
    add r0, r1, #3
    mov r0, r0, lsl #0x10
    cmp r1, #0
    mov r7, r0, lsr #0x10
    moveq r0, #3
    movne r0, #2
@L_021669b4:
    and r8, r0, #0xff
    ldr r0, [r4]
    mov r1, r7
    bl func_ov015_02161dd4
    ldrh r1, [r0, #0x32]
    cmp r1, #0xc8
    addlo sp, sp, #0x14
    ldmloia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r2, r10, r7, lsl #4
    ldr r7, [r2, #0x60]
    mov r1, #1
    mov r3, r7, asr #2
    add r3, r7, r3, lsr #29
    mov r3, r3, asr #3
    str r3, [sp]
    ldr r7, [r2, #0x64]
    mov r3, r7, asr #2
    add r3, r7, r3, lsr #29
    mov r3, r3, asr #3
    stmib sp, {r3, r5}
    ldrb r3, [r0, #0xe]
    add r0, r0, r3, lsl #2
    ldrb r3, [r0, #0x3a]
    mov r0, r10
    str r3, [sp, #0xc]
    str r8, [sp, #0x10]
    ldr r3, [r2, #0x58]
    ldr r7, [r2, #0x5c]
    mov r2, r3, asr #2
    add r2, r3, r2, lsr #29
    mov r3, r7, asr #2
    add r3, r7, r3, lsr #29
    mov r2, r2, asr #3
    mov r3, r3, asr #3
    bl func_ov018_02166fa8
    add r9, r9, #1
@L_02166a44:
    cmp r9, #2
    blt @L_02166970
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov018_02166a58(...)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0, #0x4c]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    b @L_02166a80
    b @L_02166a94
    b @L_02166aa8
    b @L_02166ab4
@L_02166a80:
    mov r1, #0
    strb r1, [r0, #0x54]
    mov r0, #2
    bl func_020412f0
    ldmia sp!, {r3, pc}
@L_02166a94:
    mov r1, #1
    strb r1, [r0, #0x54]
    mov r0, #7
    bl func_020412f0
    ldmia sp!, {r3, pc}
@L_02166aa8:
    mov r1, #0
    strb r1, [r0, #0x55]
    ldmia sp!, {r3, pc}
@L_02166ab4:
    mov r1, #1
    strb r1, [r0, #0x55]
    ldmia sp!, {r3, pc}
}

extern "C" asm s32 func_ov018_02166ac0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r7, #5
    mov r6, #0
    ldr r5, =gSprButtonCtrl
    b @L_02166af8
@L_02166ad8:
    ldr r0, [r5]
    mov r1, r7
    bl func_ov015_02161dd4
    mov r1, r6
    bl func_ov015_02161c98
    add r0, r7, #1
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
@L_02166af8:
    cmp r7, #6
    bls @L_02166ad8
    mov r1, #1
    ldr r0, =gSprButtonCtrl
    str r1, [r4, #0x128]
    ldr r0, [r0]
    mov r1, #6
    mov r4, #0x12c
    bl func_ov015_02161dd4
    mov r1, r4
    bl func_ov015_02161c98
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov018_02166b2c(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #7
    mov r5, #0
    ldr r4, =gSprButtonCtrl
    b @L_02166b60
@L_02166b40:
    ldr r0, [r4]
    mov r1, r6
    bl func_ov015_02161dd4
    mov r1, r5
    bl func_ov015_02161c98
    add r0, r6, #1
    mov r0, r0, lsl #0x10
    mov r6, r0, lsr #0x10
@L_02166b60:
    cmp r6, #8
    bls @L_02166b40
    ldr r0, =gSprButtonCtrl
    mov r1, #8
    ldr r0, [r0]
    mov r4, #0x12c
    bl func_ov015_02161dd4
    mov r1, r4
    bl func_ov015_02161c98
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov018_02166b8c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11)
{
    s32 v0;
    s32 t0;
    t0 = *(s32 *)(gSprButtonCtrl);
    v0 = func_ov015_02162f70(t0, 1, ((u32)(arg1 << 0x10) >> 0x10), arg7, arg8, arg9, arg10, arg11);
    func_ov015_02161c90(v0, ((u32)(arg6 << 0x10) >> 0x10));
    func_ov015_02161d24((v0 + 0x3A), arg2, arg3, 0);
    func_ov015_02161d24((v0 + 0x3E), arg2, arg4, 0);
    func_ov015_02161d24((v0 + 0x42), arg2, arg5, 0);
    func_ov015_02161d00((v0 + 0x3A), 1, 1, 0);
    func_ov015_02161d00((v0 + 0x3E), 1, 1, 0);
    func_ov015_02161d00((v0 + 0x42), 1, 1, 0);
    *(s32 *)(((u8 *)v0) + 0x1C) = (s32)func_ov018_02166cf0;
    *(s32 *)(((u8 *)v0) + 0x20) = (s32)func_ov018_02166ce4;
    *(s32 *)(((u8 *)v0) + 0x24) = (s32)func_ov018_02166d0c;
    *(s32 *)(((u8 *)v0) + 0x28) = (s32)func_ov018_02166d18;
    func_ov015_02161c98(v0, 0x12C);
    *(s32 *)(((u8 *)(arg0 + (arg1 << 4))) + 0x58) = arg7;
    *(s32 *)(((u8 *)(arg0 + (arg1 << 4))) + 0x5C) = arg8;
    *(s32 *)(((u8 *)(arg0 + (arg1 << 4))) + 0x60) = arg9;
    *(s32 *)(((u8 *)(arg0 + (arg1 << 4))) + 0x64) = arg10;
    return v0;
}

extern "C" void func_ov018_02166ce4(u8 *arg0)
{
    *(u8 *)(arg0 + 0xE) = 0;
}

extern "C" void func_ov018_02166cf0(u8 *arg0)
{
    *(s32 *)(data_ov018_02167200) = *(u16 *)(arg0 + 0x8);
    *(u8 *)(arg0 + 0xE) = 1;
}

extern "C" void func_ov018_02166d0c(u8 *arg0)
{
    *(u8 *)(arg0 + 0xE) = 2;
}

extern "C" char *func_ov018_02166d18(u8 *arg0)
{
    *(s32 *)(data_ov018_02167200 + 0x4) = *(u16 *)(arg0 + 0x8);
    *(s32 *)(data_ov018_02167200) = *(u16 *)(arg0 + 0x8);
    return data_ov018_02167200;
}

extern "C" asm s32 func_ov018_02166d30(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x24
    mov r10, r0
    bl func_ov018_0216694c
    mov r0, r10
    bl func_ov018_02166ac0
    mov r0, r10
    bl func_ov018_02166b2c
    ldr r0, =data_ov018_0216708c
    add r8, sp, #0x14
    ldmia r0, {r0, r1, r2, r3}
    stmia r8, {r0, r1, r2, r3}
    mov r9, #5
    mvn r7, #0
    mov r6, #3
    ldr r4, =data_ov018_02167200
    ldr r5, =gSprButtonCtrl
    b @L_02166e28
@L_02166d78:
    ldr r0, [r5]
    mov r1, r9
    bl func_ov015_02161dd4
    ldrh r1, [r0, #0x32]
    cmp r1, #0
    beq @L_02166e1c
    ldrb r2, [r0, #0xe]
    ldr r1, [r4]
    sub r12, r9, #5
    add r2, r0, r2, lsl #2
    ldrb r2, [r2, #0x3b]
    cmp r9, r1
    add r1, r10, r9, lsl #4
    ldreqb r2, [r0, #0x3f]
    streq r7, [r4]
    ldr lr, [r1, #0x60]
    mov r3, lr, asr #2
    add r3, lr, r3, lsr #29
    mov r3, r3, asr #3
    str r3, [sp]
    ldr lr, [r1, #0x64]
    mov r3, lr, asr #2
    add r3, lr, r3, lsr #29
    mov r3, r3, asr #3
    stmib sp, {r3, r6}
    ldrb r3, [r0, #0xe]
    add r0, r0, r3, lsl #2
    ldrb r3, [r0, #0x3a]
    mov r0, r10
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    ldr r3, [r1, #0x58]
    ldr r2, [r1, #0x5c]
    mov lr, r3, asr #2
    mov r1, r2, asr #2
    add r3, r3, lr, lsr #29
    add lr, r2, r1, lsr #29
    mov r2, r3, asr #3
    ldr r1, [r8, r12, lsl #2]
    mov r3, lr, asr #3
    bl func_ov018_02166fa8
@L_02166e1c:
    add r0, r9, #1
    mov r0, r0, lsl #0x10
    mov r9, r0, lsr #0x10
@L_02166e28:
    cmp r9, #9
    blo @L_02166d78
    ldr r0, [r10, #0x4c]
    mov r1, #2
    cmp r0, #2
    cmpne r0, #4
    mov r0, #0x10
    str r0, [sp]
    mov r0, #4
    str r0, [sp, #4]
    str r1, [sp, #8]
    mov r0, #3
    str r0, [sp, #0xc]
    mov r0, #0
    str r0, [sp, #0x10]
    ldr r3, [r10, #0x4c]
    mov r2, #0
    add r3, r10, r3, lsl #4
    ldr r5, [r3, #0x5c]
    ldr r6, [r3, #0x58]
    mov r4, r5, asr #2
    mov r3, r6, asr #2
    moveq r2, #0x10
    add r3, r6, r3, lsr #29
    add r4, r5, r4, lsr #29
    add r2, r2, r3, asr #3
    mov r0, r10
    mov r3, r4, asr #3
    bl func_ov018_02166fa8
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_ov018_02166eb0(s32 arg0)
{
    func_ov018_02166fa8(arg0, 0, 0, 0, 0x20, 0x18, 1, 0, 0);
}

extern "C" asm void func_ov018_02166ef0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r0, [sp, #0x20]
    ldr r12, [sp, #0x24]
    ldr lr, =gSubScreen0
    mul r4, r0, r12
    ldr r5, [sp, #0x30]
    ldrh r7, [sp, #0x28]
    mul r6, r5, r4
    ldr r4, [sp, #0x2c]
    mov r5, r7, lsl #0xc
    strh r5, [sp, #0x28]
    add r4, r4, r6, lsl #1
    add r1, lr, r1, lsl #11
    ldrh r6, [sp, #0x28]
    ldr r5, =0xfff
    b @L_02166f94
@L_02166f30:
    cmp r3, #0
    addlt r4, r4, r0, lsl #1
    blt @L_02166f8c
    cmp r3, #0x18
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r7, r2, r3, lsl #5
    mov r8, r2
    mov lr, r0
    add r9, r1, r7, lsl #1
    b @L_02166f84
@L_02166f58:
    cmp r8, #0
    blt @L_02166f74
    cmp r8, #0x20
    ldrlth r7, [r4]
    andlt r7, r7, r5
    orrlt r7, r7, r6
    strlth r7, [r9]
@L_02166f74:
    sub lr, lr, #1
    add r8, r8, #1
    add r4, r4, #2
    add r9, r9, #2
@L_02166f84:
    cmp lr, #0
    bgt @L_02166f58
@L_02166f8c:
    sub r12, r12, #1
    add r3, r3, #1
@L_02166f94:
    cmp r12, #0
    bgt @L_02166f30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov018_02166fa8(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    ldr lr, [sp, #0x2c]
    mov r12, #0xc
    mla r4, lr, r12, r0
    ldr r4, [r4, #0xf4]
    ldr lr, [sp, #0x20]
    ldr r12, [sp, #0x24]
    str lr, [sp]
    ldrh lr, [sp, #0x28]
    str r12, [sp, #4]
    ldr r12, [sp, #0x30]
    str lr, [sp, #8]
    ldr lr, [r4, #0xc]
    add lr, r4, lr
    str lr, [sp, #0xc]
    str r12, [sp, #0x10]
    bl func_ov018_02166ef0
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, pc}
}

extern "C" void func_ov018_02166ff8(void)
{
    GXS_LoadBG2Scr((s32)gSubScreen2, 0, 0x600);
    GXS_LoadBG1Scr((s32)gSubScreen1, 0, 0x600);
    GXS_LoadBG0Scr((s32)gSubScreen0, 0, 0x600);
}
