#include "ov034/Unk_ov034_02165d60.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_ov034_02165d60(u8 *arg0, s32 arg1);
extern "C" void func_ov034_02165d6c(s32 arg0);
extern "C" s32 func_ov034_02165d88(...);
extern "C" void func_ov034_02165e44(u8 *arg0, u32 arg1);
extern "C" s32 func_ov034_02165ec4(u8 *arg0);
extern "C" void func_ov034_02165ef4(void);
extern "C" s32 func_ov034_02165f78(...);
extern "C" s32 func_ov034_02165fc8(...);
extern "C" void func_ov034_0216602c(u8 *arg0, s32 arg1);
extern "C" s32 func_ov034_02166184(...);
extern "C" s32 func_ov034_021661d4(s32 arg0, s32 arg1);
extern "C" s32 func_ov034_02166200(...);
extern "C" s32 func_ov034_021662ec(...);
extern "C" s32 func_ov034_021664c8(...);
extern "C" void func_ov034_02166600(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov034_0216670c(...);
extern "C" s32 func_ov034_021668e0(...);
extern "C" void func_ov034_02166c1c(void);
extern "C" s32 func_ov034_02166c90(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4);
extern "C" void func_ov034_02166d14(u8 *arg0);
extern "C" char *func_ov034_02166d34(u8 *arg0);
extern "C" s32 func_ov034_02166d64(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov034_02166df8(u8 *arg0, s32 arg1);
extern "C" void func_ov034_02166e2c(u8 *arg0, s32 arg1);
extern "C" void func_ov034_02166ed8(void);
extern "C" void func_ov034_0216702c(u8 *arg0, s32 arg1);
extern "C" void func_ov034_0216705c(void);
extern "C" void func_ov034_02167374(u8 *arg0, s32 arg1);
extern "C" void func_ov034_02167400(u8 *arg0);
extern "C" s32 func_ov034_02167460(...);
extern "C" s32 func_ov034_021674e0(u8 *arg0);
extern "C" s32 func_ov034_0216759c(u8 *arg0);
extern "C" void func_ov034_021677b0(void);
extern "C" void func_ov034_021677b4(void);
extern "C" void func_ov034_02167820(void);
extern "C" void func_ov034_0216798c(void);
extern "C" s32 func_ov034_02167990(s32 arg0);

extern "C" char data_020c4639[];
extern "C" char data_020c463a[];
extern "C" char data_020c463b[];
extern "C" char data_020c463c[];
extern "C" char data_020c463e[];
extern "C" char gSprAnimCtrl[];
extern "C" char gSprButtonCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gDeltaTime[];
extern "C" char data_020c4ab4[];
extern "C" char gAudioPlayer[];
extern "C" char data_020d3d20[];
extern "C" char data_020e88a0[];
extern "C" char data_ov034_021679a4[];
extern "C" char data_ov034_021679b4[];
extern "C" char data_ov034_02167a78[];
extern "C" char data_ov034_02167ae4[];
extern "C" char data_ov034_02167b50[];
extern "C" char data_ov034_02167b74[];
extern "C" char data_ov034_02167b98[];
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" s32 _ZN13ScreenManager13FadeMainBlackEv(...);
extern "C" s32 _ZN13ScreenManager12SetNextSceneEii(...);
extern "C" s32 _ZN13ScreenManager13func_0203e090Eii(...);
extern "C" s32 _ZN13ScreenManager8PopSceneEi(...);
extern "C" s32 _ZN11MatchEngine11GetTeamInfoEi(...);
extern "C" s32 _ZN11MatchEngine13func_0206cd78Ei(...);
extern "C" s32 _ZN11MatchEngine13func_0206e84cEv(...);
extern "C" void _ZN11MatchEngine13func_0206e858EmPP11MatchPlayeri(void);
extern "C" s32 _ZN11MatchEngine13func_020795b4Eiii(...);
extern "C" void _ZN11MatchEngine13func_0207d244Eii(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 C3DPlaneCtrl_Acquire(...);
extern "C" void C3DPlaneCtrl_Release(void);
extern "C" s32 C3DPlaneCtrl_Create(...);
extern "C" void C3DPlaneCtrl_Destroy(void);
extern "C" void C3DPlaneCtrl_SetTex(void);
extern "C" void C3DPlaneCtrl_SetDepth(void);
extern "C" void C3DPlaneCtrl_SetPos(void);
extern "C" void C3DPlaneCtrl_SetTexWH(void);
extern "C" void C3DPlaneCtrl_SetTexST(void);
extern "C" void C3DPlaneCtrl_SetFlag(void);
extern "C" void C3DPlaneCtrl_SetGraphicIdx(void);
extern "C" void C3DPlaneCtrl_SetColorMask(void);
extern "C" void C3DSprFile_LoadFromPath(void);
extern "C" void C3DSprFile_TryFinalize(void);
extern "C" s32 C3DSprFile_Release(...);
extern "C" void C3DSprFile_IsInVram(void);
extern "C" void C3DSprFile_LoadToVram(void);
extern "C" void C3DSprFile_CreateTex16(void);
extern "C" s32 func_0209b7b0(...);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" void func_ov015_02130b14(void);
extern "C" s32 func_ov015_021319bc(...);
extern "C" s32 Graphics_FadeScreensBlack(...);
extern "C" void func_ov015_0213328c(void);
extern "C" s32 func_ov015_02133efc(...);
extern "C" s32 Archive_TryFinalize(...);
extern "C" void Archive_Close(void);
extern "C" void Archive_Deallocate(void);
extern "C" void Archive_SFPGetOffsetAndSize(void);
extern "C" s32 func_ov015_021616a4(...);
extern "C" void func_ov015_021616dc(void);
extern "C" s32 func_ov015_02161710(...);
extern "C" s32 func_ov015_02161760(...);
extern "C" void func_ov015_02161c78(void);
extern "C" void func_ov015_02161d00(void);
extern "C" void func_ov015_02161d24(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" s32 func_ov015_02161f84(...);
extern "C" void func_ov015_02161fdc(void);
extern "C" s32 func_ov015_02162140(...);
extern "C" s32 func_ov015_02162420(...);
extern "C" void func_ov015_021624f0(void);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_02162fb4(void);
extern "C" void sprintf(void);

extern "C" s32 func_ov034_02165d60(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x1D4) = arg1;
    return 0;
}

extern "C" void func_ov034_02165d6c(s32 arg0)
{
    func_ov015_02133efc((s32)data_ov034_02167b50, (arg0 + 0x10));
}

extern "C" asm s32 func_ov034_02165d88(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x21c
    add r11, sp, #0x1c
    mov r10, r0
    ldr r1, =data_ov034_02167b74
    mov r0, r11
    bl sprintf
    mov r9, #0
    mov r6, r9
    mov r5, #1
    add r8, sp, #0x11c
    ldr r7, =data_ov034_02167a78
    ldr r4, =g3DPlaneCtrl
    b @L_02165e24
@L_02165dc0:
    ldr r2, [r7, r9, lsl #2]
    ldr r1, =data_ov034_02167b98
    mov r0, r8
    bl sprintf
    ldr r1, [r10, #0x10]
    mov r0, r8
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl Archive_SFPGetOffsetAndSize
    cmp r0, #0
    beq @L_02165e20
    ldr r3, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r4]
    mov r1, #5
    str r6, [sp]
    stmib sp, {r5, r6}
    str r2, [sp, #0xc]
    str r3, [sp, #0x10]
    mov r2, r11
    mov r3, r6
    bl C3DSprFile_LoadFromPath
    add r1, r10, r9, lsl #2
    str r0, [r1, #0x1c]
@L_02165e20:
    add r9, r9, #1
@L_02165e24:
    cmp r9, #8
    blt @L_02165dc0
    add sp, sp, #0x21c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

struct E02165e44 { s32 a; s32 b; u8 c, d, e; u8 pad; };
static inline void clr02165e44(E02165e44 *e) { ((s32 (*)(...))Archive_Close)(e, 1); ((s32 (*)(...))Archive_Deallocate)(e); e->a = 0; e->b = 0; e->c = 0; e->d = 0; e->e = 0; }
extern "C" void func_ov034_02165e44(u8 *arg0, u32 arg1)
{
    if (arg1 >= 1)
        clr02165e44((E02165e44 *)(arg0 + 0x10));
    else
        clr02165e44(&((E02165e44 *)(arg0 + 0x10))[arg1]);
}

extern "C" s32 func_ov034_02165ec4(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x60) <= 0)
        return (s32)arg0;
    C3DSprFile_Release(*(s32 *)(g3DPlaneCtrl), *(s32 *)(arg0 + 0x60));
    *(s32 *)(arg0 + 0x60) = 0;
    return 0;
}

extern "C" asm void func_ov034_02165ef4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mvn r1, #0
    mov r5, r0
    bl func_ov034_02165e44
    mov r4, #0
    add r7, r5, #0x68
    mov r6, #0xa8
    b @L_02165f24
@L_02165f14:
    mla r1, r4, r6, r7
    mov r0, r5
    bl func_ov034_02166184
    add r4, r4, #1
@L_02165f24:
    cmp r4, #2
    blt @L_02165f14
    mov r4, #0
    mov r7, r4
    ldr r6, =g3DPlaneCtrl
    b @L_02165f60
@L_02165f3c:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x1c]
    cmp r1, #0
    beq @L_02165f5c
    ldr r0, [r6]
    bl C3DSprFile_Release
    add r0, r5, r4, lsl #2
    str r7, [r0, #0x1c]
@L_02165f5c:
    add r4, r4, #1
@L_02165f60:
    cmp r4, #8
    blt @L_02165f3c
    mov r0, r5
    bl func_ov034_02165ec4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov034_02165f78(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    ldr r4, =g3DPlaneCtrl
    b @L_02165fb4
@L_02165f8c:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x1c]
    cmp r1, #0
    beq @L_02165fb0
    ldr r0, [r4]
    bl C3DSprFile_TryFinalize
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
@L_02165fb0:
    add r5, r5, #1
@L_02165fb4:
    cmp r5, #8
    blo @L_02165f8c
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov034_02165fc8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, #0
    mov r7, r0
    mov r5, r6
    ldr r4, =g3DPlaneCtrl
    b @L_0216601c
@L_02165fe0:
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x1c]
    cmp r1, #0
    beq @L_02166018
    ldr r0, [r4]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_02166018
    add r0, r7, r6, lsl #2
    ldr r1, [r0, #0x1c]
    ldr r0, [r4]
    mov r2, r5
    mov r3, r5
    bl C3DSprFile_LoadToVram
@L_02166018:
    add r6, r6, #1
@L_0216601c:
    cmp r6, #8
    blo @L_02165fe0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov034_0216602c(u8 *arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r9;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    t0 = *(s32 *)(gSprButtonCtrl);
    func_ov015_02162140(t0, 3);
    t1 = *(s32 *)(gSprButtonCtrl);
    func_ov015_02162140(t1, 4);
    t2 = *(s32 *)(gSprButtonCtrl);
    func_ov015_02162140(t2, 5);
    t3 = *(s32 *)(gSprButtonCtrl);
    func_ov015_02162140(t3, 6);
    t4 = *(s32 *)(gSprButtonCtrl);
    func_ov015_02162140(t4, 7);
    *(s32 *)(arg0 + 0x1D0) = 3;
    func_ov034_02165ec4(arg0);
    r4 = 7;
    r5 = 6;
    r6 = 5;
    r9 = (s32)arg0;
    switch (arg1) {
        case 0:
            func_ov034_02166184(r9, (r9 + 0x110));
            func_ov034_021662ec(r9, (r9 + 0x68));
            return;
        case 1:
            func_ov034_0216670c(r9, (r9 + 0x110), r6, 0x20, 0x38, 0x38, 0x60, 0x98, 0x60);
            return;
        case 2:
            func_ov034_021668e0(r9, (r9 + 0x110), r5, 8, 0x38, 0x68, 0x68);
            return;
        case 3:
            func_ov034_0216670c(r9, (r9 + 0x110), r4, 0x20, 0x34, 0x38, 0x6C, 0x98, 0x6C);
        default:
            return;
    }
}

extern "C" asm s32 func_ov034_02166184(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r5, #0
    ldr r4, =g3DPlaneCtrl
    b @L_021661b4
@L_02166198:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_021661b0
    ldr r0, [r4]
    bl C3DPlaneCtrl_Destroy
@L_021661b0:
    add r5, r5, #1
@L_021661b4:
    cmp r5, #0x20
    blt @L_02166198
    mov r0, r6
    mov r1, #0
    mov r2, #0xa8
    bl MI_CpuFill8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov034_021661d4(s32 arg0, s32 arg1)
{
    switch (arg1) {
    case 0:
        return 0;
    case 1:
    case 2:
    case 3:
        return 1;
    }
    return arg0;
}

extern "C" asm s32 func_ov034_02166200(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r1, [r10, #0xc]
    bl func_ov034_021661d4
    movs r4, r0
    ldmmiia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, r10, #0x68
    mov r0, #0xa8
    mla r9, r4, r0, r1
    mov r7, #0
    ldr r6, =0x7fff
    ldr r5, =g3DPlaneCtrl
    b @L_02166254
@L_02166234:
    add r0, r9, r7, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_02166250
    ldr r0, [r5]
    mov r2, r6
    bl C3DPlaneCtrl_SetColorMask
@L_02166250:
    add r7, r7, #1
@L_02166254:
    cmp r7, #0x20
    blt @L_02166234
    sub r8, r4, #1
    add r6, r10, #0x68
    ldr r5, =0x4210
    ldr r4, =g3DPlaneCtrl
    mov r11, #0xa8
    b @L_021662d4
@L_02166274:
    mla r9, r8, r11, r6
    mov r7, #0
    b @L_021662c8
@L_02166280:
    add r0, r9, r7, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_021662c4
    ldr r0, [r10, #0xc]
    cmp r0, #2
    beq @L_021662b0
    ldr r0, [r10, #0x50]
    cmp r0, r1
    ldrne r0, [r10, #0x54]
    cmpne r0, r1
    beq @L_021662c4
@L_021662b0:
    add r1, r9, r7, lsl #2
    ldr r0, [r4]
    ldr r1, [r1, #0x20]
    mov r2, r5
    bl C3DPlaneCtrl_SetColorMask
@L_021662c4:
    add r7, r7, #1
@L_021662c8:
    cmp r7, #0x20
    blt @L_02166280
    sub r8, r8, #1
@L_021662d4:
    cmp r8, #0
    bge @L_02166274
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov034_021662ec(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    mov r8, #0
    mov r10, r0
    str r8, [sp, #0x24]
    mov r9, r1
    bl func_ov034_02166184
    ldr r5, [r10, #0xc]
    mov r4, #0x3e8
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x24
    mov r3, r8
    str r5, [r9, #0x1c]
    str r4, [r9, #0xa4]
    mov r7, #1
    str r7, [sp]
    bl func_ov034_02166c90
    mov r3, r4
    mov r1, r0
    ldr r4, =g3DPlaneCtrl
    str r1, [r10, #0x40]
    ldr r0, [r4]
    mov r2, r7
    bl C3DPlaneCtrl_SetDepth
    ldr r3, [r10, #0x1c]
    ldr r0, [r4]
    ldr r1, [r10, #0x40]
    mov r2, r7
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    str r8, [sp]
    ldr r0, [r4]
    ldr r1, [r10, #0x40]
    mov r2, r7
    mov r3, r8
    bl C3DPlaneCtrl_SetGraphicIdx
    str r7, [sp]
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x24
    mov r3, r8
    bl func_ov034_02166c90
    str r0, [r10, #0x44]
    mov r0, #5
    str r0, [sp]
    mov r6, #0x10
    str r6, [sp, #4]
    mov r5, #0x20
    str r5, [sp, #8]
    mov r4, #0xe0
    str r4, [sp, #0xc]
    str r5, [sp, #0x10]
    str r7, [sp, #0x14]
    str r8, [sp, #0x18]
    mov r11, #3
    str r11, [sp, #0x1c]
    mov r0, #0x64
    str r0, [sp, #0x20]
    ldr r1, [r10, #0x44]
    mov r0, r10
    mov r2, r7
    mov r3, #4
    bl func_ov034_021664c8
    str r7, [sp]
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x24
    mov r3, r8
    bl func_ov034_02166c90
    str r0, [r10, #0x48]
    mov r0, #6
    stmia sp, {r0, r6}
    mov r0, #0x40
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    str r5, [sp, #0x10]
    mov r0, #4
    str r0, [sp, #0x14]
    str r11, [sp, #0x18]
    str r11, [sp, #0x1c]
    mov r0, #0x64
    str r0, [sp, #0x20]
    ldr r1, [r10, #0x48]
    mov r3, #5
    mov r0, r10
    mov r2, r7
    bl func_ov034_021664c8
    mov r3, r8
    str r7, [sp]
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x24
    bl func_ov034_02166c90
    str r0, [r10, #0x4c]
    mov r1, #7
    stmia sp, {r1, r6}
    mov r0, #0x78
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    str r5, [sp, #0x10]
    str r1, [sp, #0x14]
    mov r0, #6
    str r0, [sp, #0x18]
    str r11, [sp, #0x1c]
    mov r0, #0x64
    str r0, [sp, #0x20]
    ldr r1, [r10, #0x4c]
    mov r2, r7
    mov r3, #6
    mov r0, r10
    bl func_ov034_021664c8
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x24
    bl func_ov034_02166600
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov034_021664c8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    ldr r8, =g3DPlaneCtrl
    mov r5, r3
    mov r4, r0
    ldrh r3, [sp, #0x40]
    ldr r0, [r8]
    mov r7, r1
    mov r6, r2
    bl C3DPlaneCtrl_SetDepth
    ldr r1, [sp, #0x3c]
    ldr r0, [r8]
    add r1, r4, r1, lsl #2
    ldr r3, [r1, #0x1c]
    mov r1, r7
    mov r2, r6
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    mov r4, #0
    str r4, [sp]
    ldr r0, [r8]
    ldr r3, [sp, #0x34]
    mov r1, r7
    mov r2, r6
    bl C3DPlaneCtrl_SetGraphicIdx
    mov r0, #0x64
    str r0, [sp]
    ldr r0, =gSprButtonCtrl
    ldrh r2, [sp, #0x20]
    ldr r0, [r0]
    mov r1, r5
    mov r3, r7
    bl func_ov015_02162fb4
    movs r8, r0
    beq @L_021665c0
    ldr r5, [sp, #0x30]
    ldr r1, [sp, #0x24]
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0x2c]
    str r5, [sp]
    bl func_ov015_02161c78
    mov r5, #1
    mov r1, r4
    mov r2, r5
    mov r3, r4
    add r0, r8, #0x3a
    bl func_ov015_02161d00
    ldr r2, [sp, #0x34]
    add r0, r8, #0x3a
    mov r1, r4
    mov r3, r4
    bl func_ov015_02161d24
    mov r2, r5
    add r0, r8, #0x3e
    mov r1, r4
    mov r3, r4
    bl func_ov015_02161d00
    add r0, r8, #0x3e
    mov r1, r4
    mov r3, r4
    ldr r2, [sp, #0x38]
    bl func_ov015_02161d24
@L_021665c0:
    ldr r0, [sp, #0x28]
    ldr r1, [sp, #0x24]
    mov r0, r0, lsl #0x10
    mov r2, r0, asr #0x10
    ldr r0, =g3DPlaneCtrl
    str r2, [sp]
    mov r3, r1, lsl #0x10
    ldr r0, [r0]
    mov r1, r7
    mov r2, r6
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov034_02166600(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02162140(t0, 1, arg2);
    s32 t1 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02162140(t1, 2);
    s32 v2 = ((s32 (*)(...))func_ov034_02166c90)((s32)arg0, arg1, arg2, 0, 1);
    *(s32 *)(arg0 + 0x50) = v2;
    s32 t2 = *(s32 *)(arg0 + 0x50);
    func_ov034_021664c8((s32)arg0, t2, 1, 1, 1, 0xA0, 0xA8, 0x30, 0x18, 0, 1, 2, 0x32);
    s32 v4 = ((s32 (*)(...))func_ov034_02166c90)((s32)arg0, arg1, arg2, 0, 1);
    *(s32 *)(arg0 + 0x54) = v4;
    s32 t3 = *(s32 *)(arg0 + 0x54);
    func_ov034_021664c8((s32)arg0, t3, 1, 2, 2, 0xD0, 0xA8, 0x30, 0x18, 2, 3, 2, 0x32);
}

extern "C" asm s32 func_ov034_0216670c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    mov r11, #0
    mov r10, r0
    str r11, [sp, #0x24]
    mov r9, r1
    mov r8, r2
    mov r7, r3
    bl func_ov034_02166184
    ldr r0, [r10, #0xc]
    mov r4, #0x1e
    str r0, [r9, #0x1c]
    mov r0, r10
    str r4, [r9, #0xa4]
    str r11, [r9]
    mov r6, #1
    mov r1, r9
    add r2, sp, #0x24
    mov r3, r11
    str r6, [sp]
    bl func_ov034_02166c90
    mov r3, r4
    mov r5, r0
    ldr r4, =g3DPlaneCtrl
    mov r1, r5
    ldr r0, [r4]
    mov r2, r6
    bl C3DPlaneCtrl_SetDepth
    add r0, r10, r8, lsl #2
    ldr r1, [r0, #0x1c]
    ldr r0, [r4]
    and r3, r1, #0xff
    mov r1, r5
    mov r2, r6
    bl C3DPlaneCtrl_SetTex
    str r11, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, r11
    bl C3DPlaneCtrl_SetGraphicIdx
    ldrsh r0, [sp, #0x50]
    mov r1, r5
    mov r3, r7
    str r0, [sp]
    ldr r0, [r4]
    mov r2, r6
    bl C3DPlaneCtrl_SetPos
    ldrsh r0, [sp, #0x54]
    add r1, r10, #0x100
    ldrsh r2, [sp, #0x58]
    strh r0, [r1, #0xbc]
    ldrsh r0, [sp, #0x5c]
    strh r2, [r1, #0xbe]
    ldrsh r2, [sp, #0x60]
    strh r0, [r1, #0xc0]
    mov r0, r10
    strh r2, [r1, #0xc2]
    mov r1, r9
    add r2, sp, #0x24
    mov r3, r11
    str r6, [sp]
    bl func_ov034_02166c90
    str r0, [r10, #0x58]
    mov r7, #3
    ldrsh r1, [sp, #0x54]
    str r7, [sp]
    ldrsh r0, [sp, #0x58]
    str r1, [sp, #4]
    mov r5, #0x30
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    mov r8, #0x17
    str r8, [sp, #0x10]
    str r11, [sp, #0x14]
    str r6, [sp, #0x18]
    mov r4, #4
    str r4, [sp, #0x1c]
    mov r0, #0xf
    str r0, [sp, #0x20]
    ldr r1, [r10, #0x58]
    mov r0, r10
    mov r2, r6
    mov r3, r7
    bl func_ov034_021664c8
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x24
    mov r3, r11
    str r6, [sp]
    bl func_ov034_02166c90
    str r0, [r10, #0x5c]
    ldrsh r0, [sp, #0x5c]
    str r4, [sp]
    ldrsh r1, [sp, #0x60]
    str r0, [sp, #4]
    mov r0, #2
    str r1, [sp, #8]
    str r5, [sp, #0xc]
    str r8, [sp, #0x10]
    str r0, [sp, #0x14]
    str r7, [sp, #0x18]
    str r4, [sp, #0x1c]
    mov r0, #0xf
    str r0, [sp, #0x20]
    ldr r1, [r10, #0x5c]
    mov r0, r10
    mov r2, r6
    mov r3, r7
    bl func_ov034_021664c8
    mov r0, r10
    mov r1, r6
    mov r2, r11
    bl func_ov034_02166c1c
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov034_021668e0(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r6, #0
    mov r10, r0
    str r6, [sp, #0x18]
    mov r9, r1
    mov r8, r2
    mov r7, r3
    bl func_ov034_02166184
    ldr r0, [r10, #0xc]
    mov r4, #0x1e
    mov r11, #1
    ldr r5, =gSprButtonCtrl
    str r4, [r9, #0xa4]
    str r6, [r9]
    str r0, [r9, #0x1c]
    ldr r0, [r5]
    mov r1, r11
    bl func_ov015_02162140
    ldr r0, [r5]
    mov r1, #2
    bl func_ov015_02162140
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x18
    mov r3, r6
    str r11, [sp]
    bl func_ov034_02166c90
    mov r3, r4
    mov r5, r0
    ldr r4, =g3DPlaneCtrl
    mov r1, r5
    ldr r0, [r4]
    mov r2, r11
    bl C3DPlaneCtrl_SetDepth
    add r0, r10, r8, lsl #2
    ldr r1, [r0, #0x1c]
    ldr r0, [r4]
    and r3, r1, #0xff
    mov r1, r5
    mov r2, r11
    bl C3DPlaneCtrl_SetTex
    str r6, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r11
    mov r3, r6
    bl C3DPlaneCtrl_SetGraphicIdx
    ldrsh r0, [sp, #0x40]
    mov r1, r5
    mov r3, r7
    str r0, [sp]
    ldr r0, [r4]
    mov r2, r11
    bl C3DPlaneCtrl_SetPos
    ldr r0, [r10, #0x60]
    cmp r0, #0
    bne @L_021669f4
    ldr r0, [r4]
    mov r1, #5
    mov r2, #3
    bl C3DSprFile_CreateTex16
    mov r0, r0, lsl #0x10
    mov r1, r0, asr #0x10
    str r1, [r10, #0x60]
    ldr r0, [r4]
    mov r2, r11
    mov r3, r6
    bl C3DSprFile_LoadToVram
@L_021669f4:
    add r7, sp, #0x18
    mov r6, #0
    mov r8, #1
    mov r0, r10
    mov r1, r9
    mov r2, r7
    mov r3, r6
    str r8, [sp]
    bl func_ov034_02166c90
    mov r5, r0
    ldr r4, =g3DPlaneCtrl
    mov r1, r5
    ldr r0, [r4]
    mov r2, r8
    mov r3, #0xa
    bl C3DPlaneCtrl_SetDepth
    ldr r3, [r10, #0x60]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r8
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    mov r0, #0x40
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r8
    mov r3, #0x100
    bl C3DPlaneCtrl_SetTexWH
    str r6, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r8
    mov r3, r6
    bl C3DPlaneCtrl_SetTexST
    ldrsh r0, [sp, #0x40]
    mov r1, r5
    mov r2, r8
    add r0, r0, #6
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r4]
    mov r3, r6
    bl C3DPlaneCtrl_SetPos
    str r8, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r8
    mov r3, #2
    bl C3DPlaneCtrl_SetFlag
    ldrb r1, [r10, #0x1d8]
    ldr r0, =data_ov034_021679a4
    ldr r0, [r0, r1, lsl #2]
    bl func_0209d8b8
    str r8, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    str r8, [sp, #0x10]
    str r8, [sp, #0x14]
    ldr r1, [r10, #0x60]
    mov r2, r8
    mov r3, r8
    bl func_ov015_0213328c
    mov r1, r9
    mov r2, r7
    mov r0, r10
    mov r3, r6
    str r8, [sp]
    bl func_ov034_02166c90
    mov r1, r0
    str r1, [r10, #0x64]
    ldr r0, [r4]
    mov r2, r8
    mov r3, #0xf
    bl C3DPlaneCtrl_SetDepth
    ldr r3, [r10, #0x20]
    ldr r0, [r4]
    ldr r1, [r10, #0x64]
    mov r2, r8
    and r3, r3, #0xff
    bl C3DPlaneCtrl_SetTex
    str r6, [sp]
    ldr r0, [r4]
    ldr r1, [r10, #0x64]
    mov r2, r8
    mov r3, r6
    bl C3DPlaneCtrl_SetGraphicIdx
    ldrsh r0, [sp, #0x48]
    ldrsh r3, [sp, #0x44]
    mov r2, r8
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [r10, #0x64]
    bl C3DPlaneCtrl_SetPos
    mov r0, #0x64
    str r0, [sp]
    ldr r0, =gSprButtonCtrl
    ldr r3, [r10, #0x64]
    ldr r0, [r0]
    mov r1, #7
    mov r2, #8
    bl func_ov015_02162fb4
    movs r5, r0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsh r1, [sp, #0x44]
    ldrsh r2, [sp, #0x48]
    mov r4, #0x18
    mov r3, #0x30
    str r4, [sp]
    bl func_ov015_02161c78
    mov r1, r6
    mov r2, r8
    mov r3, r6
    add r0, r5, #0x3a
    bl func_ov015_02161d00
    mov r1, r6
    mov r2, r6
    mov r3, r6
    add r0, r5, #0x3a
    bl func_ov015_02161d24
    add r0, r5, #0x3e
    mov r1, r6
    mov r2, r8
    mov r3, r6
    bl func_ov015_02161d00
    add r0, r5, #0x3e
    mov r2, r8
    mov r1, r6
    mov r3, r6
    bl func_ov015_02161d24
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov034_02166c1c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    cmp r1, #0
    addne r0, r5, #0x100
    ldrnesh r1, [r0, #0xbe]
    ldrnesh r3, [r0, #0xbc]
    ldr r0, =g3DPlaneCtrl
    moveq r1, #0xc0
    str r1, [sp]
    mov r4, r2
    ldr r0, [r0]
    ldr r1, [r5, #0x58]
    moveq r3, #0x100
    mov r2, #1
    bl C3DPlaneCtrl_SetPos
    cmp r4, #0
    addne r0, r5, #0x100
    ldrnesh r1, [r0, #0xc2]
    ldrnesh r3, [r0, #0xc0]
    ldr r0, =g3DPlaneCtrl
    moveq r1, #0xc0
    str r1, [sp]
    ldr r0, [r0]
    ldr r1, [r5, #0x5c]
    moveq r3, #0x100
    mov r2, #1
    bl C3DPlaneCtrl_SetPos
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov034_02166c90(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4)
{
    s32 v0;
    s32 t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    if (*(s32 *)(arg2) >= 0x20)
        return 0;
    if ((u32)arg3 >= (u32)1)
        return 0;
    t0 = *(s32 *)(g3DPlaneCtrl);
    v0 = C3DPlaneCtrl_Create(t0, arg4, 1, arg3);
    if (*(u8 *)(((u8 *)(arg1 + (arg3 << 1))) + 0xA1) == 0)
        *(u8 *)(((u8 *)(arg1 + (arg3 << 1))) + 0xA0) = *(s32 *)(arg2);
    t1 = (u8 *)(arg1 + (*(s32 *)(arg2) << 2));
    *(s32 *)(t1 + 0x20) = v0;
    t2 = (*(u8 *)(((u8 *)(arg1 + 0xA1)) + (arg3 << 1)) + 1);
    *(u8 *)(((u8 *)(arg1 + 0xA1)) + (arg3 << 1)) = t2;
    t3 = (*(s32 *)(arg2) + 1);
    *(s32 *)(arg2) = t3;
    return v0;
}

extern "C" void func_ov034_02166d14(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 6;
    *(s32 *)(arg0 + 0x1C8) = 1;
    _ZN13ScreenManager13FadeMainBlackEv(*(s32 *)(arg0 + 0x4), 1, 6);
}

extern "C" char *func_ov034_02166d34(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 6;
    *(s32 *)(arg0 + 0x1C8) = 3;
    _ZN13ScreenManager13FadeMainBlackEv(*(s32 *)(arg0 + 0x4), 3, 6);
    *(u8 *)(data_020c463c) = 1;
    return data_020c463c;
}

extern "C" s32 func_ov034_02166d64(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x8) = 8;
    Graphics_FadeScreensBlack(6, 8, arg2, arg3);
    s32 v1 = _ZN11MatchEngine11GetTeamInfoEi((s32)data_020e88a0, 0);
    *(u16 *)(data_020c463e) = (*(u16 *)(((u8 *)v1) + 0x2E) & 0xFFF);
    r4 = (s32)data_020e88a0;
    r5 = 0;
    if (*(s32 *)(arg0 + 0x1CC) == 1) {
        _ZN11MatchEngine13func_020795b4Eiii(r4, r5, 2, 0x9F);
        *(u8 *)(data_020c463a) = 1;
    }
    *(u8 *)(data_020c463b) = 1;
    return (s32)data_020c463b;
}

extern "C" s32 func_ov034_02166df8(u8 *arg0, s32 arg1)
{
    s32 t0;
    if (arg1 == 0) {
        t0 = *(s32 *)(gSprButtonCtrl);
        func_ov015_02162420(t0, 0x64);
    }
    *(s32 *)(arg0 + 0xC) = arg1;
    *(s32 *)(arg0 + 0x8) = 4;
    return 4;
}

extern "C" void func_ov034_02166e2c(u8 *arg0, s32 arg1)
{
    if (arg1 <= 0)
        return;
    ((s32 (*)(...))func_ov015_02161dd4)(*(s32 *)gSprButtonCtrl, (u16)arg1);
    switch (arg1) {
    case 5:
        *(s32 *)(arg0 + 0x1CC) = 0;
        break;
    case 6:
        *(s32 *)(arg0 + 0x1CC) = 1;
        break;
    case 7:
        *(s32 *)(arg0 + 0x1CC) = 2;
        break;
    case 3:
        *(s32 *)(arg0 + 0x110) = 0;
        ((s32 (*)(...))func_ov034_02166c1c)(arg0, 1);
        break;
    case 4:
        *(s32 *)(arg0 + 0x110) = 1;
        ((s32 (*)(...))func_ov034_02166c1c)(arg0, 0);
        break;
    }
}

extern "C" asm void func_ov034_02166ed8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r4, r0
    cmp r6, #0
    ldmleia sp!, {r4, r5, r6, pc}
    ldr r5, =gSprButtonCtrl
    mov r1, r6, lsl #0x10
    ldr r0, [r5]
    mov r1, r1, lsr #0x10
    bl func_ov015_02161dd4
    cmp r6, #8
    addls pc, pc, r6, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02166fe8
    b @L_02166ffc
    b @L_02166f30
    b @L_02166f90
    b @L_02167010
    b @L_02167010
    b @L_02167010
    b @L_02166fc0
@L_02166f30:
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02166f48
    cmp r0, #3
    beq @L_02166f78
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f48:
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4, #0x1cc]
    cmp r0, #2
    mov r0, r4
    bne @L_02166f70
    mov r1, #3
    bl func_ov034_02166df8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f70:
    bl func_ov034_02166d64
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f78:
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    bl func_ov034_02166d34
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f90:
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02166fa4
    cmp r0, #3
    ldmneia sp!, {r4, r5, r6, pc}
@L_02166fa4:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    mov r1, #0
    bl func_ov034_02166df8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166fc0:
    ldr r0, [r4, #0xc]
    cmp r0, #2
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    mov r1, #0
    bl func_ov034_02166df8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166fe8:
    ldr r0, [r5]
    mov r1, #1
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_02166ffc:
    ldr r0, [r5]
    mov r1, #2
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_02167010:
    ldr r0, [r5]
    mov r1, #1
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov034_0216702c(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    *(s32 *)(arg0) = (s32)data_ov034_02167ae4;
    *(s32 *)(arg0 + 0x4) = arg1;
    r2 = 0;
    r3 = 0;
    do {
        *(s32 *)(((u8 *)(arg0 + (r3 << 2))) + 0x1C) = r2;
        r3 = (r3 + 1);
    } while ((u32)r3 < (u32)8);
    return;
}

extern "C" asm void func_ov034_0216705c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r2, =gSprAnimCtrl
    mov r6, r0
    ldr r0, [r2]
    ldr r7, =gSprButtonCtrl
    mov r5, r1
    mov r4, #0
    bl func_ov015_02161760
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r7]
    bl func_ov015_021629ac
    cmp r0, #0
    beq @L_021670ac
    ldr r0, [r7]
    add r0, r0, #0xf00
    ldrh r5, [r0, #0x38]
    cmp r5, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    strh r4, [r0, #0x38]
@L_021670ac:
    ldr r0, [r6, #8]
    cmp r0, #5
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r6, #0xc]
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_021670d8
    b @L_02167210
    b @L_02167334
    b @L_02167210
@L_021670d8:
    tst r5, #1
    beq @L_0216716c
    mov r8, #1
    ldr r0, [r7]
    mov r1, r8
    bl func_ov015_021624f0
    mov r0, r6
    bl func_ov034_02167820
    movs r7, r0
    bne @L_0216711c
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    mov r1, r8
    bl func_ov034_02166df8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216711c:
    ldr r0, =gAudioPlayer
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    mov r5, #2
    mov r0, r6
    mov r1, r5
    bl func_ov034_02166df8
    cmp r7, #1
    streqb r4, [r6, #0x1d8]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r7, #2
    streqb r8, [r6, #0x1d8]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r7, #3
    streqb r5, [r6, #0x1d8]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r7, #4
    moveq r0, #3
    streqb r0, [r6, #0x1d8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216716c:
    tst r5, #2
    beq @L_02167198
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r7]
    mov r1, #2
    bl func_ov015_021624f0
    mov r0, r6
    bl func_ov034_02166d14
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167198:
    tst r5, #0x80
    beq @L_021671d4
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r6, #0x1cc]
    ldr r1, =0x55555556
    add r3, r0, #4
    smull r0, r4, r1, r3
    add r4, r4, r3, lsr #31
    mov r2, #3
    smull r0, r1, r2, r4
    sub r4, r3, r0
    str r4, [r6, #0x1cc]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021671d4:
    tst r5, #0x40
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gAudioPlayer
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r6, #0x1cc]
    ldr r1, =0x55555556
    add r3, r0, #2
    smull r0, r4, r1, r3
    add r4, r4, r3, lsr #31
    mov r2, #3
    smull r0, r1, r2, r4
    sub r4, r3, r0
    str r4, [r6, #0x1cc]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167210:
    tst r5, #1
    beq @L_021672ac
    ldr r0, [r7]
    mov r1, #1
    bl func_ov015_021624f0
    ldr r0, [r6, #0x110]
    cmp r0, #0
    bne @L_02167290
    mov r4, #3
    ldr r0, [r7]
    mov r1, r4
    bl func_ov015_021624f0
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r6, #0xc]
    cmp r0, #1
    bne @L_0216727c
    ldr r0, [r6, #0x1cc]
    cmp r0, #2
    mov r0, r6
    bne @L_02167274
    mov r1, r4
    bl func_ov034_02166df8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167274:
    bl func_ov034_02166d64
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216727c:
    cmp r0, #3
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r6
    bl func_ov034_02166d34
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167290:
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    mov r1, #0
    bl func_ov034_02166df8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021672ac:
    tst r5, #2
    beq @L_021672dc
    ldr r0, [r7]
    mov r1, #2
    bl func_ov015_021624f0
    ldr r0, =gAudioPlayer
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    mov r1, #0
    bl func_ov034_02166df8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021672dc:
    tst r5, #0x20
    bne @L_021672ec
    tst r5, #0x10
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_021672ec:
    ldr r1, [r6, #0x110]
    ldr r0, =gAudioPlayer
    eor r1, r1, #1
    str r1, [r6, #0x110]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r6, #0x110]
    cmp r0, #0
    mov r0, r6
    bne @L_02167324
    mov r1, #1
    mov r2, #0
    bl func_ov034_02166c1c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167324:
    mov r1, #0
    mov r2, #1
    bl func_ov034_02166c1c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02167334:
    tst r5, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r7]
    mov r1, #8
    bl func_ov015_021624f0
    ldr r0, =gAudioPlayer
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    mov r1, #0
    bl func_ov034_02166df8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov034_02167374(u8 *arg0, s32 arg1)
{
    s32 *zp;
    s32 z = 0;
    zp = &z;
    if (((s32 (*)(s32))func_ov015_02161760)(*(s32 *)gSprAnimCtrl) != 0 || *(s32 *)(arg0 + 8) != 0x5)
        return;
    switch (((s32 (*)(s32, s32, s32))func_ov015_02162750)(*(s32 *)gSprButtonCtrl, arg1, *zp)) {
    case 1:
        ((void (*)(u8 *, s32))func_ov034_02166e2c)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)gSprButtonCtrl));
        break;
    case 2:
        ((void (*)(u8 *, s32))func_ov034_02166ed8)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)gSprButtonCtrl));
        break;
    }
}

extern "C" void func_ov034_02167400(u8 *arg0)
{
    func_0209b7b0((s32)data_020d3d20, 0xFF, 0);
    s32 v1 = _ZN11MatchEngine13func_0206e84cEv((s32)data_020e88a0);
    _ZN11MatchEngine13func_0206cd78Ei((s32)data_020e88a0, v1);
    *(s32 *)(arg0 + 0x1C8) = 2;
    func_0209b7b0((s32)data_020d3d20, 0xFF, 0, 2);
}

extern "C" asm s32 func_ov034_02167460(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r5, r0
    ldr r1, [r5, #0x1d0]
    ldr r0, [r5, #0x1cc]
    cmp r1, r0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r4, #0
    mov r8, r4
    mov r7, #1
    ldr r6, =g3DPlaneCtrl
    b @L_021674c4
@L_02167494:
    ldr r0, [r5, #0x1cc]
    add r1, r4, r4, lsl #1
    add r3, r1, #2
    cmp r4, r0
    addeq r3, r1, #1
    str r8, [sp]
    add r1, r5, r4, lsl #2
    ldr r0, [r6]
    ldr r1, [r1, #0x44]
    mov r2, r7
    bl C3DPlaneCtrl_SetGraphicIdx
    add r4, r4, #1
@L_021674c4:
    cmp r4, #3
    blt @L_02167494
    ldr r0, [r5, #0x1cc]
    str r0, [r5, #0x1d0]
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov034_021674e0(u8 *arg0)
{
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t4;
    t0 = ((u32)(*(s32 *)(((u8 *)0x4000000)) & 0x1F00) >> 8);
    *(s32 *)(arg0 + 0x1B8) = t0;
    t1 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02161f84(t1);
    t2 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    func_ov015_021616a4(t2);
    ((VCall *)arg0)->f17();
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0x1D4) = (0 - 1);
    *(s32 *)(arg0 + 0x60) = 0;
    *(u8 *)(arg0 + 0x1D8) = 0;
    MI_CpuFill8((s32)(arg0 + 0x10), 0, 0xC);
    MI_CpuFill8((s32)(arg0 + 0x1C), 0, 0x20);
    MI_CpuFill8((s32)(arg0 + 0x68), 0, 0x150);
    t4 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    C3DPlaneCtrl_Acquire(t4);
    *(s32 *)(arg0 + 0x1C8) = 0;
    *(s32 *)(arg0 + 0x1CC) = 0;
    *(u8 *)(((u8 *)&data_020c463c)) = 0;
    return (s32)((u8 *)&data_020c463c);
}

extern "C" s32 func_ov034_0216759c(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 r5;
    s32 v0;
    s32 v2;
    s32 v4;
    s32 v7;
    s32 v13;
    s32 v15;
    s32 v19;
    s32 v21;
    s32 t0;
    s32 t1;
    s32 t3;
    s32 t6;
    s32 t7;
    s32 t8;
    s32 t9;
    s32 t10;
    r4 = arg0;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        case 0:
            r5 = 1;
            v0 = Archive_TryFinalize((s32)(r4 + 0x10), 1);
            if (v0 == 0)
                break;
            func_ov034_02165d6c((s32)r4);
            *(s32 *)(r4 + 0x8) = r5;
        case 1:
            v2 = Archive_TryFinalize((s32)(r4 + 0x10), 1);
            if (v2 == 0)
                break;
            func_ov034_02165d88((s32)r4);
            *(s32 *)(r4 + 0x8) = 2;
        case 2:
            v4 = func_ov034_02165f78((s32)r4);
            if (v4 == 0)
                break;
            func_ov034_02165fc8((s32)r4);
            *(s32 *)(r4 + 0x8) = 3;
        case 3:
            func_ov034_02166df8(r4, 0);
        case 4:
            t0 = *(s32 *)(((u8 *)&gSprAnimCtrl));
            v7 = func_ov015_02161760(t0);
            if (v7 != 0)
                break;
            t1 = *(s32 *)(r4 + 0xC);
            func_ov034_0216602c(r4, t1);
            func_ov034_02166200((s32)r4);
            ((VCall *)r4)->f19();
            *(s32 *)(r4 + 0x8) = 5;
        case 5:
            func_ov034_02167460((s32)r4);
            break;
        case 8:
            ((s32 (*)(...))func_ov034_02167400)((s32)arg0, r1);
            *(s32 *)(r4 + 0x8) = 6;
            break;
        case 6:
            t3 = *(s32 *)(((u8 *)&gSprAnimCtrl));
            v13 = func_ov015_02161760(t3, r1);
            if (v13 != 0)
                break;
            ((VCall *)r4)->f20();
            *(s32 *)(r4 + 0x8) = 7;
        case 7:
            v15 = ((VCall *)r4)->f22();
            if (v15 != 0)
                break;
            arg0 = (u8 *)*(s32 *)(r4 + 0x1C8);
            switch ((s32)arg0) {
                case 1:
                    t6 = *(s32 *)(r4 + 0x4);
                    _ZN13ScreenManager12SetNextSceneEii(t6, 0, 0x8A);
                    break;
                case 2:
                    t7 = *(s32 *)(r4 + 0x4);
                    _ZN13ScreenManager8PopSceneEi(t7, 0);
                    _ZN13ScreenManager8PopSceneEi(t7, 1);
                    break;
                case 3:
                    v19 = func_ov015_021319bc((s32)arg0);
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x6E) = 1;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x6F) = 1;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x70) = 0;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x71) = 0;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x72) = 0;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x73) = 0;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x74) = 0;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x68) = v19;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x69) = 0;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x6A) = 0;
                    *(u8 *)(((u8 *)&data_020c4ab4) + 0x6B) = 0;
                    *(s32 *)(((u8 *)&data_020c4ab4) + 0x64) = 0;
                    t8 = *(s32 *)(r4 + 0x4);
                    _ZN13ScreenManager13func_0203e090Eii(t8, 0, 0x60);
                    break;
            }
    }
    t9 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    t10 = *(s32 *)(((u8 *)&gDeltaTime));
    v21 = func_ov015_02161710(t9, t10);
    return v21;
}

extern "C" void func_ov034_021677b0(void)
{
}

extern "C" asm void func_ov034_021677b4(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020c4639
    mov r2, #0
    strb r2, [r1]
    mov r1, #0x4000000
    mov r4, r0
    ldr r0, [r1]
    ldr r2, [r4, #0x1b8]
    bic r0, r0, #0x1f00
    orr r2, r0, r2, lsl #8
    ldr r0, =gSprButtonCtrl
    str r2, [r1]
    ldr r0, [r0]
    bl func_ov015_02161fdc
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616dc
    mov r0, r4
    bl func_ov034_02165ef4
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DPlaneCtrl_Release
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov034_02167820(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    mov r10, r0
    ldr r0, [r10, #0x1d4]
    mov r6, #0
    cmp r0, #0
    addlt sp, sp, #0x40
    movlt r0, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r7, sp, #0
    mov r8, r6
    mov r0, r7
    mov r1, r8
    mov r2, #0x40
    bl MI_CpuFill8
    ldr r5, =data_020e88a0
    ldr r4, =data_ov034_021679b4
    mov r9, r8
    mov r11, #2
@L_0216786c:
    ldr r1, [r10, #0x1cc]
    mov r0, r6
    cmp r1, #0
    bne @L_02167888
    mov r0, r9
    bl func_ov015_02130ae8
    b @L_021678ac
@L_02167888:
    sub r1, r1, #1
    cmp r1, #1
    bhi @L_021678ac
    ldr r2, [r4, r9, lsl #2]
    mov r0, r5
    mov r1, r11
    bl _ZN11MatchEngine13func_0207d244Eii
    mov r1, r6
    bl func_ov015_02130b14
@L_021678ac:
    cmp r0, #0
    beq @L_021678d0
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, #1
    moveq r1, r6
    cmp r1, #1
    streq r0, [r7, r8, lsl #2]
    addeq r8, r8, #1
@L_021678d0:
    add r9, r9, #1
    cmp r9, #0x10
    blt @L_0216786c
    ldr r0, =data_020e88a0
    mov r1, #0
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldr r2, [r10, #0x1cc]
    sub r1, r2, #1
    cmp r1, #1
    bhi @L_02167908
    cmp r8, #0
    addeq sp, sp, #0x40
    moveq r0, #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02167908:
    cmp r2, #2
    ldreqb r0, [r0, #0x2d]
    cmpeq r0, #0
    addeq sp, sp, #0x40
    moveq r0, #3
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r8, #0xb
    addlt sp, sp, #0x40
    movlt r0, #4
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r10, #0x1d4]
    cmp r1, #0xb
    bne @L_0216794c
    cmp r2, #2
    addne sp, sp, #0x40
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216794c:
    cmp r2, #2
    addeq sp, sp, #0x40
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_020e88a0
    add r2, sp, #0
    mov r3, r8
    and r1, r1, #0xff
    bl _ZN11MatchEngine13func_0206e858EmPP11MatchPlayeri
    cmp r0, #0
    movne r0, #0
    moveq r0, #1
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov034_0216798c(void)
{
}

extern "C" s32 func_ov034_02167990(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}
