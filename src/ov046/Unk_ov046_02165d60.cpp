#include "ov046/Unk_ov046_02165d60.hpp"
#include "game/vcall.hpp"
struct P021671a4 { s32 a; s32 b; };

extern "C" void func_ov046_02165d60(s32 arg0, s32 arg1);
extern "C" s32 func_ov046_02165d74(...);
extern "C" void func_ov046_02165df0(s32 arg0);
extern "C" u8 func_ov046_02165e10(void);
extern "C" void func_ov046_02165e20(u8 *arg0, s32 arg1);
extern "C" void func_ov046_02165e6c(void);
extern "C" void func_ov046_02165e78(s32 arg0);
extern "C" void func_ov046_02165e88(u8 *arg0);
extern "C" void func_ov046_02165ed0(void);
extern "C" void func_ov046_02165fb0(void);
extern "C" s32 func_ov046_02165fb4(...);
extern "C" s32 func_ov046_021660a0(u8 *arg0, s32 arg1);
extern "C" s32 func_ov046_02166110(...);
extern "C" void func_ov046_02166128(void);
extern "C" s32 func_ov046_021661fc(...);
extern "C" void func_ov046_021662bc(void);
extern "C" void func_ov046_021663cc(void);
extern "C" void func_ov046_02166490(void);
extern "C" void func_ov046_021666dc(void);
extern "C" s32 func_ov046_02166780(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_ov046_021667d0(void);
extern "C" void func_ov046_02166be4(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov046_02166c04(...);
extern "C" s32 func_ov046_02166d4c(...);
extern "C" s32 func_ov046_02166e3c(...);
extern "C" s32 func_ov046_02166fc8(u8 *arg0, s32 arg1);
extern "C" s32 func_ov046_02167160(u8 *arg0);
extern "C" void func_ov046_021671a4(u8 *arg0);
extern "C" void func_ov046_021671f0(u8 *arg0);
extern "C" s32 func_ov046_02167218(...);
extern "C" s32 func_ov046_02167298(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov046_021672cc(void);
extern "C" void func_ov046_02167608(void);
extern "C" s32 func_ov046_021677d0(u8 *arg0);
extern "C" void func_ov046_021678dc(u8 *arg0);
extern "C" s32 func_ov046_02167934(u8 *arg0);
extern "C" s32 func_ov046_02167a44(s32 arg0, s32 arg1);
extern "C" s32 func_ov046_02167aac(s32 arg0, s32 arg1);
extern "C" void func_ov046_02167ae4(void);
extern "C" s32 func_ov046_02167c78(u8 *arg0);
extern "C" s32 func_ov046_02167d10(...);
extern "C" void func_ov046_02167fbc(void);
extern "C" void func_ov046_02168000(void);
extern "C" void func_ov046_02168174(void);
extern "C" s32 func_ov046_02168180(...);
extern "C" s32 func_ov046_021682b4(u8 *arg0, s32 arg1);
extern "C" void func_ov046_0216834c(void);
extern "C" s32 func_ov046_02168498(u8 *arg0);
extern "C" s32 func_ov046_02168528(...);
extern "C" s32 func_ov046_021686b4(u8 *arg0);
extern "C" void func_ov046_021686d8(void);
extern "C" void func_ov046_021687b8(void);
extern "C" void func_ov046_02168a18(void);
extern "C" void func_ov046_02168c80(void);

extern "C" char data_020c463c[];
extern "C" char gFont12Manager[];
extern "C" char gSprButtonCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char data_020c47a4[];
extern "C" char gKeysRepeated[];
extern "C" char gDeltaTime[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4c70[];
extern "C" char gAudioPlayer[];
extern "C" char gBgMenuManager[];
extern "C" char data_020e88a0[];
extern "C" char data_ov046_0216a828[];
extern "C" char data_ov046_0216ad48[];
extern "C" char data_ov046_0216ad68[];
extern "C" char data_ov046_0216ad80[];
extern "C" char data_ov046_0216b060[];
extern "C" void DC_FlushRange(void);
extern "C" void G2_GetBG1CharPtr(void);
extern "C" void G2_GetBG2CharPtr(void);
extern "C" void G2_GetBG3CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN11SaveManager10FinishSaveEv(void);
extern "C" void _ZN11SaveManager14ReadSlotHeaderEiP10SaveHeader(void);
extern "C" void _ZN11SaveManager4LoadEii(void);
extern "C" void _ZN11SaveManager4SaveEii(void);
extern "C" void _ZN11SaveManager9IsLoadingEv(void);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" void _ZN13ScreenManager12SetNextSceneEii(void);
extern "C" void _ZN13ScreenManager8PopSceneEi(void);
extern "C" s32 _ZN11MatchEngine13func_0206e5e4Ev(...);
extern "C" s32 _ZN11MatchEngine13func_0206f70cEv(...);
extern "C" void GX_LoadBG1Char(void);
extern "C" void func_02017278(void);
extern "C" void C3DPlaneCtrl_Create(void);
extern "C" void C3DPlaneCtrl_Destroy(void);
extern "C" void C3DPlaneCtrl_SetTex(void);
extern "C" void C3DPlaneCtrl_SetPltt(void);
extern "C" void C3DPlaneCtrl_SetDepth(void);
extern "C" void C3DPlaneCtrl_SetPos(void);
extern "C" void C3DPlaneCtrl_SetGraphicIdx(void);
extern "C" void func_0209d668(void);
extern "C" void func_0209d8b8(void);
extern "C" void Graphics_LoadBGPaletteMain(void);
extern "C" s32 Graphics_LoadTempPaletteFromPac(...);
extern "C" void Graphics_SetupScreen(void);
extern "C" void Graphics_SetupScreen_2(void);
extern "C" s32 Graphics_LoadBGXCharMain(...);
extern "C" void func_ov015_021334b8(void);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" void Archive_ReadFromSFP(void);
extern "C" void Archive_Close(void);
extern "C" s32 Archive_Deallocate(...);
extern "C" s32 func_ov015_02136134(...);
extern "C" s32 func_ov015_021362b8(...);
extern "C" void func_ov015_02136330(void);
extern "C" void func_ov015_021363e8(void);
extern "C" void CBgMenuManager_AddDynamic(void);
extern "C" s32 CBgMenuManager_AddStatic(...);
extern "C" s32 CBgMenuManager_HideID(...);
extern "C" s32 CBgMenuManager_ShowID(...);
extern "C" s32 CBgMenuManager_UpdateRadio(...);
extern "C" void CBgMenuManager_SetBounds(void);
extern "C" void CBgMenuManager_ReleaseButton(void);
extern "C" s32 CBgMenuManager_IsFlashActive(...);
extern "C" s32 CBgMenuManager_UpdateGraphics(...);
extern "C" s32 CBgMenuManager_GetHit(...);
extern "C" s32 CBgMenuManager_SetScreen(...);
extern "C" void func_ov015_0213c530(void);
extern "C" void CBgMenuRadioButton_DeactivateGx(void);
extern "C" void CBgMenuRadioButton_ActivateGx(void);
extern "C" void CBgMenuRadioButton_ReleaseButton(void);
extern "C" s32 func_ov015_02162750(...);
extern "C" s32 func_ov015_021629c8(...);
extern "C" s32 func_ov015_02162f70(...);
extern "C" s32 func_ov046_02169170(...);
extern "C" s32 func_ov046_02169928(...);
extern "C" char gGameState[];

extern "C" void func_ov046_02165d60(s32 arg0, s32 arg1)
{
    *(s32 *)(data_ov046_0216b060 + 0x4) = arg0;
    *(s32 *)(data_ov046_0216b060) = arg1;
}

extern "C" asm s32 func_ov046_02165d74(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    stmia sp, {r1, r2, r3}
    ldrsb r3, [sp, #0x30]
    ldrb r1, [sp, #0x34]
    ldrb r2, [sp, #0x38]
    str r3, [sp, #0xc]
    str r1, [sp, #0x10]
    mov r5, r0
    ldrb r1, [sp, #0x3c]
    str r2, [sp, #0x14]
    ldr r0, [sp, #0x40]
    str r1, [sp, #0x18]
    str r0, [sp, #0x1c]
    ldr r4, =data_ov046_0216b060
    ldr r0, =gBgMenuManager
    ldr r1, [r4, #4]
    ldr r2, [r4]
    mov r3, #0
    bl CBgMenuManager_AddStatic
    ldr r2, [sp, #0x44]
    cmp r2, #0
    addlt sp, sp, #0x20
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, [r4, #4]
    mov r0, r5
    bl Graphics_LoadTempPaletteFromPac
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov046_02165df0(s32 arg0)
{
    s32 r2;
    s32 r3;
    r2 = 1;
    r3 = 0;
    do {
        *(u8 *)(((u8 *)(arg0 + r3)) + 0x5A) = r2;
        r3 = (r3 + 1);
    } while ((u32)r3 < (u32)2);
    return;
}

extern "C" u8 func_ov046_02165e10(void)
{
    return *(u8 *)(((u8 *)&gGameState) + 0x4F4);
}

extern "C" void func_ov046_02165e20(u8 *arg0, s32 arg1)
{
    u8 *p;
    *(s32 *)(arg0 + 0x274) = arg1;
    if (arg1 != *(u8 *)((u8 *)gGameState + 0x4F4))
        return;
    p = *(u8 **)(arg0 + 0x54);
    if (p != 0 && *(s32 *)(p + 8) != 0) {
        ((void (*)(u8 *, s32))func_ov046_02166110)(arg0, 2);
    } else {
        *(s32 *)(arg0 + 0x28) = 0xC;
        ((void (*)(u8 *, s32))func_ov046_02166110)(arg0, 2);
    }
}

extern "C" void func_ov046_02165e6c(void)
{
    func_ov046_021661fc();
}

extern "C" void func_ov046_02165e78(s32 arg0)
{
    func_ov046_02166110(arg0, 6);
}

extern "C" void func_ov046_02165e88(u8 *arg0)
{
    *(s32 *)(arg0 + 8) = 8;
    if (*(s32 *)((u8 *)data_020c4ab4 + 0x64) == 2)
        ((VCall *)arg0)->f21();
    else
        ((VCall *)arg0)->f20();
    ((void (*)(s32, s32))_ZN13ScreenManager8PopSceneEi)(*(s32 *)(arg0 + 4), 0);
}

extern "C" asm void func_ov046_02165ed0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =data_020c463c
    mov r5, r0
    ldrb r1, [r1]
    mov r4, #0
    cmp r1, #0
    beq @L_02165f00
    mov r4, #1
    mov r1, r4
    mov r0, #0x17
    bl func_ov015_021334b8
    b @L_02165f68
@L_02165f00:
    ldr r1, =data_020c4ab4
    ldrb r3, [r1, #0xc1]
    mov r2, r3, lsl #0x1d
    movs r2, r2, lsr #0x1d
    beq @L_02165f44
    ldr r7, [r5, #4]
    mov r6, #0xf
    mov r0, r7
    mov r1, r4
    mov r2, r6
    bl _ZN13ScreenManager12SetNextSceneEii
    mov r4, #1
    mov r0, r7
    mov r1, r4
    mov r2, r6
    bl _ZN13ScreenManager12SetNextSceneEii
    b @L_02165f68
@L_02165f44:
    mov r2, r3, lsl #0x1a
    movs r2, r2, lsr #0x1d
    beq @L_02165f68
    bic r2, r3, #0x38
    strb r2, [r1, #0xc1]
    ldr r1, [r0]
    ldr r1, [r1, #0x84]
    blx r1
    mov r4, #1
@L_02165f68:
    cmp r4, #0
    beq @L_02165fa0
    mov r1, #8
    ldr r0, =data_020c4ab4
    str r1, [r5, #8]
    ldr r0, [r0, #0x64]
    cmp r0, #2
    mov r0, r5
    ldr r1, [r0]
    bne @L_02165f98
    ldr r1, [r1, #0x54]
    b @L_02165f9c
@L_02165f98:
    ldr r1, [r1, #0x50]
@L_02165f9c:
    blx r1
@L_02165fa0:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov046_02165fb0(void)
{
}

extern "C" asm s32 func_ov046_02165fb4(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, #0
    mov r4, #2
    mov r1, r7
    mov r2, r4
    add r0, r8, #0x5a
    bl MI_CpuFill8
    mov r1, r7
    mov r2, r4
    add r0, r8, #0x58
    bl MI_CpuFill8
    ldr r6, =data_020c4c70
    mov r5, #1
    mov r4, r7
@L_02165ff0:
    str r7, [r8, #0x274]
    add r0, r8, r7, lsl #2
    ldr r2, [r0, #0x54]
    cmp r2, #0
    moveq r0, #2
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r6
    mov r1, r7
    bl _ZN11SaveManager14ReadSlotHeaderEiP10SaveHeader
    add r1, r0, #0x7d
    cmp r1, #1
    movls r0, #2
    ldmlsia sp!, {r4, r5, r6, r7, r8, pc}
    add r1, r0, #0x7b
    cmp r1, #1
    bhi @L_02166044
    cmn r0, #0x7a
    moveq r0, #1
    streqb r0, [r8, #0x294]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166044:
    add r0, r8, r7
    mov r12, r4
    strb r5, [r0, #0x58]
    add r3, r8, r7, lsl #2
    add r1, r8, r7, lsl #4
@L_02166058:
    ldr r2, [r3, #0x54]
    add r0, r1, r12, lsl #2
    add r2, r2, r12, lsl #1
    ldrh r2, [r2, #0x58]
    add r12, r12, #1
    cmp r12, #4
    str r2, [r0, #0x244]
    blt @L_02166058
    add r7, r7, #1
    cmp r7, #1
    blt @L_02165ff0
    mov r0, r8
    ldr r1, [r0]
    ldr r1, [r1, #0x6c]
    blx r1
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov046_021660a0(u8 *arg0, s32 arg1)
{
    u8 *r5;
    s32 v0;
    s32 v2;
    s32 v3;
    s32 v4;
    v0 = func_ov046_02165fb4((s32)arg0, arg1);
    *(s32 *)(arg0 + 0x254) = v0;
    func_ov046_021686b4(arg0);
    r5 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x254);
    switch ((s32)arg0) {
        case 0:
            v2 = func_ov046_02166110((s32)r5, arg1);
            return v2;
        case 1:
            v3 = func_ov046_02166110((s32)r5, 10);
            return v3;
        default:
            *(s32 *)(r5 + 0x8) = 8;
            v4 = ((VCall *)r5)->f29();
            return v4;
    }
}

extern "C" asm s32 func_ov046_02166110(...)
{
    ldr r2, [r0, #0xc]
    cmp r2, r1
    movne r2, #1
    strne r1, [r0, #0xc]
    strneb r2, [r0, #0x39]
    bx lr
}

extern "C" asm void func_ov046_02166128(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r6, =data_020c4c70
    mov r4, r0
    mov r0, r6
    bl _ZN11SaveManager10FinishSaveEv
    cmp r0, #0
    bgt @L_02166178
    bge @L_021661b0
    mvn r2, #0x78
    cmp r0, r2
    bgt @L_02166180
    sub r1, r2, #4
    cmp r0, r1
    blt @L_02166180
    beq @L_02166180
    sub r1, r2, #3
    cmp r0, r1
    cmpne r0, r2
    beq @L_02166198
    b @L_02166180
@L_02166178:
    cmp r0, #1
    ldmeqia sp!, {r4, r5, r6, pc}
@L_02166180:
    mov r2, #8
    mov r0, r4
    mov r1, #9
    str r2, [r4, #8]
    bl func_ov046_02169928
    ldmia sp!, {r4, r5, r6, pc}
@L_02166198:
    mov r2, #8
    mov r0, r4
    mov r1, #6
    str r2, [r4, #8]
    bl func_ov046_02166110
    ldmia sp!, {r4, r5, r6, pc}
@L_021661b0:
    ldr r0, =gAudioPlayer
    mov r5, #4
    mov r1, #0x13
    str r5, [r4, #8]
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    mov r1, r5
    bl func_ov046_02166110
    ldr r2, [r4, #0x54]
    mov r0, r6
    mov r1, #0
    bl _ZN11SaveManager14ReadSlotHeaderEiP10SaveHeader
    mov r0, r4
    bl func_ov046_02165fb4
    mov r0, r4
    bl func_ov046_021686b4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov046_021661fc(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r1, #5
    ldr r0, =gGameState
    str r1, [r4, #8]
    mov r5, #1
    ldrb r1, [r0, #0x4f4]
    ldr r0, =data_020c4c70
    mov r2, r5
    bl _ZN11SaveManager4SaveEii
    cmp r0, #0
    bgt @L_02166264
    bge @L_0216629c
    sub r1, r5, #0x7a
    cmp r0, r1
    bgt @L_0216626c
    sub r1, r5, #0x7e
    cmp r0, r1
    blt @L_0216626c
    beq @L_0216626c
    sub r1, r5, #0x7d
    cmp r0, r1
    subne r1, r5, #0x7a
    cmpne r0, r1
    beq @L_02166284
    b @L_0216626c
@L_02166264:
    cmp r0, #1
    beq @L_0216629c
@L_0216626c:
    mov r2, #8
    mov r0, r4
    mov r1, #6
    str r2, [r4, #8]
    bl func_ov046_02166110
    ldmia sp!, {r3, r4, r5, pc}
@L_02166284:
    mov r2, #8
    mov r0, r4
    mov r1, #6
    str r2, [r4, #8]
    bl func_ov046_02166110
    ldmia sp!, {r3, r4, r5, pc}
@L_0216629c:
    mov r2, #5
    mov r0, r4
    mov r1, #3
    str r2, [r4, #8]
    bl func_ov046_02166110
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov046_021662bc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r1, =data_020c4ab4
    mov r4, r0
    ldr r2, [r4, #0x24]
    ldr r0, [r1, #0x64]
    sub r5, r2, #2
    cmp r0, #6
    mov r6, #1
    ldr r0, =data_020c4c70
    mov r1, r5
    movne r6, #0
    bl _ZN11SaveManager9IsLoadingEv
    str r5, [r4, #0x274]
    cmp r0, #0
    bgt @L_02166328
    bge @L_02166370
    add r1, r0, #0x7f
    cmp r1, #6
    addls pc, pc, r1, lsl #2
    b @L_02166330
    b @L_02166348
    b @L_02166330
    b @L_02166330
    b @L_02166330
    b @L_02166348
    b @L_02166348
    b @L_02166330
@L_02166328:
    cmp r0, #1
    ldmeqia sp!, {r4, r5, r6, pc}
@L_02166330:
    mov r2, #8
    mov r0, r4
    mov r1, #9
    str r2, [r4, #8]
    bl func_ov046_02166110
    ldmia sp!, {r4, r5, r6, pc}
@L_02166348:
    mov r2, #4
    sub r1, r2, #0x7e
    cmp r0, r1
    moveq r0, #1
    streqb r0, [r4, #0x294]
    mov r0, r4
    mov r1, #0xa
    str r2, [r4, #8]
    bl func_ov046_02166110
    ldmia sp!, {r4, r5, r6, pc}
@L_02166370:
    mov r0, #4
    str r0, [r4, #8]
    cmp r6, #0
    beq @L_021663a4
    mov r0, r4
    bl func_ov046_02165ed0
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x80]
    blx r1
    ldmia sp!, {r4, r5, r6, pc}
@L_021663a4:
    ldr r0, =gAudioPlayer
    mov r1, #0x14
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    mov r1, #8
    bl func_ov046_02166110
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov046_021663cc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r0, [r4, #0x24]
    mov r5, #1
    sub r12, r0, #2
    ldr r3, =gGameState
    str r12, [r4, #0x274]
    ldr r0, =data_020c4c70
    mov r2, r5
    and r1, r12, #0xff
    strb r12, [r3, #0x4f4]
    bl _ZN11SaveManager4LoadEii
    cmp r0, #0
    bgt @L_02166434
    bge @L_02166470
    add r1, r0, #0x7f
    cmp r1, #6
    addls pc, pc, r1, lsl #2
    b @L_0216643c
    b @L_02166454
    b @L_0216643c
    b @L_0216643c
    b @L_0216643c
    b @L_02166454
    b @L_02166454
    b @L_0216643c
@L_02166434:
    cmp r0, #1
    beq @L_02166470
@L_0216643c:
    mov r2, #8
    mov r0, r4
    mov r1, #9
    str r2, [r4, #8]
    bl func_ov046_02166110
    ldmia sp!, {r3, r4, r5, pc}
@L_02166454:
    sub r1, r5, #0x7b
    cmp r0, r1
    mov r0, r4
    mov r1, #0xa
    streqb r5, [r4, #0x294]
    bl func_ov046_02166110
    ldmia sp!, {r3, r4, r5, pc}
@L_02166470:
    mov r2, #6
    mov r0, r4
    mov r1, #7
    str r2, [r4, #8]
    bl func_ov046_02166110
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov046_02166490(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    ldr r4, [r7, #0xc]
    mov r1, #3
    str r1, [r7, #8]
    cmp r4, #0xf
    addls pc, pc, r4, lsl #2
    b @L_021666c0
    b @L_021666c0
    b @L_021664f0
    b @L_021665d0
    b @L_021666c0
    b @L_021665fc
    b @L_021666c0
    b @L_021666c0
    b @L_021666c0
    b @L_02166638
    b @L_021666c0
    b @L_0216669c
    b @L_0216669c
    b @L_02166650
    b @L_021666c0
    b @L_02166688
    b @L_0216669c
@L_021664f0:
    ldr r1, [r7, #0x28]
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    b @L_021665d0
    b @L_021665d0
    b @L_021665d0
    b @L_02166530
    b @L_02166598
    b @L_02166598
    b @L_021665d0
    b @L_021665d0
    b @L_02166520
@L_02166520:
    ldr r1, [r0]
    ldr r1, [r1, #0x80]
    blx r1
    b @L_021665d0
@L_02166530:
    mov r5, #0
    mov r6, #1
    ldr r8, =g3DPlaneCtrl
    b @L_02166574
@L_02166540:
    add r0, r7, r5, lsl #2
    ldr r1, [r0, #0x244]
    mov r0, r7
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_ov046_02167aac
    mov r3, r0
    ldr r0, [r8]
    ldr r1, [r7, #0x240]
    mov r2, r6
    bl C3DPlaneCtrl_SetTex
    add r5, r5, #1
    add r6, r6, #1
@L_02166574:
    cmp r5, #4
    blt @L_02166540
    mov r0, r7
    ldr r2, [r0]
    ldr r1, [r7, #0x28]
    ldr r2, [r2, #0x78]
    sub r1, r1, #2
    blx r2
    b @L_021665d0
@L_02166598:
    mov r1, #8
    str r1, [r7, #8]
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r5, #0x19
    ldr r0, [r7, #4]
    mov r2, r5
    mov r1, #0
    bl _ZN13ScreenManager12SetNextSceneEii
    ldr r0, [r7, #4]
    mov r2, r5
    mov r1, #1
    bl _ZN13ScreenManager12SetNextSceneEii
@L_021665d0:
    ldr r0, [r7, #0x28]
    cmp r0, #0xc
    bne @L_021665ec
    mov r0, r7
    ldr r1, [r0]
    ldr r1, [r1, #0x7c]
@L_021665e8:
    b @L_02166680
@L_021665ec:
    cmp r0, #0xd
    bne @L_021666c0
    mov r0, r7
    b @L_021666b8
@L_021665fc:
    ldr r1, [r7, #0x28]
    cmp r1, #0xe
    bne @L_021666c0
    ldrb r1, [r7, #0x278]
    cmp r1, #0
    bne @L_02166628
    mov r2, #4
    mov r1, #0xd
    str r2, [r7, #0x30]
    bl func_ov046_021660a0
    b @L_021666c0
@L_02166628:
    mov r0, #0x13
    mov r1, #1
    bl func_ov015_021334b8
    b @L_021666c0
@L_02166638:
    ldr r1, [r7, #0x28]
    cmp r1, #0xe
    bne @L_021666c0
    ldr r1, [r0]
    ldr r1, [r1, #0x84]
    b @L_021665e8
@L_02166650:
    ldr r1, [r7, #0x28]
    cmp r1, #0xc
    bne @L_02166670
    mov r1, #9
    str r1, [r7, #8]
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    b @L_021665e8
@L_02166670:
    cmp r1, #0xd
    bne @L_021666c0
@L_02166678:
    ldr r1, [r0]
    ldr r1, [r1, #0x80]
@L_02166680:
    blx r1
    b @L_021666c0
@L_02166688:
    bl func_ov046_02165ed0
    cmp r0, #0
    bne @L_021666c0
    mov r0, r7
    b @L_02166678
@L_0216669c:
    ldr r1, [r7, #0x28]
    cmp r1, #0xe
    bne @L_021666c0
    ldrb r1, [r7, #0x294]
    cmp r1, #0
    beq @L_021666b8
    b @L_02166678
@L_021666b8:
    mov r1, #1
    bl func_ov046_02166110
@L_021666c0:
    ldr r1, [r7, #0xc]
    mov r0, #0
    strb r0, [r7, #0x2c]
    cmp r1, r4
    movne r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov046_021666dc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, r0
    ldrb r0, [r5, #0x2c]
    mov r4, r1
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r4, #3
    bne @L_02166740
    mov r8, #0
    mov r9, r8
    ldr r7, =0x270f
    ldr r6, =g3DPlaneCtrl
    b @L_02166738
@L_02166710:
    mov r0, r5
    mov r1, r7
    add r8, r8, #1
    bl func_ov046_02167aac
    mov r3, r0
    ldr r0, [r6]
    ldr r1, [r5, #0x240]
    mov r2, r8
    bl C3DPlaneCtrl_SetPltt
    add r9, r9, #1
@L_02166738:
    cmp r9, #4
    blt @L_02166710
@L_02166740:
    add r0, r5, r4
    ldrb r1, [r0, #0x3a]
    mov r6, #1
    ldr r0, =data_020c47a4
    mov r2, r6
    bl CBgMenuRadioButton_ReleaseButton
    add r0, r5, r4
    ldrb r1, [r0, #0x3a]
    ldr r0, =gBgMenuManager
    bl CBgMenuManager_ReleaseButton
    strb r6, [r5, #0x2c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_ov046_02166780(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 k = arg1 - 2;
    if (arg2 == 0) {
        if (arg0[k + 0x5A] == 0)
            arg1 = 0;
        return arg1;
    }
    if (arg0[0x25C] == 0)
        return arg1;
    k = (arg2 + (k + 2)) % 2 + 2;
    return k;
}

extern "C" asm void func_ov046_021667d0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r0
    ldr r0, [r6, #8]
    mov r5, r1
    cmp r0, #4
    ldreqb r0, [r6, #0x11]
    mov r7, #0
    mov r4, #1
    cmpeq r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gBgMenuManager
    mov r1, r7
    bl CBgMenuManager_IsFlashActive
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r6, #0x30]
    cmp r0, #0
    ldmgtia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r1, [r6, #0xc]
    cmp r1, #4
    bne @L_02166830
    ldrb r0, [r6, #0x293]
    cmp r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166830:
    ldr r0, =gKeysRepeated
    cmp r1, #0xf
    ldrh r0, [r0]
    orr r0, r0, r5
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_02166890
    b @L_021669cc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_02166b24
    b @L_02166ba0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_02166b24
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_02166b24
    b @L_02166b24
    b @L_021669cc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_021669cc
    b @L_02166b24
@L_02166890:
    ldr r1, [r6, #0x24]
    tst r0, #0x80
    sub r8, r1, #2
    beq @L_021668ec
    mov r0, r6
    mov r2, r4
    bl func_ov046_02166780
    ldr r1, [r6, #0x24]
    cmp r1, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    str r0, [r6, #0x24]
    str r0, [r6, #0x28]
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r1, [r6, #0x24]
    ldr r0, =data_020c47a4
    add r1, r1, #1
    add r1, r6, r1
    ldrb r1, [r1, #0x3a]
    mov r2, r4
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021668ec:
    tst r0, #0x40
    beq @L_02166940
    mov r0, r6
    mvn r2, #0
    bl func_ov046_02166780
    ldr r1, [r6, #0x24]
    cmp r1, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    str r0, [r6, #0x24]
    str r0, [r6, #0x28]
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r1, [r6, #0x24]
    ldr r0, =data_020c47a4
    add r1, r1, #1
    add r1, r6, r1
    ldrb r1, [r1, #0x3a]
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166940:
    tst r5, #1
    beq @L_02166984
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r8, #2
    str r0, [r6, #0x24]
    str r0, [r6, #0x28]
    cmp r8, #0
    mov r0, r6
    bne @L_02166978
    mov r1, #3
    bl func_ov046_021666dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166978:
    mov r1, #5
    bl func_ov046_021666dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166984:
    tst r5, #2
    beq @L_021669c0
    mov r4, #4
    ldr r0, =gAudioPlayer
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r0, [r6, #0x278]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r2, #7
    mov r0, r6
    mov r1, r4
    str r2, [r6, #0x28]
    bl func_ov046_021666dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021669c0:
    str r7, [r6, #0x20]
    str r7, [r6, #0x1c]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021669cc:
    tst r5, #0x20
    beq @L_02166a14
    ldr r0, [r6, #0x28]
    cmp r0, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r6, #0xc]
    mov r1, #0xc
    str r1, [r6, #0x28]
    cmp r0, #0xe
    beq @L_02166a00
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
@L_02166a00:
    ldrb r1, [r6, #0x3a]
    ldr r0, =data_020c47a4
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166a14:
    tst r5, #0x10
    beq @L_02166a5c
    ldr r0, [r6, #0x28]
    cmp r0, #0xd
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r6, #0xc]
    mov r1, #0xd
    str r1, [r6, #0x28]
    cmp r0, #0xe
    beq @L_02166a48
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
@L_02166a48:
    ldrb r1, [r6, #0x3b]
    ldr r0, =data_020c47a4
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166a5c:
    ands r0, r5, #1
    bne @L_02166a6c
    tst r5, #2
    beq @L_02166b18
@L_02166a6c:
    cmp r1, #0xe
    bne @L_02166a88
    ldr r0, =gAudioPlayer
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    strb r4, [r6, #0x2c]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166a88:
    cmp r0, #0
    beq @L_02166adc
    ldr r0, [r6, #0x28]
    cmp r0, #0xc
    bne @L_02166ab8
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    mov r1, #0
    bl func_ov046_021666dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166ab8:
    cmp r0, #0xd
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    mov r1, #1
    bl func_ov046_021666dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166adc:
    tst r5, #2
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r1, [r6, #0x3b]
    ldr r0, =data_020c47a4
    mov r3, #0xd
    mov r2, r4
    str r3, [r6, #0x28]
    bl CBgMenuRadioButton_ReleaseButton
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    mov r1, r4
    bl func_ov046_021666dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166b18:
    str r7, [r6, #0x20]
    str r7, [r6, #0x1c]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166b24:
    tst r5, #1
    beq @L_02166b94
    ldr r0, [r6, #0x28]
    cmp r0, #0xe
    movne r0, #0xe
    strne r0, [r6, #0x28]
    ldr r0, [r6, #0xc]
    cmp r0, #8
    bne @L_02166b54
    ldr r0, =gAudioPlayer
    mov r1, #6
    b @L_02166b80
@L_02166b54:
    cmp r0, #4
    bne @L_02166b78
    ldrb r0, [r6, #0x293]
    cmp r0, #0
    bne @L_02166b84
    ldr r0, =gAudioPlayer
    mov r1, #1
    strb r1, [r6, #0x293]
    b @L_02166b80
@L_02166b78:
    ldr r0, =gAudioPlayer
    mov r1, #1
@L_02166b80:
    bl _ZN12SoundManager9PlaySoundEi
@L_02166b84:
    mov r0, r6
    mov r1, #2
    bl func_ov046_021666dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166b94:
    str r7, [r6, #0x20]
    str r7, [r6, #0x1c]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166ba0:
    tst r5, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gAudioPlayer
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    mov r2, #3
    mov r0, r6
    mov r1, r4
    str r2, [r6, #8]
    bl func_ov046_02169928
    mov r0, r6
    bl func_ov046_02169170
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov046_02166be4(s32 arg0, s32 arg1, s32 arg2)
{
    CBgMenuManager_GetHit((s32)gBgMenuManager, 0, arg1, arg2);
}

extern "C" asm s32 func_ov046_02166c04(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x1c]
    cmp r1, #0xe
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02166c58
    ldmia sp!, {r4, pc}
    b @L_02166c58
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02166c9c
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02166cc0
    b @L_02166cf0
    b @L_02166d20
@L_02166c58:
    mov r2, #0
    bl func_ov046_02166780
    cmp r0, #0
    ldreq r0, [r4, #0x1c]
    streq r0, [r4, #0x28]
    streq r0, [r4, #0x24]
    ldmeqia sp!, {r4, pc}
    ldr r2, [r4, #0x1c]
    ldr r0, =data_020c47a4
    add r1, r2, #1
    str r2, [r4, #0x28]
    str r2, [r4, #0x24]
    add r1, r4, r1
    ldrb r1, [r1, #0x3a]
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, pc}
@L_02166c9c:
    ldr r0, [r4, #0x28]
    cmp r0, r1
    ldmeqia sp!, {r4, pc}
    str r1, [r4, #0x28]
    ldrb r1, [r4, #0x3e]
    ldr r0, =data_020c47a4
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, pc}
@L_02166cc0:
    ldr r0, [r4, #0x28]
    cmp r0, r1
    ldmeqia sp!, {r4, pc}
    ldr r0, =gAudioPlayer
    str r1, [r4, #0x28]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r1, [r4, #0x3a]
    ldr r0, =data_020c47a4
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, pc}
@L_02166cf0:
    ldr r0, [r4, #0x28]
    cmp r0, r1
    ldmeqia sp!, {r4, pc}
    ldr r0, =gAudioPlayer
    str r1, [r4, #0x28]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r1, [r4, #0x3b]
    ldr r0, =data_020c47a4
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, pc}
@L_02166d20:
    ldr r0, [r4, #0x28]
    cmp r0, r1
    ldmeqia sp!, {r4, pc}
    str r1, [r4, #0x28]
    ldrb r1, [r4, #0x3c]
    ldr r0, =data_020c47a4
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 func_ov046_02166d4c(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    ldr r0, [r4, #0x20]
    ldr r1, [r4, #0x1c]
    cmp r0, r1
    bne @L_02166dc0
    ldr r0, =data_020c47a4
    bl CBgMenuRadioButton_ActivateGx
    ldr r0, [r4, #0x1c]
    cmp r0, #2
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r7, #0
    mov r8, #1
    ldr r6, =0x270f
    ldr r5, =g3DPlaneCtrl
    b @L_02166db4
@L_02166d8c:
    mov r0, r4
    mov r1, r6
    bl func_ov046_02167aac
    mov r3, r0
    ldr r0, [r5]
    ldr r1, [r4, #0x240]
    mov r2, r8
    bl C3DPlaneCtrl_SetPltt
    add r7, r7, #1
    add r8, r8, #1
@L_02166db4:
    cmp r7, #4
    blt @L_02166d8c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166dc0:
    ldr r5, =data_020c47a4
    mov r0, r5
    bl CBgMenuRadioButton_DeactivateGx
    movs r1, r0
    bmi @L_02166de0
    mov r0, r5
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
@L_02166de0:
    mov r6, #0
    mov r7, #1
    ldr r5, =g3DPlaneCtrl
    b @L_02166e24
@L_02166df0:
    add r0, r4, r6, lsl #2
    ldr r1, [r0, #0x244]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_ov046_02167aac
    mov r3, r0
    ldr r0, [r5]
    ldr r1, [r4, #0x240]
    mov r2, r7
    bl C3DPlaneCtrl_SetTex
    add r6, r6, #1
    add r7, r7, #1
@L_02166e24:
    cmp r6, #4
    blt @L_02166df0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov046_02166e3c(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    ldr r0, [r7, #0x1c]
    mvn r4, #0
    cmp r0, #0xe
    addls pc, pc, r0, lsl #2
    b @L_02166fa4
    b @L_02166fa4
    b @L_02166fa4
    b @L_02166e94
    b @L_02166fa4
    b @L_02166e94
    b @L_02166fa4
    b @L_02166fa4
    b @L_02166f28
    b @L_02166fa4
    b @L_02166fa4
    b @L_02166fa4
    b @L_02166fa4
    b @L_02166f38
    b @L_02166f48
    b @L_02166f58
@L_02166e94:
    mov r6, #1
    ldr r0, =gAudioPlayer
    mov r1, r6
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r7, #0x24]
    mov r5, #0
    add r4, r0, #1
    ldr r8, =g3DPlaneCtrl
    b @L_02166eec
@L_02166eb8:
    add r0, r7, r5, lsl #2
    ldr r1, [r0, #0x244]
    mov r0, r7
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_ov046_02167aac
    mov r3, r0
    ldr r0, [r8]
    ldr r1, [r7, #0x240]
    mov r2, r6
    bl C3DPlaneCtrl_SetTex
    add r5, r5, #1
    add r6, r6, #1
@L_02166eec:
    cmp r5, #4
    blt @L_02166eb8
    ldr r0, [r7, #0x24]
    ldr r1, [r7, #0x1c]
    cmp r0, r1
    beq @L_02166fa4
    ldr r5, =data_020c47a4
    mov r0, r5
    bl CBgMenuRadioButton_DeactivateGx
    add r0, r7, r4
    ldrb r1, [r0, #0x3a]
    mov r0, r5
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166f28:
    mov r4, #4
    ldr r0, =gAudioPlayer
    mov r1, r4
    b @L_02166fa0
@L_02166f38:
    ldr r0, =gAudioPlayer
    mov r1, #1
    mov r4, #0
    b @L_02166fa0
@L_02166f48:
    ldr r0, =gAudioPlayer
    mov r1, #4
    mov r4, #1
    b @L_02166fa0
@L_02166f58:
    ldr r0, [r7, #0xc]
    mov r4, #2
    cmp r0, #8
    bne @L_02166f74
    ldr r0, =gAudioPlayer
    mov r1, #6
    b @L_02166fa0
@L_02166f74:
    cmp r0, #4
    bne @L_02166f98
    ldrb r0, [r7, #0x293]
    cmp r0, #0
    bne @L_02166fa4
    ldr r0, =gAudioPlayer
    mov r1, #1
    strb r1, [r7, #0x293]
    b @L_02166fa0
@L_02166f98:
    ldr r0, =gAudioPlayer
    mov r1, #1
@L_02166fa0:
    bl _ZN12SoundManager9PlaySoundEi
@L_02166fa4:
    cmp r4, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r7
    mov r1, r4
    bl func_ov046_021666dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov046_02166fc8(u8 *arg0, s32 arg1)
{
    u8 *r4;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v6;
    s32 v10;
    s32 t0;
    s32 t1;
    u16 t2;
    u16 t3;
    u16 t4;
    u16 t5;
    s32 t6;
    if (*(s32 *)(arg0 + 0x8) != 4)
        return *(s32 *)(arg0 + 0x8);
    v0 = CBgMenuManager_IsFlashActive((s32)((u8 *)&gBgMenuManager), 0);
    if (v0 != 0)
        return v0;
    if (*(s32 *)(arg0 + 0x30) > 0)
        return *(s32 *)(arg0 + 0x30);
    r4 = (u8 *)arg1;
    if (*(s32 *)(arg0 + 0xC) == 4) {
        if (*(u8 *)(arg0 + 0x293) == 1)
            return *(u8 *)(arg0 + 0x293);
    }
    t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    v1 = func_ov015_02162750(t0, (s32)r4, 0);
    if (v1 == 2) {
        t1 = *(s32 *)(((u8 *)&gSprButtonCtrl));
        v2 = func_ov015_021629c8(t1);
        if (v2 == 1) {
            v3 = _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 1);
            *(u8 *)(arg0 + 0x2C) = 1;
            return v3;
        }
    }
    if (*(u16 *)(r4 + 0x4) == 1) {
        if (*(u16 *)(r4 + 0x6) == 0) {
            if (*(u8 *)(arg0 + 0x11) == 0) {
                *(u8 *)(arg0 + 0x11) = 1;
                t2 = *(u16 *)(r4);
                t3 = *(u16 *)(r4 + 0x2);
                v4 = ((s32 (*)(...))func_ov046_02166be4)((s32)arg0, t2, t3);
                *(s32 *)(arg0 + 0x1C) = v4;
                if (v4 != 0) {
                    func_ov046_02166c04((s32)arg0);
                }
            }
            t4 = *(u16 *)(r4);
            *(s32 *)(arg0 + 0x14) = t4;
            t5 = *(u16 *)(r4 + 0x2);
            *(s32 *)(arg0 + 0x18) = t5;
            v6 = ((s32 (*)(...))func_ov046_02166be4)((s32)arg0, t4, t5);
            t6 = *(s32 *)(arg0 + 0x1C);
            *(s32 *)(arg0 + 0x20) = v6;
            arg1 = t6;
            if (arg1 != 0) {
                func_ov046_02166d4c((s32)arg0, arg1);
            }
        }
        if (*(s32 *)(arg0 + 0xC) != 5)
            return *(s32 *)(arg0 + 0xC);
        _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 1);
        *(s32 *)(arg0 + 0x8) = 3;
        func_ov046_02169928((s32)arg0, 1, 3);
        v10 = func_ov046_02169170((s32)arg0);
        return v10;
    } else {
        if (((*(u8 *)(arg0 + 0x11) != 0 && (arg1 = *(s32 *)(arg0 + 0x1C), arg1 != 0)) && *(s32 *)(arg0 + 0x20) == arg1)) {
            func_ov046_02166e3c((s32)arg0, arg1);
        }
        *(s32 *)(arg0 + 0x20) = 0;
        *(s32 *)(arg0 + 0x1C) = 0;
        *(u8 *)(arg0 + 0x11) = 0;
        return 0;
    }
}

extern "C" s32 func_ov046_02167160(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0x5C), 0, 0x15C);
    Archive_RequestNewRead((s32)data_ov046_0216ad48, (arg0 + 0x5C));
    Archive_RequestNewRead((s32)data_ov046_0216ad68, (arg0 + 0x1B8));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" void func_ov046_021671a4(u8 *arg0)
{
    s32 v = *(s32 *)(arg0 + 0x5C);
    P021671a4 *e;
    if (v == 0)
        return;
    e = (P021671a4 *)data_ov046_0216a828;
    if (e->a == 0)
        return;
    do {
        ((void (*)(s32, u8 *, s32))Archive_ReadFromSFP)(e->a, arg0 + 0x5C + e->b * 0xC, v);
        e++;
    } while (e->a != 0);
}

extern "C" void func_ov046_021671f0(u8 *arg0)
{
    _ZN11MatchEngine13func_0206e5e4Ev((s32)data_020e88a0, *(s8 *)(*(u8 * *)(arg0 + 0x54) + 0x45), ((arg0 + 0x7A) + 0x200), 0x19);
}

extern "C" asm s32 func_ov046_02167218(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    cmp r1, #1
    blo @L_02167258
    add r0, r5, #0x1b8
    mov r1, #1
    bl Archive_Close
    add r0, r5, #0x1b8
    bl Archive_Deallocate
    mov r0, #0
    str r0, [r5, #0x1b8]
    str r0, [r5, #0x1bc]
    strb r0, [r5, #0x1c0]
    strb r0, [r5, #0x1c1]
    strb r0, [r5, #0x1c2]
    ldmia sp!, {r4, r5, r6, pc}
@L_02167258:
    mov r0, #0xc
    mul r4, r1, r0
    add r5, r5, #0x1b8
    add r6, r5, r4
    mov r0, r6
    mov r1, #1
    bl Archive_Close
    mov r0, r6
    bl Archive_Deallocate
    mov r0, #0
    str r0, [r5, r4]
    str r0, [r6, #4]
    strb r0, [r6, #8]
    strb r0, [r6, #9]
    strb r0, [r6, #0xa]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov046_02167298(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    func_ov046_02167218(arg0, -1, arg2, arg3);
    r4 = 0xC;
    r5 = (arg0 + 0x5C);
    r6 = 0;
    do {
        s32 v1 = Archive_Deallocate(((r6 * r4) + r5));
        arg0 = v1;
        r6 = (r6 + 1);
    } while (r6 < 0x1D);
    return arg0;
}

extern "C" asm void func_ov046_021672cc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r0
    mov r4, #1
    mov r8, #3
    ldr r0, [r6, #0xd4]
    mov r1, r4
    mov r2, r8
    bl Graphics_SetupScreen_2
    mov r7, r0
    mov r5, #0
    ldr r0, [r6, #0xd4]
    mov r1, r5
    mov r2, r8
    bl Graphics_LoadTempPaletteFromPac
    ldr r0, [r6, #0xe0]
    mov r2, r8
    add r1, r7, #1
    bl Graphics_SetupScreen_2
    mov r2, r8
    mov r7, r0
    ldr r0, [r6, #0xe0]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    add r1, r7, #1
    ldr r0, [r6, #0xec]
    mov r7, #9
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r2, r7
    mov r7, r0
    ldr r0, [r6, #0xec]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    add r1, r7, #1
    ldr r0, [r6, #0xf8]
    mov r7, #0xa
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r2, r7
    mov r7, r0
    ldr r0, [r6, #0xf8]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    add r1, r7, #1
    ldr r0, [r6, #0x104]
    mov r7, #0xb
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r2, r7
    mov r7, r0
    ldr r0, [r6, #0x104]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    add r1, r7, #1
    ldr r0, [r6, #0x110]
    mov r7, #0xd
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r2, r7
    mov r8, r0
    ldr r0, [r6, #0x110]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    mov r7, #8
    ldr r0, [r6, #0x11c]
    mov r2, r7
    add r1, r8, #1
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x128]
    mov r2, r7
    add r1, r8, #1
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x134]
    mov r2, r7
    add r1, r8, #1
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x140]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x14c]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x164]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x170]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x17c]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x188]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x194]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x158]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0x1a0]
    add r1, r8, #1
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r7, #4
    ldr r0, [r6, #0xb0]
    mov r1, r4
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r2, r7
    mov r7, r0
    ldr r0, [r6, #0xb0]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    add r1, r7, #1
    mov r7, #0xc
    ldr r0, [r6, #0xbc]
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r2, r7
    mov r7, r0
    ldr r0, [r6, #0xbc]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    add r1, r7, #1
    mov r7, #0xe
    ldr r0, [r6, #0x1ac]
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r2, r7
    mov r7, r0
    ldr r0, [r6, #0x1ac]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    add r1, r7, #1
    mov r7, #7
    ldr r0, [r6, #0xc8]
    mov r2, r7
    bl Graphics_SetupScreen_2
    mov r2, r7
    mov r7, r0
    ldr r0, [r6, #0xc8]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    ldr r0, [r6, #0x40]
    cmp r0, #0
    ldrne r1, [r6, #0x44]
    cmpne r1, #0
    movne r5, r4
    cmp r5, #0
    beq @L_02167564
    ldrh r4, [r6, #0x4c]
    ldrh r1, [r6, #0x4e]
    add r2, r7, #1
    mov r3, #0
    mul r1, r4, r1
    mov r1, r1, lsl #1
    bl Graphics_SetupScreen
@L_02167564:
    mov r4, #1
    ldr r0, [r6, #0x68]
    mov r1, r4
    mov r2, r4
    bl Graphics_SetupScreen_2
    mov r1, r0
    ldr r0, [r6, #0x74]
    mov r2, r4
    add r1, r1, #1
    bl Graphics_SetupScreen_2
    mov r1, r0
    ldr r0, [r6, #0x80]
    mov r2, r4
    add r1, r1, #1
    bl Graphics_SetupScreen_2
    mov r1, r0
    mov r5, #5
    ldr r0, [r6, #0x8c]
    add r1, r1, #1
    mov r2, r5
    bl Graphics_SetupScreen_2
    mov r2, r5
    mov r7, r0
    mov r5, #0
    ldr r0, [r6, #0x8c]
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
    ldr r0, [r6, #0x98]
    add r1, r7, #1
    mov r2, r4
    bl Graphics_SetupScreen_2
    add r1, r0, #1
    mov r4, #6
    ldr r0, [r6, #0xa4]
    mov r2, r4
    bl Graphics_SetupScreen_2
    ldr r0, [r6, #0xa4]
    mov r1, r5
    mov r2, r4
    bl Graphics_LoadTempPaletteFromPac
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov046_02167608(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    bl G2_GetBG3CharPtr
    mov r6, #0x20
    mov r7, #0
    mov r1, r0
    mov r0, r7
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2_GetBG3CharPtr
    mov r1, r6
    bl DC_FlushRange
    mov r5, #3
    ldr r1, [r4, #0xd4]
    mov r0, r5
    mov r2, r6
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    ldr r1, [r4, #0xe0]
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    ldr r1, [r4, #0xec]
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    ldr r1, [r4, #0xf8]
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    ldr r1, [r4, #0x104]
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    ldr r1, [r4, #0x110]
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    str r0, [r4, #0x34]
    bl G2_GetBG1CharPtr
    mov r1, r0
    mov r0, r7
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r6
    bl DC_FlushRange
    mov r5, #1
    ldr r1, [r4, #0xb0]
    mov r2, r6
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    ldr r1, [r4, #0xbc]
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    ldr r1, [r4, #0x1ac]
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    ldr r1, [r4, #0xc8]
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    mov r1, r0
    ldr r0, [r4, #0x40]
    cmp r0, #0
    ldrne r0, [r4, #0x44]
    cmpne r0, #0
    moveq r5, #0
    cmp r5, #0
    beq @L_02167740
    ldrh r3, [r4, #0x4c]
    ldrh r2, [r4, #0x4e]
    ldr r0, [r4, #0x44]
    str r1, [r4, #0x48]
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl GX_LoadBG1Char
@L_02167740:
    bl G2_GetBG2CharPtr
    mov r6, #0x20
    mov r1, r0
    mov r2, r6
    mov r0, #0
    bl MIi_CpuClearFast
    bl G2_GetBG2CharPtr
    mov r1, r6
    bl DC_FlushRange
    mov r5, #2
    mov r2, r6
    mov r0, r5
    ldr r1, [r4, #0x68]
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    mov r0, r5
    ldr r1, [r4, #0x74]
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    mov r0, r5
    ldr r1, [r4, #0x80]
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    mov r0, r5
    ldr r1, [r4, #0x8c]
    bl Graphics_LoadBGXCharMain
    mov r2, r0
    mov r0, r5
    ldr r1, [r4, #0x98]
    bl Graphics_LoadBGXCharMain
    ldr r1, [r4, #0xa4]
    mov r2, r0
    mov r0, r5
    bl Graphics_LoadBGXCharMain
    bl Graphics_LoadBGPaletteMain
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov046_021677d0(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 v2;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    if (*(u8 *)(arg0 + 0x39) == 0)
        return *(u8 *)(arg0 + 0x39);
    t0 = *(s32 *)(arg0 + 0xC);
    *(u8 *)(arg0 + 0x39) = 0;
    r4 = arg0;
    arg0 = (u8 *)t0;
    switch ((s32)arg0) {
        case 2:
            r1 = 0x11;
            break;
        case 3:
            t1 = *(s32 *)(r4 + 0x110);
            t2 = *(s32 *)(r4 + 0x34);
            Graphics_LoadBGXCharMain(3, t1, t2);
            r1 = 0x12;
            break;
        case 4:
            r1 = 0x13;
            break;
        case 5:
            r1 = 0x14;
            break;
        case 6:
            r1 = 0x15;
            break;
        case 7:
            t3 = *(s32 *)(r4 + 0x110);
            t4 = *(s32 *)(r4 + 0x34);
            Graphics_LoadBGXCharMain(3, t3, t4);
            r1 = 0x16;
            break;
        case 8:
            r1 = 0x17;
            break;
        case 9:
            r1 = 0x18;
            break;
        case 10:
            r1 = 0x10;
            break;
        case 12:
            r1 = 0x19;
            break;
        case 14:
            r1 = 0x1A;
            break;
        case 15:
            r1 = 0x1B;
            break;
        case 0:
        case 1:
        case 11:
        case 13:
        default:
            return (s32)arg0;
    }
    t5 = *(s32 *)(((u8 *)((r1 * 0xC) + r4)) + 0x5C);
    t6 = *(s32 *)(r4 + 0x34);
    v2 = Graphics_LoadBGXCharMain(3, t5, t6);
    return v2;
}

static inline BOOL ok021678dc(u8 *arg0)
{
    return *(s32 *)(arg0 + 0x40) != 0 && *(s32 *)(arg0 + 0x44) != 0;
}
extern "C" void func_ov046_021678dc(u8 *arg0)
{
    if (ok021678dc(arg0) && *(u8 *)(arg0 + 0x50) != 0) {
        *(u8 *)(arg0 + 0x50) = 0;
        ((void (*)(s32, s32, s32))GX_LoadBG1Char)(*(s32 *)(arg0 + 0x44), *(s32 *)(arg0 + 0x48), *(u16 *)(arg0 + 0x4C) * *(u16 *)(arg0 + 0x4E) * 0x20);
    }
}

extern "C" s32 func_ov046_02167934(u8 *arg0)
{
    s32 r2;
    s32 r4;
    u8 *r5;
    u8 *r6;
    s32 v5;
    s32 t0;
    s32 t1;
    u8 t2;
    s32 t3;
    r5 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0xC);
    r4 = 0;
    switch ((s32)arg0) {
        case 1:
            if (*(u8 *)(r5 + 0x25C) == 0)
                break;
            r2 = 6;
            if (*(s32 *)(r5 + 0x24) != 2) {
                r2 = 5;
            }
            CBgMenuManager_HideID((u8 *)((u8 *)&gBgMenuManager), 0, r2);
            r2 = 5;
            if (*(s32 *)(r5 + 0x24) != 2) {
                r2 = 6;
            }
            CBgMenuManager_ShowID((u8 *)((u8 *)&gBgMenuManager), 0, r2);
            break;
        case 3:
        case 7:
            t0 = ((*(s32 *)(r5 + 0x26C) + *(s32 *)(((u8 *)&gDeltaTime))) + ((u32)((*(s32 *)(r5 + 0x26C) + *(s32 *)(((u8 *)&gDeltaTime))) >> 2) >> 0x1D));
            t1 = (*(s32 *)(r5 + 0x26C) + *(s32 *)(((u8 *)&gDeltaTime)));
            *(s32 *)(r5 + 0x26C) = t1;
            if ((t0 >> 3) != 0) {
                t2 = *(u8 *)(r5 + 0x270);
                *(s32 *)(r5 + 0x26C) = r4;
                *(u8 *)(r5 + 0x270) = (t2 + 1);
                if ((u32)((t2 + 1) & 0xFF) > (u32)7) {
                    *(u8 *)(r5 + 0x270) = r4;
                }
            }
            r6 = (u8 *)*(s32 *)(r5 + 0x110);
            if ((s32)r6 == 0)
                break;
            t3 = (s32)((r6 + *(s32 *)(r6 + 0xC)) + (*(u8 *)(r5 + 0x270) << 3));
            CBgMenuManager_SetScreen((u8 *)((u8 *)&gBgMenuManager), r4, 0xE, t3);
            Graphics_LoadTempPaletteFromPac((s32)r6, r4, 8);
            break;
    }
    CBgMenuManager_UpdateRadio((u8 *)((u8 *)&gBgMenuManager));
    v5 = CBgMenuManager_UpdateGraphics((u8 *)((u8 *)&gBgMenuManager), 0);
    return v5;
}

extern "C" s32 func_ov046_02167a44(s32 arg0, s32 arg1)
{
    s32 r4;
    u8 *r5;
    s32 v0;
    s32 v1;
    s32 t0;
    v0 = _ZN11MatchEngine13func_0206f70cEv((s32)((u8 *)&data_020e88a0), ((u16)arg1));
    r4 = arg1;
    r5 = (u8 *)arg0;
    arg0 = v0;
    if (arg0 != 0) {
        r4 = arg0;
    }
    t0 = *(s32 *)(r5 + 0x1B8);
    v1 = func_ov015_02136134(t0, (s32)((u8 *)&data_ov046_0216ad80), ((u16)r4), (s32)(r5 + 0x1C4), 0, 0, 1, 1);
    return v1;
}

extern "C" s32 func_ov046_02167aac(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v1;
    v0 = _ZN11MatchEngine13func_0206f70cEv((s32)((u8 *)&data_020e88a0), arg1);
    r5 = arg0;
    arg0 = v0;
    r4 = arg1;
    if (arg0 != 0) {
        r4 = ((u16)arg0);
    }
    v1 = func_ov015_021362b8(r4, (r5 + 0x1C4));
    return (v1 & 0xFF);
}

extern "C" asm void func_ov046_02167ae4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r10, r0
    ldr r0, [r10, #0x258]
    cmp r0, #1
    beq @L_02167b14
    cmp r0, #2
    beq @L_02167b68
    cmp r0, #3
    beq @L_02167b84
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02167b14:
    add r0, r10, #0x1c4
    mvn r1, #0
    bl func_ov015_02136330
    ldr r0, =g3DPlaneCtrl
    ldr r1, [r10, #0x240]
    ldr r0, [r0]
    bl C3DPlaneCtrl_Destroy
    mov r4, #0
    b @L_02167b4c
@L_02167b38:
    add r0, r10, r4, lsl #2
    ldr r1, [r0, #0x244]
    mov r0, r10
    bl func_ov046_02167a44
    add r4, r4, #1
@L_02167b4c:
    cmp r4, #4
    blt @L_02167b38
    ldr r1, =0x270f
    mov r0, r10
    bl func_ov046_02167a44
    mov r0, #2
    str r0, [r10, #0x258]
@L_02167b68:
    add r0, r10, #0x1c4
    bl func_ov015_021363e8
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #3
    str r0, [r10, #0x258]
@L_02167b84:
    ldr r6, =g3DPlaneCtrl
    mov r8, #0
    ldr r0, [r6]
    mov r1, #4
    mov r2, #1
    bl C3DPlaneCtrl_Create
    mov r9, r8
    str r0, [r10, #0x240]
    mov r7, r8
    mov r4, #0x1c
    mov r5, #0xa
    b @L_02167c58
@L_02167bb4:
    add r0, r10, r9, lsl #2
    ldr r1, [r0, #0x244]
    mov r0, r10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r8, r8, #1
    bl func_ov046_02167aac
    mov r3, r0
    ldr r0, [r6]
    ldr r1, [r10, #0x240]
    mov r2, r8
    bl C3DPlaneCtrl_SetTex
    ldr r0, [r10, #0x268]
    mov r2, r8
    mov r0, r0, lsl #3
    add r0, r0, #0x3c
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r6]
    ldr r1, [r10, #0x240]
    mul r3, r9, r4
    add r3, r3, #0x68
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    ldr r0, [r6]
    ldr r1, [r10, #0x240]
    mov r2, r8
    mul r3, r8, r5
    rsb r3, r3, #0x1f4
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    bl C3DPlaneCtrl_SetDepth
    str r7, [sp]
    ldr r0, [r6]
    ldr r1, [r10, #0x240]
    mov r2, r8
    mov r3, r7
    bl C3DPlaneCtrl_SetGraphicIdx
    add r9, r9, #1
@L_02167c58:
    cmp r9, #4
    blt @L_02167bb4
    mov r0, #0
    str r0, [r10, #0x258]
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov046_02167c78(u8 *arg0)
{
    s32 v1;
    u8 *t0;
    if (*(u8 *)(arg0 + 0x25C) == 0)
        return *(u8 *)(arg0 + 0x25C);
    if ((s32)*(u8 * *)(arg0 + 0x98) == 0)
        return *(u8 *)(arg0 + 0x25C);
    t0 = *(u8 * *)(arg0 + 0x98);
    CBgMenuManager_AddStatic((s32)gBgMenuManager, 0, 2, 0, 3, 1, 2, 0x11, 0x1C, 4, 0, (*(u8 * *)(arg0 + 0x98) + *(s32 *)(*(u8 * *)(arg0 + 0x98) + 0xC)));
    v1 = Graphics_LoadTempPaletteFromPac(t0, 0, 1);
    *(u8 *)(arg0 + 0x38) = 1;
    return v1;
}

extern "C" asm s32 func_ov046_02167d10(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x38
    mov r10, r0
    cmp r1, #0x19
    ldrne r0, [r10, #0x268]
    mvneq r4, #1
    movne r4, r0, lsl #1
    mov r0, #0xc
    mla r0, r1, r0, r10
    ldr r5, [r0, #0x5c]
    cmp r5, #0
    beq @L_02167db8
    mov r1, #9
    add r0, r4, #8
    mov r0, r0, lsl #0x18
    str r1, [sp]
    mov r1, #3
    str r1, [sp, #4]
    mov r7, #0
    mov r1, #4
    str r1, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #0x18
    str r0, [sp, #0x10]
    mov r0, #0xa
    str r0, [sp, #0x14]
    str r7, [sp, #0x18]
    ldr r1, [r5, #0xc]
    ldr r0, =gBgMenuManager
    add r6, r5, r1
    mov r1, r7
    mov r2, r7
    mov r3, r7
    str r6, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    mov r0, r5
    mov r1, r7
    mov r2, #8
    bl Graphics_LoadTempPaletteFromPac
    mov r0, #1
    strb r0, [r10, #0x38]
@L_02167db8:
    ldr r11, [r10, #0xec]
    cmp r11, #0
    beq @L_02167e70
    ldr r9, [r11, #0xc]
    mov r1, #0xa
    add r0, r4, #0xe
    mov r0, r0, lsl #0x18
    str r1, [sp]
    mov r8, #3
    ldr r5, =gBgMenuManager
    mov r6, #0
    str r8, [sp, #4]
    mov r1, #7
    str r1, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r7, #6
    str r7, [sp, #0x10]
    str r8, [sp, #0x14]
    mov r0, r5
    mov r1, r6
    mov r2, r6
    mov r3, r6
    str r6, [sp, #0x18]
    add r9, r11, r9
    str r9, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    mov r0, #0xb
    str r0, [sp]
    add r0, r4, #0xe
    mov r0, r0, lsl #0x18
    str r8, [sp, #4]
    mov r1, #0x13
    str r1, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    str r7, [sp, #0x10]
    str r8, [sp, #0x14]
    mov r0, r5
    mov r1, r6
    mov r2, r6
    mov r3, r6
    str r6, [sp, #0x18]
    add r5, r9, #0x24
    str r5, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_02167e70:
    ldr r2, [r10, #0xf8]
    cmp r2, #0
    beq @L_02167f50
    add r0, r4, #0xe
    ldr r1, [r2, #0xc]
    mov r5, #0
    add r9, r2, r1
    mov r0, r0, lsl #0x18
    mov r8, r0, asr #0x18
    mov r0, #7
    mov r7, #6
    mov r6, #3
    mov r4, #0x30
    mov r11, #0x18
    strh r0, [sp, #0x20]
    strh r8, [sp, #0x22]
    strh r7, [sp, #0x24]
    strh r6, [sp, #0x26]
    strh r5, [sp, #0x28]
    strh r5, [sp, #0x2a]
    strh r4, [sp, #0x2c]
    strh r11, [sp, #0x2e]
    strb r5, [sp, #0x30]
    str r9, [sp, #0x34]
    str r6, [sp]
    add r0, sp, #0x20
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r1, r5
    mov r2, r5
    mov r3, #0xc
    str r5, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    add r0, r9, #0x24
    mov r1, #0x13
    strh r1, [sp, #0x20]
    str r0, [sp, #0x34]
    strh r8, [sp, #0x22]
    strh r7, [sp, #0x24]
    strh r6, [sp, #0x26]
    strh r5, [sp, #0x28]
    strh r5, [sp, #0x2a]
    strh r4, [sp, #0x2c]
    strh r11, [sp, #0x2e]
    strb r5, [sp, #0x30]
    str r6, [sp]
    add r0, sp, #0x20
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r1, r5
    mov r2, r5
    mov r3, #0xd
    str r5, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
@L_02167f50:
    ldr r6, =data_020c47a4
    mov r7, #0xa
    mov r5, #0
    mov r4, #0xc
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r7
    str r7, [sp]
    bl func_ov015_0213c530
    strb r0, [r10, #0x3a]
    mov r0, r6
    mov r1, r5
    str r7, [sp]
    mov r2, #0xd
    mov r3, #0xb
    bl func_ov015_0213c530
    strb r0, [r10, #0x3b]
    ldrb r1, [r10, #0x3a]
    mov r0, r6
    mov r2, #1
    str r4, [r10, #0x28]
    bl CBgMenuRadioButton_ReleaseButton
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov046_02167fbc(void)
{
    func_ov015_02162f70(*(s32 *)(gSprButtonCtrl), 1, 1, 0, 0, 0x100, 0xC0, 0);
}

extern "C" asm void func_ov046_02168000(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x38
    mov r6, r0
    cmp r1, #0x1b
    ldrne r0, [r6, #0x268]
    movne r5, r0, lsl #1
    mov r0, #0xc
    mla r0, r1, r0, r6
    ldr r4, [r0, #0x5c]
    moveq r5, #0
    cmp r4, #0
    beq @L_021680a4
    mov r2, #9
    add r0, r5, #8
    mov r0, r0, lsl #0x18
    str r2, [sp]
    mov r1, #3
    str r1, [sp, #4]
    mov r7, #0
    mov r1, #4
    str r1, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #0x18
    str r0, [sp, #0x10]
    str r2, [sp, #0x14]
    str r7, [sp, #0x18]
    ldr r1, [r4, #0xc]
    ldr r0, =gBgMenuManager
    add r12, r4, r1
    mov r1, r7
    mov r2, r7
    mov r3, r7
    str r12, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    mov r0, r4
    mov r1, r7
    mov r2, #8
    bl Graphics_LoadTempPaletteFromPac
    mov r0, #1
    strb r0, [r6, #0x38]
@L_021680a4:
    ldr r2, [r6, #0xf8]
    cmp r2, #0
    beq @L_02168124
    ldr r0, [r2, #0xc]
    mov r1, #0
    add r0, r2, r0
    add r12, r5, #0xd
    add r0, r0, #0x48
    mov lr, #0xd
    mov r5, #6
    mov r4, #3
    mov r3, #0x30
    mov r2, #0x18
    strh r3, [sp, #0x2c]
    strh r2, [sp, #0x2e]
    str r0, [sp, #0x34]
    strh lr, [sp, #0x20]
    strh r12, [sp, #0x22]
    strh r5, [sp, #0x24]
    strh r4, [sp, #0x26]
    strh r1, [sp, #0x28]
    strh r1, [sp, #0x2a]
    strb r1, [sp, #0x30]
    add r0, sp, #0x20
    str r4, [sp]
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r2, r1
    mov r3, #0xe
    str r1, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
@L_02168124:
    ldr r5, =data_020c47a4
    mov r1, #0
    mov r4, #0xe
    mov r12, #0xa
    mov r0, r5
    mov r2, r4
    mov r3, r1
    str r12, [sp]
    bl func_ov015_0213c530
    mov r3, r0
    mov r0, r5
    and r1, r3, #0xff
    mov r2, #1
    strb r3, [r6, #0x3c]
    str r4, [r6, #0x28]
    bl CBgMenuRadioButton_ReleaseButton
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov046_02168174(void)
{
    func_ov046_02168180();
}

extern "C" asm s32 func_ov046_02168180(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x38
    mov r8, r0
    mov r0, #0xc
    mla r0, r1, r0, r8
    ldr r1, [r8, #0x268]
    ldr r6, [r0, #0x5c]
    mov r7, r1, lsl #1
    cmp r6, #0
    beq @L_02168218
    mov r2, #9
    add r0, r7, #8
    mov r0, r0, lsl #0x18
    str r2, [sp]
    mov r1, #3
    str r1, [sp, #4]
    mov r4, #0
    mov r5, #1
    str r5, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    str r2, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r1, [r6, #0xc]
    ldr r0, =gBgMenuManager
    add r12, r6, r1
    mov r1, r4
    mov r2, r4
    mov r3, r4
    str r12, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    mov r0, r6
    mov r1, r4
    mov r2, #8
    bl Graphics_LoadTempPaletteFromPac
    strb r5, [r8, #0x38]
@L_02168218:
    ldr r4, [r8, #0x110]
    cmp r4, #0
    addeq sp, sp, #0x38
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r2, [r4, #0xc]
    mov r5, #0
    mov r1, #2
    mov r0, #0x10
    add r6, r4, r2
    add r2, r7, #9
    mov r3, #4
    strh r3, [sp, #0x20]
    strh r2, [sp, #0x22]
    strh r1, [sp, #0x24]
    strh r1, [sp, #0x26]
    strh r5, [sp, #0x28]
    strh r5, [sp, #0x2a]
    strh r0, [sp, #0x2c]
    strh r0, [sp, #0x2e]
    strb r5, [sp, #0x30]
    str r6, [sp, #0x34]
    mov r1, #3
    str r1, [sp]
    add r0, sp, #0x20
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r1, r5
    mov r2, r5
    mov r3, #0xe
    str r5, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    mov r0, r4
    mov r1, r5
    mov r2, #8
    bl Graphics_LoadTempPaletteFromPac
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov046_021682b4(u8 *arg0, s32 arg1)
{
    s32 t1;
    u8 *t2;
    t1 = (*(s32 *)(arg0 + 0x268) << 1);
    func_ov046_02165d60(0, 0);
    if ((s32)*(u8 * *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x5C) == 0)
        return (s32)*(u8 * *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x5C);
    t2 = *(u8 * *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x5C);
    func_ov046_02165d74(t2, 9, 3, 4, (((t1 + 8) << 0x18) >> 0x18), 0x18, 8, 0, (*(u8 * *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x5C) + (*(s32 *)(*(u8 * *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x5C) + 0xC) & -2)), 8);
    *(u8 *)(arg0 + 0x38) = 1;
    return 1;
}

extern "C" asm void func_ov046_0216834c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x30
    mov r4, #0
    mov r6, r0
    mov r0, r4
    mov r1, r4
    ldr r5, [r6, #0x268]
    bl func_ov046_02165d60
    ldr r0, [r6, #0x11c]
    cmp r0, #0
    beq @L_021683cc
    add r1, r5, #0xa
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    str r1, [sp]
    mov r1, #0x1a
    str r1, [sp, #4]
    mov r1, #0xa
    str r1, [sp, #8]
    str r4, [sp, #0xc]
    ldr r1, [r0, #0xc]
    mov r2, #3
    bic r1, r1, #1
    add r1, r0, r1
    mov r3, r2
    str r1, [sp, #0x10]
    mov r4, #8
    mov r1, #9
    str r4, [sp, #0x14]
    bl func_ov046_02165d74
    mov r0, #1
    strb r0, [r6, #0x38]
@L_021683cc:
    ldr r2, [r6, #0x104]
    cmp r2, #0
    beq @L_02168448
    ldr r0, [r2, #0xc]
    mov r1, #0
    add lr, r2, r0
    add r5, r5, #0x11
    mov r12, #0xd
    mov r4, #6
    mov r3, #3
    mov r2, #0x30
    mov r0, #0x18
    strh r2, [sp, #0x24]
    strh r0, [sp, #0x26]
    strh r12, [sp, #0x18]
    strh r5, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r3, [sp, #0x1e]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    strb r1, [sp, #0x28]
    str lr, [sp, #0x2c]
    str r3, [sp]
    add r0, sp, #0x18
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r2, r1
    mov r3, #0xe
    str r1, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
@L_02168448:
    ldr r5, =data_020c47a4
    mov r1, #0
    mov r4, #0xe
    mov r12, #0xa
    mov r0, r5
    mov r2, r4
    mov r3, r1
    str r12, [sp]
    bl func_ov015_0213c530
    mov r3, r0
    mov r0, r5
    and r1, r3, #0xff
    mov r2, #1
    strb r3, [r6, #0x3c]
    str r4, [r6, #0x28]
    bl CBgMenuRadioButton_ReleaseButton
    add sp, sp, #0x30
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov046_02168498(u8 *arg0)
{
    u8 *r6;
    u8 *r7;
    s32 v2;
    r6 = (u8 *)*(s32 *)(arg0 + 0x80);
    r7 = arg0;
    if ((s32)r6 != 0) {
        CBgMenuManager_AddStatic((s32)gBgMenuManager, 0, 2, 0, 1, 0, 0, 0, 0x20, 0x18, 0, (r6 + *(s32 *)(r6 + 0xC)));
        Graphics_LoadTempPaletteFromPac((s32)r6, 0, 1);
        *(u8 *)(r7 + 0x38) = 1;
    }
    v2 = func_ov046_02167d10((s32)r7, 0x19);
    return v2;
}

extern "C" asm s32 func_ov046_02168528(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    movs r9, r1
    mov r10, r0
    mov r8, r2
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #0
    mov r0, r4
    mov r2, #0x3800
    bl MIi_CpuClearFast
    cmp r8, #0
    ldrne r0, [r8, #8]
    cmpne r0, #0
    beq @L_0216869c
    mov r0, #3
    str r0, [sp]
    mov r0, #1
    stmib sp, {r0, r9}
    mov r0, #0xe0
    str r0, [sp, #0xc]
    mov r0, #0x80
    str r0, [sp, #0x10]
    str r4, [sp, #0x14]
    ldr r0, =gFont12Manager
    str r4, [sp, #0x18]
    ldr r0, [r0]
    mov r6, #0xa
    ldr r5, [r0]
    mov r1, r4
    ldr r5, [r5, #8]
    mov r2, r6
    add r3, r8, #0x1c
    blx r5
    ldrsb r7, [r8, #0x14]
    mov r0, #0xad
    cmp r7, #0xa
    movgt r7, r6
    cmp r7, #1
    movlt r7, #1
    bl func_0209d8b8
    mov r4, #0x10
    add r5, sp, #0x1c
    mov r2, r0
    mov r0, r5
    mov r1, r4
    mov r3, r7
    bl func_02017278
    mov r7, #3
    mov r3, r5
    mov r1, r4
    str r7, [sp]
    mov r6, #0
    stmib sp, {r6, r9}
    mov r5, #0xe0
    str r5, [sp, #0xc]
    mov r4, #0x80
    str r4, [sp, #0x10]
    str r6, [sp, #0x14]
    ldr r11, =gFont12Manager
    str r6, [sp, #0x18]
    ldr r0, [r11]
    mov r2, #0x42
    ldr r12, [r0]
    ldr r12, [r12, #8]
    blx r12
    add r3, r8, #0x34
    str r7, [sp]
    mov r8, #1
    stmib sp, {r8, r9}
    str r5, [sp, #0xc]
    str r4, [sp, #0x10]
    str r6, [sp, #0x14]
    str r6, [sp, #0x18]
    ldr r0, [r11]
    mov r1, #0x50
    ldr r12, [r0]
    mov r2, #0x5a
    ldr r12, [r12, #8]
    blx r12
    stmia sp, {r7, r8, r9}
    str r5, [sp, #0xc]
    str r4, [sp, #0x10]
    str r6, [sp, #0x14]
    add r0, r10, #0x7a
    str r6, [sp, #0x18]
    add r3, r0, #0x200
    ldr r0, [r11]
    mov r1, #0x50
    ldr r4, [r0]
    mov r2, #0x6a
    ldr r4, [r4, #8]
    blx r4
@L_0216869c:
    mov r0, r9
    mov r1, #0x3800
    bl DC_FlushRange
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov046_021686b4(u8 *arg0)
{
    func_ov046_02168528(arg0, *(s32 *)(arg0 + 0x44), *(s32 *)(arg0 + 0x54));
    *(u8 *)(arg0 + 0x50) = 1;
    *(s32 *)(arg0 + 0x258) = 1;
    return 1;
}

extern "C" asm void func_ov046_021686d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    ldr r7, [sp, #0x54]
    ldr r4, [sp, #0x58]
    str r2, [sp, #0x20]
    ldr r0, [sp, #0x5c]
    cmp r7, r4
    movgt r7, r4
    mov r9, r3
    str r0, [sp, #0x5c]
    mov r0, r9, lsl #0x18
    ldrb r11, [sp, #0x64]
    ldrb r4, [sp, #0x60]
    ldr r8, [sp, #0x50]
    ldr r6, [sp, #0x68]
    ldr r5, [sp, #0x6c]
    mov r10, r1
    str r0, [sp, #0x24]
@L_02168720:
    stmia sp, {r4, r11}
    str r10, [sp, #8]
    ldr r0, [sp, #0x20]
    ldr r1, =0x66666667
    str r0, [sp, #0xc]
    smull r2, r0, r1, r7
    mov r1, r7, lsr #0x1f
    add r0, r1, r0, asr #2
    mov r1, #0xa
    smull r0, r2, r1, r0
    sub r0, r7, r0
    mul r1, r0, r9
    mul r0, r8, r1
    str r9, [sp, #0x10]
    str r8, [sp, #0x14]
    str r6, [sp, #0x18]
    add r0, r5, r0, lsl #1
    str r0, [sp, #0x1c]
    ldr r0, =0x66666667
    mov r2, r7
    smull r1, r7, r0, r2
    mov r0, r2, lsr #0x1f
    add r7, r0, r7, asr #2
    mov r1, #0
    ldr r0, =gBgMenuManager
    ldr r2, [sp, #0x5c]
    mov r3, r1
    bl CBgMenuManager_AddStatic
    ldr r0, [sp, #0x24]
    cmp r7, #0
    sub r0, r10, r0, asr #24
    mov r0, r0, lsl #0x18
    mov r10, r0, asr #0x18
    bgt @L_02168720
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov046_021687b8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    ldr r4, [sp, #0x5c]
    str r0, [sp, #0x20]
    str r4, [sp, #0x5c]
    ldrb r4, [r4, #0x15]
    mov r9, r1
    mov r10, r2
    mov r11, r3
    cmp r4, #0x3c
    ldr r8, [sp, #0x48]
    ldr r7, [sp, #0x4c]
    ldr r6, [sp, #0x50]
    ldr r5, [sp, #0x54]
    bhs @L_02168838
    mov r1, #2
    stmia sp, {r1, r4}
    mov r1, #0x63
    str r1, [sp, #8]
    str r11, [sp, #0xc]
    str r8, [sp, #0x10]
    add r1, r9, #0xc
    add r2, r10, #3
    str r7, [sp, #0x14]
    mov r1, r1, lsl #0x18
    mov r2, r2, lsl #0x18
    str r6, [sp, #0x18]
    mov r1, r1, asr #0x18
    mov r2, r2, asr #0x18
    mov r3, #1
    str r5, [sp, #0x1c]
    bl func_ov046_021686d8
@L_02168838:
    mov r0, #2
    str r0, [sp]
    ldr r0, [sp, #0x5c]
    add r1, r9, #0x17
    ldrb r2, [r0, #0x17]
    mov r1, r1, lsl #0x18
    add r0, r10, #3
    str r2, [sp, #4]
    mov r2, #0x64
    str r2, [sp, #8]
    mov r2, r0, lsl #0x18
    str r11, [sp, #0xc]
    str r8, [sp, #0x10]
    str r7, [sp, #0x14]
    str r6, [sp, #0x18]
    ldr r0, [sp, #0x20]
    mov r1, r1, asr #0x18
    mov r2, r2, asr #0x18
    mov r3, #1
    str r5, [sp, #0x1c]
    bl func_ov046_021686d8
    ldr r0, [sp, #0x5c]
    ldr r1, =0x91a2b3c5
    ldr r2, [r0, #0x10]
    mov r0, #2
    str r0, [sp]
    umull r0, r4, r2, r1
    mov r4, r4, lsr #0xb
    ldr r0, =0x88888889
    mov r1, r4, lsr #0x1f
    smull r2, r3, r0, r4
    add r3, r3, r4
    add r3, r1, r3, asr #5
    mov r0, #1
    str r3, [sp, #4]
    rsb r0, r0, #0x3e8
    str r0, [sp, #8]
    str r11, [sp, #0xc]
    str r8, [sp, #0x10]
    add r1, r9, #0x10
    add r2, r10, #5
    str r7, [sp, #0x14]
    mov r1, r1, lsl #0x18
    mov r2, r2, lsl #0x18
    str r6, [sp, #0x18]
    ldr r0, [sp, #0x20]
    mov r1, r1, asr #0x18
    mov r2, r2, asr #0x18
    mov r3, #1
    str r5, [sp, #0x1c]
    bl func_ov046_021686d8
    mov r0, #2
    str r0, [sp]
    ldr r0, =0x88888889
    mov r3, #1
    smull r2, r1, r0, r4
    add r1, r1, r4
    mov r0, r4, lsr #0x1f
    add r1, r0, r1, asr #5
    mov r0, #0x3c
    smull r1, r2, r0, r1
    rsb r1, r1, r4
    str r1, [sp, #4]
    mov r0, #0x63
    str r0, [sp, #8]
    str r11, [sp, #0xc]
    str r8, [sp, #0x10]
    add r1, r9, #0x16
    add r2, r10, #5
    str r7, [sp, #0x14]
    mov r1, r1, lsl #0x18
    mov r2, r2, lsl #0x18
    str r6, [sp, #0x18]
    ldr r0, [sp, #0x20]
    mov r1, r1, asr #0x18
    mov r2, r2, asr #0x18
    str r5, [sp, #0x1c]
    bl func_ov046_021686d8
    bl func_0209d668
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02168994
    b @L_02168994
    b @L_0216899c
    b @L_021689a4
    b @L_021689a8
    b @L_021689ac
@L_02168994:
    mov r2, #9
    b @L_021689b0
@L_0216899c:
    mov r2, #6
    b @L_021689b0
@L_021689a4:
    b @L_02168994
@L_021689a8:
    b @L_02168994
@L_021689ac:
    mov r2, #0xb
@L_021689b0:
    mov r0, #2
    str r0, [sp]
    ldr r0, [sp, #0x5c]
    mov r3, #1
    ldr r1, [r0, #0x48]
    ldr r0, =0x3e7
    str r1, [sp, #4]
    str r0, [sp, #8]
    str r11, [sp, #0xc]
    str r8, [sp, #0x10]
    add r1, r9, r2
    add r0, r10, #0xd
    mov r2, r0, lsl #0x18
    str r7, [sp, #0x14]
    mov r1, r1, lsl #0x18
    str r6, [sp, #0x18]
    ldr r0, [sp, #0x20]
    mov r1, r1, asr #0x18
    mov r2, r2, asr #0x18
    str r5, [sp, #0x1c]
    bl func_ov046_021686d8
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov046_02168a18(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r2, [r4, #0xb0]
    mov r5, #2
    cmp r2, #0
    mov r10, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0x268]
    ldr r8, [r4, #0x40]
    ldr r1, [r2, #0xc]
    cmp r8, #0
    add r6, r0, #1
    ldrne r0, [r4, #0x44]
    add r7, r2, r1
    mov r1, r10
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_02168ab8
    mov r0, #0x14
    mov r1, #0
    str r0, [sp]
    mov r0, r6, lsl #0x18
    stmib sp, {r1, r5}
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    ldrh r2, [r4, #0x4c]
    ldr r0, =gBgMenuManager
    mov r3, r1
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r9, [r4, #0x4e]
    mov r2, #1
    and r9, r9, #0xff
    str r9, [sp, #0x14]
    str r1, [sp, #0x18]
    str r8, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_02168ab8:
    ldr r8, [r4, #0x54]
    cmp r8, #0
    ldrne r0, [r8, #8]
    cmpne r0, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsb r0, [r8, #0x14]
    cmp r0, #0xa
    ble @L_02168b8c
    ldr r2, [r4, #0xbc]
    cmp r2, #0
    beq @L_02168b8c
    ldr r1, [r2, #0xc]
    mov r0, #0x10
    stmia sp, {r0, r10}
    mov r11, #9
    str r11, [sp, #8]
    ldr r0, [r4, #0x268]
    add r9, r2, r1
    add r0, r0, #9
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #3
    str r0, [sp, #0x10]
    str r5, [sp, #0x14]
    mov r0, #0xc
    str r0, [sp, #0x18]
    ldr r0, =gBgMenuManager
    str r9, [sp, #0x1c]
    mov r1, r10
    mov r2, #1
    mov r3, r10
    bl CBgMenuManager_AddStatic
    str r5, [sp]
    stmib sp, {r5, r11}
    add r3, r9, #0xc
    ldr r9, [r4, #0x268]
    ldr r0, =gBgMenuManager
    add r9, r9, #9
    mov r9, r9, lsl #0x18
    mov r9, r9, asr #0x18
    str r9, [sp, #0xc]
    mov r9, #3
    str r9, [sp, #0x10]
    str r5, [sp, #0x14]
    mov r9, #0xc
    str r9, [sp, #0x18]
    str r3, [sp, #0x1c]
    mov r2, #1
    mov r1, r10
    mov r3, r10
    bl CBgMenuManager_AddStatic
@L_02168b8c:
    ldrb r0, [r8, #0x15]
    cmp r0, #0x3c
    blo @L_02168c44
    ldr r1, [r4, #0x1ac]
    cmp r1, #0
    beq @L_02168c44
    ldr r0, [r1, #0xc]
    add r9, r1, r0
    bl func_0209d668
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02168bd0
    b @L_02168bd0
    b @L_02168bd8
    b @L_02168bdc
    b @L_02168be0
    b @L_02168be4
@L_02168bd0:
    mov r0, #2
    b @L_02168be8
@L_02168bd8:
    b @L_02168be4
@L_02168bdc:
    b @L_02168bd0
@L_02168be0:
    b @L_02168be4
@L_02168be4:
    mov r0, #0
@L_02168be8:
    add r0, r0, #0xb
    mov r2, #0x13
    mov r0, r0, lsl #0x18
    mov r1, #0
    str r2, [sp]
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    ldr r0, [r4, #0x268]
    mov r2, #4
    add r0, r0, #4
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    str r2, [sp, #0x10]
    str r5, [sp, #0x14]
    mov r0, #0xe
    str r0, [sp, #0x18]
    ldr r0, =gBgMenuManager
    mov r3, r1
    mov r2, #1
    str r9, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_02168c44:
    mov r0, #0x14
    stmia sp, {r0, r10}
    mov r0, #4
    str r0, [sp, #8]
    str r7, [sp, #0xc]
    str r10, [sp, #0x10]
    mov r0, r4
    mov r2, r6
    mov r1, #2
    mov r3, #1
    str r8, [sp, #0x14]
    bl func_ov046_021687b8
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov046_02168c80(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x38
    ldr r1, =data_020c4ab4
    mov r8, r0
    ldr r0, [r1, #0x64]
    mov r9, #1
    cmp r0, #6
    ldr r0, [r8, #0x24]
    mov r10, r9
    mov r6, #0
    movne r10, r6
    mov r5, #2
    ldr r4, =gBgMenuManager
    cmp r0, #0
    bne @L_02168d00
    mov r0, r8
    ldr r1, [r0]
    ldr r1, [r1, #0x70]
    blx r1
    mov r7, r0
    cmp r10, #0
    ldrne r0, =gGameState
    ldrneb r0, [r0, #0x4f4]
    subne r7, r0, #1
    add r0, r7, #2
    str r0, [r8, #0x24]
    str r0, [r8, #0x28]
    cmp r10, #0
    beq @L_02168d04
    mov r0, r8
    bl func_ov046_021663cc
    b @L_02168d04
@L_02168d00:
    sub r7, r0, #2
@L_02168d04:
    ldrb r0, [r8, #0x25c]
    mov r1, #1
    cmp r0, #1
    movne r1, #2
    mov r0, #0xc
    mla r0, r1, r0, r8
    ldr r10, [r0, #0x5c]
    cmp r10, #0
    beq @L_02168d80
    ldr r2, [r10, #0xc]
    mov r0, #0x20
    str r9, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    str r0, [sp, #0x10]
    mov r0, #0x18
    str r0, [sp, #0x14]
    add r12, r10, r2
    str r6, [sp, #0x18]
    ldr r0, =gBgMenuManager
    mov r1, r6
    mov r3, r6
    mov r2, #2
    str r12, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    mov r0, r10
    mov r1, r6
    mov r2, r9
    bl Graphics_LoadTempPaletteFromPac
    strb r9, [r8, #0x38]
@L_02168d80:
    ldr r2, [r8, #0x8c]
    cmp r2, #0
    beq @L_02168e28
    ldr r1, [r2, #0xc]
    ldr r0, [r8, #0x268]
    add r3, r2, r1
    add r2, r0, #1
    mov r1, #0x1c
    mov r0, #0x10
    strh r2, [sp, #0x22]
    strh r1, [sp, #0x24]
    strh r0, [sp, #0x26]
    str r3, [sp, #0x34]
    strh r5, [sp, #0x20]
    strh r6, [sp, #0x28]
    strh r6, [sp, #0x2a]
    strh r6, [sp, #0x2c]
    strh r6, [sp, #0x2e]
    strb r6, [sp, #0x30]
    add r0, sp, #0x20
    str r5, [sp]
    stmib sp, {r0, r6}
    str r6, [sp, #0xc]
    mov r0, r4
    mov r1, r6
    mov r2, r5
    mov r3, r5
    str r6, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    ldr r0, [r8, #0xc]
    cmp r0, #1
    bne @L_02168e28
    str r6, [sp]
    mov r9, #0xe0
    mov r0, r4
    mov r1, r6
    mov r2, r5
    mov r3, r6
    str r9, [sp, #4]
    mov r9, #0x80
    str r9, [sp, #8]
    bl CBgMenuManager_SetBounds
@L_02168e28:
    ldrb r0, [r8, #0x25c]
    cmp r0, #1
    bne @L_02168ed8
    ldr r1, [r8, #0xa4]
    cmp r1, #0
    beq @L_02168ed8
    ldr r0, [r1, #0xc]
    mov r9, #4
    add r3, r1, r0
    mov r2, #2
    mov r1, #0x11
    mov r0, #0x1c
    strh r1, [sp, #0x22]
    strh r0, [sp, #0x24]
    str r3, [sp, #0x34]
    strh r2, [sp, #0x20]
    strh r9, [sp, #0x26]
    strh r6, [sp, #0x28]
    strh r6, [sp, #0x2a]
    strh r6, [sp, #0x2c]
    strh r6, [sp, #0x2e]
    strb r6, [sp, #0x30]
    add r0, sp, #0x20
    str r2, [sp]
    stmib sp, {r0, r6}
    str r6, [sp, #0xc]
    mov r0, r4
    mov r1, r6
    mov r3, r9
    str r6, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    ldr r0, [r8, #0xc]
    cmp r0, #1
    bne @L_02168ed8
    str r6, [sp]
    mov r10, #0xe0
    mov r0, r4
    mov r1, r6
    mov r2, r9
    mov r3, r6
    str r10, [sp, #4]
    mov r9, #0x20
    str r9, [sp, #8]
    bl CBgMenuManager_SetBounds
@L_02168ed8:
    mov r0, r8
    bl func_ov046_02168a18
    mov r0, r8
    bl func_ov046_02167c78
    ldr lr, [r8, #0xd4]
    cmp lr, #0
    beq @L_02168f48
    ldr r12, [lr, #0xc]
    ldr r2, [r8, #0x268]
    mov r0, #5
    mov r1, #0
    str r0, [sp]
    add r0, r2, #1
    mov r0, r0, lsl #0x18
    stmib sp, {r1, r5}
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #0x1c
    str r0, [sp, #0x10]
    mov r0, #0x10
    str r0, [sp, #0x14]
    ldr r0, =gBgMenuManager
    mov r2, r1
    mov r3, r1
    str r1, [sp, #0x18]
    add r9, lr, r12
    str r9, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_02168f48:
    ldr lr, [r8, #0xe0]
    cmp lr, #0
    beq @L_02168fa8
    ldr r12, [lr, #0xc]
    ldr r2, [r8, #0x268]
    mov r0, #6
    mov r1, #0
    str r0, [sp]
    add r0, r2, #0x11
    mov r0, r0, lsl #0x18
    stmib sp, {r1, r5}
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #0x1c
    str r0, [sp, #0x10]
    mov r0, #4
    str r0, [sp, #0x14]
    ldr r0, =gBgMenuManager
    mov r2, r1
    mov r3, r1
    str r1, [sp, #0x18]
    add r5, lr, r12
    str r5, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_02168fa8:
    ldr r0, =gBgMenuManager
    mov r1, #0
    mov r2, #6
    bl CBgMenuManager_HideID
    ldr r0, =data_020c4ab4
    ldr r0, [r0, #0x64]
    cmp r0, #4
    cmpne r0, #6
    cmpne r0, #5
    beq @L_021690e4
    ldr r0, [r8, #0xc]
    cmp r0, #1
    cmpne r0, #0xd
    beq @L_02168fe8
    cmp r0, #0xe
    bne @L_021690e4
@L_02168fe8:
    ldr r1, [r8, #0xc8]
    cmp r1, #0
    beq @L_021690e4
    ldr r0, [r1, #0xc]
    mov r3, #0x19
    add r9, r1, r0
    mov r2, #0x15
    mov r1, #6
    mov r0, #3
    strh r2, [sp, #0x22]
    strh r1, [sp, #0x24]
    strh r0, [sp, #0x26]
    strh r3, [sp, #0x20]
    mov r5, #7
    strh r6, [sp, #0x28]
    strh r6, [sp, #0x2a]
    strh r6, [sp, #0x2c]
    strh r6, [sp, #0x2e]
    strb r6, [sp, #0x30]
    str r9, [sp, #0x34]
    add r0, sp, #0x20
    str r6, [sp]
    stmib sp, {r0, r6}
    str r6, [sp, #0xc]
    mov r0, r4
    mov r1, r6
    mov r3, r5
    str r6, [sp, #0x10]
    mov r2, #1
    bl CBgMenuManager_AddDynamic
    ldr r0, [r8, #0xc]
    cmp r0, #1
    bne @L_02169094
    str r6, [sp]
    mov r10, #0x30
    mov r0, r4
    mov r1, r6
    mov r2, r5
    mov r3, r6
    str r10, [sp, #4]
    mov r4, #0x18
    str r4, [sp, #8]
    bl CBgMenuManager_SetBounds
@L_02169094:
    mov r0, #8
    str r0, [sp]
    mov r0, #2
    str r0, [sp, #4]
    mov r0, #0x19
    str r0, [sp, #8]
    mov r0, #0x15
    mov r1, #0
    str r0, [sp, #0xc]
    mov r0, #6
    str r0, [sp, #0x10]
    mov r0, #3
    str r0, [sp, #0x14]
    ldr r0, =gBgMenuManager
    mov r3, r1
    str r1, [sp, #0x18]
    add r4, r9, #0x24
    mov r2, #1
    str r4, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_021690e4:
    ldr r4, =data_020c47a4
    mov r1, r6
    mov r0, r4
    mov r3, r6
    str r6, [sp]
    mov r2, #2
    bl func_ov015_0213c530
    strb r0, [r8, #0x3d]
    mov r0, r4
    mov r1, r6
    mov r3, r6
    str r6, [sp]
    mov r2, #4
    bl func_ov015_0213c530
    strb r0, [r8, #0x3f]
    mov r1, #0xa
    str r1, [sp]
    mov r0, r4
    mov r3, r6
    mov r1, #7
    mov r2, #8
    bl func_ov015_0213c530
    add r1, r7, #3
    strb r0, [r8, #0x3e]
    add r1, r8, r1
    ldrb r1, [r1, #0x3a]
    mov r0, r4
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
