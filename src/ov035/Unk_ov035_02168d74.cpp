#include "ov035/Unk_ov035_02168d74.hpp"
#include "game/vcall.hpp"

extern "C" void func_ov035_02168d74(void);
extern "C" void func_ov035_02168e5c(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_ov035_02168f04(void);
extern "C" s32 func_ov035_02168f6c(...);
extern "C" s32 func_ov035_021690d8(s32 arg0, u8 *arg1, s32 arg2);
extern "C" void func_ov035_02169130(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_ov035_02169184(void);
extern "C" void func_ov035_021692a4(void);
extern "C" void func_ov035_021693e4(void);
extern "C" u8 *func_ov035_021693e8(u8 *arg0, s32 arg1);
extern "C" void func_ov035_02169414(void);
extern "C" void func_ov035_02169a4c(void);
extern "C" void func_ov035_02169b28(void);
extern "C" s32 func_ov035_02169c10(...);
extern "C" void func_ov035_02169df0(u8 *arg0);
extern "C" void func_ov035_02169e60(void);
extern "C" void func_ov035_02169f2c(u8 *arg0);
extern "C" s32 func_ov035_02169f44(u8 *arg0);
extern "C" void func_ov035_0216a070(void);
extern "C" void func_ov035_0216a334(void);
extern "C" void func_ov035_0216a338(void);
extern "C" s32 func_ov035_0216a3b4(s32 arg0);
extern "C" void func_ov035_0216a3c8(void);

extern "C" char data_020c4642[];
extern "C" char gFont8[];
extern "C" char gSprAnimCtrl[];
extern "C" char gSprButtonCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gKeysRepeated[];
extern "C" char gDeltaTime[];
extern "C" char gAudioPlayer[];
extern "C" char data_020d3d20[];
extern "C" char data_020d9978[];
extern "C" char data_020e88a0[];
extern "C" char data_ov035_0216a5e0[];
extern "C" void DC_FlushRange(void);
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
extern "C" void _ZN11MatchEngine13func_02082d80Eii(void);
extern "C" void _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 _s32_div_f(...);
extern "C" void C3DPlaneCtrl_GetTexHeight(void);
extern "C" s32 C3DPlaneCtrl_Acquire(...);
extern "C" void C3DPlaneCtrl_Release(void);
extern "C" s32 C3DPlaneCtrl_SetFlag_2(...);
extern "C" void C3DPlaneCtrl_ClearFlag_2(void);
extern "C" void C3DSprFile_UploadTex(void);
extern "C" void C3DSprFile_AllocTexBuffer(void);
extern "C" s32 func_0209b7b0(...);
extern "C" void func_ov000_02114db4(void);
extern "C" void func_ov000_02116a68(void);
extern "C" void func_ov000_02116b84(void);
extern "C" void func_ov000_02116bd8(void);
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
extern "C" void func_ov035_02165d60(void);
extern "C" void func_ov035_02165d9c(void);
extern "C" void func_ov035_02165e80(void);
extern "C" void func_ov035_021660a0(void);
extern "C" void func_ov035_02166328(void);
extern "C" void func_ov035_0216646c(void);
extern "C" void func_ov035_02166554(void);
extern "C" void func_ov035_021665a4(void);
extern "C" void func_ov035_02166700(void);
extern "C" void func_ov035_02166764(void);
extern "C" void func_ov035_0216687c(void);
extern "C" void func_ov035_021669a0(void);
extern "C" void func_ov035_02166a50(void);
extern "C" void func_ov035_021673b0(void);
extern "C" void func_ov035_021673f4(void);
extern "C" void func_ov035_0216750c(void);
extern "C" void func_ov035_0216838c(void);
extern "C" void func_ov035_021683d4(void);
extern "C" void func_ov035_021683e4(void);
extern "C" void func_ov035_021684c8(void);
extern "C" void gGameState(void);

extern "C" asm void func_ov035_02168d74(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r4, =g3DPlaneCtrl
    mov r10, r2
    ldr r0, [r4]
    mov r9, r3
    mov r7, #0
    add r2, sp, #0x24
    add r3, sp, #0x28
    str r1, [sp, #0x20]
    str r7, [sp, #0x24]
    bl C3DSprFile_AllocTexBuffer
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    ldr r6, [sp, #0x24]
    bl C3DPlaneCtrl_GetTexHeight
    mov r8, r0
    mov r5, #1
    mov r4, r7
    ldr r11, =gFont8
    b @L_02168e10
@L_02168dc8:
    ldr r0, [r10, r7, lsl #2]
    cmp r0, #0
    beq @L_02168e0c
    str r8, [sp]
    str r5, [sp, #4]
    add r0, r7, r7, lsl #3
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r4, [sp, #0x10]
    str r4, [sp, #0x14]
    str r5, [sp, #0x18]
    str r4, [sp, #0x1c]
    ldr r0, [r11]
    ldr r1, [r10, r7, lsl #2]
    mov r2, r6
    mov r3, #0x80
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
@L_02168e0c:
    add r7, r7, #1
@L_02168e10:
    cmp r7, r9
    blt @L_02168dc8
    ldr r1, [sp, #0x28]
    mov r0, r6
    bl DC_FlushRange
    ldr r0, =g3DPlaneCtrl
    ldr r3, [sp, #0x28]
    ldr r0, [r0]
    mov r4, #0
    str r4, [sp]
    str r4, [sp, #4]
    ldr r1, [sp, #0x20]
    mov r2, r6
    str r4, [sp, #8]
    bl C3DSprFile_UploadTex
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov035_02168e5c(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
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

extern "C" asm void func_ov035_02168f04(void)
{
    stmdb sp!, {r3, lr}
    ldr r12, [r1, #0x10]
    cmp r12, #0
    blt @L_02168f20
    ldr r3, [r1, #8]
    cmp r12, r3
    ble @L_02168f4c
@L_02168f20:
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
@L_02168f4c:
    str r2, [sp]
    ldr r2, [r1, #0x10]
    add r3, r1, r2, lsl #3
    ldrsh r2, [r3, #0x6e]
    ldrsh r3, [r3, #0x70]
    bl func_ov035_02168e5c
    ldmia sp!, {r3, pc}
}

extern "C" asm s32 func_ov035_02168f6c(...)
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
    bgt @L_02169010
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
@L_02169010:
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

extern "C" s32 func_ov035_021690d8(s32 arg0, u8 *arg1, s32 arg2)
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
    v1 = func_ov035_02168f6c(arg0, (s32)arg1, t4, t3, arg2);
    return v1;
}

extern "C" void func_ov035_02169130(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 t0 = *(s32 *)(g3DPlaneCtrl);
    s32 t1 = *(s32 *)(arg0 + 0xAC);
    C3DPlaneCtrl_SetFlag_2(t0, t1, 2, arg1);
    s32 t2 = *(s32 *)(g3DPlaneCtrl);
    s32 t3 = *(s32 *)(arg0 + 0xB0);
    C3DPlaneCtrl_SetFlag_2(t2, t3, 2, arg2);
    *(s32 *)(arg0 + 0x348) = (arg2 == 0 ? 0 : 1);
}

extern "C" asm void func_ov035_02169184(void)
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
    blt @L_02169264
    cmp r4, #8
    bgt @L_02169264
    ldr r0, [r6, #0x14]
    mov r5, #0
    cmp r0, #0
    movne r5, #1
    mov r0, #0xc0
    mla r2, r5, r0, r6
    mov r0, #0
    strb r0, [r2, #0x16c]
    ldr r1, [r2, #0x108]
    ldr r0, [r2, #0x114]
    sub r4, r4, #1
    sub r0, r1, r0
    cmp r4, r0
    moveq r0, #1
    streqb r0, [r2, #0x16c]
    beq @L_02169224
    ldr r0, [r6, #0x14]
    cmp r0, #0
    bne @L_02169224
    ldr r0, [r2, #0x10c]
    sub r0, r0, #2
    cmp r1, r0
    bge @L_02169224
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
@L_02169224:
    mov r7, #0xc0
    mul r2, r5, r7
    add r0, r6, r2
    ldr r1, [r0, #0x114]
    add r0, r6, #0x108
    add r0, r0, r2
    add r1, r4, r1
    bl func_ov015_02135f24
    add r0, r6, #0x108
    mla r1, r5, r7, r0
    mov r0, r6
    mov r2, #8
    bl func_ov035_021673b0
    mov r0, r6
    bl func_ov035_021673f4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169264:
    cmp r4, #0xc
    bne @L_02169280
    mov r0, r6
    mov r1, #1
    mov r2, #0
    bl func_ov035_02169130
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169280:
    cmp r4, #0xd
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, #0
    mov r2, #1
    bl func_ov035_02169130
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov035_021692a4(void)
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
    blt @L_021693a4
    cmp r4, #8
    bgt @L_021693a4
    ldr r0, [r5, #0x14]
    sub r1, r4, #1
    cmp r0, #0
    mov r4, #0
    movne r4, #1
    mov r0, #0xc0
    mla r3, r4, r0, r5
    ldr r2, [r3, #0x108]
    ldr r0, [r3, #0x114]
    sub r0, r2, r0
    cmp r1, r0
    bne @L_02169318
    ldrb r0, [r3, #0x16c]
    cmp r0, #0
    bne @L_02169344
@L_02169318:
    ldr r0, [r5, #0x14]
    cmp r0, #0
    bne @L_02169344
    mov r6, #0xc0
    mul lr, r4, r6
    add r12, r5, lr
    ldr r0, [r12, #0x10c]
    ldr r3, [r12, #0x108]
    sub r2, r0, #2
    cmp r3, r2
    blt @L_02169370
@L_02169344:
    mov r0, #0xc0
    mla r0, r4, r0, r5
    ldr r0, [r0, #0x10c]
    cmp r1, r0
    ldmgeia sp!, {r4, r5, r6, pc}
    ldr r0, =gSprButtonCtrl
    mov r1, #1
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_02169370:
    cmp r1, r0
    ldmgeia sp!, {r4, r5, r6, pc}
    ldr r2, [r12, #0x114]
    add r0, r5, #0x108
    add r0, r0, lr
    add r1, r1, r2
    bl func_ov015_02135f24
    add r0, r5, #0x108
    mla r1, r4, r6, r0
    mov r0, r5
    mov r2, #8
    bl func_ov035_021673b0
    ldmia sp!, {r4, r5, r6, pc}
@L_021693a4:
    cmp r4, #0xc
    bne @L_021693c4
    ldr r0, =gSprButtonCtrl
    mov r1, #1
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_021693c4:
    cmp r4, #0xd
    ldreq r0, =gSprButtonCtrl
    moveq r1, #2
    ldreq r0, [r0]
    addeq r0, r0, #0xf00
    streqh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov035_021693e4(void)
{
}

extern "C" u8 *func_ov035_021693e8(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0) = (s32)data_ov035_0216a5e0;
    *(s32 *)(arg0 + 0x4) = arg1;
    func_ov035_02169f2c(arg0);
    *(s32 *)(arg0 + 0x3BC) = 0;
    return arg0;
}

extern "C" asm void func_ov035_02169414(void)
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
    beq @L_02169490
    ldr r0, [r4]
    add r0, r0, #0xf00
    ldrh r8, [r0, #0x38]
    cmp r8, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r7, r8
    strh r6, [r0, #0x38]
@L_02169490:
    ldr r0, [r9, #0x10]
    cmp r0, #7
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r9, #0x14]
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_02169a20
    b @L_021694c0
    b @L_02169670
    b @L_02169670
    b @L_0216984c
@L_021694c0:
    tst r8, #1
    beq @L_021695e8
    mov r0, r9
    add r1, r9, #0x108
    bl func_ov035_0216838c
    ldr r2, [r9, #0x114]
    ldr r1, [r9, #0x108]
    ldr r0, [r9, #0xbc]
    str r2, [r9, #0x350]
    str r1, [r9, #0x34c]
    cmp r1, r0
    bge @L_021695a0
    mov r4, #0xc
    mla r0, r1, r4, r9
    ldrh r2, [r0, #0xc4]
    ldr r1, =0xfff
    ldr r0, =data_020e88a0
    and r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl _ZN11MatchEngine13func_02078ea8Ei
    cmp r0, #0
    beq @L_02169530
    ldr r0, =data_020d3d20
    mov r1, #0x70
    mov r2, #0
    bl func_0209b7b0
    b @L_02169660
@L_02169530:
    ldr r0, =gAudioPlayer
    mov r1, r10
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r9, #0x34c]
    add r2, r9, #0xc0
    mul r1, r0, r4
    ldr r0, [r2, r1]
    add r4, r2, r1
    str r0, [r9, #0xfc]
    ldrh r2, [r4, #4]
    add r1, r9, #0x100
    mov r0, r9
    strh r2, [r1]
    ldrb r2, [r4, #6]
    mov r1, r10
    strb r2, [r9, #0x102]
    ldrb r2, [r4, #7]
    strb r2, [r9, #0x103]
    ldrb r2, [r4, #8]
    strb r2, [r9, #0x104]
    ldrb r3, [r4, #9]
    ldrb r2, [r4, #0xa]
    strb r3, [r9, #0x105]
    strb r2, [r9, #0x106]
    ldrb r2, [r4, #0xb]
    strb r2, [r9, #0x107]
@L_02169598:
    bl func_ov035_021683e4
    b @L_02169660
@L_021695a0:
    bne @L_021695bc
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #2
    b @L_02169598
@L_021695bc:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r2, r6
    mov r1, #0x66
    bl func_0209b7b0
@L_021695d8:
    mov r0, r9
    mov r1, r6
    bl func_ov035_021683d4
    b @L_02169660
@L_021695e8:
    tst r8, #2
    beq @L_02169610
    ldr r0, =data_020d3d20
    mov r2, r6
    mov r1, #0x66
    bl func_0209b7b0
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    b @L_021695d8
@L_02169610:
    tst r7, #0x40
    beq @L_02169630
    ldr r0, =gAudioPlayer
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x108
    sub r1, r5, #9
    b @L_0216964c
@L_02169630:
    tst r7, #0x80
    beq @L_02169660
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x108
    mov r1, #1
@L_0216964c:
    bl func_ov015_02135fe0
    mov r0, r9
    add r1, r9, #0x108
    mov r2, #0xe
    bl func_ov035_021673b0
@L_02169660:
    mov r0, r9
    bl func_ov035_021673f4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169670:
    tst r8, #1
    beq @L_021697b0
    mov r0, r9
    add r1, r9, #0x1c8
    bl func_ov035_0216838c
    ldr r0, [r9, #0x14]
    cmp r0, #1
    beq @L_021696a0
    cmp r0, #2
    beq @L_02169704
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021696a0:
    ldr r0, [r9, #0x1c8]
    cmp r0, #0
    beq @L_021696bc
    cmp r0, #1
    beq @L_021696e4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021696bc:
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #3
    bl func_ov035_021683e4
    mov r0, r9
    bl func_ov035_021660a0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021696e4:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0
    bl func_ov035_021683e4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169704:
    ldr r0, [r9, #0x1c8]
    cmp r0, #0
    beq @L_02169728
    cmp r0, #1
    beq @L_02169760
    cmp r0, #2
    beq @L_02169790
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169728:
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r2, r6
    mov r1, #0x6c
    bl func_0209b7b0
    mov r0, r9
    mov r1, r6
    bl func_ov035_021683d4
    ldr r0, =data_020e88a0
    bl func_ov000_02116bd8
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169760:
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r1, #0x6d
    mov r2, #0
    bl func_0209b7b0
    mov r0, r9
    mov r1, #0x85
    bl func_ov035_021683d4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169790:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0
    bl func_ov035_021683e4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021697b0:
    tst r8, #2
    beq @L_021697d8
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0
    bl func_ov035_021683e4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021697d8:
    tst r7, #0x40
    beq @L_02169810
    ldr r0, =gAudioPlayer
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x1c8
    sub r1, r5, #9
    bl func_ov015_02135fe0
    mov r0, r9
    add r1, r9, #0x1c8
    mov r2, #0xe
    bl func_ov035_021673b0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169810:
    tst r7, #0x80
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x1c8
    mov r1, #1
    bl func_ov015_02135fe0
    mov r0, r9
    add r1, r9, #0x1c8
    mov r2, #0xe
    bl func_ov035_021673b0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216984c:
    tst r8, #1
    beq @L_02169994
    mov r0, r9
    add r1, r9, #0x288
    bl func_ov035_0216838c
    ldr r0, [r9, #0x348]
    cmp r0, #0
    bne @L_02169968
    ldr r5, =data_020e88a0
    mov r0, r5
    bl _ZN11MatchEngine13func_02076858Ev
    ldr r2, [r9, #0x108]
    mov r7, #0xc
    mla r1, r2, r7, r9
    ldrb r2, [r1, #0xc8]
    mov r3, r0
    ldr r1, [r9, #0x3bc]
    sub r0, r2, #1
    add r0, r1, r0, lsl #2
    ldrh r1, [r0, #2]
    cmp r1, r3
    bhi @L_02169938
    mov r0, r5
    sub r1, r3, r1
    bl _ZN11MatchEngine13func_02076868El
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x100
    ldrh r1, [r0]
    ldr r5, =0xfff
    ldr r0, =data_020d3d20
    and r2, r1, r5
    mov r1, #0x6a
    bl func_0209b7b0
    ldr r0, [r4]
    mov r1, r7
    bl func_ov015_021624f0
    mov r0, r9
    add r1, r9, #0x288
    add r2, sp, #0
    str r6, [sp]
    bl func_ov035_0216750c
    mov r0, r9
    bl func_ov035_02169e60
    mov r1, r6
    mov r0, r9
    bl func_ov035_021683d4
    ldr r0, =data_020d9978
    mov r1, #0xa
    mov r2, #1
    bl _ZN11TreasureBox13func_020526ecEii
    add r0, r9, #0x100
    ldrh r1, [r0]
    ldr r0, =data_020c4642
    add sp, sp, #4
    and r1, r1, r5
    strh r1, [r0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169938:
    ldr r0, =gAudioPlayer
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r1, #0x6f
    mov r2, #0
    bl func_0209b7b0
    ldr r0, [r4]
    mov r1, r7
    bl func_ov015_021624f0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169968:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4]
    mov r1, #0xd
    bl func_ov015_021624f0
    mov r0, r9
    mov r1, #1
    bl func_ov035_021683e4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169994:
    tst r8, #2
    beq @L_021699c8
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4]
    mov r1, #0xd
    bl func_ov015_021624f0
    mov r0, r9
    mov r1, #1
    bl func_ov035_021683e4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021699c8:
    tst r7, #0x20
    bne @L_021699dc
    tst r7, #0x10
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021699dc:
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r9, #0x348]
    add r0, r0, #1
    ands r0, r0, #1
    str r0, [r9, #0x348]
    mov r0, r9
    bne @L_02169a14
    mov r1, #1
    mov r2, #0
    bl func_ov035_02169130
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169a14:
    mov r1, #0
    mov r2, #1
    bl func_ov035_02169130
@L_02169a20:
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov035_02169a4c(void)
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
    b @L_02169aac
    b @L_02169ac4
    b @L_02169adc
    b @L_02169af8
@L_02169aac:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    bl func_ov035_02169184
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169ac4:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    bl func_ov035_021692a4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169adc:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    mov r2, r5
    bl func_ov035_021693e4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169af8:
    ldr r0, [r4]
    add r1, sp, #0
    bl func_ov015_021629d0
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    mov r2, #1
    bl func_ov035_021693e4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov035_02169b28(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r3, [r0, #0xbc]
    mov r2, #0
    cmp r3, #0
    ble @L_02169bd8
@L_02169b3c:
    mov r1, #0xc
    mla r12, r2, r1, r0
    ldrh r1, [r12, #0xc4]
    cmp r1, #0
    bne @L_02169bc8
    add r5, r2, #1
    cmp r5, r3
    bge @L_02169bc8
    mov lr, #0xc
@L_02169b60:
    mla r1, r5, lr, r0
    ldrh r4, [r1, #0xc4]
    cmp r4, #0
    beq @L_02169bbc
    ldr r4, [r1, #0xc0]
    mov r3, #0
    str r4, [r12, #0xc0]
    ldrh r4, [r1, #0xc4]
    strh r4, [r12, #0xc4]
    ldrb r4, [r1, #0xc6]
    strb r4, [r12, #0xc6]
    ldrb r4, [r1, #0xc7]
    strb r4, [r12, #0xc7]
    ldrb r4, [r1, #0xc8]
    strb r4, [r12, #0xc8]
    ldrb r4, [r1, #0xc9]
    ldrb lr, [r1, #0xca]
    strb r4, [r12, #0xc9]
    strb lr, [r12, #0xca]
    ldrb lr, [r1, #0xcb]
    strb lr, [r12, #0xcb]
    strh r3, [r1, #0xc4]
    b @L_02169bc8
@L_02169bbc:
    add r5, r5, #1
    cmp r5, r3
    blt @L_02169b60
@L_02169bc8:
    ldr r3, [r0, #0xbc]
    add r2, r2, #1
    cmp r2, r3
    blt @L_02169b3c
@L_02169bd8:
    mov r4, #0
    mov r5, r4
    cmp r3, #0
    ble @L_02169c08
    mov r1, #0xc
@L_02169bec:
    mla r2, r5, r1, r0
    ldrh r2, [r2, #0xc4]
    add r5, r5, #1
    cmp r2, #0
    addne r4, r4, #1
    cmp r5, r3
    blt @L_02169bec
@L_02169c08:
    str r4, [r0, #0xbc]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov035_02169c10(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r1, =gGameState
    mov r10, r0
    ldrb r0, [r1, #0x5e0]
    mov r11, #1
    mov r5, #0
    cmp r0, #0
    movne r0, r11
    moveq r0, r5
    cmp r0, #0
    mov r4, #0xc
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r7, =data_020e88a0
    mov r1, #0
    mov r0, r7
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r6, r0
    mov r0, r7
    mov r1, #1
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrh r1, [r6, #0x28]
    mov r8, r0
    mov r0, r10
    cmp r1, #0
    ldreqh r1, [r6, #0x26]
    strh r1, [r8, #0x28]
    ldrh r1, [r6, #0x30]
    strh r1, [r8, #0x30]
    ldrh r1, [r6, #0x32]
    strh r1, [r8, #0x32]
    ldrb r1, [r6, #0x2c]
    strb r1, [r8, #0x2c]
    bl func_ov035_02169f2c
    ldr r6, =data_020e88a0
    add r1, r10, #0xc0
    mov r0, r6
    bl func_ov000_02116a68
    movs r7, r0
    bne @L_02169d00
    mov r0, r6
    add r1, r10, #0xc0
    mov r2, #5
    bl func_ov000_02114db4
    mov r7, r0
    mov r3, #0
    add r0, sp, #0x10
    b @L_02169ce8
@L_02169cd4:
    mla r1, r3, r4, r10
    ldrh r2, [r1, #0xc4]
    mov r1, r3, lsl #1
    add r3, r3, #1
    strh r2, [r0, r1]
@L_02169ce8:
    cmp r3, r7
    blt @L_02169cd4
    ldr r0, =data_020e88a0
    add r1, sp, #0x10
    and r2, r7, #0xff
    bl func_ov000_02116b84
@L_02169d00:
    str r7, [r10, #0xbc]
    mov r9, #0
    add r6, r10, #0xc4
    b @L_02169db4
@L_02169d10:
    mul r3, r9, r4
    ldrh r2, [r6, r3]
    ldr r0, =data_020e88a0
    mov r1, r11
    orr r2, r2, #0x8000
    strh r2, [r6, r3]
    stmia sp, {r5, r11}
    add r2, r10, r3
    str r5, [sp, #8]
    ldrh r12, [r2, #0xc4]
    ldr r2, =0xfff
    mov r3, r5
    and r2, r12, r2
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl _ZN11MatchEngine13func_0207b00cEv
    cmp r0, #0
    mla r0, r9, r4, r10
    strneh r5, [r0, #0xc4]
    subne r7, r7, #1
    bne @L_02169db0
    ldrh r0, [r0, #0xc4]
    mov r1, r5
    bl func_ov015_02130b14
    str r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02169db0
    mla r0, r9, r4, r10
    ldrh r1, [r0, #0xc4]
    ldr r0, =data_020e88a0
    mov r2, r11
    bl _ZN11MatchEngine13func_02082d80Eii
    cmp r0, #0
    ldrneh r2, [r8, #0x32]
    ldr r1, [sp, #0xc]
    ldr r0, =data_020e88a0
    ldreqh r2, [r8, #0x30]
    mov r3, r5
    str r11, [sp]
    bl _ZN11MatchEngine13func_020777e4EP11MatchPlayermmh
@L_02169db0:
    add r9, r9, #1
@L_02169db4:
    ldr r0, [r10, #0xbc]
    cmp r9, r0
    blt @L_02169d10
    cmp r0, r7
    mov r4, #1
    ble @L_02169dd4
    mov r0, r10
    bl func_ov035_02169b28
@L_02169dd4:
    ldr r0, =gGameState
    strb r4, [r0, #0x5e0]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov035_02169df0(u8 *arg0)
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
    for (; i < *(s32 *)(arg0 + 0xbc); i++)
        ((void (*)(void *, s32, u16, s32))_ZN11MatchEngine13func_0207bfd0Eiii)(d, k, *(u16 *)(arg0 + i * w + 0xc4) & m, k);
    *(u8 *)((u8 *)gGameState + 0x5e0) = 0;
}
#pragma pop

extern "C" asm void func_ov035_02169e60(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r6, r0
    ldr r1, [r6, #0x108]
    mov r0, #0xc
    mla r0, r1, r0, r6
    ldrh r4, [r0, #0xc4]
    mov r1, #1
    rsb r0, r1, #0x1000
    and r0, r4, r0
    mov r2, r0, lsl #0x10
    ldr r0, =data_020e88a0
    mov r3, r1
    mov r2, r2, lsr #0x10
    mov r5, #0
    bl _ZN11MatchEngine13func_0207bfd0Eiii
    ldr r7, [r6, #0xbc]
    mov r3, r5
    cmp r7, #0
    ble @L_02169edc
    mov r0, #0xc
@L_02169eb4:
    mla r2, r3, r0, r6
    ldrh r1, [r2, #0xc4]
    cmp r4, r1
    ldreq r5, [r2, #0xc0]
    moveq r0, #0
    streqh r0, [r2, #0xc4]
    beq @L_02169edc
    add r3, r3, #1
    cmp r3, r7
    blt @L_02169eb4
@L_02169edc:
    mov r0, r6
    bl func_ov035_02169b28
    ldr r8, =data_020d9978
    mov r7, #0xa
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

extern "C" void func_ov035_02169f2c(u8 *arg0)
{
    *(s32 *)(arg0 + 0xBC) = 0;
    *(s32 *)(arg0 + 0x350) = (0 - 1);
    *(s32 *)(arg0 + 0x34C) = (0 - 1);
}

extern "C" s32 func_ov035_02169f44(u8 *arg0)
{
    s32 v5;
    s32 v15;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t4;
    s32 t5;
    t0 = ((u32)(*(s32 *)(((u8 *)0x4000000)) & 0x1F00) >> 8);
    *(s32 *)(arg0 + 0x354) = t0;
    t1 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02161f84(t1, t0);
    t2 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    func_ov015_021616a4(t2);
    ((VCall *)arg0)->f17();
    func_ov035_02169c10((s32)arg0);
    func_ov015_02135ea0((s32)(arg0 + 0xB4), 5);
    t4 = *(s32 *)(arg0 + 0x4);
    v5 = _ZN13ScreenManager18GetLoadedSceneMainEv(t4);
    *(s32 *)(arg0 + 0x8) = v5;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x14) = 0;
    MI_CpuFill8((s32)(arg0 + 0x370), 0, 0x48);
    MI_CpuFill8((s32)(arg0 + 0x18), 0, 0x24);
    MI_CpuFill8((s32)(arg0 + 0x3C), 0, 0x58);
    MI_CpuFill8((s32)(arg0 + 0x94), 0, 8);
    MI_CpuFill8((s32)(arg0 + 0xA8), 0, 4);
    MI_CpuFill8((s32)(arg0 + 0xAC), 0, 8);
    MI_CpuFill8((s32)(arg0 + 0x9C), 0, 0xC);
    MI_CpuFill8((s32)(arg0 + 0x108), 0, 0x240);
    *(s32 *)(arg0 + 0x348) = 0;
    t5 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    C3DPlaneCtrl_Acquire(t5);
    v15 = func_0209b7b0((s32)((u8 *)&data_020d3d20), 0x64, 0);
    return v15;
}

extern "C" asm void func_ov035_0216a070(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x10]
    cmp r1, #0xb
    addls pc, pc, r1, lsl #2
    b @L_0216a310
    b @L_0216a0b8
    b @L_0216a0cc
    b @L_0216a10c
    b @L_0216a13c
    b @L_0216a158
    b @L_0216a238
    b @L_0216a180
    b @L_0216a310
    b @L_0216a1d4
    b @L_0216a1f0
    b @L_0216a244
    b @L_0216a288
@L_0216a0b8:
    bl func_ov035_02165d60
    mov r0, r4
    bl func_ov035_02165d9c
    mov r0, #1
    str r0, [r4, #0x10]
@L_0216a0cc:
    add r0, r4, #0x18
    mov r1, #3
    bl Archive_TryFinalize
    cmp r0, #0
    beq @L_0216a310
    add r0, r4, #0x370
    mov r1, #6
    bl Archive_TryFinalize
    cmp r0, #0
    beq @L_0216a310
    mov r0, r4
    bl func_ov035_02165e80
    mov r0, r4
    bl func_ov035_0216646c
    mov r0, #2
    str r0, [r4, #0x10]
@L_0216a10c:
    mov r0, r4
    bl func_ov035_02166554
    cmp r0, #0
    beq @L_0216a310
    add r0, r4, #0xb4
    bl func_ov015_021363e8
    cmp r0, #0
    bne @L_0216a310
    mov r0, r4
    bl func_ov035_02166700
    mov r0, #3
    str r0, [r4, #0x10]
@L_0216a13c:
    mov r0, r4
    mov r1, #0
    bl func_ov035_021683e4
    mov r0, r4
    bl func_ov035_021684c8
    mov r0, r4
    bl func_ov035_02166764
@L_0216a158:
    mov r0, r4
    bl func_ov035_021669a0
    cmp r0, #0
    beq @L_0216a180
    ldr r1, [r4, #0x14]
    mov r2, #5
    mov r0, r4
    str r2, [r4, #0x10]
    bl func_ov035_0216687c
    b @L_0216a310
@L_0216a180:
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_0216a310
    mov r0, r4
    bl func_ov035_021665a4
    cmp r0, #0
    beq @L_0216a310
    ldr r1, [r4, #0x14]
    mov r0, r4
    bl func_ov035_0216687c
    mov r0, r4
    bl func_ov035_02166a50
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #7
    str r0, [r4, #0x10]
    b @L_0216a310
@L_0216a1d4:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    movne r0, #9
    strne r0, [r4, #0x10]
    b @L_0216a310
@L_0216a1f0:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_0216a310
    mov r0, r4
    bl func_ov035_02169df0
    mov r0, r4
    bl func_ov035_02169f2c
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
    b @L_0216a310
@L_0216a238:
    mov r1, #1
    bl func_ov035_021683e4
    b @L_0216a310
@L_0216a244:
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_0216a310
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    beq @L_0216a310
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r0, #0xb
    str r0, [r4, #0x10]
@L_0216a288:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    beq @L_0216a2ac
    mov r0, #6
    bl Graphics_FadeScreensBlack
    b @L_0216a310
@L_0216a2ac:
    ldr r0, [r4, #8]
    cmp r0, #0x85
    mov r0, r4
    bne @L_0216a2e8
    bl func_ov035_02169df0
    mov r0, r4
    bl func_ov035_02169f2c
    ldr r0, [r4, #4]
    mov r1, #1
    bl _ZN13ScreenManager8PopSceneEi
    ldr r0, [r4, #4]
    mov r1, #0
    mov r2, #0x85
    bl _ZN13ScreenManager12SetNextSceneEii
    b @L_0216a310
@L_0216a2e8:
    bl func_ov035_02169df0
    mov r0, r4
    bl func_ov035_02169f2c
    ldr r4, [r4, #4]
    mov r1, #0
    mov r0, r4
    bl _ZN13ScreenManager8PopSceneEi
    mov r0, r4
    mov r1, #1
    bl _ZN13ScreenManager8PopSceneEi
@L_0216a310:
    ldr r0, =gDeltaTime
    ldr r1, =gSprAnimCtrl
    ldr r2, [r0]
    ldr r0, [r1]
    mov r1, r2, lsl #1
    bl func_ov015_02161710
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov035_0216a334(void)
{
}

extern "C" asm void func_ov035_0216a338(void)
{
    stmdb sp!, {r4, lr}
    mov r2, #0x4000000
    mov r4, r0
    ldr r0, [r2]
    ldr r1, [r4, #0x354]
    bic r0, r0, #0x1f00
    orr r3, r0, r1, lsl #8
    mov r0, #2
    mov r1, #0x10
    str r3, [r2]
    bl func_ov015_02132c08
    ldr r0, =data_020d3d20
    mov r1, #0x67
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =gSprButtonCtrl
    ldr r0, [r0]
    bl func_ov015_02161fdc
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616dc
    mov r0, r4
    bl func_ov035_02166328
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DPlaneCtrl_Release
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov035_0216a3b4(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov035_0216a3c8(void)
{
}
