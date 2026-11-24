#include "ov019/Unk_ov019_02168e04.hpp"
#include "game/vcall.hpp"

extern "C" void func_ov019_02168e04(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_ov019_02168eac(void);
extern "C" s32 func_ov019_02168f14(...);
extern "C" s32 func_ov019_02169080(s32 arg0, u8 *arg1, s32 arg2);
extern "C" void func_ov019_021690d8(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_ov019_0216912c(void);
extern "C" void func_ov019_0216924c(void);
extern "C" void func_ov019_0216938c(void);
extern "C" u8 *func_ov019_02169390(u8 *arg0, s32 arg1);
extern "C" void func_ov019_021693bc(void);
extern "C" void func_ov019_021699ac(void);
extern "C" void func_ov019_02169a88(void);
extern "C" s32 func_ov019_02169b70(...);
extern "C" void func_ov019_02169d10(u8 *arg0);
extern "C" void func_ov019_02169d80(void);
extern "C" void func_ov019_02169e4c(u8 *arg0);
extern "C" s32 func_ov019_02169e64(u8 *arg0);
extern "C" void func_ov019_02169f94(void);
extern "C" void func_ov019_0216a1ec(void);
extern "C" void func_ov019_0216a1f0(void);
extern "C" s32 func_ov019_0216a26c(s32 arg0);
extern "C" void func_ov019_0216a280(void);

extern "C" char gSprAnimCtrl[];
extern "C" char gSprButtonCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gKeysRepeated[];
extern "C" char gDeltaTime[];
extern "C" char gAudioPlayer[];
extern "C" char data_020d3d20[];
extern "C" char data_020d9978[];
extern "C" char data_020e88a0[];
extern "C" char data_ov019_0216a4f0[];
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN11TreasureBox13func_02052628Eiiii(void);
extern "C" void _ZN11TreasureBox13func_020526ecEii(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN13ScreenManager12SetNextSceneEii(void);
extern "C" void _ZN13ScreenManager8PopSceneEi(void);
extern "C" s32 _ZN13ScreenManager18GetLoadedSceneMainEv(...);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" void _ZN11MatchEngine13func_02076858Ev(void);
extern "C" void _ZN11MatchEngine13func_02076868El(void);
extern "C" void _ZN11MatchEngine13func_020777e4EP11MatchPlayermmh(void);
extern "C" void _ZN11MatchEngine13func_02078ea8Ei(void);
extern "C" void _ZN11MatchEngine13func_0207b00cEv(void);
extern "C" void _ZN11MatchEngine13func_0207bfd0Eiii(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 _s32_div_f(...);
extern "C" s32 C3DPlaneCtrl_Acquire(...);
extern "C" void C3DPlaneCtrl_Release(void);
extern "C" s32 C3DPlaneCtrl_SetFlag_2(...);
extern "C" void C3DPlaneCtrl_ClearFlag_2(void);
extern "C" s32 func_0209b7b0(...);
extern "C" void func_ov000_02116530(void);
extern "C" void func_ov000_02116bf0(void);
extern "C" void func_ov000_02116c84(void);
extern "C" void func_ov000_02116d08(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void Graphics_FadeScreensBlack(void);
extern "C" void func_ov015_02132c08(void);
extern "C" void Archive_TryFinalize(void);
extern "C" s32 func_ov015_02135ea0(...);
extern "C" void func_ov015_02135f24(void);
extern "C" void func_ov015_02135fe0(void);
extern "C" void func_ov015_021363e8(void);
extern "C" s32 func_ov015_021616a4(...);
extern "C" void func_ov015_021616dc(void);
extern "C" void func_ov015_02161710(void);
extern "C" void func_ov015_02161760(void);
extern "C" void func_ov015_021618a0(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" s32 func_ov015_02161f84(...);
extern "C" void func_ov015_02161fdc(void);
extern "C" void func_ov015_021624f0(void);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_021629d0(void);
extern "C" void func_ov015_021630d8(void);
extern "C" void func_ov019_02165d60(void);
extern "C" void func_ov019_02165d9c(void);
extern "C" void func_ov019_02165e80(void);
extern "C" void func_ov019_0216609c(void);
extern "C" void func_ov019_021663a8(void);
extern "C" void func_ov019_021664ec(void);
extern "C" void func_ov019_021665d4(void);
extern "C" void func_ov019_02166624(void);
extern "C" void func_ov019_02166780(void);
extern "C" void func_ov019_021667e4(void);
extern "C" void func_ov019_021668fc(void);
extern "C" void func_ov019_02166a28(void);
extern "C" void func_ov019_02166ad8(void);
extern "C" void func_ov019_02167438(void);
extern "C" void func_ov019_0216747c(void);
extern "C" void func_ov019_02167594(void);
extern "C" void func_ov019_02168414(void);
extern "C" void func_ov019_0216845c(void);
extern "C" void func_ov019_0216846c(void);
extern "C" void func_ov019_02168550(void);
extern "C" void gGameState(void);

extern "C" void func_ov019_02168e04(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 n;
    if (arg1[0x6c] == 0)
        return;
    n = *(s32 *)(arg1 + 0x18);
    if (n < 0 || n > *(s32 *)(arg1 + 0x8))
        arg4 = 0;
    ((void (*)(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32))func_ov015_021618a0)(*(s32 *)gSprAnimCtrl, 0, 0, ((s32 *)(arg1 + 0x20))[arg1[0x6b]], 0, 0, arg2, arg3, arg4, 0, 0);
    ((void (*)(s32, s32, s32, s32))C3DPlaneCtrl_SetFlag_2)(*(s32 *)g3DPlaneCtrl, ((s32 *)(arg1 + 0x20))[arg1[0x6b]], 2, 1);
}

extern "C" asm void func_ov019_02168eac(void)
{
    stmdb sp!, {r3, lr}
    ldr r12, [r1, #0x10]
    cmp r12, #0
    blt @L_02168ec8
    ldr r3, [r1, #8]
    cmp r12, r3
    ble @L_02168ef4
@L_02168ec8:
    ldrb r0, [r1, #0x6c]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    ldrb r3, [r1, #0x6b]
    ldr r0, =g3DPlaneCtrl
    mov r2, #2
    add r1, r1, r3, lsl #2
    ldr r0, [r0]
    ldr r1, [r1, #0x20]
    bl C3DPlaneCtrl_ClearFlag_2
    ldmia sp!, {r3, pc}
@L_02168ef4:
    str r2, [sp]
    ldr r2, [r1, #0x10]
    add r3, r1, r2, lsl #3
    ldrsh r2, [r3, #0x6e]
    ldrsh r3, [r3, #0x70]
    bl func_ov019_02168e04
    ldmia sp!, {r3, pc}
}

extern "C" asm s32 func_ov019_02168f14(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x1c
    mov r8, r1
    ldrb r0, [r8, #0x6a]
    mov r7, r2
    mov r6, r3
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r8, #4]
    ldr r0, [r8, #8]
    mov r5, #2
    cmp r1, r0
    mov r4, #1
    bgt @L_02168fb8
    ldrb r0, [r8, #0x69]
    ldr r6, =g3DPlaneCtrl
    mov r2, r5
    add r1, r8, r0, lsl #2
    ldr r0, [r6]
    ldr r1, [r1, #0x20]
    mov r3, r4
    bl C3DPlaneCtrl_SetFlag_2
    ldrb r1, [r8, #0x69]
    ldr r0, [r6]
    mov r2, r5
    add r1, r1, #1
    add r1, r8, r1, lsl #2
    ldr r1, [r1, #0x20]
    mov r3, r4
    bl C3DPlaneCtrl_SetFlag_2
    ldrb r1, [r8, #0x69]
    ldr r0, [r6]
    mov r2, r5
    add r1, r1, #2
    add r1, r8, r1, lsl #2
    ldr r1, [r1, #0x20]
    mov r3, r4
    bl C3DPlaneCtrl_SetFlag_2
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
@L_02168fb8:
    mov r1, #0
    str r1, [sp]
    stmib sp, {r1, r7}
    ldr r0, [sp, #0x38]
    str r6, [sp, #0xc]
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    str r1, [sp, #0x18]
    ldrb r3, [r8, #0x69]
    ldr r0, =gSprAnimCtrl
    mov r2, r1
    add r3, r8, r3, lsl #2
    ldr r0, [r0]
    ldr r3, [r3, #0x20]
    bl func_ov015_021618a0
    ldrb r0, [r8, #0x69]
    ldr r9, =g3DPlaneCtrl
    mov r2, r5
    add r1, r8, r0, lsl #2
    ldr r0, [r9]
    ldr r1, [r1, #0x20]
    mov r3, r4
    bl C3DPlaneCtrl_SetFlag_2
    ldrb r1, [r8, #0x69]
    ldr r0, [r9]
    mov r2, r5
    add r1, r1, #1
    add r1, r8, r1, lsl #2
    ldr r1, [r1, #0x20]
    mov r3, r4
    bl C3DPlaneCtrl_SetFlag_2
    ldrb r1, [r8, #0x69]
    ldr r0, [r9]
    mov r2, r5
    add r1, r1, #2
    add r1, r8, r1, lsl #2
    ldr r1, [r1, #0x20]
    mov r3, r4
    bl C3DPlaneCtrl_SetFlag_2
    ldr r0, =gSprButtonCtrl
    mov r2, r7
    ldr r0, [r0]
    mov r3, r6
    mov r1, #0xb
    bl func_ov015_021630d8
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_ov019_02169080(s32 arg0, u8 *arg1, s32 arg2)
{
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s16 t4;
    t0 = (*(s16 *)(arg1 + 0xBA) * *(s32 *)(arg1 + 0xC));
    t1 = (*(s32 *)(arg1 + 0x4) - *(s32 *)(arg1 + 0x8));
    t2 = *(s32 *)(arg1 + 0x4);
    v0 = _s32_div_f(t0, t1, arg2, t2);
    t3 = (*(s16 *)(arg1 + 0xB6) + v0);
    t4 = *(s16 *)(arg1 + 0xB4);
    v1 = func_ov019_02168f14(arg0, (s32)arg1, t4, t3, arg2);
    return v1;
}

extern "C" void func_ov019_021690d8(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 t0 = *(s32 *)(g3DPlaneCtrl);
    s32 t1 = *(s32 *)(arg0 + 0xB0);
    C3DPlaneCtrl_SetFlag_2(t0, t1, 2, arg1);
    s32 t2 = *(s32 *)(g3DPlaneCtrl);
    s32 t3 = *(s32 *)(arg0 + 0xB4);
    C3DPlaneCtrl_SetFlag_2(t2, t3, 2, arg2);
    *(s32 *)(arg0 + 0x350) = (arg2 == 0 ? 0 : 1);
}

extern "C" asm void func_ov019_0216912c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r1
    mov r6, r0
    cmp r4, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =gSprButtonCtrl
    mov r1, r4, lsl #0x10
    ldr r0, [r0]
    mov r1, r1, lsr #0x10
    bl func_ov015_02161dd4
    cmp r4, #1
    blt @L_0216920c
    cmp r4, #8
    bgt @L_0216920c
    ldr r0, [r6, #0x14]
    mov r5, #0
    cmp r0, #0
    movne r5, #1
    mov r0, #0xc0
    mla r2, r5, r0, r6
    mov r0, #0
    strb r0, [r2, #0x174]
    ldr r1, [r2, #0x110]
    ldr r0, [r2, #0x11c]
    sub r4, r4, #1
    sub r0, r1, r0
    cmp r4, r0
    moveq r0, #1
    streqb r0, [r2, #0x174]
    beq @L_021691cc
    ldr r0, [r6, #0x14]
    cmp r0, #0
    bne @L_021691cc
    ldr r0, [r2, #0x114]
    sub r0, r0, #2
    cmp r1, r0
    bge @L_021691cc
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
@L_021691cc:
    mov r7, #0xc0
    mul r2, r5, r7
    add r0, r6, r2
    ldr r1, [r0, #0x11c]
    add r0, r6, #0x110
    add r0, r0, r2
    add r1, r4, r1
    bl func_ov015_02135f24
    add r0, r6, #0x110
    mla r1, r5, r7, r0
    mov r0, r6
    mov r2, #8
    bl func_ov019_02167438
    mov r0, r6
    bl func_ov019_0216747c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216920c:
    cmp r4, #0xc
    bne @L_02169228
    mov r0, r6
    mov r1, #1
    mov r2, #0
    bl func_ov019_021690d8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169228:
    cmp r4, #0xd
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, #0
    mov r2, #1
    bl func_ov019_021690d8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov019_0216924c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #0
    ldmleia sp!, {r4, r5, r6, pc}
    ldr r0, =gSprButtonCtrl
    mov r1, r4, lsl #0x10
    ldr r0, [r0]
    mov r1, r1, lsr #0x10
    bl func_ov015_02161dd4
    cmp r4, #1
    blt @L_0216934c
    cmp r4, #8
    bgt @L_0216934c
    ldr r0, [r5, #0x14]
    sub r1, r4, #1
    cmp r0, #0
    mov r4, #0
    movne r4, #1
    mov r0, #0xc0
    mla r3, r4, r0, r5
    ldr r2, [r3, #0x110]
    ldr r0, [r3, #0x11c]
    sub r0, r2, r0
    cmp r1, r0
    bne @L_021692c0
    ldrb r0, [r3, #0x174]
    cmp r0, #0
    bne @L_021692ec
@L_021692c0:
    ldr r0, [r5, #0x14]
    cmp r0, #0
    bne @L_021692ec
    mov r6, #0xc0
    mul lr, r4, r6
    add r12, r5, lr
    ldr r0, [r12, #0x114]
    ldr r3, [r12, #0x110]
    sub r2, r0, #2
    cmp r3, r2
    blt @L_02169318
@L_021692ec:
    mov r0, #0xc0
    mla r0, r4, r0, r5
    ldr r0, [r0, #0x114]
    cmp r1, r0
    ldmgeia sp!, {r4, r5, r6, pc}
    ldr r0, =gSprButtonCtrl
    mov r1, #1
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_02169318:
    cmp r1, r0
    ldmgeia sp!, {r4, r5, r6, pc}
    ldr r2, [r12, #0x11c]
    add r0, r5, #0x110
    add r0, r0, lr
    add r1, r1, r2
    bl func_ov015_02135f24
    add r0, r5, #0x110
    mla r1, r4, r6, r0
    mov r0, r5
    mov r2, #6
    bl func_ov019_02167438
    ldmia sp!, {r4, r5, r6, pc}
@L_0216934c:
    cmp r4, #0xc
    bne @L_0216936c
    ldr r0, =gSprButtonCtrl
    mov r1, #1
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_0216936c:
    cmp r4, #0xd
    ldreq r0, =gSprButtonCtrl
    moveq r1, #2
    ldreq r0, [r0]
    addeq r0, r0, #0xf00
    streqh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov019_0216938c(void)
{
}

extern "C" u8 *func_ov019_02169390(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0) = (s32)data_ov019_0216a4f0;
    *(s32 *)(arg0 + 0x4) = arg1;
    func_ov019_02169e4c(arg0);
    *(s32 *)(arg0 + 0x3C4) = 0;
    return arg0;
}

extern "C" asm void func_ov019_021693bc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    ldr r3, =gKeysRepeated
    ldr r2, =gSprAnimCtrl
    ldrh r3, [r3]
    mov r8, r1
    mov r9, r0
    orr r0, r3, r8
    mov r1, r0, lsl #0x10
    ldr r0, [r2]
    ldr r4, =gSprButtonCtrl
    mov r7, r1, lsr #0x10
    mov r5, #8
    mov r10, #1
    mov r6, #0
    bl func_ov015_02161760
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4]
    bl func_ov015_021629ac
    cmp r0, #0
    beq @L_02169438
    ldr r0, [r4]
    add r0, r0, #0xf00
    ldrh r8, [r0, #0x38]
    cmp r8, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r7, r8
    strh r6, [r0, #0x38]
@L_02169438:
    ldr r0, [r9, #0x10]
    cmp r0, #7
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r9, #0x14]
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_02169988
    b @L_02169468
    b @L_021695fc
    b @L_021695fc
    b @L_021697d8
@L_02169468:
    tst r8, #1
    beq @L_02169590
    mov r0, r9
    add r1, r9, #0x110
    bl func_ov019_02168414
    ldr r2, [r9, #0x11c]
    ldr r1, [r9, #0x110]
    ldr r0, [r9, #0xc4]
    str r2, [r9, #0x358]
    str r1, [r9, #0x354]
    cmp r1, r0
    bge @L_02169548
    mov r4, #0xc
    mla r0, r1, r4, r9
    ldrh r2, [r0, #0xcc]
    ldr r1, =0xfff
    ldr r0, =data_020e88a0
    and r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl _ZN11MatchEngine13func_02078ea8Ei
    cmp r0, #0
    beq @L_021694d8
    ldr r0, =data_020d3d20
    mov r1, #0xd4
    mov r2, #0
    bl func_0209b7b0
    b @L_021695ec
@L_021694d8:
    ldr r0, =gAudioPlayer
    mov r1, r10
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r9, #0x354]
    add r2, r9, #0xc8
    mul r1, r0, r4
    ldr r0, [r2, r1]
    add r4, r2, r1
    str r0, [r9, #0x104]
    ldrh r2, [r4, #4]
    add r1, r9, #0x100
    mov r0, r9
    strh r2, [r1, #8]
    ldrb r2, [r4, #6]
    mov r1, r10
    strb r2, [r9, #0x10a]
    ldrb r2, [r4, #7]
    strb r2, [r9, #0x10b]
    ldrb r2, [r4, #8]
    strb r2, [r9, #0x10c]
    ldrb r3, [r4, #9]
    ldrb r2, [r4, #0xa]
    strb r3, [r9, #0x10d]
    strb r2, [r9, #0x10e]
    ldrb r2, [r4, #0xb]
    strb r2, [r9, #0x10f]
@L_02169540:
    bl func_ov019_0216846c
    b @L_021695ec
@L_02169548:
    bne @L_02169564
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #2
    b @L_02169540
@L_02169564:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r2, r6
    mov r1, #0xca
    bl func_0209b7b0
    mov r0, r9
    mov r1, r6
    bl func_ov019_0216845c
    b @L_021695ec
@L_02169590:
    tst r8, #2
    beq @L_0216959c
    b @L_02169564
@L_0216959c:
    tst r7, #0x40
    beq @L_021695bc
    ldr r0, =gAudioPlayer
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x110
    sub r1, r5, #9
    b @L_021695d8
@L_021695bc:
    tst r7, #0x80
    beq @L_021695ec
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x110
    mov r1, #1
@L_021695d8:
    bl func_ov015_02135fe0
    mov r0, r9
    add r1, r9, #0x110
    mov r2, #0xe
    bl func_ov019_02167438
@L_021695ec:
    mov r0, r9
    bl func_ov019_0216747c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021695fc:
    tst r8, #1
    beq @L_0216973c
    mov r0, r9
    add r1, r9, #0x1d0
    bl func_ov019_02168414
    ldr r0, [r9, #0x14]
    cmp r0, #1
    beq @L_0216962c
    cmp r0, #2
    beq @L_02169690
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216962c:
    ldr r0, [r9, #0x1d0]
    cmp r0, #0
    beq @L_02169648
    cmp r0, #1
    beq @L_02169670
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169648:
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #3
    bl func_ov019_0216846c
    mov r0, r9
    bl func_ov019_0216609c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169670:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0
    bl func_ov019_0216846c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169690:
    ldr r0, [r9, #0x1d0]
    cmp r0, #0
    beq @L_021696b4
    cmp r0, #1
    beq @L_021696ec
    cmp r0, #2
    beq @L_0216971c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021696b4:
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r2, r6
    mov r1, #0xd0
    bl func_0209b7b0
    mov r0, r9
    mov r1, r6
    bl func_ov019_0216845c
    ldr r0, =data_020e88a0
    bl func_ov000_02116d08
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021696ec:
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r1, #0xd1
    mov r2, #0
    bl func_0209b7b0
    mov r0, r9
    mov r1, #0x88
    bl func_ov019_0216845c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216971c:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0
    bl func_ov019_0216846c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216973c:
    tst r8, #2
    beq @L_02169764
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0
    bl func_ov019_0216846c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169764:
    tst r7, #0x40
    beq @L_0216979c
    ldr r0, =gAudioPlayer
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x1d0
    sub r1, r5, #9
    bl func_ov015_02135fe0
    mov r0, r9
    add r1, r9, #0x1d0
    mov r2, #0xe
    bl func_ov019_02167438
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216979c:
    tst r7, #0x80
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x1d0
    mov r1, #1
    bl func_ov015_02135fe0
    mov r0, r9
    add r1, r9, #0x1d0
    mov r2, #0xe
    bl func_ov019_02167438
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021697d8:
    tst r8, #1
    beq @L_021698fc
    mov r0, r9
    add r1, r9, #0x290
    bl func_ov019_02168414
    ldr r0, [r9, #0x350]
    cmp r0, #0
    bne @L_021698d0
    ldr r5, =data_020e88a0
    mov r0, r5
    bl _ZN11MatchEngine13func_02076858Ev
    ldr r2, [r9, #0x110]
    mov r7, #0xc
    mla r1, r2, r7, r9
    ldrb r2, [r1, #0xd0]
    mov r3, r0
    ldr r1, [r9, #0x3c4]
    sub r0, r2, #1
    add r0, r1, r0, lsl #1
    ldrb r1, [r0, #1]
    cmp r1, r3
    bhi @L_021698a0
    mov r0, r5
    sub r1, r3, r1
    bl _ZN11MatchEngine13func_02076868El
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x100
    ldrh r2, [r0, #8]
    ldr r1, =0xfff
    ldr r0, =data_020d3d20
    and r2, r2, r1
    mov r1, #0xce
    bl func_0209b7b0
    ldr r0, [r4]
    mov r1, r7
    bl func_ov015_021624f0
    mov r0, r9
    add r1, r9, #0x290
    add r2, sp, #0
    str r6, [sp]
    bl func_ov019_02167594
    mov r0, r9
    bl func_ov019_02169d80
    mov r0, r9
    mov r1, r6
    bl func_ov019_0216845c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021698a0:
    ldr r0, =gAudioPlayer
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r1, #0xd3
    mov r2, #0
    bl func_0209b7b0
    ldr r0, [r4]
    mov r1, r7
    bl func_ov015_021624f0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021698d0:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4]
    mov r1, #0xd
    bl func_ov015_021624f0
    mov r0, r9
    mov r1, #1
    bl func_ov019_0216846c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021698fc:
    tst r8, #2
    beq @L_02169930
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4]
    mov r1, #0xd
    bl func_ov015_021624f0
    mov r0, r9
    mov r1, #1
    bl func_ov019_0216846c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169930:
    tst r7, #0x20
    bne @L_02169944
    tst r7, #0x10
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169944:
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r9, #0x350]
    add r0, r0, #1
    ands r0, r0, #1
    str r0, [r9, #0x350]
    mov r0, r9
    bne @L_0216997c
    mov r1, #1
    mov r2, #0
    bl func_ov019_021690d8
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216997c:
    mov r1, #0
    mov r2, #1
    bl func_ov019_021690d8
@L_02169988:
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov019_021699ac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =gSprAnimCtrl
    mov r7, r0
    ldr r0, [r2]
    mov r6, r1
    mov r5, #0
    bl func_ov015_02161760
    cmp r0, #0
    ldreq r0, [r7, #0x10]
    cmpeq r0, #7
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =gSprButtonCtrl
    mov r1, r6
    ldr r0, [r4]
    mov r2, r5
    bl func_ov015_02162750
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    b @L_02169a0c
    b @L_02169a24
    b @L_02169a3c
    b @L_02169a58
@L_02169a0c:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    bl func_ov019_0216912c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169a24:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    bl func_ov019_0216924c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169a3c:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    mov r2, r5
    bl func_ov019_0216938c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169a58:
    ldr r0, [r4]
    add r1, sp, #0
    bl func_ov015_021629d0
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    mov r2, #1
    bl func_ov019_0216938c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov019_02169a88(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r3, [r0, #0xc4]
    mov r2, #0
    cmp r3, #0
    ble @L_02169b38
@L_02169a9c:
    mov r1, #0xc
    mla r12, r2, r1, r0
    ldrh r1, [r12, #0xcc]
    cmp r1, #0
    bne @L_02169b28
    add r5, r2, #1
    cmp r5, r3
    bge @L_02169b28
    mov lr, #0xc
@L_02169ac0:
    mla r1, r5, lr, r0
    ldrh r4, [r1, #0xcc]
    cmp r4, #0
    beq @L_02169b1c
    ldr r4, [r1, #0xc8]
    mov r3, #0
    str r4, [r12, #0xc8]
    ldrh r4, [r1, #0xcc]
    strh r4, [r12, #0xcc]
    ldrb r4, [r1, #0xce]
    strb r4, [r12, #0xce]
    ldrb r4, [r1, #0xcf]
    strb r4, [r12, #0xcf]
    ldrb r4, [r1, #0xd0]
    strb r4, [r12, #0xd0]
    ldrb r4, [r1, #0xd1]
    ldrb lr, [r1, #0xd2]
    strb r4, [r12, #0xd1]
    strb lr, [r12, #0xd2]
    ldrb lr, [r1, #0xd3]
    strb lr, [r12, #0xd3]
    strh r3, [r1, #0xcc]
    b @L_02169b28
@L_02169b1c:
    add r5, r5, #1
    cmp r5, r3
    blt @L_02169ac0
@L_02169b28:
    ldr r3, [r0, #0xc4]
    add r2, r2, #1
    cmp r2, r3
    blt @L_02169a9c
@L_02169b38:
    mov r4, #0
    mov r5, r4
    cmp r3, #0
    ble @L_02169b68
    mov r1, #0xc
@L_02169b4c:
    mla r2, r5, r1, r0
    ldrh r2, [r2, #0xcc]
    add r5, r5, #1
    cmp r2, #0
    addne r4, r4, #1
    cmp r5, r3
    blt @L_02169b4c
@L_02169b68:
    str r4, [r0, #0xc4]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov019_02169b70(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r4, =data_020e88a0
    mov r10, r0
    mov r0, r4
    mov r1, #0
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r5, r0
    mov r0, r4
    mov r1, #1
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrh r1, [r5, #0x28]
    mov r8, r0
    ldr r0, =gGameState
    cmp r1, #0
    ldreqh r1, [r5, #0x26]
    strh r1, [r8, #0x28]
    ldrh r1, [r5, #0x30]
    strh r1, [r8, #0x30]
    ldrb r1, [r5, #0x2c]
    strb r1, [r8, #0x2c]
    ldrb r1, [r0, #0x5e4]
    str r1, [r10, #0xc0]
    ldrb r0, [r0, #0x5e5]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl func_ov019_02169e4c
    ldr r4, =data_020e88a0
    add r1, r10, #0xc8
    mov r0, r4
    bl func_ov000_02116bf0
    ands r7, r0, #0xff
    bne @L_02169c30
    ldr r3, [r10, #0xc0]
    mov r0, r4
    add r1, r10, #0xc8
    mov r2, #5
    bl func_ov000_02116530
    and r7, r0, #0xff
    mov r0, r4
    mov r2, r7
    add r1, r10, #0xc8
    bl func_ov000_02116c84
@L_02169c30:
    mov r9, #0
    str r7, [r10, #0xc4]
    add r6, r10, #0xcc
    mov r5, r9
    mov r4, #1
    ldr r11, =data_020e88a0
    b @L_02169cdc
@L_02169c4c:
    mov r0, #0xc
    mul r3, r9, r0
    ldrh r2, [r6, r3]
    mov r0, r11
    mov r1, r4
    orr r2, r2, #0x8000
    strh r2, [r6, r3]
    str r5, [sp]
    stmib sp, {r4, r5}
    add r2, r10, r3
    ldrh r12, [r2, #0xcc]
    ldr r2, =0xfff
    mov r3, r5
    and r2, r12, r2
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl _ZN11MatchEngine13func_0207b00cEv
    cmp r0, #0
    mov r0, #0xc
    mlane r1, r9, r0, r10
    subne r0, r7, #1
    strneh r5, [r1, #0xcc]
    andne r7, r0, #0xff
    bne @L_02169cd8
    mla r0, r9, r0, r10
    ldrh r0, [r0, #0xcc]
    mov r1, r5
    bl func_ov015_02130b14
    movs r1, r0
    beq @L_02169cd8
    str r4, [sp]
    ldrh r2, [r8, #0x30]
    mov r0, r11
    mov r3, r5
    bl _ZN11MatchEngine13func_020777e4EP11MatchPlayermmh
@L_02169cd8:
    add r9, r9, #1
@L_02169cdc:
    ldr r0, [r10, #0xc4]
    cmp r9, r0
    blt @L_02169c4c
    cmp r0, r7
    addle sp, sp, #0xc
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl func_ov019_02169a88
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov019_02169d10(u8 *arg0)
{
    u8 *d;
    s32 i;
    s32 k;
    s32 w;
    s32 m;
    i = 0;
    d = (u8 *)data_020e88a0;
    k = 1;
    w = 0xC;
    m = 0xFFF;
    for (; i < *(s32 *)(arg0 + 0xC4); i++)
        ((void (*)(void *, s32, u16, s32))_ZN11MatchEngine13func_0207bfd0Eiii)(d, k, *(u16 *)(arg0 + i * w + 0xCC) & m, k);
    *(u8 *)((u8 *)gGameState + 0x5E5) = 0;
}
#pragma pop

extern "C" asm void func_ov019_02169d80(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r6, r0
    ldr r1, [r6, #0x110]
    mov r0, #0xc
    mla r0, r1, r0, r6
    ldrh r4, [r0, #0xcc]
    mov r1, #1
    rsb r0, r1, #0x1000
    and r0, r4, r0
    mov r2, r0, lsl #0x10
    ldr r0, =data_020e88a0
    mov r3, r1
    mov r2, r2, lsr #0x10
    mov r5, #0
    bl _ZN11MatchEngine13func_0207bfd0Eiii
    ldr r7, [r6, #0xc4]
    mov r3, r5
    cmp r7, #0
    ble @L_02169dfc
    mov r0, #0xc
@L_02169dd4:
    mla r2, r3, r0, r6
    ldrh r1, [r2, #0xcc]
    cmp r4, r1
    ldreq r5, [r2, #0xc8]
    moveq r0, #0
    streqh r0, [r2, #0xcc]
    beq @L_02169dfc
    add r3, r3, #1
    cmp r3, r7
    blt @L_02169dd4
@L_02169dfc:
    mov r0, r6
    bl func_ov019_02169a88
    ldr r8, =data_020d9978
    mov r7, #9
    mov r6, #1
    mov r0, r8
    mov r1, r7
    mov r2, r6
    bl _ZN11TreasureBox13func_020526ecEii
    mov r4, #0
    mov r0, r8
    mov r1, r7
    mov r2, r6
    mov r3, r5
    str r4, [sp]
    bl _ZN11TreasureBox13func_02052628Eiiii
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov019_02169e4c(u8 *arg0)
{
    *(s32 *)(arg0 + 0xC4) = 0;
    *(s32 *)(arg0 + 0x358) = (0 - 1);
    *(s32 *)(arg0 + 0x354) = (0 - 1);
}

extern "C" s32 func_ov019_02169e64(u8 *arg0)
{
    s32 v5;
    s32 v15;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t4;
    s32 t5;
    t0 = ((u32)(*(s32 *)(((u8 *)0x4000000)) & 0x1F00) >> 8);
    *(s32 *)(arg0 + 0x35C) = t0;
    t1 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02161f84(t1, t0);
    t2 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    func_ov015_021616a4(t2);
    ((VCall *)arg0)->f17();
    func_ov019_02169b70((s32)arg0);
    func_ov015_02135ea0((s32)(arg0 + 0xB8), 5);
    t4 = *(s32 *)(arg0 + 0x4);
    v5 = _ZN13ScreenManager18GetLoadedSceneMainEv(t4);
    *(s32 *)(arg0 + 0x8) = v5;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x14) = 0;
    MI_CpuFill8((s32)(arg0 + 0x378), 0, 0x48);
    MI_CpuFill8((s32)(arg0 + 0x18), 0, 0x24);
    MI_CpuFill8((s32)(arg0 + 0x3C), 0, 0x58);
    MI_CpuFill8((s32)(arg0 + 0x94), 0, 8);
    MI_CpuFill8((s32)(arg0 + 0xA8), 0, 4);
    MI_CpuFill8((s32)(arg0 + 0xB0), 0, 8);
    MI_CpuFill8((s32)(arg0 + 0x9C), 0, 0xC);
    *(s32 *)(arg0 + 0xAC) = 0;
    MI_CpuFill8((s32)(arg0 + 0x110), 0, 0x240);
    *(s32 *)(arg0 + 0x350) = 0;
    t5 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    C3DPlaneCtrl_Acquire(t5);
    v15 = func_0209b7b0((s32)((u8 *)&data_020d3d20), 0xC8, 0);
    return v15;
}

extern "C" asm void func_ov019_02169f94(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x10]
    cmp r1, #9
    addls pc, pc, r1, lsl #2
    b @L_0216a1c8
    b @L_02169fd4
    b @L_02169fe8
    b @L_0216a028
    b @L_0216a058
    b @L_0216a074
    b @L_0216a0f0
    b @L_0216a09c
    b @L_0216a1c8
    b @L_0216a0fc
    b @L_0216a140
@L_02169fd4:
    bl func_ov019_02165d60
    mov r0, r4
    bl func_ov019_02165d9c
    mov r0, #1
    str r0, [r4, #0x10]
@L_02169fe8:
    add r0, r4, #0x18
    mov r1, #3
    bl Archive_TryFinalize
    cmp r0, #0
    beq @L_0216a1c8
    add r0, r4, #0x378
    mov r1, #6
    bl Archive_TryFinalize
    cmp r0, #0
    beq @L_0216a1c8
    mov r0, r4
    bl func_ov019_02165e80
    mov r0, r4
    bl func_ov019_021664ec
    mov r0, #2
    str r0, [r4, #0x10]
@L_0216a028:
    mov r0, r4
    bl func_ov019_021665d4
    cmp r0, #0
    beq @L_0216a1c8
    add r0, r4, #0xb8
    bl func_ov015_021363e8
    cmp r0, #0
    bne @L_0216a1c8
    mov r0, r4
    bl func_ov019_02166780
    mov r0, #3
    str r0, [r4, #0x10]
@L_0216a058:
    mov r0, r4
    mov r1, #0
    bl func_ov019_0216846c
    mov r0, r4
    bl func_ov019_02168550
    mov r0, r4
    bl func_ov019_021667e4
@L_0216a074:
    mov r0, r4
    bl func_ov019_02166a28
    cmp r0, #0
    beq @L_0216a09c
    ldr r1, [r4, #0x14]
    mov r2, #5
    mov r0, r4
    str r2, [r4, #0x10]
    bl func_ov019_021668fc
    b @L_0216a1c8
@L_0216a09c:
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_0216a1c8
    mov r0, r4
    bl func_ov019_02166624
    cmp r0, #0
    beq @L_0216a1c8
    ldr r1, [r4, #0x14]
    mov r0, r4
    bl func_ov019_021668fc
    mov r0, r4
    bl func_ov019_02166ad8
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #7
    str r0, [r4, #0x10]
    b @L_0216a1c8
@L_0216a0f0:
    mov r1, #1
    bl func_ov019_0216846c
    b @L_0216a1c8
@L_0216a0fc:
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_0216a1c8
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    beq @L_0216a1c8
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r0, #9
    str r0, [r4, #0x10]
@L_0216a140:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    beq @L_0216a164
    mov r0, #6
    bl Graphics_FadeScreensBlack
    b @L_0216a1c8
@L_0216a164:
    ldr r0, [r4, #8]
    cmp r0, #0x88
    mov r0, r4
    bne @L_0216a1a0
    bl func_ov019_02169d10
    mov r0, r4
    bl func_ov019_02169e4c
    ldr r0, [r4, #4]
    mov r1, #1
    bl _ZN13ScreenManager8PopSceneEi
    ldr r0, [r4, #4]
    mov r1, #0
    mov r2, #0x88
    bl _ZN13ScreenManager12SetNextSceneEii
    b @L_0216a1c8
@L_0216a1a0:
    bl func_ov019_02169d10
    mov r0, r4
    bl func_ov019_02169e4c
    ldr r4, [r4, #4]
    mov r1, #0
    mov r0, r4
    bl _ZN13ScreenManager8PopSceneEi
    mov r0, r4
    mov r1, #1
    bl _ZN13ScreenManager8PopSceneEi
@L_0216a1c8:
    ldr r0, =gDeltaTime
    ldr r1, =gSprAnimCtrl
    ldr r2, [r0]
    ldr r0, [r1]
    mov r1, r2, lsl #1
    bl func_ov015_02161710
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov019_0216a1ec(void)
{
}

extern "C" asm void func_ov019_0216a1f0(void)
{
    stmdb sp!, {r4, lr}
    mov r2, #0x4000000
    mov r4, r0
    ldr r0, [r2]
    ldr r1, [r4, #0x35c]
    bic r0, r0, #0x1f00
    orr r3, r0, r1, lsl #8
    mov r0, #2
    mov r1, #0x10
    str r3, [r2]
    bl func_ov015_02132c08
    ldr r0, =data_020d3d20
    mov r1, #0xcb
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =gSprButtonCtrl
    ldr r0, [r0]
    bl func_ov015_02161fdc
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616dc
    mov r0, r4
    bl func_ov019_021663a8
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DPlaneCtrl_Release
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov019_0216a26c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov019_0216a280(void)
{
}
