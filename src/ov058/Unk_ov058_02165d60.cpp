#include "ov058/Unk_ov058_02165d60.hpp"
#include "game/vcall.hpp"
struct E021664d0 { s32 a; s32 b; s32 c; };
struct P021664d0 { u8 pad[0xb8]; E021664d0 arr[1]; };
struct P021663b4 { s32 a; s32 b; };

extern "C" void func_ov058_02165d60(void);
extern "C" void func_ov058_02165d98(u8 *arg0, s32 arg1);
extern "C" s32 func_ov058_02165da0(s32 arg0, s32 arg1);
extern "C" void func_ov058_02165ea0(void);
extern "C" void func_ov058_02166120(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov058_02166140(u8 *arg0);
extern "C" s32 func_ov058_02166180(...);
extern "C" void func_ov058_021661c8(u8 *arg0);
extern "C" s32 func_ov058_02166290(u8 *arg0, s32 arg1);
extern "C" s32 func_ov058_02166380(u8 *arg0);
extern "C" void func_ov058_021663b4(u8 *arg0);
extern "C" s32 func_ov058_02166408(s32 arg0);
extern "C" s32 func_ov058_02166458(...);
extern "C" s32 func_ov058_021664d0(P021664d0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5);
extern "C" void func_ov058_02166548(void);
extern "C" s32 func_ov058_021666b4(...);
extern "C" s32 func_ov058_0216670c(...);
extern "C" void func_ov058_02166c1c(void);
extern "C" void func_ov058_02166c30(u8 *arg0);
extern "C" void func_ov058_02166c88(void);
extern "C" void func_ov058_02166e90(void);
extern "C" s32 func_ov058_021670fc(u8 *arg0);
extern "C" s32 func_ov058_0216712c(s32 arg0);
extern "C" s32 func_ov058_021671c4(u8 *arg0, s32 arg1);
extern "C" void func_ov058_02167220(void);
extern "C" s32 func_ov058_02167224(u8 *arg0);
extern "C" s32 func_ov058_02167274(...);
extern "C" void func_ov058_02167320(u8 *arg0);
extern "C" s32 func_ov058_02167360(...);
extern "C" void func_ov058_02167490(u8 *arg0);
extern "C" void func_ov058_021674c4(u8 *arg0);
extern "C" s32 func_ov058_021674f8(u8 *arg0);
extern "C" s32 func_ov058_02167534(...);
extern "C" s32 func_ov058_021675a0(s32 arg0);
extern "C" s32 func_ov058_02167654(...);
extern "C" s32 func_ov058_021676c0(...);
extern "C" s32 func_ov058_02167778(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov058_021677b8(s32 arg0);
extern "C" void func_ov058_021677cc(void);

extern "C" char g3DPlaneCtrl[];
extern "C" char data_020c47a4[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4ac0[];
extern "C" char data_020c4ac8[];
extern "C" char data_020c4ae1[];
extern "C" char gWirelessUtil[];
extern "C" char gAudioPlayer[];
extern "C" char gBgMenuManager[];
extern "C" char data_020ca78c[];
extern "C" char data_020cb6e0[];
extern "C" char data_020d3d20[];
extern "C" char data_020e88a0[];
extern "C" char data_ov058_021677d0[];
extern "C" char data_ov058_021677d0_b[];
extern "C" char data_ov058_02167914[];
extern "C" char data_ov058_0216791d[];
extern "C" char data_ov058_02167926[];
extern "C" char data_ov058_0216792f[];
extern "C" char data_ov058_02167938[];
extern "C" char data_ov058_02167941[];
extern "C" char data_ov058_0216794a[];
extern "C" char data_ov058_02167953[];
extern "C" char data_ov058_0216795c[];
extern "C" char data_ov058_02167965[];
extern "C" char data_ov058_0216796e[];
extern "C" char data_ov058_02167977[];
extern "C" char data_ov058_02167980[];
extern "C" char data_ov058_02167989[];
extern "C" char data_ov058_02167994[];
extern "C" char data_ov058_021679c0[];
extern "C" void DC_FlushRange(void);
extern "C" void G2_GetBG1CharPtr(void);
extern "C" void G2_GetBG2CharPtr(void);
extern "C" void G2_GetBG3CharPtr(void);
extern "C" void GX_SetGraphicsMode(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" void STD_CopyString(void);
extern "C" void STD_GetStringLength(void);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" s32 _ZN13ScreenManager13FadeMainBlackEv(...);
extern "C" s32 _ZN13ScreenManager12SetNextSceneEii(...);
extern "C" s32 _ZN13ScreenManager13func_0203e090Eii(...);
extern "C" void _ZN13ScreenManager18GetLoadedSceneMainEv(void);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" void _ZN11MatchEngine13func_0206b4b8Ei(void);
extern "C" void _ZN11MatchEngine13func_0206e5e4EmPvi(void);
extern "C" void _ZN11MatchEngine13func_0206e76cEv(void);
extern "C" s32 _ZdlPv(...);
extern "C" void GX_LoadBG2Scr(void);
extern "C" void GX_LoadBG3Char(void);
extern "C" void STD_CopyLString(void);
extern "C" void _s32_div_f(void);
extern "C" void C3DPlaneCtrl_Acquire(void);
extern "C" s32 C3DPlaneCtrl_Release(...);
extern "C" void C3DPlaneCtrl_Destroy(void);
extern "C" s32 C3DSprFile_TryFinalize(...);
extern "C" void C3DSprFile_Release(void);
extern "C" void func_0209b7c8(void);
extern "C" s32 func_0209be60(...);
extern "C" void func_ov003_02102254(void);
extern "C" void func_ov003_0210241c(void);
extern "C" void Graphics_LoadBGPaletteMain(void);
extern "C" void Graphics_LoadTempPaletteFromPac(void);
extern "C" void Graphics_SetupScreen(void);
extern "C" void Graphics_SetupScreen_2(void);
extern "C" void Graphics_LoadBGXCharMain(void);
extern "C" void func_ov015_02133e24(void);
extern "C" s32 func_ov015_02133e8c(...);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" void Archive_ReadFromSFP(void);
extern "C" void Archive_TryFinalize(void);
extern "C" s32 Archive_Close(...);
extern "C" void Archive_Deallocate(void);
extern "C" s32 func_ov015_02134ccc(...);
extern "C" s32 func_ov015_021353a4(...);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" void CBgMenuManager_AddDynamic(void);
extern "C" s32 CBgMenuManager_DeleteAll(...);
extern "C" s32 CBgMenuManager_HideID(...);
extern "C" s32 CBgMenuManager_ShowID(...);
extern "C" s32 CBgMenuManager_UpdateRadio(...);
extern "C" s32 CBgMenuManager_ReleaseButton(...);
extern "C" s32 CBgMenuManager_IsFlashActive(...);
extern "C" void CBgMenuManager_UpdateGraphics(void);
extern "C" s32 CBgMenuManager_Draw(...);
extern "C" s32 CBgMenuManager_GetHit(...);
extern "C" void CBgMenuRadioButton_Init(void);
extern "C" s32 CBgMenuRadioButton_Reset(...);
extern "C" s32 CBgMenuRadioButton_Finalize(...);
extern "C" void func_ov015_0213c530(void);
extern "C" s32 CBgMenuRadioButton_DeactivateGx(...);
extern "C" s32 CBgMenuRadioButton_ActivateGx(...);
extern "C" s32 CBgMenuRadioButton_ReleaseButton(...);
extern "C" void gGameState(void);

extern "C" void func_ov058_02165d60(void)
{
    s32 r4;
    s32 r5;
    s32 r6;
    r4 = 0;
    r5 = (s32)gBgMenuManager;
    r6 = 0;
    do {
        CBgMenuManager_HideID(r5, r4, r6);
        r6 = ((r6 + 1) & 0xFF);
    } while ((u32)r6 < (u32)0x1D);
    return;
}

extern "C" void func_ov058_02165d98(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x54) = arg1;
}

extern "C" s32 func_ov058_02165da0(s32 arg0, s32 arg1)
{
    switch (arg1) {
        case 4:
            return 0;
        case 5:
            return 1;
        case 6:
            return 2;
        case 7:
            return 3;
        case 8:
            return 4;
        case 9:
            return 5;
        case 10:
            return 6;
        case 11:
            return 7;
        case 12:
            return 8;
        case 13:
            return 9;
        case 14:
        case 15:
        case 16:
            return 0;
        case 17:
        case 18:
        case 19:
            return 1;
        case 20:
        case 21:
        case 22:
            return 2;
        case 23:
        case 24:
        case 25:
            return 3;
        case 26:
        case 27:
        case 28:
            return 4;
        case 0:
        case 1:
        case 2:
        case 3:
        default:
            return -1;
    }
}

extern "C" asm void func_ov058_02165ea0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #8]
    mov r5, r1
    cmp r0, #5
    ldreqb r0, [r6, #0x11]
    cmpeq r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r4, =gBgMenuManager
    mov r1, #0
    mov r0, r4
    bl CBgMenuManager_IsFlashActive
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0xc]
    strh r5, [r6, #0xe8]
    cmp r0, #0
    bne @L_02165f58
    tst r5, #1
    beq @L_02165f30
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldr r2, [r6, #0x54]
    cmp r2, #0
    blt @L_02165f58
    cmp r2, #4
    bge @L_02165f58
    add r0, r2, r2, lsl #1
    add r1, r0, #0xf
    add r0, r2, #0x1c
    str r1, [r6, #0x28]
    add r0, r6, r0
    ldrb r1, [r0, #0x80]
    mov r0, r4
    b @L_02165f54
@L_02165f30:
    tst r5, #2
    beq @L_02165f58
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r2, #0x1b
    ldrb r1, [r6, #0xa0]
    mov r0, r4
    str r2, [r6, #0x28]
@L_02165f54:
    bl CBgMenuManager_ReleaseButton
@L_02165f58:
    tst r5, #0x40
    beq @L_02165fc8
    ldrb r0, [r6, #0x5a4]
    cmp r0, #0
    ldrneb r0, [r6, #0x5a5]
    cmpne r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r2, [r6, #0x5a4]
    ldrb r3, [r6, #0x5a5]
    ldr r0, [r6, #0x54]
    sub r1, r2, #1
    mla r0, r3, r1, r0
    smulbb r1, r2, r3
    bl _s32_div_f
    mov r0, r6
    bl func_ov058_02165d98
    ldrb r2, [r6, #0x5a6]
    ldr r1, [r6, #0x54]
    ldr r0, =data_020c47a4
    add r1, r2, r1
    add r1, r6, r1
    ldrb r1, [r1, #0x80]
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, pc}
@L_02165fc8:
    tst r5, #0x80
    beq @L_02166034
    ldrb r0, [r6, #0x5a4]
    cmp r0, #0
    ldrneb r0, [r6, #0x5a5]
    cmpne r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r3, [r6, #0x5a5]
    ldrb r0, [r6, #0x5a4]
    ldr r2, [r6, #0x54]
    smulbb r1, r0, r3
    add r0, r2, r3
    bl _s32_div_f
    mov r0, r6
    bl func_ov058_02165d98
    ldrb r2, [r6, #0x5a6]
    ldr r1, [r6, #0x54]
    ldr r0, =data_020c47a4
    add r1, r2, r1
    add r1, r6, r1
    ldrb r1, [r1, #0x80]
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, pc}
@L_02166034:
    tst r5, #0x20
    beq @L_021660a8
    ldrb r0, [r6, #0x5a4]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r0, [r6, #0x5a5]
    cmp r0, #1
    ldmlsia sp!, {r4, r5, r6, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r2, [r6, #0x5a4]
    ldrb r1, [r6, #0x5a5]
    ldr r0, [r6, #0x54]
    smulbb r1, r2, r1
    add r0, r0, r1
    sub r0, r0, #1
    bl _s32_div_f
    mov r0, r6
    bl func_ov058_02165d98
    ldrb r2, [r6, #0x5a6]
    ldr r1, [r6, #0x54]
    ldr r0, =data_020c47a4
    add r1, r2, r1
    add r1, r6, r1
    ldrb r1, [r1, #0x80]
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, pc}
@L_021660a8:
    tst r5, #0x10
    ldrneb r0, [r6, #0x5a4]
    cmpne r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r0, [r6, #0x5a5]
    cmp r0, #1
    ldmlsia sp!, {r4, r5, r6, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r6, #0x54]
    ldrb r2, [r6, #0x5a4]
    ldrb r1, [r6, #0x5a5]
    add r0, r0, #1
    smulbb r1, r2, r1
    bl _s32_div_f
    mov r0, r6
    bl func_ov058_02165d98
    ldrb r2, [r6, #0x5a6]
    ldr r1, [r6, #0x54]
    ldr r0, =data_020c47a4
    add r1, r2, r1
    add r1, r6, r1
    ldrb r1, [r1, #0x80]
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov058_02166120(s32 arg0, s32 arg1, s32 arg2)
{
    CBgMenuManager_GetHit((s32)gBgMenuManager, 0, arg1, arg2);
}

extern "C" s32 func_ov058_02166140(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 v0;
    s32 v2;
    s32 t0;
    s32 t1;
    t0 = *(s32 *)(arg0 + 0x1C);
    v0 = func_ov058_02165da0((s32)arg0, t0);
    r1 = v0;
    r4 = arg0;
    if ((r1 >= 0 && r1 < *(s32 *)(r4 + 0x58))) {
        func_ov058_02165d98(r4, r1);
    }
    t1 = *(s32 *)(r4 + 0x1C);
    v2 = CBgMenuRadioButton_ActivateGx((s32)data_020c47a4, t1);
    return v2;
}

extern "C" asm s32 func_ov058_02166180(...)
{
    stmdb sp!, {r4, lr}
    ldr r1, [r0, #0x1c]
    ldr r0, [r0, #0x20]
    cmp r0, r1
    bne @L_021661a0
    ldr r0, =data_020c47a4
    bl CBgMenuRadioButton_ActivateGx
    ldmia sp!, {r4, pc}
@L_021661a0:
    ldr r4, =data_020c47a4
    mov r0, r4
    bl CBgMenuRadioButton_DeactivateGx
    movs r1, r0
    ldmmiia sp!, {r4, pc}
    mov r0, r4
    mov r2, #1
    bl CBgMenuRadioButton_ReleaseButton
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov058_021661c8(u8 *arg0)
{
    s32 r5;
    s32 v2;
    s32 t0;
    s32 t1;
    if (*(s32 *)(arg0 + 0xC) == 0) {
        switch ((*(s32 *)(arg0 + 0x20) - 0xE)) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 1);
                break;
            case 12:
            case 13:
            case 14:
                _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 4);
                break;
        }
    }
    t0 = *(s32 *)(arg0 + 0x1C);
    v2 = CBgMenuRadioButton_DeactivateGx((s32)((u8 *)&data_020c47a4), t0);
    r5 = v2;
    if (r5 >= 0) {
        CBgMenuRadioButton_ReleaseButton((s32)((u8 *)&data_020c47a4), r5, 1);
        CBgMenuManager_ReleaseButton((s32)((u8 *)&gBgMenuManager), r5);
    }
    t1 = *(s32 *)(arg0 + 0x1C);
    *(s32 *)(arg0 + 0x28) = t1;
    return;
}

extern "C" s32 func_ov058_02166290(u8 *arg0, s32 arg1)
{
    u8 *r5;
    s32 v0;
    s32 v1;
    s32 v3;
    s32 v4;
    u16 t0;
    u16 t1;
    u16 t2;
    u16 t3;
    s32 t4;
    if (*(s32 *)(arg0 + 0x8) != 5)
        return *(s32 *)(arg0 + 0x8);
    v0 = CBgMenuManager_IsFlashActive((s32)((u8 *)&gBgMenuManager), 0);
    if (v0 != 0)
        return v0;
    r5 = (u8 *)arg1;
    if (*(u16 *)(r5 + 0x4) == 1) {
        if (*(u16 *)(r5 + 0x6) != 0)
            return *(u16 *)(r5 + 0x6);
        if (*(u8 *)(arg0 + 0x11) == 0) {
            *(u8 *)(arg0 + 0x11) = 1;
            t0 = *(u16 *)(r5);
            t1 = *(u16 *)(r5 + 0x2);
            v1 = ((s32 (*)(...))func_ov058_02166120)((s32)arg0, t0, t1);
            *(s32 *)(arg0 + 0x1C) = v1;
            if (v1 != 0) {
                func_ov058_02166140(arg0);
            }
        }
        t2 = *(u16 *)(r5);
        *(s32 *)(arg0 + 0x14) = t2;
        t3 = *(u16 *)(r5 + 0x2);
        *(s32 *)(arg0 + 0x18) = t3;
        v3 = ((s32 (*)(...))func_ov058_02166120)((s32)arg0, t2, t3);
        t4 = *(s32 *)(arg0 + 0x1C);
        *(s32 *)(arg0 + 0x20) = v3;
        if (t4 == 0)
            return v3;
        v4 = func_ov058_02166180((s32)arg0, t4);
        return v4;
    } else {
        if (((*(u8 *)(arg0 + 0x11) != 0 && (arg1 = *(s32 *)(arg0 + 0x1C), arg1 != 0)) && *(s32 *)(arg0 + 0x20) == arg1)) {
            func_ov058_021661c8(arg0);
        }
        *(s32 *)(arg0 + 0x20) = 0;
        *(s32 *)(arg0 + 0x1C) = 0;
        *(u8 *)(arg0 + 0x11) = 0;
        return 0;
    }
}

extern "C" s32 func_ov058_02166380(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0xB8), 0, 0x30);
    Archive_RequestNewRead((s32)data_ov058_02167994, (arg0 + 0xB8));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" void func_ov058_021663b4(u8 *arg0)
{
    s32 v = *(s32 *)(arg0 + 0xB8);
    s32 a;
    P021663b4 *e;
    if (v == 0)
        return;
    a = *(s32 *)data_ov058_021677d0;
    e = (P021663b4 *)data_ov058_021677d0_b;
    if (a == 0)
        return;
    do {
        ((void (*)(s32, u8 *, s32))Archive_ReadFromSFP)(a, arg0 + 0xB8 + e->b * 0xC, v);
        e++;
        a = e->a;
    } while (a != 0);
}

#pragma push
#pragma optimization_level 2
extern "C" s32 func_ov058_02166408(s32 arg0)
{
    s32 r1;
    s32 r5;
    s32 v0;
    s32 t0;
    r5 = 0;
    while (r5 < 10) {
        r1 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x2C);
        if (r1 != 0) {
            t0 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
            v0 = C3DSprFile_TryFinalize(t0, r1);
            if (v0 != 0) {
                return 0;
            }
        }
        r5 = (r5 + 1);
    }
    return 1;
}
#pragma pop

extern "C" asm s32 func_ov058_02166458(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r7, #0
    add r6, r4, #0xb8
    mov r5, #0xc
    b @L_0216647c
@L_02166470:
    mla r0, r7, r5, r6
    bl Archive_Deallocate
    add r7, r7, #1
@L_0216647c:
    cmp r7, #4
    blt @L_02166470
    mov r7, #0
    mov r6, r7
    ldr r5, =g3DPlaneCtrl
    b @L_021664b8
@L_02166494:
    add r0, r4, r7, lsl #2
    ldr r1, [r0, #0x2c]
    cmp r1, #0
    beq @L_021664b4
    ldr r0, [r5]
    bl C3DSprFile_Release
    add r0, r4, r7, lsl #2
    str r6, [r0, #0x2c]
@L_021664b4:
    add r7, r7, #1
@L_021664b8:
    cmp r7, #0xa
    blt @L_02166494
    mov r0, r4
    bl func_ov058_02167654
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov058_021664d0(P021664d0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5)
{
    s32 v = arg0->arr[arg1].a;
    if (v == 0)
        return arg2;
    arg2 = ((s32 (*)(s32, s32, s32))Graphics_SetupScreen_2)(v, arg2 + 1, arg3);
    if (arg5 != 0)
        *arg5 = ((s32 (*)(s32, s32, s32))Graphics_LoadBGXCharMain)(arg4, v, *arg5);
    if (arg3 >= 0)
        ((void (*)(s32, s32, s32))Graphics_LoadTempPaletteFromPac)(v, 0, arg3);
    return arg2;
}

extern "C" asm void func_ov058_02166548(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r5, r0
    bl G2_GetBG3CharPtr
    mov r4, #0x20
    mov r1, r0
    mov r2, r4
    mov r0, #0
    bl MIi_CpuClearFast
    bl G2_GetBG3CharPtr
    mov r1, r4
    bl DC_FlushRange
    str r4, [sp, #8]
    ldr r0, [r5, #0xa4]
    cmp r0, #0
    ldrne r0, [r5, #0xa8]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_021665dc
    ldrh r2, [r5, #0xb0]
    ldrh r1, [r5, #0xb2]
    mov r4, #0x20
    ldr r0, [r5, #0xa4]
    mul r1, r2, r1
    mov r1, r1, lsl #1
    mov r2, #1
    mov r3, #0
    str r4, [r5, #0xac]
    bl Graphics_SetupScreen
    ldrh r1, [r5, #0xb0]
    ldrh r0, [r5, #0xb2]
    ldr r2, [sp, #8]
    mul r0, r1, r0
    add r0, r2, r0, lsl #5
    str r0, [sp, #8]
@L_021665dc:
    bl G2_GetBG1CharPtr
    mov r9, #0x20
    mov r4, #0
    mov r1, r0
    mov r0, r4
    mov r2, r9
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r9
    bl DC_FlushRange
    mov r6, #2
    str r9, [sp, #8]
    mov r8, #1
    str r8, [sp]
    add r7, sp, #8
    mov r0, r5
    mov r1, r6
    mov r2, r4
    mov r3, r6
    str r7, [sp, #4]
    bl func_ov058_021664d0
    mov r1, #3
    str r8, [sp]
    mov r2, r0
    mov r0, r5
    mov r3, r1
    str r7, [sp, #4]
    bl func_ov058_021664d0
    bl G2_GetBG2CharPtr
    mov r1, r0
    mov r0, r4
    mov r2, r9
    bl MIi_CpuClearFast
    bl G2_GetBG2CharPtr
    mov r1, r9
    bl DC_FlushRange
    str r9, [sp, #8]
    stmia sp, {r6, r7}
    mov r0, r5
    mov r1, r8
    mov r3, r8
    mov r2, r4
    bl func_ov058_021664d0
    ldr r3, [r5, #0xc4]
    cmp r3, #0
    beq @L_021666a8
    ldr r0, [r3, #0xc]
    ldr r2, [r3, #0x10]
    mov r1, r4
    add r0, r3, r0
    bl GX_LoadBG2Scr
@L_021666a8:
    bl Graphics_LoadBGPaletteMain
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov058_021666b4(...)
{
    stmdb sp!, {r3, lr}
    mov lr, r0
    ldr r0, [lr, #0xa4]
    cmp r0, #0
    ldrne r0, [lr, #0xa8]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrneb r0, [lr, #0xb4]
    cmpne r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r2, [lr, #0xb0]
    ldrh r1, [lr, #0xb2]
    mov r12, #0
    ldr r0, [lr, #0xa8]
    mul r3, r2, r1
    ldr r1, [lr, #0xac]
    mov r2, r3, lsl #5
    strb r12, [lr, #0xb4]
    bl GX_LoadBG3Char
    ldmia sp!, {r3, pc}
}

extern "C" asm s32 func_ov058_0216670c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r1, =data_ov058_021679c0
    mov r4, r0
    ldr r2, [r1]
    tst r2, #1
    bne @L_021669d4
    ldr r3, =data_ov058_02167914
    mov r9, #1
    strb r9, [r3]
    mov r0, #0xe
    strb r0, [r3, #1]
    mov r8, #3
    strb r8, [r3, #2]
    strb r8, [r3, #3]
    mov r7, #4
    strb r7, [r3, #4]
    orr r2, r2, #1
    str r2, [r1]
    strb r8, [r3, #5]
    mov r6, #0x18
    strb r6, [r3, #6]
    strb r7, [r3, #7]
    mov r0, #0
    strb r0, [r3, #8]
    ldr r10, =data_ov058_0216791d
    ldr r5, =data_ov058_02167926
    ldr r0, =data_ov058_02167977
    ldr lr, =data_ov058_0216792f
    ldr r12, =data_ov058_02167938
    ldr r3, =data_ov058_02167941
    ldr r2, =data_ov058_02167953
    ldr r11, =data_ov058_0216794a
    mov r1, #0x10
    strb r1, [r10, #1]
    ldr r1, =data_ov058_0216795c
    strb r9, [r10]
    strb r8, [r10, #2]
    strb r8, [r10, #3]
    strb r7, [r10, #4]
    strb r8, [r10, #5]
    strb r6, [r10, #6]
    strb r7, [r10, #7]
    strb r9, [r10, #8]
    mov r10, #0xf
    strb r10, [r5, #1]
    strb r10, [r0, #5]
    mov r10, #2
    strb r10, [r5, #8]
    ldr r10, =data_ov058_02167965
    strb r9, [r5]
    strb r8, [r5, #2]
    strb r8, [r5, #3]
    strb r7, [r5, #4]
    strb r8, [r5, #5]
    strb r6, [r5, #6]
    strb r7, [r5, #7]
    mov r5, #0x11
    strb r5, [lr, #1]
    mov r5, #7
    strb r5, [lr, #5]
    strb r5, [r12, #5]
    strb r5, [r3, #5]
    strb r5, [r2, #8]
    mov r5, #0x13
    strb r5, [r12, #1]
    mov r5, #0x12
    strb r5, [r3, #1]
    mov r5, #0xf
    strb r5, [r10, #5]
    mov r5, #5
    strb r5, [r3, #8]
    ldr r5, =data_ov058_0216796e
    strb r9, [r3]
    strb r8, [r3, #2]
    strb r8, [r3, #3]
    strb r7, [r3, #4]
    strb r6, [r3, #6]
    strb r7, [r3, #7]
    mov r3, #0x14
    strb r3, [r11, #1]
    mov r3, #0xf
    strb r3, [r5, #5]
    ldr r3, =data_ov058_02167980
    strb r6, [lr, #6]
    strb r6, [r12, #6]
    strb r6, [r11, #6]
    strb r6, [r2, #6]
    strb r6, [r0, #1]
    strb r6, [r0, #6]
    strb r6, [r1, #6]
    strb r6, [r10, #6]
    strb r6, [r5, #6]
    mov r6, #0
    strb r6, [r3, #8]
    mov r6, #0xb
    strb r7, [lr, #4]
    strb r7, [lr, #7]
    strb r7, [r12, #4]
    strb r7, [r12, #7]
    strb r7, [r12, #8]
    strb r7, [r11, #4]
    strb r7, [r11, #7]
    strb r7, [r2, #4]
    strb r7, [r2, #7]
    strb r9, [r0]
    strb r8, [r0, #2]
    strb r8, [r0, #3]
    strb r7, [r0, #4]
    strb r7, [r0, #7]
    strb r6, [r0, #8]
    mov r0, #6
    strb r7, [r1, #4]
    strb r7, [r1, #7]
    strb r7, [r10, #4]
    strb r7, [r10, #7]
    strb r7, [r5, #4]
    strb r7, [r5, #7]
    mov r7, #0x16
    strb r7, [r2, #1]
    mov r7, #8
    strb r7, [r1, #8]
    mov r7, #9
    strb r7, [r10, #8]
    strb r9, [r11]
    strb r8, [r11, #2]
    strb r8, [r11, #3]
    strb r6, [r11, #5]
    strb r0, [r11, #8]
    mov r11, #0x15
    strb r9, [r12]
    strb r8, [r12, #2]
    strb r8, [r12, #3]
    ldr r12, =data_ov058_02167989
    mov r7, #0x1b
    strb r9, [r2]
    strb r8, [r2, #2]
    strb r8, [r2, #3]
    strb r6, [r2, #5]
    strb r6, [r1, #5]
    mov r6, #0x1a
    mov r2, #0x17
    strb r2, [r10, #1]
    mov r2, #0xa
    strb r9, [r1]
    strb r8, [r1, #2]
    strb r8, [r1, #3]
    strb r11, [r1, #1]
    mov r1, #0x19
    strb r1, [r5, #1]
    mov r1, #2
    strb r9, [lr]
    strb r8, [lr, #2]
    strb r8, [lr, #3]
    strb r8, [lr, #8]
    strb r9, [r10]
    strb r8, [r10, #2]
    strb r8, [r10, #3]
    strb r9, [r5]
    strb r8, [r5, #2]
    strb r8, [r5, #3]
    strb r2, [r5, #8]
    strb r9, [r3]
    strb r6, [r3, #1]
    strb r1, [r3, #2]
    strb r1, [r3, #3]
    strb r6, [r3, #4]
    strb r11, [r3, #5]
    strb r0, [r3, #6]
    strb r8, [r3, #7]
    strb r9, [r12]
    strb r7, [r12, #1]
    strb r1, [r12, #2]
    strb r1, [r12, #3]
    strb r6, [r12, #4]
    strb r11, [r12, #5]
    strb r0, [r12, #6]
    strb r8, [r12, #7]
    strb r9, [r12, #8]
@L_021669d4:
    mov r5, #0xe
    ldr r1, =data_ov058_02167914
    mov r0, r4
    mov r2, r5
    bl func_ov058_02167778
    ldr r6, =data_020c47a4
    mov r8, #2
    mov r0, r6
    mov r1, r5
    str r8, [sp]
    mov r2, #0xf
    mov r3, #0x10
    bl func_ov015_0213c530
    strb r0, [r4, #0x9c]
    mov r0, r6
    str r8, [sp]
    mov r1, #0x11
    mov r2, #0x12
    mov r3, #0x13
    bl func_ov015_0213c530
    strb r0, [r4, #0x9d]
    str r8, [sp]
    mov r0, r6
    mov r1, #0x14
    mov r2, #0x15
    mov r3, #0x16
    bl func_ov015_0213c530
    strb r0, [r4, #0x9e]
    str r8, [sp]
    mov r0, r6
    mov r1, #0x17
    mov r7, #0x18
    mov r2, r7
    mov r3, #0x19
    bl func_ov015_0213c530
    strb r0, [r4, #0x9f]
    mov r11, #0
    str r11, [sp]
    mov r0, r6
    mov r1, #0x1a
    mov r2, #0x1b
    mov r3, r11
    bl func_ov015_0213c530
    strb r0, [r4, #0xa0]
    mov r0, r6
    mov r1, #4
    strb r1, [r4, #0x5a4]
    str r1, [r4, #0x58]
    mov r6, #1
    strb r6, [r4, #0x5a5]
    mov r1, #0x1c
    strb r1, [r4, #0x5a6]
    ldrb r1, [r4, #0x9c]
    mov r2, r6
    bl CBgMenuRadioButton_ReleaseButton
    mov r1, r6
    ldr r0, [r4, #4]
    mov r2, #0x1d
    bl _ZN13ScreenManager12SetNextSceneEii
    ldr r0, =data_020e88a0
    mov r2, #5
    mov r1, r11
    str r5, [r4, #0x5c]
    strb r2, [r4, #0x75]
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r6, r0
    ldr r5, =data_020cb6e0
    ldr r0, =data_020ca78c
    ldrb r1, [r6, #0x2d]
    add r9, r0, #0x400
    ldr r10, [r5, #0x26c]
    add r0, r4, #0x500
    strh r1, [r0, #0xfe]
    mov r1, r9
    add r0, r4, #0x5b0
    bl STD_CopyString
    ldr r0, =data_020e88a0
    mov r1, r11
    bl _ZN11MatchEngine13func_0206b4b8Ei
    strb r0, [r4, #0x5f8]
    ldr r3, [r5, #0x284]
    ldr r0, =0x36b06e71
    mov r1, r6
    umull r0, r6, r3, r0
    sub r0, r3, r6
    add r6, r6, r0, lsr #1
    add r2, r4, #0x500
    mov r6, r6, lsr #0x11
    strh r6, [r2, #0xfa]
    ldr r5, [r5, #0x284]
    ldr r0, =0x91a2b3c5
    ldr r3, =0x88888889
    umull r2, r0, r5, r0
    mov r0, r0, lsr #0xb
    umull r2, r3, r0, r3
    mov r3, r3, lsr #5
    mov r5, #0x3c
    umull r2, r3, r5, r3
    rsb r3, r2, r0
    add r0, r4, #0x1c8
    strb r3, [r4, #0x5f9]
    add r0, r0, #0x400
    bl STD_CopyString
    ldr r1, [r9, #0x24]
    add r0, r4, #0x500
    strh r1, [r0, #0xfc]
    ldrsb r1, [r9, #0x2c]
    ldr r0, =data_020e88a0
    mov r3, r7
    add r2, r4, #0x5e0
    bl _ZN11MatchEngine13func_0206e5e4EmPvi
    ldrh r3, [r10, #4]
    add r2, r4, #0x600
    ldr r0, =data_020e88a0
    mov r1, r8
    strh r3, [r2, #2]
    bl _ZN11MatchEngine13func_0206e76cEv
    add r1, r9, #0x90
    str r1, [r4, #0x620]
    add r1, r4, #0x600
    strh r0, [r1, #4]
    add r0, r4, #0x5b0
    str r0, [r4, #0x78]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov058_02166c1c(void)
{
    CBgMenuManager_UpdateRadio((s32)gBgMenuManager);
}

extern "C" void func_ov058_02166c30(u8 *arg0)
{
    CBgMenuManager_DeleteAll((s32)gBgMenuManager, 0, 0);
    CBgMenuRadioButton_Reset((s32)data_020c47a4);
    func_ov058_02167654(arg0);
    *(u8 *)(arg0 + 0x5A4) = 0;
    *(u8 *)(arg0 + 0x5A5) = 0;
    *(u8 *)(arg0 + 0x5A6) = 0;
    if (*(s32 *)(arg0 + 0xC) != 0)
        return;
    func_ov058_0216670c((s32)arg0);
}

extern "C" asm void func_ov058_02166c88(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, #0
    mov r6, r0
    sub r7, r8, #1
    mov r5, #0x21
    mov r1, r8
    mov r2, r5
    add r0, r6, #0x80
    str r8, [r6, #8]
    strb r8, [r6, #0x10]
    strb r8, [r6, #0x11]
    str r7, [r6, #0x14]
    str r7, [r6, #0x18]
    str r8, [r6, #0x1c]
    str r8, [r6, #0x20]
    str r8, [r6, #0x24]
    str r8, [r6, #0x28]
    str r8, [r6, #0xc]
    mov r4, r8
    bl MI_CpuFill8
    ldr r0, =data_020c47a4
    mov r1, r5
    bl CBgMenuRadioButton_Init
    mov r1, #1
    add r0, r6, #0xa4
    str r8, [r6, #0x5c]
    str r8, [r6, #0x60]
    str r7, [r6, #0x64]
    str r8, [r6, #0x68]
    strb r8, [r6, #0x6c]
    strb r8, [r6, #0x6d]
    str r8, [r6, #0x70]
    strb r8, [r6, #0x74]
    strb r8, [r6, #0x75]
    str r8, [r6, #0x78]
    str r8, [r6, #0x7c]
    str r1, [r6, #0x5ac]
    bl func_ov015_02133e24
    b @L_02166d30
@L_02166d24:
    add r0, r6, r8, lsl #2
    str r4, [r0, #0x2c]
    add r8, r8, #1
@L_02166d30:
    cmp r8, #0xa
    blt @L_02166d24
    mov r5, #0
    mov r1, r5
    add r0, r6, #0xf0
    mov r2, #0x2c
    bl MI_CpuFill8
    ldr r0, =g3DPlaneCtrl
    str r5, [r6, #0xec]
    ldr r0, [r0]
    bl C3DPlaneCtrl_Acquire
    mvn r2, #0
    mov r0, #0x74
    b @L_02166dac
@L_02166d68:
    mla r3, r5, r0, r6
    strb r4, [r3, #0x11c]
    strb r4, [r3, #0x134]
    strb r4, [r3, #0x164]
    add r1, r3, #0x100
    strh r4, [r1, #0x66]
    strb r4, [r3, #0x165]
    strh r4, [r1, #0x68]
    strh r4, [r1, #0x6a]
    strh r2, [r1, #0x6c]
    str r4, [r3, #0x18c]
    strh r4, [r1, #0x6e]
    strh r4, [r1, #0x70]
    strb r4, [r3, #0x172]
    strb r4, [r3, #0x18a]
    strb r4, [r3, #0x18b]
    add r5, r5, #1
@L_02166dac:
    cmp r5, #0xa
    blt @L_02166d68
    add r0, r6, #0x500
    add r1, r6, #0x600
    sub r2, r4, #1
    strb r4, [r6, #0x5a7]
    strb r4, [r6, #0x5a9]
    strb r4, [r6, #0x5a8]
    strb r4, [r6, #0x5aa]
    strb r4, [r6, #0x5b0]
    strb r4, [r6, #0x5c8]
    strb r4, [r6, #0x5f8]
    strh r4, [r0, #0xfa]
    strb r4, [r6, #0x5f9]
    strh r4, [r0, #0xfc]
    strh r4, [r0, #0xfe]
    strh r2, [r1]
    str r4, [r6, #0x620]
    strh r4, [r1, #2]
    strh r4, [r1, #4]
    strb r4, [r6, #0x606]
    strb r4, [r6, #0x61e]
    strb r4, [r6, #0x61f]
    strb r4, [r6, #0x624]
    strb r4, [r6, #0x625]
    bl func_ov015_021353a4
    mov r5, #1
    mov r0, r5
    bl func_ov015_02134ccc
    mov r0, r6
    bl func_ov058_02166380
    mov r0, r5
    mov r1, r4
    mov r2, r5
    bl GX_SetGraphicsMode
    ldr r1, =0x400000e
    ldrh r0, [r1]
    sub r3, r1, #6
    sub r2, r1, #4
    bic r0, r0, #3
    strh r0, [r1]
    ldrh r0, [r3]
    bic r0, r0, #3
    orr r0, r0, #1
    strh r0, [r3]
    ldrh r0, [r2]
    bic r0, r0, #3
    orr r0, r0, #2
    strh r0, [r2]
    ldrh r0, [r1, #-2]!
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov058_02166e90(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r5, r0
    ldr r1, [r5, #8]
    mov r4, #0
    cmp r1, #6
    addls pc, pc, r1, lsl #2
    b @L_021670e4
    b @L_021670e4
    b @L_02166ecc
    b @L_02167024
    b @L_0216703c
    b @L_02167064
    b @L_02167074
    b @L_02167074
@L_02166ecc:
    add r0, r5, #0xb8
    mov r1, #4
    bl Archive_TryFinalize
    cmp r0, #0
    movne r0, #1
    moveq r0, r4
    cmp r0, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r5, #4]
    bl _ZN13ScreenManager18GetLoadedSceneMainEv
    cmp r0, #0x5a
    bne @L_02166f28
    ldr r0, =data_020c4ab4
    strb r4, [r0, #0x71]
    ldr r0, [r5, #4]
    bl func_ov003_0210241c
    cmp r0, #0
    beq @L_0216700c
    mov r0, r5
    bl func_ov058_02167320
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f28:
    ldr r0, [r5, #4]
    bl _ZN13ScreenManager18GetLoadedSceneMainEv
    cmp r0, #0x5f
    bne @L_02166f6c
    movs r0, #0
    beq @L_02166f4c
    ldr r1, =data_020c4ac8
    mov r2, #0x19
    bl STD_CopyLString
@L_02166f4c:
    ldr r0, =data_020c4ac8
    bl STD_GetStringLength
    cmp r0, #0
    ble @L_02166f6c
    mov r0, r5
    bl func_ov058_02167490
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f6c:
    ldr r0, [r5, #4]
    bl _ZN13ScreenManager18GetLoadedSceneMainEv
    cmp r0, #0x64
    bne @L_02166fb8
    ldr r0, =data_020d3d20
    add r1, sp, #0xc
    add r2, sp, #8
    bl func_0209b7c8
    ldr r0, [sp, #8]
    cmp r0, #1
    mov r0, r5
    bne @L_02166fa8
    bl func_ov058_021674c4
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
@L_02166fa8:
    mov r1, #0
    bl func_ov058_02167360
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
@L_02166fb8:
    ldr r0, [r5, #4]
    bl _ZN13ScreenManager18GetLoadedSceneMainEv
    cmp r0, #0x65
    bne @L_0216700c
    ldr r0, =data_020d3d20
    add r1, sp, #4
    add r2, sp, #0
    bl func_0209b7c8
    ldr r0, [sp]
    cmp r0, #1
    bne @L_02166ff4
    mov r0, r5
    bl func_ov058_02167320
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
@L_02166ff4:
    cmp r0, #0
    bne @L_0216700c
    mov r0, r5
    bl func_ov058_02167490
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
@L_0216700c:
    mov r0, r5
    bl func_ov058_021663b4
    mov r0, #2
    add sp, sp, #0x10
    str r0, [r5, #8]
    ldmia sp!, {r4, r5, r6, pc}
@L_02167024:
    bl func_ov058_02166408
    cmp r0, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, #3
    str r0, [r5, #8]
@L_0216703c:
    mov r0, r5
    bl func_ov058_02166548
    mov r0, r5
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #4
    add sp, sp, #0x10
    str r0, [r5, #8]
    ldmia sp!, {r4, r5, r6, pc}
@L_02167064:
    mov r1, r4
    bl func_ov058_021671c4
    mov r0, #5
    str r0, [r5, #8]
@L_02167074:
    mov r0, r5
    bl func_ov058_02166c1c
    ldr r0, [r5, #4]
    add r1, r5, #0x5c
    ldr r2, [r0]
    ldr r2, [r2, #0x3c]
    blx r2
    mov r0, r5
    bl func_ov058_02167220
    ldr r6, =gBgMenuManager
    mov r1, r4
    mov r0, r6
    bl CBgMenuManager_UpdateGraphics
    mov r0, r6
    mov r1, r4
    bl CBgMenuManager_IsFlashActive
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5, #0x28]
    cmp r0, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl func_ov058_021675a0
    mov r0, r6
    mov r1, r4
    bl CBgMenuManager_UpdateGraphics
@L_021670e4:
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov058_021670fc(u8 *arg0)
{
    s32 v1;
    s32 t0;
    if (((*(s32 *)(arg0 + 0x8) != 5 && *(s32 *)(arg0 + 0x8) != 6) && *(s32 *)(arg0 + 0x8) != 7))
        return (s32)arg0;
    t0 = *(s32 *)(arg0 + 0x8);
    func_ov058_021666b4((s32)arg0, t0);
    v1 = CBgMenuManager_Draw((s32)gBgMenuManager, 0);
    return v1;
}

extern "C" s32 func_ov058_0216712c(s32 arg0)
{
    s32 r4;
    u8 *r5;
    s32 v10;
    s32 t0;
    u8 t1;
    CBgMenuManager_Finalize((s32)gBgMenuManager, 0);
    CBgMenuRadioButton_Finalize((s32)data_020c47a4);
    Archive_Close((arg0 + 0xB8), 4);
    func_ov058_02166458(arg0);
    func_0209be60((s32)gWirelessUtil);
    func_ov015_02133e8c((arg0 + 0xA4), 1);
    t0 = *(s32 *)(g3DPlaneCtrl);
    C3DPlaneCtrl_Release(t0);
    r4 = 4;
    r5 = (u8 *)arg0;
    if (*(u8 *)(r5 + 0x624) != 0) {
        func_ov015_021353a4();
        func_ov015_02134ccc(r4);
    }
    if (*(u8 *)(r5 + 0x625) == 0)
        return *(u8 *)(r5 + 0x625);
    t1 = *(u8 *)(r5 + 0x625);
    func_ov015_021353a4(t1);
    v10 = func_ov015_02134ccc(1);
    return v10;
}

extern "C" s32 func_ov058_021671c4(u8 *arg0, s32 arg1)
{
    s32 v2;
    *(s32 *)(arg0 + 0x54) = 0;
    *(s32 *)(arg0 + 0x58) = 1;
    *(s32 *)(arg0 + 0x5AC) = 1;
    *(s32 *)(arg0 + 0xC) = arg1;
    func_ov058_02166c30(arg0);
    ((s32 (*)(...))func_ov058_02165d60)((s32)arg0, 0);
    if (*(s32 *)(arg0 + 0xC) != 0)
        *(s32 *)(arg0 + 0x58) = 1;
    v2 = CBgMenuManager_ShowID((s32)gBgMenuManager, 0, 2);
    *(s32 *)(arg0 + 0x28) = 0;
    return v2;
}

extern "C" void func_ov058_02167220(void)
{
}

extern "C" s32 func_ov058_02167224(u8 *arg0)
{
    s32 v2;
    u8 *t1;
    s32 t2;
    *(s32 *)(arg0 + 0x8) = 6;
    ((VCall *)arg0)->f20();
    t1 = (u8 *)*(s32 *)(arg0 + 0x4);
    *(s32 *)(t1 + 0x8C) = 1;
    t2 = *(s32 *)(arg0 + 0x4);
    _ZN13ScreenManager12SetNextSceneEii(t2, 0, 0x1C);
    v2 = _ZN13ScreenManager12SetNextSceneEii(t2, 1, 0xF);
    return v2;
}

extern "C" asm s32 func_ov058_02167274(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r0, [r7, #4]
    bl func_ov003_02102254
    mov r1, #6
    mov r6, #1
    ldr r0, =gGameState
    str r1, [r7, #8]
    strb r6, [r7, #0x624]
    mov r5, #0
    strb r5, [r0, #0x1b]
    ldr r4, =data_020c4ab4
    strb r5, [r0, #0x1a]
    mov r0, r7
    str r5, [r4, #0xc4]
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    strb r6, [r4, #0x6e]
    strb r6, [r4, #0x6f]
    strb r5, [r4, #0x70]
    strb r5, [r4, #0x72]
    strb r5, [r4, #0x73]
    strb r5, [r4, #0x68]
    strb r5, [r4, #0x69]
    strb r5, [r4, #0x6a]
    strb r5, [r4, #0x6b]
    strb r6, [r4, #0x71]
    strb r6, [r4, #0x74]
    strb r5, [r4, #0xc8]
    ldr r7, [r7, #4]
    mov r4, #0x73
    mov r0, r7
    mov r1, r5
    mov r2, r4
    bl _ZN13ScreenManager13func_0203e090Eii
    mov r0, r7
    mov r1, r6
    mov r2, r4
    bl _ZN13ScreenManager13func_0203e090Eii
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov058_02167320(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 6;
    *(u8 *)(arg0 + 0x625) = 1;
    _ZN13ScreenManager13FadeMainBlackEv(*(s32 *)(arg0 + 0x4), 1, 6);
    *(s32 *)(data_020c4ab4 + 0x64) = 0;
    _ZN13ScreenManager13func_0203e090Eii(*(s32 *)(arg0 + 0x4), 0, 0x1A);
}

extern "C" asm s32 func_ov058_02167360(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r2, #6
    mov r5, #0
    ldr r0, =gGameState
    str r2, [r7, #8]
    strb r5, [r0, #0x1a]
    ldr r0, [r7, #4]
    mov r6, r1
    mov r4, r5
    bl _ZN13ScreenManager13FadeMainBlackEv
    ldr r0, [r7, #4]
    mov r1, r5
    mov r2, #0x5f
    bl _ZN13ScreenManager13func_0203e090Eii
    mov r0, #1
    strb r0, [r7, #0x625]
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020e88a0
    mov r1, r5
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrb r0, [r0, #0x2d]
    cmp r0, #0
    beq @L_02167420
    ldr r0, =data_020c4ab4
    ldr r3, =data_020c4ac0
    str r5, [r0, #8]
    strb r5, [r0, #0x14]
    ldr r1, =data_020c4ae1
    mov r0, #0x19
    b @L_021673f0
@L_021673e0:
    mul r2, r5, r0
    str r4, [r3, r5, lsl #2]
    strb r4, [r1, r2]
    add r5, r5, #1
@L_021673f0:
    cmp r5, #2
    blt @L_021673e0
    ldr r0, =data_020c4ab4
    mov r1, #3
    str r1, [r0, #4]
    strb r4, [r0, #0x60]
    mov r1, #1
    strb r1, [r0, #0x61]
    strb r4, [r0, #0x62]
    strb r4, [r0, #0x5f]
    strb r4, [r0, #0x63]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02167420:
    ldr r0, =data_020c4ab4
    ldr r3, =data_020c4ac0
    str r5, [r0, #8]
    strb r5, [r0, #0x14]
    ldr r1, =data_020c4ae1
    mov r0, #0x19
    b @L_0216744c
@L_0216743c:
    mul r2, r5, r0
    str r4, [r3, r5, lsl #2]
    strb r4, [r1, r2]
    add r5, r5, #1
@L_0216744c:
    cmp r5, #2
    blt @L_0216743c
    ldr r0, =data_020c4ab4
    mov r1, #2
    str r1, [r0, #4]
    strb r4, [r0, #0x60]
    mov r1, #1
    strb r1, [r0, #0x61]
    strb r4, [r0, #0x62]
    strb r4, [r0, #0x5f]
    strb r4, [r0, #0x63]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov058_02167490(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 6;
    *(u8 *)(arg0 + 0x624) = 1;
    _ZN13ScreenManager13FadeMainBlackEv(*(s32 *)(arg0 + 0x4), 1, 6);
    _ZN13ScreenManager13func_0203e090Eii(*(s32 *)(arg0 + 0x4), 0, 0x64);
}

extern "C" void func_ov058_021674c4(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 6;
    *(u8 *)(arg0 + 0x624) = 1;
    _ZN13ScreenManager13FadeMainBlackEv(*(s32 *)(arg0 + 0x4), 1, 6);
    _ZN13ScreenManager13func_0203e090Eii(*(s32 *)(arg0 + 0x4), 0, 0x65);
}

extern "C" s32 func_ov058_021674f8(u8 *arg0)
{
    s32 v1;
    u8 *t1;
    s32 t2;
    *(s32 *)(arg0 + 0x8) = 6;
    ((VCall *)arg0)->f20();
    t1 = (u8 *)*(s32 *)(arg0 + 0x4);
    *(s32 *)(t1 + 0x8C) = 1;
    t2 = *(s32 *)(arg0 + 0x4);
    v1 = _ZN13ScreenManager12SetNextSceneEii(t2, 0, 0x23);
    return v1;
}

extern "C" asm s32 func_ov058_02167534(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #1
    mov r1, #6
    strb r5, [r6, #0x624]
    str r1, [r6, #8]
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r4, #0x62
    ldr r2, =data_020c4ab4
    mov r1, #0
    ldr r0, =gGameState
    str r1, [r2, #0xc4]
    strb r1, [r0, #0x1b]
    strb r1, [r0, #0x1a]
    ldr r6, [r6, #4]
    mov r2, r4
    mov r0, r6
    bl _ZN13ScreenManager13func_0203e090Eii
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl _ZN13ScreenManager13func_0203e090Eii
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov058_021675a0(s32 arg0)
{
    s32 r1;
    u8 *r4;
    r4 = (u8 *)arg0;
    if (*(s32 *)(r4 + 0xC) == 0) {
        r1 = *(s32 *)(r4 + 0x28);
        if ((r1 >= 0xE && r1 <= 0x10)) {
            func_ov058_021674f8((u8 *)arg0);
        } else {
            if ((r1 >= 0x11 && r1 <= 0x13)) {
                func_ov058_02167274((s32)r4);
            } else {
                if ((r1 >= 0x14 && r1 <= 0x16)) {
                    func_ov058_02167360((s32)r4, 1);
                    *(u8 *)(r4 + 0x75) = 6;
                } else {
                    if ((r1 >= 0x17 && r1 <= 0x19)) {
                        func_ov058_02167534((s32)r4);
                    }
                }
            }
        }
        arg0 = *(s32 *)(r4 + 0x28);
        if ((arg0 >= 0x1A && arg0 <= 0x1C)) {
            func_ov058_02167224(r4);
        }
    }
    *(s32 *)(r4 + 0x28) = 0;
    return 0;
}

extern "C" asm s32 func_ov058_02167654(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, #0
    mov r4, r0
    mov r6, r7
    ldr r5, =g3DPlaneCtrl
    b @L_02167690
@L_0216766c:
    add r0, r4, r7, lsl #2
    ldr r1, [r0, #0xf0]
    cmp r1, #0
    beq @L_0216768c
    ldr r0, [r5]
    bl C3DPlaneCtrl_Destroy
    add r0, r4, r7, lsl #2
    str r6, [r0, #0xf0]
@L_0216768c:
    add r7, r7, #1
@L_02167690:
    cmp r7, #0xb
    blt @L_0216766c
    ldr r1, [r4, #0xec]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DSprFile_Release
    mov r0, #0
    str r0, [r4, #0xec]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov058_021676c0(...)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x2c
    mov r3, r1
    ldrb r2, [r3, #2]
    mov r1, #0xc
    mla r0, r2, r1, r0
    ldr r4, [r0, #0xb8]
    cmp r4, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldrb r7, [r3, #7]
    ldrb r6, [r3, #6]
    ldr r2, [r4, #0xc]
    ldrb r1, [r3, #8]
    smulbb r0, r6, r7
    add r2, r4, r2
    mov r0, r0, lsl #1
    mla r5, r1, r0, r2
    mov r1, #0
    ldrb r4, [r3, #3]
    ldrsb lr, [r3, #5]
    ldrsb r12, [r3, #4]
    mov r2, r6, lsl #3
    mov r0, r7, lsl #3
    strh r2, [sp, #0x20]
    strh r0, [sp, #0x22]
    ldrb r2, [r3]
    strh r12, [sp, #0x14]
    strh lr, [sp, #0x16]
    strh r6, [sp, #0x18]
    strh r7, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strb r4, [sp, #0x24]
    str r5, [sp, #0x28]
    add r0, sp, #0x14
    str r1, [sp]
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldrb r3, [r3, #1]
    ldr r0, =gBgMenuManager
    str r1, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov058_02167778(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r6;
    s32 r7;
    s32 v0;
    r4 = 0;
    if (arg2 <= 0)
        return arg0;
    if (arg2 <= 0)
        return arg0;
    r7 = arg0;
    r6 = arg1;
    do {
        v0 = func_ov058_021676c0(r7, r6);
        arg0 = v0;
        r4 = (r4 + 1);
        r6 = (r6 + 9);
    } while (r4 < arg2);
    return arg0;
}

extern "C" s32 func_ov058_021677b8(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov058_021677cc(void)
{
}
