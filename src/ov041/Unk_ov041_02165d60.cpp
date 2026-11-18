#include "ov041/Unk_ov041_02165d60.hpp"
#include "game/vcall.hpp"

extern "C" void func_ov041_02165d60(void);
extern "C" void func_ov041_02165efc(void);
extern "C" s32 func_ov041_02166050(u8 *arg0);
extern "C" void func_ov041_021661c8(void);
extern "C" void func_ov041_021661cc(void);
extern "C" void func_ov041_02166378(void);
extern "C" s32 func_ov041_021664a4(u8 *arg0);
extern "C" s32 func_ov041_02166538(u8 *arg0);
extern "C" s32 func_ov041_02166570(...);
extern "C" s32 func_ov041_02166930(u8 *arg0);
extern "C" void func_ov041_02166980(void);
extern "C" void func_ov041_021669e8(u8 *arg0);
extern "C" s32 func_ov041_02166a08(u8 *arg0);
extern "C" s32 func_ov041_02166a74(...);
extern "C" s32 func_ov041_02166b28(u8 *arg0);
extern "C" s32 func_ov041_02166bb0(...);
extern "C" s32 func_ov041_02166c74(u8 *arg0);
extern "C" s32 func_ov041_02166cac(s32 arg0);
extern "C" s32 func_ov041_02166f20(u8 *arg0);
extern "C" s32 func_ov041_02166f54(u8 *arg0);
extern "C" void func_ov041_02167000(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov041_02167034(...);
extern "C" void func_ov041_02167184(u8 *arg0, s32 arg1);
extern "C" void func_ov041_02167194(s32 arg0);
extern "C" s32 func_ov041_021671f4(...);
extern "C" void func_ov041_021672d0(s32 arg0);
extern "C" void func_ov041_02167300(s32 arg0);
extern "C" s32 func_ov041_02167328(s32 arg0, s32 arg1);
extern "C" s32 func_ov041_02167344(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, s32 arg5, s32 arg6);
extern "C" void func_ov041_021673e8(s32 arg0);
extern "C" void func_ov041_02167430(u8 *arg0);
extern "C" void func_ov041_021674d4(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8);
extern "C" void func_ov041_02167598(void);
extern "C" s32 func_ov041_021677b0(...);
extern "C" void func_ov041_021678ec(s32 arg0, s32 arg1);
extern "C" void func_ov041_0216790c(s32 arg0, s32 arg1);
extern "C" s32 func_ov041_0216792c(...);
extern "C" s32 func_ov041_021679a8(...);
extern "C" void func_ov041_02167b40(u8 *arg0);
extern "C" s32 func_ov041_02167b8c(u8 *arg0);
extern "C" s32 func_ov041_02167be8(u8 *arg0);
extern "C" s32 func_ov041_02167e34(u8 *arg0);
extern "C" s32 func_ov041_02167ef8(...);
extern "C" void func_ov041_02167f9c(u8 *arg0);
extern "C" s32 func_ov041_02167fec(u8 *arg0, s32 arg1);
extern "C" s32 func_ov041_0216805c(...);
extern "C" void func_ov041_021684d4(void);
extern "C" void func_ov041_02168618(void);
extern "C" void func_ov041_02168774(void);
extern "C" void func_ov041_021688d4(void);
extern "C" void func_ov041_02168a34(void);
extern "C" s32 func_ov041_02168b00(...);

extern "C" char data_020c463a[];
extern "C" char g3DGameChar[];
extern "C" char g3DDevice[];
extern "C" char g3DSpriteCtrl[];
extern "C" char gFont12Manager[];
extern "C" char gSprAnimCtrl[];
extern "C" char gSprButtonCtrl[];
extern "C" char g2DGChar[];
extern "C" char gCameraCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gConfig[];
extern "C" char gAllocator[];
extern "C" char gDeltaTime[];
extern "C" char data_020c4ab4[];
extern "C" char data_020e88a0[];
extern "C" char data_ov041_0216bf70[];
extern "C" char data_ov041_0216bf78[];
extern "C" char data_ov041_0216bf80[];
extern "C" char data_ov041_0216bf88[];
extern "C" char data_ov041_0216bfb0[];
extern "C" char data_ov041_0216c094[];
extern "C" char data_ov041_0216c0f4[];
extern "C" char data_ov041_0216c3bc[];
extern "C" char data_ov041_0216c3dc[];
extern "C" char data_ov041_0216c3fc[];
extern "C" char data_ov041_0216c414[];
extern "C" char data_ov041_0216c42c[];
extern "C" char data_ov041_0216c44c[];
extern "C" char data_ov041_0216c460[];
extern "C" char data_ov041_0216c474[];
extern "C" char data_ov041_0216c488[];
extern "C" char data_ov041_0216c49c[];
extern "C" char data_ov041_0216c4b0[];
extern "C" char data_ov041_0216c4c4[];
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void STD_CopyString(void);
extern "C" s32 _ZN10ConfigFile6GetIntEPKc(...);
extern "C" s32 _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(...);
extern "C" s32 _ZN13ScreenManager12SetNextSceneEii(...);
extern "C" s32 _ZN13ScreenManager8PopSceneEi(...);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" void _ZN11MatchEngine13func_020767a4Em(void);
extern "C" void _ZN11MatchEngine13func_020768fcEm(void);
extern "C" void _ZN11MatchEngine13func_02076924EPti(void);
extern "C" void _ZN11MatchEngine13func_02076ec8EP11MatchPlayer(void);
extern "C" s32 _ZN11MatchEngine13func_02077bd4Ev(...);
extern "C" s32 _ZN11MatchEngine13func_02077ce4Ev(...);
extern "C" void _ZN11MatchEngine13func_02077e58EPhm(void);
extern "C" void _ZN11MatchEngine13func_02078844Ev(void);
extern "C" void _ZN11MatchEngine13func_02078aacEv(void);
extern "C" s32 _ZN11MatchEngine13func_0207c6b4Eiii(...);
extern "C" void _ZN11MatchEngine13func_0207c720Ev(void);
extern "C" void _ZN11MatchEngine13func_0207d244Eii(void);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12ResetSpacingEv(void);
extern "C" void _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii(void);
extern "C" s32 _fflt(...);
extern "C" s32 _ffltu(...);
extern "C" void _s32_div_f(void);
extern "C" s32 _ffix(...);
extern "C" s32 _fadd(...);
extern "C" s32 _fsub(...);
extern "C" void func_020812fc(void);
extern "C" s32 func_0208720c(...);
extern "C" void func_02087284(void);
extern "C" s32 func_020872a4(...);
extern "C" void func_02087b68(void);
extern "C" s32 func_02087be0(...);
extern "C" void func_0208803c(void);
extern "C" s32 func_02088530(...);
extern "C" s32 func_02088580(...);
extern "C" void func_020885b0(void);
extern "C" void C3DDevice_SetEdgeMarking(void);
extern "C" s32 func_02089758(...);
extern "C" s32 func_02089764(...);
extern "C" s32 func_0208977c(...);
extern "C" s32 func_02089998(...);
extern "C" s32 func_02089bd4(...);
extern "C" s32 func_02089cbc(...);
extern "C" s32 func_02089dc4(...);
extern "C" s32 func_02089e04(...);
extern "C" void func_02089f5c(void);
extern "C" s32 func_02089fb0(...);
extern "C" s32 func_0208a068(...);
extern "C" s32 func_0208a31c(...);
extern "C" s32 func_0208a460(...);
extern "C" s32 func_0208a4e8(...);
extern "C" s32 func_0208a540(...);
extern "C" s32 func_0208a574(...);
extern "C" void C3DPlaneCtrl_GetTexWidth(void);
extern "C" void C3DPlaneCtrl_GetTexHeight(void);
extern "C" s32 C3DPlaneCtrl_Acquire(...);
extern "C" void C3DPlaneCtrl_Release(void);
extern "C" void C3DPlaneCtrl_Create(void);
extern "C" s32 C3DPlaneCtrl_Destroy(...);
extern "C" s32 C3DPlaneCtrl_SetTex(...);
extern "C" s32 C3DPlaneCtrl_SetDepth(...);
extern "C" s32 C3DPlaneCtrl_SetPos(...);
extern "C" void C3DPlaneCtrl_SetTexWH(void);
extern "C" void C3DPlaneCtrl_SetTexST(void);
extern "C" s32 C3DPlaneCtrl_SetFlag(...);
extern "C" s32 C3DPlaneCtrl_SetGraphicIdx(...);
extern "C" s32 C3DPlaneCtrl_SetColorMask(...);
extern "C" s32 func_02095ea4(...);
extern "C" void C3DSprFile_TryFinalize(void);
extern "C" s32 C3DSprFile_Release(...);
extern "C" void C3DSprFile_IsInVram(void);
extern "C" void C3DSprFile_LoadToVram(void);
extern "C" void C3DSprFile_UploadTex(void);
extern "C" void C3DSprFile_AllocTexBuffer(void);
extern "C" void C3DSprFile_CreateTex16(void);
extern "C" void func_0209a3b0(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" s32 func_ov015_02130b14(...);
extern "C" s32 Graphics_FadeScreensBlack(...);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" void Archive_TryFinalize(void);
extern "C" void Archive_Close(void);
extern "C" void Archive_Deallocate(void);
extern "C" s32 func_ov015_02135ea0(...);
extern "C" s32 func_ov015_02135ef4(...);
extern "C" s32 func_ov015_02136080(...);
extern "C" void func_ov015_02136134(void);
extern "C" s32 func_ov015_021362b8(...);
extern "C" s32 func_ov015_02136330(...);
extern "C" s32 func_ov015_021363e8(...);
extern "C" void func_ov015_0213d484(void);
extern "C" void func_ov015_0213d498(void);
extern "C" void func_ov015_021616a4(void);
extern "C" void func_ov015_021616dc(void);
extern "C" s32 func_ov015_02161710(...);
extern "C" s32 func_ov015_02161760(...);
extern "C" void func_ov015_02161f84(void);
extern "C" void func_ov015_02161fdc(void);
extern "C" void func_ov015_02162140(void);
extern "C" void func_ov015_02162f70(void);
extern "C" s32 func_ov041_02168dbc(...);
extern "C" void func_ov041_02168e78(void);
extern "C" s32 func_ov041_02169118(...);
extern "C" void func_ov041_02169198(void);
extern "C" s32 func_ov041_02169474(...);
extern "C" void func_ov041_021694f4(void);
extern "C" s32 func_ov041_02169780(...);
extern "C" void func_ov041_02169800(void);
extern "C" void func_ov041_02169a8c(void);
extern "C" s32 func_ov041_02169c44(...);
extern "C" s32 func_ov041_02169cb0(...);
extern "C" s32 func_ov041_0216a0d4(...);
extern "C" void func_ov041_0216a170(void);
extern "C" s32 func_ov041_0216a3ac(...);
extern "C" s32 func_ov041_0216a690(...);
extern "C" s32 func_ov041_0216ab9c(...);
extern "C" s32 func_ov041_0216abb8(...);
extern "C" s32 func_ov041_0216abd8(...);
extern "C" s32 func_ov041_0216abf8(...);
extern "C" void func_ov041_0216b704(void);
extern "C" s32 func_ov041_0216b8b4(...);
extern "C" s32 func_ov041_0216b970(...);
extern "C" void gGameState(void);

extern "C" asm void func_ov041_02165d60(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r1, #0x4000000
    ldr r1, [r1]
    mov r4, r0
    and r0, r1, #0x1f00
    mov r1, r0, lsr #8
    ldr r0, =gSprButtonCtrl
    str r1, [r4, #8]
    ldr r0, [r0]
    mov r5, #0
    bl func_ov015_02161f84
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616a4
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x44]
    blx r1
    mov r1, r5
    add r0, r4, #0x14
    mov r2, #0x20
    bl MI_CpuFill8
    add r0, r4, #0x3300
    strh r5, [r0, #0x54]
    mov r0, #1
    str r0, [r4, #0x14]
    ldr r1, =data_020c4ab4
    str r5, [r4, #0x34]
    str r5, [r4, #0x38]
    str r5, [r4, #0x3c]
    ldrb r0, [r1, #0x71]
    cmp r0, #0
    beq @L_02165e10
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    ldreqb r1, [r1, #0x68]
    cmpeq r1, #0
    bne @L_02165e10
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrh r1, [r0, #0x2e]
    add r0, r4, #0x3300
    strh r1, [r0, #0x54]
@L_02165e10:
    mov r0, r4
    bl func_ov041_02167194
    mov r0, r4
    bl func_ov041_021672d0
    mov r0, r4
    bl func_ov041_021673e8
    mov r0, r4
    bl func_ov041_021661cc
    mov r0, r4
    bl func_ov041_02166930
    mov r1, #0
    ldr r0, =g3DDevice
    str r1, [r4, #0x40]
    ldr r1, [r0]
    ldrb r1, [r1, #0x45]
    str r1, [r4, #0x40]
    cmp r1, #0
    bne @L_02165e64
    ldr r0, [r0]
    mov r1, #1
    bl C3DDevice_SetEdgeMarking
@L_02165e64:
    mov r0, r4
    bl func_ov041_021664a4
    add r0, r4, #0x20c
    mov r5, #0
    mov r1, r5
    add r0, r0, #0x3000
    mov r2, #0x20
    bl MI_CpuFill8
    add r0, r4, #0x1cc
    mov r1, r5
    add r0, r0, #0x3000
    mov r2, #0x40
    bl MI_CpuFill8
    mov r0, r4
    bl func_ov041_02167b40
    mov r0, r4
    bl func_ov041_02166980
    b @L_02165ebc
@L_02165eac:
    mov r0, r4
    mov r1, r5
    bl func_ov041_0216a170
    add r5, r5, #1
@L_02165ebc:
    cmp r5, #6
    blt @L_02165eac
    mov r1, #0
    add r0, r4, #0x3000
    mov r2, #1
    str r2, [r0, #0x34c]
    str r2, [r0, #0x80]
    str r1, [r4, #0xc]
    str r1, [r4, #0x10]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov041_02165efc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r1, #0x4000000
    mov r5, r0
    ldr r0, [r1]
    ldr r2, [r5, #8]
    bic r0, r0, #0x1f00
    orr r2, r0, r2, lsl #8
    ldr r0, =gSprButtonCtrl
    str r2, [r1]
    ldr r0, [r0]
    bl func_ov015_02161fdc
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616dc
    mov r4, #0
    ldrh r2, [r5, #0x18]
    ldr r6, =data_020c4ab4
    mov r0, r5
    mov r1, r4
    strh r2, [r6, #0x6c]
    bl func_ov041_02169c44
    mov r0, r5
    mov r1, #1
    bl func_ov041_02169c44
    mov r0, r5
    mov r1, #2
    bl func_ov041_02169c44
    mov r0, r5
    bl func_ov041_02169780
    mov r0, r5
    bl func_ov041_02169474
    mov r0, r5
    bl func_ov041_02169118
    mov r0, r5
    bl func_ov041_02168dbc
    mov r0, r5
    bl func_ov041_0216a0d4
    mov r0, r5
    bl func_ov041_021669e8
    mov r0, r5
    bl func_ov041_02168a34
    mov r0, r5
    bl func_ov041_02167f9c
    mov r0, r5
    bl func_ov041_02167b8c
    mov r0, r5
    bl func_ov041_02166538
    ldrb r0, [r6, #0x71]
    cmp r0, #0
    beq @L_02165ffc
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    ldreqb r0, [r6, #0x68]
    cmpeq r0, #0
    bne @L_02165ffc
    add r0, r5, #0x3300
    ldrh r0, [r0, #0x54]
    mov r1, r4
    bl func_ov015_02130b14
    movs r1, r0
    beq @L_02165ffc
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_0207c720Ev
@L_02165ffc:
    ldr r0, [r5, #0x40]
    cmp r0, #0
    bne @L_02166018
    ldr r0, =g3DDevice
    mov r1, #0
    ldr r0, [r0]
    bl C3DDevice_SetEdgeMarking
@L_02166018:
    mov r0, r5
    bl func_ov041_02167430
    mov r0, r5
    bl func_ov041_02167300
    mov r0, r5
    mov r1, #2
    bl func_ov041_021671f4
    ldmia sp!, {r4, r5, r6, pc}
}

#pragma push
#pragma optimization_level 2
extern "C" s32 func_ov041_02166050(u8 *arg0)
{
    s32 r1;
    s32 r4;
    u8 *r5;
    s32 r6;
    s32 v11;
    s32 v13;
    s32 v15;
    s32 v20;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    r5 = arg0;
    r1 = *(s32 *)(arg0 + 0xC);
    switch (r1) {
        case 0:
            func_ov041_02166a08(arg0);
            break;
        case 1:
            func_ov041_02166a74((s32)arg0);
            break;
        case 2:
            func_ov041_02166b28(arg0);
            break;
        case 3:
            func_ov041_02166bb0((s32)arg0);
            break;
        case 4:
            func_ov041_02166c74(arg0);
            break;
        case 5:
            func_ov041_02166cac((s32)arg0);
            break;
        case 7:
            func_ov041_02166f20(arg0);
            break;
        case 8:
            func_ov041_02166f54(arg0);
            break;
        case 6:
            break;
    }
    func_ov041_02167e34(r5);
    t0 = *(s32 *)(((u8 *)&g3DGameChar));
    t1 = *(s32 *)(((u8 *)&gDeltaTime));
    func_0208977c(t0, t1);
    t2 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    t3 = *(s32 *)(((u8 *)&gDeltaTime));
    func_ov015_02161710(t2, t3);
    arg0 = (u8 *)(*(s32 *)(((u8 *)&gDeltaTime)) << 0xC);
    if (*(s32 *)(((u8 *)&gDeltaTime)) != 0) {
        v11 = _ffltu((s32)arg0);
        _fadd(0x3F000000, v11);
    } else {
        v13 = _ffltu((s32)arg0);
        _fsub(v13, 0x3F000000);
    }
    v15 = _ffix();
    t4 = *(s32 *)(((u8 *)&g3DSpriteCtrl));
    func_02095ea4(t4, v15);
    if (*(s32 *)(r5 + 0xC) == 6) {
        t5 = *(s32 *)(((u8 *)&g2DGChar));
        func_02087be0(t5);
    }
    r4 = 0;
    while ((r6 = 0x24, r4 < 6)) {
        if (*(s32 *)(((u8 *)(((r4 * r6) + r5) + 0x3000)) + 0x260) != 0) {
            func_ov041_0216a3ac((s32)r5, r4);
        }
        if (*(s32 *)(((u8 *)((r5 + (r4 << 3)) + 0x3000)) + 0x31C) != 0) {
            func_ov041_0216a690((s32)r5, r4);
        }
        r4 = (r4 + 1);
    }
    v20 = func_ov041_02167034((s32)r5);
    return v20;
}
#pragma pop

extern "C" void func_ov041_021661c8(void)
{
}

extern "C" asm void func_ov041_021661cc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    ldr r2, =data_ov041_0216bf80
    ldr r1, =data_ov041_0216bf88
    mov r6, r0
    ldr r9, [r2]
    ldr r8, [r2, #4]
    ldr r4, [r1]
    ldr r3, [r1, #4]
    mov r5, #0
    ldr r7, =data_020c4ab4
    str r9, [sp, #8]
    str r8, [sp, #0xc]
    str r4, [sp]
    mov r1, r5
    add r0, r6, #0x44
    mov r2, #0x20
    str r3, [sp, #4]
    ldrb r10, [r7, #0x68]
    mov r8, r5
    mov r9, r5
    mov r4, #1
    bl MI_CpuFill8
    mov r1, r5
    add r0, r6, #0x64
    mov r2, #0x10
    bl MI_CpuFill8
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    bne @L_02166254
    ldrb r0, [r7, #0x71]
    cmp r0, #0
    bne @L_021662c0
@L_02166254:
    add r0, sp, #8
    ldr r5, [r0, r10, lsl #2]
    add r0, sp, #0
    ldr r8, [r0, r10, lsl #2]
    mov r7, #1
    b @L_021662b4
@L_0216626c:
    mov r0, r5
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_021662b0
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r7
    moveq r1, r9
    cmp r1, #1
    bne @L_021662b0
    ldr r1, [r6, #0x68]
    ldrh r2, [r0, #0x42]
    add r0, r6, r1, lsl #1
    strh r2, [r0, #0x44]
    ldr r0, [r6, #0x68]
    add r0, r0, #1
    str r0, [r6, #0x68]
@L_021662b0:
    add r5, r5, #1
@L_021662b4:
    cmp r5, r8
    blt @L_0216626c
    b @L_02166330
@L_021662c0:
    ldr r9, =data_020e88a0
    mov r7, #2
    b @L_02166324
@L_021662cc:
    mov r0, r9
    mov r1, r7
    add r2, r5, #1
    bl _ZN11MatchEngine13func_0207d244Eii
    mov r1, r8
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_02166320
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r4
    moveq r1, r8
    cmp r1, #1
    bne @L_02166320
    ldr r1, [r6, #0x68]
    ldrh r2, [r0, #0x42]
    add r0, r6, r1, lsl #1
    strh r2, [r0, #0x44]
    ldr r0, [r6, #0x68]
    add r0, r0, #1
    str r0, [r6, #0x68]
@L_02166320:
    add r5, r5, #1
@L_02166324:
    cmp r5, #0x10
    blt @L_021662cc
    mov r4, #0
@L_02166330:
    ldr r0, =data_020c463a
    ldrb r0, [r0]
    cmp r0, #0
    movne r4, #0
    cmp r4, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r6
    add r1, r6, #0x44
    bl func_ov041_02166378
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov041_02166378(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x50
    add r5, sp, #0x30
    ldr r3, =data_020c4ab4
    mov r9, #0x20
    mov r6, #0
    mov r8, r1
    mov r0, r5
    mov r1, r6
    mov r2, r9
    ldrb r7, [r3, #0x68]
    bl MI_CpuFill8
    add r4, sp, #8
    mov r1, r6
    mov r0, r4
    mov r2, #8
    bl MI_CpuFill8
    add r10, sp, #0x10
    mov r1, r6
    mov r0, r10
    mov r2, r9
    bl MI_CpuFill8
    mov r2, r9
    mov r0, r8
    mov r1, r5
    bl MI_CpuCopy8
    ldr r9, =data_020e88a0
    str r6, [sp]
    mov r1, r7
    mov r0, r9
    mov r2, r4
    mov r3, #4
    bl _ZN11MatchEngine13func_02078844Ev
    mov r1, r7
    str r6, [sp]
    mov r7, r0
    mov r2, r10
    mov r0, r9
    mov r3, #0x10
    str r6, [sp, #4]
    bl _ZN11MatchEngine13func_02078aacEv
    mov r1, r7
    mov r9, #1
    mov r0, r6
@L_02166428:
    mov r3, r0
    mov r10, r0
    cmp r7, #0
    ble @L_02166460
    mov r2, r6, lsl #1
    ldrh r12, [r5, r2]
@L_02166440:
    mov r2, r10, lsl #1
    ldrh r2, [r4, r2]
    cmp r12, r2
    moveq r3, r9
    beq @L_02166460
    add r10, r10, #1
    cmp r10, r7
    blt @L_02166440
@L_02166460:
    cmp r3, #0
    moveq r2, r6, lsl #1
    ldreqh r3, [r5, r2]
    moveq r2, r1, lsl #1
    add r6, r6, #1
    addeq r1, r1, #1
    streqh r3, [r8, r2]
    cmp r6, #0x10
    blt @L_02166428
    add r0, sp, #8
    mov r1, r8
    mov r2, r7, lsl #1
    bl MI_CpuCopy8
    add sp, sp, #0x50
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov041_021664a4(u8 *arg0)
{
    s32 r1;
    s32 r2;
    s32 r3;
    u8 *r5;
    s32 v0;
    s32 v2;
    u8 t0;
    *(s32 *)(arg0 + 0x74) = 0;
    *(u16 *)(arg0 + 0x78) = 0;
    r5 = arg0;
    r2 = 0;
    r3 = (s32)((u8 *)&gAllocator);
    arg0 = (u8 *)*(s32 *)(((u8 *)&gAllocator));
    r1 = (s32)((u8 *)&data_ov041_0216c3bc);
    if ((s32)arg0 != 0) {
        v0 = _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih((s32)arg0, r1, (s32)(r5 + 0x74), r3, r2, r2, r2, 1, 1);
        r2 = v0;
    }
    *(u16 *)(r5 + 0x78) = ((u32)r2 >> 1);
    _ZN11MatchEngine13func_02077bd4Ev((s32)((u8 *)&data_020e88a0), ((u32)r2 >> 1));
    t0 = *(u8 *)(((u8 *)&data_020c4ab4) + 0x68);
    v2 = _ZN11MatchEngine13func_0207c6b4Eiii((s32)((u8 *)&data_020e88a0), t0, 0, 0);
    return v2;
}

extern "C" s32 func_ov041_02166538(u8 *arg0)
{
    s32 r1;
    s32 v1;
    r1 = *(s32 *)(arg0 + 0x74);
    if (r1 != 0) {
        _ZN8GameHeap4FreeEPv((s32)((u8 *)&gAllocator), r1);
        *(s32 *)(arg0 + 0x74) = 0;
    }
    v1 = _ZN11MatchEngine13func_02077ce4Ev((s32)((u8 *)&data_020e88a0));
    return v1;
}

extern "C" asm s32 func_ov041_02166570(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x810
    mov r1, #0
    mov r3, r1
    mov r4, #0x800
    add r5, sp, #0x10
    mov r10, r0
    str r1, [sp, #8]
    mov r0, r5
    mov r2, r4
    str r3, [sp, #4]
    str r3, [sp]
    bl MI_CpuFill8
    ldr r1, [sp, #8]
    mov r2, r4
    add r0, r10, #0x7c
    bl MI_CpuFill8
    add r0, r10, #0x7c
    ldr r1, [sp, #8]
    add r0, r0, #0x800
    mov r2, r4
    bl MI_CpuFill8
    add r0, r10, #0x7c
    ldr r1, [sp, #8]
    add r0, r0, #0x1000
    mov r2, r4
    bl MI_CpuFill8
    add r0, r10, #0x7c
    ldr r1, [sp, #8]
    add r0, r0, #0x1800
    mov r2, r4
    bl MI_CpuFill8
    add r0, r10, #0x7c
    ldr r1, [sp, #8]
    add r0, r0, #0x2000
    mov r2, r4
    bl MI_CpuFill8
    add r0, r10, #0x7c
    ldr r1, [sp, #8]
    mov r2, r4
    add r0, r0, #0x2800
    bl MI_CpuFill8
    add r0, r10, #0x22c
    mov r4, #0xc
    ldr r1, [sp, #8]
    add r0, r0, #0x3000
    mov r2, r4
    bl MI_CpuFill8
    add r0, r10, #0x238
    ldr r1, [sp, #8]
    mov r2, r4
    add r0, r0, #0x3000
    bl MI_CpuFill8
    add r0, r10, #0x1cc
    ldr r1, [sp, #8]
    add r0, r0, #0x3000
    mov r2, #0x40
    bl MI_CpuFill8
    ldr r0, [sp, #8]
    add r2, r10, #0x3000
    strh r0, [r2, #0x7c]
    ldr r0, =data_020e88a0
    mov r1, r5
    mov r2, #0x400
    bl _ZN11MatchEngine13func_02076924EPti
    mov r8, r0
    ldr r0, [sp, #8]
    str r0, [sp, #0xc]
    ldrh r0, [r10, #0x78]
    cmp r0, #0
    ble @L_0216683c
@L_0216668c:
    cmp r8, #0
    mov r9, #0
    ble @L_02166824
    ldr r0, [sp, #0xc]
    ldr r5, =data_020e88a0
    mov r6, r0, lsl #1
    add r4, r10, #0x3000
    add r7, sp, #0x10
@L_021666ac:
    ldr r0, [r10, #0x74]
    mov r1, r9, lsl #1
    ldrh r1, [r7, r1]
    ldrh r0, [r6, r0]
    cmp r0, r1
    bne @L_02166818
    mov r0, r5
    bl _ZN11MatchEngine13func_020767a4Em
    mov r0, r0, lsl #0x10
    movs r11, r0, lsr #0x10
    beq @L_02166824
    mov r0, r9, lsl #1
    ldrh r1, [r7, r0]
    mov r0, r5
    bl _ZN11MatchEngine13func_020768fcEm
    cmp r0, #0
    beq @L_02166818
    ldrb r1, [r0, #0x21]
    cmp r1, #0x16
    bne @L_02166730
    mov r0, r9, lsl #1
    ldrh r1, [r7, r0]
    cmp r1, #0x97
    beq @L_02166818
    ldr r0, [sp, #8]
    add r0, r10, r0, lsl #1
    strh r1, [r0, #0x7c]
    add r0, r0, #0x800
    strh r11, [r0, #0x7c]
    ldr r0, [sp, #8]
    add r0, r0, #1
    str r0, [sp, #8]
    b @L_02166824
@L_02166730:
    add r0, r1, #0xe8
    and r0, r0, #0xff
    cmp r0, #1
    bhi @L_021667d8
    ldr r0, [r10, #0x10]
    cmp r0, #3
    beq @L_02166758
    cmp r0, #4
    beq @L_02166780
    b @L_021667a4
@L_02166758:
    cmp r1, #0x18
    bne @L_02166770
    ldr r0, [r4, #0x1c0]
    cmp r0, #0
    bne @L_02166818
    b @L_021667a4
@L_02166770:
    ldr r0, [r4, #0x1c8]
    cmp r0, #0
    bne @L_02166818
    b @L_021667a4
@L_02166780:
    cmp r1, #0x18
    bne @L_02166798
    ldr r0, [r4, #0x1bc]
    cmp r0, #0
    bne @L_02166818
    b @L_021667a4
@L_02166798:
    ldr r0, [r4, #0x1c4]
    cmp r0, #0
    bne @L_02166818
@L_021667a4:
    add r0, sp, #0x10
    mov r1, r9, lsl #1
    ldrh r2, [r0, r1]
    ldr r0, [sp, #4]
    add r1, r10, r0, lsl #1
    add r0, r1, #0x1000
    strh r2, [r0, #0x7c]
    add r0, r1, #0x1800
    strh r11, [r0, #0x7c]
    ldr r0, [sp, #4]
    add r0, r0, #1
    str r0, [sp, #4]
    b @L_02166824
@L_021667d8:
    cmp r1, #0x17
    bne @L_02166818
    mov r0, r9, lsl #1
    ldrh r2, [r7, r0]
    cmp r2, #0xc9
    beq @L_02166818
    ldr r0, [sp]
    add r1, r10, r0, lsl #1
    add r0, r1, #0x2000
    strh r2, [r0, #0x7c]
    add r0, r1, #0x2800
    strh r11, [r0, #0x7c]
    ldr r0, [sp]
    add r0, r0, #1
    str r0, [sp]
    b @L_02166824
@L_02166818:
    add r9, r9, #1
    cmp r9, r8
    blt @L_021666ac
@L_02166824:
    ldr r0, [sp, #0xc]
    ldrh r1, [r10, #0x78]
    add r0, r0, #1
    str r0, [sp, #0xc]
    cmp r0, r1
    blt @L_0216668c
@L_0216683c:
    ldr r0, [sp, #8]
    mov r1, r0, asr #2
    add r0, r0, r1, lsr #29
    mov r1, r0, asr #3
    add r0, r10, #0x3000
    str r1, [r0, #0x238]
    cmp r1, #1
    movlt r1, #1
    strlt r1, [r0, #0x238]
    ldr r0, [sp, #8]
    cmp r0, #8
    blt @L_02166888
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #29
    adds r0, r1, r0, ror #29
    addne r0, r10, #0x3000
    ldrne r1, [r0, #0x238]
    addne r1, r1, #1
    strne r1, [r0, #0x238]
@L_02166888:
    ldr r0, [sp, #4]
    mov r1, r0, asr #2
    add r0, r0, r1, lsr #29
    mov r1, r0, asr #3
    add r0, r10, #0x3000
    str r1, [r0, #0x23c]
    cmp r1, #1
    movlt r1, #1
    strlt r1, [r0, #0x23c]
    ldr r0, [sp, #4]
    cmp r0, #8
    blt @L_021668d4
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #29
    adds r0, r1, r0, ror #29
    addne r0, r10, #0x3000
    ldrne r1, [r0, #0x23c]
    addne r1, r1, #1
    strne r1, [r0, #0x23c]
@L_021668d4:
    ldr r0, [sp]
    mov r1, r0, asr #2
    add r0, r0, r1, lsr #29
    mov r1, r0, asr #3
    add r0, r10, #0x3000
    str r1, [r0, #0x240]
    cmp r1, #1
    movlt r1, #1
    strlt r1, [r0, #0x240]
    ldr r0, [sp]
    cmp r0, #8
    addlt sp, sp, #0x810
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #29
    adds r0, r1, r0, ror #29
    addne r0, r10, #0x3000
    ldrne r1, [r0, #0x240]
    addne r1, r1, #1
    strne r1, [r0, #0x240]
    add sp, sp, #0x810
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov041_02166930(u8 *arg0)
{
    s32 r2;
    s32 r3;
    s32 r12;
    r3 = *(u16 *)(((u8 *)&data_020c4ab4) + 0x6C);
    if ((r3 != 0 && (r12 = *(s32 *)(arg0 + 0x68), r2 = 0, r12 > 0))) {
        do {
            if (r3 == *(u16 *)(((u8 *)(arg0 + (r2 << 1))) + 0x44)) {
                *(s32 *)(arg0 + 0x64) = r2;
                break;
            }
            r2 = (r2 + 1);
        } while (r2 < r12);
    }
    *(u16 *)(((u8 *)&data_020c4ab4) + 0x6C) = 0;
    return (s32)((u8 *)&data_020c4ab4);
}

extern "C" asm void func_ov041_02166980(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r1, =gCameraCtrl
    mov r6, r0
    ldr r4, [r1]
    mov r1, #4
    mov r0, r4
    mov r5, #0
    bl func_ov015_0213d484
    mov r0, r4
    bl func_ov015_0213d498
    add r2, r6, #0x3000
    str r0, [r2, #0x84]
    ldr r1, [r0, #0x24]
    mov r3, #0x12c000
    str r1, [r2, #0x88]
    ldr r12, [r0, #0x28]
    mov r1, r5
    str r12, [r2, #0x8c]
    str r3, [r0, #0x24]
    ldr r2, [r2, #0x84]
    mov r3, #0x1f4000
    mov r0, r4
    str r3, [r2, #0x28]
    bl func_ov015_0213d484
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov041_021669e8(u8 *arg0)
{
    u8 *t0 = (u8 *)*(s32 *)(arg0 + 0x3084);
    s32 t1 = *(s32 *)(arg0 + 0x3088);
    *(s32 *)(t0 + 0x24) = t1;
    u8 *t2 = (u8 *)*(s32 *)(arg0 + 0x3084);
    s32 t3 = *(s32 *)(arg0 + 0x308C);
    *(s32 *)(t2 + 0x28) = t3;
}

extern "C" s32 func_ov041_02166a08(u8 *arg0)
{
    s32 v0 = func_0208a4e8(*(s32 *)(g3DGameChar), (s32)g3DGameChar);
    if (v0 == 1)
        return v0;
    s32 v1 = func_02088580(*(s32 *)(g2DGChar));
    if (v1 != 0)
        return v1;
    Archive_RequestNewRead((s32)data_ov041_0216c3dc, ((arg0 + 0x90) + 0x3000));
    Archive_RequestNewRead((s32)data_ov041_0216c3fc, ((arg0 + 0x9C) + 0x3000));
    *(s32 *)(arg0 + 0xC) = 1;
    return 1;
}

extern "C" asm s32 func_ov041_02166a74(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    mov r11, r0
    add r0, r11, #0x90
    add r0, r0, #0x3000
    mov r1, #2
    bl Archive_TryFinalize
    cmp r0, #1
    addne sp, sp, #0x40
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, =data_ov041_0216c094
    add r4, sp, #0x10
    ldmia r5!, {r0, r1, r2, r3}
    mov r9, r4
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r10, #0
    ldr r6, =data_ov041_0216c414
    add r5, r11, #0xa8
    add r4, r11, #0x3000
    mov r8, r10
    mov r7, #1
@L_02166ad8:
    str r8, [sp]
    str r8, [sp, #4]
    str r7, [sp, #8]
    str r7, [sp, #0xc]
    ldr r0, [r4, #0x9c]
    ldr r2, [r9, r10, lsl #2]
    mov r1, r6
    add r3, r5, #0x3000
    bl func_ov015_02136134
    add r10, r10, #1
    cmp r10, #0xc
    blt @L_02166ad8
    mov r0, r11
    bl func_ov041_02167be8
    mov r0, #2
    str r0, [r11, #0xc]
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov041_02166b28(u8 *arg0)
{
    s32 local[40];
    s32 v0;
    s32 t0;
    v0 = func_ov015_021363e8((s32)((arg0 + 0xA8) + 0x3000));
    if (v0 != 0)
        return v0;
    *(WN<40> *)(((u8 *)local)) = *(WN<40> *)(((u8 *)&data_ov041_0216c0f4));
    t0 = *(s32 *)(arg0 + 0x3090);
    func_ov015_02136080((u8 *)((u8 *)&data_ov041_0216c42c), t0, (s32)((u8 *)local), (s32)((arg0 + 0xB0) + 0x3000), 0);
    func_ov041_021671f4((s32)arg0, 0);
    *(s32 *)(arg0 + 0xC) = 3;
    return 3;
}

extern "C" asm s32 func_ov041_02166bb0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    mov r5, r0
    mov r7, r4
    ldr r6, =g3DPlaneCtrl
    b @L_02166c28
@L_02166bc8:
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xb0]
    cmp r1, #0
    beq @L_02166c24
    ldr r0, [r6]
    bl C3DSprFile_TryFinalize
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xb0]
    ldr r0, [r6]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_02166c24
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xb0]
    ldr r0, [r6]
    mov r2, r7
    mov r3, r7
    bl C3DSprFile_LoadToVram
@L_02166c24:
    add r4, r4, #1
@L_02166c28:
    cmp r4, #0x13
    blt @L_02166bc8
    mov r0, r5
    bl func_ov041_02167e34
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =g2DGChar
    ldr r0, [r4]
    bl func_02087b68
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r4]
    bl func_0208803c
    cmp r0, #0
    movle r0, #4
    strle r0, [r5, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov041_02166c74(u8 *arg0)
{
    func_ov041_0216792c(arg0);
    func_ov041_021679a8(arg0);
    func_ov041_02167ef8(arg0);
    func_ov041_02166570(arg0);
    func_ov041_0216805c(arg0);
    *(s32 *)(arg0 + 0xC) = 5;
    return 5;
}

extern "C" s32 func_ov041_02166cac(s32 arg0)
{
    s32 r1;
    u8 *r4;
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v12;
    s32 v21;
    s32 v22;
    s32 v23;
    s32 v24;
    s32 t0;
    u16 t1;
    t0 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    v0 = func_ov015_02161760(t0, (u8 *)((u8 *)&gSprAnimCtrl));
    if (v0 != 0)
        return v0;
    r4 = (u8 *)arg0;
    switch (*(s32 *)(r4 + 0x10)) {
        case 0:
            func_ov041_0216a0d4((s32)r4);
            func_ov041_02169118((s32)r4);
            func_ov041_02169474((s32)r4);
            func_ov041_02169780((s32)r4);
            func_ov041_02168dbc((s32)r4);
            func_ov041_02169c44((s32)r4, 0);
            func_ov041_02169c44((s32)r4, 1);
            r6 = 2;
            func_ov041_02169c44((s32)r4, 2);
            *(s32 *)(r4 + 0x3234) = 0;
            *(s32 *)(r4 + 0x3230) = 0;
            *(s32 *)(r4 + 0x322C) = 0;
            r5 = 3;
            func_ov041_0216b8b4((s32)r4, 3, 0, 1, 3);
            func_ov041_0216b8b4((s32)r4, 5, 6, 7, 5);
            func_ov041_0216b8b4((s32)r4, 4, 0, 1, 4);
            t1 = *(u16 *)(((u8 *)(r4 + (*(s32 *)(r4 + 0x64) << 1))) + 0x44);
            v12 = func_ov015_02130b14(t1, 0);
            if (v12 != 0)
                break;
            func_ov041_0216b8b4((s32)r4, r5, r6, r6, r5);
            break;
        case 1:
            func_ov041_02169cb0((s32)r4);
            func_ov041_0216b8b4((s32)r4, 3, 3, 4, 3);
            func_ov041_0216b8b4((s32)r4, 5, 8, 9, 5);
            arg0 = (s32)r4;
            r1 = (*(s32 *)(r4 + 0x31B8) ^ 1);
            func_ov041_0216b970(arg0, r1);
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            r6 = 0;
            func_ov041_02168b00((s32)r4);
            func_ov041_0216b8b4((s32)r4, 3, 3, 4, 3);
            func_ov041_0216b8b4((s32)r4, 5, 8, 9, 5);
            func_ov041_0216b8b4((s32)r4, 4, 2, 2, 4);
            switch (*(s32 *)(r4 + 0x10)) {
                case 2:
                    v21 = func_ov041_0216ab9c((s32)r4);
                    arg0 = v21;
                    r6 = arg0;
                    break;
                case 3:
                    v22 = func_ov041_0216abb8((s32)r4);
                    arg0 = v22;
                    r6 = arg0;
                    break;
                case 4:
                    v23 = func_ov041_0216abd8((s32)r4);
                    arg0 = v23;
                    r6 = arg0;
                    break;
                case 5:
                    v24 = func_ov041_0216abf8((s32)r4);
                    arg0 = v24;
                    r6 = arg0;
                    break;
                case 0:
                case 1:
                    break;
            }
            r1 = 1;
            if (r6 == 0) {
                r1 = 0;
            }
            arg0 = (s32)r4;
            func_ov041_0216b970(arg0, r1);
            break;
    }
    func_ov041_021677b0((s32)r4);
    ((VCall *)r4)->f19();
    *(s32 *)(r4 + 0xC) = 6;
    return 6;
}

extern "C" s32 func_ov041_02166f20(u8 *arg0)
{
    s32 v0 = func_ov015_02161760(*(s32 *)(gSprAnimCtrl), (s32)gSprAnimCtrl);
    if (v0 != 0)
        return v0;
    Graphics_FadeScreensBlack(6);
    *(s32 *)(arg0 + 0xC) = 8;
    return 8;
}

extern "C" s32 func_ov041_02166f54(u8 *arg0)
{
    s32 r1;
    s32 r2;
    s32 r4;
    s32 v0;
    s32 v2;
    s32 v4;
    s32 v6;
    s32 t1;
    s32 t2;
    s32 t3;
    v0 = ((VCall *)arg0)->f22();
    if (v0 != 0)
        return v0;
    r2 = *(s32 *)(arg0 + 0x38);
    r4 = *(s32 *)(arg0 + 0x3C);
    r1 = 0;
    if ((r2 == r4 && r2 == 0)) {
        if (*(u8 *)(((u8 *)&data_020c4ab4) + 0x72) == 0) {
            t1 = *(s32 *)(arg0 + 0x4);
            _ZN13ScreenManager8PopSceneEi(t1, r1);
            v2 = _ZN13ScreenManager8PopSceneEi(t1, 1);
            return v2;
        } else {
            t2 = *(s32 *)(arg0 + 0x4);
            _ZN13ScreenManager12SetNextSceneEii(t2, r1, 0x5A);
            v4 = _ZN13ScreenManager12SetNextSceneEii(t2, 1, 0x5A);
            return v4;
        }
    } else {
        t3 = *(s32 *)(arg0 + 0x4);
        _ZN13ScreenManager12SetNextSceneEii(t3, 0, r2);
        v6 = _ZN13ScreenManager12SetNextSceneEii(t3, 1, r4);
        return v6;
    }
}

extern "C" void func_ov041_02167000(u8 *arg0, s32 arg1, s32 arg2)
{
    if (*(u8 *)(data_020c4ab4 + 0x69) != 0) {
        if ((arg1 != 0 || arg2 != 0))
            return;
    }
    *(s32 *)(arg0 + 0x38) = arg1;
    *(s32 *)(arg0 + 0x3C) = arg2;
    *(s32 *)(arg0 + 0xC) = 7;
    return;
}

extern "C" asm s32 func_ov041_02167034(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5, #0x64]
    mov r4, #0
    add r0, r5, r0, lsl #1
    ldrh r0, [r0, #0x44]
    mov r1, r4
    bl func_ov015_02130b14
    movs r1, r0
    mov r2, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x64]
    mov r3, #7
    str r3, [r5, #0x14]
    add r0, r5, r0, lsl #1
    ldrh r0, [r0, #0x44]
    cmp r0, #0
    strh r0, [r5, #0x18]
    moveq r0, #1
    streqb r0, [r5, #0x21]
    ldr r0, [r5, #0x10]
    streq r4, [r5, #0x14]
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    b @L_02167158
    b @L_021670b0
    b @L_021670b0
    b @L_02167118
    b @L_02167128
    b @L_02167138
    b @L_02167148
@L_021670b0:
    add r0, r5, #0x3000
    ldr r0, [r0, #0x244]
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    b @L_02167158
    b @L_021670dc
    b @L_02167158
    b @L_021670e8
    b @L_021670f4
    b @L_02167158
    b @L_02167100
@L_021670dc:
    ldrh r4, [r1, #0x70]
@L_021670e0:
    mov r2, #0
    b @L_02167158
@L_021670e8:
    ldrh r4, [r1, #0x72]
@L_021670ec:
    mov r2, #1
    b @L_02167158
@L_021670f4:
    ldrh r4, [r1, #0x74]
@L_021670f8:
    mov r2, #2
    b @L_02167158
@L_02167100:
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_02076ec8EP11MatchPlayer
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
    mov r2, #4
    b @L_02167158
@L_02167118:
    mov r0, r5
    bl func_ov041_0216ab9c
    mov r4, r0
    b @L_021670e0
@L_02167128:
    mov r0, r5
    bl func_ov041_0216abb8
    mov r4, r0
    b @L_021670ec
@L_02167138:
    mov r0, r5
    bl func_ov041_0216abd8
    mov r4, r0
    b @L_021670f8
@L_02167148:
    mov r0, r5
    bl func_ov041_0216abf8
    mov r4, r0
    mov r2, #3
@L_02167158:
    ldr r0, [r5, #4]
    strh r4, [r5, #0x1c]
    strh r2, [r5, #0x1e]
    ldr r2, [r0]
    add r1, r5, #0x14
    ldr r2, [r2, #0x3c]
    blx r2
    mov r0, #0
    strb r0, [r5, #0x23]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov041_02167184(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x10) = arg1;
    *(s32 *)(arg0 + 0xC) = 5;
}

extern "C" void func_ov041_02167194(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0x90) + 0x3000), 0, 0x18);
    s32 t0 = *(s32 *)(((u8 *)&g2DGChar));
    func_0208720c(t0);
    s32 t1 = *(s32 *)(((u8 *)&g2DGChar));
    func_020872a4(t1, 0x94000, 2, 2, 0x4000, 2, 0x6400);
    s32 t2 = *(s32 *)(((u8 *)&g2DGChar));
    func_02088530(t2);
}

extern "C" asm s32 func_ov041_021671f4(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, r1
    mov r10, r0
    cmp r4, #2
    blo @L_02167280
    ldr r4, =g2DGChar
    mov r9, #0
    ldr r0, [r4]
    bl func_02087284
    ldr r0, [r4]
    bl func_020885b0
    mov r4, #0xc
    add r0, r10, #0x90
    add r8, r0, #0x3000
    mov r11, #1
    mov r7, r9
    mov r5, r4
    mov r6, r4
    b @L_02167274
@L_02167240:
    mla r0, r9, r4, r8
    mov r1, r11
    bl Archive_Close
    mla r0, r9, r5, r8
    bl Archive_Deallocate
    mla r0, r9, r6, r10
    add r0, r0, #0x3000
    str r7, [r0, #0x90]
    str r7, [r0, #0x94]
    strb r7, [r0, #0x98]
    strb r7, [r0, #0x99]
    strb r7, [r0, #0x9a]
    add r9, r9, #1
@L_02167274:
    cmp r9, #2
    blt @L_02167240
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02167280:
    add r0, r10, #0x90
    add r0, r0, #0x3000
    mov r5, #0xc
    mla r0, r4, r5, r0
    mov r1, #1
    bl Archive_Close
    add r0, r10, #0x90
    add r0, r0, #0x3000
    mla r0, r4, r5, r0
    bl Archive_Deallocate
    mla r0, r4, r5, r10
    add r0, r0, #0x3000
    mov r1, #0
    str r1, [r0, #0x90]
    str r1, [r0, #0x94]
    strb r1, [r0, #0x98]
    strb r1, [r0, #0x99]
    strb r1, [r0, #0x9a]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov041_021672d0(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0xA8) + 0x3000), 0, 8);
    func_ov015_02135ea0(((arg0 + 0xA8) + 0x3000), 0xC);
}

extern "C" void func_ov041_02167300(s32 arg0)
{
    func_ov015_02136330(((arg0 + 0xA8) + 0x3000), -1);
    func_ov015_02135ef4(((arg0 + 0xA8) + 0x3000));
}

extern "C" s32 func_ov041_02167328(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_021362b8(arg1, ((arg0 + 0xA8) + 0x3000), (arg0 + 0xA8));
    return (v0 & 0xFF);
}

extern "C" s32 func_ov041_02167344(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, s32 arg5, s32 arg6)
{
    s32 v0;
    s32 v4;
    s32 t0;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    s32 t9;
    t0 = (*(s32 *)(arg3) + 1);
    *(s32 *)(arg3) = t0;
    v0 = func_ov041_02167328(arg0, arg1);
    t2 = *(s32 *)(g3DPlaneCtrl);
    t3 = *(s32 *)(arg3);
    C3DPlaneCtrl_SetTex(t2, arg2, t3, v0);
    t4 = *(s32 *)(g3DPlaneCtrl);
    t5 = *(s32 *)(arg3);
    C3DPlaneCtrl_SetGraphicIdx(t4, arg2, t5, 0, 0);
    t6 = *(s32 *)(g3DPlaneCtrl);
    t7 = *(s32 *)(arg3);
    C3DPlaneCtrl_SetPos(t6, arg2, t7, ((arg4 << 0x10) >> 0x10), ((arg5 << 0x10) >> 0x10));
    t8 = *(s32 *)(g3DPlaneCtrl);
    t9 = *(s32 *)(arg3);
    v4 = C3DPlaneCtrl_SetDepth(t8, arg2, t9, ((u32)(arg6 << 0x10) >> 0x10));
    return v4;
}

extern "C" void func_ov041_021673e8(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0xB0) + 0x3000), 0, 0x4C);
    MI_CpuFill8(((arg0 + 0xFC) + 0x3000), 0, 0x3C);
    C3DPlaneCtrl_Acquire(*(s32 *)(g3DPlaneCtrl));
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov041_02167430(u8 *arg0)
{
    s32 i;
    for (i = 0; i < 0xf; i++) {
        if (((s32 *)(arg0 + 0x30fc))[i] != 0) {
            ((void (*)(s32, s32))C3DPlaneCtrl_Destroy)(*(s32 *)g3DPlaneCtrl, ((s32 *)(arg0 + 0x30fc))[i]);
            ((s32 *)(arg0 + 0x30fc))[i] = 0;
        }
    }
    for (i = 0; i < 0x13; i++) {
        if (((s32 *)(arg0 + 0x30b0))[i] != 0) {
            ((void (*)(s32, s32))C3DSprFile_Release)(*(s32 *)g3DPlaneCtrl, ((s32 *)(arg0 + 0x30b0))[i]);
            ((s32 *)(arg0 + 0x30b0))[i] = 0;
        }
    }
    ((void (*)(s32))C3DPlaneCtrl_Release)(*(s32 *)g3DPlaneCtrl);
}
#pragma pop

extern "C" void func_ov041_021674d4(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8)
{
    s32 t0 = (*(s32 *)(arg2) + 1);
    *(s32 *)(arg2) = t0;
    s32 t1 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t2 = (*(s32 *)(((u8 *)((arg0 + (arg3 << 2)) + 0x3000)) + 0xB0) & 0xFF);
    C3DPlaneCtrl_SetTex(t1, arg1, t0, t2);
    s32 t3 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t4 = *(s32 *)(arg2);
    C3DPlaneCtrl_SetGraphicIdx(t3, arg1, t4, arg4, 0);
    s32 t5 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t6 = *(s32 *)(arg2);
    C3DPlaneCtrl_SetPos(t5, arg1, t6, ((s16)arg5), ((s16)arg6));
    s32 t7 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t8 = *(s32 *)(arg2);
    C3DPlaneCtrl_SetDepth(t7, arg1, t8, ((u16)arg7));
    s32 t9 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t10 = *(s32 *)(arg2);
    C3DPlaneCtrl_SetFlag(t9, arg1, t10, 2, arg8);
}

extern "C" asm void func_ov041_02167598(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x34
    mov r5, #0
    str r1, [sp, #0x20]
    mov r4, #4
    mov r10, r2
    add r0, sp, #0x30
    mov r1, r5
    mov r2, r4
    ldr r7, [sp, #0x68]
    mov r9, r3
    str r5, [sp, #0x28]
    ldr r8, [sp, #0x58]
    mov r6, #0x80
    bl MI_CpuFill8
    add r0, sp, #0x2c
    mov r2, r4
    mov r1, r5
    bl MI_CpuFill8
    cmp r7, #1
    moveq r6, #0x100
    add r2, sp, #0x30
    add r3, sp, #0x2c
    mov r0, r6
    mov r1, #0x20
    str r5, [r8]
    bl func_0209a3b0
    ldr r4, =g3DPlaneCtrl
    ldr r2, [sp, #0x2c]
    ldr r1, [sp, #0x30]
    ldr r0, [r4]
    bl C3DSprFile_CreateTex16
    mov r2, #0
    str r0, [r8]
    mov r1, r0
    ldr r0, [r4]
    mov r3, r2
    bl C3DSprFile_LoadToVram
    ldr r1, [r8]
    mov r2, #0
    str r2, [sp, #0x24]
    ldr r0, [r4]
    add r2, sp, #0x24
    add r3, sp, #0x28
    bl C3DSprFile_AllocTexBuffer
    ldr r0, [r4]
    ldr r1, [r8]
    ldr r6, [sp, #0x24]
    bl C3DPlaneCtrl_GetTexWidth
    mov r11, r0
    ldr r0, [r4]
    ldr r1, [r8]
    bl C3DPlaneCtrl_GetTexHeight
    mov r5, r0
    ldr r0, =gFont12Manager
    mov r1, #1
    ldr r0, [r0]
    mov r2, #5
    bl _ZN8TextFont10SetSpacingEii
    str r5, [sp]
    mov r0, #0
    str r0, [sp, #4]
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    mov r0, #0
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r0, =gFont12Manager
    str r7, [sp, #0x1c]
    ldr r1, [sp, #0x20]
    ldr r0, [r0]
    mov r2, r6
    mov r3, r11
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
    ldr r0, =gFont12Manager
    ldr r0, [r0]
    bl _ZN8TextFont12ResetSpacingEv
    mov r2, r6
    ldr r3, [sp, #0x28]
    ldr r1, [r8]
    ldr r0, [r4]
    mov r6, #0
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    bl C3DSprFile_UploadTex
    ldr r0, [r9]
    mov r1, r10
    add r2, r0, #1
    str r2, [r9]
    ldr r3, [r8]
    ldr r0, [r4]
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    mov r0, r6
    str r0, [sp]
    ldr r0, [r4]
    ldr r2, [r9]
    mov r3, r6
    mov r1, r10
    bl C3DPlaneCtrl_SetTexST
    mov r0, r5, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    mov r0, r11, lsl #0x10
    mov r3, r0, asr #0x10
    ldr r0, [r4]
    ldr r2, [r9]
    mov r1, r10
    bl C3DPlaneCtrl_SetTexWH
    ldr r0, [sp, #0x60]
    ldr r3, [sp, #0x5c]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    mov r3, r3, lsl #0x10
    ldr r0, [r4]
    ldr r2, [r9]
    mov r1, r10
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    ldr r3, [sp, #0x64]
    ldr r0, [r4]
    mov r3, r3, lsl #0x10
    ldr r2, [r9]
    mov r1, r10
    mov r3, r3, lsr #0x10
    bl C3DPlaneCtrl_SetDepth
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov041_021677b0(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r5, #0
    b @L_021677d8
@L_021677c0:
    add r0, r4, r5, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xfc]
    mov r0, r4
    bl func_ov041_0216790c
    add r5, r5, #1
@L_021677d8:
    cmp r5, #0xf
    blt @L_021677c0
    ldr r1, [r4, #0x6c]
    mov r0, r4
    bl func_ov041_0216790c
    ldr r5, =g3DGameChar
    add r1, r4, #0x3000
    ldr r6, =0x4210
    ldr r0, [r5]
    ldr r1, [r1, #0x138]
    mov r2, r6
    bl func_02089f5c
    add r1, r4, #0x3000
    ldr r0, [r5]
    ldr r1, [r1, #0x13c]
    mov r2, r6
    bl func_02089f5c
    ldr r0, [r4, #0x10]
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02167844
    b @L_021678ac
    b @L_02167844
    b @L_02167844
    b @L_02167844
    b @L_02167844
@L_02167844:
    mov r5, #0
    b @L_02167864
@L_0216784c:
    add r0, r4, r5, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xfc]
    mov r0, r4
    bl func_ov041_021678ec
    add r5, r5, #1
@L_02167864:
    cmp r5, #0xf
    blt @L_0216784c
    ldr r1, [r4, #0x6c]
    mov r0, r4
    bl func_ov041_021678ec
    ldr r5, =g3DGameChar
    add r1, r4, #0x3000
    ldr r6, =0x7fff
    ldr r0, [r5]
    ldr r1, [r1, #0x138]
    mov r2, r6
    bl func_02089f5c
    add r1, r4, #0x3000
    ldr r0, [r5]
    ldr r1, [r1, #0x13c]
    mov r2, r6
    bl func_02089f5c
    ldmia sp!, {r4, r5, r6, pc}
@L_021678ac:
    add r0, r4, #0x3000
    ldr r1, [r0, #0x11c]
    mov r0, r4
    bl func_ov041_021678ec
    add r0, r4, #0x3000
    ldr r1, [r0, #0x108]
    mov r0, r4
    bl func_ov041_021678ec
    add r0, r4, #0x3000
    ldr r1, [r0, #0x110]
    mov r0, r4
    bl func_ov041_021678ec
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov041_021678ec(s32 arg0, s32 arg1)
{
    C3DPlaneCtrl_SetColorMask(*(s32 *)(g3DPlaneCtrl), arg1, 0x7FFF);
}

extern "C" void func_ov041_0216790c(s32 arg0, s32 arg1)
{
    C3DPlaneCtrl_SetColorMask(*(s32 *)(g3DPlaneCtrl), arg1, 0x4210);
}

extern "C" asm s32 func_ov041_0216792c(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    mov r5, r0
    add r0, r5, #0x3000
    ldr r0, [r0, #0xfc]
    cmp r0, #0
    addne sp, sp, #0x18
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =g3DPlaneCtrl
    mov r4, #1
    ldr r0, [r0]
    mov r1, r4
    mov r2, r4
    bl C3DPlaneCtrl_Create
    mov r3, #0
    mov r1, r0
    str r3, [sp, #0x14]
    add r0, r5, #0x3000
    str r1, [r0, #0xfc]
    str r3, [sp]
    str r3, [sp, #4]
    str r3, [sp, #8]
    mov r0, #0x1f4
    str r0, [sp, #0xc]
    add r2, sp, #0x14
    mov r0, r5
    str r4, [sp, #0x10]
    bl func_ov041_021674d4
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov041_021679a8(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r10, r0
    add r1, r10, #0x3000
    ldr r3, [r1, #0x100]
    ldr r2, [r1, #0x104]
    ldr r4, [r1, #0x108]
    add r2, r3, r2
    add r2, r4, r2
    ldr r3, [r1, #0x10c]
    ldr r4, [r1, #0x110]
    add r2, r3, r2
    ldr r3, [r1, #0x114]
    add r1, r4, r2
    adds r1, r3, r1
    ldr r9, =0x1f3
    addne sp, sp, #0x14
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r8, #0x68
    str r8, [sp]
    mov r7, #0x18
    mov r6, #1
    str r7, [sp, #4]
    str r6, [sp, #8]
    mov r5, #3
    mov r4, #0
    str r9, [sp, #0xc]
    mov r1, r6
    mov r2, r5
    mov r3, r4
    str r6, [sp, #0x10]
    bl func_ov041_0216b704
    mov r11, #2
    mov r0, #0xd8
    stmia sp, {r0, r7, r11}
    str r9, [sp, #0xc]
    mov r0, r10
    mov r1, r11
    mov r2, r5
    str r6, [sp, #0x10]
    mov r3, r11
    bl func_ov041_0216b704
    str r8, [sp]
    mov r7, #0xa8
    str r7, [sp, #4]
    str r5, [sp, #8]
    str r9, [sp, #0xc]
    mov r1, r5
    mov r0, r10
    mov r2, r6
    mov r3, r4
    str r6, [sp, #0x10]
    bl func_ov041_0216b704
    mov r0, #0x98
    stmia sp, {r0, r7}
    mov r1, #4
    str r1, [sp, #8]
    str r9, [sp, #0xc]
    mov r2, r11
    mov r0, r10
    mov r3, r4
    str r6, [sp, #0x10]
    bl func_ov041_0216b704
    mov r0, #0xd0
    stmia sp, {r0, r7}
    mov r1, #5
    str r1, [sp, #8]
    mov r8, #6
    str r9, [sp, #0xc]
    mov r0, r10
    mov r2, r6
    mov r3, r8
    str r6, [sp, #0x10]
    bl func_ov041_0216b704
    mov r5, #0x88
    str r5, [sp]
    mov r7, #0x10
    stmib sp, {r7, r8}
    str r9, [sp, #0xc]
    mov r0, r10
    mov r1, r8
    mov r2, #9
    mov r3, r4
    str r6, [sp, #0x10]
    bl func_ov041_0216b704
    str r7, [sp]
    mov r0, #0x50
    str r0, [sp, #4]
    mov r0, #0x20
    str r0, [sp, #8]
    mov r1, #0x69
    ldr r0, =gSprButtonCtrl
    str r1, [sp, #0xc]
    ldr r0, [r0]
    mov r1, r4
    mov r3, r5
    mov r2, #7
    bl func_ov015_02162f70
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov041_02167b40(u8 *arg0)
{
    MI_CpuFill8((s32)((arg0 + 0x138) + 0x3000), 0, 8);
    *(s32 *)(arg0 + 0x3140) = 0;
    *(s32 *)(arg0 + 0x3144) = 0;
    s32 t0 = *(s32 *)(((u8 *)&g3DGameChar));
    func_0208a460(t0);
    s32 t1 = *(s32 *)(((u8 *)&g3DGameChar));
    func_02089758(t1, 0);
}

extern "C" s32 func_ov041_02167b8c(u8 *arg0)
{
    s32 r1;
    s32 v3;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    r1 = *(s32 *)(arg0 + 0x3138);
    if (r1 > 0) {
        t0 = *(s32 *)(((u8 *)&g3DGameChar));
        func_02089bd4(t0, r1);
    }
    r1 = *(s32 *)(arg0 + 0x313C);
    if (r1 > 0) {
        t1 = *(s32 *)(((u8 *)&g3DGameChar));
        func_02089bd4(t1, r1);
    }
    t2 = *(s32 *)(((u8 *)&g3DGameChar));
    func_0208a540(t2);
    t3 = *(s32 *)(((u8 *)&g3DGameChar));
    v3 = func_02089764(t3);
    return v3;
}

extern "C" s32 func_ov041_02167be8(u8 *arg0)
{
    s32 local[3];
    s32 r1;
    s32 r5;
    s32 v1;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v7;
    s32 v8;
    s32 v10;
    s32 v11;
    s32 v12;
    s32 v13;
    s32 v15;
    s32 v16;
    s32 v18;
    s32 v19;
    s32 v23;
    s32 t0;
    s32 t1;
    u16 t2;
    s32 t3;
    u8 *t4;
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
    s32 t15;
    s32 t16;
    r1 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
    if (r1 > 0) {
        t0 = *(s32 *)(((u8 *)&g3DGameChar));
        func_02089bd4(t0, r1);
    }
    t1 = *(s32 *)(((u8 *)&g3DGameChar));
    t2 = *(u16 *)(arg0 + 0x18);
    t3 = *(s32 *)(arg0 + 0x3140);
    v1 = func_02089998(t1, t2, t3, 1, 1, 1);
    t4 = (u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000);
    *(s32 *)(t4 + 0x138) = v1;
    t5 = *(s32 *)(((u8 *)&g3DGameChar));
    t6 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
    func_02089cbc(t5, t6, 0xF423F, 0);
    *(s32 *)(arg0 + 0x3144) = 1;
    v3 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov041_0216c44c), (s32)(arg0 + 0x3000));
    if ((0 - v3) > 0) {
        v4 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov041_0216c460));
        v5 = _fflt(((0 - v4) << 0xC));
        _fadd(0x3F000000, v5);
    } else {
        v7 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov041_0216c474));
        v8 = _fflt(((0 - v7) << 0xC));
        _fsub(v8, 0x3F000000);
    }
    v10 = _ffix();
    v11 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov041_0216c488));
    r5 = v10;
    if (v11 > 0) {
        v12 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov041_0216c49c));
        v13 = _fflt((v12 << 0xC));
        _fadd(0x3F000000, v13);
    } else {
        v15 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov041_0216c4b0));
        v16 = _fflt((v15 << 0xC));
        _fsub(v16, 0x3F000000);
    }
    v18 = _ffix();
    *(s32 *)(((u8 *)local)) = v18;
    *(s32 *)(((u8 *)local) + 0x8) = (0 - 0x190000);
    *(s32 *)(((u8 *)local) + 0x4) = r5;
    v19 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov041_0216c4c4), (0 - 0x190000));
    t7 = *(s32 *)(((u8 *)&g3DGameChar));
    t8 = *(s32 *)(((u8 *)local));
    t9 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
    t10 = *(s32 *)(((u8 *)local) + 0x4);
    func_02089fb0(t7, t9, t8, t10, *(s32 *)(((u8 *)local) + 0x8));
    t11 = *(s32 *)(((u8 *)&g3DGameChar));
    t12 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
    func_0208a068(t11, t12, v19, v19, v19);
    t13 = *(s32 *)(((u8 *)&g3DGameChar));
    t14 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
    func_02089e04(t13, t14, 0);
    t15 = *(s32 *)(((u8 *)&g3DGameChar));
    t16 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
    v23 = func_0208a574(t15, t16, 1);
    return v23;
}

extern "C" s32 func_ov041_02167e34(u8 *arg0)
{
    s32 v0;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    t0 = *(s32 *)(((u8 *)&g3DGameChar));
    t1 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
    v0 = func_02089dc4(t0, t1);
    if (v0 == 1)
        return 0;
    if (*(s32 *)(arg0 + 0x3144) != 0) {
        t2 = *(s32 *)(((u8 *)&g3DGameChar));
        t3 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
        func_0208a31c(t2, t3, 0, 1);
        t4 = *(s32 *)(((u8 *)&g3DGameChar));
        t5 = *(s32 *)(((u8 *)((arg0 + (*(s32 *)(arg0 + 0x3140) << 2)) + 0x3000)) + 0x138);
        func_02089e04(t4, t5, 1);
        t6 = *(s32 *)(arg0 + 0x3140);
        *(s32 *)(arg0 + 0x3144) = 0;
        *(s32 *)(arg0 + 0x3140) = (t6 ^ 1);
        t7 = *(s32 *)(((u8 *)&g3DGameChar));
        t8 = *(s32 *)(((u8 *)((arg0 + ((t6 ^ 1) << 2)) + 0x3000)) + 0x138);
        func_02089e04(t7, t8, 0);
    }
    return 1;
}

extern "C" asm s32 func_ov041_02167ef8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x38
    mov r5, r0
    ldr r0, [r5, #0x64]
    mov r6, #0
    add r0, r5, r0, lsl #1
    ldrh r0, [r0, #0x44]
    mov r1, r6
    bl func_ov015_02130b14
    movs r7, r0
    addeq sp, sp, #0x38
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =g3DPlaneCtrl
    mov r4, #1
    ldr r0, [r0]
    mov r1, r4
    mov r2, r4
    str r6, [sp, #0x14]
    bl C3DPlaneCtrl_Create
    add r6, sp, #0x18
    str r0, [r5, #0x6c]
    mov r8, #0x1b
    add r0, r7, #0x20
    mov r1, r6
    mov r2, #0x20
    add r7, r8, #0x1d4
    mov r9, #0x2f
    bl MI_CpuCopy8
    add r0, r5, #0x70
    stmia sp, {r0, r9}
    str r8, [sp, #8]
    str r7, [sp, #0xc]
    str r4, [sp, #0x10]
    ldr r2, [r5, #0x6c]
    mov r1, r6
    add r3, sp, #0x14
    mov r0, r5
    bl func_ov041_02167598
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_ov041_02167f9c(u8 *arg0)
{
    s32 r1;
    s32 t0;
    s32 t1;
    s32 t2;
    r1 = *(s32 *)(arg0 + 0x6C);
    if (r1 != 0) {
        t0 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_Destroy(t0, r1);
        *(s32 *)(arg0 + 0x6C) = 0;
    }
    if (*(s32 *)(arg0 + 0x70) == 0)
        return;
    t1 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    t2 = *(s32 *)(arg0 + 0x70);
    C3DSprFile_Release(t1, t2);
    *(s32 *)(arg0 + 0x70) = 0;
    return;
}

extern "C" s32 func_ov041_02167fec(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    u8 *r4;
    s32 v2;
    u16 t0;
    r4 = arg0;
    r3 = *(s32 *)(arg0 + 0x64);
    r2 = *(s32 *)(arg0 + 0x68);
    switch (arg1) {
        case 0:
            arg1 = r2;
            arg0 = (u8 *)(r3 + (r2 - 1));
            r3 = (s32)((s32)arg0 % arg1);
            break;
        case 1:
            arg1 = r2;
            arg0 = (u8 *)(r3 + 1);
            r3 = (s32)((s32)arg0 % arg1);
            break;
    }
    *(s32 *)(r4 + 0x64) = r3;
    t0 = *(u16 *)(((u8 *)(r4 + (r3 << 1))) + 0x44);
    *(u16 *)(r4 + 0x18) = t0;
    func_ov041_02167be8(r4);
    func_ov041_02167f9c(r4);
    v2 = func_ov041_02167ef8((s32)r4);
    return v2;
}

extern "C" asm s32 func_ov041_0216805c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r0
    add r0, r10, #0x3000
    ldr r0, [r0, #0x118]
    cmp r0, #0
    addne sp, sp, #0x30
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r10, #0x64]
    mov r6, #0
    add r0, r10, r0, lsl #1
    ldrh r0, [r0, #0x44]
    mov r1, r6
    bl func_ov015_02130b14
    mov r8, #1
    ldr r1, =g3DPlaneCtrl
    mov r4, r0
    ldr r0, [r1]
    mov r2, r8
    mov r1, #0xb
    bl C3DPlaneCtrl_Create
    ldr r2, =data_ov041_0216bfb0
    ldr r3, =data_ov041_0216bf70
    str r6, [sp, #0x2c]
    ldmia r3, {r5, r9}
    ldr r7, [r2]
    ldr r3, [r2, #4]
    ldr r1, =data_ov041_0216bf78
    str r5, [sp, #0x24]
    ldr r2, [r1]
    ldr r1, [r1, #4]
    str r9, [sp, #0x28]
    mov r5, r0
    str r7, [sp, #0x1c]
    str r3, [sp, #0x20]
    str r2, [sp, #0x14]
    str r1, [sp, #0x18]
    cmp r4, #0
    ldr r9, =0x1c2
    beq @L_0216810c
    ldrh r0, [r4, #0xf0]
    tst r0, #0x80
    moveq r8, r6
    b @L_02168110
@L_0216810c:
    mov r8, r6
@L_02168110:
    add r0, sp, #0x14
    ldr r3, [r0, r8, lsl #2]
    add r2, r10, #0x148
    mov r11, #0
    add r0, r2, #0x3000
    add r6, r3, #0x10
    add r3, sp, #0x1c
    mov r1, r11
    mov r2, #0x70
    ldr r7, [r3, r8, lsl #2]
    bl MI_CpuFill8
    add r0, r10, #0x3000
    str r11, [r0, #0x1c0]
    str r11, [r0, #0x1bc]
    str r11, [r0, #0x1c8]
    str r11, [r0, #0x1c4]
    str r5, [r0, #0x118]
    add r0, sp, #0x1c
    ldr r1, [r0, r8, lsl #2]
    add r0, sp, #0x14
    str r11, [sp]
    str r1, [sp, #4]
    ldr r0, [r0, r8, lsl #2]
    mov r1, r5
    str r0, [sp, #8]
    add r0, sp, #0x24
    ldr r3, [r0, r8, lsl #2]
    str r9, [sp, #0xc]
    mov r9, #1
    mov r0, r10
    add r2, sp, #0x2c
    str r9, [sp, #0x10]
    bl func_ov041_021674d4
    mov r0, r10
    mov r1, r11
    bl func_ov041_0216a170
    add r0, r10, #0x3000
    str r7, [r0, #0x250]
    str r6, [r0, #0x254]
    str r11, [sp]
    str r7, [sp, #4]
    str r6, [sp, #8]
    rsb r0, r9, #0x1c0
    str r0, [sp, #0xc]
    str r9, [sp, #0x10]
    mov r0, r10
    mov r1, r5
    add r2, sp, #0x2c
    mov r3, #6
    bl func_ov041_021674d4
    str r9, [sp]
    str r7, [sp, #4]
    str r6, [sp, #8]
    add r0, r9, #0x1c0
    str r0, [sp, #0xc]
    add r2, sp, #0x2c
    mov r3, #6
    mov r0, r10
    mov r1, r5
    str r11, [sp, #0x10]
    bl func_ov041_021674d4
    cmp r4, #0
    beq @L_021683b8
    add r2, r10, #0x3000
    add r0, sp, #0x1c
    ldr r3, [r0, r8, lsl #2]
    add r0, sp, #0x14
    add r1, r10, #0x148
    str r4, [r2, #0x148]
    str r5, [r2, #0x14c]
    ldr r12, [sp, #0x2c]
    ldr r0, [r0, r8, lsl #2]
    str r3, [r2, #0x158]
    mov r3, #0x1c0
    str r0, [r2, #0x15c]
    mov r0, r10
    add r1, r1, #0x3000
    str r12, [r2, #0x150]
    str r3, [r2, #0x160]
    str r11, [r2, #0x154]
    bl func_ov041_021684d4
    add r2, r10, #0x3000
    add r0, r10, #0x164
    add r1, r0, #0x3000
    add r0, sp, #0x1c
    ldr r0, [r0, r8, lsl #2]
    ldr r3, [r2, #0x150]
    str r0, [r2, #0x174]
    add r0, sp, #0x14
    str r3, [r2, #0x16c]
    ldr r3, [r0, r8, lsl #2]
    ldr r0, [r2, #0x160]
    str r4, [r2, #0x164]
    str r0, [r2, #0x17c]
    mov r0, r10
    str r5, [r2, #0x168]
    str r11, [r2, #0x170]
    str r3, [r2, #0x178]
    bl func_ov041_02168618
    add r1, r10, #0x3000
    add r0, sp, #0x1c
    ldr r0, [r0, r8, lsl #2]
    ldr r2, [r1, #0x16c]
    str r0, [r1, #0x190]
    add r0, sp, #0x14
    str r2, [r1, #0x188]
    ldr r2, [r0, r8, lsl #2]
    ldr r0, [r1, #0x17c]
    str r4, [r1, #0x180]
    str r0, [r1, #0x198]
    str r5, [r1, #0x184]
    str r11, [r1, #0x18c]
    str r2, [r1, #0x194]
    mov r0, r10
    add r1, r10, #0x3180
    bl func_ov041_02168774
    add r0, sp, #0x1c
    ldr r2, [r0, r8, lsl #2]
    add r0, sp, #0x14
    ldr r1, [r0, r8, lsl #2]
    add r0, r10, #0x3000
    str r1, [r0, #0x1b0]
    ldr r1, [r0, #0x188]
    str r5, [r0, #0x1a0]
    str r1, [r0, #0x1a4]
    ldr r1, [r0, #0x198]
    str r2, [r0, #0x1ac]
    str r1, [r0, #0x1b4]
    add r1, r10, #0x19c
    str r4, [r0, #0x19c]
    str r11, [r0, #0x1a8]
    mov r0, r10
    add r1, r1, #0x3000
    bl func_ov041_021688d4
    ldrh r0, [r4, #0xf0]
    tst r0, #0x80
    moveq r9, r11
    cmp r9, #0
    bne @L_021683b8
    mov r0, r4
    bl func_020812fc
    cmp r0, #1
    bne @L_021683b8
    add r0, r10, #0x3000
    ldr r1, [r0, #0x80]
    cmp r1, #0
    beq @L_021683b8
    ldr r1, [r10, #0x64]
    mov r5, #0
    str r5, [r0, #0x80]
    add r0, r10, r1, lsl #1
    ldrh r8, [r0, #0x44]
    ldr r0, =data_020e88a0
    mov r1, r4
    mov r2, r5
    bl _ZN11MatchEngine13func_02077e58EPhm
    mov r2, r0, lsl #0x10
    mov r0, r10
    mov r1, r8
    mov r3, r5
    str r5, [sp]
    mov r8, #1
    str r8, [sp, #4]
    mov r2, r2, lsr #0x10
    bl func_ov041_02169800
    mov r0, r10
    bl func_ov041_02167be8
    mov r0, r10
    mov r1, r5
    bl func_ov041_02167184
@L_021683b8:
    str r6, [sp]
    mov r8, #0xa0
    str r8, [sp, #4]
    mov r9, #0x10
    mov r5, #6
    str r9, [sp, #8]
    mov r11, #0x64
    ldr r0, =gSprButtonCtrl
    str r11, [sp, #0xc]
    ldr r0, [r0]
    mov r1, r5
    mov r2, #0xa
    mov r3, r7
    bl func_ov015_02162f70
    add r10, r6, #0x20
    mov r0, #0xa
    str r10, [sp]
    add r6, r0, #2
    stmib sp, {r8, r9}
    mov r0, r6, lsl #0x10
    mov r2, r0, lsr #0x10
    ldr r0, =gSprButtonCtrl
    str r11, [sp, #0xc]
    ldr r0, [r0]
    mov r1, r5
    mov r3, r7
    bl func_ov015_02162f70
    add r10, r10, #0x10
    str r10, [sp]
    stmib sp, {r8, r9}
    add r6, r6, #1
    mov r2, r6, lsl #0x10
    ldr r0, =gSprButtonCtrl
    str r11, [sp, #0xc]
    ldr r0, [r0]
    mov r1, r5
    mov r2, r2, lsr #0x10
    mov r3, r7
    bl func_ov015_02162f70
    cmp r4, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r0, [r4, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #1
    addne sp, sp, #0x30
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r10, #0x20
    stmia sp, {r0, r8, r9}
    add r0, r6, #2
    mov r2, r0, lsl #0x10
    mov r3, #0x64
    str r3, [sp, #0xc]
    ldr r0, =gSprButtonCtrl
    mov r1, r5, lsl #0x10
    ldr r0, [r0]
    mov r3, r7
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    bl func_ov015_02162f70
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov041_021684d4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x30
    mov r7, r0
    mov r6, r1
    add r2, sp, #0x14
    mov r1, #6
    mov r0, #0
@L_021684f0:
    strb r0, [r2]
    strb r0, [r2, #1]
    strb r0, [r2, #2]
    strb r0, [r2, #3]
    add r2, r2, #4
    subs r1, r1, #1
    bne @L_021684f0
    strb r0, [r2]
    ldr r1, [r6]
    ldr r0, =data_020e88a0
    mov r2, #0
    bl _ZN11MatchEngine13func_02077e58EPhm
    mov r5, r0
    cmp r5, #0
    movle r5, #0x97
    ldrle r0, [r6]
    mov r1, r5
    strleh r5, [r0, #0x70]
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_020768fcEm
    movs r4, r0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r6, #0x10]
    mov r0, r7
    add r1, r1, #8
    str r1, [sp]
    ldr r1, [r6, #0x14]
    add r3, r6, #8
    add r1, r1, #0x10
    str r1, [sp, #4]
    ldr r1, [r6, #0x18]
    str r1, [sp, #8]
    ldrh r1, [r4, #0x26]
    ldr r2, [r6, #4]
    bl func_ov041_02167344
    add r9, sp, #0x14
    mov r8, #0x19
    mov r0, r9
    mov r2, r8
    mov r1, #0
    bl MI_CpuFill8
    cmp r5, #0
    bne @L_021685b8
    mov r0, #0x52
    bl func_0209d8b8
    mov r1, r0
    mov r0, r9
    bl STD_CopyString
    b @L_021685c8
@L_021685b8:
    mov r0, r4
    mov r1, r9
    mov r2, r8
    bl MI_CpuCopy8
@L_021685c8:
    add r0, r6, #0xc
    str r0, [sp]
    ldr r0, [r6, #0x10]
    mov r2, #0
    add r0, r0, #0x1e
    str r0, [sp, #4]
    ldr r0, [r6, #0x14]
    add r1, sp, #0x14
    add r0, r0, #0x13
    str r0, [sp, #8]
    ldr r3, [r6, #0x18]
    mov r0, r7
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    ldr r2, [r6, #4]
    add r3, r6, #8
    bl func_ov041_02167598
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov041_02168618(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x30
    mov r8, r0
    mov r7, r1
    add r2, sp, #0x14
    mov r1, #6
    mov r0, #0
@L_02168634:
    strb r0, [r2]
    strb r0, [r2, #1]
    strb r0, [r2, #2]
    strb r0, [r2, #3]
    add r2, r2, #4
    subs r1, r1, #1
    bne @L_02168634
    strb r0, [r2]
    ldr r5, =data_020e88a0
    mov r4, #1
    ldr r1, [r7]
    mov r0, r5
    mov r2, r4
    bl _ZN11MatchEngine13func_02077e58EPhm
    mov r6, r0
    mov r0, r5
    mov r1, r6
    bl _ZN11MatchEngine13func_020768fcEm
    movs r5, r0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r0, [r5, #0x21]
    cmp r0, #0x18
    addeq r0, r8, #0x3000
    streq r4, [r0, #0x1bc]
    beq @L_021686a8
    cmp r0, #0x19
    addeq r0, r8, #0x3000
    streq r4, [r0, #0x1c4]
@L_021686a8:
    ldr r1, [r7, #0x10]
    mov r0, r8
    add r1, r1, #8
    str r1, [sp]
    ldr r1, [r7, #0x14]
    add r3, r7, #8
    add r1, r1, #0x30
    str r1, [sp, #4]
    ldr r1, [r7, #0x18]
    str r1, [sp, #8]
    ldrh r1, [r5, #0x26]
    ldr r2, [r7, #4]
    bl func_ov041_02167344
    add r9, sp, #0x14
    mov r4, #0x19
    mov r0, r9
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    cmp r6, #0
    bne @L_02168714
    mov r0, #0x52
    bl func_0209d8b8
    mov r1, r0
    mov r0, r9
    bl STD_CopyString
    b @L_02168724
@L_02168714:
    mov r0, r5
    mov r1, r9
    mov r2, r4
    bl MI_CpuCopy8
@L_02168724:
    add r0, r7, #0xc
    str r0, [sp]
    ldr r0, [r7, #0x10]
    mov r2, #0
    add r0, r0, #0x1e
    str r0, [sp, #4]
    ldr r0, [r7, #0x14]
    add r1, sp, #0x14
    add r0, r0, #0x33
    str r0, [sp, #8]
    ldr r3, [r7, #0x18]
    mov r0, r8
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    ldr r2, [r7, #4]
    add r3, r7, #8
    bl func_ov041_02167598
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov041_02168774(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x30
    mov r7, r0
    mov r6, r1
    add r2, sp, #0x14
    mov r1, #6
    mov r0, #0
@L_02168790:
    strb r0, [r2]
    strb r0, [r2, #1]
    strb r0, [r2, #2]
    strb r0, [r2, #3]
    add r2, r2, #4
    subs r1, r1, #1
    bne @L_02168790
    strb r0, [r2]
    ldr r4, =data_020e88a0
    ldr r1, [r6]
    mov r0, r4
    mov r2, #2
    bl _ZN11MatchEngine13func_02077e58EPhm
    mov r5, r0
    mov r0, r4
    mov r1, r5
    bl _ZN11MatchEngine13func_020768fcEm
    movs r4, r0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r0, [r4, #0x21]
    cmp r0, #0x18
    addeq r0, r7, #0x3000
    moveq r1, #1
    streq r1, [r0, #0x1c0]
    beq @L_02168808
    cmp r0, #0x19
    addeq r0, r7, #0x3000
    moveq r1, #1
    streq r1, [r0, #0x1c8]
@L_02168808:
    ldr r1, [r6, #0x10]
    mov r0, r7
    add r1, r1, #8
    str r1, [sp]
    ldr r1, [r6, #0x14]
    add r3, r6, #8
    add r1, r1, #0x40
    str r1, [sp, #4]
    ldr r1, [r6, #0x18]
    str r1, [sp, #8]
    ldrh r1, [r4, #0x26]
    ldr r2, [r6, #4]
    bl func_ov041_02167344
    add r9, sp, #0x14
    mov r8, #0x19
    mov r0, r9
    mov r2, r8
    mov r1, #0
    bl MI_CpuFill8
    cmp r5, #0
    bne @L_02168874
    mov r0, #0x52
    bl func_0209d8b8
    mov r1, r0
    mov r0, r9
    bl STD_CopyString
    b @L_02168884
@L_02168874:
    mov r0, r4
    mov r1, r9
    mov r2, r8
    bl MI_CpuCopy8
@L_02168884:
    add r0, r6, #0xc
    str r0, [sp]
    ldr r0, [r6, #0x10]
    mov r2, #0
    add r0, r0, #0x1e
    str r0, [sp, #4]
    ldr r0, [r6, #0x14]
    add r1, sp, #0x14
    add r0, r0, #0x43
    str r0, [sp, #8]
    ldr r3, [r6, #0x18]
    mov r0, r7
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    ldr r2, [r6, #4]
    add r3, r6, #8
    bl func_ov041_02167598
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov041_021688d4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x30
    mov r6, r1
    ldr r1, [r6]
    mov r7, r0
    ldrh r0, [r1, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r2, sp, #0x14
    mov r1, #6
    mov r0, #0
@L_02168910:
    strb r0, [r2]
    strb r0, [r2, #1]
    strb r0, [r2, #2]
    strb r0, [r2, #3]
    add r2, r2, #4
    subs r1, r1, #1
    bne @L_02168910
    strb r0, [r2]
    ldr r1, [r6]
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_02076ec8EP11MatchPlayer
    mov r5, r0
    cmp r5, #0
    movle r5, #0xc9
    ldrle r0, [r6]
    mov r1, r5
    strleh r5, [r0, #0x76]
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_020768fcEm
    movs r4, r0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r6, #0x10]
    mov r0, r7
    add r1, r1, #8
    str r1, [sp]
    ldr r1, [r6, #0x14]
    add r3, r6, #8
    add r1, r1, #0x60
    str r1, [sp, #4]
    ldr r1, [r6, #0x18]
    str r1, [sp, #8]
    ldrh r1, [r4, #0x26]
    ldr r2, [r6, #4]
    bl func_ov041_02167344
    add r9, sp, #0x14
    mov r8, #0x19
    mov r0, r9
    mov r2, r8
    mov r1, #0
    bl MI_CpuFill8
    cmp r5, #0
    bne @L_021689d4
    mov r0, #0x52
    bl func_0209d8b8
    mov r1, r0
    mov r0, r9
    bl STD_CopyString
    b @L_021689e4
@L_021689d4:
    mov r0, r4
    mov r1, r9
    mov r2, r8
    bl MI_CpuCopy8
@L_021689e4:
    add r0, r6, #0xc
    str r0, [sp]
    ldr r0, [r6, #0x10]
    mov r2, #0
    add r0, r0, #0x1e
    str r0, [sp, #4]
    ldr r0, [r6, #0x14]
    add r1, sp, #0x14
    add r0, r0, #0x63
    str r0, [sp, #8]
    ldr r3, [r6, #0x18]
    mov r0, r7
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    ldr r2, [r6, #4]
    add r3, r6, #8
    bl func_ov041_02167598
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov041_02168a34(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    add r0, r10, #0x3000
    ldr r1, [r0, #0x118]
    mov r4, #0
    cmp r1, #0
    beq @L_02168a64
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DPlaneCtrl_Destroy
    add r0, r10, #0x3000
    str r4, [r0, #0x118]
@L_02168a64:
    mov r9, #0
    mov r4, #0x1c
    mov r8, r9
    mov r7, r9
    ldr r6, =g3DPlaneCtrl
    mov r5, r4
    mov r11, r4
    b @L_02168adc
@L_02168a84:
    mla r0, r9, r5, r10
    add r0, r0, #0x3000
    ldr r1, [r0, #0x14c]
    cmp r1, #0
    beq @L_02168aac
    ldr r0, [r6]
    bl C3DPlaneCtrl_Destroy
    mla r0, r9, r4, r10
    add r0, r0, #0x3000
    str r8, [r0, #0x14c]
@L_02168aac:
    mla r0, r9, r11, r10
    add r0, r0, #0x3000
    ldr r1, [r0, #0x154]
    cmp r1, #0
    beq @L_02168ad8
    ldr r0, [r6]
    bl C3DSprFile_Release
    mov r0, #0x1c
    mla r0, r9, r0, r10
    add r0, r0, #0x3000
    str r7, [r0, #0x154]
@L_02168ad8:
    add r9, r9, #1
@L_02168adc:
    cmp r9, #4
    blt @L_02168a84
    ldr r0, =gSprButtonCtrl
    mov r1, #6
    ldr r0, [r0]
    bl func_ov015_02162140
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov041_02168b00(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r9, r0
    add r0, r9, #0x3000
    ldr r0, [r0, #0x120]
    cmp r0, #0
    addne sp, sp, #0x18
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =g3DPlaneCtrl
    mov r6, #1
    ldr r0, [r0]
    mov r2, r6
    mov r1, #4
    bl C3DPlaneCtrl_Create
    mov r8, #0
    mov r7, r0
    add r10, sp, #0x14
    str r8, [sp, #0x14]
    add r0, r9, #0x3000
    str r7, [r0, #0x120]
    str r8, [sp]
    mov r5, #0x50
    str r5, [sp, #4]
    mov r0, #8
    str r0, [sp, #8]
    ldr r1, =0x15e
    mov r0, r9
    str r1, [sp, #0xc]
    mov r1, r7
    mov r2, r10
    str r6, [sp, #0x10]
    mov r3, #0x10
    bl func_ov041_021674d4
    ldr r1, [r9, #0x10]
    mov r0, r9
    bl func_ov041_0216a170
    ldr r2, [r9, #0x10]
    mov r1, #0x24
    mla r0, r2, r1, r9
    add r0, r0, #0x3000
    str r5, [r0, #0x250]
    ldr r3, [r9, #0x10]
    mov r4, #0x20
    mla r0, r3, r1, r9
    add r0, r0, #0x3000
    str r4, [r0, #0x254]
    str r8, [sp]
    str r5, [sp, #4]
    mov r11, #7
    add r2, r5, #0xff
    str r4, [sp, #8]
    str r2, [sp, #0xc]
    str r6, [sp, #0x10]
    mov r0, r9
    mov r1, r7
    mov r2, r10
    mov r3, r11
    bl func_ov041_021674d4
    str r6, [sp]
    str r5, [sp, #4]
    str r4, [sp, #8]
    rsb r5, r11, #0x164
    str r5, [sp, #0xc]
    mov r2, r10
    mov r3, r11
    str r8, [sp, #0x10]
    mov r0, r9
    mov r1, r7
    bl func_ov041_021674d4
    ldr r0, [r9, #0x10]
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    b @L_02168c4c
    b @L_02168c4c
    b @L_02168c4c
    b @L_02168c3c
    b @L_02168c40
    b @L_02168c40
    b @L_02168c48
@L_02168c3c:
    b @L_02168c4c
@L_02168c40:
    mov r8, r6
    b @L_02168c4c
@L_02168c48:
    mov r8, #2
@L_02168c4c:
    str r8, [sp]
    mov r0, #0x58
    str r0, [sp, #4]
    mov r4, #8
    str r4, [sp, #8]
    add r2, sp, #0x14
    mov r0, r9
    mov r1, r7
    str r5, [sp, #0xc]
    mov r10, #1
    mov r3, #0x11
    str r10, [sp, #0x10]
    bl func_ov041_021674d4
    mov r0, #0x50
    str r0, [sp]
    mov r7, #0x10
    str r7, [sp, #4]
    mov r6, #4
    mov r11, #0
    str r4, [sp, #8]
    sub r5, r5, #1
    str r5, [sp, #0xc]
    mov r0, r9
    mov r2, r6
    mov r1, #0xa
    mov r3, r11
    str r10, [sp, #0x10]
    bl func_ov041_0216b704
    mov r0, #0xe0
    stmia sp, {r0, r7}
    mov r0, #9
    str r0, [sp, #8]
    mov r4, #2
    str r5, [sp, #0xc]
    mov r2, r6
    mov r0, r9
    mov r1, #0xb
    mov r3, r4
    str r10, [sp, #0x10]
    bl func_ov041_0216b704
    cmp r8, #0
    beq @L_02168d08
    cmp r8, #1
    beq @L_02168d20
    cmp r8, #2
    beq @L_02168d38
    b @L_02168d4c
@L_02168d08:
    mov r0, r9
    mov r1, r11
    bl func_ov041_02169a8c
    mov r0, r9
    bl func_ov041_02168e78
    b @L_02168d4c
@L_02168d20:
    mov r0, r9
    mov r1, r10
    bl func_ov041_02169a8c
    mov r0, r9
    bl func_ov041_02169198
    b @L_02168d4c
@L_02168d38:
    mov r0, r9
    mov r1, r4
    bl func_ov041_02169a8c
    mov r0, r9
    bl func_ov041_021694f4
@L_02168d4c:
    mov r6, #0x10
    mov r0, #0xc
    mov r9, r6
    mov r7, #0x20
    mov r8, #0xb0
    mov r10, #0
    mov r4, r0
    mov r5, #0x6e
    ldr r11, =gSprButtonCtrl
    b @L_02168da0
@L_02168d74:
    stmia sp, {r7, r8, r9}
    str r5, [sp, #0xc]
    mov r2, r6, lsl #0x10
    ldr r0, [r11]
    mov r1, r4
    mov r3, #0x50
    mov r2, r2, lsr #0x10
    bl func_ov015_02162f70
    add r6, r6, #1
    add r7, r7, #0x10
    add r10, r10, #1
@L_02168da0:
    cmp r10, #8
    blt @L_02168d74
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
