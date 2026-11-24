#include "ov000/Unk_ov000_0210947c.hpp"
#include "game/vcall.hpp"
class C02109aa0 { public: virtual void v00(); virtual void v04(); virtual void v08(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); };
struct P02109e18 { s32 a; s32 b; };
struct S0210b0ac { s32 a, b, c; };

extern "C" s32 func_ov000_0210947c(u8 *arg0);
extern "C" s32 func_ov000_021094d0(u8 *arg0);
extern "C" void func_ov000_02109510(void);
extern "C" void func_ov000_02109514(void);
extern "C" s32 func_ov000_02109518(...);
extern "C" s32 func_ov000_021095b0(s32 arg0);
extern "C" s32 func_ov000_02109610(...);
extern "C" void func_ov000_02109aa0(u8 *arg0);
extern "C" s32 func_ov000_02109b60(...);
extern "C" void func_ov000_02109e18(u8 *arg0);
extern "C" s32 func_ov000_02109e64(...);
extern "C" void func_ov000_02109e8c(void);
extern "C" s32 func_ov000_0210a264(...);
extern "C" void func_ov000_0210a5e8(void);
extern "C" void func_ov000_0210a6bc(void);
extern "C" void func_ov000_0210a788(void);
extern "C" void func_ov000_0210a88c(void);
extern "C" void func_ov000_0210ab38(void);
extern "C" s32 func_ov000_0210adfc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov000_0210ae34(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov000_0210aee4(void);
extern "C" s32 func_ov000_0210afec(u8 *arg0);
extern "C" s32 func_ov000_0210b034(u8 *arg0);
extern "C" s32 func_ov000_0210b098(s32 arg0);
extern "C" u8 func_ov000_0210b0ac(u8 *arg0, S0210b0ac arg1);
extern "C" s32 func_ov000_0210b0e0(...);
extern "C" s32 func_ov000_0210b170(s32 arg0, u8 *arg1, s32 arg2);
extern "C" s32 func_ov000_0210b1a4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern "C" void func_ov000_0210b1f8(void);
extern "C" void func_ov000_0210b258(void);
extern "C" s32 func_ov000_0210b2e4(s32 arg0, u8 *arg1);
extern "C" void func_ov000_0210b330(void);
extern "C" s32 func_ov000_0210b474(s32 arg0, u8 *arg1, s32 arg2, u8 *arg3, u8 *arg4);
extern "C" s32 func_ov000_0210b59c(s32 arg0, u8 *arg1);
extern "C" void func_ov000_0210b5f4(void);
extern "C" s32 func_ov000_0210b6b4(...);
extern "C" s32 func_ov000_0210b8a4(...);
extern "C" u8 func_ov000_0210b93c(s32 arg0);
extern "C" s32 func_ov000_0210b948(s32 arg0, u8 arg1);
extern "C" void func_ov000_0210b954(void);
extern "C" void func_ov000_0210bbd0(void);
extern "C" void func_ov000_0210bd50(void);
extern "C" s32 func_ov000_0210bf0c(s32 arg0, u8 *arg1);
extern "C" s32 func_ov000_0210bf4c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov000_0210bfec(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov000_0210c050(void);
extern "C" void func_ov000_0210c25c(void);
extern "C" void func_ov000_0210c36c(void);
extern "C" void func_ov000_0210c454(void);

extern "C" char gFont12Manager[];
extern "C" char gFont8[];
extern "C" char gPalSkinFaceFile[];
extern "C" char g2DAdventureLogic[];
extern "C" char gCameraCtrl[];
extern "C" char data_020c4ab4[];
extern "C" char gBgMenuManager[];
extern "C" char data_020d9a04[];
extern "C" char data_020e88a0[];
extern "C" char data_ov000_02117640[];
extern "C" char data_ov000_02117688[];
extern "C" char data_ov000_021181c4[];
extern "C" char data_ov000_02118238[];
extern "C" char data_ov000_021183f4[];
extern "C" char data_ov000_021183f8[];
extern "C" char data_ov000_02118414[];
extern "C" char data_ov000_02118430[];
extern "C" char data_ov000_02118448[];
extern "C" char data_ov000_02118460[];
extern "C" char data_ov000_02118478[];
extern "C" char data_ov000_02118494[];
extern "C" char data_ov000_021184ac[];
extern "C" char data_ov000_021184c4[];
extern "C" char data_ov000_02118710[];
extern "C" void DC_FlushRange(void);
extern "C" void FX_SinCosTable_(void);
extern "C" void G2S_GetBG0CharPtr(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" s32 _ZN13ScreenManager12SetNextSceneEii(...);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" void _ZN11MatchEngine13func_0206b4b8Ei(void);
extern "C" void _ZN11MatchEngine13func_0206f70cEt(void);
extern "C" void _ZN11MatchEngine13func_02078844EiPtih(void);
extern "C" void _ZN11MatchEngine13func_0207aa94Ei(void);
extern "C" s32 _ZN11MatchEngine13func_0207c6b4Eiii(...);
extern "C" void _ZN11MatchEngine13func_0207d308EPh(void);
extern "C" s32 _ZdlPv(...);
extern "C" void VEC_Add(void);
extern "C" s32 VEC_Subtract(...);
extern "C" void FX_Atan2Idx(void);
extern "C" void GXS_LoadBG1Char(void);
extern "C" void GXS_LoadBG2Char(void);
extern "C" void func_02017278(void);
extern "C" void _ffltu(void);
extern "C" void _s32_div_f(void);
extern "C" void _ffix(void);
extern "C" void _fadd(void);
extern "C" void _fsub(void);
extern "C" void func_020823a0(void);
extern "C" s32 func_02084c8c(...);
extern "C" void func_02084d50(void);
extern "C" s32 func_02084d74(...);
extern "C" void func_02084d7c(void);
extern "C" s32 func_02084dd8(...);
extern "C" void func_02084e70(void);
extern "C" void func_02085228(void);
extern "C" s32 func_02085298(...);
extern "C" s32 func_0208530c(...);
extern "C" s32 func_02085374(...);
extern "C" void func_0208539c(void);
extern "C" void func_020853cc(void);
extern "C" s32 func_02085444(...);
extern "C" void func_020854a8(void);
extern "C" void func_020854d8(void);
extern "C" void func_020857ac(void);
extern "C" void func_02085828(void);
extern "C" s32 func_020858b0(...);
extern "C" void func_020858c8(void);
extern "C" s32 func_02085bb4(...);
extern "C" void func_02099a2c(void);
extern "C" s32 func_02099a94(...);
extern "C" void func_0209d8b8(void);
extern "C" s32 func_ov000_02108710(...);
extern "C" void func_ov000_02110dc0(void);
extern "C" s32 func_ov000_02110e00(...);
extern "C" s32 func_ov000_02110e04(...);
extern "C" s32 func_ov000_02110e9c(...);
extern "C" void Random_RandB(void);
extern "C" s32 func_ov015_02130b14(...);
extern "C" s32 func_ov015_02130e28(...);
extern "C" s32 func_ov015_021319bc(...);
extern "C" void func_ov015_02131cd4(void);
extern "C" void func_ov015_02131d4c(void);
extern "C" s32 func_ov015_02131da0(...);
extern "C" void Graphics_LoadBGPaletteSub(void);
extern "C" void Graphics_LoadTempPaletteFromPac(void);
extern "C" void Graphics_LoadTempPalette(void);
extern "C" void Graphics_SetupScreen(void);
extern "C" void Graphics_SetupScreen_2(void);
extern "C" void Graphics_LoadBGXCharSub(void);
extern "C" void func_ov015_02133088(void);
extern "C" void func_ov015_02133dc8(void);
extern "C" void func_ov015_02133e24(void);
extern "C" void func_ov015_02133e50(void);
extern "C" s32 func_ov015_02133e8c(...);
extern "C" void Archive_RequestNewRead(void);
extern "C" void Archive_RequestNewReadEx(void);
extern "C" void Archive_ReadFromSFP(void);
extern "C" s32 Archive_Close(...);
extern "C" void Archive_Deallocate(void);
extern "C" void Archive_GetFaceOffsetAndSize(void);
extern "C" void Archive_GetBodyOffsetAndSize(void);
extern "C" void Archive_GetBodyPlttOffsetAndSize(void);
extern "C" s32 func_ov015_02135440(...);
extern "C" s32 func_ov015_02135e10(...);
extern "C" s32 CBgMenuManager_Init(...);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" void CBgMenuManager_AddStatic(void);
extern "C" void CBgMenuManager_DeleteAll(void);
extern "C" s32 CBgMenuManager_Draw(...);
extern "C" void func_ov015_0213d4d8(void);
extern "C" void gGameState(void);

extern "C" s32 func_ov000_0210947c(u8 *arg0)
{
    s32 v3;
    if (*(s32 *)(arg0 + 0x14) == 8)
        return (s32)arg0;
    *(s32 *)(((u8 *)0x4001010)) = 0;
    func_ov000_02108710((s32)arg0, 0x4001010, 0);
    func_ov000_02110e9c((s32)(arg0 + 4));
    ((VCall *)(arg0 + 4))->f0();
    v3 = ((VCall *)(arg0 + 4))->f4();
    return v3;
}

extern "C" s32 func_ov000_021094d0(u8 *arg0)
{
    *(s32 *)(arg0) = (s32)data_ov000_021181c4;
    *(s32 *)(arg0 + 0x4) = (s32)data_ov000_02118238;
    func_ov000_02110e04((arg0 + 4), (s32)data_ov000_02118238, (s32)data_ov000_021181c4);
    func_ov000_02110e00((arg0 + 4));
    _ZdlPv((s32)arg0);
    return (s32)arg0;
}

extern "C" void func_ov000_02109510(void)
{
}

extern "C" void func_ov000_02109514(void)
{
}

extern "C" void Archive_TryFinalize(void);
extern "C" void CBgMenuManager_UpdateGraphics(void);
extern "C" void _ZN13ScriptManager13func_0206148cEv(void);
extern "C" asm s32 func_ov000_02109518(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
    mov r1, r4
    add r0, r5, #0x10
    mov r2, #8
    bl MI_CpuFill8
    ldr r0, =data_020e88a0
    mov r1, r4
    add r2, r5, #0x10
    mov r3, #4
    str r4, [sp]
    bl _ZN11MatchEngine13func_02078844EiPtih
    cmp r0, #4
    ldmgeia sp!, {r3, r4, r5, pc}
    mov r0, r4
@L_02109558:
    add r1, r5, r4, lsl #1
    ldrh r1, [r1, #0x10]
    cmp r1, #0
    bne @L_0210959c
    add r1, r4, #1
    cmp r1, #4
    bge @L_0210959c
@L_02109574:
    add r3, r5, r1, lsl #1
    ldrh r2, [r3, #0x10]
    cmp r2, #0
    addne r1, r5, r4, lsl #1
    strneh r2, [r1, #0x10]
    strneh r0, [r3, #0x10]
    bne @L_0210959c
    add r1, r1, #1
    cmp r1, #4
    blt @L_02109574
@L_0210959c:
    add r4, r4, #1
    cmp r4, #3
    blt @L_02109558
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov000_021095b0(s32 arg0)
{
    s32 r1;
    s32 r4;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 v0;
    s32 v1;
    s32 t0;
    r7 = 0;
    r8 = arg0;
    do {
        r4 = 0xC;
        r6 = 0;
        arg0 = *(u16 *)(((u8 *)(r8 + (r7 << 1))) + 0x10);
        if (arg0 != 0) {
            v0 = func_ov015_02130b14(arg0, r6);
            arg0 = v0;
            if ((arg0 != 0 && (r1 = *(s32 *)(((u8 *)((r7 * r4) + r8)) + 0x19C), r1 != 0))) {
                t0 = *(s32 *)(((u8 *)&gPalSkinFaceFile));
                v1 = func_ov015_02131da0(arg0, r1, t0);
                arg0 = v1;
            }
        }
        r7 = (r7 + 1);
    } while (r7 < 4);
    return arg0;
}

extern "C" asm s32 func_ov000_02109610(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r10, r0
    add r0, r10, #0x18
    mov r1, #8
    mov r4, #2
    mov r11, #0
    bl func_ov015_02133e24
    mov r9, r11
    add r6, r10, #0x18
@L_02109638:
    add r0, r10, r9, lsl #1
    ldrh r0, [r0, #0x10]
    cmp r0, #0
    beq @L_02109704
    mov r1, #0
    bl func_ov015_02130b14
    movs r7, r0
    beq @L_02109704
    mov r0, #0x14
    mul r5, r9, r0
    add r8, r6, r5
    mov r0, r8
    mov r1, #6
    mov r2, r4
    bl func_ov015_02133e50
    ldr r0, [r6, r5]
    cmp r0, #0
    ldrne r0, [r8, #4]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02109704
    mov r0, r8
    bl func_ov015_02133dc8
    mov r0, #3
    stmia sp, {r0, r4}
    ldr r0, [r8, #4]
    add r3, r7, #0x20
    str r0, [sp, #8]
    ldrh r0, [r8, #0xc]
    mov r1, r11
    mov r2, #6
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r8, #0xe]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r11, [sp, #0x14]
    ldr r0, =gFont8
    str r11, [sp, #0x18]
    ldr r0, [r0]
    ldr r5, [r0]
    ldr r5, [r5, #8]
    blx r5
    ldrh r2, [r8, #0xc]
    ldrh r1, [r8, #0xe]
    ldr r0, [r8, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
@L_02109704:
    add r9, r9, #1
    cmp r9, #4
    blt @L_02109638
    mov r2, #2
    add r0, r10, #0x68
    mov r1, #0xe
    mov r7, #1
    mov r4, #3
    mov r8, r2
    mov r5, #0
    bl func_ov015_02133e50
    ldr r0, [r10, #0x68]
    cmp r0, #0
    ldrne r0, [r10, #0x6c]
    cmpne r0, #0
    movne r0, r7
    moveq r0, #0
    cmp r0, #0
    beq @L_021098a8
    add r0, r10, #0x68
    bl func_ov015_02133dc8
    ldr r0, =data_020e88a0
    mov r1, r5
    bl _ZN11MatchEngine13func_0206b4b8Ei
    mov r6, r0
    cmp r6, #0x3c
    blt @L_021097bc
    mov r0, #0x62
    bl func_0209d8b8
    stmia sp, {r4, r5}
    ldr r1, [r10, #0x6c]
    mov r3, r0
    str r1, [sp, #8]
    ldrh r2, [r10, #0x74]
    ldr r6, =gFont12Manager
    mov r1, #0x1a
    mov r0, r2, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r10, #0x76]
    mov r2, #2
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r5, [sp, #0x14]
    str r5, [sp, #0x18]
    ldr r0, [r6]
    b @L_02109884
@L_021097bc:
    mov r9, #0x63
    mov r0, r9
    bl func_0209d8b8
    stmia sp, {r4, r5}
    ldr r1, [r10, #0x6c]
    mov r3, r0
    str r1, [sp, #8]
    ldrh r11, [r10, #0x74]
    ldr r0, =gFont12Manager
    mov r1, r5
    mov r11, r11, lsl #3
    str r11, [sp, #0xc]
    ldrh r11, [r10, #0x76]
    mov r2, #2
    mov r11, r11, lsl #3
    str r11, [sp, #0x10]
    str r5, [sp, #0x14]
    str r5, [sp, #0x18]
    ldr r0, [r0]
    ldr r11, [r0]
    ldr r11, [r11, #8]
    blx r11
    cmp r6, #0x63
    movgt r6, r9
    add r9, sp, #0x2c
    ldr r2, =data_ov000_021183f4
    mov r0, r9
    mov r3, r6
    mov r1, #0x10
    bl func_02017278
    add r6, sp, #0x1c
    mov r0, r9
    mov r1, r6
    bl func_ov015_02133088
    stmia sp, {r4, r5}
    ldr r1, [r10, #0x6c]
    mov r3, r6
    str r1, [sp, #8]
    ldrh r6, [r10, #0x74]
    ldr r0, =gFont12Manager
    mov r1, #0x54
    mov r6, r6, lsl #3
    str r6, [sp, #0xc]
    ldrh r6, [r10, #0x76]
    mov r2, #2
    mov r6, r6, lsl #3
    str r6, [sp, #0x10]
    str r5, [sp, #0x14]
    str r5, [sp, #0x18]
    ldr r0, [r0]
@L_02109884:
    ldr r6, [r0]
    ldr r6, [r6, #8]
    blx r6
    ldrh r2, [r10, #0x74]
    ldrh r1, [r10, #0x76]
    ldr r0, [r10, #0x6c]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
@L_021098a8:
    add r0, r10, #0x7c
    mov r1, #0xb
    mov r2, #2
    bl func_ov015_02133e50
    ldr r0, [r10, #0x7c]
    cmp r0, #0
    ldrne r0, [r10, #0x80]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_021099d4
    add r0, r10, #0x7c
    bl func_ov015_02133dc8
    mov r0, #0x3d
    bl func_0209d8b8
    stmia sp, {r4, r5}
    mov r3, r0
    ldr r0, [r10, #0x80]
    ldr r6, =gFont12Manager
    str r0, [sp, #8]
    ldrh r0, [r10, #0x88]
    mov r1, r5
    mov r2, r8
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r10, #0x8a]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r5, [sp, #0x14]
    str r5, [sp, #0x18]
    ldr r0, [r6]
    ldr r9, [r0]
    ldr r9, [r9, #8]
    blx r9
    ldr r0, =data_020e88a0
    mov r1, r5
    bl _ZN11MatchEngine13func_0207aa94Ei
    mov r9, r0
    mov r0, #0x64
    bl func_0209d8b8
    mov r3, r9
    add r9, sp, #0x2c
    mov r2, r0
    mov r1, #0x10
    mov r0, r9
    bl func_02017278
    mov r0, r9
    add r9, sp, #0x1c
    mov r1, r9
    bl func_ov015_02133088
    stmia sp, {r4, r5}
    ldr r0, [r10, #0x80]
    mov r2, r8
    str r0, [sp, #8]
    ldrh r0, [r10, #0x88]
    mov r3, r9
    mov r1, #0x3c
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r10, #0x8a]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r5, [sp, #0x14]
    str r5, [sp, #0x18]
    ldr r0, [r6]
    ldr r5, [r0]
    ldr r5, [r5, #8]
    blx r5
    ldrh r2, [r10, #0x88]
    ldrh r1, [r10, #0x8a]
    ldr r0, [r10, #0x80]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
@L_021099d4:
    mov r5, #1
    mov r2, r5
    add r0, r10, #0x90
    mov r1, #8
    bl func_ov015_02133e50
    ldr r0, [r10, #0x90]
    cmp r0, #0
    ldrne r0, [r10, #0x94]
    cmpne r0, #0
    moveq r5, #0
    cmp r5, #0
    beq @L_02109a78
    add r0, r10, #0x90
    bl func_ov015_02133dc8
    mov r0, #0x65
    bl func_0209d8b8
    stmia sp, {r4, r7}
    ldr r2, [r10, #0x94]
    mov r3, r0
    str r2, [sp, #8]
    ldrh r2, [r10, #0x9c]
    mov r1, #0
    ldr r4, =gFont8
    mov r0, r2, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r10, #0x9e]
    mov r2, r1
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r0, [r4]
    ldr r4, [r0]
    ldr r4, [r4, #8]
    blx r4
    ldrh r2, [r10, #0x9c]
    ldrh r1, [r10, #0x9e]
    ldr r0, [r10, #0x94]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
@L_02109a78:
    add r0, r10, #0xa4
    mov r1, #0x14
    mov r2, #2
    bl func_ov015_02133e50
    add sp, sp, #0x3c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov000_02109aa0(u8 *arg0)
{
    s32 h = *(s32 *)(arg0 + 0x130);
    s32 ok = (*(s32 *)(arg0 + 0xA4) != 0 && *(s32 *)(arg0 + 0xA8) != 0) ? 1 : 0;
    if (ok == 0)
        return;
    ((s32 (*)(...))func_ov015_02133dc8)(arg0 + 0xA4);
    if (h != 0)
        (*(C02109aa0 **)gFont12Manager)->v08(0, 2, h, 3, 1, *(s32 *)(arg0 + 0xA8), *(u16 *)(arg0 + 0xB0) << 3, *(u16 *)(arg0 + 0xB2) << 3, 0, 0);
    ((s32 (*)(...))DC_FlushRange)(*(s32 *)(arg0 + 0xA8), (*(u16 *)(arg0 + 0xB0) * *(u16 *)(arg0 + 0xB2)) << 5);
}

extern "C" asm s32 func_ov000_02109b60(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r10, r0
    str r1, [r10, #0xc]
    cmp r1, #1
    mov r5, #0
    beq @L_02109b88
    cmp r1, #2
    beq @L_02109be0
    b @L_02109ddc
@L_02109b88:
    ldr r0, =data_ov000_021183f8
    add r1, r10, #0xb8
    bl Archive_RequestNewRead
    ldr r1, =gGameState
    ldr r0, =data_ov000_02118414
    add r1, r1, #0x400
    ldrsb r2, [r1, #0xd8]
    add r1, r10, #0x124
    mov r3, #0x20
    mov r2, r2, lsl #5
    str r5, [sp]
    bl Archive_RequestNewReadEx
    ldr r0, =data_ov000_02118430
    add r1, r10, #0x1cc
    bl Archive_RequestNewRead
    ldr r0, =data_ov000_02118448
    add r1, r10, #0x1d8
    bl Archive_RequestNewRead
    ldr r0, =data_ov000_02118460
    add r1, r10, #0x1e4
    bl Archive_RequestNewRead
    b @L_02109ddc
@L_02109be0:
    ldr r0, [r10, #0x124]
    cmp r0, #0
    beq @L_02109c08
    str r5, [sp]
    ldrh r2, [r0, #0x1e]
    ldr r0, =data_ov000_02118478
    add r1, r10, #0x130
    mov r2, r2, lsl #5
    mov r3, #0x18
    bl Archive_RequestNewReadEx
@L_02109c08:
    bl func_ov015_021319bc
    mov r1, r0
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r7, r0
    mov r8, #0
    add r4, r10, #0xb8
    b @L_02109dd4
@L_02109c28:
    add r0, r10, r8, lsl #1
    ldrh r0, [r0, #0x10]
    cmp r0, #0
    beq @L_02109dd0
    mov r1, r5
    bl func_ov015_02130b14
    movs r6, r0
    beq @L_02109dd0
    str r5, [sp, #8]
    add r1, r10, r8, lsl #1
    ldrh r1, [r1, #0x10]
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_0206f70cEt
    movs r9, r0
    beq @L_02109c9c
    ldrh r0, [r6, #0x44]
    add r1, r10, r8, lsl #1
    mov r2, r5
    str r0, [sp, #8]
    ldrh r1, [r1, #0x10]
    ldr r0, =data_020e88a0
    bl func_020823a0
    mov r1, r9, lsl #0x10
    ldr r0, =data_020e88a0
    ldrh r11, [r6, #0x44]
    mov r1, r1, lsr #0x10
    mov r2, r5
    bl func_020823a0
    strh r11, [r6, #0x44]
@L_02109c9c:
    ldr r0, [r10, #0x1cc]
    cmp r0, #0
    beq @L_02109cf0
    add r0, sp, #0x10
    str r0, [sp]
    ldr r0, [r10, #0x1cc]
    mov r1, r6
    mov r2, r5
    add r3, sp, #0x14
    bl Archive_GetFaceOffsetAndSize
    cmp r0, #0
    beq @L_02109cf0
    add r2, r8, #0xf
    mov r1, #0xc
    mla r1, r2, r1, r4
    mov r0, #1
    str r0, [sp]
    ldr r0, =data_ov000_02118494
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x10]
    bl Archive_RequestNewReadEx
@L_02109cf0:
    mov r0, r7
    mov r1, r6
    bl func_ov015_02131d4c
    ldrh r1, [r7, #0x28]
    str r0, [sp, #0xc]
    mov r0, r6
    cmp r1, #0
    ldreqh r1, [r7, #0x26]
    bl func_ov015_02131cd4
    mov r11, r0
    ldr r0, [r10, #0x1d8]
    cmp r0, #0
    beq @L_02109d74
    add r0, sp, #0x14
    str r0, [sp]
    add r0, sp, #0x10
    str r0, [sp, #4]
    ldr r0, [r10, #0x1d8]
    ldr r3, [sp, #0xc]
    mov r1, r6
    mov r2, r11
    bl Archive_GetBodyOffsetAndSize
    cmp r0, #0
    beq @L_02109d74
    add r2, r8, #0xb
    mov r1, #0xc
    mla r1, r2, r1, r4
    mov r0, #1
    str r0, [sp]
    ldr r0, =data_ov000_021184ac
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x10]
    bl Archive_RequestNewReadEx
@L_02109d74:
    ldr r0, [r10, #0x1e4]
    cmp r0, #0
    beq @L_02109dc4
    add r0, sp, #0x10
    str r0, [sp]
    ldr r2, [sp, #0xc]
    ldr r0, [r10, #0x1e4]
    mov r1, r11
    add r3, sp, #0x14
    bl Archive_GetBodyPlttOffsetAndSize
    cmp r0, #0
    beq @L_02109dc4
    add r2, r8, #0x13
    mov r1, #0xc
    mla r1, r2, r1, r4
    str r5, [sp]
    ldr r0, =data_ov000_021184c4
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x10]
    bl Archive_RequestNewReadEx
@L_02109dc4:
    cmp r9, #0
    ldrne r0, [sp, #8]
    strneh r0, [r6, #0x44]
@L_02109dd0:
    add r8, r8, #1
@L_02109dd4:
    cmp r8, #4
    blt @L_02109c28
@L_02109ddc:
    mov r0, #1
    str r0, [r10, #8]
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov000_02109e18(u8 *arg0)
{
    s32 v = *(s32 *)(arg0 + 0xB8);
    P02109e18 *e;
    if (v == 0)
        return;
    e = (P02109e18 *)data_ov000_02117640;
    if (e->a == 0)
        return;
    do {
        ((void (*)(s32, u8 *, s32))Archive_ReadFromSFP)(e->a, arg0 + 0xB8 + e->b * 0xC, v);
        e++;
    } while (e->a != 0);
}

extern "C" asm s32 func_ov000_02109e64(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0xb8
    mov r4, #0xc
@L_02109e74:
    mla r0, r6, r4, r5
    bl Archive_Deallocate
    add r6, r6, #1
    cmp r6, #0x1a
    blt @L_02109e74
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov000_02109e8c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r8, [r10, #0xd0]
    mov r5, #0
    cmp r8, #0
    mov r6, #1
    mov r7, r5
    beq @L_02109ed4
    mov r4, #2
    mov r0, r8
    mov r1, r6
    mov r2, r4
    bl Graphics_SetupScreen_2
    mov r7, r0
    mov r0, r8
    mov r1, r6
    mov r2, r4
    bl Graphics_LoadTempPaletteFromPac
@L_02109ed4:
    ldr r8, [r10, #0xdc]
    cmp r8, #0
    beq @L_02109f04
    mov r4, #2
    mov r0, r8
    mov r2, r4
    add r1, r7, #1
    bl Graphics_SetupScreen_2
    mov r0, r8
    mov r2, r4
    mov r1, #1
    bl Graphics_LoadTempPaletteFromPac
@L_02109f04:
    mov r9, #0
    mov r7, r9
    add r4, r10, #0x18
    mov r11, #0xc
@L_02109f14:
    add r0, r10, r7, lsl #1
    ldrh r0, [r0, #0x10]
    cmp r0, #0
    beq @L_02109fb8
    mov r1, r5
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_02109fb8
    mla r8, r7, r11, r10
    ldr r0, [r8, #0x13c]
    cmp r0, #0
    beq @L_02109f54
    add r1, r9, #1
    add r2, r7, #5
    bl Graphics_SetupScreen_2
    mov r9, r0
@L_02109f54:
    ldr r0, [r8, #0x19c]
    cmp r0, #0
    beq @L_02109f6c
    mov r1, r6
    add r2, r7, #5
    bl Graphics_LoadTempPalette
@L_02109f6c:
    mov r0, #0x14
    mul r1, r7, r0
    ldr r0, [r4, r1]
    add r2, r4, r1
    cmp r0, #0
    ldrne r1, [r2, #4]
    mov r3, r5
    cmpne r1, #0
    movne r3, r6
    cmp r3, #0
    beq @L_02109fb8
    ldrh r8, [r2, #0xc]
    ldrh r1, [r2, #0xe]
    add r2, r9, #1
    mov r3, r5
    mul r1, r8, r1
    mov r1, r1, lsl #1
    bl Graphics_SetupScreen
    mov r9, r0
@L_02109fb8:
    add r7, r7, #1
    cmp r7, #4
    blt @L_02109f14
    ldr r7, [r10, #0xe8]
    mov r4, #0
    cmp r7, #0
    mov r5, #1
    beq @L_0210a000
    mov r6, #4
    mov r0, r7
    mov r2, r6
    add r1, r9, #1
    bl Graphics_SetupScreen_2
    mov r9, r0
    mov r0, r7
    mov r2, r6
    mov r1, r5
    bl Graphics_LoadTempPaletteFromPac
@L_0210a000:
    ldr r6, [r10, #0xc4]
    cmp r6, #0
    beq @L_0210a02c
    mov r0, r6
    mov r2, r5
    add r1, r9, #1
    bl Graphics_SetupScreen_2
    mov r0, r6
    mov r1, r5
    mov r2, r5
    bl Graphics_LoadTempPaletteFromPac
@L_0210a02c:
    mov r7, #0
    mov r6, r7
    mov r8, #0xc
@L_0210a038:
    add r0, r10, r6, lsl #1
    ldrh r0, [r0, #0x10]
    cmp r0, #0
    beq @L_0210a088
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    mlane r0, r6, r8, r10
    ldrne r9, [r0, #0x16c]
    cmpne r9, #0
    beq @L_0210a088
    mov r0, r9
    add r1, r7, #1
    add r2, r6, #9
    bl Graphics_SetupScreen_2
    mov r7, r0
    mov r0, r9
    mov r1, r5
    add r2, r6, #9
    bl Graphics_LoadTempPaletteFromPac
@L_0210a088:
    add r6, r6, #1
    cmp r6, #4
    blt @L_0210a038
    ldr r5, [r10, #0x10c]
    cmp r5, #0
    beq @L_0210a0c8
    mov r4, #3
    mov r0, r5
    mov r2, r4
    add r1, r7, #1
    bl Graphics_SetupScreen_2
    mov r7, r0
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl Graphics_LoadTempPaletteFromPac
@L_0210a0c8:
    ldr r5, [r10, #0x118]
    cmp r5, #0
    beq @L_0210a0fc
    mov r4, #2
    mov r0, r5
    mov r2, r4
    add r1, r7, #1
    bl Graphics_SetupScreen_2
    mov r7, r0
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl Graphics_LoadTempPaletteFromPac
@L_0210a0fc:
    ldr r5, [r10, #0xf4]
    cmp r5, #0
    beq @L_0210a130
    mov r4, #4
    mov r0, r5
    mov r2, r4
    add r1, r7, #1
    bl Graphics_SetupScreen_2
    mov r7, r0
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl Graphics_LoadTempPaletteFromPac
@L_0210a130:
    ldr r5, [r10, #0x100]
    cmp r5, #0
    beq @L_0210a164
    mov r4, #4
    mov r0, r5
    mov r2, r4
    add r1, r7, #1
    bl Graphics_SetupScreen_2
    mov r7, r0
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl Graphics_LoadTempPaletteFromPac
@L_0210a164:
    ldr r0, [r10, #0x68]
    mov r2, #0
    cmp r0, #0
    ldrne r1, [r10, #0x6c]
    cmpne r1, #0
    movne r2, #1
    cmp r2, #0
    beq @L_0210a1a4
    ldrh r4, [r10, #0x74]
    ldrh r1, [r10, #0x76]
    add r2, r7, #1
    mov r3, #0
    mul r1, r4, r1
    mov r1, r1, lsl #1
    bl Graphics_SetupScreen
    mov r7, r0
@L_0210a1a4:
    ldr r0, [r10, #0x7c]
    mov r2, #0
    cmp r0, #0
    ldrne r1, [r10, #0x80]
    cmpne r1, #0
    movne r2, #1
    cmp r2, #0
    beq @L_0210a1e4
    ldrh r4, [r10, #0x88]
    ldrh r1, [r10, #0x8a]
    add r2, r7, #1
    mov r3, #0
    mul r1, r4, r1
    mov r1, r1, lsl #1
    bl Graphics_SetupScreen
    mov r7, r0
@L_0210a1e4:
    ldr r0, [r10, #0x90]
    mov r2, #0
    cmp r0, #0
    ldrne r1, [r10, #0x94]
    cmpne r1, #0
    movne r2, #1
    cmp r2, #0
    beq @L_0210a224
    ldrh r4, [r10, #0x9c]
    ldrh r1, [r10, #0x9e]
    add r2, r7, #1
    mov r3, #0
    mul r1, r4, r1
    mov r1, r1, lsl #1
    bl Graphics_SetupScreen
    mov r7, r0
@L_0210a224:
    ldr r0, [r10, #0xa4]
    mov r2, #0
    cmp r0, #0
    ldrne r1, [r10, #0xa8]
    cmpne r1, #0
    movne r2, #1
    cmp r2, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r4, [r10, #0xb0]
    ldrh r1, [r10, #0xb2]
    add r2, r7, #1
    mov r3, #0
    mul r1, r4, r1
    mov r1, r1, lsl #1
    bl Graphics_SetupScreen
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov000_0210a264(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r5, #1
    mov r4, #0x20
    bl G2S_GetBG0CharPtr
    mov r6, #0
    mov r1, r0
    mov r0, r6
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2S_GetBG0CharPtr
    mov r1, r4
    bl DC_FlushRange
    ldr r1, [r10, #0xd0]
    cmp r1, #0
    beq @L_0210a2b4
    mov r0, r6
    mov r2, r4
    bl Graphics_LoadBGXCharSub
    mov r4, r0
@L_0210a2b4:
    ldr r1, [r10, #0xdc]
    cmp r1, #0
    beq @L_0210a2cc
    mov r2, r4
    mov r0, #0
    bl Graphics_LoadBGXCharSub
@L_0210a2cc:
    mov r9, #0x20
    bl G2S_GetBG1CharPtr
    mov r8, #0
    mov r1, r0
    mov r0, r8
    mov r2, r9
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r9
    bl DC_FlushRange
    add r4, r10, #0x18
    mov r11, #0xc
@L_0210a2fc:
    add r0, r10, r8, lsl #1
    ldrh r0, [r0, #0x10]
    cmp r0, #0
    beq @L_0210a394
    mov r1, r6
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_0210a394
    mla r0, r8, r11, r10
    ldr r1, [r0, #0x13c]
    cmp r1, #0
    beq @L_0210a33c
    mov r0, r5
    mov r2, r9
    bl Graphics_LoadBGXCharSub
    mov r9, r0
@L_0210a33c:
    mov r0, #0x14
    mul r1, r8, r0
    ldr r0, [r4, r1]
    add r7, r4, r1
    cmp r0, #0
    ldrne r0, [r7, #4]
    cmpne r0, #0
    movne r0, r5
    moveq r0, r6
    cmp r0, #0
    beq @L_0210a394
    ldrh r3, [r7, #0xc]
    ldrh r2, [r7, #0xe]
    ldr r0, [r7, #4]
    mov r1, r9
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl GXS_LoadBG1Char
    ldrh r1, [r7, #0xc]
    ldrh r0, [r7, #0xe]
    mul r0, r1, r0
    add r9, r9, r0, lsl #5
@L_0210a394:
    add r8, r8, #1
    cmp r8, #4
    blt @L_0210a2fc
    ldr r1, [r10, #0xe8]
    mov r8, #2
    cmp r1, #0
    mov r4, #0
    beq @L_0210a3c4
    mov r2, r9
    mov r0, #1
    bl Graphics_LoadBGXCharSub
    mov r9, r0
@L_0210a3c4:
    ldr r1, [r10, #0xc4]
    cmp r1, #0
    beq @L_0210a3dc
    mov r2, r9
    mov r0, #1
    bl Graphics_LoadBGXCharSub
@L_0210a3dc:
    mov r6, #0x20
    bl G2S_GetBG2CharPtr
    mov r5, #0
    mov r1, r0
    mov r0, r5
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r6
    bl DC_FlushRange
    mov r7, #0xc
@L_0210a408:
    add r0, r10, r5, lsl #1
    ldrh r0, [r0, #0x10]
    cmp r0, #0
    beq @L_0210a444
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    mlane r0, r5, r7, r10
    ldrne r1, [r0, #0x16c]
    cmpne r1, #0
    beq @L_0210a444
    mov r0, r8
    mov r2, r6
    bl Graphics_LoadBGXCharSub
    mov r6, r0
@L_0210a444:
    add r5, r5, #1
    cmp r5, #4
    blt @L_0210a408
    ldr r1, [r10, #0x10c]
    cmp r1, #0
    beq @L_0210a46c
    mov r2, r6
    mov r0, #2
    bl Graphics_LoadBGXCharSub
    mov r6, r0
@L_0210a46c:
    ldr r1, [r10, #0x118]
    cmp r1, #0
    beq @L_0210a488
    mov r2, r6
    mov r0, #2
    bl Graphics_LoadBGXCharSub
    mov r6, r0
@L_0210a488:
    ldr r1, [r10, #0xf4]
    cmp r1, #0
    beq @L_0210a4a4
    mov r2, r6
    mov r0, #2
    bl Graphics_LoadBGXCharSub
    mov r6, r0
@L_0210a4a4:
    ldr r1, [r10, #0x100]
    cmp r1, #0
    beq @L_0210a4c0
    mov r2, r6
    mov r0, #2
    bl Graphics_LoadBGXCharSub
    mov r6, r0
@L_0210a4c0:
    ldr r0, [r10, #0x68]
    cmp r0, #0
    ldrne r0, [r10, #0x6c]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0210a50c
    ldrh r3, [r10, #0x74]
    ldrh r2, [r10, #0x76]
    ldr r0, [r10, #0x6c]
    mov r1, r6
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl GXS_LoadBG2Char
    ldrh r1, [r10, #0x74]
    ldrh r0, [r10, #0x76]
    mul r0, r1, r0
    add r6, r6, r0, lsl #5
@L_0210a50c:
    ldr r0, [r10, #0x7c]
    cmp r0, #0
    ldrne r0, [r10, #0x80]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0210a558
    ldrh r3, [r10, #0x88]
    ldrh r2, [r10, #0x8a]
    ldr r0, [r10, #0x80]
    mov r1, r6
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl GXS_LoadBG2Char
    ldrh r1, [r10, #0x88]
    ldrh r0, [r10, #0x8a]
    mul r0, r1, r0
    add r6, r6, r0, lsl #5
@L_0210a558:
    ldr r0, [r10, #0x90]
    cmp r0, #0
    ldrne r0, [r10, #0x94]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0210a5a4
    ldrh r3, [r10, #0x9c]
    ldrh r2, [r10, #0x9e]
    ldr r0, [r10, #0x94]
    mov r1, r6
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl GXS_LoadBG2Char
    ldrh r1, [r10, #0x9c]
    ldrh r0, [r10, #0x9e]
    mul r0, r1, r0
    add r6, r6, r0, lsl #5
@L_0210a5a4:
    ldr r0, [r10, #0xa4]
    cmp r0, #0
    ldrne r0, [r10, #0xa8]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0210a5e0
    ldrh r3, [r10, #0xb0]
    ldrh r2, [r10, #0xb2]
    ldr r0, [r10, #0xa8]
    mov r1, r6
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl GXS_LoadBG2Char
@L_0210a5e0:
    bl Graphics_LoadBGPaletteSub
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_0210a5e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r4, [r0, #0x10c]
    mov r10, r1
    cmp r4, #0
    mov r9, r3
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0xc]
    cmp r9, #0x63
    add r8, r4, r0
    mov r0, r2, lsl #0x18
    ldr r4, =0x66666667
    movgt r9, #0x63
    add r10, r10, #2
    mov r5, r0, asr #0x18
    mov r7, #1
    mov r6, #0
    mov r11, #2
@L_0210a634:
    smull r1, r2, r4, r9
    mov r0, r9, lsr #0x1f
    add r2, r0, r2, asr #2
    mov r0, #0xa
    smull r1, r2, r0, r2
    str r7, [sp]
    mov r0, r10, lsl #0x18
    sub r2, r9, r1
    add r1, r8, r2, lsl #3
    str r6, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r11, [sp, #0x10]
    str r11, [sp, #0x14]
    mov r0, #3
    str r0, [sp, #0x18]
    str r1, [sp, #0x1c]
    ldr r0, =gBgMenuManager
    mov r1, r7
    mov r2, r6
    mov r3, r6
    bl CBgMenuManager_AddStatic
    mov r1, r9
    smull r0, r9, r4, r1
    mov r0, r1, lsr #0x1f
    add r9, r0, r9, asr #2
    sub r10, r10, #2
    cmp r9, #0
    bgt @L_0210a634
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_0210a6bc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r4, [r0, #0x118]
    mov r10, r1
    cmp r4, #0
    mov r9, r3
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #0xc]
    ldr r0, =0x270f
    add r8, r4, r1
    cmp r9, r0
    movhi r9, r0
    mov r0, r2, lsl #0x18
    ldr r4, =0xcccccccd
    add r10, r10, #4
    mov r5, r0, asr #0x18
    mov r7, #1
    mov r6, #0
    mov r11, #2
@L_0210a70c:
    umull r0, r1, r9, r4
    mov r1, r1, lsr #3
    mov r0, #0xa
    umull r1, r2, r0, r1
    str r7, [sp]
    mov r0, r10, lsl #0x18
    sub r1, r9, r1
    mov r0, r0, asr #0x18
    str r6, [sp, #4]
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r7, [sp, #0x10]
    str r11, [sp, #0x14]
    add r1, r8, r1, lsl #2
    str r11, [sp, #0x18]
    str r1, [sp, #0x1c]
    ldr r0, =gBgMenuManager
    mov r1, r7
    mov r2, r6
    mov r3, r6
    bl CBgMenuManager_AddStatic
    mov r1, r9
    umull r0, r9, r1, r4
    sub r10, r10, #1
    movs r9, r9, lsr #3
    bne @L_0210a70c
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_0210a788(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r10, r1
    mov r6, r2
    ldr r5, [sp, #0x48]
    ldr r4, =0x3e7
    ldr r1, [sp, #0x4c]
    cmp r5, r4
    ldr r2, =0x3e7
    movgt r5, r4
    cmp r1, r2
    movgt r1, r2
    mov r2, #0xc
    mla r0, r3, r2, r0
    cmp r5, r1
    ldr r3, [r0, #0xb8]
    movgt r5, r1
    cmp r3, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [r3, #0xc]
    mov r0, r5, lsl #5
    add r4, r3, r2
    bl _s32_div_f
    movs r8, r0
    bne @L_0210a7f8
    cmp r5, #0
    movgt r8, #1
@L_0210a7f8:
    mov r0, r6, lsl #0x18
    mov r9, #0
    mov r5, r0, asr #0x18
    add r4, r4, #0x10
    mov r7, #1
    mov r6, r9
    mov r11, #4
@L_0210a814:
    mov r3, r8
    cmp r8, #0
    ble @L_0210a868
    str r7, [sp]
    mov r0, r10, lsl #0x18
    str r6, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r7, [sp, #0x10]
    cmp r8, #8
    movgt r3, #8
    str r7, [sp, #0x14]
    ldr r0, =gBgMenuManager
    sub r3, r4, r3, lsl #1
    str r11, [sp, #0x18]
    str r3, [sp, #0x1c]
    mov r1, r7
    mov r2, r6
    mov r3, r6
    bl CBgMenuManager_AddStatic
@L_0210a868:
    add r9, r9, #1
    cmp r9, #4
    sub r8, r8, #8
    add r10, r10, #1
    blt @L_0210a814
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_0210a88c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x20
    mov r8, r1
    mov r7, r0
    mov r1, r8, lsl #0x1f
    add r0, r8, r8, lsr #31
    mov r3, r1, lsr #0x1b
    mov r1, r0, asr #1
    ldr r12, [r7, #0xdc]
    mov r0, r3, lsl #0x18
    mov r1, r1, lsl #0x1b
    mov r6, r2
    cmp r12, #0
    mov r5, r0, asr #0x18
    mov r4, r1, asr #0x18
    beq @L_0210a90c
    mov r1, #1
    str r1, [sp]
    mov r3, #0
    stmib sp, {r3, r5}
    str r4, [sp, #0xc]
    mov r0, #0x10
    str r0, [sp, #0x10]
    mov r0, #8
    str r0, [sp, #0x14]
    mov r2, #2
    str r2, [sp, #0x18]
    ldr lr, [r12, #0xc]
    ldr r0, =gBgMenuManager
    add r12, r12, lr
    str r12, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210a90c:
    add r1, r8, #0xb
    mov r0, #0xc
    mla r0, r1, r0, r7
    ldr r12, [r0, #0xb8]
    cmp r12, #0
    beq @L_0210a968
    mov r1, #1
    str r1, [sp]
    mov r3, #0
    stmib sp, {r3, r5}
    add r0, r8, #5
    str r4, [sp, #0xc]
    mov r2, #8
    str r2, [sp, #0x10]
    str r2, [sp, #0x14]
    and r0, r0, #0xff
    str r0, [sp, #0x18]
    ldr r2, [r12, #0xc]
    ldr r0, =gBgMenuManager
    add r12, r12, r2
    mov r2, r1
    str r12, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210a968:
    add r1, r8, #0xf
    mov r0, #0xc
    mla r0, r1, r0, r7
    ldr r12, [r0, #0xb8]
    cmp r12, #0
    beq @L_0210a9c0
    mov r1, #1
    mov r2, #0
    stmia sp, {r1, r2, r5}
    add r0, r8, #9
    str r4, [sp, #0xc]
    mov r3, #8
    str r3, [sp, #0x10]
    str r3, [sp, #0x14]
    and r0, r0, #0xff
    str r0, [sp, #0x18]
    ldr r3, [r12, #0xc]
    ldr r0, =gBgMenuManager
    add r12, r12, r3
    mov r3, r2
    str r12, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210a9c0:
    mov r0, #0x14
    mul r0, r8, r0
    add r1, r7, #0x18
    ldr lr, [r1, r0]
    add r12, r1, r0
    cmp lr, #0
    ldrne r0, [r12, #4]
    mov r1, #0
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210aa40
    mov r1, #1
    add r0, r5, #9
    mov r0, r0, lsl #0x18
    str r1, [sp]
    mov r3, #0
    str r3, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    ldrh r8, [r12, #0xc]
    ldr r0, =gBgMenuManager
    mov r2, r1
    and r8, r8, #0xff
    str r8, [sp, #0x10]
    ldrh r8, [r12, #0xe]
    and r8, r8, #0xff
    str r8, [sp, #0x14]
    str r3, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210aa40:
    ldrb r3, [r6, #0xaa]
    mov r0, r7
    add r1, r5, #0xb
    add r2, r4, #2
    bl func_ov000_0210a5e8
    ldr r2, [r7, #0xe8]
    cmp r2, #0
    beq @L_0210aac0
    mov r1, #1
    add r0, r5, #9
    mov r0, r0, lsl #0x18
    add r3, r4, #4
    mov r8, r3, lsl #0x18
    str r1, [sp]
    mov r3, #0
    str r3, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r8, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #7
    str r0, [sp, #0x10]
    mov r0, #2
    str r0, [sp, #0x14]
    mov r0, #4
    str r0, [sp, #0x18]
    ldr r8, [r2, #0xc]
    ldr r0, =gBgMenuManager
    add r8, r2, r8
    mov r2, r1
    str r8, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210aac0:
    ldrsh r2, [r6, #0x94]
    mov r0, r7
    add r1, r5, #0xb
    str r2, [sp]
    ldrsh r8, [r6, #0xd0]
    add r2, r4, #4
    mov r3, #5
    str r8, [sp, #4]
    bl func_ov000_0210a788
    ldrsh r2, [r6, #0x96]
    mov r0, r7
    add r1, r5, #0xb
    str r2, [sp]
    ldrsh r8, [r6, #0xd2]
    add r2, r4, #5
    mov r3, #6
    str r8, [sp, #4]
    bl func_ov000_0210a788
    ldr r0, =data_020e88a0
    mov r1, r6
    bl _ZN11MatchEngine13func_0207d308EPh
    add r1, r5, #0xa
    add r2, r4, #6
    mov r3, r0
    mov r0, r7
    bl func_ov000_0210a6bc
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov000_0210ab38(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x20
    ldr r7, =gBgMenuManager
    mov r6, #1
    mov r5, #0
    mov r4, r0
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl CBgMenuManager_DeleteAll
    ldr r3, [r4, #0xd0]
    cmp r3, #0
    beq @L_0210abb0
    str r6, [sp]
    str r5, [sp, #4]
    str r5, [sp, #8]
    str r5, [sp, #0xc]
    mov r0, #0x20
    str r0, [sp, #0x10]
    mov r0, #0x18
    str r0, [sp, #0x14]
    mov r2, #2
    str r2, [sp, #0x18]
    ldr r1, [r3, #0xc]
    mov r0, r7
    add r7, r3, r1
    mov r1, r6
    mov r3, r5
    str r7, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210abb0:
    mov r6, #0
@L_0210abb4:
    add r0, r4, r6, lsl #1
    ldrh r0, [r0, #0x10]
    cmp r0, #0
    beq @L_0210abe0
    mov r1, r5
    bl func_ov015_02130b14
    movs r2, r0
    beq @L_0210abe0
    mov r0, r4
    mov r1, r6
    bl func_ov000_0210a88c
@L_0210abe0:
    add r6, r6, #1
    cmp r6, #4
    blt @L_0210abb4
    ldr r5, [r4, #0xc4]
    cmp r5, #0
    beq @L_0210ac40
    mov r1, #1
    str r1, [sp]
    mov r3, #0
    str r3, [sp, #4]
    str r3, [sp, #8]
    mov r0, #0x10
    str r0, [sp, #0xc]
    mov r0, #0x20
    str r0, [sp, #0x10]
    mov r0, #7
    str r0, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r2, [r5, #0xc]
    ldr r0, =gBgMenuManager
    add r5, r5, r2
    mov r2, r1
    str r5, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210ac40:
    ldr r5, [r4, #0x68]
    mov r1, #0
    cmp r5, #0
    ldrne r0, [r4, #0x6c]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210aca8
    mov r2, #0
    mov r1, #1
    stmia sp, {r1, r2}
    mov r0, #3
    str r0, [sp, #8]
    mov r0, #0x11
    str r0, [sp, #0xc]
    ldrh r6, [r4, #0x74]
    ldr r0, =gBgMenuManager
    mov r3, r2
    and r6, r6, #0xff
    str r6, [sp, #0x10]
    ldrh r6, [r4, #0x76]
    and r6, r6, #0xff
    str r6, [sp, #0x14]
    str r2, [sp, #0x18]
    str r5, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210aca8:
    ldr r5, [r4, #0x7c]
    mov r1, #0
    cmp r5, #0
    ldrne r0, [r4, #0x80]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210ad10
    mov r2, #0
    mov r1, #1
    stmia sp, {r1, r2}
    mov r0, #0x13
    str r0, [sp, #8]
    mov r0, #0x11
    str r0, [sp, #0xc]
    ldrh r6, [r4, #0x88]
    ldr r0, =gBgMenuManager
    mov r3, r2
    and r6, r6, #0xff
    str r6, [sp, #0x10]
    ldrh r6, [r4, #0x8a]
    and r6, r6, #0xff
    str r6, [sp, #0x14]
    str r2, [sp, #0x18]
    str r5, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210ad10:
    ldr r5, [r4, #0x90]
    mov r1, #0
    cmp r5, #0
    ldrne r0, [r4, #0x94]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    beq @L_0210ad78
    mov r2, #0
    mov r1, #1
    stmia sp, {r1, r2}
    mov r0, #0xc
    str r0, [sp, #8]
    mov r0, #0x13
    str r0, [sp, #0xc]
    ldrh r6, [r4, #0x9c]
    ldr r0, =gBgMenuManager
    mov r3, r2
    and r6, r6, #0xff
    str r6, [sp, #0x10]
    ldrh r6, [r4, #0x9e]
    and r6, r6, #0xff
    str r6, [sp, #0x14]
    str r2, [sp, #0x18]
    str r5, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_0210ad78:
    ldr r5, [r4, #0xa4]
    mov r1, #0
    cmp r5, #0
    ldrne r0, [r4, #0xa8]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r3, [r4, #0xb0]
    mov r1, #1
    mov r2, #0
    rsb r0, r3, #0x20
    add r0, r0, r0, lsr #31
    mov r0, r0, lsl #0x17
    stmia sp, {r1, r2}
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, #0x14
    str r0, [sp, #0xc]
    and r0, r3, #0xff
    str r0, [sp, #0x10]
    ldrh r4, [r4, #0xb2]
    ldr r0, =gBgMenuManager
    mov r3, r2
    and r4, r4, #0xff
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r5, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov000_0210adfc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if ((*(s32 *)(data_020c4ab4 + 0xC4) == 0 || *(s32 *)(data_020c4ab4 + 0xC4) == 0x8D))
        return 0;
    _ZN13ScreenManager12SetNextSceneEii(*(s32 *)(arg0 + 0x4), 1, *(s32 *)(data_020c4ab4 + 0xC4), arg3);
    return 1;
}

extern "C" s32 func_ov000_0210ae34(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    s32 v3;
    s32 v9;
    u8 *t0;
    v0 = func_ov000_0210adfc(arg0, arg1, arg2, arg3);
    if (v0 != 0) {
        *(s32 *)(arg0 + 0x8) = 6;
        return 6;
    } else {
        t0 = *(u8 * *)(arg0 + 0x4);
        ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x28))(t0, 1);
        func_ov015_02135440(6);
        *(u8 *)(((u8 *)&data_020c4ab4) + 0x70) = 0;
        *(u8 *)(((u8 *)&data_020c4ab4) + 0x71) = 0;
        v3 = func_ov015_021319bc((s32)((u8 *)&data_020c4ab4));
        _ZN11MatchEngine13func_0207c6b4Eiii((s32)((u8 *)&data_020e88a0), v3, 0, 0);
        *(s32 *)(arg0 + 0x8) = 0;
        CBgMenuManager_Init((s32)((u8 *)&gBgMenuManager), 1);
        MI_CpuFill8((s32)(arg0 + 0xB8), 0, 0x138);
        func_ov000_02109518((s32)arg0);
        func_ov000_02109610((s32)arg0);
        v9 = func_ov000_02109b60((s32)arg0, 1);
        return v9;
    }
}

extern "C" asm void func_ov000_0210aee4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_0210af14
    ldmia sp!, {r4, pc}
    b @L_0210af94
    b @L_0210afb0
    b @L_0210afd8
@L_0210af14:
    add r0, r4, #0xb8
    mov r1, #0x1a
    bl Archive_TryFinalize
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_0210af40
    cmp r0, #2
    beq @L_0210af58
    ldmia sp!, {r4, pc}
@L_0210af40:
    mov r0, r4
    bl func_ov000_02109e18
    mov r0, r4
    mov r1, #2
    bl func_ov000_02109b60
    ldmia sp!, {r4, pc}
@L_0210af58:
    mov r0, r4
    bl func_ov000_021095b0
    add r0, r4, #0x1cc
    bl Archive_Deallocate
    add r0, r4, #0x1d8
    bl Archive_Deallocate
    add r0, r4, #0x1e4
    bl Archive_Deallocate
    mov r0, r4
    bl func_ov000_02109aa0
    mov r0, r4
    bl func_ov000_02109e8c
    mov r0, #2
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_0210af94:
    mov r1, #4
    str r1, [r4, #8]
    bl func_ov000_0210ab38
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
@L_0210afb0:
    mov r0, r4
    bl func_ov000_0210adfc
    cmp r0, #0
    beq @L_0210afd8
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r0, #5
    str r0, [r4, #8]
@L_0210afd8:
    ldr r0, =gBgMenuManager
    mov r1, #1
    bl CBgMenuManager_UpdateGraphics
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov000_0210afec(u8 *arg0)
{
    s32 r1;
    s32 v1;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            func_ov000_0210a264((s32)arg0, r1);
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 4:
        case 5:
            v1 = CBgMenuManager_Draw((u8 *)((u8 *)&gBgMenuManager), 1);
            return v1;
    }
}

extern "C" s32 func_ov000_0210b034(u8 *arg0)
{
    s32 v5;
    u8 *t0;
    s32 t1;
    if (*(s32 *)(arg0 + 0x8) == 6)
        return *(s32 *)(arg0 + 0x8);
    Archive_Close((arg0 + 0xB8), 0x1A);
    func_ov000_02109e64((s32)arg0);
    func_ov015_02133e8c((arg0 + 0x18), 8);
    CBgMenuManager_Finalize((s32)gBgMenuManager, 1);
    func_ov015_02135e10();
    t0 = *(u8 * *)(arg0 + 0x4);
    t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC);
    v5 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC))(t0, 1, t1);
    return v5;
}

extern "C" s32 func_ov000_0210b098(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" u8 func_ov000_0210b0ac(u8 *arg0, S0210b0ac arg1)
{
    if (arg1.b != *(s32 *)(arg0 + 4))
        arg0[0xC] = 1;
    *(S0210b0ac *)arg0 = arg1;
    return arg0[0xC];
}

extern "C" asm s32 func_ov000_0210b0e0(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_020854a8
    cmp r0, #0
    bne @L_0210b120
    mov r0, r5
    mov r1, r4
    bl func_0208539c
    cmp r0, #0
    bne @L_0210b120
    mov r0, r5
    mov r1, r4
    bl func_020853cc
    cmp r0, #0
    beq @L_0210b164
@L_0210b120:
    add r0, r5, #0x1000
    ldr r0, [r0, #0x8ec]
    tst r0, #1
    beq @L_0210b164
    ldr r1, [r5, #0xc]
    mov r0, #0x1800
    umull r3, r2, r1, r0
    mov r1, r1, asr #0x1f
    mla r2, r1, r0, r2
    adds r3, r3, #0x800
    adc r2, r2, #0
    mov r0, r3, lsr #0xc
    ldr r1, =0x555
    orr r0, r0, r2, lsl #20
    cmp r0, r1
    subge r0, r1, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_0210b164:
    ldr r0, [r5, #0xc]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov000_0210b170(s32 arg0, u8 *arg1, s32 arg2)
{
    s32 r4;
    s32 r5;
    s32 v0;
    s32 t0;
    s32 t1;
    t0 = *(s32 *)(arg1 + 0xA0);
    t1 = (*(s32 *)(arg1 + 0xA0) + arg2);
    v0 = func_ov000_0210b0e0(arg0, (s32)arg1, arg2, t0);
    arg0 = v0;
    r4 = t1;
    r5 = arg2;
    if (r4 < 0) {
        r4 = 0;
    }
    if (r5 > 0) {
        if (r4 >= arg0) {
            r4 = arg0;
        }
    }
    return r4;
}

extern "C" s32 func_ov000_0210b1a4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    s32 t;
    if (arg3 > arg5) {
        t = arg3;
        arg3 = arg5;
        arg5 = t;
    }
    if (arg4 > arg6) {
        t = arg4;
        arg4 = arg6;
        arg6 = t;
    }
    if (arg1 >= arg3 && arg2 >= arg4 && arg1 <= arg5 && arg2 <= arg6)
        return 1;
    return 0;
}

extern "C" asm void func_ov000_0210b1f8(void)
{
    stmdb sp!, {r4, lr}
    mov r0, r1, asr #4
    mov r4, r0, lsl #1
    add r0, r4, #1
    mov r1, r0, lsl #1
    ldr r12, =FX_SinCosTable_
    mov r0, r4, lsl #1
    ldrsh r1, [r12, r1]
    ldrsh r0, [r12, r0]
    mov r12, #0
    smull r4, lr, r1, r2
    adds r4, r4, #0x800
    smull r2, r1, r0, r2
    adc r0, lr, #0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #20
    adds r2, r2, #0x800
    adc r0, r1, #0
    mov r1, r2, lsr #0xc
    stmia r3, {r4, r12}
    orr r1, r1, r0, lsl #20
    str r1, [r3, #8]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov000_0210b258(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r0, r2
    add r2, sp, #0
    mov r5, r3
    ldr r4, [sp, #0x18]
    bl VEC_Subtract
    ldr r0, [sp, #8]
    ldr r1, [sp]
    bl FX_Atan2Idx
    mov r0, r0, asr #4
    mov r3, r0, lsl #1
    add r0, r3, #1
    ldr r2, =FX_SinCosTable_
    mov r0, r0, lsl #1
    ldrsh r1, [r2, r0]
    mov r0, r3, lsl #1
    ldrsh r0, [r2, r0]
    smull r2, r3, r1, r5
    adds r12, r2, #0x800
    smull r2, r1, r0, r5
    adc r0, r3, #0
    mov r3, r12, lsr #0xc
    orr r3, r3, r0, lsl #20
    adds r2, r2, #0x800
    str r3, [r4]
    mov r3, #0
    adc r0, r1, #0
    mov r1, r2, lsr #0xc
    str r3, [r4, #4]
    orr r1, r1, r0, lsl #20
    str r1, [r4, #8]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, pc}
}

extern "C" s32 func_ov000_0210b2e4(s32 arg0, u8 *arg1)
{
    s32 v0;
    s32 t0;
    u16 t1;
    if (*(u8 *)(arg1 + 0x69) == 0) {
        if (*(u8 *)(((u8 *)(arg0 + 0x1000)) + 0x41C) == 0)
            return arg0;
    }
    t0 = ((u16)(*(u16 *)(arg1 + 0x6A) + *(s32 *)(((u8 *)(arg0 + 0x1000)) + 0x414)));
    t1 = *(u16 *)(arg1 + 0x6A);
    v0 = func_ov015_02130e28(t0, t1);
    *(u8 *)(arg1 + 0x64) = v0;
    *(u8 *)(arg1 + 0x69) = 0;
    return v0;
}

extern "C" asm void func_ov000_0210b330(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x14
    mov r8, r2
    ldr r2, [sp, #0x3c]
    add r5, sp, #8
    mov r4, #0
    mov r10, r0
    mov r9, r1
    mov r7, r3
    str r4, [r5]
    str r4, [r5, #4]
    str r4, [r5, #8]
    cmp r2, #0
    ldr r6, [sp, #0x38]
    beq @L_0210b378
    mov r0, r8
    mov r1, r7
    bl func_02099a2c
@L_0210b378:
    ldrb r5, [sp, #0x40]
    add r4, sp, #8
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r7
    stmia sp, {r4, r5}
    bl func_020854d8
    mov r5, r0
    tst r5, #1
    bne @L_0210b3d0
    cmp r6, #0
    beq @L_0210b3c4
    ldr r0, [sp, #8]
    str r0, [r6]
    ldr r0, [sp, #0xc]
    str r0, [r6, #4]
    ldr r0, [sp, #0x10]
    str r0, [r6, #8]
@L_0210b3c4:
    add sp, sp, #0x14
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0210b3d0:
    ldr r1, [sp, #8]
    mov r0, r10
    str r1, [r7]
    ldr r2, [sp, #0xc]
    mov r1, r9
    str r2, [r7, #4]
    ldr r3, [sp, #0x10]
    mov r2, r8
    str r3, [r7, #8]
    mov r3, r7
    str r4, [sp]
    bl func_ov000_0210b474
    tst r0, #1
    bne @L_0210b448
    ldrb r1, [sp, #0x40]
    cmp r1, #0
    addne r1, r10, #0x1000
    movne r2, #1
    strneb r2, [r1, #0x8f8]
    cmp r6, #0
    addeq sp, sp, #0x14
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [sp, #8]
    str r1, [r6]
    ldr r1, [sp, #0xc]
    str r1, [r6, #4]
    ldr r1, [sp, #0x10]
    add sp, sp, #0x14
    str r1, [r6, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0210b448:
    cmp r6, #0
    beq @L_0210b468
    ldr r1, [r7]
    str r1, [r6]
    ldr r1, [r7, #4]
    str r1, [r6, #4]
    ldr r1, [r7, #8]
    str r1, [r6, #8]
@L_0210b468:
    orr r0, r0, r5
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov000_0210b474(s32 arg0, u8 *arg1, s32 arg2, u8 *arg3, u8 *arg4)
{
    s32 local[3];
    u8 *r4;
    s32 r5;
    u8 *r8;
    s32 r11;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v6;
    s32 v7;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    r5 = 0;
    v0 = func_0208530c(arg0, 0, arg2, (s32)arg3);
    v1 = func_02085444(arg0, (s32)arg1);
    r8 = (u8 *)arg2;
    r4 = (u8 *)v0;
    if (v1 != 0) {
        r11 = (s32)((u8 *)local);
        do {
            v2 = func_02085374(arg0, (s32)r4);
            if ((((((v2 != 0 && (v3 = func_02084dd8((s32)r4), v3 != 0)) && (s32)arg1 != (s32)r4) && (v4 = func_02085444(arg0, (s32)r4), v4 != 0)) && (VEC_Subtract((s32)arg3, (s32)(r4 + 0x84), r11), v6 = func_02099a94((s32)arg3, (s32)(r4 + 0x84)), arg2 = *(s32 *)(arg1 + 0x9C), v6 < (arg2 + *(s32 *)(r4 + 0x9C)))) && (v7 = func_02099a94((s32)r8, (s32)(r4 + 0x84), arg2), v7 >= (*(s32 *)(arg1 + 0x9C) + *(s32 *)(r4 + 0x9C))))) {
                t0 = *(s32 *)(r8);
                *(s32 *)(arg4) = t0;
                t1 = *(s32 *)(r8 + 0x4);
                *(s32 *)(arg4 + 0x4) = t1;
                t2 = *(s32 *)(r8 + 0x8);
                *(s32 *)(arg4 + 0x8) = t2;
                return 2;
            }
            r5 = (r5 + 1);
            r4 = (u8 *)(r4 + 0xD4);
        } while (r5 < 0x18);
    }
    t3 = *(s32 *)(arg3);
    *(s32 *)(arg4) = t3;
    t4 = *(s32 *)(arg3 + 0x4);
    *(s32 *)(arg4 + 0x4) = t4;
    t5 = *(s32 *)(arg3 + 0x8);
    *(s32 *)(arg4 + 0x8) = t5;
    return 1;
}

extern "C" s32 func_ov000_0210b59c(s32 arg0, u8 *arg1)
{
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v2;
    v0 = func_020858b0(arg0, (s32)arg1);
    if (v0 != 0)
        return v0;
    if (*(u8 *)(arg1 + 0x2C) == 0)
        return *(u8 *)(arg1 + 0x2C);
    r5 = arg0;
    arg0 = *(u8 *)(arg1 + 0x2C);
    switch (arg0) {
        default:
            return arg0;
        case 1:
            v1 = func_ov000_0210b6b4(r5, (s32)arg1);
            return v1;
        case 2:
            v2 = func_ov000_0210b8a4(r5, (s32)arg1);
            return v2;
    }
}

extern "C" asm void func_ov000_0210b5f4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    ldrb r7, [r5, #0x2d]
    mov r6, r0
    mov r4, #0
    cmp r7, #4
    addls pc, pc, r7, lsl #2
    b @L_0210b68c
    b @L_0210b68c
    b @L_0210b684
    b @L_0210b674
    b @L_0210b67c
    b @L_0210b628
@L_0210b628:
    ldr r0, =data_020d9a04
    bl _ZN13ScriptManager13func_0206148cEv
    sub r1, r7, #4
    mov r2, #1
    tst r0, r2, lsl r1
    beq @L_0210b660
    ldrb r1, [r5, #0x65]
    ldr r0, =0xc350
    cmp r1, r0
    beq @L_0210b690
    mov r0, r6
    mov r1, r5
    bl func_02085828
    b @L_0210b690
@L_0210b660:
    mov r0, r6
    mov r1, r5
    bl func_ov000_0210bbd0
@L_0210b66c:
    mov r4, r0
    b @L_0210b690
@L_0210b674:
    bl func_ov000_0210b954
    b @L_0210b66c
@L_0210b67c:
    bl func_ov000_0210bd50
    b @L_0210b66c
@L_0210b684:
    bl func_ov000_0210bf0c
    b @L_0210b66c
@L_0210b68c:
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0210b690:
    cmp r4, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r5
    mov r2, #1
    bl func_020858c8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov000_0210b6b4(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x18
    mov r6, r1
    mov r7, r0
    add r0, r6, #0x84
    add r1, r6, #0x40
    bl func_02099a94
    mov r0, #0xa
    bl Random_RandB
    ldr r1, [r6, #0x50]
    add r2, r0, r0, lsl #3
    str r1, [sp]
    ldr r0, [r6, #0x54]
    add r5, r2, #0x5a
    str r0, [sp, #4]
    ldr r1, [r6, #0x58]
    mov r0, r7
    str r1, [sp, #8]
    ldr r1, [r6, #0x84]
    ldr r2, [r6, #0x8c]
    ldr r3, [r6, #0x4c]
    bl func_ov000_0210b1a4
    cmp r0, #0
    bne @L_0210b750
    ldr r2, [r6, #0x4c]
    ldr r0, [r6, #0x54]
    mov r1, #0
    add r0, r2, r0
    add r0, r0, r0, lsr #31
    mov r0, r0, asr #1
    str r0, [sp, #0xc]
    str r1, [sp, #0x10]
    ldr r1, [r6, #0x50]
    ldr r0, [r6, #0x58]
    add r0, r1, r0
    add r0, r0, r0, lsr #31
    mov r0, r0, asr #1
    str r0, [sp, #0x14]
    b @L_0210b83c
@L_0210b750:
    mov r4, #2
    mov r0, r4
    bl Random_RandB
    adds r0, r0, #1
    mov r0, r4
    beq @L_0210b788
    bl Random_RandB
    add r0, r0, #1
    mov r0, r0, lsl #0xc
    bl _ffltu
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_0210b7a0
@L_0210b788:
    bl Random_RandB
    add r0, r0, #1
    mov r0, r0, lsl #0xc
    bl _ffltu
    mov r1, #0x3f000000
    bl _fsub
@L_0210b7a0:
    bl _ffix
    mov r4, r0
    mov r0, #8
    bl Random_RandB
    ldr r1, =0xaaa
    mov r2, r4, asr #0x1f
    umull r12, r3, r4, r1
    mla r3, r2, r1, r3
    adds r2, r12, #0x800
    adc r1, r3, #0
    mov r2, r2, lsr #0xc
    add r4, sp, #0xc
    mov r0, r0, lsl #0x1d
    orr r2, r2, r1, lsl #20
    mov r1, r0, lsr #0x10
    mov r0, r7
    mov r3, r4
    bl func_ov000_0210b1f8
    mov r0, r4
    mov r2, r4
    add r1, r6, #0x84
    bl VEC_Add
    ldr r1, [r6, #0x50]
    mov r0, r7
    str r1, [sp]
    ldr r1, [r6, #0x54]
    str r1, [sp, #4]
    ldr r1, [r6, #0x58]
    str r1, [sp, #8]
    ldr r1, [sp, #0xc]
    ldr r2, [sp, #0x14]
    ldr r3, [r6, #0x4c]
    bl func_ov000_0210b1a4
    cmp r0, #0
    moveq r0, #1
    addeq sp, sp, #0x18
    streqb r0, [r6, #0x2d]
    streqh r5, [r6, #0x2e]
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_0210b83c:
    mov r0, r6
    mov r1, #0x55
    mov r2, #1
    bl func_02084d50
    ldr r0, [sp, #0xc]
    add r1, sp, #0xc
    str r0, [r6, #0x30]
    ldr r2, [sp, #0x10]
    add r0, r6, #0x84
    str r2, [r6, #0x34]
    ldr r3, [sp, #0x14]
    mov r2, #2
    str r3, [r6, #0x38]
    strb r2, [r6, #0x2d]
    strh r5, [r6, #0x2e]
    bl func_02099a94
    sub r1, r0, #0x11
    ldr r2, =0x78787879
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #3
    str r3, [r6, #0x3c]
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov000_0210b8a4(...)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r4, #0
    mov r5, r1
    mov r1, r4
    mov r6, r0
    bl func_02085bb4
    cmp r5, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r1, [r5, #0x5c]
    add r0, r6, #0x18
    bl func_02085228
    cmp r0, #0
    addle sp, sp, #0xc
    ldmleia sp!, {r3, r4, r5, r6, pc}
    sub r2, r0, #1
    mov r1, #0xc
    mla r1, r2, r1, r6
    mov r2, #0x55
    add r1, r1, #0x1000
    ldr r3, [r1, #0x8b8]
    mul r2, r0, r2
    str r3, [sp]
    str r4, [sp, #4]
    ldr r0, [r1, #0x8bc]
    add r1, sp, #0
    sub r2, r0, r2
    add r0, r5, #0x84
    str r2, [sp, #8]
    bl func_02099a94
    sub r0, r0, #0x11
    cmp r0, #0x800
    movge r0, #3
    strgeb r0, [r5, #0x2d]
    strgeh r4, [r5, #0x2e]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" u8 func_ov000_0210b93c(s32 arg0)
{
    return *(u8 *)(((u8 *)(arg0 + 0x1000)) + 0x8F8);
}

extern "C" s32 func_ov000_0210b948(s32 arg0, u8 arg1)
{
    *(u8 *)(((u8 *)(arg0 + 0x1000)) + 0x8F8) = arg1;
    return (arg0 + 0x1000);
}

extern "C" asm void func_ov000_0210b954(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    movs r9, r1
    mov r10, r0
    mov r7, #1
    mov r8, #0
    addeq sp, sp, #0x28
    moveq r0, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r9, #0x30]
    add r1, sp, #0x1c
    str r0, [sp, #0x1c]
    ldr r2, [r9, #0x34]
    add r0, r9, #0x84
    str r2, [sp, #0x20]
    ldr r2, [r9, #0x38]
    str r2, [sp, #0x24]
    bl func_02099a94
    sub r4, r0, #0x11
    add r1, r10, #0x1000
    ldr r2, [r9, #0xa0]
    ldr r0, [r1, #0x8e8]
    cmp r4, #0x11
    mul r3, r2, r0
    addle sp, sp, #0x28
    movle r0, r7
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r2, sp, #0x1c
    cmp r4, r3
    movlt r3, r4
    mov r4, r2
    mov r0, r10
    add r1, r9, #0x84
    str r4, [sp]
    bl func_ov000_0210b258
    mov r0, r4
    mov r2, r0
    add r1, r9, #0x84
    bl VEC_Add
    add r0, r10, #0x1000
    mov r1, #0
    strb r1, [r0, #0x8f8]
    ldrh r1, [r9, #0x6a]
    strh r1, [sp, #0xc]
    ldr r0, [r0, #0x8ec]
    tst r0, #1
    beq @L_0210bad4
    ldrh r0, [r9, #0x20]
    cmp r0, #1
    bne @L_0210bad4
    ldr r1, [sp, #0x20]
    ldr r0, [r9, #0x88]
    ldr r6, [sp, #0x1c]
    ldr r2, [r9, #0x84]
    sub r0, r1, r0
    add r5, r0, r0, lsr #31
    sub r2, r6, r2
    add r4, r2, r2, lsr #31
    ldr r3, [sp, #0x24]
    ldr r0, [r9, #0x8c]
    sub r2, r6, r4, asr #1
    sub r0, r3, r0
    add r6, r0, r0, lsr #31
    sub r0, r3, r6, asr #1
    sub r1, r1, r5, asr #1
    str r2, [sp, #0x1c]
    str r1, [sp, #0x20]
    str r0, [sp, #0x24]
    add r11, sp, #0x10
    str r11, [sp]
    add r0, sp, #0xc
    str r0, [sp, #4]
    mov r0, r10
    mov r1, r9
    add r3, sp, #0x1c
    str r7, [sp, #8]
    add r2, r9, #0x84
    bl func_ov000_0210b330
    ldr r3, [sp, #0x1c]
    ldr r2, [sp, #0x20]
    ldr r1, [sp, #0x24]
    add r3, r3, r4, asr #1
    add r2, r2, r5, asr #1
    add r1, r1, r6, asr #1
    str r3, [sp, #0x1c]
    str r2, [sp, #0x20]
    str r1, [sp, #0x24]
    tst r0, #1
    beq @L_0210bafc
    str r11, [sp]
    add r0, sp, #0xc
    str r0, [sp, #4]
    mov r0, r10
    mov r1, r9
    add r3, sp, #0x1c
    b @L_0210baf0
@L_0210bad4:
    add r1, sp, #0x10
    str r1, [sp]
    add r0, sp, #0xc
    str r0, [sp, #4]
    add r3, sp, #0x1c
    mov r0, r10
    mov r1, r9
@L_0210baf0:
    add r2, r9, #0x84
    str r7, [sp, #8]
    bl func_ov000_0210b330
@L_0210bafc:
    tst r0, #1
    moveq r8, #1
    moveq r4, #0
    beq @L_0210bb1c
    add r1, sp, #0x10
    add r0, r9, #0x84
    bl func_02099a94
    mov r4, r0
@L_0210bb1c:
    ldr r2, [r9, #0x84]
    ldr r1, [r9, #0x88]
    ldr r0, [r9, #0x8c]
    str r2, [r9, #0x78]
    str r1, [r9, #0x7c]
    str r0, [r9, #0x80]
    ldr r1, [sp, #0x10]
    mov r0, r9
    str r1, [r9, #0x84]
    ldr r1, [sp, #0x14]
    str r1, [r9, #0x88]
    ldr r1, [sp, #0x18]
    str r1, [r9, #0x8c]
    ldrh r1, [sp, #0xc]
    bl func_02084d7c
    mov r0, r10
    mov r1, r9
    bl func_020854a8
    cmp r0, #0
    beq @L_0210bb8c
    mov r0, #0
    str r0, [sp]
    ldrh r3, [r9, #0x6a]
    add r0, r10, #0x420
    ldr r1, [r9, #0x84]
    ldr r2, [r9, #0x8c]
    add r0, r0, #0x1000
    bl func_02084e70
@L_0210bb8c:
    mov r0, r10
    mov r1, r9
    mov r2, r4
    bl func_020857ac
    ldrb r0, [r9, #0x2c]
    cmp r0, #1
    bne @L_0210bbc4
    ldr r1, [r9, #0x3c]
    sub r0, r1, #1
    cmp r1, #0
    str r0, [r9, #0x3c]
    addlt sp, sp, #0x28
    movlt r0, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210bbc4:
    mov r0, r8
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_0210bbd0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x28
    movs r6, r1
    mov r7, r0
    addeq sp, sp, #0x28
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r6, #0x30
    add r3, sp, #0x1c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, r3
    add r0, r6, #0x84
    bl func_02099a94
    sub r4, r0, #0x11
    add r1, r7, #0x1000
    cmp r4, #0x11
    ldr r2, [r6, #0xa0]
    ldr r0, [r1, #0x8e8]
    addle sp, sp, #0x28
    mul r3, r2, r0
    movle r0, #1
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r4, r3
    movlt r3, r4
    add r4, sp, #0x1c
    mov r0, r7
    mov r2, r4
    add r1, r6, #0x84
    str r4, [sp]
    bl func_ov000_0210b258
    mov r0, r4
    mov r2, r4
    add r1, r6, #0x84
    bl VEC_Add
    add r0, r7, #0x1000
    mov r5, #0
    strb r5, [r0, #0x8f8]
    ldrh r0, [r6, #0x6a]
    add r8, sp, #0x10
    mov r3, r4
    strh r0, [sp, #0xc]
    add r0, sp, #0xc
    str r8, [sp]
    str r0, [sp, #4]
    mov r0, #1
    str r0, [sp, #8]
    mov r0, r7
    mov r1, r6
    add r2, r6, #0x84
    bl func_ov000_0210b330
    ands r4, r0, #1
    beq @L_0210bcb4
    mov r1, r8
    add r0, r6, #0x84
    bl func_02099a94
    mov r5, r0
@L_0210bcb4:
    ldr r2, [r6, #0x84]
    ldr r1, [r6, #0x88]
    ldr r0, [r6, #0x8c]
    str r2, [r6, #0x78]
    str r1, [r6, #0x7c]
    str r0, [r6, #0x80]
    ldr r1, [sp, #0x10]
    mov r0, r6
    str r1, [r6, #0x84]
    ldr r1, [sp, #0x14]
    str r1, [r6, #0x88]
    ldr r1, [sp, #0x18]
    str r1, [r6, #0x8c]
    ldrh r1, [sp, #0xc]
    bl func_02084d7c
    mov r0, r7
    mov r1, r6
    bl func_020854a8
    cmp r0, #0
    beq @L_0210bd24
    mov r0, #0
    str r0, [sp]
    ldrh r3, [r6, #0x6a]
    add r0, r7, #0x420
    ldr r1, [r6, #0x84]
    ldr r2, [r6, #0x8c]
    add r0, r0, #0x1000
    bl func_02084e70
@L_0210bd24:
    cmp r4, #0
    mov r0, r7
    mov r1, r6
    bne @L_0210bd3c
    bl func_02085828
    b @L_0210bd44
@L_0210bd3c:
    mov r2, r5
    bl func_020857ac
@L_0210bd44:
    mov r0, #0
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov000_0210bd50(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x28
    mov r6, #0
    mov r7, r1
    mov r1, r6
    mov r8, r0
    bl func_02085bb4
    cmp r7, #0
    addeq sp, sp, #0x28
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r7, #0x5c]
    add r0, r8, #0x18
    bl func_02085228
    cmp r0, #0
    addle sp, sp, #0x28
    movle r0, #1
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    sub r2, r0, #1
    mov r1, #0xc
    mla r1, r2, r1, r8
    mov r2, #0x55
    add r1, r1, #0x1000
    ldr r3, [r1, #0x8b8]
    mul r2, r0, r2
    str r3, [sp, #0x1c]
    str r6, [sp, #0x20]
    ldr r0, [r1, #0x8bc]
    add r1, sp, #0x1c
    sub r2, r0, r2
    add r0, r7, #0x84
    str r2, [sp, #0x24]
    bl func_02099a94
    ldr r1, [sp, #0x1c]
    sub r4, r0, #0x11
    cmp r1, #0
    ldreq r0, [sp, #0x24]
    cmpeq r0, #0
    beq @L_0210bdf4
    cmp r4, #0x11
    bge @L_0210be00
@L_0210bdf4:
    add sp, sp, #0x28
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0210be00:
    mov r0, r8
    mov r1, r7
    bl func_ov000_0210b0e0
    add r1, r8, #0x1000
    mov r5, r0
    ldr r1, [r1, #0x8e8]
    mov r0, r8
    mul r3, r5, r1
    cmp r3, r4
    movgt r3, r4
    add r4, sp, #0x1c
    mov r2, r4
    add r1, r7, #0x84
    str r4, [sp]
    bl func_ov000_0210b258
    mov r0, r4
    mov r2, r4
    add r1, r7, #0x84
    bl VEC_Add
    ldrh r0, [r7, #0x6a]
    mov r3, r4
    add r9, sp, #0x10
    strh r0, [sp, #0xc]
    str r9, [sp]
    add r0, sp, #0xc
    mov r4, #0
    stmib sp, {r0, r4}
    mov r0, r8
    mov r1, r7
    add r2, r7, #0x84
    bl func_ov000_0210b330
    tst r0, #1
    moveq r6, #1
    beq @L_0210be98
    mov r1, r9
    add r0, r7, #0x84
    bl func_02099a94
    mov r4, r0
@L_0210be98:
    ldr r2, [r7, #0x84]
    ldr r1, [r7, #0x88]
    ldr r0, [r7, #0x8c]
    str r2, [r7, #0x78]
    str r1, [r7, #0x7c]
    str r0, [r7, #0x80]
    ldr r1, [sp, #0x10]
    mov r0, r7
    str r1, [r7, #0x84]
    ldr r1, [sp, #0x14]
    str r1, [r7, #0x88]
    ldr r1, [sp, #0x18]
    str r1, [r7, #0x8c]
    ldrh r1, [sp, #0xc]
    bl func_02084d7c
    mov r0, r7
    mov r1, r5
    mov r2, #0
    bl func_02084d50
    mov r0, r7
    mov r1, #3
    bl func_02084d74
    mov r0, r8
    mov r1, r7
    mov r2, r4
    bl func_020857ac
    mov r0, r6
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_ov000_0210bf0c(s32 arg0, u8 *arg1)
{
    s32 r2;
    if ((s32)arg1 == 0) {
        return 1;
    } else {
        arg0 = *(s32 *)(((u8 *)(arg0 + 0x1000)) + 0x8E8);
        r2 = *(s16 *)(arg1 + 0x2E);
        if (r2 <= arg0) {
            *(u16 *)(arg1 + 0x2E) = 0;
            *(u8 *)(arg1 + 0x2D) = 0;
            arg0 = 1;
        } else {
            *(u16 *)(arg1 + 0x2E) = (r2 - ((s16)arg0));
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 func_ov000_0210bf4c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v4;
    s32 t0;
    s32 t1;
    s32 t2;
    t0 = *(s32 *)(g2DAdventureLogic);
    v0 = func_02085bb4(t0, 0, arg2, arg3);
    if (v0 == 0)
        return 0;
    v1 = func_02084c8c(v0);
    v2 = func_02085298(arg0, v1, 0);
    if (v2 == 0)
        return 0;
    *(s32 *)(((u8 *)v2) + 0x30) = arg1;
    *(s32 *)(((u8 *)v2) + 0x34) = arg2;
    *(s32 *)(((u8 *)v2) + 0x38) = arg3;
    t1 = (*(s32 *)(((u8 *)(arg0 + 0x1000)) + 0x8EC) | 1);
    *(s32 *)(((u8 *)(arg0 + 0x1000)) + 0x8EC) = t1;
    *(u8 *)(((u8 *)v2) + 0x2D) = 2;
    func_02084d74(v2, 3, 2, t1);
    t2 = *(s32 *)(arg0 + 0x4);
    v4 = func_ov000_0210b170((s32)arg0, (u8 *)v2, t2);
    *(s32 *)(((u8 *)v2) + 0xA0) = v4;
    return 1;
}

extern "C" s32 func_ov000_0210bfec(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    v0 = func_02085bb4(*(s32 *)(g2DAdventureLogic), 0, arg2, arg3);
    if (v0 == 0)
        return 0;
    v1 = func_02084c8c(v0);
    v2 = func_02085298(arg0, v1, 0);
    if (v2 == 0)
        return 0;
    v3 = func_ov000_0210b0e0(arg0, v2);
    *(s32 *)(((u8 *)v2) + 0xA0) = v3;
    return 1;
}

extern "C" asm void func_ov000_0210c050(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x2c
    ldr r12, =data_ov000_02117688
    add r7, sp, #0x18
    mov r6, r0
    mov r4, r1
    mov r5, r3
    mov r2, #4
@L_0210c070:
    ldrh r0, [r12, #2]
    ldrh r1, [r12], #4
    subs r2, r2, #1
    strh r0, [r7, #2]
    strh r1, [r7], #4
    bne @L_0210c070
    ldr r0, =gCameraCtrl
    ldrh r1, [r12]
    ldr r0, [r0]
    strh r1, [r7]
    bl func_ov015_0213d4d8
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =gGameState
    ldrb r0, [r0, #0x9b7]
    cmp r0, #0
    bne @L_0210c0d0
    tst r5, #2
    addne r0, r6, #0x1000
    ldrne r1, [r0, #0x8ec]
    orrne r1, r1, #1
    strne r1, [r0, #0x8ec]
    b @L_0210c0f4
@L_0210c0d0:
    add r1, r6, #0x1000
    ldr r2, [r1, #0x8ec]
    add r0, r6, #0xec
    orr r2, r2, #1
    str r2, [r1, #0x8ec]
    tst r5, #2
    add r1, r0, #0x1800
    bicne r0, r2, #1
    strne r0, [r1]
@L_0210c0f4:
    mov r7, #0
    mov r0, r6
    mov r1, r4
    mov r2, r7
    bl func_02085298
    movs r4, r0
    addeq sp, sp, #0x2c
    moveq r0, r7
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldrb r0, [r4, #0x2d]
    cmp r0, #0
    streq r7, [r4, #0xa0]
    tst r5, #0xf0
    bne @L_0210c180
    ldr r0, [r4, #0xa0]
    cmp r0, #1
    ble @L_0210c148
    ldrsb r0, [r4, #0xb9]
    tst r0, #4
    movne r5, #1
    bne @L_0210c170
@L_0210c148:
    mov r5, #0
    cmp r5, #0
    bgt @L_0210c170
    ldr r0, [r4, #0xa0]
    cmp r0, #0
    ble @L_0210c170
    mov r0, r6
    mov r1, r4
    mov r2, #1
    bl func_020858c8
@L_0210c170:
    add sp, sp, #0x2c
    str r5, [r4, #0xa0]
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_0210c180:
    mov r1, #4
    tst r5, #0x40
    subne r1, r1, #3
    bne @L_0210c198
    tst r5, #0x80
    addne r1, r1, #3
@L_0210c198:
    tst r5, #0x20
    subne r1, r1, #1
    bne @L_0210c1ac
    tst r5, #0x10
    addne r1, r1, #1
@L_0210c1ac:
    add r0, sp, #0x18
    mov r1, r1, lsl #1
    ldrh r2, [r0, r1]
    ldr r1, [sp, #0x10]
    mov r0, r6
    sub r1, r2, r1
    mov r2, r1, lsl #0x10
    mov r1, r4
    mov r7, r2, lsr #0x10
    bl func_ov000_0210b0e0
    mov r2, r0
    add r5, sp, #0
    mov r0, r6
    mov r1, r7
    mov r3, r5
    mov r2, r2, lsl #1
    bl func_ov000_0210b1f8
    mov r1, r5
    add r0, r4, #0x84
    add r2, r4, #0x30
    bl VEC_Add
    mov r1, #2
    strb r1, [r4, #0x2d]
    mov r0, r4
    mov r1, #3
    bl func_02084d74
    ldr r0, [r4, #0xa0]
    cmp r0, #0
    ble @L_0210c230
    mov r0, r6
    mov r1, r4
    bl func_ov000_0210b0e0
    b @L_0210c240
@L_0210c230:
    ldr r2, [r6, #4]
    mov r0, r6
    mov r1, r4
    bl func_ov000_0210b170
@L_0210c240:
    str r0, [r4, #0xa0]
    mov r0, #1
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov000_0210c25c(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r7, #0
    mov r2, r7
    ldr r5, [sp, #0x30]
    mov r6, r0
    bl func_02085298
    movs r4, r0
    addeq sp, sp, #0xc
    moveq r0, r7
    ldmeqia sp!, {r4, r5, r6, r7, lr}
    addeq sp, sp, #0x10
    bxeq lr
    ldrb r0, [r4, #0x2d]
    cmp r0, #0
    ldr r0, [sp, #0x28]
    streq r7, [r4, #0xa0]
    cmp r0, #0
    cmpeq r5, #0
    addeq sp, sp, #0xc
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, lr}
    addeq sp, sp, #0x10
    bxeq lr
    ldr r0, =data_ov000_02118710
    ldr r0, [r0]
    bl func_ov000_02110dc0
    mov r0, r0, asr #0xc
    cmp r0, #0x28
    addge r0, r6, #0x1000
    ldrge r1, [r0, #0x8ec]
    orrge r1, r1, #1
    strge r1, [r0, #0x8ec]
    ldr r1, [sp, #0x28]
    mov r0, r5
    bl FX_Atan2Idx
    mov r7, r0
    mov r0, r6
    mov r1, r4
    bl func_ov000_0210b0e0
    mov r2, r0
    add r5, sp, #0
    mov r0, r6
    mov r1, r7
    mov r2, r2, lsl #1
    mov r3, r5
    bl func_ov000_0210b1f8
    mov r1, r5
    add r0, r4, #0x84
    add r2, r4, #0x30
    bl VEC_Add
    mov r0, #2
    strb r0, [r4, #0x2d]
    mov r0, r4
    mov r1, #3
    bl func_02084d74
    ldr r2, [r6, #4]
    mov r0, r6
    mov r1, r4
    bl func_ov000_0210b170
    str r0, [r4, #0xa0]
    mov r0, #1
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm void func_ov000_0210c36c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    cmp r1, #0
    movgt r1, #2
    movle r1, #0
    add r0, r7, #0x1000
    str r1, [r0, #0x8e8]
    mov r5, #0
    mov r0, r7
    mov r1, r5
    mov r6, r2
    bl func_0208530c
    movs r4, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gCameraCtrl
    ldr r0, [r0]
    bl func_ov015_0213d4d8
    mov r1, r0
    add r0, r7, #0x410
    add r0, r0, #0x1000
    ldmia r1, {r1, r2, r3}
    bl func_ov000_0210b0ac
    add r8, r7, #0x1000
    b @L_0210c42c
@L_0210c3cc:
    mov r0, r7
    mov r1, r4
    bl func_02085374
    cmp r0, #0
    beq @L_0210c424
    mov r0, r4
    bl func_02084dd8
    cmp r0, #0
    ldrne r0, [r8, #0x8e8]
    cmpne r0, #0
    ble @L_0210c418
    cmp r6, #0
    beq @L_0210c40c
    mov r0, r7
    mov r1, r4
    bl func_ov000_0210b59c
@L_0210c40c:
    mov r0, r7
    mov r1, r4
    bl func_ov000_0210b5f4
@L_0210c418:
    mov r0, r7
    mov r1, r4
    bl func_ov000_0210b2e4
@L_0210c424:
    add r5, r5, #1
    add r4, r4, #0xd4
@L_0210c42c:
    cmp r5, #0x18
    blt @L_0210c3cc
    add r0, r7, #0x1000
    ldr r1, [r0, #0x8ec]
    mov r2, #0
    bic r1, r1, #1
    strb r2, [r0, #0x41c]
    str r1, [r0, #0x8ec]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov000_0210c454(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, #0
    mov r8, r2
    mov r2, r6
    mov r9, r0
    bl func_02085298
    movs r4, r0
    subeq r0, r6, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r9
    mov r1, r6
    bl func_0208530c
    mov r5, r0
    mov r7, r6
@L_0210c48c:
    mov r0, r9
    mov r1, r5
    bl func_02085374
    cmp r0, #0
    beq @L_0210c4f4
    mov r0, r5
    bl func_02084dd8
    cmp r0, #0
    cmpne r5, r4
    beq @L_0210c4f4
    mov r0, r9
    mov r1, r5
    bl func_0208539c
    cmp r0, #0
    bne @L_0210c4f4
    mov r0, r9
    mov r1, r5
    bl func_020853cc
    cmp r0, #0
    bne @L_0210c4f4
    add r0, r4, #0x84
    add r1, r5, #0x84
    bl func_02099a94
    cmp r0, r8
    movle r8, r0
    movle r6, r5
@L_0210c4f4:
    add r7, r7, #1
    cmp r7, #0x18
    add r5, r5, #0xd4
    blt @L_0210c48c
    mvn r0, #0
    cmp r6, #0
    ldrne r0, [r6, #0x5c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
