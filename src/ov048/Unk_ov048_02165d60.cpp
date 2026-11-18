#include "ov048/Unk_ov048_02165d60.hpp"
#include "game/vcall.hpp"
struct E02166174 { s32 a; s32 b; u8 c; u8 d; u8 e; u8 pad; };
struct S02166174 { u8 pad[0x38]; E02166174 arr[4]; };

extern "C" void func_ov048_02165d60(s32 arg0);
extern "C" void func_ov048_02165d8c(void);
extern "C" s32 func_ov048_02165e60(u8 *arg0);
extern "C" s32 func_ov048_02166074(s32 arg0);
extern "C" void func_ov048_021660e0(void);
extern "C" void func_ov048_02166174(S02166174 *arg0, s32 arg1);
extern "C" void func_ov048_02166220(void);
extern "C" s32 func_ov048_02166334(s32 arg0);
extern "C" void func_ov048_02166384(u8 *arg0);
extern "C" void func_ov048_021663bc(u8 *arg0);
extern "C" s32 func_ov048_021665d4(...);
extern "C" s32 func_ov048_021666a8(...);
extern "C" void func_ov048_02166780(u8 *arg0);
extern "C" s32 func_ov048_02166904(u8 *arg0);
extern "C" s32 func_ov048_02166a6c(s32 arg0);
extern "C" void func_ov048_02166bf8(void);
extern "C" s32 func_ov048_02166d40(u8 *arg0);
extern "C" s32 func_ov048_02166e88(s32 arg0, s32 arg1);
extern "C" s32 func_ov048_02166f24(...);
extern "C" void func_ov048_02166f68(s32 arg0);
extern "C" void func_ov048_02166f88(void);
extern "C" s32 func_ov048_02167138(s32 arg0, s32 arg1);
extern "C" s32 func_ov048_0216717c(s32 arg0);
extern "C" s32 func_ov048_021671a4(s32 arg0);
extern "C" s32 func_ov048_021671cc(...);
extern "C" void func_ov048_02167250(void);
extern "C" void func_ov048_021673d8(void);
extern "C" void func_ov048_02167a0c(void);
extern "C" void func_ov048_02167cc0(void);
extern "C" void func_ov048_02167e64(void);
extern "C" void func_ov048_02168294(void);
extern "C" s32 func_ov048_0216876c(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov048_021687a0(u8 *arg0);
extern "C" void func_ov048_02168894(void);
extern "C" void func_ov048_0216897c(void);
extern "C" void func_ov048_02168bfc(void);

extern "C" char g3DGameChar[];
extern "C" char gSprButtonCtrl[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gConfig[];
extern "C" char gAllocator[];
extern "C" char data_020c4ab4[];
extern "C" char data_020e88a0[];
extern "C" char data_ov048_0216ead0[];
extern "C" char data_ov048_0216eb68[];
extern "C" char data_ov048_0216eb78[];
extern "C" char data_ov048_0216eb7c[];
extern "C" char data_ov048_0216eb9c[];
extern "C" char data_ov048_0216ec1c[];
extern "C" char data_ov048_0216ed80[];
extern "C" char data_ov048_0216ed98[];
extern "C" char data_ov048_0216eda0[];
extern "C" char data_ov048_0216eda8[];
extern "C" char data_ov048_0216f0e4[];
extern "C" char data_ov048_0216f10c[];
extern "C" char data_ov048_0216f12c[];
extern "C" char data_ov048_0216f150[];
extern "C" char data_ov048_0216f178[];
extern "C" char data_ov048_0216f18c[];
extern "C" char data_ov048_0216f1a0[];
extern "C" char data_ov048_0216f1b4[];
extern "C" char data_ov048_0216f1c8[];
extern "C" char data_ov048_0216f1dc[];
extern "C" char data_ov048_0216f1f0[];
extern "C" char data_ov048_0216f204[];
extern "C" char data_ov048_0216f280[];
extern "C" void DC_FlushRange(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClear16(void);
extern "C" s32 _ZN10ConfigFile6GetIntEPKc(...);
extern "C" s32 _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(...);
extern "C" s32 _ZN11MatchEngine13func_0206f058Ev(...);
extern "C" void _ZN11MatchEngine13func_0206faa0Ei(void);
extern "C" s32 _ZN11MatchEngine13func_020739ccEi(...);
extern "C" s32 _ZN11MatchEngine13func_02073df8EPviih(...);
extern "C" void _ZN11MatchEngine13func_020767a4Em(void);
extern "C" void _ZN11MatchEngine13func_020768fcEm(void);
extern "C" void _ZN11MatchEngine13func_0207697cEiPti(void);
extern "C" void _ZN11MatchEngine13func_02078474Ev(void);
extern "C" void _ZN11MatchEngine13func_02078aacEv(void);
extern "C" void _ZN11MatchEngine13func_0207aa58Ei(void);
extern "C" s32 _fflt(...);
extern "C" s32 _ffix(...);
extern "C" s32 _fadd(...);
extern "C" s32 _fsub(...);
extern "C" s32 func_020808c4(...);
extern "C" void func_02080cb8(void);
extern "C" void func_02082c8c(void);
extern "C" s32 func_02089998(...);
extern "C" s32 func_02089bd4(...);
extern "C" s32 func_02089cbc(...);
extern "C" s32 func_02089e04(...);
extern "C" void func_02089f5c(void);
extern "C" s32 func_02089fb0(...);
extern "C" s32 func_0208a068(...);
extern "C" s32 func_0208a574(...);
extern "C" s32 C3DPlaneCtrl_Create(...);
extern "C" void C3DPlaneCtrl_Destroy(void);
extern "C" s32 C3DPlaneCtrl_SetTexAll(...);
extern "C" void C3DPlaneCtrl_SetPlttIdxAll(void);
extern "C" s32 C3DPlaneCtrl_SetDepthAll(...);
extern "C" s32 C3DPlaneCtrl_SetDepthStepAll(...);
extern "C" s32 C3DPlaneCtrl_SetPosAll(...);
extern "C" s32 C3DPlaneCtrl_SetGraphicIdxAll(...);
extern "C" s32 C3DPlaneCtrl_SetTex(...);
extern "C" s32 C3DPlaneCtrl_SetPos(...);
extern "C" s32 C3DPlaneCtrl_SetTexWH(...);
extern "C" s32 C3DPlaneCtrl_SetTexST(...);
extern "C" s32 C3DPlaneCtrl_SetGraphicIdx(...);
extern "C" void C3DPlaneCtrl_SetColorMask(void);
extern "C" void C3DPlaneCtrl_SetPos_2(void);
extern "C" s32 C3DPlaneCtrl_SetFlag_2(...);
extern "C" void C3DPlaneCtrl_ConvertTilesToTex(void);
extern "C" void C3DSprFile_LoadFromPath(void);
extern "C" s32 C3DSprFile_TryFinalize(...);
extern "C" void C3DSprFile_Release(void);
extern "C" void C3DSprFile_IsInVram(void);
extern "C" void C3DSprFile_LoadToVram(void);
extern "C" void C3DSprFile_CreateTex16(void);
extern "C" s32 func_ov015_02130b14(...);
extern "C" void func_ov015_0213178c(void);
extern "C" void func_ov015_02131838(void);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" void Archive_Close(void);
extern "C" void Archive_Deallocate(void);
extern "C" void func_ov015_02135f24(void);
extern "C" void func_ov015_02136080(void);
extern "C" void func_ov015_02136330(void);
extern "C" s32 func_ov015_02161d00(...);
extern "C" s32 func_ov015_02161d24(...);
extern "C" void func_ov015_02162fb4(void);
extern "C" void func_ov015_02163b78(void);
extern "C" void func_ov015_02163c08(void);
extern "C" void func_ov015_02163c34(void);
extern "C" void func_ov015_02163c3c(void);
extern "C" void func_ov015_02163c98(void);
extern "C" void func_ov015_02163ca4(void);
extern "C" void func_ov015_02163d08(void);
extern "C" void func_ov015_02163dcc(void);
extern "C" void func_ov015_02163dd4(void);
extern "C" void func_ov048_02168df8(void);
extern "C" void func_ov048_02168e7c(void);
extern "C" void func_ov048_02168f00(void);
extern "C" void func_ov048_02168ffc(void);
extern "C" void func_ov048_021690cc(void);
extern "C" void func_ov048_02169638(void);
extern "C" void func_ov048_0216a778(void);
extern "C" void func_ov048_0216a80c(void);
extern "C" void func_ov048_0216adf8(void);
extern "C" void func_ov048_0216aef4(void);
extern "C" void func_ov048_0216b004(void);
extern "C" s32 func_ov048_0216b284(...);
extern "C" void func_ov048_0216be28(void);
extern "C" void func_ov048_0216bf84(void);
extern "C" void func_ov048_0216c10c(void);
extern "C" void func_ov048_0216c158(void);
extern "C" void func_ov048_0216c300(void);
extern "C" void func_ov048_0216c4dc(void);
extern "C" void func_ov048_0216c720(void);
extern "C" void func_ov048_0216cf60(void);
extern "C" void func_ov048_0216e9f8(void);
extern "C" void memset(void);

extern "C" void func_ov048_02165d60(s32 arg0)
{
    Archive_RequestNewRead((s32)data_ov048_0216f0e4, (arg0 + 0x38));
    Archive_RequestNewRead((s32)data_ov048_0216f10c, (arg0 + 0x44));
}

extern "C" asm void func_ov048_02165d8c(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r4, r1
    ldr r1, [r4]
    mov r5, r0
    cmp r1, #0
    beq @L_02165db4
    cmp r1, #1
    beq @L_02165df0
    b @L_02165df8
@L_02165db4:
    ldr r0, =g3DPlaneCtrl
    mov r1, #0
    ldr r0, [r0]
    ldr r2, =data_ov048_0216f12c
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    str r1, [sp, #0x10]
    mov r1, #5
    mov r3, #1
    ldr r7, =data_ov048_0216ec1c
    bl C3DSprFile_LoadFromPath
    str r0, [r5, #0xc8]
    b @L_02165e04
@L_02165df0:
    ldr r7, =data_ov048_0216eb9c
    b @L_02165e04
@L_02165df8:
    add sp, sp, #0x14
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_02165e04:
    mov r6, #0
    str r6, [sp]
    ldr r1, [r5, #0x38]
    ldr r0, =data_ov048_0216f150
    mov r2, r7
    add r3, r5, #0x68
    bl func_ov015_02136080
    ldr r0, [r4]
    add r0, r0, #1
    str r0, [r4]
    cmp r0, #1
    ble @L_02165e40
    mov r0, r5
    mov r1, r6
    bl func_ov048_02166174
@L_02165e40:
    mov r0, #0
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov048_02165e60(u8 *arg0)
{
    s32 local[3];
    s32 r1;
    s32 r6;
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
    r1 = *(s32 *)(((u8 *)(arg0 + (*(s32 *)(arg0 + 0x170) << 2))) + 0x168);
    if (r1 > 0) {
        t0 = *(s32 *)(((u8 *)&g3DGameChar));
        func_02089bd4(t0, r1);
    }
    t1 = *(s32 *)(((u8 *)&g3DGameChar));
    t2 = *(u16 *)(arg0 + 0x1C);
    t3 = *(s32 *)(arg0 + 0x170);
    v1 = func_02089998(t1, t2, t3, 1, 1, 1);
    t4 = (u8 *)(arg0 + (*(s32 *)(arg0 + 0x170) << 2));
    *(s32 *)(t4 + 0x168) = v1;
    t5 = *(s32 *)(((u8 *)&g3DGameChar));
    t6 = *(s32 *)(((u8 *)(arg0 + (*(s32 *)(arg0 + 0x170) << 2))) + 0x168);
    func_02089cbc(t5, t6, 0xF423F, 0);
    *(u8 *)(arg0 + 0x2021) = 1;
    v3 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov048_0216f178), (s32)(arg0 + 0x2000));
    if ((0 - v3) > 0) {
        v4 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov048_0216f18c));
        v5 = _fflt(((0 - v4) << 0xC));
        _fadd(0x3F000000, v5);
    } else {
        v7 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov048_0216f1a0));
        v8 = _fflt(((0 - v7) << 0xC));
        _fsub(v8, 0x3F000000);
    }
    v10 = _ffix();
    v11 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov048_0216f1b4));
    r6 = v10;
    if (v11 > 0) {
        v12 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov048_0216f1c8));
        v13 = _fflt((v12 << 0xC));
        _fadd(0x3F000000, v13);
    } else {
        v15 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov048_0216f1dc));
        v16 = _fflt((v15 << 0xC));
        _fsub(v16, 0x3F000000);
    }
    v18 = _ffix();
    *(s32 *)(((u8 *)local)) = v18;
    *(s32 *)(((u8 *)local) + 0x8) = (0 - 0x1A4000);
    *(s32 *)(((u8 *)local) + 0x4) = r6;
    v19 = _ZN10ConfigFile6GetIntEPKc((u8 *)((u8 *)&gConfig), (u8 *)((u8 *)&data_ov048_0216f1f0), (0 - 0x1A4000));
    t7 = *(s32 *)(((u8 *)&g3DGameChar));
    t8 = *(s32 *)(((u8 *)(arg0 + (*(s32 *)(arg0 + 0x170) << 2))) + 0x168);
    t9 = *(s32 *)(((u8 *)local));
    t10 = *(s32 *)(((u8 *)local) + 0x4);
    func_02089fb0(t7, t8, t9, t10, *(s32 *)(((u8 *)local) + 0x8));
    t11 = *(s32 *)(((u8 *)&g3DGameChar));
    t12 = *(s32 *)(((u8 *)(arg0 + (*(s32 *)(arg0 + 0x170) << 2))) + 0x168);
    func_0208a068(t11, t12, v19, v19, v19);
    t13 = *(s32 *)(((u8 *)&g3DGameChar));
    t14 = *(s32 *)(((u8 *)(arg0 + (*(s32 *)(arg0 + 0x170) << 2))) + 0x168);
    func_02089e04(t13, t14, 0);
    t15 = *(s32 *)(((u8 *)&g3DGameChar));
    t16 = *(s32 *)(((u8 *)(arg0 + (*(s32 *)(arg0 + 0x170) << 2))) + 0x168);
    v23 = func_0208a574(t15, t16, 1);
    return v23;
}

extern "C" s32 func_ov048_02166074(s32 arg0)
{
    s32 r1;
    s32 r3;
    s32 r4;
    s32 v0;
    r3 = (s32)((u8 *)&gAllocator);
    r4 = arg0;
    arg0 = *(s32 *)(((u8 *)&gAllocator));
    r1 = (s32)((u8 *)&data_ov048_0216f204);
    if (arg0 == 0) {
        arg0 = 0;
    } else {
        v0 = _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(arg0, r1, ((r4 + 0x5C) + 0x2000), r3, 0, 0, 0, 1, 1);
        arg0 = v0;
    }
    if (arg0 != 0) {
        *(u16 *)(((u8 *)(r4 + 0x2000)) + 0x60) = ((u32)arg0 >> 1);
        arg0 = (r4 + 0x2000);
    }
    return arg0;
}

extern "C" asm void func_ov048_021660e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0
    mov r5, r0
    mov r9, #0xe
    mov r8, #3
    mov r7, r4
    ldr r6, =g3DPlaneCtrl
    b @L_02166164
@L_02166100:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x68]
    cmp r1, #0
    beq @L_02166160
    cmp r4, #0x2b
    bgt @L_02166160
    ldr r0, [r6]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_02166160
    cmp r4, #0x18
    bne @L_02166148
    add r1, r5, r4, lsl #2
    ldr r0, [r6]
    ldr r1, [r1, #0x68]
    mov r2, r9
    mov r3, r8
    bl C3DPlaneCtrl_ConvertTilesToTex
@L_02166148:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x68]
    ldr r0, [r6]
    mov r2, r7
    mov r3, r7
    bl C3DSprFile_LoadToVram
@L_02166160:
    add r4, r4, #1
@L_02166164:
    cmp r4, #0x30
    blt @L_02166100
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

static inline void r02166174(S02166174 *s, s32 i)
{
    ((s32 (*)(...))Archive_Close)(&s->arr[i], 1);
    ((s32 (*)(...))Archive_Deallocate)(&s->arr[i]);
    s->arr[i].a = 0;
    s->arr[i].b = 0;
    s->arr[i].c = 0;
    s->arr[i].d = 0;
    s->arr[i].e = 0;
}
extern "C" void func_ov048_02166174(S02166174 *arg0, s32 arg1)
{
    if (arg1 < 0 || arg1 >= 4) {
        for (arg1 = 0; arg1 < 4; arg1++)
            r02166174(arg0, arg1);
    } else {
        r02166174(arg0, arg1);
    }
}

extern "C" asm void func_ov048_02166220(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mvn r1, #0
    mov r5, r0
    bl func_ov048_02166174
    mov r4, #0
    add r7, r5, #0x174
    mov r6, #0xd4
    b @L_02166250
@L_02166240:
    mla r1, r4, r6, r7
    mov r0, r5
    bl func_ov048_021671cc
    add r4, r4, #1
@L_02166250:
    cmp r4, #8
    blt @L_02166240
    add r0, r5, #0x28
    add r0, r0, #0x2000
    mvn r1, #0
    bl func_ov015_02136330
    mov r4, #0
    ldr r6, =g3DPlaneCtrl
    b @L_02166290
@L_02166274:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x128]
    cmp r1, #0
    beq @L_0216628c
    ldr r0, [r6]
    bl C3DPlaneCtrl_Destroy
@L_0216628c:
    add r4, r4, #1
@L_02166290:
    cmp r4, #0xe
    blt @L_02166274
    mov r4, #0
    ldr r6, =g3DPlaneCtrl
    b @L_021662c0
@L_021662a4:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x68]
    cmp r1, #0
    beq @L_021662bc
    ldr r0, [r6]
    bl C3DSprFile_Release
@L_021662bc:
    add r4, r4, #1
@L_021662c0:
    cmp r4, #0x30
    blt @L_021662a4
    mov r4, #0
    ldr r6, =g3DPlaneCtrl
    b @L_021662f0
@L_021662d4:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x160]
    cmp r1, #0
    beq @L_021662ec
    ldr r0, [r6]
    bl C3DSprFile_Release
@L_021662ec:
    add r4, r4, #1
@L_021662f0:
    cmp r4, #2
    blt @L_021662d4
    ldr r1, [r5, #0x168]
    cmp r1, #0
    ble @L_02166310
    ldr r0, =g3DGameChar
    ldr r0, [r0]
    bl func_02089bd4
@L_02166310:
    ldr r1, [r5, #0x16c]
    cmp r1, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =g3DGameChar
    ldr r0, [r0]
    bl func_02089bd4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

#pragma push
#pragma optimization_level 2
extern "C" s32 func_ov048_02166334(s32 arg0)
{
    s32 r1;
    s32 r5;
    s32 v0;
    s32 t0;
    r5 = 0;
    while (r5 < 0x30) {
        r1 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x68);
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

extern "C" void func_ov048_02166384(u8 *arg0)
{
    *(s32 *)(arg0 + 0x18) = 5;
    if (*(u16 *)(arg0 + 0x1C) == 0)
        *(s32 *)(arg0 + 0x18) = 0;
    (*(VCall **)(arg0 + 4))->f15(arg0 + 0x18);
}

extern "C" void func_ov048_021663bc(u8 *arg0)
{
    s32 r4;
    s32 v0;
    s32 v12;
    s32 v17;
    s32 v18;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s16 t8;
    s32 t9;
    s32 t10;
    s32 t11;
    s32 t12;
    s16 t13;
    s32 t14;
    s32 t15;
    s32 t16;
    s32 t17;
    s32 t18;
    s32 t19;
    s32 t20;
    s16 t21;
    s16 t22;
    s32 t23;
    s32 t24;
    s32 t25;
    s32 t26;
    if (*(s32 *)(arg0 + 0x128) == 0) {
        t0 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        v0 = C3DPlaneCtrl_Create(t0, 3, 1);
        if (v0 == 0)
            return;
        *(s32 *)(arg0 + 0x128) = v0;
        t1 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_SetDepthStepAll(t1, v0, 0x1EA, (1 - 2));
        t2 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t3 = (*(s32 *)(arg0 + 0x68) & 0xFF);
        C3DPlaneCtrl_SetTex(t2, v0, 1, t3);
        t4 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_SetGraphicIdx(t4, v0, 1, 0, 0);
        t5 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t6 = (*(s32 *)(arg0 + 0x80) & 0xFF);
        C3DPlaneCtrl_SetTex(t5, v0, 2, t6);
        t7 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t8 = *(s16 *)(((u8 *)&data_ov048_0216ead0) + 0x60);
        C3DPlaneCtrl_SetPos(t7, v0, 2, t8, *(s16 *)(((u8 *)&data_ov048_0216ead0) + 0x62));
        t9 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_SetGraphicIdx(t9, v0, 2, 0, 0);
        t10 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t11 = (*(s32 *)(arg0 + 0x160) & 0xFF);
        C3DPlaneCtrl_SetTex(t10, v0, 3, t11);
        t12 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t13 = *(s16 *)(((u8 *)&data_ov048_0216ead0) + 0x68);
        C3DPlaneCtrl_SetPos(t12, v0, 3, t13, *(s16 *)(((u8 *)&data_ov048_0216ead0) + 0x6A));
        t14 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_SetTexST(t14, v0, 3, 0, 0);
        t15 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_SetTexWH(t15, v0, 3, 0x40, 0xC);
        t16 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_SetFlag_2(t16, v0, 2, 1);
    }
    if (*(s32 *)(arg0 + 0x12C) == 0) {
        t17 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        v12 = C3DPlaneCtrl_Create(t17, 1, 1);
        *(s32 *)(arg0 + 0x12C) = v12;
        t18 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t19 = (*(s32 *)(arg0 + 0xEC) & 0xFF);
        C3DPlaneCtrl_SetTexAll(t18, v12, t19);
        t20 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t21 = *(s16 *)(((u8 *)&data_ov048_0216ead0) + 0x4C);
        t22 = *(s16 *)(((u8 *)&data_ov048_0216ead0) + 0x4E);
        C3DPlaneCtrl_SetPosAll(t20, v12, t21, t22);
        t23 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_SetGraphicIdxAll(t23, v12, 0, 0);
        t24 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        C3DPlaneCtrl_SetDepthAll(t24, v12, 0x154);
    }
    r4 = 1;
    v17 = func_ov048_0216b284((s32)arg0);
    if (v17 != 5) {
        v18 = func_ov048_0216b284((s32)arg0);
        if (v18 != 6) {
            r4 = 0;
        }
    }
    t25 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    t26 = *(s32 *)(arg0 + 0x12C);
    C3DPlaneCtrl_SetFlag_2(t25, t26, 2, r4);
    return;
}

extern "C" asm s32 func_ov048_021665d4(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r1
    ldr r0, [r4]
    mov r6, r3
    cmp r0, #0
    bne @L_02166604
    ldr r0, =g3DPlaneCtrl
    mov r1, r2
    ldr r0, [r0]
    mov r2, #1
    bl C3DPlaneCtrl_Create
    str r0, [r4]
@L_02166604:
    ldr r5, =g3DPlaneCtrl
    ldr r1, [r4]
    ldr r0, [r5]
    mov r3, r6
    mov r2, #2
    bl C3DPlaneCtrl_SetFlag_2
    ldrb r0, [sp, #0x10]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r2, [sp, #0x20]
    ldr r0, [r5]
    ldr r1, [r4]
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    ldr r2, [sp, #0x28]
    ldr r0, [r5]
    ldr r1, [r4]
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetPlttIdxAll
    ldr r0, [r5]
    ldr r1, [r4]
    ldr r2, [sp, #0x24]
    mov r3, #0
    bl C3DPlaneCtrl_SetGraphicIdxAll
    ldr r0, [r5]
    ldr r1, [r4]
    ldr r2, [sp, #0x1c]
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl C3DPlaneCtrl_SetDepthAll
    ldr r0, [r5]
    ldr r1, [r4]
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x18]
    mov r2, r2, lsl #0x10
    mov r2, r2, asr #0x10
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos_2
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov048_021666a8(...)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    ldr r0, =gSprButtonCtrl
    str r3, [sp]
    mov r2, r2, lsl #0x10
    mov r12, r1, lsl #0x10
    mov r1, r2, lsr #0x10
    ldr r0, [r0]
    ldr r3, [sp, #0x18]
    mov r2, r12, lsr #0x10
    bl func_ov015_02162fb4
    movs r6, r0
    beq @L_02166770
    ldr r0, [sp, #0x20]
    ldrh r12, [sp, #0x1c]
    mov r4, #0
    mov r5, #1
    strb r0, [r6, #0x11]
    strb r5, [r6, #0xf]
    mov r1, r4
    mov r2, r4
    mov r3, r5
    add r0, r6, #0x3a
    strh r12, [r6, #0xc]
    bl func_ov015_02161d00
    mov r1, r4
    mov r2, r4
    mov r3, r4
    add r0, r6, #0x3a
    bl func_ov015_02161d24
    mov r1, r4
    mov r2, r4
    mov r3, r5
    add r0, r6, #0x3e
    bl func_ov015_02161d00
    add r0, r6, #0x3e
    mov r1, r4
    mov r2, r4
    mov r3, r5
    bl func_ov015_02161d24
    mov r3, r5
    add r0, r6, #0x42
    mov r1, r4
    mov r2, r4
    bl func_ov015_02161d00
    add r0, r6, #0x42
    mov r1, r4
    mov r2, r4
    mov r3, #2
    bl func_ov015_02161d24
@L_02166770:
    mov r0, r6
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" void func_ov048_02166780(u8 *arg0)
{
    s32 r4;
    s32 r5;
    s32 v0;
    r4 = 1;
    r5 = 0;
    v0 = func_ov048_0216b284((s32)arg0);
    switch (v0) {
        case 1:
            func_ov048_021665d4((s32)arg0, (s32)(arg0 + 0x130), r4, r4, r4, 0x68, 0xA8, 0x1D6, *(s32 *)(arg0 + 0x6C), 7, r5);
            r5 = r4;
            break;
        case 2:
        case 3:
        case 4:
            func_ov048_021665d4((s32)arg0, (s32)(arg0 + 0x130), r4, r4, r4, 0x68, 0xA8, 0x1D6, *(s32 *)(arg0 + 0x6C), r4, r5);
            r5 = r4;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            func_ov048_021665d4((s32)arg0, (s32)(arg0 + 0x130), r4, r4, r4, 0x68, 0xA8, 0x1D6, *(s32 *)(arg0 + 0x6C), 7, 2);
            break;
        case 0:
        default:
            func_ov048_021665d4((s32)arg0, (s32)(arg0 + 0x130), 1, 0, 0, 0, 0, 0, 0, 0, 0);
            break;
    }
    if (r5 == 0)
        return;
    func_ov048_021666a8((s32)arg0, 1, 1, 0x1E, *(s32 *)(arg0 + 0x130), 1, 1);
    return;
}

extern "C" s32 func_ov048_02166904(u8 *arg0)
{
    s32 v0;
    s32 v2;
    s32 v4;
    s32 v5;
    v0 = func_ov048_0216b284((s32)arg0);
    switch (v0) {
        case 1:
            func_ov048_021665d4((s32)arg0, (s32)(arg0 + 0x134), 1, 1, 1, 0xD0, 0xA8, 0x1D6, *(s32 *)(arg0 + 0x6C), 8, 0);
            v2 = func_ov048_021666a8((s32)arg0, 2, 1, 0x1E, *(s32 *)(arg0 + 0x134), 2, 1);
            return v2;
        case 2:
        case 3:
        case 4:
            func_ov048_021665d4((s32)arg0, (s32)(arg0 + 0x134), 1, 1, 1, 0xD0, 0xA8, 0x1D6, *(s32 *)(arg0 + 0x6C), 0, 0);
            v4 = func_ov048_021666a8((s32)arg0, 2, 1, 0x1E, *(s32 *)(arg0 + 0x134), 2, 1);
            return v4;
        case 0:
        default:
            v5 = func_ov048_021665d4((s32)arg0, (s32)(arg0 + 0x134), 1, 1, 1, 0xD0, 0xA8, 0x1D6, *(s32 *)(arg0 + 0x6C), 0, 2);
            return v5;
    }
}

extern "C" s32 func_ov048_02166a6c(s32 arg0)
{
    u8 *r5;
    s32 v0;
    s32 v1;
    s32 v3;
    s32 v7;
    s32 v8;
    v0 = func_ov048_0216b284(arg0);
    r5 = (u8 *)arg0;
    arg0 = v0;
    switch (arg0) {
        case 3:
        case 4:
            v1 = func_ov048_021665d4((s32)r5, (s32)(r5 + 0x13C), 1, 0, 0, 0, 0, 0, 0, 0, 0);
            return v1;
        case 1:
            func_ov048_021665d4((s32)r5, (s32)(r5 + 0x13C), 1, 1, 1, 0x98, 0xA7, 0x1D6, *(s32 *)(r5 + 0x74), 0, 0);
            v3 = func_ov048_021666a8((s32)r5, 4, 1, 0x1E, *(s32 *)(r5 + 0x13C), 0x800, 1);
            if (v3 == 0)
                return v3;
            *(u8 *)(((u8 *)v3) + 0xF) = 0;
            func_ov015_02161d00((v3 + 0x3A), 0, 1, 0);
            func_ov015_02161d24((v3 + 0x3A), 0, 0, 0);
            func_ov015_02161d00((v3 + 0x3E), 0, 1, 0);
            v7 = func_ov015_02161d24((v3 + 0x3E), 0, 1, 0);
            return v7;
        default:
            v8 = func_ov048_021665d4((s32)r5, (s32)(r5 + 0x13C), 1, 1, 1, 0x98, 0xA7, 0x1D6, *(s32 *)(r5 + 0x74), 0, 2);
            return v8;
    }
}

extern "C" asm void func_ov048_02166bf8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x1c
    mov r6, #0
    mov r8, r0
    mov r7, r6
    bl func_ov048_0216b284
    mov r5, #1
    cmp r0, #1
    str r5, [sp]
    mov r0, #0x68
    str r0, [sp, #4]
    mov r1, #0x18
    str r1, [sp, #8]
    ldr r0, =0x1d6
    mov r4, #0
    str r0, [sp, #0xc]
    ldr r0, [r8, #0x7c]
    moveq r7, #1
    str r0, [sp, #0x10]
    movne r6, #2
    str r4, [sp, #0x14]
    mov r0, r8
    mov r2, r5
    mov r3, r5
    add r1, r8, #0x148
    str r6, [sp, #0x18]
    bl func_ov048_021665d4
    cmp r7, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r1, [r8, #0x148]
    mov r0, #0x20
    str r1, [sp]
    str r0, [sp, #4]
    mov r0, r8
    mov r2, r5
    mov r1, #8
    mov r3, #0xa
    str r5, [sp, #8]
    bl func_ov048_021666a8
    movs r6, r0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r1, r4
    mov r2, r5
    mov r3, r4
    add r0, r6, #0x3a
    strb r4, [r6, #0xf]
    bl func_ov015_02161d00
    mov r1, r4
    mov r2, r4
    mov r3, r4
    add r0, r6, #0x3a
    bl func_ov015_02161d24
    mov r1, r4
    mov r2, r5
    add r0, r6, #0x3e
    mov r3, r4
    bl func_ov015_02161d00
    add r0, r6, #0x3e
    mov r1, r4
    mov r2, r5
    mov r3, r4
    bl func_ov015_02161d24
    mov r2, r5
    add r0, r6, #0x42
    mov r1, r4
    mov r3, r4
    bl func_ov015_02161d00
    add r0, r6, #0x42
    mov r1, r4
    mov r2, r4
    mov r3, r4
    bl func_ov015_02161d24
    ldr r0, =func_ov048_0216e9f8
    str r0, [r6, #0x28]
    ldr r0, [r8, #0x128]
    strh r0, [r6, #0x30]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov048_02166d40(u8 *arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 t0;
    r6 = 0;
    r7 = 0;
    v0 = func_ov048_0216b284((s32)arg0);
    r5 = 1;
    r4 = 2;
    if (v0 == 1) {
        r7 = 1;
    } else {
        r6 = 2;
    }
    v1 = func_ov048_021665d4((s32)arg0, (s32)(arg0 + 0x14C), r5, r5, 1, 0xD8, 0x18, (0xD8 + 0xFE), *(s32 *)(arg0 + 0x7C), r4, r6);
    if (r7 == 0)
        return v1;
    v2 = func_ov048_021666a8((s32)arg0, 7, r5, 10, *(s32 *)(arg0 + 0x14C), 0x10, r5);
    if (v2 == 0)
        return v2;
    *(u8 *)(((u8 *)v2) + 0xF) = 0;
    func_ov015_02161d00((v2 + 0x3A), 0, r5, 0);
    func_ov015_02161d24((v2 + 0x3A), 0, r4, 0);
    func_ov015_02161d00((v2 + 0x3E), 0, r5, 0);
    func_ov015_02161d24((v2 + 0x3E), 0, 3, 0);
    func_ov015_02161d00((v2 + 0x42), 0, r5, 0);
    func_ov015_02161d24((v2 + 0x42), 0, r4, 0);
    *(s32 *)(((u8 *)v2) + 0x28) = (s32)((u8 *)&func_ov048_0216e9f8);
    t0 = *(s32 *)(arg0 + 0x128);
    *(u16 *)(((u8 *)v2) + 0x30) = t0;
    return t0;
}

extern "C" s32 func_ov048_02166e88(s32 arg0, s32 arg1)
{
    switch (arg1) {
        case 1:
            return 0;
        case 2:
            return 1;
        case 3:
            return 2;
        case 4:
            return 2;
        case 7:
            return -1;
        case 9:
            return -1;
        case 10:
            return -1;
        case 11:
            return -1;
        case 8:
            return -1;
        case 5:
            return 2;
        case 6:
            return 3;
        case 0:
        default:
            return -1;
    }
}

extern "C" asm s32 func_ov048_02166f24(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl func_ov048_02166e88
    cmp r0, #0
    movlt r0, #0
    ldmltia sp!, {r4, r5, r6, pc}
    add r2, r6, #0x174
    mov r1, #0xd4
    mla r0, r1, r0, r2
    ldr r1, [r0, #0x1c]
    cmp r1, r5
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r4, #0
    moveq r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov048_02166f68(s32 arg0)
{
    s32 v0 = func_ov048_0216b284(arg0);
    func_ov048_02166f24(arg0, v0, 0);
}

extern "C" asm void func_ov048_02166f88(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r6, r0
    ldr r5, =g3DPlaneCtrl
    bl func_ov048_0216b284
    mov r1, r0
    mov r0, r6
    bl func_ov048_02166e88
    movs r4, r0
    bne @L_02166fb4
    ldr r8, =0x7fff
    b @L_02166fb8
@L_02166fb4:
    ldr r8, =0x4210
@L_02166fb8:
    ldr r0, [r5]
    ldr r1, [r6, #0x128]
    mov r2, r8
    bl C3DPlaneCtrl_SetColorMask
    ldr r7, =g3DGameChar
    ldr r1, [r6, #0x168]
    ldr r0, [r7]
    mov r2, r8
    bl func_02089f5c
    ldr r0, [r7]
    ldr r1, [r6, #0x16c]
    mov r2, r8
    bl func_02089f5c
    ldr r0, [r5]
    ldr r1, [r6, #0x148]
    mov r2, r8
    bl C3DPlaneCtrl_SetColorMask
    ldr r0, [r5]
    ldr r1, [r6, #0x14c]
    mov r2, r8
    bl C3DPlaneCtrl_SetColorMask
    cmp r4, #0
    bne @L_02167050
    ldr r7, =data_020e88a0
    ldrh r1, [r6, #0x1c]
    mov r0, r7
    bl func_02082c8c
    cmp r0, #0
    beq @L_02167050
    ldrh r1, [r6, #0x1c]
    mov r0, r7
    bl _ZN11MatchEngine13func_0206faa0Ei
    cmp r0, #0
    bne @L_02167050
    ldr r0, [r5]
    ldr r1, [r6, #0x138]
    ldr r2, =0x7fff
    b @L_0216705c
@L_02167050:
    ldr r0, [r5]
    ldr r1, [r6, #0x138]
    ldr r2, =0x4210
@L_0216705c:
    bl C3DPlaneCtrl_SetColorMask
    cmp r4, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, r6, #0x174
    mov r0, #0xd4
    mla r10, r4, r0, r1
    mov r8, #0
    add r7, r6, #0x2000
    ldr r9, =0x7fff
    b @L_021670c0
@L_02167084:
    add r0, r10, r8, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_021670bc
    ldr r0, [r10, #0x1c]
    cmp r0, #6
    ldreq r0, [r7, #0x58]
    cmpeq r0, r1
    beq @L_021670bc
    add r1, r10, r8, lsl #2
    ldr r0, [r5]
    ldr r1, [r1, #0x20]
    mov r2, r9
    bl C3DPlaneCtrl_SetColorMask
@L_021670bc:
    add r8, r8, #1
@L_021670c0:
    cmp r8, #0x11
    blt @L_02167084
    sub r9, r4, #1
    add r7, r6, #0x174
    ldr r6, =0x4210
    mov r11, #0
    mov r4, #0xd4
    b @L_02167118
@L_021670e0:
    mla r10, r9, r4, r7
    mov r8, r11
    b @L_0216710c
@L_021670ec:
    add r0, r10, r8, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_02167108
    ldr r0, [r5]
    mov r2, r6
    bl C3DPlaneCtrl_SetColorMask
@L_02167108:
    add r8, r8, #1
@L_0216710c:
    cmp r8, #0x11
    blt @L_021670ec
    sub r9, r9, #1
@L_02167118:
    cmp r9, #0
    bge @L_021670e0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov048_02167138(s32 arg0, s32 arg1)
{
    s32 r0;
    s32 r6;
    s32 v0;
    s32 v1;
    v0 = func_ov048_02166e88(arg0, arg1);
    r0 = v0;
    if (r0 < 0) {
        r0 = 0;
    }
    if ((r0 + 2) >= 8)
        return r0;
    r6 = (r0 + 2);
    do {
        v1 = func_ov048_021671cc(arg0, ((r6 * 0xD4) + (arg0 + 0x174)));
        r0 = v1;
        r6 = (r6 + 1);
    } while (r6 < 8);
    return r0;
}

extern "C" s32 func_ov048_0216717c(s32 arg0)
{
    s32 v0;
    s32 v1;
    v0 = func_ov048_02166e88(arg0, 2);
    v1 = func_ov048_021671cc(arg0, ((v0 * 0xD4) + (arg0 + 0x174)), (arg0 + 0x174));
    return v1;
}

extern "C" s32 func_ov048_021671a4(s32 arg0)
{
    s32 v0;
    s32 v1;
    v0 = func_ov048_02166e88(arg0, 6);
    v1 = func_ov048_021671cc(arg0, ((v0 * 0xD4) + (arg0 + 0x174)), (arg0 + 0x174));
    return v1;
}

extern "C" asm s32 func_ov048_021671cc(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, #0
    ldr r4, =g3DPlaneCtrl
    b @L_02167200
@L_021671e4:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_021671fc
    ldr r0, [r4]
    bl C3DPlaneCtrl_Destroy
@L_021671fc:
    add r5, r5, #1
@L_02167200:
    cmp r5, #0x11
    blt @L_021671e4
    ldr r1, [r6, #0x64]
    cmp r1, #0
    ble @L_02167220
    ldr r0, =g3DPlaneCtrl
    ldr r0, [r0]
    bl C3DSprFile_Release
@L_02167220:
    mov r0, r7
    bl func_ov048_0216c4dc
    mov r4, #0xd4
    mov r0, r6
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    mov r0, r6
    mov r1, r4
    bl DC_FlushRange
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov048_02167250(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r7, r1
    ldr r1, [r7, #0x1c]
    mov r8, r0
    cmp r1, #1
    ldreq r11, [r7]
    mov r0, r8
    mov r1, r7
    movne r11, #0
    bl func_ov048_021671cc
    mov r0, r8
    bl func_ov048_0216717c
    mov r0, #1
    str r0, [r7, #0x1c]
    ldr r0, [r8, #0x84]
    mov r6, #0
    mov r3, #6
    mov r2, #0x17c
    mov r1, #0x48
    str r0, [r7, #0x74]
    mov r0, #0x30
    strh r1, [r7, #0x7e]
    strh r0, [r7, #0x80]
    str r2, [r7, #0xd0]
    add r5, sp, #4
    str r6, [r7, #0x78]
    strb r6, [r7, #0x7c]
    str r3, [r7, #4]
    str r3, [r7, #8]
    mov r0, r8
    mov r1, r7
    mov r2, r5
    str r6, [sp, #4]
    bl func_ov048_02168e7c
    ldr r0, [r7, #8]
    cmp r0, #0
    ble @L_02167348
    mov r4, #0x9c
    mov r10, #0x10
    mov r9, #0x14
@L_021672f4:
    add r3, r7, r6, lsl #2
    strh r4, [r3, #0xa2]
    strh r10, [r3, #0xa4]
    ldrsh r2, [r7, #0x7e]
    mov r0, r8
    mov r1, r7
    add r2, r2, #7
    strh r2, [r3, #0x82]
    ldrsh lr, [r7, #0x80]
    ldrsh r12, [r3, #0xa4]
    mov r2, r5
    add lr, lr, #0x10
    mla r12, r6, r12, lr
    strh r12, [r3, #0x84]
    mov r3, r6
    str r9, [sp]
    bl func_ov048_02168f00
    ldr r0, [r7, #8]
    add r6, r6, #1
    cmp r6, r0
    blt @L_021672f4
@L_02167348:
    mov r5, #0
    add r4, sp, #4
    mov r0, r8
    mov r1, r7
    mov r2, r4
    mov r3, r5
    str r5, [sp]
    bl func_ov048_02168ffc
    mov r0, r8
    mov r1, r7
    mov r2, r4
    bl func_ov048_021690cc
    mov r0, r7
    mov r1, r11
    bl func_ov015_02135f24
    mov r0, r8
    mov r1, r7
    bl func_ov048_0216c720
    mov r0, r8
    mov r1, r7
    mov r2, r5
    bl func_ov048_0216be28
    mov r2, r5
    mov r0, r8
    mov r1, r7
    bl func_ov048_0216bf84
    mov r0, r8
    mov r1, r7
    bl func_ov048_0216a778
    ldr r1, [r7]
    mov r0, r8
    mov r2, #1
    bl func_ov048_0216c300
    strh r0, [r8, #0x1e]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov048_021673d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    mov r6, r1
    ldr r1, [r6, #0x1c]
    mov r7, r0
    cmp r1, #3
    ldreq r0, [r6]
    mov r9, #0
    streq r0, [sp, #0x1c]
    movne r0, r9
    strne r0, [sp, #0x1c]
    mov r0, r7
    mov r1, r6
    ldr r8, =data_ov048_0216ead0
    bl func_ov048_021671cc
    mov r0, r7
    bl func_ov048_02168bfc
    mov r0, #3
    str r0, [r6, #0x1c]
    ldr r0, [r7, #0x88]
    mov r10, #1
    str r0, [r6, #0x74]
    str r10, [r6, #0x78]
    strb r10, [r6, #0x7c]
    add r0, r7, #0x2000
    ldr r1, [r0, #0x14]
    mov r0, #8
    str r0, [r6, #8]
    ldr r0, =0x14a
    str r1, [r6, #4]
    str r0, [r6, #0xd0]
    ldrsh r0, [r8, #0x2c]
    mov r3, #0x10
    mov r2, #0x20
    strh r0, [r6, #0x7e]
    ldrsh r4, [r8, #0x2e]
    mov r5, #0xa
    mov r0, r7
    strh r3, [r6, #0xca]
    strh r2, [r6, #0xcc]
    strh r4, [r6, #0x80]
    str r9, [sp, #0x24]
    mov r1, r6
    add r2, sp, #0x24
    mov r3, r9
    str r5, [sp]
    bl func_ov048_02168df8
    movs r1, r0
    str r1, [sp, #0x20]
    beq @L_02167568
    ldr r0, [r6, #0xd0]
    ldr r4, =g3DPlaneCtrl
    mov r2, r0, lsl #0x10
    ldr r0, [r4]
    mov r2, r2, lsr #0x10
    bl C3DPlaneCtrl_SetDepthAll
    ldrsh r2, [r6, #0x7e]
    ldrsh r3, [r6, #0x80]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    bl C3DPlaneCtrl_SetPos_2
    ldr r2, [r6, #0x74]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    mov r2, r9
    mov r3, r9
    bl C3DPlaneCtrl_SetGraphicIdxAll
    str r9, [sp]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    mov r2, r10
    mov r3, r10
    bl C3DPlaneCtrl_SetGraphicIdx
    str r9, [sp]
    mov r2, r5
    mov r5, #2
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    mov r3, r5
    bl C3DPlaneCtrl_SetGraphicIdx
    ldrsh r8, [r8, #0x5e]
    mov r9, #0
    b @L_02167560
@L_02167534:
    sub r0, r5, #2
    add r0, r8, r0, lsl #4
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    mov r2, r5
    mov r3, r9
    bl C3DPlaneCtrl_SetPos
    add r5, r5, #1
@L_02167560:
    cmp r5, #0xa
    ble @L_02167534
@L_02167568:
    mov r4, #1
    mov r10, #0
    add r2, sp, #0x24
    mov r0, r7
    mov r1, r6
    mov r3, r10
    str r4, [sp]
    bl func_ov048_02168df8
    str r0, [sp, #0x20]
    ldr r2, =data_ov048_0216ead0
    str r4, [sp]
    ldrsh r3, [r2, #0x18]
    add r1, sp, #0x20
    mov r0, r7
    str r3, [sp, #4]
    ldrsh r5, [r2, #0x1a]
    mov r2, r4
    mov r3, r4
    str r5, [sp, #8]
    ldr r5, [r6, #0xd0]
    sub r5, r5, #1
    str r5, [sp, #0xc]
    ldr r5, [r7, #0x70]
    str r5, [sp, #0x10]
    str r10, [sp, #0x14]
    str r10, [sp, #0x18]
    bl func_ov048_021665d4
    mov r0, #0x1e
    str r0, [sp]
    ldr r0, =gSprButtonCtrl
    ldr r3, [sp, #0x20]
    ldr r0, [r0]
    mov r1, #3
    mov r2, #5
    bl func_ov015_02162fb4
    movs r8, r0
    beq @L_02167680
    mov r1, r10
    mov r2, r4
    mov r3, r10
    strb r4, [r8, #0x11]
    mov r5, #0x220
    add r0, r8, #0x3a
    strh r5, [r8, #0xc]
    bl func_ov015_02161d00
    mov r1, r10
    mov r2, r10
    mov r3, r10
    add r0, r8, #0x3a
    bl func_ov015_02161d24
    add r0, r8, #0x3e
    mov r1, r10
    mov r2, r4
    mov r3, r10
    bl func_ov015_02161d00
    add r0, r8, #0x3e
    mov r1, r10
    mov r2, r4
    mov r3, r10
    bl func_ov015_02161d24
    mov r2, r4
    add r0, r8, #0x42
    mov r1, r10
    mov r3, r10
    bl func_ov015_02161d00
    add r0, r8, #0x42
    mov r1, r10
    mov r2, r10
    mov r3, r10
    bl func_ov015_02161d24
@L_02167680:
    mov r9, #1
    add r2, sp, #0x24
    mov r0, r7
    mov r1, r6
    mov r3, r10
    str r9, [sp]
    bl func_ov048_02168df8
    str r0, [sp, #0x20]
    ldr r0, =data_ov048_0216ead0
    str r9, [sp]
    ldrsh r2, [r0, #0x14]
    mov r8, #2
    add r1, sp, #0x20
    str r2, [sp, #4]
    ldrsh r3, [r0, #0x16]
    mov r0, r7
    mov r2, r9
    str r3, [sp, #8]
    ldr r4, [r6, #0xd0]
    mov r3, r9
    sub r4, r4, #1
    str r4, [sp, #0xc]
    ldr r4, [r7, #0x70]
    str r4, [sp, #0x10]
    str r8, [sp, #0x14]
    str r10, [sp, #0x18]
    bl func_ov048_021665d4
    mov r0, #0x1e
    str r0, [sp]
    ldr r0, =gSprButtonCtrl
    mov r5, #3
    ldr r0, [r0]
    ldr r3, [sp, #0x20]
    mov r1, r5
    mov r2, #6
    bl func_ov015_02162fb4
    movs r4, r0
    beq @L_0216779c
    mov r1, r10
    mov r2, r9
    mov r3, r10
    strb r9, [r4, #0x11]
    mov r11, #0x110
    add r0, r4, #0x3a
    strh r11, [r4, #0xc]
    bl func_ov015_02161d00
    mov r1, r10
    mov r2, r8
    add r0, r4, #0x3a
    mov r3, r10
    bl func_ov015_02161d24
    add r0, r4, #0x3e
    mov r1, r10
    mov r2, r9
    mov r3, r10
    bl func_ov015_02161d00
    mov r2, r5
    add r0, r4, #0x3e
    mov r1, r10
    mov r3, r10
    bl func_ov015_02161d24
    mov r2, r9
    add r0, r4, #0x42
    mov r1, r10
    mov r3, r10
    bl func_ov015_02161d00
    add r0, r4, #0x42
    mov r2, r8
    mov r1, r10
    mov r3, r10
    bl func_ov015_02161d24
@L_0216779c:
    mov r5, #0
    mov r4, #5
    add r2, sp, #0x24
    mov r0, r7
    mov r1, r6
    mov r3, r5
    str r4, [sp]
    mov r9, r5
    bl func_ov048_02168df8
    movs r1, r0
    str r1, [sp, #0x20]
    beq @L_021678a4
    ldr r0, [r6, #0xd0]
    ldr r8, =g3DPlaneCtrl
    sub r0, r0, #1
    mov r2, r0, lsl #0x10
    ldr r0, [r8]
    mov r2, r2, lsr #0x10
    ldr r4, =data_ov048_0216ead0
    bl C3DPlaneCtrl_SetDepthAll
    ldr r2, [r7, #0x8c]
    ldr r0, [r8]
    ldr r1, [sp, #0x20]
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    ldr r10, =data_ov048_0216eb68
    b @L_02167848
@L_02167808:
    add r0, r10, r5, lsl #2
    ldrsh r0, [r0, #2]
    mov r1, r5, lsl #2
    add r2, r5, #1
    str r0, [sp]
    ldrsh r3, [r10, r1]
    ldr r0, [r8]
    ldr r1, [sp, #0x20]
    bl C3DPlaneCtrl_SetPos
    str r9, [sp]
    ldr r0, [r8]
    ldr r1, [sp, #0x20]
    add r2, r5, #1
    mov r3, r5
    bl C3DPlaneCtrl_SetGraphicIdx
    add r5, r5, #1
@L_02167848:
    cmp r5, #3
    blt @L_02167808
    ldr r1, [r6, #4]
    mov r5, #4
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r0, r0, asr #3
    cmp r0, #0xa
    ldrgesh r3, [r4, #0xa4]
    ldrsh r0, [r4, #0xa6]
    mov r2, r5
    ldrltsh r3, [r4, #0xa0]
    ldr r4, =g3DPlaneCtrl
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    bl C3DPlaneCtrl_SetPos
    str r9, [sp]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    mov r2, r5
    mov r3, #3
    bl C3DPlaneCtrl_SetGraphicIdx
@L_021678a4:
    ldr r0, =data_ov048_0216ead0
    add r11, sp, #0x24
    mov r5, #0
    ldrsh r9, [r0, #0x5e]
    mov r4, #0xa4
    mov r10, #0x10
    mov r8, #0x14
    b @L_0216790c
@L_021678c4:
    add r3, r6, r5, lsl #2
    strh r4, [r3, #0xa2]
    strh r10, [r3, #0xa4]
    ldrsh r2, [r6, #0x7e]
    mov r0, r7
    mov r1, r6
    add r2, r2, #3
    strh r2, [r3, #0x82]
    ldrsh lr, [r6, #0x80]
    ldrsh r12, [r3, #0xa4]
    mov r2, r11
    add lr, lr, r9
    mla r12, r5, r12, lr
    strh r12, [r3, #0x84]
    mov r3, r5
    str r8, [sp]
    bl func_ov048_02168f00
    add r5, r5, #1
@L_0216790c:
    ldr r0, [r6, #8]
    cmp r5, r0
    blt @L_021678c4
    mov r4, #0
    add r2, sp, #0x24
    mov r0, r7
    mov r1, r6
    mov r3, r4
    str r4, [sp]
    bl func_ov048_02168ffc
    ldr r1, [sp, #0x1c]
    mov r0, r6
    bl func_ov015_02135f24
    mov r0, r7
    mov r1, r6
    bl func_ov048_0216c720
    mov r0, r7
    mov r1, r6
    mov r2, r4
    bl func_ov048_0216be28
    mov r0, r7
    mov r1, r6
    mov r2, r4
    bl func_ov048_0216bf84
    add r0, r7, #0x2000
    ldr r2, [r0, #0x64]
    sub r0, r4, #1
    cmp r2, r0
    beq @L_0216799c
    mov r0, r7
    mov r1, r6
    mov r3, r4
    bl func_ov048_0216c10c
    sub r1, r4, #1
    add r0, r7, #0x2000
    str r1, [r0, #0x64]
@L_0216799c:
    mov r4, #4
    mov r0, r7
    mov r1, r6
    mov r3, r4
    mov r2, #0
    bl func_ov048_0216c158
    mov r0, r7
    mov r1, r6
    mov r2, r4
    bl func_ov048_0216be28
    mov r0, r7
    mov r1, r6
    bl func_ov048_0216a778
    mov r0, r7
    mov r1, r6
    bl func_ov048_0216a80c
    ldr r1, [r6]
    mov r0, r7
    mov r2, #1
    bl func_ov048_0216c300
    strh r0, [r7, #0x1e]
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov048_02167a0c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r9, r1
    ldr r1, [r9, #0x1c]
    mov r10, r0
    cmp r1, #2
    ldreq r7, [r9]
    mov r8, #0
    mov r0, r10
    mov r1, r9
    movne r7, r8
    bl func_ov048_021671cc
    mov r0, r10
    bl func_ov048_02168894
    ldr r4, =g3DPlaneCtrl
    mov r5, #4
    ldr r0, [r4]
    mov r1, r5
    mov r2, #3
    bl C3DSprFile_CreateTex16
    mov r1, r0
    str r1, [r9, #0x64]
    ldr r0, [r4]
    mov r2, r8
    mov r3, r8
    bl C3DSprFile_LoadToVram
    mov r11, #1
    mov r6, #2
    str r6, [r9, #0x1c]
    strb r11, [r9, #0x7c]
    ldr r1, [r10, #0xfc]
    add r0, r11, #0x158
    str r1, [r9, #0x74]
    str r0, [r9, #0xd0]
    ldr r3, =data_ov048_0216ead0
    str r6, [r9, #0x78]
    str r5, [r9, #4]
    str r5, [r9, #8]
    ldrsh r5, [r3, #0x78]
    mov r0, r10
    mov r1, r9
    strh r5, [r9, #0x7e]
    ldrsh r5, [r3, #0x7a]
    add r2, sp, #4
    mov r3, r8
    strh r5, [r9, #0x80]
    str r8, [sp, #4]
    str r6, [sp]
    bl func_ov048_02168df8
    movs r5, r0
    beq @L_02167b64
    ldr r1, [r9, #0xd0]
    ldr r0, [r4]
    mov r2, r1, lsl #0x10
    mov r1, r5
    mov r2, r2, lsr #0x10
    bl C3DPlaneCtrl_SetDepthAll
    ldrsh r2, [r9, #0x7e]
    ldrsh r3, [r9, #0x80]
    ldr r0, [r4]
    mov r1, r5
    bl C3DPlaneCtrl_SetPos_2
    mov r0, #0x48
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, r8
    bl C3DPlaneCtrl_SetPos
    ldr r0, [r4]
    mov r1, r5
    ldr r2, [r9, #0x74]
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    str r8, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r11
    mov r3, r11
    bl C3DPlaneCtrl_SetGraphicIdx
    str r8, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, r6
    bl C3DPlaneCtrl_SetGraphicIdx
@L_02167b64:
    ldr r0, =data_ov048_0216ead0
    mov r8, #0
    mov r6, #0x50
    ldrsh r5, [r0, #0x3c]
    ldrsh r4, [r0, #0x3e]
    mov r11, #0x10
    b @L_02167c04
@L_02167b80:
    add r1, r9, r8, lsl #2
    strh r6, [r1, #0xa2]
    strh r11, [r1, #0xa4]
    strh r5, [r1, #0x82]
    ldrsh r0, [r1, #0xa4]
    cmp r8, #0
    mla r0, r8, r0, r4
    strh r0, [r1, #0x84]
    bne @L_02167bb0
    bl func_ov015_0213178c
    cmp r0, #0
    bne @L_02167bdc
@L_02167bb0:
    cmp r8, #0
    bne @L_02167bc4
    ldrh r0, [r10, #0x1c]
    cmp r0, #0
    beq @L_02167bdc
@L_02167bc4:
    cmp r8, #3
    bne @L_02167be4
    mov r0, r10
    bl func_ov048_0216aef4
    cmp r0, #0
    bne @L_02167be4
@L_02167bdc:
    mov r0, #1
    strb r0, [r9, #0x71]
@L_02167be4:
    mov r3, #0x14
    str r3, [sp]
    mov r0, r10
    mov r1, r9
    add r2, sp, #4
    mov r3, r8
    bl func_ov048_02168f00
    add r8, r8, #1
@L_02167c04:
    ldr r0, [r9, #8]
    cmp r8, r0
    blt @L_02167b80
    mov r8, #0
    add r2, sp, #4
    mov r0, r10
    mov r1, r9
    sub r3, r8, #1
    str r8, [sp]
    mov r4, r8
    bl func_ov048_02168ffc
    add r6, r10, #0x2000
    ldrb r0, [r6, #0x49]
    add r0, r10, r0, lsl #1
    add r0, r0, #0x2000
    ldrh r5, [r0, #0x4c]
    b @L_02167c70
@L_02167c48:
    mov r0, r10
    mov r1, r8
    mov r2, r4
    bl func_ov048_0216876c
    cmp r0, #0
    beq @L_02167c6c
    ldrh r0, [r0]
    cmp r0, r5
    moveq r7, r8
@L_02167c6c:
    add r8, r8, #1
@L_02167c70:
    ldr r0, [r6, #0x14]
    cmp r8, r0
    blt @L_02167c48
    mov r0, r9
    mov r1, r7
    bl func_ov015_02135f24
    mov r0, r10
    mov r1, r9
    bl func_ov048_0216c720
    mov r0, r10
    mov r1, r9
    mov r2, #0
    bl func_ov048_0216be28
    mov r0, r10
    mov r1, r9
    bl func_ov048_0216a778
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov048_02167cc0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r7, r1
    ldr r1, [r7, #0x1c]
    mov r8, r0
    cmp r1, #4
    ldreq r11, [r7]
    mov r0, r8
    mov r1, r7
    movne r11, #0
    bl func_ov048_021671cc
    mov r0, #4
    str r0, [r7, #0x1c]
    ldr r4, [r8, #0xc4]
    mov r3, #2
    mov r6, #0
    add r2, r3, #0x148
    mov r1, #0x20
    mov r0, #0x10
    strh r1, [r7, #0x7e]
    strh r0, [r7, #0x80]
    add r5, sp, #4
    str r2, [r7, #0xd0]
    str r4, [r7, #0x74]
    str r6, [r7, #0x78]
    strb r6, [r7, #0x7c]
    str r3, [r7, #4]
    str r3, [r7, #8]
    mov r0, r8
    mov r1, r7
    mov r2, r5
    str r6, [sp, #4]
    bl func_ov048_02168e7c
    ldrsh r2, [r7, #0x80]
    mov r0, r8
    mov r1, r7
    add r2, r2, #0x10
    str r2, [sp]
    ldrsh r3, [r7, #0x7e]
    mov r2, r5
    add r3, r3, #6
    bl func_ov048_02169638
    ldr r0, [r7, #4]
    cmp r0, #0
    ble @L_02167dd4
    mov r4, #0x9c
    mov r10, #0x10
    mov r9, #0x14
@L_02167d80:
    add r3, r7, r6, lsl #2
    strh r4, [r3, #0xa2]
    strh r10, [r3, #0xa4]
    ldrsh r2, [r7, #0x7e]
    mov r0, r8
    mov r1, r7
    add r2, r2, #7
    strh r2, [r3, #0x82]
    ldrsh lr, [r7, #0x80]
    ldrsh r12, [r3, #0xa4]
    mov r2, r5
    add lr, lr, #0x58
    mla r12, r6, r12, lr
    strh r12, [r3, #0x84]
    mov r3, r6
    str r9, [sp]
    bl func_ov048_02168f00
    ldr r0, [r7, #4]
    add r6, r6, #1
    cmp r6, r0
    blt @L_02167d80
@L_02167dd4:
    mov r5, #0
    add r4, sp, #4
    mov r0, r8
    mov r1, r7
    mov r2, r4
    mov r3, r5
    str r5, [sp]
    bl func_ov048_02168ffc
    mov r0, r8
    mov r1, r7
    mov r2, r4
    bl func_ov048_021690cc
    mov r0, r7
    mov r1, r11
    bl func_ov015_02135f24
    mov r0, r8
    mov r1, r7
    bl func_ov048_0216c720
    mov r0, r8
    mov r1, r7
    mov r2, r5
    bl func_ov048_0216be28
    mov r2, r5
    mov r0, r8
    mov r1, r7
    bl func_ov048_0216bf84
    mov r0, r8
    mov r1, r7
    bl func_ov048_0216a778
    ldr r1, [r7]
    mov r0, r8
    mov r2, #1
    bl func_ov048_0216c300
    strh r0, [r8, #0x1e]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov048_02167e64(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    ldr r2, =data_ov048_0216f280
    mov r10, r0
    ldr r3, [r2, #8]
    mov r9, r1
    tst r3, #1
    bne @L_02167eb4
    ldr r1, =data_ov048_0216ead0
    ldr r0, =data_ov048_0216ed80
    ldrsh r4, [r1, #0x50]
    orr r3, r3, #1
    strh r4, [r0, #0x18]
    ldrsh r4, [r1, #0x52]
    strh r4, [r0, #0x1a]
    ldrsh r4, [r1, #0xc]
    strh r4, [r0, #0x1c]
    ldrsh r1, [r1, #0xe]
    strh r1, [r0, #0x1e]
    str r3, [r2, #8]
@L_02167eb4:
    ldr r2, =data_ov048_0216f280
    ldr r3, [r2, #4]
    tst r3, #1
    bne @L_02167ef4
    ldr r1, =data_ov048_0216ead0
    ldr r0, =data_ov048_0216ed80
    ldrsh r4, [r1, #8]
    orr r3, r3, #1
    strh r4, [r0, #0x20]
    ldrsh r4, [r1, #0xa]
    strh r4, [r0, #0x22]
    ldrsh r4, [r1, #4]
    strh r4, [r0, #0x24]
    ldrsh r1, [r1, #6]
    strh r1, [r0, #0x26]
    str r3, [r2, #4]
@L_02167ef4:
    ldr r2, =data_ov048_0216f280
    ldr r3, [r2]
    tst r3, #1
    bne @L_02167f34
    ldr r1, =data_ov048_0216ead0
    ldr r0, =data_ov048_0216ed80
    ldrsh r4, [r1]
    orr r3, r3, #1
    strh r4, [r0, #0x28]
    ldrsh r4, [r1, #2]
    strh r4, [r0, #0x2a]
    ldrsh r4, [r1, #0x54]
    strh r4, [r0, #0x2c]
    ldrsh r1, [r1, #0x56]
    strh r1, [r0, #0x2e]
    str r3, [r2]
@L_02167f34:
    mov r0, r10
    bl func_ov048_021687a0
    ldr r0, [r9, #0x1c]
    mov r1, r9
    cmp r0, #5
    ldreq r0, [r9]
    streq r0, [sp, #8]
    movne r0, #0
    strne r0, [sp, #8]
    mov r0, r10
    bl func_ov048_021671cc
    mov r0, #5
    str r0, [r9, #0x1c]
    add r0, r10, #0x2000
    ldrb r0, [r0, #0x48]
    mov r5, #3
    mov r11, #2
    cmp r0, #1
    ldr r7, =g3DPlaneCtrl
    ldrls r8, [r10, #0xd8]
    movls r6, #1
    ldr r0, [r7]
    ldrhi r8, [r10, #0xdc]
    mov r1, r5
    mov r2, r11
    movhi r6, #2
    bl C3DSprFile_CreateTex16
    mov r4, #0
    mov r1, r0
    str r1, [r9, #0x64]
    ldr r0, [r7]
    mov r2, r4
    mov r3, r4
    bl C3DSprFile_LoadToVram
    rsb r0, r5, #0x15c
    str r8, [r9, #0x74]
    str r0, [r9, #0xd0]
    ldr r7, =data_ov048_0216ead0
    str r5, [r9, #0x78]
    str r6, [r9, #4]
    str r6, [r9, #8]
    ldrsh r2, [r7, #0x20]
    add r8, sp, #0xc
    mov r0, r10
    strh r2, [r9, #0x7e]
    ldrsh r3, [r7, #0x22]
    mov r1, r9
    mov r2, r8
    strh r3, [r9, #0x80]
    str r4, [sp, #0xc]
    bl func_ov048_02168e7c
    ldrsh r3, [r7, #0x1e]
    mov r2, r8
    mov r0, r10
    str r3, [sp]
    ldrsh r3, [r7, #0x1c]
    mov r1, r9
    bl func_ov048_02169638
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    bl func_ov015_02163dcc
    cmp r0, #0
    bne @L_021681a4
    ldr r1, =data_ov048_0216eda0
    sub r0, r6, #1
    add r2, r1, r0, lsl #2
    mov r3, r0, lsl #2
    add r0, r10, #0x2000
    ldrsh r1, [r1, r3]
    ldrsh r2, [r2, #2]
    ldr r0, [r0, #0x1c]
    bl func_ov015_02163c98
    sub r0, r6, #1
    ldr r1, =data_ov048_0216eda8
    mov r3, r0, lsl #2
    add r2, r1, r0, lsl #2
    add r0, r10, #0x2000
    ldrsh r1, [r1, r3]
    ldrsh r2, [r2, #2]
    ldr r0, [r0, #0x1c]
    bl func_ov015_02163ca4
    mov r7, #1
    str r7, [sp]
    sub r6, r7, #2
    str r6, [sp, #4]
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    ldr r3, [r10, #0xd8]
    mov r1, r7
    mov r2, r4
    bl func_ov015_02163b78
    stmia sp, {r4, r6}
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    ldr r3, [r10, #0xcc]
    mov r1, r7
    mov r2, r7
    bl func_ov015_02163b78
    str r7, [sp]
    str r6, [sp, #4]
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    ldr r3, [r10, #0xcc]
    mov r1, r7
    mov r2, r11
    bl func_ov015_02163b78
    str r11, [sp]
    str r6, [sp, #4]
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    ldr r3, [r10, #0xd8]
    mov r1, r11
    mov r2, r4
    bl func_ov015_02163b78
    stmia sp, {r4, r6}
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    ldr r3, [r10, #0xd0]
    mov r1, r11
    mov r2, r7
    bl func_ov015_02163b78
    str r7, [sp]
    str r6, [sp, #4]
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    ldr r3, [r10, #0xd0]
    mov r1, r11
    mov r2, r11
    bl func_ov015_02163b78
    add r0, r10, #0x2000
    ldr r1, [r9, #0xd0]
    ldr r0, [r0, #0x1c]
    sub r1, r1, #1
    bl func_ov015_02163c3c
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    mov r1, r5
    mov r2, #0x19
    mov r3, #0x1a
    bl func_ov015_02163c08
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    mov r1, #0x1e
    bl func_ov015_02163c34
    str r7, [sp]
    mov r1, r11
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    mov r2, r4
    mov r3, r4
    bl func_ov015_02163d08
    add r0, r10, #0x2000
    ldr r0, [r0, #0x1c]
    mov r1, r4
    mov r2, r4
    bl func_ov015_02163dd4
@L_021681a4:
    mov r8, #0
    mov r7, #0x78
    mov r6, #0x10
    ldr r5, =data_ov048_0216ed98
    mov r4, #0x14
    add r11, sp, #0xc
    b @L_02168200
@L_021681c0:
    add r3, r9, r8, lsl #2
    strh r7, [r3, #0xa2]
    strh r6, [r3, #0xa4]
    mov r0, r8, lsl #2
    ldrsh r2, [r5, r0]
    add r1, r5, r8, lsl #2
    mov r0, r10
    strh r2, [r3, #0x82]
    ldrsh r12, [r1, #2]
    mov r1, r9
    mov r2, r11
    strh r12, [r3, #0x84]
    mov r3, r8
    str r4, [sp]
    bl func_ov048_02168f00
    add r8, r8, #1
@L_02168200:
    ldr r0, [r9, #8]
    cmp r8, r0
    blt @L_021681c0
    mov r4, #0
    add r2, sp, #0xc
    mov r0, r10
    mov r1, r9
    sub r3, r4, #1
    str r4, [sp]
    bl func_ov048_02168ffc
    ldr r1, [sp, #8]
    mov r0, r9
    bl func_ov015_02135f24
    mov r0, r10
    mov r1, r9
    bl func_ov048_0216c720
    mov r0, r10
    mov r1, r9
    mov r2, r4
    bl func_ov048_0216be28
    mov r0, r10
    mov r1, r9
    bl func_ov048_0216a778
    ldr r1, [r9]
    mov r0, r10
    mov r2, #1
    bl func_ov048_0216c300
    strh r0, [r10, #0x1e]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov048_02168294(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    mov r9, r1
    ldr r1, [r9, #0x1c]
    mov r10, r0
    cmp r1, #6
    ldreq r7, [r9]
    mov r8, #0
    mov r0, r10
    mov r1, r9
    movne r7, r8
    bl func_ov048_021671cc
    mov r0, r10
    bl func_ov048_0216897c
    ldr r4, =g3DPlaneCtrl
    mov r5, #4
    ldr r0, [r4]
    mov r1, #3
    mov r2, r5
    bl C3DSprFile_CreateTex16
    mov r1, r0
    str r1, [r9, #0x64]
    ldr r0, [r4]
    mov r2, r8
    mov r3, r8
    bl C3DSprFile_LoadToVram
    mov r0, #6
    mov r6, #1
    str r0, [r9, #0x1c]
    strb r6, [r9, #0x7c]
    ldr r2, [r10, #0xe0]
    add r1, r0, #0x144
    str r5, [r9, #0x78]
    add r0, r10, #0x2000
    str r2, [r9, #0x74]
    ldr r2, [r0, #0x14]
    mov r0, #8
    str r0, [r9, #8]
    mov r0, #0x90
    strh r0, [r9, #0x7e]
    mov r0, #0x10
    strh r0, [r9, #0xca]
    mov r0, #0x20
    str r2, [r9, #4]
    str r1, [r9, #0xd0]
    strh r0, [r9, #0xcc]
    strh r8, [r9, #0x80]
    str r8, [sp, #0x1c]
    mov r5, #2
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x1c
    mov r3, r8
    str r5, [sp]
    bl func_ov048_02168df8
    movs r1, r0
    str r1, [sp, #0x20]
    beq @L_02168404
    ldr r2, [r9, #0xd0]
    ldr r0, [r4]
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl C3DPlaneCtrl_SetDepthAll
    ldrsh r2, [r9, #0x7e]
    ldrsh r3, [r9, #0x80]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    bl C3DPlaneCtrl_SetPos_2
    mov r0, #0x88
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    mov r2, r5
    mov r3, r8
    bl C3DPlaneCtrl_SetPos
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    ldr r2, [r9, #0x74]
    and r2, r2, #0xff
    bl C3DPlaneCtrl_SetTexAll
    str r8, [sp]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    mov r2, r6
    mov r3, r6
    bl C3DPlaneCtrl_SetGraphicIdx
    str r8, [sp]
    ldr r0, [r4]
    ldr r1, [sp, #0x20]
    mov r2, r5
    mov r3, r5
    bl C3DPlaneCtrl_SetGraphicIdx
@L_02168404:
    mov r5, #1
    mov r4, #0
    add r2, sp, #0x1c
    mov r0, r10
    mov r1, r9
    mov r3, r4
    str r5, [sp]
    bl func_ov048_02168df8
    str r0, [sp, #0x20]
    ldr r0, =data_ov048_0216ead0
    str r5, [sp]
    ldrsh r2, [r0, #0x7c]
    mov r6, #3
    add r1, sp, #0x20
    str r2, [sp, #4]
    ldrsh r3, [r0, #0x7e]
    mov r0, r10
    mov r2, r5
    str r3, [sp, #8]
    ldr r8, [r9, #0xd0]
    mov r3, r5
    sub r8, r8, #1
    str r8, [sp, #0xc]
    ldr r8, [r10, #0xe0]
    str r8, [sp, #0x10]
    str r6, [sp, #0x14]
    str r4, [sp, #0x18]
    bl func_ov048_021665d4
    mov r0, #0x1e
    str r0, [sp]
    ldr r0, =gSprButtonCtrl
    ldr r3, [sp, #0x20]
    ldr r0, [r0]
    mov r1, r6
    mov r2, r5
    bl func_ov015_02162fb4
    movs r6, r0
    beq @L_021684f4
    strb r5, [r6, #0x11]
    mov r1, r5
    mov r2, r5
    mov r3, r4
    strh r5, [r6, #0xc]
    add r0, r6, #0x3a
    bl func_ov015_02161d00
    ldr r1, [r10, #0xd4]
    mov r2, r4
    mov r3, r4
    add r0, r6, #0x3a
    bl func_ov015_02161d24
    add r0, r6, #0x3e
    mov r1, r5
    mov r2, r5
    mov r3, r4
    bl func_ov015_02161d00
    add r0, r6, #0x3e
    mov r2, r5
    mov r3, r4
    ldr r1, [r10, #0xd4]
    bl func_ov015_02161d24
@L_021684f4:
    ldr r1, [sp, #0x20]
    add r0, r10, #0x2000
    str r1, [r0, #0x58]
    mov r8, #0
    mov r4, #1
    add r2, sp, #0x1c
    mov r0, r10
    mov r1, r9
    mov r3, r8
    str r4, [sp]
    bl func_ov048_02168df8
    str r0, [sp, #0x20]
    mov r0, r4
    ldr r2, =data_ov048_0216ead0
    str r0, [sp]
    ldrsh r0, [r2, #0x80]
    mov r6, #4
    add r1, sp, #0x20
    str r0, [sp, #4]
    ldrsh r3, [r2, #0x82]
    mov r2, r4
    mov r0, r10
    str r3, [sp, #8]
    ldr r4, [r9, #0xd0]
    mov r3, r2
    sub r4, r4, #1
    str r4, [sp, #0xc]
    ldr r4, [r10, #0xe0]
    str r4, [sp, #0x10]
    str r6, [sp, #0x14]
    str r8, [sp, #0x18]
    bl func_ov048_021665d4
    mov r0, #0x1e
    str r0, [sp]
    ldr r0, =gSprButtonCtrl
    mov r5, #3
    mov r11, #2
    ldr r0, [r0]
    ldr r3, [sp, #0x20]
    mov r1, r5
    mov r2, r11
    bl func_ov015_02162fb4
    movs r4, r0
    beq @L_02168600
    mov r0, #1
    strb r0, [r4, #0x11]
    mov r1, r0
    mov r2, r0
    mov r3, r8
    strh r11, [r4, #0xc]
    add r0, r4, #0x3a
    bl func_ov015_02161d00
    ldr r1, [r10, #0xd4]
    mov r2, r5
    mov r3, r8
    add r0, r4, #0x3a
    bl func_ov015_02161d24
    mov r1, #1
    add r0, r4, #0x3e
    mov r2, r1
    mov r3, r8
    bl func_ov015_02161d00
    ldr r1, [r10, #0xd4]
    add r0, r4, #0x3e
    mov r2, r6
    mov r3, r8
    bl func_ov015_02161d24
@L_02168600:
    mov r8, #0
    mov r6, #0x48
    mov r5, #0x10
    mov r4, #0x98
    mov r11, #0x14
    b @L_02168654
@L_02168618:
    add r2, r9, r8, lsl #2
    strh r6, [r2, #0xa2]
    strh r5, [r2, #0xa4]
    strh r4, [r2, #0x82]
    ldrsh r3, [r2, #0xa4]
    mov r0, r10
    mov r1, r9
    mul r3, r8, r3
    add r3, r3, #8
    strh r3, [r2, #0x84]
    add r2, sp, #0x1c
    mov r3, r8
    str r11, [sp]
    bl func_ov048_02168f00
    add r8, r8, #1
@L_02168654:
    ldr r0, [r9, #8]
    cmp r8, r0
    blt @L_02168618
    mov r8, #0
    add r5, sp, #0x1c
    mov r0, r10
    mov r1, r9
    mov r2, r5
    str r8, [sp]
    sub r3, r8, #1
    mov r4, r8
    bl func_ov048_02168ffc
    mov r2, #0x50
    mov r6, #0x28
    strh r2, [r9, #0xc2]
    ldrsh r1, [r9, #0xa4]
    ldr r0, [r9, #8]
    mov r2, r5
    mul r0, r1, r0
    sub r3, r0, #0x60
    mov r0, r10
    mov r1, r9
    strh r6, [r9, #0xc4]
    strh r8, [r9, #0xc6]
    strh r3, [r9, #0xc8]
    bl func_ov048_021690cc
    add r6, r10, #0x2000
    ldrb r0, [r6, #0x49]
    add r0, r10, r0, lsl #1
    add r0, r0, #0x2000
    ldrh r5, [r0, #0x4c]
    b @L_021686fc
@L_021686d4:
    mov r0, r10
    mov r1, r8
    mov r2, r4
    bl func_ov048_0216876c
    cmp r0, #0
    beq @L_021686f8
    ldrh r0, [r0]
    cmp r0, r5
    moveq r7, r8
@L_021686f8:
    add r8, r8, #1
@L_021686fc:
    ldr r0, [r6, #0x14]
    cmp r8, r0
    blt @L_021686d4
    mov r0, r9
    mov r1, r7
    bl func_ov015_02135f24
    mov r0, r10
    mov r1, r9
    bl func_ov048_0216c720
    mov r0, r10
    mov r1, r9
    mov r2, r4
    bl func_ov048_0216be28
    mov r0, r10
    mov r1, r9
    mov r2, r4
    bl func_ov048_0216bf84
    mov r0, r10
    mov r1, r9
    bl func_ov048_0216a778
    mov r0, r10
    mov r1, r9
    bl func_ov048_0216cf60
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov048_0216876c(s32 arg0, s32 arg1, s32 arg2)
{
    if ((u32)arg1 >= (u32)0x400) {
        return 0;
    } else {
        if ((arg1 >= *(s32 *)(((u8 *)(arg0 + 0x2000)) + 0x14) && arg2 == 0)) {
            arg0 = 0;
        } else {
            arg0 = ((arg1 * 6) + ((arg0 + 0x14) + 0x800));
        }
        return arg0;
    }
}

extern "C" s32 func_ov048_021687a0(u8 *arg0)
{
    u8 *r0;
    s32 r6;
    u8 *r7;
    s32 r8;
    s32 r9;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    s32 v7;
    u16 t0;
    u16 t1;
    u16 t2;
    u8 t3;
    u8 t4;
    r8 = 0;
    MI_CpuFill8((s32)((arg0 + 0x14) + 0x800), 0, 0x1800);
    t0 = *(u16 *)(arg0 + 0x1C);
    *(s32 *)(arg0 + 0x2014) = 2;
    v1 = func_ov015_02130b14(t0, 0, (s32)(arg0 + 0x2000), 2);
    r9 = v1;
    do {
        r6 = 0;
        v2 = func_ov048_0216876c((s32)arg0, r8, 1);
        r0 = (u8 *)v2;
        r7 = (u8 *)v2;
        if ((s32)r7 != 0) {
            t1 = *(u16 *)(((u8 *)((arg0 + (r8 << 1)) + 0x2000)) + 0x4C);
            *(u16 *)(r7) = t1;
            *(u8 *)(r7 + 0x2) = r6;
            *(u8 *)(r7 + 0x3) = 1;
            t2 = *(u16 *)(r7);
            v3 = func_ov015_02130b14(t2, r6);
            v4 = _ZN11MatchEngine13func_0206f058Ev((s32)((u8 *)&data_020e88a0));
            t3 = *(u8 *)(arg0 + 0x204A);
            v5 = _ZN11MatchEngine13func_02073df8EPviih((s32)((u8 *)&data_020e88a0), r9, t3, v3, v4);
            *(u8 *)(r7 + 0x4) = v5;
            t4 = *(u8 *)(arg0 + 0x204A);
            v6 = func_020808c4(r9, t4);
            v7 = _ZN11MatchEngine13func_020739ccEi((s32)((u8 *)&data_020e88a0), v6);
            r0 = (u8 *)v7;
            if ((*(u8 *)(r7 + 0x4) == 3 && (r0 = (u8 *)*(u8 *)(r0 + 0xB), (s32)r0 != 0x51))) {
                *(u8 *)(r7 + 0x4) = r6;
            }
        }
        r8 = (r8 + 1);
    } while (r8 < 2);
    return (s32)r0;
}

extern "C" asm void func_ov048_02168894(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x14
    mov r8, r0
    ldr r1, =data_ov048_0216eb7c
    add r0, r8, #0x2000
    mov r2, #4
    str r2, [r0, #0x14]
    add r4, sp, #4
    ldmia r1, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    bl func_ov015_0213178c
    cmp r0, #0
    mov r1, #0x26
    moveq r1, #0x25
    mov r0, r8
    str r1, [sp, #4]
    bl func_ov048_0216aef4
    cmp r0, #0
    moveq r0, #0x26
    movne r0, #0x27
    str r0, [sp, #0x10]
    ldrh r0, [r8, #0x1c]
    add r6, sp, #0
    mov r7, #0
    cmp r0, #0
    moveq r0, #0x26
    streq r0, [sp, #4]
    ldr r0, =data_ov048_0216eb78
    add r4, sp, #4
    ldrb r3, [r0]
    ldrb r2, [r0, #1]
    ldrb r1, [r0, #2]
    ldrb r0, [r0, #3]
    strb r3, [sp]
    strb r2, [sp, #1]
    strb r1, [sp, #2]
    strb r0, [sp, #3]
    mov r5, #1
@L_0216892c:
    mov r0, r8
    mov r1, r7
    mov r2, r5
    bl func_ov048_0216876c
    cmp r0, #0
    beq @L_02168960
    strh r5, [r0]
    ldr r2, [r4, r7, lsl #2]
    ldrb r1, [r6, r7]
    add r2, r8, r2, lsl #2
    ldr r2, [r2, #0x68]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
@L_02168960:
    add r7, r7, #1
    cmp r7, #4
    blt @L_0216892c
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov048_0216897c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xd8
    mov r10, r0
    add r1, sp, #0xc
    mov r0, #0x19
    mov r5, #0
@L_02168994:
    strh r5, [r1]
    strh r5, [r1, #2]
    strh r5, [r1, #4]
    strh r5, [r1, #6]
    add r1, r1, #8
    subs r0, r0, #1
    bne @L_02168994
    strh r5, [r1]
    ldrh r0, [r10, #0x1c]
    mov r6, #0
    mov r1, r6
    bl func_ov015_02130b14
    add r1, r10, #0x2000
    ldrb r1, [r1, #0x4a]
    bl func_020808c4
    ldr r1, =data_020c4ab4
    mov r0, r0, lsl #0x10
    ldrb r7, [r1, #0x68]
    mov r0, r0, lsr #0x10
    ldr r4, =data_020e88a0
    str r0, [sp, #8]
    mov r0, r4
    mov r1, r7
    bl _ZN11MatchEngine13func_0207aa58Ei
    bl func_ov015_02131838
    cmp r0, #1
    bne @L_02168a60
    mov r7, r6
    mov r4, #1
    add r8, sp, #0xc
@L_02168a0c:
    cmp r6, #0
    mov r0, r10
    mov r1, r6
    bne @L_02168a24
    mov r2, r5
    b @L_02168a28
@L_02168a24:
    mov r2, r4
@L_02168a28:
    bl func_ov048_0216b004
    movs r6, r0
    ldrneh r0, [sp, #0xe]
    cmpne r6, r0
    beq @L_02168a50
    add r0, r8, r7, lsl #1
    add r7, r7, #1
    strh r6, [r0, #2]
    cmp r7, #0x10
    blt @L_02168a0c
@L_02168a50:
    add r9, r7, #1
    cmp r9, #0x11
    movgt r9, #0x11
    b @L_02168a84
@L_02168a60:
    mov r0, r4
    add r2, sp, #0xe
    mov r1, r7
    str r6, [sp]
    mov r4, #0x80
    mov r3, #0x64
    str r4, [sp, #4]
    bl _ZN11MatchEngine13func_02078aacEv
    add r9, r0, #1
@L_02168a84:
    add r0, r10, #0x14
    mov r8, #0
    cmp r9, #8
    movlt r9, #8
    mov r1, r8
    add r0, r0, #0x800
    mov r2, #0x1800
    bl MI_CpuFill8
    add r4, r10, #0x2000
    cmp r9, #0
    addle sp, sp, #0xd8
    str r8, [r4, #0x14]
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r10, #0x14
    add r5, r0, #0x2000
    add r6, sp, #0xc
@L_02168ac4:
    ldr r1, [r4, #0x14]
    mov r0, r10
    mov r2, #1
    bl func_ov048_0216876c
    movs r7, r0
    beq @L_02168bdc
    mov r0, r8, lsl #1
    ldrh r2, [r6, r0]
    ldr r0, =data_020e88a0
    ldr r1, [sp, #8]
    strh r2, [r7]
    bl _ZN11MatchEngine13func_020739ccEi
    mov r11, r0
    mov r0, r8, lsl #1
    ldrh r0, [r6, r0]
    mov r1, #0
    bl func_ov015_02130b14
    mov r1, r8, lsl #1
    ldrh r1, [r6, r1]
    cmp r1, #0
    bne @L_02168b34
    ldrb r1, [r11, #0xb]
    cmp r1, #0x51
    ldrne r0, [r10, #0xe0]
    strneb r0, [r7, #2]
    movne r0, #1
    strneb r0, [r7, #3]
    bne @L_02168bd0
@L_02168b34:
    cmp r0, #0
    beq @L_02168bb0
    bl func_02080cb8
    cmp r0, #0
    bne @L_02168bb0
    mov r0, r8, lsl #1
    ldrh r3, [r6, r0]
    ldrh r1, [r10, #0x1c]
    cmp r1, r3
    beq @L_02168bb0
    ldrb r2, [r4, #0x49]
    cmp r2, #0
    bne @L_02168b80
    ldrh r0, [r4, #0x4e]
    ldr r11, =0xfff
    and r12, r3, r11
    and r0, r0, r11
    cmp r0, r12
    beq @L_02168bb0
@L_02168b80:
    cmp r2, #1
    ldreq r0, =0xfff
    ldreqh r11, [r4, #0x4c]
    andeq r2, r3, r0
    andeq r0, r11, r0
    cmpeq r0, r2
    beq @L_02168bb0
    mov r0, r10
    ldrb r2, [r4, #0x4a]
    bl func_ov048_0216adf8
    cmp r0, #0
    bne @L_02168bc0
@L_02168bb0:
    ldr r0, [r10, #0xe8]
    strb r0, [r7, #2]
    mov r0, #0
    b @L_02168bcc
@L_02168bc0:
    ldr r0, [r10, #0xe0]
    strb r0, [r7, #2]
    mov r0, #1
@L_02168bcc:
    strb r0, [r7, #3]
@L_02168bd0:
    ldr r0, [r5]
    add r0, r0, #1
    str r0, [r5]
@L_02168bdc:
    add r8, r8, #1
    cmp r8, r9
    blt @L_02168ac4
    add sp, sp, #0xd8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov048_02168bfc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1000
    add r6, sp, #0
    mov r7, #0
    mov r10, r0
    mov r0, r7
    mov r1, r6
    mov r2, #0x800
    mov r4, r7
    bl MIi_CpuClear16
    add r5, sp, #0x800
    ldr r0, =data_020e88a0
    mov r2, r5
    mov r1, #0xf
    mov r3, #0x400
    bl _ZN11MatchEngine13func_0207697cEiPti
    mov r8, r0
    cmp r8, #0
    ble @L_02168c98
    add r1, r10, #0x2000
@L_02168c4c:
    ldrh r0, [r1, #0x60]
    mov r3, r4
    cmp r0, #0
    ble @L_02168c8c
    mov r2, r7, lsl #1
    ldrh r11, [r5, r2]
    ldr r9, [r1, #0x5c]
@L_02168c68:
    mov r2, r3, lsl #1
    ldrh r2, [r9, r2]
    cmp r11, r2
    moveq r0, r7, lsl #1
    streqh r3, [r6, r0]
    beq @L_02168c8c
    add r3, r3, #1
    cmp r3, r0
    blt @L_02168c68
@L_02168c8c:
    add r7, r7, #1
    cmp r7, r8
    blt @L_02168c4c
@L_02168c98:
    sub r9, r8, #1
    cmp r9, #0
    mov r11, #0
    ble @L_02168d04
    add r2, sp, #0x800
    add r6, sp, #0
@L_02168cb0:
    add r12, r11, #1
    cmp r12, r8
    bge @L_02168cf8
    mov r4, r11, lsl #1
@L_02168cc0:
    mov r7, r12, lsl #1
    ldrh r5, [r6, r7]
    ldrh r3, [r6, r4]
    cmp r3, r5
    bls @L_02168cec
    ldrh r1, [r2, r7]
    ldrh r0, [r2, r4]
    strh r3, [r6, r7]
    strh r5, [r6, r4]
    strh r0, [r2, r7]
    strh r1, [r2, r4]
@L_02168cec:
    add r12, r12, #1
    cmp r12, r8
    blt @L_02168cc0
@L_02168cf8:
    add r11, r11, #1
    cmp r11, r9
    blt @L_02168cb0
@L_02168d04:
    add r0, r10, #0x14
    mov r9, #0
    mov r1, r9
    add r0, r0, #0x800
    mov r2, #0x1800
    bl memset
    add r4, r10, #0x2000
    str r9, [r4, #0x14]
    cmp r8, #0
    ble @L_02168da8
    add r0, r10, #0x14
    ldr r11, =data_020e88a0
    add r5, r0, #0x2000
    add r6, sp, #0x800
@L_02168d3c:
    ldr r1, [r4, #0x14]
    mov r0, r10
    mov r2, #1
    bl func_ov048_0216876c
    movs r7, r0
    beq @L_02168d9c
    mov r0, r9, lsl #1
    ldrh r1, [r6, r0]
    mov r0, r11
    bl _ZN11MatchEngine13func_020768fcEm
    cmp r0, #0
    beq @L_02168d9c
    bl _ZN11MatchEngine13func_02078474Ev
    strh r0, [r7]
    mov r2, r9, lsl #1
    ldrh r1, [r6, r2]
    mov r0, r11
    strh r1, [r7, #4]
    ldrh r1, [r6, r2]
    bl _ZN11MatchEngine13func_020767a4Em
    strh r0, [r7, #2]
    ldr r0, [r5]
    add r0, r0, #1
    str r0, [r5]
@L_02168d9c:
    add r9, r9, #1
    cmp r9, r8
    blt @L_02168d3c
@L_02168da8:
    add r0, r10, #0x2000
    ldr r3, [r0, #0x14]
    add r0, r10, #0x2000
    cmp r3, #1
    movle r3, #1
    mov r2, r3, lsr #0x1f
    rsb r1, r2, r3, lsl #29
    str r3, [r0, #0x14]
    adds r0, r2, r1, ror #29
    movne r1, #1
    mov r0, r3, asr #2
    moveq r1, #0
    add r0, r3, r0, lsr #29
    add r1, r1, r0, asr #3
    add r0, r10, #0x2000
    mov r1, r1, lsl #3
    str r1, [r0, #0x14]
    add sp, sp, #0x1000
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
