#include "ov020/Unk_ov020_02165d60.hpp"
struct E02166308 { u8 pad[0x1c]; s32 v[0x10]; u8 pad2[0xb0 - 0x1c - 0x40]; };
struct P02166308 { u8 pad[0x108]; E02166308 arr[1]; };

extern "C" void func_ov020_02165d60(u8 *arg0, u16 arg1, u8 arg2, u8 arg3);
extern "C" void func_ov020_02165d70(s32 arg0);
extern "C" void func_ov020_02165d8c(s32 arg0);
extern "C" void func_ov020_02165e2c(u8 *arg0);
extern "C" s32 func_ov020_02165ef0(u8 *arg0);
extern "C" void func_ov020_02165f28(void);
extern "C" s32 func_ov020_0216602c(s32 arg0);
extern "C" s32 func_ov020_0216607c(s32 arg0);
extern "C" void func_ov020_021660e0(void);
extern "C" s32 func_ov020_021661f8(s32 arg0, s32 arg1);
extern "C" s32 func_ov020_02166284(...);
extern "C" s32 func_ov020_021662ec(s32 arg0, s32 arg1);
extern "C" void func_ov020_02166308(P02166308 *arg0);
extern "C" s32 func_ov020_021663d0(...);
extern "C" s32 func_ov020_0216664c(...);
extern "C" void func_ov020_021669e8(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov020_02166a20(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4);
extern "C" void func_ov020_02166aa4(void);
extern "C" void func_ov020_02166d20(void);
extern "C" void func_ov020_02166e58(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
extern "C" void func_ov020_02166f7c(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_ov020_02167140(s32 arg0, u8 *arg1);
extern "C" void func_ov020_02167188(u8 *arg0, s32 arg1);
extern "C" void func_ov020_02167198(u8 *arg0, s32 arg1);
extern "C" void func_ov020_021671dc(void);
extern "C" s32 func_ov020_02167270(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov020_021673a0(...);
extern "C" void func_ov020_02167564(void);
extern "C" s32 func_ov020_02167654(...);
extern "C" s32 func_ov020_0216773c(s32 arg0);
extern "C" void func_ov020_021677b8(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_ov020_02167860(...);
extern "C" s32 func_ov020_021678c8(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_ov020_02167a34(...);
extern "C" void func_ov020_02167a8c(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_ov020_02167ae0(u8 *arg0, s32 arg1);
extern "C" void func_ov020_02167bb0(void);
extern "C" void func_ov020_02167d48(void);
extern "C" void func_ov020_02167eac(u8 *arg0, s32 arg1);
extern "C" void func_ov020_02167ec0(void);
extern "C" void func_ov020_02168244(u8 *arg0, s32 arg1);
extern "C" void func_ov020_02168314(void);
extern "C" s32 func_ov020_0216841c(...);
extern "C" void func_ov020_02168434(void);
extern "C" void func_ov020_0216858c(void);
extern "C" void func_ov020_0216871c(void);
extern "C" void func_ov020_02168720(void);
extern "C" s32 func_ov020_0216879c(s32 arg0);
extern "C" void func_ov020_021687b0(void);

extern "C" char gFont12Manager[];
extern "C" char gFont8[];
extern "C" char gSprAnimCtrl[];
extern "C" char gSprButtonCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gKeysRepeated[];
extern "C" char gDeltaTime[];
extern "C" char gAudioPlayer[];
extern "C" char gMainScreen0[];
extern "C" char gMainScreen1[];
extern "C" char gMainScreen2[];
extern "C" char data_020d3d20[];
extern "C" char data_020d9978[];
extern "C" char data_020e88a0[];
extern "C" char data_ov020_021687b4[];
extern "C" char data_ov020_02168904[];
extern "C" char data_ov020_02168950[];
extern "C" char data_ov020_021689bc[];
extern "C" char data_ov020_021689d8[];
extern "C" char data_ov020_021689fc[];
extern "C" char data_ov020_02168a18[];
extern "C" char data_ov020_02168a34[];
extern "C" s32 DC_FlushRange(...);
extern "C" void G2_GetBG1CharPtr(void);
extern "C" void G2_GetBG2CharPtr(void);
extern "C" void G2_GetBG3CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" s32 STD_CompareString(...);
extern "C" void _ZN11TreasureBox13func_020526ecEii(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN13ScreenManager8PopSceneEi(void);
extern "C" void _ZN13ScreenManager18GetLoadedSceneMainEv(void);
extern "C" void _ZN11MatchEngine13func_0207aaf4Eii(void);
extern "C" void _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii(void);
extern "C" s32 _ZdlPv(...);
extern "C" void GX_LoadBG1Scr(void);
extern "C" void GX_LoadBG2Scr(void);
extern "C" void GX_LoadBG3Scr(void);
extern "C" void GX_LoadBG2Char(void);
extern "C" void _s32_div_f(void);
extern "C" void C3DPlaneCtrl_GetTexHeight(void);
extern "C" void C3DPlaneCtrl_Acquire(void);
extern "C" void C3DPlaneCtrl_Release(void);
extern "C" s32 C3DPlaneCtrl_Create(...);
extern "C" void C3DPlaneCtrl_Destroy(void);
extern "C" s32 C3DPlaneCtrl_SetTexAll(...);
extern "C" s32 C3DPlaneCtrl_SetDepthAll(...);
extern "C" void C3DPlaneCtrl_SetDepthStepAll(void);
extern "C" void func_02092808(void);
extern "C" s32 C3DPlaneCtrl_SetGraphicIdxAll(...);
extern "C" void C3DPlaneCtrl_SetTex(void);
extern "C" void C3DPlaneCtrl_SetPos(void);
extern "C" void C3DPlaneCtrl_SetTexWH(void);
extern "C" void C3DPlaneCtrl_SetTexST(void);
extern "C" void C3DPlaneCtrl_SetFlag(void);
extern "C" void C3DPlaneCtrl_ClearFlag(void);
extern "C" void C3DPlaneCtrl_SetGraphicIdx(void);
extern "C" void C3DPlaneCtrl_SetColorMask(void);
extern "C" s32 C3DPlaneCtrl_SetPos_2(...);
extern "C" s32 C3DPlaneCtrl_SetFlag_2(...);
extern "C" void C3DPlaneCtrl_ClearFlag_2(void);
extern "C" void C3DSprFile_LoadFromPath(void);
extern "C" s32 C3DSprFile_TryFinalize(...);
extern "C" void C3DSprFile_Release(void);
extern "C" s32 C3DSprFile_IsInVram(...);
extern "C" s32 C3DSprFile_LoadToVram(...);
extern "C" void C3DSprFile_UploadTex(void);
extern "C" void C3DSprFile_AllocTexBuffer(void);
extern "C" s32 C3DSprFile_CreateTex16(...);
extern "C" s32 func_0209b7b0(...);
extern "C" s32 func_0209d8b8(...);
extern "C" void func_ov000_02114298(void);
extern "C" void func_ov000_02116938(void);
extern "C" void func_ov000_02116d08(void);
extern "C" void Graphics_LoadBGPaletteMain(void);
extern "C" void Graphics_LoadTempPaletteFromPac(void);
extern "C" void Graphics_SetupScreen(void);
extern "C" void func_ov015_02132c08(void);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" void Archive_TryFinalize(void);
extern "C" s32 Archive_Close(...);
extern "C" s32 Archive_Deallocate(...);
extern "C" void Archive_SFPGetOffsetAndSize(void);
extern "C" s32 func_ov015_02135f24(...);
extern "C" void func_ov015_02135fe0(void);
extern "C" void func_ov015_02136018(void);
extern "C" void func_ov015_0213606c(void);
extern "C" void func_ov015_021616a4(void);
extern "C" void func_ov015_021616dc(void);
extern "C" void func_ov015_02161710(void);
extern "C" void func_ov015_02161760(void);
extern "C" s32 func_ov015_021618a0(...);
extern "C" s32 func_ov015_02161d00(...);
extern "C" s32 func_ov015_02161d24(...);
extern "C" s32 func_ov015_02161dd4(...);
extern "C" void func_ov015_02161f84(void);
extern "C" void func_ov015_02161fdc(void);
extern "C" s32 func_ov015_02162140(...);
extern "C" void func_ov015_02162420(void);
extern "C" s32 func_ov015_021624f0(...);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_021629d0(void);
extern "C" void func_ov015_02162f2c(void);
extern "C" void func_ov015_02162f70(void);
extern "C" s32 func_ov015_02162fb4(...);
extern "C" s32 func_ov015_021630d8(...);
extern "C" void gGameState(void);
extern "C" void sprintf(void);

extern "C" void func_ov020_02165d60(u8 *arg0, u16 arg1, u8 arg2, u8 arg3)
{
    *(u16 *)(arg0) = arg1;
    *(u8 *)(arg0 + 0x2) = arg2;
    *(u8 *)(arg0 + 0x3) = arg3;
}

extern "C" void func_ov020_02165d70(s32 arg0)
{
    Archive_RequestNewRead((s32)data_ov020_021689bc, (arg0 + 0x18));
}

extern "C" void func_ov020_02165d8c(s32 arg0)
{
    Archive_RequestNewRead((s32)data_ov020_021689d8, (arg0 + 0x2B8));
    Archive_RequestNewRead((s32)data_ov020_021689fc, (arg0 + 0x2C4));
    MIi_CpuClearFast(0, (s32)gMainScreen0, 0x800);
    MIi_CpuClearFast(0, (s32)gMainScreen1, 0x800);
    MIi_CpuClearFast(0, (s32)gMainScreen2, 0x800);
    DC_FlushRange((s32)gMainScreen0, 0x800);
    DC_FlushRange((s32)gMainScreen1, 0x800);
    DC_FlushRange((s32)gMainScreen2, 0x800);
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov020_02165e2c(u8 *arg0)
{
    char path[0x100];
    char name[0x100];
    s32 a;
    s32 b;
    s32 i;
    ((s32 (*)(...))sprintf)(name, data_ov020_02168a18);
    for (i = 0; i < 17; i++) {
        ((s32 (*)(...))sprintf)(path, data_ov020_02168a34, ((s32 *)data_ov020_02168904)[i]);
        if (((s32 (*)(...))Archive_SFPGetOffsetAndSize)(path, *(s32 *)(arg0 + 0x18), &a, &b) != 0) {
            s32 y = *(volatile s32 *)&b;
            s32 x = *(volatile s32 *)&a;
            s32 m = *(volatile s32 *)g3DPlaneCtrl;
            *(s32 *)(arg0 + (i << 2) + 0x24) = ((s32 (*)(...))C3DSprFile_LoadFromPath)(m, 5, name, 1, 0, 1, 0, x, y);
        }
    }
    ((s32 (*)(...))func_ov020_02165ef0)(arg0);
}
#pragma pop

extern "C" s32 func_ov020_02165ef0(u8 *arg0)
{
    Archive_Close((arg0 + 0x18), 1);
    Archive_Deallocate((arg0 + 0x18));
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x1C) = 0;
    *(u8 *)(arg0 + 0x20) = 0;
    *(u8 *)(arg0 + 0x21) = 0;
    *(u8 *)(arg0 + 0x22) = 0;
    return 0;
}

extern "C" asm void func_ov020_02165f28(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r0
    mov r4, #0
    bl func_ov020_02165ef0
    mov r5, r4
    add r8, r6, #0x2b8
    mov r7, #0xc
    b @L_02165f54
@L_02165f48:
    mla r0, r5, r7, r8
    bl Archive_Deallocate
    add r5, r5, #1
@L_02165f54:
    cmp r5, #2
    blt @L_02165f48
    mov r5, #0
    add r8, r6, #0x108
    mov r7, #0xb0
    b @L_02165f7c
@L_02165f6c:
    mla r1, r5, r7, r8
    mov r0, r6
    bl func_ov020_02166284
    add r5, r5, #1
@L_02165f7c:
    cmp r5, #2
    blt @L_02165f6c
    mov r5, #0
    ldr r7, =g3DPlaneCtrl
    b @L_02165fac
@L_02165f90:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x6c]
    cmp r1, #0
    beq @L_02165fa8
    ldr r0, [r7]
    bl C3DPlaneCtrl_Destroy
@L_02165fa8:
    add r5, r5, #1
@L_02165fac:
    cmp r5, #3
    blt @L_02165f90
    mov r5, #0
    ldr r7, =g3DPlaneCtrl
    b @L_02165fe4
@L_02165fc0:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x24]
    cmp r1, #0
    beq @L_02165fe0
    ldr r0, [r7]
    bl C3DSprFile_Release
    add r0, r6, r5, lsl #2
    str r4, [r0, #0x24]
@L_02165fe0:
    add r5, r5, #1
@L_02165fe4:
    cmp r5, #0x11
    blt @L_02165fc0
    mov r5, #0
    ldr r7, =g3DPlaneCtrl
    b @L_0216601c
@L_02165ff8:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x68]
    cmp r1, #0
    beq @L_02166018
    ldr r0, [r7]
    bl C3DSprFile_Release
    add r0, r6, r5, lsl #2
    str r4, [r0, #0x68]
@L_02166018:
    add r5, r5, #1
@L_0216601c:
    cmp r5, #1
    blt @L_02165ff8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

#pragma push
#pragma optimization_level 2
extern "C" s32 func_ov020_0216602c(s32 arg0)
{
    s32 r1;
    s32 r5;
    s32 v0;
    s32 t0;
    r5 = 0;
    while (r5 < 0x11) {
        r1 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x24);
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

#pragma push
#pragma optimization_level 1
extern "C" s32 func_ov020_0216607c(s32 arg0)
{
    s32 r1;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    s32 t2;
    r6 = 0;
    r7 = arg0;
    while ((r5 = 0, r6 < 0x11)) {
        arg0 = (r7 + (r6 << 2));
        r1 = *(s32 *)(((u8 *)(r7 + (r6 << 2))) + 0x24);
        if (r1 != 0) {
            t0 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
            v0 = C3DSprFile_IsInVram(t0);
            arg0 = v0;
            if (arg0 == 0) {
                t2 = *(s32 *)(((u8 *)(r7 + (r6 << 2))) + 0x24);
                t1 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
                v1 = C3DSprFile_LoadToVram(t1, t2, r5, r5);
                arg0 = v1;
            }
        }
        r6 = (r6 + 1);
    }
    return arg0;
}
#pragma pop

extern "C" asm void func_ov020_021660e0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    bl G2_GetBG3CharPtr
    mov r8, #0x20
    mov r4, #0
    mov r1, r0
    mov r0, r4
    mov r2, r8
    bl MIi_CpuClearFast
    bl G2_GetBG3CharPtr
    mov r1, r8
    bl DC_FlushRange
    ldr r0, =gMainScreen0
    mov r1, r4
    mov r7, #0x800
    mov r2, r7
    bl GX_LoadBG3Scr
    bl G2_GetBG1CharPtr
    mov r1, r0
    mov r0, r4
    mov r2, r8
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r8
    bl DC_FlushRange
    ldr r0, =gMainScreen1
    mov r1, r4
    mov r2, r7
    bl GX_LoadBG1Scr
    bl G2_GetBG2CharPtr
    mov r1, r0
    mov r0, r4
    mov r2, r8
    bl MIi_CpuClearFast
    bl G2_GetBG2CharPtr
    mov r1, r8
    bl DC_FlushRange
    ldr r0, =gMainScreen2
    mov r1, r4
    mov r2, r7
    bl GX_LoadBG2Scr
    ldr r5, [r5, #0x2b8]
    cmp r5, #0
    beq @L_021661e4
    mov r6, #1
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl Graphics_LoadTempPaletteFromPac
    ldr r0, [r5, #0xc]
    ldr r1, [r5, #0x10]
    mov r3, r6
    add r0, r5, r0
    add r2, r4, #1
    bl Graphics_SetupScreen
    ldr r0, [r5, #0x14]
    ldr r2, [r5, #0x18]
    mov r1, r8
    add r0, r5, r0
    bl GX_LoadBG2Char
    ldr r0, [r5, #0xc]
    mov r1, r4
    add r0, r5, r0
    mov r2, r7
    bl GX_LoadBG2Scr
@L_021661e4:
    bl Graphics_LoadBGPaletteMain
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov020_021661f8(s32 arg0, s32 arg1)
{
    s32 r5;
    s32 v0;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 t0;
    t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    v0 = func_ov015_02162140(t0, 3, (u8 *)((u8 *)&gSprButtonCtrl));
    r5 = arg0;
    arg0 = v0;
    switch (arg1) {
        default:
            return arg0;
        case 0:
            func_ov020_02166284(r5, (r5 + 0x1B8));
            func_ov020_021663d0(r5, (r5 + 0x108));
            v3 = func_0209b7b0((u8 *)((u8 *)&data_020d3d20), 0x97, 0);
            return v3;
        case 3:
            v4 = func_ov020_0216664c(r5, (r5 + 0x1B8));
            return v4;
        case 4:
            v5 = func_ov020_02166284(r5, (r5 + 0x1B8));
            return v5;
    }
}

extern "C" asm s32 func_ov020_02166284(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r5, #0
    ldr r4, =g3DPlaneCtrl
    b @L_021662b4
@L_02166298:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x1c]
    cmp r1, #0
    ble @L_021662b0
    ldr r0, [r4]
    bl C3DPlaneCtrl_Destroy
@L_021662b0:
    add r5, r5, #1
@L_021662b4:
    cmp r5, #0x10
    blt @L_02166298
    ldr r1, [r6, #0x5c]
    cmp r1, #0
    ble @L_021662d4
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DSprFile_Release
@L_021662d4:
    mov r0, r6
    mov r1, #0
    mov r2, #0xb0
    bl MI_CpuFill8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov020_021662ec(s32 arg0, s32 arg1)
{
    if (arg1 != 0) {
        return (arg1 == 3 ? 1 : arg0);
    }
    return 0;
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov020_02166308(P02166308 *arg0)
{
    s32 idx = ((s32 (*)(P02166308 *, s32))func_ov020_021662ec)(arg0, *(s32 *)((u8 *)arg0 + 0x14));
    s32 j;
    s32 k;
    E02166308 *e;
    if (idx < 0)
        return;
    e = &arg0->arr[idx];
    for (j = 0; j < 0x10; j++) {
        if (e->v[j] > 0)
            ((void (*)(s32, s32, s32))C3DPlaneCtrl_SetColorMask)(*(s32 *)g3DPlaneCtrl, e->v[j], 0x7FFF);
    }
    for (k = idx - 1; k >= 0; k--) {
        e = &arg0->arr[k];
        for (j = 0; j < 0x10; j++) {
            if (e->v[j] > 0)
                ((void (*)(s32, s32, s32))C3DPlaneCtrl_SetColorMask)(*(s32 *)g3DPlaneCtrl, e->v[j], 0x4210);
        }
    }
}
#pragma pop

extern "C" asm s32 func_ov020_021663d0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r9, r1
    mov r10, r0
    ldr r11, [r9]
    ldr r8, [r9, #0xc]
    bl func_ov020_02166284
    mov r0, r10
    bl func_ov020_02168314
    mov r2, #0x20
    ldr r6, [r10, #0x104]
    mov r3, #0x10
    mov r7, #0
    rsb r0, r2, #0x42
    mov r5, #6
    mov r4, #0x28
    mov r1, #0x70
    str r4, [r9, #0xa0]
    strh r1, [r9, #0xa4]
    str r6, [r9, #4]
    str r5, [r9, #8]
    str r7, [r9, #0x98]
    str r7, [r9, #0x9c]
    strh r3, [r9, #0xac]
    strh r2, [r9, #0xae]
    strh r2, [r9, #0xa6]
    strh r3, [r9, #0xa8]
    strh r0, [r9, #0xaa]
    mov r4, #8
    mov r2, #0x64
    mov r1, r3
    b @L_02166470
@L_02166450:
    add r3, r9, r7, lsl #3
    mov r0, r7, lsl #4
    strh r4, [r3, #0x68]
    add r0, r0, #0x10
    strh r0, [r3, #0x6a]
    strh r2, [r3, #0x6c]
    strh r1, [r3, #0x6e]
    add r7, r7, #1
@L_02166470:
    ldr r0, [r9, #8]
    cmp r7, r0
    blt @L_02166450
    mov r2, #4
    mov r0, r10
    mov r1, r9
    mov r3, r2
    bl func_ov020_021671dc
    mov r7, #0
    add r6, sp, #4
    str r7, [sp, #4]
    mov r2, #2
    str r2, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r7
    bl func_ov020_02166a20
    ldr r2, [r9, #0xa0]
    mov r5, r0
    ldr r4, =g3DPlaneCtrl
    mov r2, r2, lsl #0x10
    ldr r0, [r4]
    mov r1, r5
    mov r2, r2, lsr #0x10
    bl C3DPlaneCtrl_SetDepthAll
    ldr r0, [r4]
    mov r1, r5
    mov r2, #8
    mov r3, r7
    bl C3DPlaneCtrl_SetPos_2
    ldr r3, [r10, #0x58]
    ldr r0, [r4]
    mov r1, r5
    mov r2, #1
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    str r7, [sp]
    ldr r0, [r4]
    mov r2, #1
    mov r1, r5
    mov r3, r7
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r3, [r10, #0x68]
    ldr r0, [r4]
    mov r1, r5
    mov r2, #2
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    mov r0, #4
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, #2
    mov r3, #8
    bl C3DPlaneCtrl_SetPos
    str r7, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, #2
    mov r3, r7
    bl C3DPlaneCtrl_SetTexST
    mov r0, #8
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, #2
    mov r3, #0x40
    bl C3DPlaneCtrl_SetTexWH
    mov r4, #0xa
    b @L_021665a8
@L_0216658c:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r7
    str r4, [sp]
    bl func_ov020_02166aa4
    add r7, r7, #1
@L_021665a8:
    ldr r0, [r9, #8]
    cmp r7, r0
    blt @L_0216658c
    add r5, sp, #4
    mov r6, #1
    mov r0, r10
    mov r1, r9
    mov r2, r5
    mov r3, #3
    str r6, [sp]
    bl func_ov020_02166d20
    mov r4, #0xa
    mov r0, r10
    mov r1, r9
    mov r2, r5
    mov r3, r4
    bl func_ov020_02166e58
    mov r3, r6
    str r4, [sp]
    mov r0, r10
    mov r1, r9
    mov r2, r5
    bl func_ov020_02166f7c
    str r4, [sp]
    mov r4, #0
    mov r2, r5
    mov r0, r10
    mov r1, r9
    mov r3, r4
    bl func_ov020_02166f7c
    mov r1, r11
    mov r0, r9
    str r8, [r9, #0xc]
    bl func_ov015_02135f24
    mov r0, r10
    mov r1, r9
    mov r2, r4
    bl func_ov020_021669e8
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov020_0216664c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r9, r1
    mov r10, r0
    ldr r8, [r9]
    bl func_ov020_02166284
    mov r11, #0
    mov r4, #1
    mov r0, #0x14
    str r0, [r9, #0xa0]
    str r4, [r9, #4]
    str r4, [r9, #8]
    str r11, [r9, #0x98]
    str r11, [r9, #0x9c]
    str r11, [sp, #4]
    add r2, sp, #4
    mov r0, r10
    mov r1, r9
    mov r3, r11
    str r4, [sp]
    bl func_ov020_02166a20
    movs r6, r0
    beq @L_02166700
    ldr r0, [r9, #0xa0]
    ldr r5, =g3DPlaneCtrl
    mov r2, r0, lsl #0x10
    ldr r0, [r5]
    mov r1, r6
    mov r2, r2, lsr #0x10
    bl C3DPlaneCtrl_SetDepthAll
    ldr r0, [r5]
    mov r1, r6
    mov r2, #0x20
    mov r3, #0x40
    bl C3DPlaneCtrl_SetPos_2
    ldr r0, [r5]
    mov r1, r6
    ldr r2, [r10, #0x64]
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    ldr r0, [r5]
    mov r1, r6
    mov r2, r11
    mov r3, r11
    bl C3DPlaneCtrl_SetGraphicIdxAll
@L_02166700:
    add r2, sp, #4
    mov r0, r10
    mov r1, r9
    mov r3, r11
    str r4, [sp]
    bl func_ov020_02166a20
    movs r6, r0
    beq @L_021667a4
    ldr r0, [r9, #0xa0]
    ldr r5, =g3DPlaneCtrl
    sub r0, r0, #1
    mov r2, r0, lsl #0x10
    ldr r0, [r5]
    mov r1, r6
    mov r2, r2, lsr #0x10
    bl C3DPlaneCtrl_SetDepthAll
    ldr r2, [r10, #0x30]
    ldr r0, [r5]
    mov r1, r6
    and r3, r2, #0xff
    mov r2, r4
    bl C3DPlaneCtrl_SetTex
    mov r0, #0x40
    str r0, [sp]
    ldr r0, [r5]
    mov r1, r6
    mov r2, r4
    mov r3, #0x38
    bl C3DPlaneCtrl_SetPos
    str r11, [sp]
    ldr r0, [r5]
    mov r1, r6
    mov r2, r4
    mov r3, r11
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r0, [r5]
    mov r3, r4
    mov r1, r6
    mov r2, #2
    bl C3DPlaneCtrl_SetFlag_2
    str r6, [r10, #0x7c]
@L_021667a4:
    mov r7, #1
    add r2, sp, #4
    mov r0, r10
    mov r1, r9
    mov r3, r11
    str r7, [sp]
    bl func_ov020_02166a20
    movs r6, r0
    beq @L_02166850
    ldr r0, [r9, #0xa0]
    ldr r4, =g3DPlaneCtrl
    sub r0, r0, #1
    mov r2, r0, lsl #0x10
    ldr r0, [r4]
    mov r1, r6
    mov r2, r2, lsr #0x10
    bl C3DPlaneCtrl_SetDepthAll
    ldr r2, [r10, #0x30]
    ldr r0, [r4]
    mov r1, r6
    and r3, r2, #0xff
    mov r2, r7
    bl C3DPlaneCtrl_SetTex
    mov r0, #0x40
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r7
    mov r3, #0x98
    bl C3DPlaneCtrl_SetPos
    str r11, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r7
    mov r5, #2
    mov r3, r5
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r0, [r4]
    mov r2, r5
    mov r3, r7
    mov r1, r6
    bl C3DPlaneCtrl_SetFlag_2
    str r6, [r10, #0x80]
@L_02166850:
    mov r5, #1
    mov r0, r10
    mov r1, r5
    mov r2, r11
    bl func_ov020_02167a8c
    ldr r0, [r9, #8]
    mov r1, #0xc0
    sub r0, r0, #1
    add r0, r9, r0, lsl #3
    strh r11, [r0, #0x68]
    ldr r0, [r9, #8]
    add r2, sp, #4
    sub r0, r0, #1
    add r0, r9, r0, lsl #3
    strh r1, [r0, #0x6a]
    ldr r1, [r9, #8]
    mov r0, r10
    sub r1, r1, #1
    add r1, r9, r1, lsl #3
    strh r11, [r1, #0x6c]
    ldr r3, [r9, #8]
    mov r1, r9
    sub r3, r3, #1
    add r4, r9, r3, lsl #3
    strh r11, [r4, #0x6e]
    mov r4, #0xa
    mov r3, r11
    str r4, [sp]
    bl func_ov020_02166aa4
    str r4, [sp]
    ldr r0, =gSprButtonCtrl
    mov r4, #3
    ldr r0, [r0]
    ldr r3, [r10, #0x80]
    mov r1, r4
    mov r2, #0xc
    bl func_ov015_02162fb4
    movs r6, r0
    beq @L_0216693c
    mov r1, r11
    mov r2, r5
    mov r3, r11
    add r0, r6, #0x3a
    bl func_ov015_02161d00
    mov r1, r11
    mov r3, r11
    add r0, r6, #0x3a
    mov r2, #2
    bl func_ov015_02161d24
    mov r2, r5
    add r0, r6, #0x3e
    mov r1, r11
    mov r3, r11
    bl func_ov015_02161d00
    add r0, r6, #0x3e
    mov r2, r4
    mov r1, r11
    mov r3, r11
    bl func_ov015_02161d24
@L_0216693c:
    mov r0, #0xa
    str r0, [sp]
    ldr r0, =gSprButtonCtrl
    ldr r3, [r10, #0x7c]
    ldr r0, [r0]
    mov r1, #3
    mov r2, #0xb
    mov r4, #1
    mov r5, #0
    bl func_ov015_02162fb4
    movs r6, r0
    beq @L_021669bc
    mov r1, r5
    mov r2, r4
    mov r3, r5
    add r0, r6, #0x3a
    bl func_ov015_02161d00
    mov r1, r5
    mov r2, r5
    mov r3, r5
    add r0, r6, #0x3a
    bl func_ov015_02161d24
    add r0, r6, #0x3e
    mov r1, r5
    mov r2, r4
    mov r3, r5
    bl func_ov015_02161d00
    add r0, r6, #0x3e
    mov r2, r4
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d24
@L_021669bc:
    mov r0, r9
    mov r1, r8
    bl func_ov015_02135f24
    mov r0, r10
    mov r1, r9
    mov r2, #0
    bl func_ov020_021669e8
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov020_021669e8(s32 arg0, s32 arg1, s32 arg2)
{
    func_ov020_021673a0(arg0, arg1, arg2);
    func_ov020_02167860(arg0, arg1, arg2);
    func_ov020_02167a34(arg0, arg1, arg2);
}

extern "C" s32 func_ov020_02166a20(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4)
{
    s32 v0;
    s32 t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    if (*(s32 *)(arg2) >= 0x10)
        return 0;
    if ((u32)arg3 >= (u32)4)
        return 0;
    t0 = *(s32 *)(g3DPlaneCtrl);
    v0 = C3DPlaneCtrl_Create(t0, arg4, 1, arg3);
    if (*(u8 *)(((u8 *)(arg1 + (arg3 << 1))) + 0x61) == 0)
        *(u8 *)(((u8 *)(arg1 + (arg3 << 1))) + 0x60) = *(s32 *)(arg2);
    t1 = (u8 *)(arg1 + (*(s32 *)(arg2) << 2));
    *(s32 *)(t1 + 0x1C) = v0;
    t2 = (*(u8 *)(((u8 *)(arg1 + 0x61)) + (arg3 << 1)) + 1);
    *(u8 *)(((u8 *)(arg1 + 0x61)) + (arg3 << 1)) = t2;
    t3 = (*(s32 *)(arg2) + 1);
    *(s32 *)(arg2) = t3;
    return v0;
}

extern "C" asm void func_ov020_02166aa4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r7, #4
    mov r11, #1
    mov r8, r3
    mov r9, r1
    mov r3, r11
    str r7, [sp]
    mov r10, r0
    bl func_ov020_02166a20
    ldr r1, [r9, #0xa0]
    mov r6, r0
    sub r0, r1, #4
    mov r1, r0, lsl #0x10
    ldr r4, =g3DPlaneCtrl
    mov r2, r1, lsr #0x10
    ldr r0, [r4]
    mov r1, r6
    mov r3, r11
    bl C3DPlaneCtrl_SetDepthStepAll
    add r3, r9, r8, lsl #3
    ldrsh r2, [r3, #0x68]
    ldrsh r3, [r3, #0x6a]
    ldr r0, [r4]
    mov r1, r6
    bl C3DPlaneCtrl_SetPos_2
    ldr r3, [r10, #0x3c]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r11
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    mov r5, #0
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r11
    mov r3, #8
    bl C3DPlaneCtrl_SetPos
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r11
    mov r3, #3
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r0, [r4]
    mov r1, r6
    mov r2, r11
    mov r3, #2
    bl C3DPlaneCtrl_ClearFlag
    ldr r3, [r9, #0x5c]
    ldr r0, [r4]
    mov r1, r6
    mov r2, #2
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    mov r0, #0xd
    mul r0, r8, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, #2
    mov r3, r5
    bl C3DPlaneCtrl_SetTexST
    mov r0, #0xc
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, #2
    mov r3, #0x80
    bl C3DPlaneCtrl_SetTexWH
    mov r0, #3
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, #2
    mov r3, #8
    bl C3DPlaneCtrl_SetPos
    ldr r0, [r4]
    rsb r2, r11, #0x8000
    mov r1, r6
    bl func_02092808
    ldr r3, [r10, #0x5c]
    ldr r0, [r4]
    mov r1, r6
    mov r2, #3
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, #3
    mov r3, r5
    bl C3DPlaneCtrl_SetPos
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, #3
    mov r3, #2
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r0, [r4]
    mov r1, r6
    mov r2, #3
    mov r3, #2
    bl C3DPlaneCtrl_ClearFlag
    ldr r1, [r10, #0x60]
    ldr r0, [r4]
    and r3, r1, #0xff
    mov r1, r6
    mov r2, r7
    bl C3DPlaneCtrl_SetTex
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r7
    mov r3, r5
    bl C3DPlaneCtrl_SetPos
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r7
    mov r3, r5
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r0, [r4]
    mov r2, r7
    mov r3, #2
    mov r1, r6
    bl C3DPlaneCtrl_ClearFlag
    add r3, r9, r8, lsl #3
    ldrsh r7, [r3, #0x6a]
    add r0, r8, #1
    mov r0, r0, lsl #0x10
    str r7, [sp]
    ldrsh r7, [r3, #0x6c]
    mov r2, r0, lsr #0x10
    ldr r4, [sp, #0x38]
    str r7, [sp, #4]
    ldrsh r7, [r3, #0x6e]
    ldr r0, =gSprButtonCtrl
    mov r1, #3
    str r7, [sp, #8]
    str r4, [sp, #0xc]
    ldrsh r3, [r3, #0x68]
    ldr r0, [r0]
    bl func_ov015_02162f70
    strh r6, [r0, #0x34]
    strb r5, [r0, #0x38]
    str r5, [r0, #0x1c]
    str r5, [r0, #0x20]
    ldr r1, =func_ov015_02162f2c
    str r5, [r0, #0x24]
    str r1, [r0, #0x28]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov020_02166d20(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldrb r4, [sp, #0x20]
    mov r6, r3
    mov r9, r0
    mov r8, r1
    cmp r4, #0
    mov r3, #3
    beq @L_02166d48
    mov r4, #2
    b @L_02166d4c
@L_02166d48:
    mov r4, #1
@L_02166d4c:
    str r4, [sp]
    bl func_ov020_02166a20
    mov r7, r0
    ldr r0, [r8, #0xa0]
    ldr r4, =g3DPlaneCtrl
    sub r0, r0, #8
    mov r2, r0, lsl #0x10
    ldr r0, [r4]
    mov r1, r7
    mov r2, r2, lsr #0x10
    mvn r3, #0
    bl C3DPlaneCtrl_SetDepthStepAll
    ldr r3, [r9, #0x34]
    mov r5, #1
    ldr r0, [r4]
    mov r1, r7
    mov r2, r5
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    mov r3, r6
    mov r6, #0
    str r6, [sp]
    ldr r0, [r4]
    mov r1, r7
    mov r2, r5
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r0, [r8, #0x9c]
    mov r2, r5
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r3, [r8, #0x98]
    ldr r0, [r4]
    mov r3, r3, lsl #0x10
    mov r1, r7
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    ldrb r0, [sp, #0x20]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r3, [r9, #0x38]
    mov r5, #2
    ldr r0, [r4]
    mov r1, r7
    mov r2, r5
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    str r6, [sp]
    ldr r0, [r4]
    mov r1, r7
    mov r2, r5
    mov r3, r6
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r0, [r8, #0x9c]
    mov r1, r7
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r2, [r8, #0x98]
    ldr r0, [r4]
    sub r2, r2, #8
    mov r3, r2, lsl #0x10
    mov r2, r5
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_ov020_02166e58(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    s32 v5;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    if (*(s32 *)(arg1 + 0x4) <= *(s32 *)(arg1 + 0x8))
        return;
    v0 = ((s32 (*)(...))func_ov020_02166a20)(arg0, (s32)arg1, arg2, 2, 1);
    t2 = *(s32 *)(g3DPlaneCtrl);
    t3 = (*(s32 *)(arg0 + 0x2C) & 0xFF);
    C3DPlaneCtrl_SetTexAll(t2, v0, t3);
    t4 = *(s32 *)(g3DPlaneCtrl);
    C3DPlaneCtrl_SetGraphicIdxAll(t4, v0, 4, 0);
    t5 = *(s32 *)(g3DPlaneCtrl);
    t6 = ((u16)(*(s32 *)(arg1 + 0xA0) - 4));
    C3DPlaneCtrl_SetDepthAll(t5, v0, t6);
    t7 = *(s32 *)(g3DPlaneCtrl);
    C3DPlaneCtrl_SetPos_2(t7, v0, 0x70, 0x20);
    t8 = *(s32 *)(gSprButtonCtrl);
    v5 = func_ov015_02162fb4(t8, 3, 10, v0, arg3);
    func_ov015_02161d00((v5 + 0x3A), 0, 1, 0);
    func_ov015_02161d24((v5 + 0x3A), 0, 4, 0);
    func_ov015_02161d00((v5 + 0x3E), 0, 1, 0);
    func_ov015_02161d24((v5 + 0x3E), 0, 5, 0);
    *(u8 *)(((u8 *)v5) + 0x12) = 1;
    return;
}

extern "C" void func_ov020_02166f7c(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 r1;
    s32 r2;
    s32 r4;
    s32 r5;
    s32 r7;
    s32 v0;
    s32 v5;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    r4 = 2;
    v0 = ((s32 (*)(...))func_ov020_02166a20)((s32)arg0, (s32)arg1, arg2, 2, 1);
    t0 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    t1 = (*(s32 *)(arg0 + 0x2C) & 0xFF);
    C3DPlaneCtrl_SetTexAll(t0, v0, t1);
    r5 = v0;
    if (arg3 != 0) {
        r4 = 0;
    }
    t2 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    C3DPlaneCtrl_SetGraphicIdxAll(t2, r5, r4, 0);
    t3 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    t4 = ((u16)(*(s32 *)(arg1 + 0xA0) - 4));
    C3DPlaneCtrl_SetDepthAll(t3, r5, t4);
    r1 = 0x10;
    if (arg3 == 0) {
        r1 = 0x62;
    }
    t5 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    C3DPlaneCtrl_SetPos_2(t5, r5, 0x70, ((s16)r1));
    if (*(s32 *)(arg1 + 0x4) <= *(s32 *)(arg1 + 0x8))
        return;
    r2 = 8;
    if (arg3 == 0) {
        r2 = 9;
    }
    t6 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    r4 = 3;
    v5 = func_ov015_02162fb4(t6, 3, ((u16)r2), r5, arg4);
    r7 = v5;
    if (arg3 != 0) {
        func_ov015_02161d00((r7 + 0x3A), 0, 1, 0);
        func_ov015_02161d24((r7 + 0x3A), 0, 0, 0);
        func_ov015_02161d00((r7 + 0x3E), 0, 1, 0);
        func_ov015_02161d24((r7 + 0x3E), 0, 1, 0);
        return;
    } else {
        func_ov015_02161d00((r7 + 0x3A), 0, 1, 0);
        func_ov015_02161d24((r7 + 0x3A), 0, 2, 0);
        func_ov015_02161d00((r7 + 0x3E), 0, 1, 0);
        func_ov015_02161d24((r7 + 0x3E), 0, r4, 0);
        return;
    }
}

extern "C" void func_ov020_02167140(s32 arg0, u8 *arg1)
{
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    if (*(s32 *)(arg1 + 0x10) < 0)
        return;
    if (*(s32 *)(arg1 + 0x10) >= *(s32 *)(arg1 + 0x8))
        return;
    if (*(s32 *)(arg1) >= *(s32 *)(arg1 + 0x4))
        return;
    t0 = *(s32 *)(gSprButtonCtrl);
    t1 = ((u32)((*(s32 *)(arg1 + 0x10) + 1) << 0x10) >> 0x10);
    t2 = *(s32 *)(arg1);
    t3 = *(s32 *)(arg1 + 0x10);
    func_ov015_021624f0(t0, t1, t2, t3);
    return;
}

extern "C" void func_ov020_02167188(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x10) = 6;
    *(s32 *)(arg0 + 0x8) = arg1;
}

extern "C" void func_ov020_02167198(u8 *arg0, s32 arg1)
{
    switch (arg1) {
    case 0:
        ((void (*)(s32, s32))func_ov015_02162420)(*(s32 *)gSprButtonCtrl, 10);
        break;
    case 3:
        ((void (*)(s32, s32))func_ov015_02162420)(*(s32 *)gSprButtonCtrl, 10);
        break;
    }
    *(s32 *)(arg0 + 0x14) = arg1;
    *(s32 *)(arg0 + 0x10) = 4;
}

extern "C" asm void func_ov020_021671dc(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    mov r5, #0
    mov r6, r1
    str r5, [sp, #0x10]
    ldr r0, [r6, #0x5c]
    cmp r0, #0
    addne sp, sp, #0x14
    ldmneia sp!, {r3, r4, r5, r6, pc}
    ldr r4, =g3DPlaneCtrl
    mov r1, r2
    ldr r0, [r4]
    mov r2, r3
    bl C3DSprFile_CreateTex16
    mov r1, r0
    str r1, [r6, #0x5c]
    ldr r0, [r4]
    mov r2, r5
    mov r3, r5
    bl C3DSprFile_LoadToVram
    ldr r1, [r6, #0x5c]
    ldr r0, [r4]
    str r5, [sp, #0xc]
    add r2, sp, #0xc
    add r3, sp, #0x10
    bl C3DSprFile_AllocTexBuffer
    ldr r1, [r6, #0x5c]
    ldr r0, [r4]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #0x10]
    str r5, [sp]
    str r5, [sp, #4]
    str r5, [sp, #8]
    bl C3DSprFile_UploadTex
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" s32 func_ov020_02167270(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 local[2];
    u8 *r4;
    if (*(u8 *)(arg0 + 0x2B5) != 0)
        return (s32)arg0;
    s32 v0 = func_ov020_0216841c((s32)arg0, *(u16 *)(arg0 + 0x94), arg2, arg3);
    s32 v1 = func_0209d8b8(0x162);
    s32 v2 = STD_CompareString(v0, v1);
    r4 = arg0;
    if (v2 != 0) {
        *(u16 *)(((u8 *)local) + 0x4) = *(u16 *)(r4 + 0x84);
        *(u16 *)(((u8 *)local) + 0x6) = *(u16 *)(r4 + 0x86);
        arg2 = 0;
        do {
            *(u16 *)(((u8 *)(r4 + (arg2 << 2))) + 0x84) = *(u16 *)(((u8 *)(r4 + (arg2 << 2))) + 0x88);
            *(u8 *)(((u8 *)(r4 + (arg2 << 2))) + 0x86) = *(u8 *)(((u8 *)(r4 + (arg2 << 2))) + 0x8A);
            *(u8 *)(((u8 *)(r4 + (arg2 << 2))) + 0x87) = *(u8 *)(((u8 *)(r4 + (arg2 << 2))) + 0x8B);
            arg2 = (arg2 + 1);
        } while (arg2 < 4);
        *(u16 *)(r4 + 0x94) = *(u16 *)(((u8 *)local) + 0x4);
        *(u8 *)(r4 + 0x96) = *(u8 *)(((u8 *)local) + 0x6);
        *(u8 *)(r4 + 0x97) = *(u8 *)(((u8 *)local) + 0x7);
        arg2 = *(u16 *)(((u8 *)local) + 0x4);
    }
    s32 v3 = func_ov020_0216841c((s32)r4, *(u16 *)(r4 + 0xB4));
    s32 v4 = func_0209d8b8(0x163);
    s32 v5 = STD_CompareString(v3, v4);
    if (v5 != 0) {
        *(u16 *)(((u8 *)local)) = *(u16 *)(r4 + 0xA4);
        *(u16 *)(((u8 *)local) + 0x2) = *(u16 *)(r4 + 0xA6);
        arg2 = 8;
        do {
            *(u16 *)(((u8 *)(r4 + (arg2 << 2))) + 0x84) = *(u16 *)(((u8 *)(r4 + (arg2 << 2))) + 0x88);
            *(u8 *)(((u8 *)(r4 + (arg2 << 2))) + 0x86) = *(u8 *)(((u8 *)(r4 + (arg2 << 2))) + 0x8A);
            *(u8 *)(((u8 *)(r4 + (arg2 << 2))) + 0x87) = *(u8 *)(((u8 *)(r4 + (arg2 << 2))) + 0x8B);
            arg2 = (arg2 + 1);
        } while (arg2 < 0xC);
        *(u16 *)(r4 + 0xB4) = *(u16 *)(((u8 *)local));
        *(u8 *)(r4 + 0xB6) = *(u8 *)(((u8 *)local) + 0x2);
        *(u8 *)(r4 + 0xB7) = *(u8 *)(((u8 *)local) + 0x3);
    }
    *(u8 *)(r4 + 0x2B5) = 1;
    return 1;
}

extern "C" asm s32 func_ov020_021673a0(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    add r3, sp, #4
    mov r2, #0
    mov r10, r0
    str r2, [r3]
    str r2, [r3, #4]
    str r2, [r3, #8]
    str r2, [r3, #0xc]
    str r2, [r3, #0x10]
    str r2, [r3, #0x14]
    ldr r2, [r10, #0x14]
    mov r9, r1
    cmp r2, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r2, #4
    mov r3, #5
    bl func_ov020_021671dc
    mov r0, r10
    bl func_ov020_02167270
    ldr r2, [r9, #0xc]
    ldmib r9, {r0, r6}
    add r1, r2, r6
    cmp r1, r0
    subgt r6, r0, r2
    ldr r0, =data_ov020_021687b4
    add r3, r10, #0x84
    add r7, r3, r2, lsl #2
    mov r8, #0
    add r4, sp, #4
    ldr r11, [r0]
    ldr r5, [r0, #4]
    b @L_02167474
@L_02167428:
    ldrh r0, [r7]
    cmp r0, #0
    bne @L_0216743c
    mov r0, r5
    b @L_02167464
@L_0216743c:
    mov r1, r0, lsl #0x10
    mov r0, r10
    mov r1, r1, lsr #0x10
    bl func_ov020_0216841c
    ldrb r1, [r7, #3]
    cmp r1, #0
    cmpne r0, #0
    strne r0, [r4, r8, lsl #2]
    bne @L_0216746c
    mov r0, r11
@L_02167464:
    bl func_0209d8b8
    str r0, [r4, r8, lsl #2]
@L_0216746c:
    add r8, r8, #1
    add r7, r7, #4
@L_02167474:
    cmp r8, r6
    blt @L_02167428
    mov r8, #0
    add r11, r10, #0x84
    mov r5, #2
    ldr r4, =g3DPlaneCtrl
    b @L_02167534
@L_02167490:
    ldrb r2, [r9, #0x62]
    ldr r1, [r9, #0xc]
    ldr r0, [r9, #4]
    add r2, r2, r8
    add r2, r9, r2, lsl #2
    ldr r7, [r2, #0x1c]
    add r6, r1, r8
    sub r0, r0, #1
    cmp r6, r0
    ldr r0, [r4]
    mov r1, r7
    bge @L_02167508
    mov r2, #3
    mov r3, r5
    bl C3DPlaneCtrl_ClearFlag
    add r0, r11, r6, lsl #2
    ldrb r0, [r0, #2]
    mov r1, r7
    mov r2, #4
    cmp r0, #0
    beq @L_021674f4
    ldr r0, [r4]
    mov r3, r5
    bl C3DPlaneCtrl_ClearFlag
    b @L_02167530
@L_021674f4:
    mov r0, #1
    str r0, [sp]
    ldr r0, [r4]
    mov r3, r5
    b @L_0216752c
@L_02167508:
    mov r2, #4
    mov r3, #2
    bl C3DPlaneCtrl_ClearFlag
    mov r0, #1
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r7
    mov r2, #3
    mov r3, #2
@L_0216752c:
    bl C3DPlaneCtrl_SetFlag
@L_02167530:
    add r8, r8, #1
@L_02167534:
    ldr r0, [r9, #8]
    cmp r8, r0
    blt @L_02167490
    ldr r1, [r9, #0x5c]
    add r2, sp, #4
    mov r0, r10
    mov r3, #6
    bl func_ov020_02167564
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov020_02167564(void)
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
    mov r5, #2
    mov r4, #1
    mov r11, r7
    b @L_02167608
@L_021675b8:
    ldr r0, [r10, r7, lsl #2]
    cmp r0, #0
    beq @L_02167604
    mov r0, #0xd
    mul r0, r7, r0
    str r8, [sp]
    str r5, [sp, #4]
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    str r11, [sp, #0x10]
    str r11, [sp, #0x14]
    str r4, [sp, #0x18]
    str r11, [sp, #0x1c]
    ldr r0, =gFont12Manager
    ldr r1, [r10, r7, lsl #2]
    ldr r0, [r0]
    mov r2, r6
    mov r3, #0x80
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
@L_02167604:
    add r7, r7, #1
@L_02167608:
    cmp r7, r9
    blt @L_021675b8
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

extern "C" asm s32 func_ov020_02167654(...)
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
    mov r5, r7
    mov r4, #1
    ldr r11, =gFont8
    b @L_021676f0
@L_021676a8:
    ldr r0, [r10, r7, lsl #2]
    cmp r0, #0
    beq @L_021676ec
    str r8, [sp]
    str r5, [sp, #4]
    add r0, r7, r7, lsl #3
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    str r5, [sp, #0x10]
    str r5, [sp, #0x14]
    str r4, [sp, #0x18]
    str r5, [sp, #0x1c]
    ldr r0, [r11]
    ldr r1, [r10, r7, lsl #2]
    mov r2, r6
    mov r3, #0x40
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
@L_021676ec:
    add r7, r7, #1
@L_021676f0:
    cmp r7, r9
    blt @L_021676a8
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

extern "C" s32 func_ov020_0216773c(s32 arg0)
{
    s32 local[1];
    s32 r5;
    u8 *r6;
    s32 v0;
    s32 v2;
    s32 v3;
    s32 t0;
    s32 t1;
    s32 t2;
    *(s32 *)(((u8 *)local)) = 0;
    r5 = 0;
    r6 = (u8 *)arg0;
    if (*(s32 *)(r6 + 0x68) == 0) {
        t0 = *(s32 *)(g3DPlaneCtrl);
        v0 = C3DSprFile_CreateTex16(t0, 3, r5);
        *(s32 *)(r6 + 0x68) = v0;
        t1 = *(s32 *)(g3DPlaneCtrl);
        C3DSprFile_LoadToVram(t1, v0, r5, r5);
    }
    t2 = *(s32 *)(r6 + 0x68);
    v2 = func_0209d8b8(0x2E);
    *(s32 *)(((u8 *)local)) = v2;
    v3 = func_ov020_02167654((s32)r6, t2, (s32)((u8 *)local), 1);
    return v3;
}

extern "C" void func_ov020_021677b8(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 n;
    if (arg1[0x67] == 0)
        return;
    n = *(s32 *)(arg1 + 0x18);
    if (n < 0 || n > *(s32 *)(arg1 + 0x8))
        arg4 = 0;
    ((void (*)(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32))func_ov015_021618a0)(*(s32 *)gSprAnimCtrl, 0, 0, ((s32 *)(arg1 + 0x1c))[arg1[0x66]], 0, 0, arg2, arg3, arg4, 0, 0);
    ((void (*)(s32, s32, s32, s32))C3DPlaneCtrl_SetFlag_2)(*(s32 *)g3DPlaneCtrl, ((s32 *)(arg1 + 0x1c))[arg1[0x66]], 2, 1);
}

extern "C" asm s32 func_ov020_02167860(...)
{
    stmdb sp!, {r3, lr}
    ldr r12, [r1, #0x10]
    cmp r12, #0
    blt @L_0216787c
    ldr r3, [r1, #8]
    cmp r12, r3
    blt @L_021678a8
@L_0216787c:
    ldrb r0, [r1, #0x67]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    ldrb r3, [r1, #0x66]
    ldr r0, =g3DPlaneCtrl
    mov r2, #2
    add r1, r1, r3, lsl #2
    ldr r0, [r0]
    ldr r1, [r1, #0x1c]
    bl C3DPlaneCtrl_ClearFlag_2
    ldmia sp!, {r3, pc}
@L_021678a8:
    str r2, [sp]
    ldr r2, [r1, #0x10]
    add r3, r1, r2, lsl #3
    ldrsh r2, [r3, #0x68]
    ldrsh r3, [r3, #0x6a]
    bl func_ov020_021677b8
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_ov020_021678c8(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 v2;
    s32 v7;
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
    s32 t12;
    s32 t13;
    s32 t14;
    if (*(u8 *)(arg1 + 0x65) == 0)
        return *(u8 *)(arg1 + 0x65);
    if (*(s32 *)(arg1 + 0x4) <= *(s32 *)(arg1 + 0x8)) {
        t0 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t1 = *(s32 *)(((u8 *)(arg1 + (*(u8 *)(arg1 + 0x64) << 2))) + 0x1C);
        C3DPlaneCtrl_SetFlag_2(t0, t1, 2, 1);
        t2 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t3 = *(s32 *)(((u8 *)(arg1 + ((*(u8 *)(arg1 + 0x64) + 1) << 2))) + 0x1C);
        C3DPlaneCtrl_SetFlag_2(t2, t3, 2, 1);
        t4 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t5 = *(s32 *)(((u8 *)(arg1 + ((*(u8 *)(arg1 + 0x64) + 2) << 2))) + 0x1C);
        v2 = C3DPlaneCtrl_SetFlag_2(t4, t5, 2, 1);
        return v2;
    } else {
        t6 = *(s32 *)(((u8 *)&gSprAnimCtrl));
        t7 = *(s32 *)(((u8 *)(arg1 + (*(u8 *)(arg1 + 0x64) << 2))) + 0x1C);
        func_ov015_021618a0(t6, 0, 0, t7, 0, 0, arg2, arg3, arg4, 0, 0);
        t8 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t9 = *(s32 *)(((u8 *)(arg1 + (*(u8 *)(arg1 + 0x64) << 2))) + 0x1C);
        C3DPlaneCtrl_SetFlag_2(t8, t9, 2, 1);
        t10 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t11 = *(s32 *)(((u8 *)(arg1 + ((*(u8 *)(arg1 + 0x64) + 1) << 2))) + 0x1C);
        C3DPlaneCtrl_SetFlag_2(t10, t11, 2, 1);
        t12 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t13 = *(s32 *)(((u8 *)(arg1 + ((*(u8 *)(arg1 + 0x64) + 2) << 2))) + 0x1C);
        C3DPlaneCtrl_SetFlag_2(t12, t13, 2, 1);
        t14 = *(s32 *)(((u8 *)&gSprButtonCtrl));
        v7 = func_ov015_021630d8(t14, 10, arg2, arg3);
        return v7;
    }
}

extern "C" asm s32 func_ov020_02167a34(...)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r4, r1
    ldrsh r3, [r4, #0xaa]
    ldr r1, [r4, #0xc]
    mov r5, r0
    mul r0, r3, r1
    ldr r3, [r4, #4]
    ldr r1, [r4, #8]
    mov r6, r2
    sub r1, r3, r1
    bl _s32_div_f
    str r6, [sp]
    mov r12, r0
    ldrsh r3, [r4, #0xa6]
    ldrsh r2, [r4, #0xa4]
    mov r0, r5
    mov r1, r4
    add r3, r3, r12
    bl func_ov020_021678c8
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" void func_ov020_02167a8c(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 t0 = *(s32 *)(g3DPlaneCtrl);
    s32 t1 = *(s32 *)(arg0 + 0x7C);
    C3DPlaneCtrl_SetFlag_2(t0, t1, 2, arg1);
    s32 t2 = *(s32 *)(g3DPlaneCtrl);
    s32 t3 = *(s32 *)(arg0 + 0x80);
    C3DPlaneCtrl_SetFlag_2(t2, t3, 2, arg2);
    *(s32 *)(arg0 + 0x268) = (arg2 == 0 ? 0 : 1);
}

extern "C" void func_ov020_02167ae0(u8 *arg0, s32 arg1)
{
    s32 r5;
    s32 t0;
    s32 t1;
    if (arg1 <= 0)
        return;
    t0 = *(s32 *)(gSprButtonCtrl);
    func_ov015_02161dd4(t0, ((u16)arg1));
    if ((arg1 >= 1 && arg1 <= 7)) {
        if (*(s32 *)(arg0 + 0x14) != 0)
            return;
        t1 = ((arg1 - 1) + *(s32 *)(arg0 + 0x114));
        func_ov015_02135f24((s32)(arg0 + 0x108), t1, (arg1 - 1));
        func_ov020_021669e8((s32)arg0, (s32)(arg0 + 0x108), 8);
        return;
    } else {
        r5 = arg1;
        if (r5 == 0xB) {
            func_ov020_021669e8((s32)arg0, (s32)(arg0 + 0x1B8), 0);
            func_ov020_02167a8c(arg0, 1, 0);
            return;
        } else {
            if (arg1 != 0xC)
                return;
            func_ov020_021669e8((s32)arg0, (s32)(arg0 + 0x1B8), 0);
            func_ov020_02167a8c(arg0, 0, 1);
            return;
        }
    }
}

extern "C" asm void func_ov020_02167bb0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r1
    mov r6, r0
    cmp r4, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r8, =gSprButtonCtrl
    mov r1, r4, lsl #0x10
    ldr r0, [r8]
    mov r1, r1, lsr #0x10
    bl func_ov015_02161dd4
    ldr r1, [r6, #0x14]
    mov r0, r6
    bl func_ov020_021662ec
    movs r5, r0
    ldmmiia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r4, #1
    blt @L_02167c68
    cmp r4, #7
    bgt @L_02167c68
    mov r7, #0xb0
    mla r0, r5, r7, r6
    ldr r1, [r0, #0x108]
    ldr r0, [r0, #0x114]
    sub r4, r4, #1
    sub r0, r1, r0
    cmp r4, r0
    ldreq r0, [r8]
    mov r1, #1
    addeq r0, r0, #0xf00
    streqh r1, [r0, #0x38]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gAudioPlayer
    bl _ZN12SoundManager9PlaySoundEi
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
    bl func_ov020_021669e8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167c68:
    cmp r4, #0xb
    bne @L_02167c88
    ldr r0, =gSprButtonCtrl
    mov r1, #1
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167c88:
    cmp r4, #0xc
    bne @L_02167cb0
    ldr r0, =gSprButtonCtrl
    mov r2, #2
    ldr r0, [r0]
    mov r1, #0
    add r0, r0, #0xf00
    strh r2, [r0, #0x38]
    strb r1, [r6, #0x2b5]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167cb0:
    cmp r4, #8
    bne @L_02167cf8
    mov r4, #0xb0
    add r0, r6, #0x108
    mla r0, r5, r4, r0
    sub r1, r4, #0xb1
    bl func_ov015_0213606c
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r6, #0x108
    mla r1, r5, r4, r0
    mov r0, r6
    mov r2, #0
    bl func_ov020_021669e8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167cf8:
    cmp r4, #9
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r6, #0x108
    mov r4, #0xb0
    mla r0, r5, r4, r0
    mov r1, #1
    bl func_ov015_0213606c
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r6, #0x108
    mla r1, r5, r4, r0
    mov r0, r6
    mov r2, #0
    bl func_ov020_021669e8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov020_02167d48(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    cmp r1, #0xa
    mov r6, r0
    mov r5, r2
    mov r7, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r6, #0x14]
    bl func_ov020_021662ec
    cmp r0, #0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    add r2, r6, #0x108
    mov r1, #0xb0
    mla r4, r0, r1, r2
    ldr r0, =gSprButtonCtrl
    add r1, sp, #4
    ldr r0, [r0]
    bl func_ov015_021629d0
    ldrsh r0, [r4, #0xa4]
    ldrsh r1, [sp, #6]
    strh r0, [sp, #4]
    ldrsh r0, [r4, #0xae]
    sub r0, r1, r0, asr #1
    strh r0, [sp, #6]
    ldrsh r2, [sp, #6]
    ldrsh r1, [r4, #0xa6]
    cmp r2, r1
    strlth r1, [sp, #6]
    blt @L_02167dd4
    ldrsh r0, [r4, #0xaa]
    add r0, r1, r0
    cmp r2, r0
    strgeh r0, [sp, #6]
@L_02167dd4:
    cmp r5, #0
    bne @L_02167df4
    str r7, [sp]
    ldrsh r2, [sp, #4]
    ldrsh r3, [sp, #6]
    mov r0, r6
    mov r1, r4
    bl func_ov020_021678c8
@L_02167df4:
    ldrsh r3, [sp, #6]
    ldrsh r2, [r4, #0xa6]
    ldr r1, [r4, #4]
    ldr r0, [r4, #8]
    sub r2, r3, r2
    sub r0, r1, r0
    add r1, r0, #1
    mul r0, r1, r2
    ldrsh r1, [r4, #0xaa]
    bl _s32_div_f
    ldr r3, [r4, #4]
    ldr r2, [r4, #8]
    mov r1, r0
    cmp r3, r2
    movlt r1, #0
    blt @L_02167e4c
    cmp r1, #0
    movlt r1, #0
    blt @L_02167e4c
    sub r0, r3, r2
    cmp r1, r0
    movge r1, r0
@L_02167e4c:
    ldr r0, [r4, #0xc]
    cmp r1, r0
    bne @L_02167e7c
    cmp r5, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r4
    mov r2, #0
    bl func_ov020_02167a34
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02167e7c:
    mov r0, r4
    bl func_ov015_02136018
    mov r0, r6
    mov r1, r4
    mov r2, #0
    bl func_ov020_02167860
    mov r0, r6
    mov r1, r4
    bl func_ov020_021673a0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov020_02167eac(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0) = (s32)data_ov020_02168950;
}

extern "C" asm void func_ov020_02167ec0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r3, =gKeysRepeated
    ldr r2, =gSprAnimCtrl
    ldrh r3, [r3]
    mov r6, r1
    mov r7, r0
    orr r0, r3, r6
    mov r1, r0, lsl #0x10
    ldr r0, [r2]
    mov r5, r1, lsr #0x10
    mov r4, #0
    bl func_ov015_02161760
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r8, =gSprButtonCtrl
    ldr r0, [r8]
    bl func_ov015_021629ac
    cmp r0, #0
    beq @L_02167f28
    ldr r0, [r8]
    add r0, r0, #0xf00
    ldrh r6, [r0, #0x38]
    cmp r6, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r5, r6
    strh r4, [r0, #0x38]
@L_02167f28:
    ldr r0, [r7, #0x10]
    cmp r0, #5
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r7, #0x14]
    cmp r0, #0
    beq @L_02167f4c
    cmp r0, #3
    beq @L_021680dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167f4c:
    tst r6, #1
    beq @L_02168038
    mov r0, r7
    add r1, r7, #0x108
    bl func_ov020_02167140
    ldr r5, [r7, #0x108]
    add r0, r7, r5, lsl #2
    ldrb r0, [r0, #0x86]
    cmp r0, #0
    beq @L_02168028
    ldr r0, [r7, #0x10c]
    sub r0, r0, #1
    cmp r5, r0
    bge @L_02167ffc
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r7, r5, lsl #2
    ldrh r3, [r0, #0x84]
    ldr r0, =data_020e88a0
    mov r1, #0
    and r2, r3, #0xff
    strb r3, [r7, #0x2b4]
    bl _ZN11MatchEngine13func_0207aaf4Eii
    cmp r0, #5
    bge @L_02167fc8
    ldrb r1, [r7, #0x2b4]
    cmp r1, #2
    bne @L_02167fdc
    cmp r0, #4
    blt @L_02167fdc
@L_02167fc8:
    ldrb r2, [r7, #0x2b4]
    ldr r0, =data_020d3d20
    mov r1, #0x9c
    bl func_0209b7b0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167fdc:
    ldrb r2, [r7, #0x2b4]
    ldr r0, =data_020d3d20
    mov r1, #0x9a
    bl func_0209b7b0
    mov r0, r7
    mov r1, #3
    bl func_ov020_02167198
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167ffc:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r2, r4
    mov r1, #0x98
    bl func_0209b7b0
    mov r0, r7
    mov r1, r4
    bl func_ov020_02167188
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168028:
    ldr r0, =gAudioPlayer
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168038:
    tst r6, #2
    beq @L_0216806c
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r2, r4
    mov r1, #0x98
    bl func_0209b7b0
    mov r0, r7
    mov r1, r4
    bl func_ov020_02167188
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216806c:
    tst r5, #0x40
    beq @L_021680a4
    mov r4, #8
    ldr r0, =gAudioPlayer
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r7, #0x108
    sub r1, r4, #9
    bl func_ov015_02135fe0
    mov r0, r7
    mov r2, r4
    add r1, r7, #0x108
    bl func_ov020_021669e8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021680a4:
    tst r5, #0x80
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r4, #8
    ldr r0, =gAudioPlayer
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r7, #0x108
    mov r1, #1
    bl func_ov015_02135fe0
    mov r0, r7
    mov r2, r4
    add r1, r7, #0x108
    bl func_ov020_021669e8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021680dc:
    tst r6, #1
    beq @L_0216819c
    mov r0, r7
    add r1, r7, #0x1b8
    bl func_ov020_02167140
    ldr r0, [r7, #0x268]
    cmp r0, #0
    bne @L_0216816c
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r2, r4
    mov r1, #0x9b
    bl func_0209b7b0
    ldr r0, =gSprButtonCtrl
    mov r1, #0xb
    ldr r0, [r0]
    bl func_ov015_021624f0
    ldr r5, =data_020e88a0
    ldrb r1, [r7, #0x2b4]
    mov r0, r5
    bl func_ov000_02116938
    mov r1, r4
    mov r0, r7
    bl func_ov020_02167188
    ldr r0, =data_020d9978
    mov r1, #9
    mov r2, #1
    bl _ZN11TreasureBox13func_020526ecEii
    mov r0, r5
    bl func_ov000_02116d08
    mov r0, r7
    mov r1, #4
    bl func_ov020_021661f8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216816c:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =gSprButtonCtrl
    mov r1, #0xc
    ldr r0, [r0]
    bl func_ov015_021624f0
    mov r0, r7
    mov r1, r4
    bl func_ov020_02167198
    strb r4, [r7, #0x2b5]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216819c:
    tst r6, #2
    beq @L_021681d4
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =gSprButtonCtrl
    mov r1, #0xc
    ldr r0, [r0]
    bl func_ov015_021624f0
    mov r0, r7
    mov r1, r4
    bl func_ov020_02167198
    strb r4, [r7, #0x2b5]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021681d4:
    tst r5, #0x20
    bne @L_021681e4
    tst r5, #0x10
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_021681e4:
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r7, #0x268]
    add r0, r0, #1
    ands r0, r0, #1
    str r0, [r7, #0x268]
    mov r0, r7
    bne @L_02168218
    mov r1, #1
    mov r2, #0
    bl func_ov020_02167a8c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168218:
    mov r1, #0
    mov r2, #1
    bl func_ov020_02167a8c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov020_02168244(u8 *arg0, s32 arg1)
{
    s32 *zp;
    s32 z = 0;
    zp = &z;
    if (((s32 (*)(s32))func_ov015_02161760)(*(s32 *)gSprAnimCtrl) != 0 || *(s32 *)(arg0 + 0x10) != 5)
        return;
    switch (((s32 (*)(s32, s32, s32))func_ov015_02162750)(*(s32 *)gSprButtonCtrl, arg1, *zp)) {
    case 0:
        break;
    case 1:
        ((void (*)(u8 *, s32))func_ov020_02167ae0)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)gSprButtonCtrl));
        break;
    case 2:
        ((void (*)(u8 *, s32))func_ov020_02167bb0)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)gSprButtonCtrl));
        break;
    case 3:
        ((void (*)(u8 *, s32, s32))func_ov020_02167d48)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)gSprButtonCtrl), *zp);
        break;
    case 4:
        ((void (*)(u8 *, s32, s32))func_ov020_02167d48)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)gSprButtonCtrl), 1);
        break;
    }
}

extern "C" asm void func_ov020_02168314(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    ldr r5, [r8, #0x2c4]
    mov r7, #0
    cmp r5, #0
    beq @L_021683ec
    ldr r1, [r8, #0x2c8]
    ldr r0, =0xaaaaaaab
    mov r6, #0
    umull r0, r4, r1, r0
    mov r4, r4, lsr #5
    cmp r4, #0x40
    movgt r4, #0x40
    b @L_021683e4
@L_0216834c:
    ldrb r0, [r5, #0x27]
    cmp r0, #0
    ldrneb r0, [r5, #0x28]
    cmpne r0, #0
    beq @L_021683dc
    cmp r6, #0xa
    blt @L_02168390
    cmp r6, #0xe
    bgt @L_02168390
    ldr r0, =gGameState
    ldrb r0, [r0, #0x4f6]
    cmp r0, #0xb
    bhs @L_02168390
    add r12, r8, #0x84
    mov r1, r6, lsl #0x10
    mov r2, #0
    b @L_021683c8
@L_02168390:
    mov r2, #0
    mov r1, r2
    b @L_021683b4
@L_0216839c:
    add r0, r8, r1
    ldrb r0, [r0, #0x274]
    cmp r6, r0
    moveq r2, #1
    beq @L_021683c0
    add r1, r1, #1
@L_021683b4:
    ldr r0, [r8, #0x270]
    cmp r1, r0
    blt @L_0216839c
@L_021683c0:
    add r12, r8, #0x84
    mov r1, r6, lsl #0x10
@L_021683c8:
    add r0, r12, r7, lsl #2
    mov r3, r2
    mov r1, r1, lsr #0x10
    add r7, r7, #1
    bl func_ov020_02165d60
@L_021683dc:
    add r6, r6, #1
    add r5, r5, #0x30
@L_021683e4:
    cmp r6, r4
    blt @L_0216834c
@L_021683ec:
    add r1, r8, #0x84
    add r0, r1, r7, lsl #2
    mov r2, #1
    mov r3, r2
    mov r1, #0
    add r7, r7, #1
    bl func_ov020_02165d60
    mov r0, r7
    str r7, [r8, #0x104]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov020_0216841c(...)
{
    ldr r2, [r0, #0x2c4]
    cmp r2, #0
    moveq r0, #0
    movne r0, #0x30
    mlane r0, r1, r0, r2
    bx lr
}

extern "C" asm void func_ov020_02168434(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r1, #0x4000000
    ldr r1, [r1]
    mov r4, r0
    and r0, r1, #0x1f00
    mov r1, r0, lsr #8
    ldr r0, =gSprButtonCtrl
    str r1, [r4, #0x26c]
    ldr r0, [r0]
    bl func_ov015_02161f84
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616a4
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x44]
    blx r1
    ldr r0, [r4, #4]
    bl _ZN13ScreenManager18GetLoadedSceneMainEv
    str r0, [r4, #8]
    mov r6, #0
    str r6, [r4, #0xc]
    strb r6, [r4, #0x2b5]
    str r6, [r4, #0x270]
    add r0, r4, #0x274
    mov r1, r6
    mov r5, #0x40
    mov r2, r5
    bl MI_CpuFill8
    mov r2, r5
    ldr r0, =data_020e88a0
    add r1, r4, #0x274
    bl func_ov000_02114298
    str r0, [r4, #0x270]
    strb r6, [r4, #0x2b4]
    str r6, [r4, #0x10]
    str r6, [r4, #0x14]
    add r0, r4, #0x2b8
    mov r1, r6
    mov r2, #0x18
    bl MI_CpuFill8
    add r0, r4, #0x18
    mov r1, r6
    mov r5, #0xc
    mov r2, r5
    bl MI_CpuFill8
    add r0, r4, #0x24
    mov r1, r6
    mov r2, #0x44
    bl MI_CpuFill8
    add r0, r4, #0x68
    mov r1, r6
    mov r2, #4
    bl MI_CpuFill8
    mov r2, r5
    add r0, r4, #0x6c
    mov r1, r6
    bl MI_CpuFill8
    add r0, r4, #0x7c
    mov r1, r6
    mov r2, #8
    bl MI_CpuFill8
    str r6, [r4, #0x78]
    add r0, r4, #0x84
    mov r1, r6
    mov r2, #0x80
    bl MI_CpuFill8
    mov r1, r6
    add r0, r4, #0x108
    mov r2, #0x160
    str r6, [r4, #0x104]
    bl MI_CpuFill8
    ldr r0, =g3DPlaneCtrl
    str r6, [r4, #0x268]
    ldr r0, [r0]
    bl C3DPlaneCtrl_Acquire
    ldr r0, =data_020d3d20
    mov r2, r6
    mov r1, #0x96
    bl func_0209b7b0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov020_0216858c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #0x10]
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    b @L_021686f8
    b @L_021685c4
    b @L_021685d8
    b @L_02168610
    b @L_02168630
    b @L_0216864c
    b @L_021686f8
    b @L_02168690
    b @L_021686d4
@L_021685c4:
    bl func_ov020_02165d70
    mov r0, r4
    bl func_ov020_02165d8c
    mov r0, #1
    str r0, [r4, #0x10]
@L_021685d8:
    add r0, r4, #0x18
    mov r1, #1
    bl Archive_TryFinalize
    cmp r0, #0
    beq @L_021686f8
    mov r5, #2
    mov r1, r5
    add r0, r4, #0x2b8
    bl Archive_TryFinalize
    cmp r0, #0
    beq @L_021686f8
    mov r0, r4
    bl func_ov020_02165e2c
    str r5, [r4, #0x10]
@L_02168610:
    mov r0, r4
    bl func_ov020_0216602c
    cmp r0, #0
    beq @L_021686f8
    mov r0, r4
    bl func_ov020_0216607c
    mov r0, #3
    str r0, [r4, #0x10]
@L_02168630:
    mov r0, r4
    mov r1, #0
    bl func_ov020_02167198
    mov r0, r4
    bl func_ov020_0216773c
    mov r0, r4
    bl func_ov020_021660e0
@L_0216864c:
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_021686f8
    ldr r1, [r4, #0x14]
    mov r0, r4
    bl func_ov020_021661f8
    mov r0, r4
    bl func_ov020_02166308
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #5
    str r0, [r4, #0x10]
    b @L_021686f8
@L_02168690:
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_021686f8
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    beq @L_021686f8
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r0, #7
    str r0, [r4, #0x10]
@L_021686d4:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_021686f8
    ldr r0, [r4, #4]
    mov r1, #0
    bl _ZN13ScreenManager8PopSceneEi
@L_021686f8:
    ldr r0, =gDeltaTime
    ldr r1, =gSprAnimCtrl
    ldr r2, [r0]
    ldr r0, [r1]
    mov r1, r2, lsl #1
    bl func_ov015_02161710
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov020_0216871c(void)
{
}

extern "C" asm void func_ov020_02168720(void)
{
    stmdb sp!, {r4, lr}
    mov r2, #0x4000000
    mov r4, r0
    ldr r0, [r2]
    ldr r1, [r4, #0x26c]
    bic r0, r0, #0x1f00
    orr r3, r0, r1, lsl #8
    mov r0, #2
    mov r1, #0x10
    str r3, [r2]
    bl func_ov015_02132c08
    ldr r0, =data_020d3d20
    mov r1, #0x99
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =gSprButtonCtrl
    ldr r0, [r0]
    bl func_ov015_02161fdc
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616dc
    mov r0, r4
    bl func_ov020_02165f28
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DPlaneCtrl_Release
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov020_0216879c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov020_021687b0(void)
{
}
