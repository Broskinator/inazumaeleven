#include "ov055/Unk_ov055_02165d60.hpp"
#include "game/vcall.hpp"
struct S02165eb8 { u8 pad[0x30]; s32 h[9]; };

extern "C" void func_ov055_02165d60(s32 arg0);
extern "C" s32 func_ov055_02165d9c(u8 *arg0);
extern "C" s32 func_ov055_02165e48(...);
extern "C" s32 func_ov055_02165eb8(S02165eb8 *arg0);
extern "C" s32 func_ov055_02165f64(...);
extern "C" s32 func_ov055_02166010(...);
extern "C" void func_ov055_02166088(void);
extern "C" void func_ov055_02166184(void);
extern "C" s32 func_ov055_02166274(void);
extern "C" void func_ov055_02166298(void);
extern "C" void func_ov055_021662d4(void);
extern "C" void func_ov055_02166894(u8 *arg0);
extern "C" s32 func_ov055_021668a0(void);
extern "C" void func_ov055_021668bc(u8 *arg0, s32 arg1);
extern "C" void func_ov055_021668d0(u8 *arg0, s32 arg1);
extern "C" void func_ov055_02166960(u8 *arg0, s32 arg1);
extern "C" s32 func_ov055_021669c8(u8 *arg0);
extern "C" void func_ov055_02166a4c(void);
extern "C" void func_ov055_02166b64(void);
extern "C" void func_ov055_02166b68(s32 arg0);
extern "C" s32 func_ov055_02166ba8(s32 arg0);
extern "C" void func_ov055_02166bbc(void);

extern "C" char data_020c466c[];
extern "C" char data_020c46a8[];
extern "C" char data_020c46b8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c5e40[];
extern "C" char data_020e88a0[];
extern "C" char data_ov055_02166bc0[];
extern "C" char data_ov055_02166ce0[];
extern "C" char data_ov055_02166d4c[];
extern "C" char data_ov055_02166d6c[];
extern "C" char data_ov055_02166d8c[];
extern "C" char data_ov055_02166dac[];
extern "C" char data_ov055_02166dcc[];
extern "C" void DC_FlushRange(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e0ccEi(void);
extern "C" s32 _ZN11MatchEngine13func_0206a964Ei(...);
extern "C" void _ZN11MatchEngine13func_0206b4b8Ei(void);
extern "C" s32 _ZN11MatchEngine13func_02077bd4Ev(...);
extern "C" s32 _ZN11MatchEngine13func_02077ce4Ev(...);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12ResetSpacingEv(void);
extern "C" void _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii(void);
extern "C" void _ZN8TextFont8SetUnk1CEhh(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02090dcc(void);
extern "C" void func_02090dec(void);
extern "C" s32 func_02091d54(...);
extern "C" s32 func_02091d64(...);
extern "C" void func_020920c4(void);
extern "C" void func_02092270(void);
extern "C" void func_0209263c(void);
extern "C" void func_02093188(void);
extern "C" void func_02093368(void);
extern "C" void func_02093524(void);
extern "C" void func_020936b4(void);
extern "C" void func_02093734(void);
extern "C" void func_0209386c(void);
extern "C" void func_020939c8(void);
extern "C" void func_02094154(void);
extern "C" void func_02097898(void);
extern "C" void func_02097aa0(void);
extern "C" void func_02097b3c(void);
extern "C" void func_02097c74(void);
extern "C" void func_02097ca8(void);
extern "C" void func_02097ef8(void);
extern "C" void func_02097fcc(void);
extern "C" s32 func_020982a0(...);
extern "C" void func_0209d668(void);
extern "C" void func_ov015_02131538(void);
extern "C" s32 func_ov015_021319bc(...);
extern "C" s32 func_ov015_02133f94(...);
extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_02134198(void);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02134300(void);
extern "C" s32 func_ov015_02136080(...);
extern "C" s32 func_ov015_02161760(...);
extern "C" s32 func_ov015_02161f84(...);
extern "C" s32 func_ov015_02161fdc(...);
extern "C" void func_ov015_02162750(void);
extern "C" s32 func_ov015_021629ac(...);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_02162f70(void);
extern "C" void gGameState(void);

extern "C" void func_ov055_02165d60(s32 arg0)
{
    func_ov015_02133f94((s32)data_ov055_02166d4c, (arg0 + 0xC));
    func_ov015_02133f94((s32)data_ov055_02166d6c, (arg0 + 0x18));
    func_ov015_02133f94((s32)data_ov055_02166d8c, (arg0 + 0x24));
}

extern "C" s32 func_ov055_02165d9c(u8 *arg0)
{
    u8 *r7;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v7;
    s32 t0;
    u8 t1;
    s32 t2;
    s32 t3;
    t0 = *(s32 *)(arg0 + 0xC);
    func_ov015_02136080((s32)((u8 *)&data_ov055_02166dac), t0, (s32)((u8 *)&data_ov055_02166bc0), (s32)(arg0 + 0x30), 0);
    v1 = func_ov015_021319bc();
    v2 = _ZN11MatchEngine13func_0206a964Ei((s32)((u8 *)&data_020e88a0), v1);
    r7 = arg0;
    arg0 = (u8 *)v2;
    if ((s32)arg0 != 0) {
        t1 = *(u8 *)(arg0 + 0x2D);
        v3 = func_ov055_02165e48((s32)r7, t1);
        *(s32 *)(r7 + 0x48) = v3;
    }
    t2 = *(s32 *)(((u8 *)&data_020c46d4));
    v4 = func_020982a0(t2, 5, 1);
    *(s32 *)(r7 + 0x4C) = v4;
    t3 = *(s32 *)(((u8 *)&data_020c46d4));
    v5 = func_020982a0(t3, 5, 1);
    *(s32 *)(r7 + 0x50) = v5;
    func_ov055_02165f64((s32)r7, 0);
    v7 = func_ov055_02165f64((s32)r7, 1);
    return v7;
}

extern "C" asm s32 func_ov055_02165e48(...)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x1c
    ldr r0, [r0, #0x18]
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl func_ov015_02134300
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {pc}
    ldr r0, =data_020c46d4
    ldr r12, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r0]
    mov r1, #0
    str r1, [sp]
    mov r3, #1
    str r3, [sp, #4]
    str r1, [sp, #8]
    str r2, [sp, #0xc]
    ldr r2, =data_ov055_02166dcc
    mov r1, #5
    str r12, [sp, #0x10]
    bl func_02097898
    add sp, sp, #0x1c
    ldmia sp!, {pc}
}

#pragma push
#pragma optimization_level 2
extern "C" s32 func_ov055_02165eb8(S02165eb8 *arg0)
{
    s32 i;
    for (i = 0; i < 9; i++) {
        s32 h = arg0->h[i];
        if (h != 0) {
            if (((s32 (*)(...))func_02097aa0)(*(s32 *)data_020c46d4, h) != 0)
                return 0;
            h = arg0->h[i];
            if (((s32 (*)(...))func_02097c74)(*(s32 *)data_020c46d4, h) == 0) {
                if (i == 6)
                    ((s32 (*)(...))func_02094154)(*(s32 *)data_020c46d4, arg0->h[i], 8, 3);
                h = arg0->h[i];
                ((s32 (*)(...))func_02097ca8)(*(s32 *)data_020c46d4, h, 0, 0);
            }
        }
    }
    return 1;
}
#pragma pop

extern "C" asm s32 func_ov055_02165f64(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    movs r4, r1
    mov r5, r0
    bmi @L_02165f7c
    cmp r4, #3
    blt @L_02165fd0
@L_02165f7c:
    mov r4, #0
    add r9, r5, #0xc
    mov r8, #1
    mov r7, r4
    mov r6, #0xc
@L_02165f90:
    mul r10, r4, r6
    mov r1, r8
    add r0, r9, r10
    bl func_ov015_02134198
    add r0, r9, r10
    bl func_ov015_02134208
    add r0, r5, r10
    str r7, [r0, #0xc]
    str r7, [r0, #0x10]
    strb r7, [r0, #0x14]
    strb r7, [r0, #0x15]
    add r4, r4, #1
    strb r7, [r0, #0x16]
    cmp r4, #3
    blt @L_02165f90
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02165fd0:
    mov r0, #0xc
    mul r6, r4, r0
    add r4, r5, #0xc
    add r0, r4, r6
    mov r1, #1
    bl func_ov015_02134198
    add r0, r4, r6
    bl func_ov015_02134208
    mov r1, #0
    str r1, [r4, r6]
    add r0, r5, r6
    str r1, [r0, #0x10]
    strb r1, [r0, #0x14]
    strb r1, [r0, #0x15]
    strb r1, [r0, #0x16]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm s32 func_ov055_02166010(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mvn r1, #0
    mov r6, r0
    bl func_ov055_02165f64
    mov r5, #0
    ldr r4, =data_020c46d4
    b @L_02166048
@L_0216602c:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x54]
    cmp r1, #0
    beq @L_02166044
    ldr r0, [r4]
    bl func_02092270
@L_02166044:
    add r5, r5, #1
@L_02166048:
    cmp r5, #1
    blt @L_0216602c
    mov r5, #0
    ldr r4, =data_020c46d4
    b @L_02166078
@L_0216605c:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x30]
    cmp r1, #0
    beq @L_02166074
    ldr r0, [r4]
    bl func_02097b3c
@L_02166074:
    add r5, r5, #1
@L_02166078:
    cmp r5, #9
    blt @L_0216605c
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov055_02166088(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    mov r10, r1
    bl func_ov055_02166274
    mov r7, #0
    ldr r5, =data_020c46d4
    mov r8, r0
    ldr r0, [r5]
    add r2, sp, #0x20
    add r3, sp, #0x24
    mov r1, r10
    str r7, [sp, #0x20]
    bl func_02097fcc
    ldr r9, [sp, #0x20]
    cmp r9, #0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =data_020c466c
    mov r11, #1
    ldr r0, [r4]
    mov r1, r11
    mov r2, r11
    bl _ZN8TextFont10SetSpacingEii
    ldr r0, [r4]
    mov r1, r7
    mov r2, r7
    bl _ZN8TextFont8SetUnk1CEhh
    ldr r0, [r5]
    mov r1, r10
    bl func_02090dcc
    mov r6, r0
    ldr r0, [r5]
    mov r1, r10
    bl func_02090dec
    stmia sp, {r0, r7}
    str r7, [sp, #8]
    str r11, [sp, #0xc]
    str r7, [sp, #0x10]
    str r7, [sp, #0x14]
    str r11, [sp, #0x18]
    str r11, [sp, #0x1c]
    ldr r0, [r4]
    mov r1, r8
    mov r3, r6
    mov r2, r9
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
    ldr r1, [sp, #0x24]
    mov r0, r9
    bl DC_FlushRange
    ldr r0, [r4]
    bl _ZN8TextFont12ResetSpacingEv
    ldr r0, [r5]
    ldr r3, [sp, #0x24]
    mov r1, r10
    str r7, [sp]
    str r7, [sp, #4]
    mov r2, r9
    str r7, [sp, #8]
    bl func_02097ef8
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov055_02166184(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    mov r10, r1
    add r1, sp, #0x28
    bl func_ov055_02166298
    mov r7, #0
    ldr r5, =data_020c46d4
    mov r8, r0
    ldr r0, [r5]
    add r2, sp, #0x20
    add r3, sp, #0x24
    mov r1, r10
    str r7, [sp, #0x20]
    bl func_02097fcc
    ldr r9, [sp, #0x20]
    cmp r9, #0
    addeq sp, sp, #0x48
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =data_020c46a8
    mov r11, #1
    ldr r0, [r4]
    mov r2, r11
    mov r1, #2
    bl _ZN8TextFont10SetSpacingEii
    ldr r0, [r5]
    mov r1, r10
    bl func_02090dcc
    mov r6, r0
    ldr r0, [r5]
    mov r1, r10
    bl func_02090dec
    stmia sp, {r0, r7}
    str r7, [sp, #8]
    str r11, [sp, #0xc]
    str r7, [sp, #0x10]
    str r7, [sp, #0x14]
    str r11, [sp, #0x18]
    str r11, [sp, #0x1c]
    ldr r0, [r4]
    mov r1, r8
    mov r3, r6
    mov r2, r9
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
    ldr r1, [sp, #0x24]
    mov r0, r9
    bl DC_FlushRange
    ldr r0, [r4]
    bl _ZN8TextFont12ResetSpacingEv
    ldr r0, [r5]
    ldr r3, [sp, #0x24]
    mov r1, r10
    str r7, [sp]
    str r7, [sp, #4]
    mov r2, r9
    str r7, [sp, #8]
    bl func_02097ef8
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov055_02166274(void)
{
    s32 v0 = func_ov015_021319bc();
    s32 v1 = _ZN11MatchEngine13func_0206a964Ei((s32)data_020e88a0, v0);
    return (v1 == 0 ? 0 : v1);
}

extern "C" asm void func_ov055_02166298(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    ldr r3, =gGameState
    mov r4, r1
    ldr r1, [r3, #0x4d4]
    stmia sp, {r1, r4}
    ldr r2, [r3, #0x4d0]
    ldr r1, [r3, #0x4cc]
    ldr r0, [r0, #0x24]
    mov r3, r2
    bl func_ov015_02131538
    mov r0, r4
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov055_021662d4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r10, r0
    ldr r0, [r10, #0x54]
    ldr r7, =data_020c46d4
    cmp r0, #0
    mov r6, #1
    mov r4, #0
    bne @L_02166838
    ldr r0, [r7]
    mov r2, r6
    mov r1, #0xc
    bl func_020920c4
    movs r5, r0
    addeq sp, sp, #0x14
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r5, [r10, #0x54]
    ldr r0, [r7]
    mov r1, r5
    sub r3, r6, #2
    mov r2, #0x258
    bl func_0209263c
    ldr r3, [r10, #0x30]
    ldr r0, [r7]
    mov r1, r5
    mov r2, r6
    and r3, r3, #0xff
    bl func_02093188
    str r4, [sp]
    ldr r0, [r7]
    mov r1, r5
    mov r2, r6
    mov r3, r4
    bl func_020939c8
    ldr r3, [r10, #0x44]
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #1
    and r3, r3, #0xff
    bl func_02093188
    str r4, [sp]
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #1
    mov r3, r4
    bl func_020939c8
    mov r8, #0x18
    str r8, [sp]
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #1
    mov r3, r8
    bl func_02093524
    ldr r3, [r10, #0x40]
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #2
    and r3, r3, #0xff
    bl func_02093188
    str r4, [sp]
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #2
    mov r3, r4
    bl func_020939c8
    str r4, [sp]
    ldr r0, [r7]
    mov r3, r8
    mov r1, r5
    add r2, r6, #2
    bl func_02093524
    ldr r3, [r10, #0x48]
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #3
    and r3, r3, #0xff
    bl func_02093188
    str r4, [sp]
    ldr r0, [r7]
    mov r3, r4
    mov r1, r5
    add r2, r6, #3
    bl func_020939c8
    mov r0, #0x20
    str r0, [sp]
    ldr r0, [r7]
    mov r1, r5
    add r2, r6, #3
    mov r3, #0x60
    mov r4, r7
    bl func_02093524
    add r6, r6, #4
    bl func_ov015_021319bc
    mov r1, r0
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_0206b4b8Ei
    str r0, [sp, #0x10]
    cmp r0, #0x3c
    bge @L_02166560
    mov r8, r0
    cmp r0, #0x63
    movgt r8, #0x63
    mov r9, #0x7a
    mov r7, #0
    ldr r11, =0x66666667
    b @L_02166558
@L_0216647c:
    ldr r3, [r10, #0x34]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    and r3, r3, #0xff
    bl func_02093188
    smull r12, r3, r11, r8
    mov r12, r8, lsr #0x1f
    add r3, r12, r3, asr #2
    mov r12, #0xa
    smull r3, lr, r12, r3
    mov r0, #0
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    sub r3, r8, r3
    bl func_020939c8
    mov r0, #0x7c
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, r9
    bl func_02093524
    mov r0, #1
    cmp r7, #0
    mov r1, r0
    cmpne r8, #0xa
    movlt r1, #0
    cmp r1, #0
    bne @L_02166518
    smull r1, r2, r11, r8
    mov r1, r8, lsr #0x1f
    add r2, r1, r2, asr #2
    mov r1, #0xa
    smull r2, r3, r1, r2
    subs r2, r8, r2
    moveq r0, #0
@L_02166518:
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, #2
    bl func_0209386c
    cmp r8, #0
    movgt r1, r8
    smullgt r0, r8, r11, r1
    movgt r0, r1, lsr #0x1f
    addgt r8, r0, r8, asr #2
    sub r0, r9, #8
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    add r6, r6, #1
    add r7, r7, #1
@L_02166558:
    cmp r7, #2
    blt @L_0216647c
@L_02166560:
    ldr r1, =gGameState
    ldr r0, =0x3e7
    ldr r8, [r1, #0x4d0]
    ldr r4, =data_020c46d4
    cmp r8, r0
    movgt r8, r0
    bl func_0209d668
    mov r9, #0xb0
    cmp r0, #1
    movne r9, #0xc8
    mov r7, #0
    ldr r11, =0x66666667
    b @L_02166670
@L_02166594:
    ldr r3, [r10, #0x38]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    and r3, r3, #0xff
    bl func_02093188
    smull r12, r3, r11, r8
    mov r12, r8, lsr #0x1f
    add r3, r12, r3, asr #2
    mov r12, #0xa
    smull r3, lr, r12, r3
    mov r0, #0
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    sub r3, r8, r3
    bl func_020939c8
    mov r0, #0x7c
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, r9
    bl func_02093524
    mov r0, #1
    cmp r7, #0
    mov r1, r0
    cmpne r8, #0xa
    movlt r1, #0
    cmp r1, #0
    bne @L_02166630
    smull r1, r2, r11, r8
    mov r1, r8, lsr #0x1f
    add r2, r1, r2, asr #2
    mov r1, #0xa
    smull r2, r3, r1, r2
    subs r2, r8, r2
    moveq r0, #0
@L_02166630:
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, #2
    bl func_0209386c
    cmp r8, #0
    movgt r1, r8
    smullgt r0, r8, r11, r1
    movgt r0, r1, lsr #0x1f
    addgt r8, r0, r8, asr #2
    sub r0, r9, #8
    mov r0, r0, lsl #0x10
    mov r9, r0, asr #0x10
    add r6, r6, #1
    add r7, r7, #1
@L_02166670:
    cmp r7, #3
    blt @L_02166594
    ldr r1, [r10, #0x4c]
    mov r0, r10
    bl func_ov055_02166088
    ldr r4, =data_020c46d4
    ldr r3, [r10, #0x4c]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    and r3, r3, #0xff
    bl func_02093188
    mov r7, #0
    str r7, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, r7
    bl func_02093734
    ldr r0, [r4]
    ldr r1, [r10, #0x4c]
    bl func_02090dcc
    mov r8, r0
    ldr r0, [r4]
    ldr r1, [r10, #0x4c]
    bl func_02090dec
    mov r1, r8, lsl #0x10
    mov r3, r1, asr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    bl func_020936b4
    mov r0, #0x6c
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    mov r2, r6
    mov r3, r7
    bl func_02093524
    mov r0, r10
    ldr r1, [r10, #0x50]
    bl func_ov055_02166184
    ldr r0, [r4]
    mov r1, r5
    add r2, r6, #1
    ldr r3, [r10, #0x50]
    and r3, r3, #0xff
    bl func_02093188
    str r7, [sp]
    ldr r0, [r4]
    mov r1, r5
    add r2, r6, #1
    mov r3, r7
    bl func_02093734
    ldr r0, [r4]
    ldr r1, [r10, #0x50]
    bl func_02090dcc
    mov r8, r0
    ldr r0, [r4]
    ldr r1, [r10, #0x50]
    bl func_02090dec
    mov r1, r8, lsl #0x10
    mov r3, r1, asr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    add r2, r6, #1
    bl func_020936b4
    mov r0, #0xa0
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    add r2, r6, #1
    mov r3, r7
    bl func_02093524
    ldr r0, [r4]
    mov r1, r5
    mov r3, r7
    add r2, r6, #2
    bl func_02093368
    ldr r3, [r10, #0x3c]
    ldr r0, [r4]
    mov r1, r5
    add r2, r6, #2
    and r3, r3, #0xff
    bl func_02093188
    mov r0, #0x80
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r5
    add r2, r6, #2
    mov r3, #0x20
    bl func_02093524
    str r7, [sp]
    ldr r0, [r4]
    mov r1, r5
    add r2, r6, #2
    mov r3, r7
    bl func_020939c8
    ldr r0, [sp, #0x10]
    mov r1, r5
    cmp r0, #0x3c
    movge r7, #1
    ldr r0, =data_020c46d4
    str r7, [sp]
    ldr r0, [r0]
    add r2, r6, #2
    mov r3, #2
    bl func_0209386c
@L_02166838:
    mov r0, r10
    mov r1, #2
    bl func_ov055_02165f64
    mov r3, #0
    mov r1, #1
    str r3, [sp]
    mov r0, #0x100
    str r0, [sp, #4]
    mov r0, #0xc0
    str r0, [sp, #8]
    ldr r0, =data_020c46c4
    str r3, [sp, #0xc]
    ldr r0, [r0]
    mov r2, r1
    bl func_ov015_02162f70
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov055_02166894(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 6;
}

extern "C" s32 func_ov055_021668a0(void)
{
    u8 *t0 = (u8 *)(*(s32 *)(data_020c46c4) + 0xF00);
    *(u16 *)(t0 + 0x38) = 1;
    return (s32)t0;
}

extern "C" void func_ov055_021668bc(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0) = (s32)data_ov055_02166ce0;
}

extern "C" void func_ov055_021668d0(u8 *arg0, s32 arg1)
{
    s32 r4;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    u8 *t2;
    u16 t3;
    if (*(s32 *)(arg0 + 0x8) != 5)
        return;
    t0 = *(s32 *)(((u8 *)&data_020c46b8));
    v0 = func_ov015_02161760(t0, arg1);
    if (v0 != 0)
        return;
    t1 = *(s32 *)(((u8 *)&data_020c46c4));
    v1 = func_ov015_021629ac(t1);
    r4 = arg1;
    if (v1 != 0) {
        if (*(u16 *)(*(u8 * *)(((u8 *)&data_020c46c4)) + 0xF38) == 0)
            return;
        t2 = (u8 *)(*(u8 * *)(((u8 *)&data_020c46c4)) + 0xF00);
        t3 = *(u16 *)(*(u8 * *)(((u8 *)&data_020c46c4)) + 0xF38);
        *(u16 *)(t2 + 0x38) = 0;
        r4 = t3;
    }
    if ((r4 & 0x2FFF) == 0)
        return;
    _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&data_020c5e40), 1);
    func_ov055_02166894(arg0);
    return;
}

extern "C" void func_ov055_02166960(u8 *arg0, s32 arg1)
{
    s32 *zp;
    s32 z = 0;
    zp = &z;
    if (((s32 (*)(s32))func_ov015_02161760)(*(s32 *)data_020c46b8) != 0 || *(s32 *)(arg0 + 8) != 5)
        return;
    if (((s32 (*)(s32, s32, s32))func_ov015_02162750)(*(s32 *)data_020c46c4, arg1, *zp) != 2)
        return;
    ((void (*)(u8 *, s32))func_ov055_021668a0)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)data_020c46c4));
}

extern "C" s32 func_ov055_021669c8(u8 *arg0)
{
    s32 v6;
    s32 t0;
    s32 t2;
    t0 = *(s32 *)(((u8 *)&data_020c46c4));
    func_ov015_02161f84(t0, (s32)((u8 *)&data_020c46c4));
    ((VCall *)arg0)->f17();
    *(s32 *)(arg0 + 0x8) = 0;
    MI_CpuFill8((s32)(arg0 + 0xC), 0, 0x24);
    MI_CpuFill8((s32)(arg0 + 0x30), 0, 0x24);
    MI_CpuFill8((s32)(arg0 + 0x54), 0, 4);
    t2 = *(s32 *)(((u8 *)&data_020c46d4));
    func_02091d54(t2);
    v6 = _ZN11MatchEngine13func_02077bd4Ev((s32)((u8 *)&data_020e88a0));
    return v6;
}

extern "C" asm void func_ov055_02166a4c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    b @L_02166a84
    b @L_02166a90
    b @L_02166ab4
    b @L_02166acc
    b @L_02166adc
    ldmia sp!, {r4, pc}
    b @L_02166b0c
    b @L_02166b38
@L_02166a84:
    bl func_ov055_02165d60
    mov r0, #1
    str r0, [r4, #8]
@L_02166a90:
    add r0, r4, #0xc
    mov r1, #3
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov055_02165d9c
    mov r0, #2
    str r0, [r4, #8]
@L_02166ab4:
    mov r0, r4
    bl func_ov055_02165eb8
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, #3
    str r0, [r4, #8]
@L_02166acc:
    mov r0, r4
    bl func_ov055_021662d4
    mov r0, #4
    str r0, [r4, #8]
@L_02166adc:
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #5
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02166b0c:
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r0, #7
    str r0, [r4, #8]
@L_02166b38:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    ldr r0, [r4, #4]
    mov r1, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov055_02166b64(void)
{
}

extern "C" void func_ov055_02166b68(s32 arg0)
{
    func_ov015_02161fdc(*(s32 *)(data_020c46c4), (s32)data_020c46c4);
    func_ov055_02166010(arg0);
    func_02091d64(*(s32 *)(data_020c46d4));
    _ZN11MatchEngine13func_02077ce4Ev((s32)data_020e88a0);
}

extern "C" s32 func_ov055_02166ba8(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov055_02166bbc(void)
{
}
