#include "ov065/Unk_ov065_02165d60.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_ov065_02165d60(...);
extern "C" s32 func_ov065_02165e9c(...);
extern "C" void func_ov065_021661fc(u8 *arg0);
extern "C" void func_ov065_02166250(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_ov065_0216628c(s32 arg0);
extern "C" void func_ov065_021662fc(void);
extern "C" void func_ov065_02166300(u8 *arg0);
extern "C" s32 func_ov065_02166340(...);
extern "C" s32 func_ov065_021663ec(...);
extern "C" s32 func_ov065_0216655c(...);
extern "C" s32 func_ov065_021665ec(...);
extern "C" s32 func_ov065_021666c8(...);
extern "C" void func_ov065_0216678c(void);
extern "C" void func_ov065_021668cc(void);
extern "C" s32 func_ov065_02166a8c(u8 *arg0, s32 arg1);
extern "C" void func_ov065_02166af8(void);
extern "C" s32 func_ov065_02166ba4(u8 *arg0, s32 arg1);
extern "C" void func_ov065_02166bfc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4);
extern "C" void func_ov065_02166c24(void);
extern "C" s32 func_ov065_02166c54(...);
extern "C" void func_ov065_02166e0c(s32 arg0);
extern "C" s32 func_ov065_02166e5c(...);
extern "C" s32 func_ov065_02166ea4(u8 *arg0);
extern "C" void func_ov065_02166ec0(s32 arg0);
extern "C" s32 func_ov065_02166f10(...);
extern "C" void func_ov065_02166f40(u8 *arg0);
extern "C" void func_ov065_02166f80(u8 *arg0);
extern "C" s32 func_ov065_02167000(...);
extern "C" s32 func_ov065_02167158(...);
extern "C" s32 func_ov065_02167348(s32 arg0);
extern "C" s32 func_ov065_021673a0(...);
extern "C" s32 func_ov065_02167404(...);
extern "C" s32 func_ov065_02167468(...);
extern "C" s32 func_ov065_021674f0(...);
extern "C" s32 func_ov065_021676d8(...);
extern "C" s32 func_ov065_02167704(...);
extern "C" void func_ov065_02167720(u8 *arg0);
extern "C" void func_ov065_02167750(u8 *arg0);
extern "C" s32 func_ov065_021677e8(...);
extern "C" s32 func_ov065_0216784c(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov065_02167974(...);
extern "C" void func_ov065_02167a30(u8 *arg0);
extern "C" void func_ov065_02167a54(void);
extern "C" s32 func_ov065_02167ba0(...);
extern "C" s32 func_ov065_02167df4(...);
extern "C" void func_ov065_02167e74(void);
extern "C" s32 func_ov065_02167e8c(u8 *arg0, s32 arg1);
extern "C" s32 func_ov065_02167ed8(...);
extern "C" void func_ov065_02167fa0(void);
extern "C" void func_ov065_021680d0(u8 *arg0);
extern "C" s32 func_ov065_02168278(u8 *arg0);
extern "C" void func_ov065_021682b8(u8 *arg0);
extern "C" s32 func_ov065_0216833c(s32 arg0);
extern "C" void func_ov065_02168350(void);

extern "C" char data_020c463a[];
extern "C" char g3DSpriteCtrl[];
extern "C" char gSprAnimCtrl[];
extern "C" char gSprButtonCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gKeysRepeated[];
extern "C" char gDeltaTime[];
extern "C" char gAudioPlayer[];
extern "C" char gBgMenuManager[];
extern "C" char data_020cabe8[];
extern "C" char data_020cb6e0[];
extern "C" char gMainScreen0[];
extern "C" char data_020e88a0[];
extern "C" char data_ov065_02168354[];
extern "C" char data_ov065_021684ec[];
extern "C" char data_ov065_02168500[];
extern "C" char data_ov065_02168520[];
extern "C" char data_ov065_02168530[];
extern "C" char data_ov065_02168544[];
extern "C" char data_ov065_02168560[];
extern "C" char data_ov065_02168580[];
extern "C" char data_ov065_021685a0[];
extern "C" char data_ov065_021685c0[];
extern "C" s32 DC_FlushRange(...);
extern "C" s32 G2_GetBG1CharPtr(...);
extern "C" void G2_GetBG2CharPtr(void);
extern "C" void G2_GetBG3CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void _ZN12SceneManager11SetNextModeEl(void);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" void _ZN13ScreenManager13FadeMainBlackEv(void);
extern "C" void _ZN13ScreenManager8PopSceneEi(void);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" void _ZN11MatchEngine13func_0206cd78Ei(void);
extern "C" s32 _ZN11MatchEngine13func_0206ce6cEt(...);
extern "C" void _ZN11MatchEngine13func_0206ce7cEv(void);
extern "C" s32 _ZN11MatchEngine13func_02077c4cEPPv(...);
extern "C" s32 _ZN11MatchEngine13func_02077ce4Ev(...);
extern "C" void _ZN11MatchEngine13func_020795b4Eiii(void);
extern "C" s32 _ZdlPv(...);
extern "C" void GX_LoadBG1Scr(void);
extern "C" void GX_LoadBG2Scr(void);
extern "C" void GX_LoadBG3Scr(void);
extern "C" s32 _ffltu(...);
extern "C" void _s32_div_f(void);
extern "C" s32 _ffix(...);
extern "C" s32 _fadd(...);
extern "C" s32 _fsub(...);
extern "C" void C3DPlaneCtrl_Acquire(void);
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
extern "C" s32 func_02095ea4(...);
extern "C" void C3DSprFile_LoadFromPath(void);
extern "C" void C3DSprFile_TryFinalize(void);
extern "C" void C3DSprFile_Release(void);
extern "C" void C3DSprFile_IsInVram(void);
extern "C" void C3DSprFile_LoadToVram(void);
extern "C" s32 Graphics_LoadBGPaletteMain(...);
extern "C" void Graphics_FadeScreensBlack(void);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" s32 Archive_TryFinalize(...);
extern "C" s32 Archive_Close(...);
extern "C" s32 Archive_Deallocate(...);
extern "C" void Archive_PackHeaderGetOffsetAndSize(void);
extern "C" s32 func_ov015_02136080(...);
extern "C" void CBgMenuManager_Init(void);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" s32 CBgMenuManager_DeleteAll(...);
extern "C" s32 CBgMenuManager_UpdateGraphics(...);
extern "C" void func_ov015_021616a4(void);
extern "C" s32 func_ov015_021616dc(...);
extern "C" s32 func_ov015_02161710(...);
extern "C" void func_ov015_02161760(void);
extern "C" void func_ov015_02161ca0(void);
extern "C" void func_ov015_02161d00(void);
extern "C" void func_ov015_02161d24(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" void func_ov015_02161f84(void);
extern "C" s32 func_ov015_02161fdc(...);
extern "C" s32 func_ov015_021621dc(...);
extern "C" s32 func_ov015_021624cc(...);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_021629d0(void);
extern "C" void func_ov015_02162f70(void);
extern "C" void func_ov015_02162fb4(void);
extern "C" void func_ov015_02163040(void);
extern "C" void func_ov087_02182220(void);
extern "C" void func_ov087_0218225c(void);
extern "C" void func_ov087_02182270(void);
extern "C" void gGameState(void);
extern "C" s32 sprintf(...);

extern "C" asm s32 func_ov065_02165d60(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r0, [r4, #8]
    cmp r0, r1
    ldmeqia sp!, {r4, r5, r6, pc}
    str r1, [r4, #8]
    cmp r1, #3
    beq @L_02165d94
    cmp r1, #6
    beq @L_02165da0
    cmp r1, #7
    beq @L_02165e6c
    ldmia sp!, {r4, r5, r6, pc}
@L_02165d94:
    mov r0, #1
    strb r0, [r4, #0x11]
    ldmia sp!, {r4, r5, r6, pc}
@L_02165da0:
    mov r0, #6
    bl Graphics_FadeScreensBlack
    ldr r0, =data_020cb6e0
    ldrb r0, [r0, #0x283]
    cmp r0, #1
    bne @L_02165dd8
    ldr r0, =data_020e88a0
    mov r3, #0x9f
    mov r1, #0
    mov r2, #2
    bl _ZN11MatchEngine13func_020795b4Eiii
    ldr r0, =data_020c463a
    mov r1, #1
    strb r1, [r0]
@L_02165dd8:
    ldr r1, =data_020cb6e0
    mov r5, #1
    mov r4, #0
    ldr r0, =gGameState
    strb r5, [r1, #0x281]
    strb r4, [r0, #0x1a]
    strb r4, [r0, #0x1b]
    strb r5, [r0, #0x19]
    strb r4, [r0, #0x18]
    ldr r2, [r1, #0x26c]
    ldrb r1, [r1, #0x282]
    ldr r0, =0x834
    add r2, r2, #8
    mla r0, r1, r0, r2
    add r2, r0, #0x3d4
    ldr r0, =data_020e88a0
    mov r1, r4
    add r6, r2, #0x400
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrh r1, [r0, #0x3a]
    strh r1, [r0, #0x28]
    ldrh r1, [r6, #0x3a]
    strh r1, [r6, #0x28]
    ldrh r2, [r0, #0x3a]
    ldrh r1, [r6, #0x3a]
    cmp r2, r1
    bne @L_02165e4c
    moveq r5, r4
    strb r5, [r0, #0x2c]
@L_02165e4c:
    ldr r0, =data_020e88a0
    ldr r1, =0x1fd
    bl _ZN11MatchEngine13func_0206cd78Ei
    mov r0, #6
    bl Graphics_FadeScreensBlack
    mov r0, #2
    bl _ZN12SceneManager11SetNextModeEl
    ldmia sp!, {r4, r5, r6, pc}
@L_02165e6c:
    ldr r0, [r4, #4]
    bl _ZN13ScreenManager13FadeMainBlackEv
    ldr r0, [r4, #4]
    mov r1, #0
    bl _ZN13ScreenManager8PopSceneEi
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov065_02165e9c(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    ldr r1, [r10, #0x25c]
    ldr r0, =0xaaaaaaab
    ldr r11, [r10, #0x210]
    umull r0, r8, r1, r0
    mov r0, #0
    str r0, [sp]
    mov r8, r8, lsr #8
    cmp r8, #0x80
    mov r4, #0
    movgt r8, #0x80
    str r0, [sp, #8]
    str r0, [sp, #4]
    mov r9, r0
    str r0, [r10, #0x74]
    ldr r5, [r10, #0x258]
    b @L_02165fc8
@L_02165ee8:
    mov r0, r5
    bl func_ov087_02182220
    cmp r0, #0
    beq @L_02165fc0
    mov r0, r5
    bl func_ov087_02182270
    mov r6, r0
    mov r0, r5
    bl func_ov087_0218225c
    mov r7, r0
    cmp r6, #0
    cmpne r7, #0
    beq @L_02165fc0
    cmp r7, #1
    streq r9, [sp, #8]
    streq r6, [sp, #4]
    cmp r9, #0
    blt @L_02165f38
    cmp r9, #0x80
    blo @L_02165f40
@L_02165f38:
    mov r0, r4
    b @L_02165f58
@L_02165f40:
    ldr r0, =data_020cabe8
    and r2, r9, #7
    ldrb r1, [r0, r9, asr #3]
    mov r0, #1
    tst r1, r0, lsl r2
    moveq r0, r4
@L_02165f58:
    cmp r0, #0
    bne @L_02165f80
    sub r0, r7, #1
    add r1, r10, r0
    ldr r0, [r10, #0x74]
    add r0, r0, #1
    str r0, [r10, #0x74]
    mov r0, #0xff
    strb r0, [r1, #0x78]
    b @L_02165fc0
@L_02165f80:
    mov r0, r11
    mov r1, r6
    mov r2, r4
    mov r3, r4
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    beq @L_02165fc0
    sub r0, r7, #1
    add r0, r10, r0
    strb r9, [r0, #0x78]
    strb r6, [r0, #0xf8]
    ldr r1, [r10, #0x74]
    mov r0, #1
    str r0, [sp]
    add r0, r1, #1
    str r0, [r10, #0x74]
@L_02165fc0:
    add r9, r9, #1
    add r5, r5, #0x180
@L_02165fc8:
    cmp r9, r8
    blt @L_02165ee8
    ldr r0, [sp]
    cmp r0, #0
    mov r0, #0
    bne @L_02165ff4
    ldr r1, [sp, #8]
    cmp r1, #0
    strneb r1, [r10, #0x78]
    ldrne r1, [sp, #4]
    strneb r1, [r10, #0xf8]
@L_02165ff4:
    mov r5, #0
    sub r1, r8, #1
    b @L_02166054
@L_02166000:
    add r2, r10, r5
    ldrb r2, [r2, #0x78]
    cmp r2, #0
    bne @L_02166050
    add r3, r5, #1
    b @L_02166048
@L_02166018:
    add r4, r10, r3
    ldrb r2, [r4, #0x78]
    cmp r2, #0
    beq @L_02166044
    add r3, r10, r5
    strb r2, [r3, #0x78]
    strb r0, [r4, #0x78]
    ldrb r2, [r4, #0xf8]
    strb r2, [r3, #0xf8]
    strb r0, [r4, #0xf8]
    b @L_02166050
@L_02166044:
    add r3, r3, #1
@L_02166048:
    cmp r3, r8
    blt @L_02166018
@L_02166050:
    add r5, r5, #1
@L_02166054:
    cmp r5, r1
    blt @L_02166000
    mov r6, #0
    sub r1, r8, #1
    mov r3, #0xff
    b @L_021660c4
@L_0216606c:
    add r2, r10, r6
    ldrb r2, [r2, #0x78]
    cmp r2, #0xff
    bne @L_021660c0
    add r4, r6, #1
    b @L_021660b8
@L_02166084:
    add r5, r10, r4
    ldrb r2, [r5, #0x78]
    cmp r2, #0
    cmpne r2, #0xff
    beq @L_021660b4
    add r4, r10, r6
    strb r2, [r4, #0x78]
    strb r3, [r5, #0x78]
    ldrb r2, [r5, #0xf8]
    strb r2, [r4, #0xf8]
    strb r0, [r5, #0xf8]
    b @L_021660c0
@L_021660b4:
    add r4, r4, #1
@L_021660b8:
    cmp r4, r8
    blt @L_02166084
@L_021660c0:
    add r6, r6, #1
@L_021660c4:
    cmp r6, r1
    blt @L_0216606c
    mov r3, #0
    b @L_021660e8
@L_021660d4:
    add r2, r10, r3
    ldrb r1, [r2, #0x78]
    add r3, r3, #1
    cmp r1, #0xff
    streqb r0, [r2, #0x78]
@L_021660e8:
    ldr r1, [r10, #0x74]
    cmp r3, r1
    blt @L_021660d4
    mov r0, #0
    b @L_021661ac
@L_021660fc:
    ldr r5, [r10, #0x74]
    add r1, r0, #6
    cmp r1, r5
    bgt @L_02166144
    mov r6, #0
    add r1, r0, r0, lsr #31
    b @L_02166138
@L_02166118:
    add r4, r0, r6, lsl #1
    add r2, r6, r1, asr #1
    add r5, r4, #1
    add r3, r10, r2
    strb r5, [r3, #0x178]
    add r2, r4, #2
    strb r2, [r3, #0x1b8]
    add r6, r6, #1
@L_02166138:
    cmp r6, #3
    blt @L_02166118
    b @L_021661a8
@L_02166144:
    ldr r2, =0x2aaaaaab
    mov r3, #6
    smull r1, r4, r2, r5
    add r4, r4, r5, lsr #31
    smull r1, r2, r3, r4
    subs r4, r5, r1
    beq @L_021661a8
    add r1, r4, r4, lsr #31
    and r2, r4, #1
    add r6, r2, r1, asr #1
    mov r7, #0
    add r1, r0, r0, lsr #31
    b @L_021661a0
@L_02166178:
    add r4, r0, r7, lsl #1
    add r2, r7, r1, asr #1
    add r5, r4, #1
    add r3, r10, r2
    strb r5, [r3, #0x178]
    ldr r2, [r10, #0x74]
    add r7, r7, #1
    cmp r5, r2
    addlt r2, r4, #2
    strltb r2, [r3, #0x1b8]
@L_021661a0:
    cmp r7, r6
    blt @L_02166178
@L_021661a8:
    add r0, r0, #6
@L_021661ac:
    ldr r1, [r10, #0x74]
    cmp r0, r1
    blt @L_021660fc
    add r0, r1, r1, lsr #31
    and r1, r1, #1
    add r2, r1, r0, asr #1
    ldr r1, [r10, #0x14]
    mov r0, r10
    str r2, [r10, #0x54]
    bl func_ov065_021673a0
    strh r0, [r10, #0xc]
    ldr r1, [r10, #0x14]
    mov r0, r10
    bl func_ov065_02167404
    strh r0, [r10, #0xe]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov065_021661fc(u8 *arg0)
{
    s32 v0 = func_ov065_021673a0(arg0, *(s32 *)(arg0 + 0x14));
    *(u16 *)(arg0 + 0xC) = v0;
    s32 v1 = func_ov065_02167404((s32)arg0, *(s32 *)(arg0 + 0x14));
    *(u16 *)(arg0 + 0xE) = v1;
    if (*(u16 *)(arg0 + 0xC) == 0)
        return;
    _ZN12SoundManager9PlaySoundEi((s32)gAudioPlayer, 6);
    func_ov065_02165d60((s32)arg0, 6);
}

extern "C" void func_ov065_02166250(s32 arg0, s32 arg1, s32 arg2)
{
    s32 local[20];
    sprintf((s32)((u8 *)local), (s32)data_ov065_021684ec, arg1, arg1);
    Archive_RequestNewRead((s32)((u8 *)local), arg2);
}

extern "C" void func_ov065_0216628c(s32 arg0)
{
    Archive_RequestNewRead((s32)data_ov065_02168500, (arg0 + 0x204));
    func_ov065_02166250(arg0, (s32)data_ov065_02168520, (arg0 + 0x210));
    func_ov065_02166250(arg0, (s32)data_ov065_02168530, (arg0 + 0x21C));
    Archive_RequestNewRead((s32)data_ov065_02168544, (arg0 + 0x258));
    _ZN11MatchEngine13func_02077c4cEPPv((s32)data_020e88a0, (arg0 + 0x264));
    func_ov065_02165d60(arg0, 1);
}

extern "C" void func_ov065_021662fc(void)
{
}

extern "C" void func_ov065_02166300(u8 *arg0)
{
    func_ov015_02136080((s32)data_ov065_02168560, *(s32 *)(arg0 + 0x204), (s32)data_ov065_02168354, (arg0 + 0x270), 0);
    Archive_Deallocate((arg0 + 0x204));
}

extern "C" asm s32 func_ov065_02166340(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, #0
    mov r10, r0
    ldr r6, =data_ov065_02168580
    mov r5, r9
    mov r11, #5
    add r8, sp, #0x18
    add r7, sp, #0x14
    ldr r4, =g3DPlaneCtrl
    b @L_021663d0
@L_0216636c:
    add r0, r10, r9
    ldrb r1, [r0, #0xf8]
    cmp r1, #0
    beq @L_021663cc
    ldr r0, [r10, #0x21c]
    mov r2, r8
    mov r3, r7
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    beq @L_021663cc
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
    str r0, [r1, #0x298]
@L_021663cc:
    add r9, r9, #1
@L_021663d0:
    ldr r0, [r10, #0x74]
    cmp r9, r0
    blt @L_0216636c
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov065_021663ec(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x1c
    mov r4, r0
    ldrh r0, [r4, #0xc]
    cmp r0, #0
    ldrneh r1, [r4, #0xe]
    cmpne r1, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, pc}
    ldr r0, [r4, #0x210]
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    beq @L_021664a8
    ldrb r0, [r4, #0x10]
    add r0, r0, #6
    add r0, r4, r0, lsl #2
    ldr r1, [r0, #0x270]
    cmp r1, #0
    beq @L_02166460
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DSprFile_Release
    ldrb r0, [r4, #0x10]
    mov r1, #0
    add r0, r0, #6
    add r0, r4, r0, lsl #2
    str r1, [r0, #0x270]
@L_02166460:
    ldr r0, =g3DPlaneCtrl
    ldr r3, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r0]
    mov r1, #0
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r2, [sp, #0xc]
    ldr r2, =data_ov065_021685a0
    str r3, [sp, #0x10]
    mov r1, #5
    mov r3, #1
    bl C3DSprFile_LoadFromPath
    ldrb r1, [r4, #0x10]
    add r1, r1, #6
    add r1, r4, r1, lsl #2
    str r0, [r1, #0x270]
@L_021664a8:
    ldrh r1, [r4, #0xe]
    ldr r0, [r4, #0x21c]
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, pc}
    ldrb r0, [r4, #0x10]
    add r0, r0, #8
    add r0, r4, r0, lsl #2
    ldr r1, [r0, #0x270]
    cmp r1, #0
    beq @L_02166500
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DSprFile_Release
    ldrb r0, [r4, #0x10]
    mov r1, #0
    add r0, r0, #8
    add r0, r4, r0, lsl #2
    str r1, [r0, #0x270]
@L_02166500:
    ldr r0, =g3DPlaneCtrl
    ldr r3, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r0]
    mov r1, #0
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r2, [sp, #0xc]
    ldr r2, =data_ov065_021685c0
    str r3, [sp, #0x10]
    mov r1, #5
    mov r3, #1
    bl C3DSprFile_LoadFromPath
    ldrb r1, [r4, #0x10]
    add r1, r1, #8
    add r1, r4, r1, lsl #2
    str r0, [r1, #0x270]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, pc}
}

extern "C" asm s32 func_ov065_0216655c(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    ldr r4, =g3DPlaneCtrl
    b @L_02166598
@L_02166570:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x270]
    cmp r1, #0
    beq @L_02166594
    ldr r0, [r4]
    bl C3DSprFile_TryFinalize
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
@L_02166594:
    add r5, r5, #1
@L_02166598:
    cmp r5, #0xa
    blt @L_02166570
    mov r5, #0
    ldr r4, =g3DPlaneCtrl
    b @L_021665d4
@L_021665ac:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x298]
    cmp r1, #0
    beq @L_021665d0
    ldr r0, [r4]
    bl C3DSprFile_TryFinalize
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
@L_021665d0:
    add r5, r5, #1
@L_021665d4:
    ldr r0, [r6, #0x74]
    cmp r5, r0
    blt @L_021665ac
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov065_021665ec(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, #0
    mov r7, r0
    mov r5, r6
    ldr r4, =g3DPlaneCtrl
    b @L_02166640
@L_02166604:
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x270]
    cmp r1, #0
    beq @L_0216663c
    ldr r0, [r4]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_0216663c
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x270]
    ldr r0, [r4]
    mov r2, r5
    mov r3, r5
    bl C3DSprFile_LoadToVram
@L_0216663c:
    add r6, r6, #1
@L_02166640:
    cmp r6, #6
    blt @L_02166604
    mov r6, #0
    mov r5, #8
    mov r4, #3
    mov r9, r6
    ldr r8, =g3DPlaneCtrl
    b @L_021666b4
@L_02166660:
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x298]
    cmp r1, #0
    beq @L_021666b0
    ldr r0, [r8]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_021666b0
    add r1, r7, r6, lsl #2
    ldr r0, [r8]
    ldr r1, [r1, #0x298]
    mov r2, r5
    mov r3, r4
    bl C3DPlaneCtrl_ConvertTilesToTex
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x298]
    ldr r0, [r8]
    mov r2, r9
    mov r3, r9
    bl C3DSprFile_LoadToVram
@L_021666b0:
    add r6, r6, #1
@L_021666b4:
    ldr r0, [r7, #0x74]
    cmp r6, r0
    blt @L_02166660
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov065_021666c8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r7, #0
    add r6, r4, #0x1f8
    mov r5, #0xc
    b @L_021666ec
@L_021666e0:
    mla r0, r7, r5, r6
    bl Archive_Deallocate
    add r7, r7, #1
@L_021666ec:
    cmp r7, #0xa
    blt @L_021666e0
    mov r6, #0
    ldr r5, =g3DPlaneCtrl
    b @L_0216671c
@L_02166700:
    add r0, r4, r6, lsl #2
    ldr r1, [r0, #0x498]
    cmp r1, #0
    beq @L_02166718
    ldr r0, [r5]
    bl C3DPlaneCtrl_Destroy
@L_02166718:
    add r6, r6, #1
@L_0216671c:
    cmp r6, #7
    blt @L_02166700
    mov r6, #0
    ldr r5, =g3DPlaneCtrl
    b @L_0216674c
@L_02166730:
    add r0, r4, r6, lsl #2
    ldr r1, [r0, #0x298]
    cmp r1, #0
    beq @L_02166748
    ldr r0, [r5]
    bl C3DSprFile_Release
@L_02166748:
    add r6, r6, #1
@L_0216674c:
    cmp r6, #0x80
    blt @L_02166730
    mov r6, #0
    ldr r5, =g3DPlaneCtrl
    b @L_0216677c
@L_02166760:
    add r0, r4, r6, lsl #2
    ldr r1, [r0, #0x270]
    cmp r1, #0
    beq @L_02166778
    ldr r0, [r5]
    bl C3DSprFile_Release
@L_02166778:
    add r6, r6, #1
@L_0216677c:
    cmp r6, #0xa
    blt @L_02166760
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov065_0216678c(void)
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
    ldreq r0, [r6, #0x18]
    cmpeq r0, #0
    ldreq r0, [r6, #0x40]
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
    b @L_021668bc
    b @L_021668bc
    b @L_02166810
    b @L_0216682c
    b @L_02166864
    b @L_0216688c
    b @L_02166848
@L_02166810:
    ldr r0, [r7]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov065_02166a8c
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216682c:
    ldr r0, [r7]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov065_02166af8
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166848:
    ldr r0, [r7]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov065_02166ba4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166864:
    ldr r0, [r7]
    bl func_ov015_021629c8
    str r4, [sp]
    mov r1, r0
    ldrh r2, [r5]
    ldrh r3, [r5, #2]
    mov r0, r6
    bl func_ov065_02166bfc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216688c:
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
    bl func_ov065_02166bfc
@L_021668bc:
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov065_021668cc(void)
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
    ldreqb r0, [r6, #0x13]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    ldreq r0, [r6, #0x18]
    cmpeq r0, #0
    ldreq r0, [r6, #0x40]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r7, =gSprButtonCtrl
    ldr r0, [r7]
    bl func_ov015_021629ac
    cmp r0, #0
    beq @L_02166958
    ldr r0, [r7]
    add r0, r0, #0xf00
    ldrh r5, [r0, #0x38]
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0
    mov r4, r5
    strh r1, [r0, #0x38]
@L_02166958:
    mov r0, r6
    mov r1, r5
    bl func_ov065_02167e8c
    tst r5, #1
    beq @L_02166998
    mov r0, r6
    bl func_ov065_02166ea4
    cmp r0, #0
    beq @L_02166988
    mov r0, r6
    bl func_ov065_021661fc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166988:
    ldr r0, =gAudioPlayer
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166998:
    tst r5, #2
    beq @L_021669bc
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    mov r1, #7
    bl func_ov065_02165d60
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021669bc:
    tst r4, #0x40
    beq @L_021669e4
    ldr r1, [r6, #0x14]
    cmp r1, #3
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    sub r1, r1, #3
    mov r2, #5
    bl func_ov065_0216784c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021669e4:
    tst r4, #0x80
    beq @L_02166a0c
    ldr r1, [r6, #0x14]
    cmp r1, #3
    ldmgeia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    add r1, r1, #3
    mov r2, #5
    bl func_ov065_0216784c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166a0c:
    tst r4, #0x20
    beq @L_02166a44
    ldr r1, [r6, #0x14]
    mov r0, r6
    cmp r1, #0
    cmpne r1, #3
    beq @L_02166a38
    sub r1, r1, #1
    mov r2, #5
    bl func_ov065_0216784c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166a38:
    mvn r1, #0
    bl func_ov065_02167ba0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166a44:
    tst r4, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r6, #0x14]
    mov r0, r6
    cmp r1, #2
    cmpne r1, #5
    beq @L_02166a70
    add r1, r1, #1
    mov r2, #5
    bl func_ov065_0216784c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166a70:
    mov r1, #1
    bl func_ov065_02167ba0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov065_02166a8c(u8 *arg0, s32 arg1)
{
    s32 v0;
    s32 t0;
    if (arg1 <= 0)
        return (s32)arg0;
    if ((arg1 >= 5 && arg1 <= 0xF)) {
        t0 = *(s32 *)(arg0 + 0x14);
        *(s32 *)(arg0 + 0x38) = t0;
        if ((arg1 - 5) == t0)
            return (s32)arg0;
        v0 = func_ov065_0216784c(arg0, (arg1 - 5), 5);
        return v0;
    } else {
        if ((u32)(arg1 - 3) > (u32)1)
            return (arg1 - 3);
        if (arg1 == 3) {
            arg1 = -1;
        } else {
            arg1 = 1;
        }
        func_ov065_02167ba0((s32)arg0, arg1);
        *(s32 *)(arg0 + 0x58) = 0xF;
        return 0xF;
    }
}

extern "C" asm void func_ov065_02166af8(void)
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
    blt @L_02166b4c
    cmp r5, #2
    bgt @L_02166b4c
    cmp r0, #0
    ldrneh r1, [r0, #0xc]
    cmpne r1, #0
    ldrne r0, [r4]
    addne r0, r0, #0xf00
    strneh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166b4c:
    cmp r5, #3
    cmpne r5, #4
    moveq r0, #0
    streq r0, [r6, #0x58]
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r5, #5
    ldmltia sp!, {r4, r5, r6, pc}
    cmp r5, #0xf
    ldrle r0, [r6, #0x38]
    suble r1, r5, #5
    cmple r0, r1
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    bl func_ov065_02166ea4
    cmp r0, #0
    ldrne r0, =gSprButtonCtrl
    movne r1, #1
    ldrne r0, [r0]
    addne r0, r0, #0xf00
    strneh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov065_02166ba4(u8 *arg0, s32 arg1)
{
    if (arg1 <= 0)
        return (s32)arg0;
    if ((u32)(arg1 - 3) > (u32)1)
        return (arg1 - 3);
    if (*(s32 *)(arg0 + 0x58) == 0)
        return *(s32 *)(arg0 + 0x58);
    s32 t0 = (*(s32 *)(arg0 + 0x58) - 1);
    *(s32 *)(arg0 + 0x58) = t0;
    if (t0 > 0)
        return t0;
    func_ov065_02167ba0((s32)arg0, (arg1 == 3 ? -1 : 1));
    *(s32 *)(arg0 + 0x58) = 4;
    return 4;
}

extern "C" void func_ov065_02166bfc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
    if (arg1 <= 0)
        return;
    if ((u32)(arg1 - 3) > (u32)1)
        return;
    if (arg4 != 0) {
        *(s32 *)(arg0 + 0x58) = 0;
    }
    return;
}

extern "C" void func_ov065_02166c24(void)
{
    s32 v0 = G2_GetBG1CharPtr();
    MIi_CpuClearFast(0, v0, 0x20);
    s32 v2 = G2_GetBG1CharPtr();
    DC_FlushRange(v2, 0x20);
    Graphics_LoadBGPaletteMain();
}

extern "C" asm s32 func_ov065_02166c54(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    movs r5, r1
    mov r7, r0
    mov r4, r2
    mov r6, r3
    addmi sp, sp, #4
    ldmmiia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r5, #7
    addge sp, sp, #4
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r4, #0
    addlt sp, sp, #4
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r4, #0xa
    addge sp, sp, #4
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r0, r7, r5, lsl #2
    ldr r0, [r0, #0x498]
    cmp r0, #0
    bne @L_02166cc4
    ldr r0, =g3DPlaneCtrl
    mov r1, #1
    ldr r0, [r0]
    mov r2, r1
    bl C3DPlaneCtrl_Create
    add r1, r7, r5, lsl #2
    str r0, [r1, #0x498]
@L_02166cc4:
    add r0, r7, r4, lsl #2
    add r1, r7, r5, lsl #2
    ldr r4, [r1, #0x498]
    ldr r2, [r0, #0x270]
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

extern "C" void func_ov065_02166e0c(s32 arg0)
{
    func_ov065_02166c54(arg0, 1, 2, 0, 0xA0, 0xA8, 1, 0x1E, 1, 0);
    func_ov065_02166e5c(arg0);
}

extern "C" asm s32 func_ov065_02166e5c(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r1, =gSprButtonCtrl
    mov r6, r0
    mov r5, #1
    ldr r0, [r1]
    mov r1, r5
    bl func_ov015_02161dd4
    movs r4, r0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    bl func_ov065_02166ea4
    cmp r0, #0
    movne r5, #0
    mov r0, r4
    strb r5, [r4, #0x10]
    bl func_ov015_02161ca0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov065_02166ea4(u8 *arg0)
{
    s32 v0 = func_ov065_021673a0(arg0, *(s32 *)(arg0 + 0x14));
    return (v0 != 0 ? 1 : 0);
}

extern "C" void func_ov065_02166ec0(s32 arg0)
{
    func_ov065_02166c54(arg0, 2, 3, 0, 0xD0, 0xA8, 2, 0x1E, 2, 0);
    func_ov065_02166f10(arg0);
}

extern "C" asm s32 func_ov065_02166f10(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =gSprButtonCtrl
    mov r1, #2
    ldr r0, [r0]
    bl func_ov015_02161dd4
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    mov r1, #0
    strb r1, [r0, #0x10]
    bl func_ov015_02161ca0
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov065_02166f40(u8 *arg0)
{
    if (*(u8 *)(arg0 + 0x11) == 0)
        return;
    *(u8 *)(arg0 + 0x11) = 0;
    CBgMenuManager_DeleteAll((s32)gBgMenuManager, 0, 0);
    CBgMenuManager_UpdateGraphics((s32)gBgMenuManager, 0);
}

extern "C" void func_ov065_02166f80(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x498) != 0)
        return;
    s32 v0 = C3DPlaneCtrl_Create(*(s32 *)(g3DPlaneCtrl), 1, 1);
    *(s32 *)(arg0 + 0x498) = v0;
    C3DPlaneCtrl_SetTex(*(s32 *)(g3DPlaneCtrl), v0, 1, (*(s32 *)(arg0 + 0x270) & 0xFF));
    C3DPlaneCtrl_SetGraphicIdxAll(*(s32 *)(g3DPlaneCtrl), v0, 0, 0);
    C3DPlaneCtrl_SetDepthStepAll(*(s32 *)(g3DPlaneCtrl), v0, 0x12C, (0 - 1));
}

extern "C" asm s32 func_ov065_02167000(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r5, r0
    ldr r0, [r5, #0x4a8]
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r6, =g3DPlaneCtrl
    ldr r1, [r5, #0x74]
    ldr r0, [r6]
    mov r2, #1
    bl C3DPlaneCtrl_Create
    mov r9, r0
    str r9, [r5, #0x4a8]
    ldr r2, [r5, #0x284]
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
    b @L_021670b8
@L_02167088:
    add r0, r5, r4
    ldrb r0, [r0, #0xf8]
    cmp r0, #0
    beq @L_021670b4
    add r0, r5, r4, lsl #2
    ldr r3, [r0, #0x298]
    ldr r0, [r6]
    mov r1, r9
    add r2, r4, #1
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
@L_021670b4:
    add r4, r4, #1
@L_021670b8:
    ldr r0, [r5, #0x74]
    cmp r4, r0
    blt @L_02167088
    mov r10, #0
    mov r8, #1
    mov r7, #2
    mov r4, #0x38
    ldr r6, =g3DPlaneCtrl
    mov r5, #0x48
    b @L_02167144
@L_021670e0:
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
@L_02167144:
    cmp r10, #6
    blt @L_021670e0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm s32 func_ov065_02167158(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    ldrh r0, [r6, #0xc]
    mov r5, #1
    cmp r0, #0
    ldrneh r0, [r6, #0xe]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r6, #0x10]
    ldr r4, =g3DPlaneCtrl
    add r0, r0, #6
    add r0, r6, r0, lsl #2
    ldr r1, [r0, #0x270]
    ldr r0, [r4]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_021671dc
    ldrb r1, [r6, #0x10]
    ldr r0, [r4]
    mov r2, #0x1a
    add r1, r1, #6
    add r1, r6, r1, lsl #2
    ldr r1, [r1, #0x270]
    mov r3, #3
    bl C3DPlaneCtrl_ConvertTilesToTex
    ldrb r1, [r6, #0x10]
    mov r2, #0
    ldr r0, [r4]
    add r1, r1, #6
    add r1, r6, r1, lsl #2
    ldr r1, [r1, #0x270]
    mov r3, r2
    bl C3DSprFile_LoadToVram
@L_021671dc:
    ldrb r0, [r6, #0x10]
    ldr r4, =g3DPlaneCtrl
    add r0, r0, #8
    add r0, r6, r0, lsl #2
    ldr r1, [r0, #0x270]
    ldr r0, [r4]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_02167240
    ldrb r1, [r6, #0x10]
    ldr r0, [r4]
    mov r2, #8
    add r1, r1, #8
    add r1, r6, r1, lsl #2
    ldr r1, [r1, #0x270]
    mov r3, #3
    bl C3DPlaneCtrl_ConvertTilesToTex
    ldrb r1, [r6, #0x10]
    mov r2, #0
    ldr r0, [r4]
    add r1, r1, #8
    add r1, r6, r1, lsl #2
    ldr r1, [r1, #0x270]
    mov r3, r2
    bl C3DSprFile_LoadToVram
@L_02167240:
    ldr r0, [r6, #0x4b0]
    cmp r0, #0
    bne @L_02167264
    ldr r0, =g3DPlaneCtrl
    mov r1, #2
    ldr r0, [r0]
    mov r2, #1
    bl C3DPlaneCtrl_Create
    str r0, [r6, #0x4b0]
@L_02167264:
    ldrb r0, [r6, #0x10]
    ldr r7, =g3DPlaneCtrl
    ldr r4, [r6, #0x4b0]
    add r0, r0, #6
    add r0, r6, r0, lsl #2
    ldr r3, [r0, #0x270]
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
    ldrb r3, [r6, #0x10]
    add r3, r3, #8
    add r3, r6, r3, lsl #2
    ldr r3, [r3, #0x270]
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

extern "C" s32 func_ov065_02167348(s32 arg0)
{
    u8 *r4;
    s32 v1;
    s32 v2;
    s32 t0;
    s32 t1;
    s32 t2;
    r4 = (u8 *)arg0;
    if (*(u16 *)(r4 + 0xC) != 0) {
        func_ov065_02165d60(arg0, 4);
        t0 = (*(u8 *)(r4 + 0x10) ^ 1);
        *(u8 *)(r4 + 0x10) = t0;
        v1 = func_ov065_021663ec((s32)r4, t0);
        return v1;
    } else {
        if (*(s32 *)(r4 + 0x4B0) == 0)
            return arg0;
        t1 = *(s32 *)(g3DPlaneCtrl);
        t2 = *(s32 *)(r4 + 0x4B0);
        v2 = C3DPlaneCtrl_ClearFlagAll(t1, t2, 2);
        return v2;
    }
}

extern "C" asm s32 func_ov065_021673a0(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =0x55555556
    mov r5, r1
    smull r1, r3, r4, r5
    add r3, r3, r5, lsr #31
    mov r2, #3
    mov r6, r0
    smull r0, r1, r2, r3
    ldr r2, [r6, #0x3c]
    sub r3, r5, r0
    ldr r1, [r6, #0x54]
    add r0, r2, r3
    bl _s32_div_f
    smull r0, r2, r4, r5
    add r2, r2, r5, lsr #31
    add r0, r6, r2, lsl #6
    add r0, r0, r1
    ldrb r0, [r0, #0x178]
    cmp r0, #0
    moveq r0, #0
    subne r0, r0, #1
    addne r0, r6, r0
    ldrneb r0, [r0, #0x78]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov065_02167404(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =0x55555556
    mov r5, r1
    smull r1, r3, r4, r5
    add r3, r3, r5, lsr #31
    mov r2, #3
    mov r6, r0
    smull r0, r1, r2, r3
    ldr r2, [r6, #0x3c]
    sub r3, r5, r0
    ldr r1, [r6, #0x54]
    add r0, r2, r3
    bl _s32_div_f
    smull r0, r2, r4, r5
    add r2, r2, r5, lsr #31
    add r0, r6, r2, lsl #6
    add r0, r0, r1
    ldrb r0, [r0, #0x178]
    cmp r0, #0
    moveq r0, #0
    subne r0, r0, #1
    addne r0, r6, r0
    ldrneb r0, [r0, #0xf8]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov065_02167468(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    mov r9, #0
    mov r7, #0x40
    mov r6, #0x30
    mov r5, #0xa
    mov r11, #2
    ldr r4, =gSprButtonCtrl
    b @L_021674dc
@L_02167490:
    mov r0, r10
    mov r1, r9
    bl func_ov065_021676d8
    mov r8, r0
    mov r0, r10
    mov r1, r9
    bl func_ov065_02167704
    add r0, r0, #8
    stmia sp, {r0, r7}
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    add r2, r9, #5
    mov r2, r2, lsl #0x10
    ldr r0, [r4]
    add r3, r8, #8
    mov r1, r11
    mov r2, r2, lsr #0x10
    bl func_ov015_02162f70
    add r9, r9, #1
@L_021674dc:
    cmp r9, #6
    blt @L_02167490
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov065_021674f0(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    mov r4, r0
    ldr r0, [r4, #0x4a4]
    mov r6, #1
    cmp r0, #0
    bne @L_02167524
    ldr r0, =g3DPlaneCtrl
    mov r2, r6
    ldr r0, [r0]
    mov r1, #2
    bl C3DPlaneCtrl_Create
    str r0, [r4, #0x4a4]
@L_02167524:
    ldr r7, =g3DPlaneCtrl
    ldr r5, [r4, #0x4a4]
    ldr r2, [r4, #0x274]
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
    mov r8, #0x18
    str r8, [sp]
    ldr r0, [r7]
    mov r1, r5
    mov r2, r6
    mov r3, r4
    bl C3DPlaneCtrl_SetPos
    str r4, [sp]
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #1
    mov r3, #2
    bl C3DPlaneCtrl_SetGraphicIdx
    str r8, [sp]
    ldr r0, [r7]
    add r2, r6, #1
    mov r1, r5
    mov r3, #0xf0
    bl C3DPlaneCtrl_SetPos
    mov r7, #1
    mov r1, #3
    str r7, [sp]
    mov r0, #0xa
    str r0, [sp, #4]
    ldr r0, =gSprButtonCtrl
    mov r2, r1
    ldr r0, [r0]
    mov r3, r5
    bl func_ov015_02163040
    movs r6, r0
    beq @L_02167638
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
@L_02167638:
    mov r4, #2
    str r4, [sp]
    mov r1, #0xa
    ldr r0, =gSprButtonCtrl
    str r1, [sp, #4]
    mov r8, #3
    ldr r0, [r0]
    mov r1, r8
    mov r3, r5
    mov r2, #4
    bl func_ov015_02163040
    movs r7, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
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
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov065_021676d8(...)
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

extern "C" asm s32 func_ov065_02167704(...)
{
    ldr r2, =0x55555556
    mov r3, #0x38
    smull r0, r12, r2, r1
    add r12, r12, r1, lsr #31
    mul r0, r12, r3
    bx lr
}

extern "C" void func_ov065_02167720(u8 *arg0)
{
    *(s32 *)(arg0 + 0x14) = 0;
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x1C) = 0;
    *(s32 *)(arg0 + 0x20) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    *(s32 *)(arg0 + 0x28) = 0;
    *(s32 *)(arg0 + 0x30) = 0;
    *(s32 *)(arg0 + 0x34) = 0;
    *(s32 *)(arg0 + 0x2C) = 0;
    *(s32 *)(arg0 + 0x38) = 0;
}

extern "C" void func_ov065_02167750(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x4AC) != 0)
        return;
    s32 v0 = C3DPlaneCtrl_Create(*(s32 *)(g3DPlaneCtrl), 1, 1);
    *(s32 *)(arg0 + 0x4AC) = v0;
    C3DPlaneCtrl_SetTexAll(*(s32 *)(g3DPlaneCtrl), v0, (*(s32 *)(arg0 + 0x280) & 0xFF));
    C3DPlaneCtrl_SetGraphicIdxAll(*(s32 *)(g3DPlaneCtrl), v0, 0, 0);
    C3DPlaneCtrl_SetDepthAll(*(s32 *)(g3DPlaneCtrl), v0, 0xFA);
    C3DPlaneCtrl_SetFlagAll(*(s32 *)(g3DPlaneCtrl), v0, 2, 1);
    func_ov065_021677e8((s32)arg0, 0);
}

extern "C" asm s32 func_ov065_021677e8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    str r6, [r7, #0x14]
    ldr r5, [r7, #0x4ac]
    mov r4, #1
    bl func_ov065_021676d8
    str r0, [r7, #0x1c]
    mov r0, r7
    mov r1, r6
    bl func_ov065_02167704
    mov r1, r0, lsl #0x10
    str r0, [r7, #0x20]
    mov r0, r1, asr #0x10
    str r0, [sp]
    ldr r1, [r7, #0x1c]
    ldr r0, =g3DPlaneCtrl
    mov r3, r1, lsl #0x10
    ldr r0, [r0]
    mov r1, r5
    mov r2, r4
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov065_0216784c(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    u8 *r6;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v5;
    s32 v6;
    s32 v9;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t5;
    t0 = *(s32 *)(arg0 + 0x14);
    *(s32 *)(arg0 + 0x18) = 1;
    *(s32 *)(arg0 + 0x2C) = 0;
    v0 = func_ov065_021676d8((s32)arg0, t0, arg2, 0);
    *(s32 *)(arg0 + 0x1C) = v0;
    v1 = func_ov065_02167704((s32)arg0, t0);
    *(s32 *)(arg0 + 0x20) = v1;
    v2 = func_ov065_021676d8((s32)arg0, arg1);
    *(s32 *)(arg0 + 0x24) = v2;
    v3 = func_ov065_02167704((s32)arg0, arg1);
    t1 = *(s32 *)(arg0 + 0x24);
    t2 = *(s32 *)(arg0 + 0x1C);
    *(s32 *)(arg0 + 0x28) = v3;
    *(s32 *)(arg0 + 0x30) = ((t1 - t2) / arg2);
    t3 = ((*(s32 *)(arg0 + 0x28) - *(s32 *)(arg0 + 0x20)) / arg2);
    *(s32 *)(arg0 + 0x34) = t3;
    r6 = arg0;
    r4 = arg2;
    arg2 = *(s32 *)(arg0 + 0x24);
    arg0 = (u8 *)*(s32 *)(arg0 + 0x1C);
    if ((s32)arg0 > arg2) {
        *(s32 *)(r6 + 0x30) = (s32)(0 - (s32)((s32)(arg0 - arg2) / r4));
    }
    arg2 = *(s32 *)(r6 + 0x28);
    arg0 = (u8 *)*(s32 *)(r6 + 0x20);
    if ((s32)arg0 > arg2) {
        *(s32 *)(r6 + 0x34) = (s32)(0 - (s32)((s32)(arg0 - arg2) / r4));
    }
    _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 8);
    *(s32 *)(r6 + 0x14) = arg1;
    v5 = func_ov065_021673a0((s32)r6, arg1);
    *(u16 *)(r6 + 0xC) = v5;
    t5 = *(s32 *)(r6 + 0x14);
    v6 = func_ov065_02167404((s32)r6, t5);
    *(u16 *)(r6 + 0xE) = v6;
    func_ov065_02167348((s32)r6);
    func_ov065_02166e5c((s32)r6);
    v9 = func_ov065_02166f10((s32)r6);
    return v9;
}

extern "C" asm s32 func_ov065_02167974(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r1, [r0, #0x2c]
    ldr r2, [r0, #0x30]
    add r1, r1, #1
    ldr r3, [r0, #0x1c]
    ldr r12, [r0, #0x20]
    ldr r4, [r0, #0x34]
    mla r3, r2, r1, r3
    cmp r2, #0
    mla r12, r4, r1, r12
    str r1, [r0, #0x2c]
    ldr r1, [r0, #0x4ac]
    mov r2, #1
    ldr lr, [r0, #0x24]
    bge @L_021679c0
    cmp r3, lr
    movlt r3, lr
    b @L_021679c8
@L_021679c0:
    cmp r3, lr
    movgt r3, lr
@L_021679c8:
    cmp r4, #0
    ldr lr, [r0, #0x28]
    bge @L_021679e0
    cmp r12, lr
    movlt r12, lr
    b @L_021679e8
@L_021679e0:
    cmp r12, lr
    movgt r12, lr
@L_021679e8:
    ldr lr, [r0, #0x24]
    cmp r3, lr
    ldreq lr, [r0, #0x28]
    mov r3, r3, lsl #0x10
    cmpeq r12, lr
    moveq lr, #0
    streq lr, [r0, #0x18]
    streq lr, [r0, #0x2c]
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

extern "C" void func_ov065_02167a30(u8 *arg0)
{
    *(s32 *)(arg0 + 0x3C) = 0;
    *(s32 *)(arg0 + 0x40) = 0;
    *(s32 *)(arg0 + 0x50) = 0;
    *(s32 *)(arg0 + 0x48) = 0;
    *(s32 *)(arg0 + 0x4C) = 0;
    *(s32 *)(arg0 + 0x44) = 0;
    *(s32 *)(arg0 + 0x58) = 0;
}

extern "C" asm void func_ov065_02167a54(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r5, [r10, #0x4a8]
    ldr r7, [r10, #0x3c]
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
    b @L_02167b90
@L_02167aa0:
    add r0, r10, r7
    ldrb r6, [r0, #0x178]
    cmp r6, #0
    beq @L_02167b0c
    mov r0, r10
    mov r1, r9
    bl func_ov065_021676d8
    add r8, r0, #8
    mov r0, r10
    mov r1, r9
    bl func_ov065_02167704
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
@L_02167b0c:
    add r0, r10, r7
    ldrb r6, [r0, #0x1b8]
    cmp r6, #0
    beq @L_02167b7c
    mov r0, r10
    add r1, r9, #3
    bl func_ov065_021676d8
    add r8, r0, #8
    mov r0, r10
    add r1, r9, #3
    bl func_ov065_02167704
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
@L_02167b7c:
    ldr r0, [r10, #0x54]
    add r7, r7, #1
    cmp r7, r0
    movge r7, #0
    add r9, r9, #1
@L_02167b90:
    cmp r9, #3
    blt @L_02167aa0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov065_02167ba0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r2, [r10, #0x3c]
    ldr r5, [r10, #0x4a8]
    mov r9, r1
    add r4, r2, r9
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r10, #0x54]
    cmp r4, #0
    sublt r4, r0, #1
    blt @L_02167bd8
    cmp r4, r0
    movge r4, #0
@L_02167bd8:
    mov r6, #0
    mov r0, #1
    str r0, [r10, #0x40]
    str r6, [r10, #0x44]
    cmp r9, #0
    bge @L_02167c88
    mov r0, r10
    mov r1, r6
    bl func_ov065_021676d8
    sub r7, r0, #0x40
    mov r0, r10
    mov r1, r6
    bl func_ov065_02167704
    add r1, r10, r4
    ldrb r6, [r1, #0x178]
    add r0, r0, #8
    cmp r6, #0
    beq @L_02167c64
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
@L_02167c64:
    mov r0, r10
    mov r1, #3
    bl func_ov065_02167704
    add r1, r10, r4
    ldrb r6, [r1, #0x1b8]
    add r0, r0, #8
    cmp r6, #0
    beq @L_02167d70
    b @L_02167d2c
@L_02167c88:
    ldr r1, [r10, #0x54]
    add r0, r2, #3
    bl _s32_div_f
    mov r8, r1
    mov r0, r10
    mov r1, #2
    bl func_ov065_021676d8
    add r7, r0, #0x50
    mov r0, r10
    mov r1, #2
    bl func_ov065_02167704
    add r1, r10, r8
    ldrb r6, [r1, #0x178]
    add r0, r0, #8
    cmp r6, #0
    beq @L_02167d0c
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
@L_02167d0c:
    mov r0, r10
    mov r1, #3
    bl func_ov065_02167704
    add r1, r10, r8
    ldrb r6, [r1, #0x1b8]
    add r0, r0, #8
    cmp r6, #0
    beq @L_02167d70
@L_02167d2c:
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
@L_02167d70:
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
    str r6, [r10, #0x50]
    str r3, [r10, #0x48]
    str r5, [r10, #0x4c]
    bl _ZN12SoundManager9PlaySoundEi
    ldr r1, [r10, #0x14]
    mov r0, r10
    str r4, [r10, #0x3c]
    bl func_ov065_021673a0
    strh r0, [r10, #0xc]
    ldr r1, [r10, #0x14]
    mov r0, r10
    bl func_ov065_02167404
    strh r0, [r10, #0xe]
    mov r0, r10
    bl func_ov065_02167348
    mov r0, r10
    bl func_ov065_02166e5c
    mov r0, r10
    bl func_ov065_02166f10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov065_02167df4(...)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0, #0x44]
    ldr r2, [r0, #0x50]
    add r1, r1, #1
    ldr r3, [r0, #0x48]
    str r1, [r0, #0x44]
    mla r3, r2, r1, r3
    cmp r2, #0
    ldr r1, [r0, #0x4a8]
    ldr r2, [r0, #0x4c]
    bge @L_02167e2c
    cmp r3, r2
    movlt r3, r2
    b @L_02167e34
@L_02167e2c:
    cmp r3, r2
    movgt r3, r2
@L_02167e34:
    ldr r2, [r0, #0x4c]
    cmp r3, r2
    bne @L_02167e54
    mov r1, #0
    str r1, [r0, #0x40]
    str r1, [r0, #0x44]
    bl func_ov065_02167a54
    ldmia sp!, {r3, pc}
@L_02167e54:
    ldr r0, =g3DPlaneCtrl
    mov r2, r3, lsl #0x10
    ldr r0, [r0]
    mov r2, r2, asr #0x10
    mov r3, #0
    bl C3DPlaneCtrl_SetPos_2
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov065_02167e74(void)
{
    CBgMenuManager_UpdateGraphics((s32)gBgMenuManager, 0);
}

extern "C" s32 func_ov065_02167e8c(u8 *arg0, s32 arg1)
{
    s32 local[1];
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    t0 = *(s32 *)(gSprButtonCtrl);
    t1 = ((u32)((arg1 & *(u16 *)(arg0 + 0x70)) << 0x10) >> 0x10);
    v0 = func_ov015_021621dc(t0, t1, (s32)((u8 *)local));
    if (v0 == 0)
        return v0;
    t2 = *(s32 *)(gSprButtonCtrl);
    t3 = *(s32 *)(((u8 *)local));
    v1 = func_ov015_021624cc(t2, t3);
    return v1;
}

extern "C" asm s32 func_ov065_02167ed8(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    bl G2_GetBG1CharPtr
    mov r4, #0x20
    mov r6, #0
    mov r1, r0
    mov r0, r6
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2_GetBG2CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2_GetBG3CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r4
    bl DC_FlushRange
    bl G2_GetBG2CharPtr
    mov r1, r4
    bl DC_FlushRange
    bl G2_GetBG3CharPtr
    mov r1, r4
    bl DC_FlushRange
    mov r0, r6
    ldr r5, =gMainScreen0
    mov r4, #0x800
    mov r1, r5
    mov r2, r4
    bl MIi_CpuClearFast
    mov r0, r5
    mov r1, r4
    bl DC_FlushRange
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl GX_LoadBG1Scr
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl GX_LoadBG2Scr
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl GX_LoadBG3Scr
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov065_02167fa0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, #0
    mov r1, #3
    str r4, [r5, #8]
    strb r4, [r5, #0x13]
    strb r4, [r5, #0x12]
    strb r4, [r5, #0x11]
    str r4, [r5, #0x74]
    strb r4, [r5, #0x10]
    strh r1, [r5, #0x70]
    bl func_ov065_02167720
    mov r0, r5
    bl func_ov065_02167a30
    mov r1, r4
    add r0, r5, #0x1f8
    mov r2, #0x78
    bl MI_CpuFill8
    mov r6, #0x80
    mov r1, r4
    mov r2, r6
    add r0, r5, #0x78
    bl MI_CpuFill8
    add r0, r5, #0xf8
    mov r1, r4
    mov r2, r6
    bl MI_CpuFill8
    add r0, r5, #0x270
    mov r1, r4
    mov r2, #0x28
    bl MI_CpuFill8
    add r0, r5, #0x98
    add r0, r0, #0x400
    mov r1, r4
    mov r2, #0x1c
    bl MI_CpuFill8
    add r0, r5, #0x298
    mov r1, r4
    mov r2, #0x200
    bl MI_CpuFill8
    mov r2, r6
    add r0, r5, #0x178
    mov r1, r4
    bl MI_CpuFill8
    ldr r0, =gSprButtonCtrl
    ldr r0, [r0]
    bl func_ov015_02161f84
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616a4
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DPlaneCtrl_Acquire
    str r4, [r5, #0x5c]
    str r4, [r5, #0x68]
    strb r4, [r5, #0x6c]
    strb r4, [r5, #0x6d]
    mov r0, #1
    str r0, [r5, #0x60]
    sub r0, r0, #2
    str r0, [r5, #0x64]
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_0206ce7cEv
    strh r0, [r5, #0xc]
    ldr r0, =gBgMenuManager
    mov r1, r4
    bl CBgMenuManager_Init
    mov r0, r5
    strh r4, [r5, #0xc]
    bl func_ov065_0216628c
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov065_021680d0(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 v0;
    s32 v7;
    s32 v20;
    s32 v25;
    s32 v27;
    s32 v29;
    s32 t1;
    s32 t2;
    s32 t3;
    r4 = arg0;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        case 1:
            v0 = Archive_TryFinalize((s32)(r4 + 0x1F8), 10);
            if (v0 == 0)
                break;
            ((s32 (*)(...))func_ov065_021662fc)((s32)r4);
            func_ov065_02166300(r4);
            func_ov065_02165e9c((s32)r4);
            func_ov065_02166340((s32)r4);
            func_ov065_021663ec((s32)r4);
            func_ov065_02165d60((s32)r4, 2);
            break;
        case 3:
            v7 = func_ov065_0216655c((s32)arg0, r1);
            if (v7 == 0)
                break;
            func_ov065_021665ec((s32)r4);
            func_ov065_02167468((s32)r4);
            func_ov065_021674f0((s32)r4);
            func_ov065_02166f80(r4);
            func_ov065_02166e0c((s32)r4);
            func_ov065_02166ec0((s32)r4);
            func_ov065_02166f40(r4);
            func_ov065_02167000((s32)r4);
            func_ov065_02167750(r4);
            func_ov065_02167158((s32)r4);
            ((VCall *)r4)->f19();
            func_ov065_02165d60((s32)r4, 5);
            break;
        case 4:
            v20 = func_ov065_0216655c((s32)arg0, r1);
            if (v20 == 0)
                break;
            func_ov065_02167158((s32)r4);
            func_ov065_02165d60((s32)r4, 5);
            break;
        case 6:
        case 7:
            ((s32 (*)(...))func_ov065_02167e74)((s32)arg0, r1);
            break;
    }
    t1 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    t2 = *(s32 *)(((u8 *)&gDeltaTime));
    func_ov015_02161710(t1, t2);
    arg0 = (u8 *)(*(s32 *)(((u8 *)&gDeltaTime)) << 0xC);
    if (*(s32 *)(((u8 *)&gDeltaTime)) != 0) {
        v25 = _ffltu((s32)arg0);
        _fadd(0x3F000000, v25);
    } else {
        v27 = _ffltu((s32)arg0);
        _fsub(v27, 0x3F000000);
    }
    v29 = _ffix();
    t3 = *(s32 *)(((u8 *)&g3DSpriteCtrl));
    func_02095ea4(t3, v29, (s32)((u8 *)&g3DSpriteCtrl));
    if (*(s32 *)(r4 + 0x18) != 0) {
        func_ov065_02167974((s32)r4);
    }
    if (*(s32 *)(r4 + 0x40) == 0)
        return;
    func_ov065_02167df4((s32)r4);
    return;
}

extern "C" s32 func_ov065_02168278(u8 *arg0)
{
    s32 r1;
    s32 v2;
    s32 v3;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            ((s32 (*)(...))func_ov065_02166c24)((s32)arg0, r1);
            Graphics_LoadBGPaletteMain();
            v2 = func_ov065_02165d60((s32)arg0, 3);
            return v2;
        case 5:
            v3 = Graphics_LoadBGPaletteMain((s32)arg0, r1);
            return v3;
    }
}

extern "C" void func_ov065_021682b8(u8 *arg0)
{
    func_ov015_02161fdc(*(s32 *)(gSprButtonCtrl), (s32)gSprButtonCtrl);
    func_ov015_021616dc(*(s32 *)(gSprAnimCtrl));
    _ZN11MatchEngine13func_0206ce6cEt((s32)data_020e88a0, *(u16 *)(arg0 + 0xC));
    Archive_Close((arg0 + 0x1F8), 10);
    func_ov065_021666c8((s32)arg0);
    _ZN11MatchEngine13func_02077ce4Ev((s32)data_020e88a0);
    C3DPlaneCtrl_Release(*(s32 *)(g3DPlaneCtrl));
    CBgMenuManager_Finalize((s32)gBgMenuManager, 0);
    func_ov065_02167ed8((s32)arg0);
}

extern "C" s32 func_ov065_0216833c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov065_02168350(void)
{
}
