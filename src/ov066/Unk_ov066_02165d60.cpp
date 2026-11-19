#include "ov066/Unk_ov066_02165d60.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_ov066_02165d60(...);
extern "C" void func_ov066_02165d98(u8 *arg0, s32 arg1);
extern "C" char *func_ov066_02165dc4(void);
extern "C" s32 func_ov066_02165df4(...);
extern "C" void func_ov066_02165e4c(void);
extern "C" void func_ov066_02165f90(void);
extern "C" s32 func_ov066_0216609c(u8 *arg0);
extern "C" s32 func_ov066_021660e0(u8 *arg0);
extern "C" s32 func_ov066_021660f4(u8 *arg0);
extern "C" s32 func_ov066_02166108(...);
extern "C" void func_ov066_021661bc(void);
extern "C" s32 func_ov066_0216652c(u8 *arg0);
extern "C" s32 func_ov066_021665a0(...);
extern "C" void func_ov066_021666c4(u8 *arg0);
extern "C" void func_ov066_021666e4(u8 *arg0);
extern "C" void func_ov066_02166744(void);
extern "C" s32 func_ov066_021667f0(...);
extern "C" s32 func_ov066_02166960(u8 *arg0);
extern "C" void func_ov066_021669f0(void);
extern "C" s32 func_ov066_02166acc(...);
extern "C" void func_ov066_02166b90(void);
extern "C" void func_ov066_02166cd0(void);
extern "C" s32 func_ov066_02166e78(u8 *arg0, s32 arg1);
extern "C" void func_ov066_02166ee4(void);
extern "C" s32 func_ov066_02166f8c(u8 *arg0, s32 arg1);
extern "C" void func_ov066_02166fe4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4);
extern "C" void func_ov066_0216700c(void);
extern "C" s32 func_ov066_021670fc(...);
extern "C" s32 func_ov066_021672b4(u8 *arg0);
extern "C" s32 func_ov066_02167314(u8 *arg0);
extern "C" s32 func_ov066_02167368(...);
extern "C" s32 func_ov066_02167398(u8 *arg0);
extern "C" s32 func_ov066_02167480(u8 *arg0);
extern "C" s32 func_ov066_02167528(u8 *arg0);
extern "C" s32 func_ov066_02167570(u8 *arg0);
extern "C" void func_ov066_021675e0(u8 *arg0);
extern "C" void func_ov066_02167660(void);
extern "C" void func_ov066_021677b8(void);
extern "C" s32 func_ov066_021679a8(s32 arg0);
extern "C" s32 func_ov066_02167a00(...);
extern "C" s32 func_ov066_02167a64(...);
extern "C" void func_ov066_02167ac8(u8 *arg0);
extern "C" void func_ov066_02167b60(void);
extern "C" s32 func_ov066_02167d5c(...);
extern "C" s32 func_ov066_02167d88(...);
extern "C" void func_ov066_02167da4(u8 *arg0);
extern "C" void func_ov066_02167dd4(u8 *arg0);
extern "C" s32 func_ov066_02167e78(...);
extern "C" s32 func_ov066_02167edc(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_ov066_02167ffc(void);
extern "C" void func_ov066_021680b8(u8 *arg0);
extern "C" void func_ov066_021680dc(void);
extern "C" s32 func_ov066_02168228(...);
extern "C" void func_ov066_02168474(void);
extern "C" s32 func_ov066_021684f4(u8 *arg0);
extern "C" s32 func_ov066_0216852c(u8 *arg0, s32 arg1);
extern "C" void func_ov066_02168578(void);
extern "C" void func_ov066_0216857c(u8 *arg0);
extern "C" void func_ov066_02168734(void);
extern "C" void func_ov066_02168978(u8 *arg0);
extern "C" s32 func_ov066_021689e8(u8 *arg0);
extern "C" s32 func_ov066_02168a88(s32 arg0);
extern "C" void func_ov066_02168a9c(void);

extern "C" char g3DSpriteCtrl[];
extern "C" char gSprAnimCtrl[];
extern "C" char gSprButtonCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gKeysRepeated[];
extern "C" char gDeltaTime[];
extern "C" char data_020c4b80[];
extern "C" char data_020c4b84[];
extern "C" char gWirelessUtil[];
extern "C" char gAudioPlayer[];
extern "C" char gBgMenuManager[];
extern "C" char data_020ca710[];
extern "C" char data_020cabe8[];
extern "C" char data_020e88a0[];
extern "C" char data_ov001_0212a9e0[];
extern "C" char data_ov066_02168aa0[];
extern "C" char data_ov066_02168ac0[];
extern "C" char data_ov066_02168af0[];
extern "C" char data_ov066_02168cf8[];
extern "C" char data_ov066_02168d14[];
extern "C" char data_ov066_02168d24[];
extern "C" char data_ov066_02168d38[];
extern "C" char data_ov066_02168d54[];
extern "C" char data_ov066_02168d70[];
extern "C" char data_ov066_02168d8c[];
extern "C" char data_ov066_02168da8[];
extern "C" char data_ov066_02168dc8[];
extern "C" char data_ov066_02168de8[];
extern "C" void DC_FlushRange(void);
extern "C" void G2_GetBG1CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" void _ZN13ScreenManager12SetNextSceneEii(void);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" s32 _ZN11MatchEngine13func_0206ce6cEt(...);
extern "C" s32 _ZN11MatchEngine13func_0206ce7cEv(...);
extern "C" void _ZN11MatchEngine13func_02077c4cEPPv(void);
extern "C" s32 _ZN11MatchEngine13func_02077ce4Ev(...);
extern "C" s32 _ZdlPv(...);
extern "C" void GX_LoadBG3Char(void);
extern "C" void _ffltu(void);
extern "C" void _s32_div_f(void);
extern "C" void _ffix(void);
extern "C" void _fadd(void);
extern "C" void _fsub(void);
extern "C" s32 C3DPlaneCtrl_Acquire(...);
extern "C" s32 C3DPlaneCtrl_Release(...);
extern "C" s32 C3DPlaneCtrl_Create(...);
extern "C" void C3DPlaneCtrl_Destroy(void);
extern "C" s32 C3DPlaneCtrl_SetTexAll(...);
extern "C" s32 C3DPlaneCtrl_SetDepthAll(...);
extern "C" s32 C3DPlaneCtrl_SetDepthStepAll(...);
extern "C" s32 C3DPlaneCtrl_SetFlagAll(...);
extern "C" s32 C3DPlaneCtrl_ClearFlagAll(...);
extern "C" s32 C3DPlaneCtrl_SetGraphicIdxAll(...);
extern "C" s32 C3DPlaneCtrl_SetTex(...);
extern "C" void C3DPlaneCtrl_SetDepth(void);
extern "C" void C3DPlaneCtrl_SetPos(void);
extern "C" void C3DPlaneCtrl_SetFlag(void);
extern "C" void C3DPlaneCtrl_SetGraphicIdx(void);
extern "C" void C3DPlaneCtrl_SetPos_2(void);
extern "C" void C3DPlaneCtrl_ConvertTilesToTex(void);
extern "C" void func_02095ea4(void);
extern "C" void C3DSprFile_LoadFromPath(void);
extern "C" s32 C3DSprFile_TryFinalize(...);
extern "C" void C3DSprFile_Release(void);
extern "C" void C3DSprFile_IsInVram(void);
extern "C" void C3DSprFile_LoadToVram(void);
extern "C" void func_0209bf8c(void);
extern "C" void func_0209bf9c(void);
extern "C" void func_0209bff0(void);
extern "C" void func_0209c004(void);
extern "C" s32 func_0209c4d8(...);
extern "C" void func_0209c628(void);
extern "C" s32 func_0209d8b8(...);
extern "C" void func_ov001_02125cd0(void);
extern "C" void func_ov001_0212602c(void);
extern "C" s32 func_ov001_02126240(...);
extern "C" void func_ov001_02126284(void);
extern "C" void func_ov015_02131754(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void func_ov015_021319fc(void);
extern "C" s32 Graphics_LoadBGPaletteMain(...);
extern "C" s32 Graphics_LoadTempPalette(...);
extern "C" void Graphics_FadeScreensBlack(void);
extern "C" void Graphics_SetupScreen(void);
extern "C" void Graphics_DrawTextTileWithRuby(void);
extern "C" void func_ov015_02133dc8(void);
extern "C" s32 func_ov015_02133e50(...);
extern "C" s32 func_ov015_02133e8c(...);
extern "C" void Archive_RequestNewRead(void);
extern "C" void Archive_TryFinalize(void);
extern "C" s32 Archive_Close(...);
extern "C" void Archive_Deallocate(void);
extern "C" void Archive_PackHeaderGetOffsetAndSize(void);
extern "C" void func_ov015_02136080(void);
extern "C" s32 CBgMenuManager_Init(...);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" s32 CBgMenuManager_AddStatic(...);
extern "C" s32 CBgMenuManager_DeleteID(...);
extern "C" s32 CBgMenuManager_DeleteAll(...);
extern "C" s32 CBgMenuManager_UpdateGraphics(...);
extern "C" void CBgMenuManager_Draw(void);
extern "C" s32 func_ov015_021616a4(...);
extern "C" s32 func_ov015_021616dc(...);
extern "C" void func_ov015_02161710(void);
extern "C" void func_ov015_02161760(void);
extern "C" s32 func_ov015_02161ca0(...);
extern "C" void func_ov015_02161d00(void);
extern "C" void func_ov015_02161d24(void);
extern "C" s32 func_ov015_02161dd4(...);
extern "C" s32 func_ov015_02161f84(...);
extern "C" s32 func_ov015_02161fdc(...);
extern "C" s32 func_ov015_021621dc(...);
extern "C" s32 func_ov015_021624cc(...);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_021629d0(void);
extern "C" s32 func_ov015_02162f70(...);
extern "C" void func_ov015_02162fb4(void);
extern "C" void func_ov015_02163040(void);
extern "C" void func_ov087_02182220(void);
extern "C" void func_ov087_0218225c(void);
extern "C" void func_ov087_02182270(void);
extern "C" char gGameState[];

extern "C" asm s32 func_ov066_02165d60(...)
{
    ldrsb r2, [r1]
    mov r0, #1
    cmp r2, #0
    bxeq lr
@L_02165d70:
    ldrsb r2, [r1]
    cmp r2, #0xa
    bne @L_02165d88
    ldrsb r2, [r1, #1]
    cmp r2, #0
    addne r0, r0, #1
@L_02165d88:
    ldrsb r2, [r1, #1]!
    cmp r2, #0
    bne @L_02165d70
    bx lr
}

extern "C" void func_ov066_02165d98(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x68) = 1;
    *(s32 *)(arg0 + 0x64) = 0x3F;
    *(s32 *)(arg0 + 0x70) = arg1;
    *(u8 *)(arg0 + 0x74) = 1;
    s32 v0 = func_ov066_02165d60((s32)arg0, arg1, 0x3F, 1);
    *(u8 *)(arg0 + 0x75) = v0;
}

extern "C" char *func_ov066_02165dc4(void)
{
    func_0209c4d8((s32)gWirelessUtil, 4);
    *(u8 *)(data_020c4b80 + 0x2) = 0x3F;
    *(u8 *)(data_020c4b80 + 0x3) = 0;
    return data_020c4b80;
}

extern "C" asm s32 func_ov066_02165df4(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r4, =data_020c4b84
    bl func_ov015_021319bc
    mov r1, r0
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrh r1, [r5, #0x12]
    strh r1, [r4]
    ldrh r1, [r5, #0x14]
    strh r1, [r4, #4]
    ldrh r1, [r0, #0x28]
    cmp r1, #0
    ldreqh r1, [r0, #0x26]
    strh r1, [r4, #6]
    ldrh r1, [r0, #0x2e]
    strh r1, [r4, #8]
    ldrb r0, [r0, #0x3c]
    strb r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov066_02165e4c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, r0
    ldrb r0, [r4, #0x19]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =gWirelessUtil
    ldrb r0, [r0, #0x64]
    cmp r0, #0
    bne @L_02165ecc
    mov r5, #0
    mov r0, r5
    mov r1, r5
    bl func_ov015_02131754
    ldrh r1, [r4, #0x12]
    ldrh r0, [r0, #4]
    cmp r1, r0
    beq @L_02165ecc
    mov r0, r5
    mov r1, r5
    bl func_ov015_02131754
    ldrh r2, [r0, #4]
    mov r0, r5
    mov r1, r5
    strh r2, [r4, #0x12]
    bl func_ov015_02131754
    ldrh r1, [r0, #8]
    ldr r0, [r4, #8]
    strh r1, [r4, #0x14]
    cmp r0, #5
    bne @L_02165ecc
    mov r0, r4
    bl func_ov066_021679a8
@L_02165ecc:
    ldr r4, =gWirelessUtil
    mov r0, r4
    bl func_0209bf9c
    mov r8, r0
    mov r0, r4
    bl func_0209bf8c
    mov r10, #0
    mov r9, r0
    mov r5, r10
    mov r11, #1
    b @L_02165f78
@L_02165ef8:
    tst r8, r11, lsl r10
    cmpne r9, r10
    beq @L_02165f74
    mov r0, r10
    bl func_ov015_021319fc
    mov r6, r0
    ldr r0, =data_020ca710
    ldrb r0, [r0, r6]
    cmp r10, r0
    bne @L_02165f74
    mov r0, r10
    mov r1, r5
    bl func_ov015_02131754
    ldrb r0, [r0, #2]
    cmp r0, #0x3f
    bne @L_02165f74
    mov r0, r10
    mov r1, r5
    bl func_ov015_02131754
    mov r4, r0
    ldrh r7, [r4, #0xa]
    cmp r7, #0
    beq @L_02165f74
    ldr r0, =data_020e88a0
    mov r1, r6
    bl _ZN11MatchEngine11GetTeamInfoEi
    strh r7, [r0, #0x28]
    ldrh r1, [r4, #0xc]
    strh r1, [r0, #0x2e]
    ldrb r1, [r4, #0xe]
    strb r1, [r0, #0x3c]
@L_02165f74:
    add r10, r10, #1
@L_02165f78:
    cmp r10, #4
    blt @L_02165ef8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov066_02165f90(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, #0
    mov r4, r0
    mov r0, r6
    mov r1, r6
    bl func_ov015_02131754
    ldr r1, =gWirelessUtil
    ldr r2, [r4, #8]
    ldrb r7, [r0, #3]
    ldrb r5, [r1, #0x64]
    cmp r2, #8
    addls pc, pc, r2, lsl #2
    b @L_02166090
    b @L_02166090
    b @L_02166090
    b @L_02166090
    b @L_02166090
    b @L_02166090
    b @L_02165fe8
    b @L_0216600c
    b @L_02166038
    b @L_02166088
@L_02165fe8:
    mov r0, r4
    bl func_ov066_02165e4c
    cmp r5, #0
    cmpeq r7, #6
    bne @L_02166090
    mov r0, r4
    mov r1, #7
@L_02166004:
    bl func_ov066_02166108
    b @L_02166090
@L_0216600c:
    cmp r5, #0
    beq @L_02166090
    mov r5, #7
    sub r1, r5, #8
    mov r0, r5
    mov r2, r1
    mov r3, r6
    bl func_ov001_02125cd0
    cmp r0, #0
    beq @L_02166090
    b @L_02166068
@L_02166038:
    mov r0, r4
    bl func_ov066_02165e4c
    cmp r5, #0
    beq @L_02166074
    mov r5, #8
    sub r1, r5, #9
    mov r0, r5
    mov r2, r1
    mov r3, r6
    bl func_ov001_02125cd0
    cmp r0, #0
    beq @L_02166090
@L_02166068:
    mov r0, r4
    mov r1, r5
    b @L_02166004
@L_02166074:
    cmp r7, #7
    bne @L_02166090
    mov r0, r4
    mov r1, #8
    b @L_02166004
@L_02166088:
    mov r0, r4
    bl func_ov066_02165e4c
@L_02166090:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov066_0216609c(u8 *arg0)
{
    u8 *r4;
    s32 t0;
    r4 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x8);
    switch ((s32)arg0) {
        case 5:
        case 6:
        case 7:
            func_ov066_02165df4((s32)r4);
            break;
    }
    *(u8 *)(((u8 *)&data_020c4b80) + 0x2) = 0x3F;
    t0 = *(s32 *)(r4 + 0x8);
    *(u8 *)(((u8 *)&data_020c4b80) + 0x3) = t0;
    return 1;
}

extern "C" s32 func_ov066_021660e0(u8 *arg0)
{
    return ((u32)*(s32 *)(arg0 + 0x8) > (u32)4 ? 1 : 0);
}

extern "C" s32 func_ov066_021660f4(u8 *arg0)
{
    return ((u32)*(s32 *)(arg0 + 0x8) > (u32)4 ? 1 : 0);
}

extern "C" asm s32 func_ov066_02166108(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r0, [r4, #8]
    cmp r0, r1
    ldmeqia sp!, {r3, r4, r5, pc}
    str r1, [r4, #8]
    cmp r1, #8
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_02166150
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_02166150
    b @L_0216615c
    b @L_02166180
@L_02166150:
    mov r0, #1
    strb r0, [r4, #0x18]
    ldmia sp!, {r3, r4, r5, pc}
@L_0216615c:
    mov r1, #1
    ldr r0, =gWirelessUtil
    strb r1, [r4, #0x18]
    ldrb r0, [r0, #0x64]
    cmp r0, #0
    ldrne r0, =data_ov001_0212a9e0
    movne r1, #0
    strneb r1, [r0]
    ldmia sp!, {r3, r4, r5, pc}
@L_02166180:
    mov r0, #6
    bl Graphics_FadeScreensBlack
    ldr r5, [r4, #4]
    mov r4, #0x33
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl _ZN13ScreenManager12SetNextSceneEii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN13ScreenManager12SetNextSceneEii
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov066_021661bc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    ldrb r0, [r10, #0x17]
    mov r4, #0
    cmp r0, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r10, #0x29c]
    ldr r0, =0xaaaaaaab
    ldr r11, [r10, #0x250]
    umull r0, r8, r1, r0
    mov r0, #0
    str r0, [sp]
    mov r8, r8, lsr #8
    cmp r8, #0x80
    movgt r8, #0x80
    str r0, [sp, #8]
    str r0, [sp, #4]
    mov r9, r0
    str r0, [r10, #0x7c]
    ldr r5, [r10, #0x298]
    b @L_021662f8
@L_02166218:
    mov r0, r5
    bl func_ov087_02182220
    cmp r0, #0
    beq @L_021662f0
    mov r0, r5
    bl func_ov087_02182270
    mov r6, r0
    mov r0, r5
    bl func_ov087_0218225c
    mov r7, r0
    cmp r6, #0
    cmpne r7, #0
    beq @L_021662f0
    cmp r7, #1
    streq r9, [sp, #8]
    streq r6, [sp, #4]
    cmp r9, #0
    blt @L_02166268
    cmp r9, #0x80
    blo @L_02166270
@L_02166268:
    mov r0, r4
    b @L_02166288
@L_02166270:
    ldr r0, =data_020cabe8
    and r2, r9, #7
    ldrb r1, [r0, r9, asr #3]
    mov r0, #1
    tst r1, r0, lsl r2
    moveq r0, r4
@L_02166288:
    cmp r0, #0
    bne @L_021662b0
    sub r0, r7, #1
    add r1, r10, r0
    ldr r0, [r10, #0x7c]
    add r0, r0, #1
    str r0, [r10, #0x7c]
    mov r0, #0xff
    strb r0, [r1, #0x80]
    b @L_021662f0
@L_021662b0:
    mov r0, r11
    mov r1, r6
    mov r2, r4
    mov r3, r4
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    beq @L_021662f0
    sub r0, r7, #1
    add r0, r10, r0
    strb r9, [r0, #0x80]
    strb r6, [r0, #0x100]
    ldr r1, [r10, #0x7c]
    mov r0, #1
    str r0, [sp]
    add r0, r1, #1
    str r0, [r10, #0x7c]
@L_021662f0:
    add r9, r9, #1
    add r5, r5, #0x180
@L_021662f8:
    cmp r9, r8
    blt @L_02166218
    ldr r0, [sp]
    cmp r0, #0
    mov r0, #0
    bne @L_02166324
    ldr r1, [sp, #8]
    cmp r1, #0
    strneb r1, [r10, #0x80]
    ldrne r1, [sp, #4]
    strneb r1, [r10, #0x100]
@L_02166324:
    mov r5, #0
    sub r1, r8, #1
    b @L_02166384
@L_02166330:
    add r2, r10, r5
    ldrb r2, [r2, #0x80]
    cmp r2, #0
    bne @L_02166380
    add r3, r5, #1
    b @L_02166378
@L_02166348:
    add r4, r10, r3
    ldrb r2, [r4, #0x80]
    cmp r2, #0
    beq @L_02166374
    add r3, r10, r5
    strb r2, [r3, #0x80]
    strb r0, [r4, #0x80]
    ldrb r2, [r4, #0x100]
    strb r2, [r3, #0x100]
    strb r0, [r4, #0x100]
    b @L_02166380
@L_02166374:
    add r3, r3, #1
@L_02166378:
    cmp r3, r8
    blt @L_02166348
@L_02166380:
    add r5, r5, #1
@L_02166384:
    cmp r5, r1
    blt @L_02166330
    mov r6, #0
    sub r1, r8, #1
    mov r3, #0xff
    b @L_021663f4
@L_0216639c:
    add r2, r10, r6
    ldrb r2, [r2, #0x80]
    cmp r2, #0xff
    bne @L_021663f0
    add r4, r6, #1
    b @L_021663e8
@L_021663b4:
    add r5, r10, r4
    ldrb r2, [r5, #0x80]
    cmp r2, #0
    cmpne r2, #0xff
    beq @L_021663e4
    add r4, r10, r6
    strb r2, [r4, #0x80]
    strb r3, [r5, #0x80]
    ldrb r2, [r5, #0x100]
    strb r2, [r4, #0x100]
    strb r0, [r5, #0x100]
    b @L_021663f0
@L_021663e4:
    add r4, r4, #1
@L_021663e8:
    cmp r4, r8
    blt @L_021663b4
@L_021663f0:
    add r6, r6, #1
@L_021663f4:
    cmp r6, r1
    blt @L_0216639c
    mov r3, #0
    b @L_02166418
@L_02166404:
    add r2, r10, r3
    ldrb r1, [r2, #0x80]
    add r3, r3, #1
    cmp r1, #0xff
    streqb r0, [r2, #0x80]
@L_02166418:
    ldr r1, [r10, #0x7c]
    cmp r3, r1
    blt @L_02166404
    mov r0, #0
    b @L_021664dc
@L_0216642c:
    ldr r5, [r10, #0x7c]
    add r1, r0, #6
    cmp r1, r5
    bgt @L_02166474
    mov r6, #0
    add r1, r0, r0, lsr #31
    b @L_02166468
@L_02166448:
    add r4, r0, r6, lsl #1
    add r2, r6, r1, asr #1
    add r5, r4, #1
    add r3, r10, r2
    strb r5, [r3, #0x180]
    add r2, r4, #2
    strb r2, [r3, #0x1c0]
    add r6, r6, #1
@L_02166468:
    cmp r6, #3
    blt @L_02166448
    b @L_021664d8
@L_02166474:
    ldr r2, =0x2aaaaaab
    mov r3, #6
    smull r1, r4, r2, r5
    add r4, r4, r5, lsr #31
    smull r1, r2, r3, r4
    subs r4, r5, r1
    beq @L_021664d8
    add r1, r4, r4, lsr #31
    and r2, r4, #1
    add r6, r2, r1, asr #1
    mov r7, #0
    add r1, r0, r0, lsr #31
    b @L_021664d0
@L_021664a8:
    add r4, r0, r7, lsl #1
    add r2, r7, r1, asr #1
    add r5, r4, #1
    add r3, r10, r2
    strb r5, [r3, #0x180]
    ldr r2, [r10, #0x7c]
    add r7, r7, #1
    cmp r5, r2
    addlt r2, r4, #2
    strltb r2, [r3, #0x1c0]
@L_021664d0:
    cmp r7, r6
    blt @L_021664a8
@L_021664d8:
    add r0, r0, #6
@L_021664dc:
    ldr r1, [r10, #0x7c]
    cmp r0, r1
    blt @L_0216642c
    add r0, r1, r1, lsr #31
    and r1, r1, #1
    add r2, r1, r0, asr #1
    ldr r1, [r10, #0x1c]
    mov r0, r10
    str r2, [r10, #0x5c]
    bl func_ov066_02167a00
    strh r0, [r10, #0x12]
    ldr r1, [r10, #0x1c]
    mov r0, r10
    bl func_ov066_02167a64
    strh r0, [r10, #0x14]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov066_0216652c(u8 *arg0)
{
    s32 v0;
    s32 v1;
    s32 v3;
    s32 v4;
    s32 t0;
    s32 t1;
    u16 t2;
    t0 = *(s32 *)(arg0 + 0x1C);
    v0 = func_ov066_02167a00((s32)arg0, t0);
    *(u16 *)(arg0 + 0x12) = v0;
    t1 = *(s32 *)(arg0 + 0x1C);
    v1 = func_ov066_02167a64((s32)arg0, t1);
    t2 = *(u16 *)(arg0 + 0x12);
    *(u16 *)(arg0 + 0x14) = v1;
    if (t2 == 0)
        return v1;
    _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 6);
    if (*(u8 *)(((u8 *)&gGameState) + 0x1A) != 0) {
        v3 = func_ov066_02166108((s32)arg0, 6);
        return v3;
    } else {
        v4 = func_ov066_02166108((s32)arg0, 8);
        return v4;
    }
}

extern "C" asm s32 func_ov066_021665a0(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    mov r5, r0
    ldr r0, =data_ov066_02168cf8
    add r1, r5, #0x220
    bl Archive_RequestNewRead
    ldr r0, =data_ov066_02168d14
    add r1, r5, #0x250
    bl func_ov001_0212602c
    ldr r0, =data_ov066_02168d24
    add r1, r5, #0x25c
    bl func_ov001_0212602c
    ldrb r0, [r5, #0x17]
    cmp r0, #0
    beq @L_021665e8
    ldr r0, =data_ov066_02168d38
    add r1, r5, #0x298
    bl Archive_RequestNewRead
@L_021665e8:
    ldr r0, =data_ov066_02168d54
    add r1, r5, #0x214
    bl Archive_RequestNewRead
    ldr r0, [r5, #0x200]
    add r4, r5, #0x200
    cmp r0, #0
    ldrne r0, [r4, #4]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0216668c
    mov r0, r4
    bl func_ov015_02133dc8
    mov r0, #0xfe
    bl func_0209d8b8
    mov r1, #3
    str r1, [sp]
    str r1, [sp, #4]
    mov r2, #1
    str r2, [sp, #8]
    mov r1, #0
    str r1, [sp, #0xc]
    str r1, [sp, #0x10]
    str r1, [sp, #0x14]
    str r2, [sp, #0x18]
    str r2, [sp, #0x1c]
    ldrh r2, [r4, #0xc]
    ldrh r3, [r4, #0xe]
    ldr r1, [r4, #4]
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl Graphics_DrawTextTileWithRuby
    ldrh r2, [r4, #0xc]
    ldrh r1, [r4, #0xe]
    ldr r0, [r4, #4]
    mov r2, r2, lsl #3
    mov r1, r1, lsl #3
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
@L_0216668c:
    ldr r0, =data_020e88a0
    add r1, r5, #0x2a4
    bl _ZN11MatchEngine13func_02077c4cEPPv
    mov r0, r5
    mov r1, #1
    bl func_ov066_02166108
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov066_021666c4(u8 *arg0)
{
    func_ov001_02126240(*(s32 *)(arg0 + 0x214), (arg0 + 0x214), (s32)data_ov066_02168aa0);
}

extern "C" void func_ov066_021666e4(u8 *arg0)
{
    if (*(u8 *)(arg0 + 0x17) != 0)
        ((void (*)(void *, s32, void *, u8 *, s32))func_ov015_02136080)(data_ov066_02168d70, *(s32 *)(arg0 + 0x220), data_ov066_02168ac0, arg0 + 0x2B0, 0);
    else
        ((void (*)(void *, s32, void *, u8 *, s32))func_ov015_02136080)(data_ov066_02168d8c, *(s32 *)(arg0 + 0x220), data_ov066_02168af0, arg0 + 0x2B0, 0);
    ((void (*)(u8 *))Archive_Deallocate)(arg0 + 0x220);
}

extern "C" asm void func_ov066_02166744(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, #0
    mov r10, r0
    ldr r6, =data_ov066_02168da8
    mov r5, r9
    mov r11, #5
    add r8, sp, #0x18
    add r7, sp, #0x14
    ldr r4, =g3DPlaneCtrl
    b @L_021667d4
@L_02166770:
    add r0, r10, r9
    ldrb r1, [r0, #0x100]
    cmp r1, #0
    beq @L_021667d0
    ldr r0, [r10, #0x25c]
    mov r2, r8
    mov r3, r7
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    beq @L_021667d0
    ldr r12, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r4]
    mov r1, r11
    str r5, [sp]
    str r5, [sp, #4]
    str r5, [sp, #8]
    str r2, [sp, #0xc]
    mov r2, r6
    mov r3, #1
    str r12, [sp, #0x10]
    bl C3DSprFile_LoadFromPath
    add r1, r10, r9, lsl #2
    str r0, [r1, #0x2d4]
@L_021667d0:
    add r9, r9, #1
@L_021667d4:
    ldr r0, [r10, #0x7c]
    cmp r9, r0
    blt @L_02166770
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov066_021667f0(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x1c
    mov r4, r0
    ldrh r0, [r4, #0x12]
    cmp r0, #0
    ldrneh r1, [r4, #0x14]
    cmpne r1, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, pc}
    ldr r0, [r4, #0x250]
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    beq @L_021668ac
    ldrb r0, [r4, #0x16]
    add r0, r0, #5
    add r0, r4, r0, lsl #2
    ldr r1, [r0, #0x2b0]
    cmp r1, #0
    beq @L_02166864
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DSprFile_Release
    ldrb r0, [r4, #0x16]
    mov r1, #0
    add r0, r0, #5
    add r0, r4, r0, lsl #2
    str r1, [r0, #0x2b0]
@L_02166864:
    ldr r0, =g3DPlaneCtrl
    ldr r3, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r0]
    mov r1, #0
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r2, [sp, #0xc]
    ldr r2, =data_ov066_02168dc8
    str r3, [sp, #0x10]
    mov r1, #5
    mov r3, #1
    bl C3DSprFile_LoadFromPath
    ldrb r1, [r4, #0x16]
    add r1, r1, #5
    add r1, r4, r1, lsl #2
    str r0, [r1, #0x2b0]
@L_021668ac:
    ldrh r1, [r4, #0x14]
    ldr r0, [r4, #0x25c]
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, pc}
    ldrb r0, [r4, #0x16]
    add r0, r0, #7
    add r0, r4, r0, lsl #2
    ldr r1, [r0, #0x2b0]
    cmp r1, #0
    beq @L_02166904
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DSprFile_Release
    ldrb r0, [r4, #0x16]
    mov r1, #0
    add r0, r0, #7
    add r0, r4, r0, lsl #2
    str r1, [r0, #0x2b0]
@L_02166904:
    ldr r0, =g3DPlaneCtrl
    ldr r3, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r0]
    mov r1, #0
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r2, [sp, #0xc]
    ldr r2, =data_ov066_02168de8
    str r3, [sp, #0x10]
    mov r1, #5
    mov r3, #1
    bl C3DSprFile_LoadFromPath
    ldrb r1, [r4, #0x16]
    add r1, r1, #7
    add r1, r4, r1, lsl #2
    str r0, [r1, #0x2b0]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, pc}
}

#pragma push
#pragma optimization_level 2
extern "C" s32 func_ov066_02166960(u8 *arg0)
{
    s32 r1;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    r5 = 0;
    while (r5 < 9) {
        r1 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x2B0);
        if (r1 != 0) {
            t0 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
            v0 = C3DSprFile_TryFinalize(t0, r1);
            if (v0 != 0) {
                return 0;
            }
        }
        r5 = (r5 + 1);
    }
    r5 = 0;
    while (r5 < *(s32 *)(arg0 + 0x7C)) {
        r1 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x2D4);
        if (r1 != 0) {
            t1 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
            v1 = C3DSprFile_TryFinalize(t1, r1);
            if (v1 != 0) {
                return 0;
            }
        }
        r5 = (r5 + 1);
    }
    return 1;
}
#pragma pop

extern "C" asm void func_ov066_021669f0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, #0
    mov r7, r0
    mov r5, r6
    ldr r4, =g3DPlaneCtrl
    b @L_02166a44
@L_02166a08:
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x2b0]
    cmp r1, #0
    beq @L_02166a40
    ldr r0, [r4]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_02166a40
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x2b0]
    ldr r0, [r4]
    mov r2, r5
    mov r3, r5
    bl C3DSprFile_LoadToVram
@L_02166a40:
    add r6, r6, #1
@L_02166a44:
    cmp r6, #5
    blt @L_02166a08
    mov r6, #0
    mov r5, #8
    mov r4, #3
    mov r9, r6
    ldr r8, =g3DPlaneCtrl
    b @L_02166ab8
@L_02166a64:
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x2d4]
    cmp r1, #0
    beq @L_02166ab4
    ldr r0, [r8]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_02166ab4
    add r1, r7, r6, lsl #2
    ldr r0, [r8]
    ldr r1, [r1, #0x2d4]
    mov r2, r5
    mov r3, r4
    bl C3DPlaneCtrl_ConvertTilesToTex
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x2d4]
    ldr r0, [r8]
    mov r2, r9
    mov r3, r9
    bl C3DSprFile_LoadToVram
@L_02166ab4:
    add r6, r6, #1
@L_02166ab8:
    ldr r0, [r7, #0x7c]
    cmp r6, r0
    blt @L_02166a64
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov066_02166acc(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r7, #0
    add r6, r4, #0x214
    mov r5, #0xc
    b @L_02166af0
@L_02166ae4:
    mla r0, r7, r5, r6
    bl Archive_Deallocate
    add r7, r7, #1
@L_02166af0:
    cmp r7, #0xd
    blt @L_02166ae4
    mov r6, #0
    ldr r5, =g3DPlaneCtrl
    b @L_02166b20
@L_02166b04:
    add r0, r4, r6, lsl #2
    ldr r1, [r0, #0x4d4]
    cmp r1, #0
    beq @L_02166b1c
    ldr r0, [r5]
    bl C3DPlaneCtrl_Destroy
@L_02166b1c:
    add r6, r6, #1
@L_02166b20:
    cmp r6, #6
    blt @L_02166b04
    mov r6, #0
    ldr r5, =g3DPlaneCtrl
    b @L_02166b50
@L_02166b34:
    add r0, r4, r6, lsl #2
    ldr r1, [r0, #0x2d4]
    cmp r1, #0
    beq @L_02166b4c
    ldr r0, [r5]
    bl C3DSprFile_Release
@L_02166b4c:
    add r6, r6, #1
@L_02166b50:
    cmp r6, #0x80
    blt @L_02166b34
    mov r6, #0
    ldr r5, =g3DPlaneCtrl
    b @L_02166b80
@L_02166b64:
    add r0, r4, r6, lsl #2
    ldr r1, [r0, #0x2b0]
    cmp r1, #0
    beq @L_02166b7c
    ldr r0, [r5]
    bl C3DSprFile_Release
@L_02166b7c:
    add r6, r6, #1
@L_02166b80:
    cmp r6, #9
    blt @L_02166b64
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov066_02166b90(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r6, r0
    ldr r0, [r6, #8]
    mov r5, r1
    cmp r0, #5
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =gSprAnimCtrl
    mov r4, #0
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    ldreq r0, [r6, #0x20]
    cmpeq r0, #0
    ldreq r0, [r6, #0x48]
    cmpeq r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r7, =gSprButtonCtrl
    mov r1, r5
    ldr r0, [r7]
    mov r2, r4
    bl func_ov015_02162750
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    b @L_02166cc0
    b @L_02166cc0
    b @L_02166c14
    b @L_02166c30
    b @L_02166c68
    b @L_02166c90
    b @L_02166c4c
@L_02166c14:
    ldr r0, [r7]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov066_02166e78
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166c30:
    ldr r0, [r7]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov066_02166ee4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166c4c:
    ldr r0, [r7]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov066_02166f8c
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166c68:
    ldr r0, [r7]
    bl func_ov015_021629c8
    str r4, [sp]
    mov r1, r0
    ldrh r2, [r5]
    ldrh r3, [r5, #2]
    mov r0, r6
    bl func_ov066_02166fe4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166c90:
    ldr r0, [r7]
    add r1, sp, #4
    bl func_ov015_021629d0
    ldr r0, [r7]
    bl func_ov015_021629c8
    mov r1, #1
    str r1, [sp]
    mov r1, r0
    ldrsh r2, [sp, #4]
    ldrsh r3, [sp, #6]
    mov r0, r6
    bl func_ov066_02166fe4
@L_02166cc0:
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov066_02166cd0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =gKeysRepeated
    mov r6, r0
    ldrh r0, [r2]
    mov r5, r1
    ldr r1, [r6, #8]
    orr r0, r0, r5
    mov r0, r0, lsl #0x10
    cmp r1, #5
    mov r4, r0, lsr #0x10
    ldreqb r0, [r6, #0x1a]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r6, #0x17]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    ldreq r0, [r6, #0x20]
    cmpeq r0, #0
    ldreq r0, [r6, #0x48]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r7, =gSprButtonCtrl
    ldr r0, [r7]
    bl func_ov015_021629ac
    cmp r0, #0
    beq @L_02166d68
    ldr r0, [r7]
    add r0, r0, #0xf00
    ldrh r5, [r0, #0x38]
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0
    mov r4, r5
    strh r1, [r0, #0x38]
@L_02166d68:
    mov r0, r6
    mov r1, r5
    bl func_ov066_0216852c
    tst r5, #1
    beq @L_02166da8
    mov r0, r6
    bl func_ov066_02167368
    cmp r0, #0
    beq @L_02166d98
    mov r0, r6
    bl func_ov066_0216652c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166d98:
    ldr r0, =gAudioPlayer
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166da8:
    tst r4, #0x40
    beq @L_02166dd0
    ldr r1, [r6, #0x1c]
    cmp r1, #3
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    sub r1, r1, #3
    mov r2, #5
    bl func_ov066_02167edc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166dd0:
    tst r4, #0x80
    beq @L_02166df8
    ldr r1, [r6, #0x1c]
    cmp r1, #3
    ldmgeia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    add r1, r1, #3
    mov r2, #5
    bl func_ov066_02167edc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166df8:
    tst r4, #0x20
    beq @L_02166e30
    ldr r1, [r6, #0x1c]
    mov r0, r6
    cmp r1, #0
    cmpne r1, #3
    beq @L_02166e24
    sub r1, r1, #1
    mov r2, #5
    bl func_ov066_02167edc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166e24:
    mvn r1, #0
    bl func_ov066_02168228
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166e30:
    tst r4, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r6, #0x1c]
    mov r0, r6
    cmp r1, #2
    cmpne r1, #5
    beq @L_02166e5c
    add r1, r1, #1
    mov r2, #5
    bl func_ov066_02167edc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166e5c:
    mov r1, #1
    bl func_ov066_02168228
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov066_02166e78(u8 *arg0, s32 arg1)
{
    s32 v0;
    s32 t0;
    if (arg1 <= 0)
        return (s32)arg0;
    if ((arg1 >= 4 && arg1 <= 0xE)) {
        t0 = *(s32 *)(arg0 + 0x1C);
        *(s32 *)(arg0 + 0x40) = t0;
        if ((arg1 - 4) == t0)
            return (s32)arg0;
        v0 = func_ov066_02167edc(arg0, (arg1 - 4), 5);
        return v0;
    } else {
        if ((u32)(arg1 - 2) > (u32)1)
            return (arg1 - 2);
        if (arg1 == 2) {
            arg1 = -1;
        } else {
            arg1 = 1;
        }
        func_ov066_02168228((s32)arg0, arg1);
        *(s32 *)(arg0 + 0x60) = 0xF;
        return 0xF;
    }
}

extern "C" asm void func_ov066_02166ee4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r6, r0
    cmp r5, #0
    ldmleia sp!, {r4, r5, r6, pc}
    ldr r4, =gSprButtonCtrl
    mov r1, r5, lsl #0x10
    ldr r0, [r4]
    mov r1, r1, lsr #0x10
    bl func_ov015_02161dd4
    cmp r5, #1
    blt @L_02166f34
    bgt @L_02166f34
    cmp r0, #0
    ldrneh r1, [r0, #0xc]
    cmpne r1, #0
    ldrne r0, [r4]
    addne r0, r0, #0xf00
    strneh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f34:
    cmp r5, #2
    cmpne r5, #3
    moveq r0, #0
    streq r0, [r6, #0x60]
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r5, #4
    ldmltia sp!, {r4, r5, r6, pc}
    cmp r5, #0xe
    ldrle r0, [r6, #0x40]
    suble r1, r5, #4
    cmple r0, r1
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    bl func_ov066_02167368
    cmp r0, #0
    ldrne r0, =gSprButtonCtrl
    movne r1, #1
    ldrne r0, [r0]
    addne r0, r0, #0xf00
    strneh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov066_02166f8c(u8 *arg0, s32 arg1)
{
    if (arg1 <= 0)
        return (s32)arg0;
    if ((u32)(arg1 - 2) > (u32)1)
        return (arg1 - 2);
    if (*(s32 *)(arg0 + 0x60) == 0)
        return *(s32 *)(arg0 + 0x60);
    s32 t0 = (*(s32 *)(arg0 + 0x60) - 1);
    *(s32 *)(arg0 + 0x60) = t0;
    if (t0 > 0)
        return t0;
    func_ov066_02168228((s32)arg0, (arg1 == 2 ? -1 : 1));
    *(s32 *)(arg0 + 0x60) = 4;
    return 4;
}

extern "C" void func_ov066_02166fe4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
    if (arg1 <= 0)
        return;
    if ((u32)(arg1 - 2) > (u32)1)
        return;
    if (arg4 != 0) {
        *(s32 *)(arg0 + 0x60) = 0;
    }
    return;
}

extern "C" asm void func_ov066_0216700c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    mov r6, #0x20
    mov r8, r0
    str r6, [sp, #4]
    bl G2_GetBG1CharPtr
    mov r7, #0
    mov r1, r0
    mov r0, r7
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r6
    bl DC_FlushRange
    mov r5, #1
    add r4, sp, #4
    str r4, [sp]
    ldr r0, [r8, #0x22c]
    mov r1, r7
    mov r2, r5
    mov r3, r5
    bl func_ov001_02126284
    str r4, [sp]
    mov r1, r0
    ldr r0, [r8, #0x238]
    mov r2, #2
    mov r3, r5
    bl func_ov001_02126284
    str r6, [sp, #4]
    ldr r0, [r8, #0x200]
    add r4, r8, #0x200
    cmp r0, #0
    ldrne r1, [r4, #4]
    cmpne r1, #0
    movne r7, r5
    cmp r7, #0
    beq @L_021670f0
    ldrh r12, [r4, #0xc]
    ldrh r1, [r4, #0xe]
    mov r2, #1
    mov r3, #0
    mul r1, r12, r1
    mov r1, r1, lsl #1
    bl Graphics_SetupScreen
    ldrh r3, [r4, #0xc]
    ldrh r2, [r4, #0xe]
    ldr r0, [r4, #4]
    ldr r1, [sp, #4]
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl GX_LoadBG3Char
    ldrh r1, [r4, #0xc]
    ldrh r0, [r4, #0xe]
    ldr r2, [sp, #4]
    mul r0, r1, r0
    add r0, r2, r0, lsl #5
    str r0, [sp, #4]
@L_021670f0:
    bl Graphics_LoadBGPaletteMain
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov066_021670fc(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    movs r5, r1
    mov r7, r0
    mov r4, r2
    mov r6, r3
    addmi sp, sp, #4
    ldmmiia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r5, #6
    addge sp, sp, #4
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r4, #0
    addlt sp, sp, #4
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r4, #9
    addge sp, sp, #4
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r0, r7, r5, lsl #2
    ldr r0, [r0, #0x4d4]
    cmp r0, #0
    bne @L_0216716c
    ldr r0, =g3DPlaneCtrl
    mov r1, #1
    ldr r0, [r0]
    mov r2, r1
    bl C3DPlaneCtrl_Create
    add r1, r7, r5, lsl #2
    str r0, [r1, #0x4d4]
@L_0216716c:
    add r0, r7, r4, lsl #2
    add r1, r7, r5, lsl #2
    ldr r4, [r1, #0x4d4]
    ldr r2, [r0, #0x2b0]
    ldr r7, =g3DPlaneCtrl
    mov r1, r4
    ldr r0, [r7]
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    mov r5, #0
    ldr r0, [r7]
    mov r1, r4
    mov r2, r6
    mov r3, r5
    bl C3DPlaneCtrl_SetGraphicIdxAll
    ldr r0, [r7]
    mov r1, r4
    mov r2, #0x118
    bl C3DPlaneCtrl_SetDepthAll
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    ldr r0, [r7]
    mov r1, r4
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos_2
    ldr r1, [sp, #0x2c]
    ldr r2, [sp, #0x28]
    mov r3, r4
    mov r2, r2, lsl #0x10
    ldr r0, =gSprButtonCtrl
    str r1, [sp]
    mov r4, #1
    ldr r0, [r0]
    mov r1, r4
    mov r2, r2, lsr #0x10
    bl func_ov015_02162fb4
    movs r8, r0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldrb r0, [sp, #0x34]
    strb r4, [r8, #0x11]
    ldrh r7, [sp, #0x30]
    strb r0, [r8, #0x10]
    strb r4, [r8, #0xf]
    mov r1, r5
    mov r2, r4
    mov r3, r5
    add r0, r8, #0x3a
    strh r7, [r8, #0xc]
    bl func_ov015_02161d00
    mov r1, r5
    mov r2, r6
    mov r3, r5
    add r0, r8, #0x3a
    bl func_ov015_02161d24
    mov r1, r5
    mov r2, r4
    add r0, r8, #0x3e
    mov r3, r5
    bl func_ov015_02161d00
    add r0, r8, #0x3e
    mov r1, r5
    add r2, r6, #1
    mov r3, r5
    bl func_ov015_02161d24
    mov r2, r4
    add r0, r8, #0x42
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d00
    add r0, r8, #0x42
    add r2, r6, #2
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d24
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov066_021672b4(u8 *arg0)
{
    s32 v1;
    if (*(u8 *)(arg0 + 0x17) == 0)
        return (s32)arg0;
    func_ov066_021670fc((s32)arg0, 1, 2, 0, 0xC8, 0xA8, 1, 0x1E, 1, 0);
    v1 = func_ov066_02167314(arg0);
    return v1;
}

extern "C" s32 func_ov066_02167314(u8 *arg0)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 t0;
    if (*(u8 *)(arg0 + 0x17) == 0)
        return *(u8 *)(arg0 + 0x17);
    t0 = *(s32 *)(gSprButtonCtrl);
    v0 = func_ov015_02161dd4(t0, 1);
    if (v0 == 0)
        return v0;
    v1 = func_ov066_02167368((s32)arg0);
    r4 = (u8 *)v0;
    r5 = 1;
    if (v1 != 0) {
        r5 = 0;
    }
    *(u8 *)(r4 + 0x10) = r5;
    v2 = func_ov015_02161ca0((s32)r4);
    return v2;
}

extern "C" asm s32 func_ov066_02167368(...)
{
    stmdb sp!, {r3, lr}
    ldrb r1, [r0, #0x17]
    cmp r1, #0
    beq @L_02167390
    ldr r1, [r0, #0x1c]
    bl func_ov066_02167a00
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, pc}
@L_02167390:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_ov066_02167398(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    u8 *r12;
    u8 *lr;
    s32 v2;
    if (*(u8 *)(arg0 + 0x17) != 0)
        return *(u8 *)(arg0 + 0x17);
    r4 = arg0;
    r12 = (u8 *)*(s32 *)(arg0 + 0x22C);
    if ((s32)r12 != 0) {
        CBgMenuManager_AddStatic((s32)((u8 *)&gBgMenuManager), 0, 1, 0, 1, 0, 1, 1, 0x1E, 10, 1, (s32)(r12 + *(s32 *)(r12 + 0xC)));
    }
    r12 = (u8 *)*(s32 *)(r4 + 0x200);
    lr = (u8 *)(r4 + 0x200);
    r1 = 0;
    if (((s32)r12 != 0 && *(s32 *)(lr + 0x4) != 0)) {
        r1 = 1;
    }
    if (r1 != 0) {
        CBgMenuManager_AddStatic((s32)((u8 *)&gBgMenuManager), 0, 0, 0, 1, 0, 2, 2, (*(u16 *)(lr + 0xC) & 0xFF), (*(u16 *)(lr + 0xE) & 0xFF), 0, (s32)r12);
    }
    v2 = func_ov066_02167480(r4);
    return v2;
}

extern "C" s32 func_ov066_02167480(u8 *arg0)
{
    s32 v0;
    s32 v1;
    if (*(u8 *)(arg0 + 0x17) != 0)
        return *(u8 *)(arg0 + 0x17);
    *(u8 *)(arg0 + 0x10) = 1;
    v0 = CBgMenuManager_DeleteID((s32)((u8 *)&gBgMenuManager), 0, 2, 0);
    if ((s32)*(u8 * *)(arg0 + 0x238) == 0)
        return v0;
    v1 = CBgMenuManager_AddStatic((s32)((u8 *)&gBgMenuManager), 0, 1, 0, 2, 0, 10, 7, 0xC, 3, 2, (s32)(*(u8 * *)(arg0 + 0x238) + *(s32 *)(*(u8 * *)(arg0 + 0x238) + 0xC)));
    return v1;
}

extern "C" s32 func_ov066_02167528(u8 *arg0)
{
    s32 v1;
    s32 t0;
    u8 *t1;
    if (*(u8 *)(arg0 + 0x10) == 0)
        return (s32)arg0;
    if ((s32)*(u8 * *)(arg0 + 0x244) == 0)
        return (s32)arg0;
    t0 = (s32)((*(u8 * *)(arg0 + 0x244) + *(s32 *)(*(u8 * *)(arg0 + 0x244) + 0x4)) + ((*(s32 *)(arg0 + 0xC) / 4) << 5));
    t1 = *(u8 * *)(arg0 + 0x244);
    Graphics_LoadTempPalette(t0, 0, 2, t1);
    v1 = Graphics_LoadBGPaletteMain();
    return v1;
}

extern "C" s32 func_ov066_02167570(u8 *arg0)
{
    u8 *r4;
    s32 v2;
    if (*(u8 *)(arg0 + 0x18) == 0)
        return *(u8 *)(arg0 + 0x18);
    *(u8 *)(arg0 + 0x18) = 0;
    CBgMenuManager_DeleteAll((u8 *)((u8 *)&gBgMenuManager), 0, 0);
    r4 = arg0;
    if (*(u8 *)(r4 + 0x17) != 0) {
        arg0 = (u8 *)*(s32 *)(r4 + 0x8);
        switch ((s32)arg0) {
            case 6:
            case 7:
                func_ov066_02167398(r4);
                break;
            case 3:
                break;
        }
    } else {
        func_ov066_02167398(r4);
    }
    v2 = CBgMenuManager_UpdateGraphics((u8 *)((u8 *)&gBgMenuManager), 0);
    return v2;
}

extern "C" void func_ov066_021675e0(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x4D4) != 0)
        return;
    s32 v0 = C3DPlaneCtrl_Create(*(s32 *)(g3DPlaneCtrl), 1, 1);
    *(s32 *)(arg0 + 0x4D4) = v0;
    C3DPlaneCtrl_SetTex(*(s32 *)(g3DPlaneCtrl), v0, 1, (*(s32 *)(arg0 + 0x2B0) & 0xFF));
    C3DPlaneCtrl_SetGraphicIdxAll(*(s32 *)(g3DPlaneCtrl), v0, 0, 0);
    C3DPlaneCtrl_SetDepthStepAll(*(s32 *)(g3DPlaneCtrl), v0, 0x12C, (0 - 1));
}

extern "C" asm void func_ov066_02167660(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r5, r0
    ldr r0, [r5, #0x4e0]
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r6, =g3DPlaneCtrl
    ldr r1, [r5, #0x7c]
    ldr r0, [r6]
    mov r2, #1
    bl C3DPlaneCtrl_Create
    mov r9, r0
    str r9, [r5, #0x4e0]
    ldr r2, [r5, #0x2c0]
    ldr r0, [r6]
    mov r1, r9
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    mov r4, #0
    ldr r0, [r6]
    mov r1, r9
    mov r2, r4
    mov r3, r4
    bl C3DPlaneCtrl_SetGraphicIdxAll
    ldr r0, [r6]
    mov r1, r9
    mov r2, #0x104
    bl C3DPlaneCtrl_SetDepthAll
    ldr r0, [r6]
    mov r1, r9
    mov r2, #2
    bl C3DPlaneCtrl_ClearFlagAll
    b @L_02167718
@L_021676e8:
    add r0, r5, r4
    ldrb r0, [r0, #0x100]
    cmp r0, #0
    beq @L_02167714
    add r0, r5, r4, lsl #2
    ldr r3, [r0, #0x2d4]
    ldr r0, [r6]
    mov r1, r9
    add r2, r4, #1
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
@L_02167714:
    add r4, r4, #1
@L_02167718:
    ldr r0, [r5, #0x7c]
    cmp r4, r0
    blt @L_021676e8
    mov r10, #0
    mov r8, #1
    mov r7, #2
    mov r4, #0x38
    ldr r6, =g3DPlaneCtrl
    mov r5, #0x48
    b @L_021677a4
@L_02167740:
    mov r1, r10, lsr #0x1f
    rsb r0, r1, r10, lsl #31
    add r0, r1, r0, ror #31
    mul r2, r0, r4
    add r0, r10, r10, lsr #31
    mov r0, r0, asr #1
    mul r1, r0, r5
    add r0, r2, #8
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    add r0, r1, #0x18
    mov r3, r0, lsl #0x10
    ldr r0, [r6]
    mov r1, r9
    add r2, r10, #1
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    str r8, [sp]
    ldr r0, [r6]
    mov r1, r9
    mov r3, r7
    add r2, r10, #1
    bl C3DPlaneCtrl_SetFlag
    add r10, r10, #1
@L_021677a4:
    cmp r10, #6
    blt @L_02167740
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov066_021677b8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    ldrh r0, [r6, #0x12]
    mov r5, #1
    cmp r0, #0
    ldrneh r0, [r6, #0x14]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r6, #0x16]
    ldr r4, =g3DPlaneCtrl
    add r0, r0, #5
    add r0, r6, r0, lsl #2
    ldr r1, [r0, #0x2b0]
    ldr r0, [r4]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_0216783c
    ldrb r1, [r6, #0x16]
    ldr r0, [r4]
    mov r2, #0x1a
    add r1, r1, #5
    add r1, r6, r1, lsl #2
    ldr r1, [r1, #0x2b0]
    mov r3, #3
    bl C3DPlaneCtrl_ConvertTilesToTex
    ldrb r1, [r6, #0x16]
    mov r2, #0
    ldr r0, [r4]
    add r1, r1, #5
    add r1, r6, r1, lsl #2
    ldr r1, [r1, #0x2b0]
    mov r3, r2
    bl C3DSprFile_LoadToVram
@L_0216783c:
    ldrb r0, [r6, #0x16]
    ldr r4, =g3DPlaneCtrl
    add r0, r0, #7
    add r0, r6, r0, lsl #2
    ldr r1, [r0, #0x2b0]
    ldr r0, [r4]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_021678a0
    ldrb r1, [r6, #0x16]
    ldr r0, [r4]
    mov r2, #8
    add r1, r1, #7
    add r1, r6, r1, lsl #2
    ldr r1, [r1, #0x2b0]
    mov r3, #3
    bl C3DPlaneCtrl_ConvertTilesToTex
    ldrb r1, [r6, #0x16]
    mov r2, #0
    ldr r0, [r4]
    add r1, r1, #7
    add r1, r6, r1, lsl #2
    ldr r1, [r1, #0x2b0]
    mov r3, r2
    bl C3DSprFile_LoadToVram
@L_021678a0:
    ldr r0, [r6, #0x4e8]
    cmp r0, #0
    bne @L_021678c4
    ldr r0, =g3DPlaneCtrl
    mov r1, #2
    ldr r0, [r0]
    mov r2, #1
    bl C3DPlaneCtrl_Create
    str r0, [r6, #0x4e8]
@L_021678c4:
    ldrb r0, [r6, #0x16]
    ldr r7, =g3DPlaneCtrl
    ldr r4, [r6, #0x4e8]
    add r0, r0, #5
    add r0, r6, r0, lsl #2
    ldr r3, [r0, #0x2b0]
    ldr r0, [r7]
    mov r1, r4
    mov r2, r5
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    ldr r0, [r7]
    ldr r3, =0x122
    mov r1, r4
    mov r2, r5
    bl C3DPlaneCtrl_SetDepth
    mov r0, #0x70
    str r0, [sp]
    ldr r0, [r7]
    mov r1, r4
    mov r2, r5
    mov r3, #0x18
    bl C3DPlaneCtrl_SetPos
    ldr r0, [r7]
    mov r1, r4
    add r2, r5, #1
    ldrb r3, [r6, #0x16]
    add r3, r3, #7
    add r3, r6, r3, lsl #2
    ldr r3, [r3, #0x2b0]
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    ldr r0, [r7]
    mov r1, r4
    add r2, r5, #1
    mov r3, #0x104
    bl C3DPlaneCtrl_SetDepth
    add r2, r5, #1
    mov r0, #0x78
    str r0, [sp]
    ldr r0, [r7]
    mov r1, r4
    mov r3, #0x30
    bl C3DPlaneCtrl_SetPos
    ldr r0, [r7]
    mov r1, r4
    mov r2, #0
    mov r3, r2
    bl C3DPlaneCtrl_SetGraphicIdxAll
    ldr r0, [r7]
    mov r1, r4
    mov r2, #2
    mov r3, #1
    bl C3DPlaneCtrl_SetFlagAll
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov066_021679a8(s32 arg0)
{
    u8 *r4;
    s32 v1;
    s32 v2;
    s32 t0;
    s32 t1;
    s32 t2;
    r4 = (u8 *)arg0;
    if (*(u16 *)(r4 + 0x12) != 0) {
        func_ov066_02166108(arg0, 4);
        t0 = (*(u8 *)(r4 + 0x16) ^ 1);
        *(u8 *)(r4 + 0x16) = t0;
        v1 = func_ov066_021667f0((s32)r4, t0);
        return v1;
    } else {
        if (*(s32 *)(r4 + 0x4E8) == 0)
            return arg0;
        t1 = *(s32 *)(g3DPlaneCtrl);
        t2 = *(s32 *)(r4 + 0x4E8);
        v2 = C3DPlaneCtrl_ClearFlagAll(t1, t2, 2);
        return v2;
    }
}

extern "C" asm s32 func_ov066_02167a00(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =0x55555556
    mov r5, r1
    smull r1, r3, r4, r5
    add r3, r3, r5, lsr #31
    mov r2, #3
    mov r6, r0
    smull r0, r1, r2, r3
    ldr r2, [r6, #0x44]
    sub r3, r5, r0
    ldr r1, [r6, #0x5c]
    add r0, r2, r3
    bl _s32_div_f
    smull r0, r2, r4, r5
    add r2, r2, r5, lsr #31
    add r0, r6, r2, lsl #6
    add r0, r0, r1
    ldrb r0, [r0, #0x180]
    cmp r0, #0
    moveq r0, #0
    subne r0, r0, #1
    addne r0, r6, r0
    ldrneb r0, [r0, #0x80]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov066_02167a64(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =0x55555556
    mov r5, r1
    smull r1, r3, r4, r5
    add r3, r3, r5, lsr #31
    mov r2, #3
    mov r6, r0
    smull r0, r1, r2, r3
    ldr r2, [r6, #0x44]
    sub r3, r5, r0
    ldr r1, [r6, #0x5c]
    add r0, r2, r3
    bl _s32_div_f
    smull r0, r2, r4, r5
    add r2, r2, r5, lsr #31
    add r0, r6, r2, lsl #6
    add r0, r0, r1
    ldrb r0, [r0, #0x180]
    cmp r0, #0
    moveq r0, #0
    subne r0, r0, #1
    addne r0, r6, r0
    ldrneb r0, [r0, #0x100]
    ldmia sp!, {r4, r5, r6, pc}
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov066_02167ac8(u8 *arg0)
{
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r9;
    s32 r11;
    s32 v0;
    s32 v1;
    s32 t0;
    if (*(u8 *)(arg0 + 0x17) == 0)
        return;
    r9 = 0;
    while ((r5 = 10, r6 = 0x30, r7 = 0x40, r11 = 2, r9 < 6)) {
        v0 = func_ov066_02167d5c((s32)arg0, r9);
        v1 = func_ov066_02167d88((s32)arg0, r9);
        t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
        ((s32 (*)(s32, s32, u16, s32, s32, s32, s32, s32))func_ov015_02162f70)(t0, r11, (r9 + 4), (v0 + 8), (v1 + 8), r7, r6, r5);
        r9 = (r9 + 1);
    }
    return;
}
#pragma pop

extern "C" asm void func_ov066_02167b60(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    mov r4, r0
    ldrb r0, [r4, #0x17]
    mov r6, #1
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r4, #0x4dc]
    cmp r0, #0
    bne @L_02167ba4
    ldr r0, =g3DPlaneCtrl
    mov r2, r6
    ldr r0, [r0]
    mov r1, #2
    bl C3DPlaneCtrl_Create
    str r0, [r4, #0x4dc]
@L_02167ba4:
    ldr r7, =g3DPlaneCtrl
    ldr r5, [r4, #0x4dc]
    ldr r2, [r4, #0x2b4]
    ldr r0, [r7]
    mov r1, r5
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    ldr r0, [r7]
    mov r1, r5
    mov r2, #0xc8
    bl C3DPlaneCtrl_SetDepthAll
    mov r4, #0
    str r4, [sp]
    ldr r0, [r7]
    mov r1, r5
    mov r2, r6
    mov r3, r4
    bl C3DPlaneCtrl_SetGraphicIdx
    mov r9, #0x18
    str r9, [sp]
    ldr r0, [r7]
    mov r1, r5
    mov r2, r6
    mov r3, r4
    bl C3DPlaneCtrl_SetPos
    str r4, [sp]
    mov r8, #2
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #1
    mov r3, r8
    bl C3DPlaneCtrl_SetGraphicIdx
    str r9, [sp]
    ldr r0, [r7]
    add r2, r6, #1
    mov r1, r5
    mov r3, #0xf0
    bl C3DPlaneCtrl_SetPos
    mov r7, #1
    str r7, [sp]
    mov r0, #0xa
    str r0, [sp, #4]
    ldr r0, =gSprButtonCtrl
    mov r2, r8
    ldr r0, [r0]
    mov r1, #3
    mov r3, r5
    bl func_ov015_02163040
    movs r6, r0
    beq @L_02167cbc
    mov r1, r4
    mov r2, r7
    mov r3, r4
    add r0, r6, #0x3a
    bl func_ov015_02161d00
    mov r1, r4
    mov r2, r4
    mov r3, r4
    add r0, r6, #0x3a
    bl func_ov015_02161d24
    mov r1, r4
    mov r2, r7
    add r0, r6, #0x3e
    mov r3, r4
    bl func_ov015_02161d00
    add r0, r6, #0x3e
    mov r2, r7
    mov r1, r4
    mov r3, r4
    bl func_ov015_02161d24
@L_02167cbc:
    mov r4, #2
    str r4, [sp]
    mov r1, #0xa
    mov r8, #3
    str r1, [sp, #4]
    ldr r0, =gSprButtonCtrl
    mov r1, r8
    ldr r0, [r0]
    mov r2, r8
    mov r3, r5
    bl func_ov015_02163040
    movs r7, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r6, #0
    mov r5, #1
    mov r1, r6
    mov r2, r5
    mov r3, r6
    add r0, r7, #0x3a
    bl func_ov015_02161d00
    mov r1, r6
    mov r2, r4
    mov r3, r6
    add r0, r7, #0x3a
    bl func_ov015_02161d24
    mov r1, r6
    mov r2, r5
    mov r3, r6
    add r0, r7, #0x3e
    bl func_ov015_02161d00
    add r0, r7, #0x3e
    mov r2, r8
    mov r1, r6
    mov r3, r6
    bl func_ov015_02161d24
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov066_02167d5c(...)
{
    ldr r2, =0x55555556
    mov r3, #3
    smull r0, r12, r2, r1
    add r12, r12, r1, lsr #31
    smull r0, r2, r3, r12
    sub r12, r1, r0
    mov r0, #0x48
    mul r0, r12, r0
    add r0, r0, #0x10
    bx lr
}

extern "C" asm s32 func_ov066_02167d88(...)
{
    ldr r2, =0x55555556
    mov r3, #0x38
    smull r0, r12, r2, r1
    add r12, r12, r1, lsr #31
    mul r0, r12, r3
    bx lr
}

extern "C" void func_ov066_02167da4(u8 *arg0)
{
    *(s32 *)(arg0 + 0x1C) = 0;
    *(s32 *)(arg0 + 0x20) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    *(s32 *)(arg0 + 0x28) = 0;
    *(s32 *)(arg0 + 0x2C) = 0;
    *(s32 *)(arg0 + 0x30) = 0;
    *(s32 *)(arg0 + 0x38) = 0;
    *(s32 *)(arg0 + 0x3C) = 0;
    *(s32 *)(arg0 + 0x34) = 0;
    *(s32 *)(arg0 + 0x40) = 0;
}

extern "C" void func_ov066_02167dd4(u8 *arg0)
{
    if (*(u8 *)(arg0 + 0x17) == 0)
        return;
    if (*(s32 *)(arg0 + 0x4E4) != 0)
        return;
    s32 v0 = C3DPlaneCtrl_Create(*(s32 *)(g3DPlaneCtrl), 1, 1);
    *(s32 *)(arg0 + 0x4E4) = v0;
    C3DPlaneCtrl_SetTexAll(*(s32 *)(g3DPlaneCtrl), v0, (*(s32 *)(arg0 + 0x2BC) & 0xFF));
    C3DPlaneCtrl_SetGraphicIdxAll(*(s32 *)(g3DPlaneCtrl), v0, 0, 0);
    C3DPlaneCtrl_SetDepthAll(*(s32 *)(g3DPlaneCtrl), v0, 0xFA);
    C3DPlaneCtrl_SetFlagAll(*(s32 *)(g3DPlaneCtrl), v0, 2, 1);
    func_ov066_02167e78((s32)arg0, 0);
}

extern "C" asm s32 func_ov066_02167e78(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    str r6, [r7, #0x1c]
    ldr r5, [r7, #0x4e4]
    mov r4, #1
    bl func_ov066_02167d5c
    str r0, [r7, #0x24]
    mov r0, r7
    mov r1, r6
    bl func_ov066_02167d88
    mov r1, r0, lsl #0x10
    str r0, [r7, #0x28]
    mov r0, r1, asr #0x10
    str r0, [sp]
    ldr r1, [r7, #0x24]
    ldr r0, =g3DPlaneCtrl
    mov r3, r1, lsl #0x10
    ldr r0, [r0]
    mov r1, r5
    mov r2, r4
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov066_02167edc(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    u8 *r6;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v5;
    s32 v6;
    s32 v8;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t5;
    t0 = *(s32 *)(arg0 + 0x1C);
    *(s32 *)(arg0 + 0x20) = 1;
    *(s32 *)(arg0 + 0x34) = 0;
    v0 = func_ov066_02167d5c((s32)arg0, t0, arg2, 0);
    *(s32 *)(arg0 + 0x24) = v0;
    v1 = func_ov066_02167d88((s32)arg0, t0);
    *(s32 *)(arg0 + 0x28) = v1;
    v2 = func_ov066_02167d5c((s32)arg0, arg1);
    *(s32 *)(arg0 + 0x2C) = v2;
    v3 = func_ov066_02167d88((s32)arg0, arg1);
    t1 = *(s32 *)(arg0 + 0x2C);
    t2 = *(s32 *)(arg0 + 0x24);
    *(s32 *)(arg0 + 0x30) = v3;
    *(s32 *)(arg0 + 0x38) = ((t1 - t2) / arg2);
    t3 = ((*(s32 *)(arg0 + 0x30) - *(s32 *)(arg0 + 0x28)) / arg2);
    *(s32 *)(arg0 + 0x3C) = t3;
    r6 = arg0;
    r4 = arg2;
    arg2 = *(s32 *)(arg0 + 0x2C);
    arg0 = (u8 *)*(s32 *)(arg0 + 0x24);
    if ((s32)arg0 > arg2) {
        *(s32 *)(r6 + 0x38) = (s32)(0 - (s32)((s32)(arg0 - arg2) / r4));
    }
    arg2 = *(s32 *)(r6 + 0x30);
    arg0 = (u8 *)*(s32 *)(r6 + 0x28);
    if ((s32)arg0 > arg2) {
        *(s32 *)(r6 + 0x3C) = (s32)(0 - (s32)((s32)(arg0 - arg2) / r4));
    }
    _ZN12SoundManager9PlaySoundEi((u8 *)((u8 *)&gAudioPlayer), 8);
    *(s32 *)(r6 + 0x1C) = arg1;
    v5 = func_ov066_02167a00((s32)r6, arg1);
    *(u16 *)(r6 + 0x12) = v5;
    t5 = *(s32 *)(r6 + 0x1C);
    v6 = func_ov066_02167a64((s32)r6, t5);
    *(u16 *)(r6 + 0x14) = v6;
    func_ov066_021679a8((s32)r6);
    v8 = func_ov066_02167314(r6);
    return v8;
}

extern "C" asm void func_ov066_02167ffc(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r1, [r0, #0x34]
    ldr r2, [r0, #0x38]
    add r1, r1, #1
    ldr r3, [r0, #0x24]
    ldr r12, [r0, #0x28]
    ldr r4, [r0, #0x3c]
    mla r3, r2, r1, r3
    cmp r2, #0
    mla r12, r4, r1, r12
    str r1, [r0, #0x34]
    ldr r1, [r0, #0x4e4]
    mov r2, #1
    ldr lr, [r0, #0x2c]
    bge @L_02168048
    cmp r3, lr
    movlt r3, lr
    b @L_02168050
@L_02168048:
    cmp r3, lr
    movgt r3, lr
@L_02168050:
    cmp r4, #0
    ldr lr, [r0, #0x30]
    bge @L_02168068
    cmp r12, lr
    movlt r12, lr
    b @L_02168070
@L_02168068:
    cmp r12, lr
    movgt r12, lr
@L_02168070:
    ldr lr, [r0, #0x2c]
    cmp r3, lr
    ldreq lr, [r0, #0x30]
    mov r3, r3, lsl #0x10
    cmpeq r12, lr
    moveq lr, #0
    streq lr, [r0, #0x20]
    streq lr, [r0, #0x34]
    mov r0, r12, lsl #0x10
    mov r12, r0, asr #0x10
    ldr r0, =g3DPlaneCtrl
    str r12, [sp]
    ldr r0, [r0]
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" void func_ov066_021680b8(u8 *arg0)
{
    *(s32 *)(arg0 + 0x44) = 0;
    *(s32 *)(arg0 + 0x48) = 0;
    *(s32 *)(arg0 + 0x58) = 0;
    *(s32 *)(arg0 + 0x50) = 0;
    *(s32 *)(arg0 + 0x54) = 0;
    *(s32 *)(arg0 + 0x4C) = 0;
    *(s32 *)(arg0 + 0x60) = 0;
}

extern "C" asm void func_ov066_021680dc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r5, [r10, #0x4e0]
    ldr r7, [r10, #0x44]
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =g3DPlaneCtrl
    mov r9, #0
    ldr r0, [r4]
    mov r1, r5
    mov r2, r9
    mov r3, r9
    bl C3DPlaneCtrl_SetPos_2
    ldr r0, [r4]
    mov r1, r5
    mov r2, #2
    bl C3DPlaneCtrl_ClearFlagAll
    mov r11, #1
    b @L_02168218
@L_02168128:
    add r0, r10, r7
    ldrb r6, [r0, #0x180]
    cmp r6, #0
    beq @L_02168194
    mov r0, r10
    mov r1, r9
    bl func_ov066_02167d5c
    add r8, r0, #8
    mov r0, r10
    mov r1, r9
    bl func_ov066_02167d88
    add r0, r0, #8
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r8, lsl #0x10
    str r0, [sp]
    mov r3, r1, asr #0x10
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    bl C3DPlaneCtrl_SetPos
    str r11, [sp]
    ldr r0, [r4]
    mov r2, r6
    mov r1, r5
    mov r3, #2
    bl C3DPlaneCtrl_SetFlag
@L_02168194:
    add r0, r10, r7
    ldrb r6, [r0, #0x1c0]
    cmp r6, #0
    beq @L_02168204
    mov r0, r10
    add r1, r9, #3
    bl func_ov066_02167d5c
    add r8, r0, #8
    mov r0, r10
    add r1, r9, #3
    bl func_ov066_02167d88
    add r0, r0, #8
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r8, lsl #0x10
    str r0, [sp]
    mov r3, r1, asr #0x10
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    bl C3DPlaneCtrl_SetPos
    mov r0, #1
    str r0, [sp]
    ldr r0, [r4]
    mov r2, r6
    mov r1, r5
    mov r3, #2
    bl C3DPlaneCtrl_SetFlag
@L_02168204:
    ldr r0, [r10, #0x5c]
    add r7, r7, #1
    cmp r7, r0
    movge r7, #0
    add r9, r9, #1
@L_02168218:
    cmp r9, #3
    blt @L_02168128
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov066_02168228(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r2, [r10, #0x44]
    ldr r5, [r10, #0x4e0]
    mov r9, r1
    add r4, r2, r9
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r10, #0x5c]
    cmp r4, #0
    sublt r4, r0, #1
    blt @L_02168260
    cmp r4, r0
    movge r4, #0
@L_02168260:
    mov r6, #0
    mov r0, #1
    str r0, [r10, #0x48]
    str r6, [r10, #0x4c]
    cmp r9, #0
    bge @L_02168310
    mov r0, r10
    mov r1, r6
    bl func_ov066_02167d5c
    sub r7, r0, #0x40
    mov r0, r10
    mov r1, r6
    bl func_ov066_02167d88
    add r1, r10, r4
    ldrb r6, [r1, #0x180]
    add r0, r0, #8
    cmp r6, #0
    beq @L_021682ec
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r3, r7, lsl #0x10
    ldr r8, =g3DPlaneCtrl
    str r0, [sp]
    ldr r0, [r8]
    mov r1, r5
    mov r2, r6
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    mov r0, #1
    str r0, [sp]
    ldr r0, [r8]
    mov r1, r5
    mov r2, r6
    mov r3, #2
    bl C3DPlaneCtrl_SetFlag
@L_021682ec:
    mov r0, r10
    mov r1, #3
    bl func_ov066_02167d88
    add r1, r10, r4
    ldrb r6, [r1, #0x1c0]
    add r0, r0, #8
    cmp r6, #0
    beq @L_021683f8
    b @L_021683b4
@L_02168310:
    ldr r1, [r10, #0x5c]
    add r0, r2, #3
    bl _s32_div_f
    mov r8, r1
    mov r0, r10
    mov r1, #2
    bl func_ov066_02167d5c
    add r7, r0, #0x50
    mov r0, r10
    mov r1, #2
    bl func_ov066_02167d88
    add r1, r10, r8
    ldrb r6, [r1, #0x180]
    add r0, r0, #8
    cmp r6, #0
    beq @L_02168394
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r3, r7, lsl #0x10
    ldr r11, =g3DPlaneCtrl
    str r0, [sp]
    ldr r0, [r11]
    mov r1, r5
    mov r2, r6
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    mov r0, #1
    str r0, [sp]
    ldr r0, [r11]
    mov r1, r5
    mov r2, r6
    mov r3, #2
    bl C3DPlaneCtrl_SetFlag
@L_02168394:
    mov r0, r10
    mov r1, #3
    bl func_ov066_02167d88
    add r1, r10, r8
    ldrb r6, [r1, #0x1c0]
    add r0, r0, #8
    cmp r6, #0
    beq @L_021683f8
@L_021683b4:
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    mov r3, r7, lsl #0x10
    ldr r8, =g3DPlaneCtrl
    str r0, [sp]
    ldr r0, [r8]
    mov r1, r5
    mov r2, r6
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    mov r0, #1
    str r0, [sp]
    ldr r0, [r8]
    mov r1, r5
    mov r2, r6
    mov r3, #2
    bl C3DPlaneCtrl_SetFlag
@L_021683f8:
    rsb r1, r9, #0
    mov r0, #0x48
    mul r5, r1, r0
    ldr r2, =0x66666667
    mov r3, #0
    mov r0, r5, lsr #0x1f
    smull r1, r6, r2, r5
    add r6, r0, r6, asr #1
    ldr r0, =gAudioPlayer
    mov r1, #8
    str r6, [r10, #0x58]
    str r3, [r10, #0x50]
    str r5, [r10, #0x54]
    bl _ZN12SoundManager9PlaySoundEi
    ldr r1, [r10, #0x1c]
    mov r0, r10
    str r4, [r10, #0x44]
    bl func_ov066_02167a00
    strh r0, [r10, #0x12]
    ldr r1, [r10, #0x1c]
    mov r0, r10
    bl func_ov066_02167a64
    strh r0, [r10, #0x14]
    mov r0, r10
    bl func_ov066_021679a8
    mov r0, r10
    bl func_ov066_02167314
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov066_02168474(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0, #0x4c]
    ldr r2, [r0, #0x58]
    add r1, r1, #1
    ldr r3, [r0, #0x50]
    str r1, [r0, #0x4c]
    mla r3, r2, r1, r3
    cmp r2, #0
    ldr r1, [r0, #0x4e0]
    ldr r2, [r0, #0x54]
    bge @L_021684ac
    cmp r3, r2
    movlt r3, r2
    b @L_021684b4
@L_021684ac:
    cmp r3, r2
    movgt r3, r2
@L_021684b4:
    ldr r2, [r0, #0x54]
    cmp r3, r2
    bne @L_021684d4
    mov r1, #0
    str r1, [r0, #0x48]
    str r1, [r0, #0x4c]
    bl func_ov066_021680dc
    ldmia sp!, {r3, pc}
@L_021684d4:
    ldr r0, =g3DPlaneCtrl
    mov r2, r3, lsl #0x10
    ldr r0, [r0]
    mov r2, r2, asr #0x10
    mov r3, #0
    bl C3DPlaneCtrl_SetPos_2
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_ov066_021684f4(u8 *arg0)
{
    s32 v1;
    if ((*(u8 *)(arg0 + 0x17) == 0 || (u32)(*(s32 *)(arg0 + 0x8) - 6) <= (u32)1)) {
        func_ov066_02167480(arg0);
    }
    v1 = CBgMenuManager_UpdateGraphics((s32)((u8 *)&gBgMenuManager), 0);
    return v1;
}

extern "C" s32 func_ov066_0216852c(u8 *arg0, s32 arg1)
{
    s32 local[1];
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    t0 = *(s32 *)(gSprButtonCtrl);
    t1 = ((u32)((arg1 & *(u16 *)(arg0 + 0x78)) << 0x10) >> 0x10);
    v0 = func_ov015_021621dc(t0, t1, (s32)((u8 *)local));
    if (v0 == 0)
        return v0;
    t2 = *(s32 *)(gSprButtonCtrl);
    t3 = *(s32 *)(((u8 *)local));
    v1 = func_ov015_021624cc(t2, t3);
    return v1;
}

extern "C" void func_ov066_02168578(void)
{
}

extern "C" void func_ov066_0216857c(u8 *arg0)
{
    s32 v13;
    s32 v17;
    s32 t0;
    s32 t1;
    s32 t2;
    u8 t3;
    *(s32 *)(arg0 + 0x8) = 0;
    *(u8 *)(arg0 + 0x1A) = 0;
    *(u8 *)(arg0 + 0x17) = 0;
    *(u8 *)(arg0 + 0x19) = 0;
    *(u8 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x7C) = 0;
    *(u8 *)(arg0 + 0x16) = 0;
    *(u16 *)(arg0 + 0x78) = 1;
    *(s32 *)(arg0 + 0xC) = 0;
    *(u8 *)(arg0 + 0x10) = 0;
    func_ov066_02167da4(arg0);
    func_ov066_021680b8(arg0);
    MI_CpuFill8((s32)(arg0 + 0x214), 0, 0x9C);
    MI_CpuFill8((s32)(arg0 + 0x80), 0, 0x80);
    MI_CpuFill8((s32)(arg0 + 0x100), 0, 0x80);
    MI_CpuFill8((s32)(arg0 + 0x200), 0, 0x14);
    MI_CpuFill8((s32)(arg0 + 0x2B0), 0, 0x24);
    MI_CpuFill8((s32)((arg0 + 0xD4) + 0x400), 0, 0x18);
    MI_CpuFill8((s32)(arg0 + 0x2D4), 0, 0x200);
    MI_CpuFill8((s32)(arg0 + 0x180), 0, 0x80);
    t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02161f84(t0);
    t1 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    func_ov015_021616a4(t1);
    t2 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    C3DPlaneCtrl_Acquire(t2);
    *(s32 *)(arg0 + 0x6C) = (0x18 - 0x19);
    *(s32 *)(arg0 + 0x68) = 1;
    *(s32 *)(arg0 + 0x64) = 0;
    *(s32 *)(arg0 + 0x70) = 0;
    *(u8 *)(arg0 + 0x74) = 0;
    *(u8 *)(arg0 + 0x75) = 0;
    if (*(u8 *)(((u8 *)&gGameState) + 0x1A) != 0) {
        t3 = *(u8 *)(((u8 *)&gWirelessUtil) + 0x64);
        *(u8 *)(arg0 + 0x17) = t3;
    }
    v13 = _ZN11MatchEngine13func_0206ce7cEv((s32)((u8 *)&data_020e88a0));
    *(u16 *)(arg0 + 0x12) = v13;
    CBgMenuManager_Init((s32)((u8 *)&gBgMenuManager), 0);
    if (*(u8 *)(((u8 *)&gGameState) + 0x1A) != 0) {
        *(u16 *)(arg0 + 0x12) = 0;
        func_ov015_02133e50((s32)(arg0 + 0x200), 0x1C, 6);
        func_ov066_021665a0((s32)arg0);
        v17 = func_0209d8b8((6 + 0x17C));
        func_ov066_02165d98(arg0, v17);
        return;
    } else {
        func_ov066_02166108((s32)arg0, 8);
        return;
    }
}

extern "C" asm void func_ov066_02168734(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r0, [r4, #8]
    cmp r0, #5
    cmpne r0, #6
    beq @L_02168754
    cmp r0, #7
    bne @L_02168794
@L_02168754:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    beq @L_02168794
    ldr r5, =gWirelessUtil
    mov r1, #0
    mov r0, r5
    bl func_0209c004
    cmp r0, #0
    ldrneb r0, [r5, #0x64]
    cmpne r0, #0
    beq @L_02168794
    mov r0, r5
    bl func_0209bff0
    mov r0, r5
    bl func_0209c628
@L_02168794:
    ldr r0, [r4, #8]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_021688c8
    b @L_021688c8
    b @L_021687c8
    b @L_021688c8
    b @L_02168810
    b @L_02168888
    b @L_021688ac
    b @L_021688a4
    b @L_021688a4
    b @L_021688c0
@L_021687c8:
    add r0, r4, #0x214
    mov r1, #0xd
    bl Archive_TryFinalize
    cmp r0, #0
    beq @L_021688c8
    mov r0, r4
    bl func_ov066_021666c4
    mov r0, r4
    bl func_ov066_021666e4
    mov r0, r4
    bl func_ov066_021661bc
    mov r0, r4
    bl func_ov066_02166744
    mov r0, r4
    bl func_ov066_021667f0
    mov r0, r4
    mov r1, #2
    b @L_02168880
@L_02168810:
    mov r0, r4
    bl func_ov066_02166960
    cmp r0, #0
    beq @L_021688c8
    mov r0, r4
    bl func_ov066_021669f0
    mov r0, r4
    bl func_ov066_02167ac8
    mov r0, r4
    bl func_ov066_02167b60
    mov r0, r4
    bl func_ov066_021675e0
    mov r0, r4
    bl func_ov066_021672b4
    mov r0, r4
    bl func_ov066_02167570
    mov r0, r4
    bl func_ov066_02167660
    mov r0, r4
    bl func_ov066_02167dd4
    mov r0, r4
    bl func_ov066_021677b8
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
@L_02168878:
    mov r0, r4
    mov r1, #5
@L_02168880:
    bl func_ov066_02166108
    b @L_021688c8
@L_02168888:
    mov r0, r4
    bl func_ov066_02166960
    cmp r0, #0
    beq @L_021688c8
    mov r0, r4
    bl func_ov066_021677b8
    b @L_02168878
@L_021688a4:
    mov r0, r4
    bl func_ov066_02167570
@L_021688ac:
    ldr r0, [r4, #4]
    add r1, r4, #0x64
    ldr r2, [r0]
    ldr r2, [r2, #0x3c]
    blx r2
@L_021688c0:
    mov r0, r4
    bl func_ov066_021684f4
@L_021688c8:
    ldr r0, =gSprAnimCtrl
    ldr r5, =gDeltaTime
    ldr r0, [r0]
    ldr r1, [r5]
    bl func_ov015_02161710
    ldr r0, [r5]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    beq @L_02168900
    bl _ffltu
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_0216890c
@L_02168900:
    bl _ffltu
    mov r1, #0x3f000000
    bl _fsub
@L_0216890c:
    bl _ffix
    ldr r2, =g3DSpriteCtrl
    mov r1, r0
    ldr r0, [r2]
    bl func_02095ea4
    ldr r0, [r4, #0x20]
    cmp r0, #0
    beq @L_02168934
    mov r0, r4
    bl func_ov066_02167ffc
@L_02168934:
    ldr r0, [r4, #0x48]
    cmp r0, #0
    beq @L_02168948
    mov r0, r4
    bl func_ov066_02168474
@L_02168948:
    ldr r0, [r4, #0xc]
    add r0, r0, #1
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #27
    add r0, r1, r0, ror #27
    str r0, [r4, #0xc]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov066_02168978(u8 *arg0)
{
    switch (*(s32 *)(arg0 + 0x8)) {
    case 2:
        ((s32 (*)(...))func_ov066_0216700c)(arg0);
        ((s32 (*)(...))Graphics_LoadBGPaletteMain)();
        ((s32 (*)(...))func_ov066_02166108)(arg0, 3);
        break;
    case 5:
        ((s32 (*)(...))Graphics_LoadBGPaletteMain)();
    case 6:
    case 7:
        ((s32 (*)(...))CBgMenuManager_Draw)(gBgMenuManager, 0);
        ((s32 (*)(...))func_ov066_02167528)(arg0);
        break;
    }
}

extern "C" s32 func_ov066_021689e8(u8 *arg0)
{
    s32 v10;
    s32 t0;
    s32 t1;
    u16 t2;
    s32 t3;
    t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02161fdc(t0, (s32)((u8 *)&gSprButtonCtrl));
    t1 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    func_ov015_021616dc(t1);
    t2 = *(u16 *)(arg0 + 0x12);
    _ZN11MatchEngine13func_0206ce6cEt((s32)((u8 *)&data_020e88a0), t2);
    ((s32 (*)(...))func_ov066_02168578)((s32)arg0);
    Archive_Close((s32)(arg0 + 0x214), 0xD);
    func_ov066_02166acc((s32)arg0);
    _ZN11MatchEngine13func_02077ce4Ev((s32)((u8 *)&data_020e88a0));
    t3 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    C3DPlaneCtrl_Release(t3);
    func_ov015_02133e8c((s32)(arg0 + 0x200), 1);
    CBgMenuManager_Finalize((s32)((u8 *)&gBgMenuManager), 0);
    v10 = ((VCall *)arg0)->f27();
    return v10;
}

extern "C" s32 func_ov066_02168a88(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov066_02168a9c(void)
{
}
