#include "game/Unk_0209386c.hpp"
#include "nitro/mi.h"

extern "C" void func_020985fc(void);     // (for the asm functions)
extern "C" void func_0209860c(void);     // (for the asm functions)
extern "C" void func_02098710(void);     // (for the asm functions)
extern "C" void func_02098930(void);     // (for the asm functions)
extern "C" void func_02098b48(void);     // (for the asm functions)
extern "C" s32 func_020960ac(...);     // (for the asm functions)
extern "C" void func_0209386c(void);
extern "C" void func_02093928(void);
extern "C" void func_020939c8(void);
extern "C" void func_02093a48(void);
extern "C" void func_02093afc(void);
extern "C" s32 func_02093bb0(u8 *arg0, s32 arg1, u16 arg2);
extern "C" s32 func_02093bf4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_02093ca8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3);
extern "C" s32 func_02093d1c(...);
extern "C" void func_02093d80(void);
extern "C" s32 func_02093df0(u8 *arg0, s32 arg1);
extern "C" void func_02093e2c(void);
extern "C" void func_02093edc(void);
extern "C" void func_02094154(void);
extern "C" BOOL func_0209443c(u8 *obj);
extern "C" s32 func_02094450(s32 arg0, u8 *arg1, s32 arg2);
extern "C" void func_02094484(void);
extern "C" BOOL func_020944b4(void *self, u8 *obj);
extern "C" s32 func_020944d4(s32 arg0);
extern "C" void func_02094528(s32 arg0, u8 *arg1);
extern "C" void func_02094580(void *self, u8 *obj);
extern "C" void func_020945ac(void);
extern "C" void func_020945ec(void);
extern "C" void func_020946d8(void);
extern "C" void func_0209489c(void);

extern "C" char data_020a2cf8[];
extern "C" char data_020bf464[];
extern "C" char data_020c4668[];
extern "C" char data_020c46d0[];
extern "C" char data_020c47b4[];
extern "C" void DC_FlushRange(void);
extern "C" void FX_SinCosTable_(void);
extern "C" void MTX_RotX43_(void);
extern "C" void MTX_RotY43_(void);
extern "C" void MTX_RotZ43_(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void func_02000e88(void);
extern "C" void func_02017ce8(void);
extern "C" s32 _fflt(...);
extern "C" void _s32_div_f(void);
extern "C" void _u32_div_f(void);
extern "C" s32 _ffix(...);
extern "C" s32 _fadd(...);
extern "C" s32 _fsub(...);
extern "C" void func_0202b608(void);
extern "C" void func_020917c0(void);
extern "C" void func_02091fc0(void);
extern "C" void func_020990e8(void);
extern "C" void func_02099d90(void);
extern "C" void func_ov015_02130fd4(void);
extern "C" void func_ov015_0213d4d8(void);

extern "C" asm void func_0209386c(void)
{
    stmdb sp!, {r3, lr}
    ldrb r12, [sp, #8]
    cmp r12, #0
    bne @L_02093884
    bl func_02093928
    ldmia sp!, {r3, pc}
@L_02093884:
    ldr lr, [r0, #0x1c]
    cmp lr, #0
    ldrne r12, [r0, #0x20]
    cmpne r12, #0
    movle r1, #0
    ble @L_020938bc
    cmp r1, #0
    ble @L_020938ac
    cmp r1, r12
    ble @L_020938b4
@L_020938ac:
    mov r1, #0
    b @L_020938bc
@L_020938b4:
    sub r1, r1, #1
    add r1, lr, r1, lsl #5
@L_020938bc:
    cmp r1, #0
    ldrne r12, [r1]
    cmpne r12, #0
    cmpne r2, #0
    ble @L_020938dc
    ldrb r1, [r1, #6]
    cmp r2, r1
    ble @L_020938e4
@L_020938dc:
    mov r1, #0
    b @L_020938f0
@L_020938e4:
    sub r2, r2, #1
    mov r1, #0x60
    mla r1, r2, r1, r12
@L_020938f0:
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldr r2, =0xf0ff
    ldrh r12, [r1, #2]
    and r2, r3, r2
    mov r2, r2, lsl #0x10
    orr r2, r12, r2, lsr #16
    strh r2, [r1, #2]
    tst r3, #0x3c
    ldmeqia sp!, {r3, pc}
    mov r2, #2
    bl func_020917c0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02093928(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0x1c]
    cmp lr, #0
    ldrne r12, [r0, #0x20]
    cmpne r12, #0
    movle r1, #0
    ble @L_02093964
    cmp r1, #0
    ble @L_02093954
    cmp r1, r12
    ble @L_0209395c
@L_02093954:
    mov r1, #0
    b @L_02093964
@L_0209395c:
    sub r1, r1, #1
    add r1, lr, r1, lsl #5
@L_02093964:
    cmp r1, #0
    ldrne r12, [r1]
    cmpne r12, #0
    cmpne r2, #0
    ble @L_02093984
    ldrb r1, [r1, #6]
    cmp r2, r1
    ble @L_0209398c
@L_02093984:
    mov r1, #0
    b @L_02093998
@L_0209398c:
    sub r2, r2, #1
    mov r1, #0x60
    mla r1, r2, r1, r12
@L_02093998:
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldrh r12, [r1, #2]
    mvn r2, r3
    mov r2, r2, lsl #0x10
    and r2, r12, r2, lsr #16
    strh r2, [r1, #2]
    tst r3, #0x3c
    ldmeqia sp!, {r3, pc}
    mov r2, #2
    bl func_020917c0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_020939c8(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0x1c]
    cmp lr, #0
    ldrne r12, [r0, #0x20]
    cmpne r12, #0
    movle r1, #0
    ble @L_02093a04
    cmp r1, #0
    ble @L_020939f4
    cmp r1, r12
    ble @L_020939fc
@L_020939f4:
    mov r1, #0
    b @L_02093a04
@L_020939fc:
    sub r1, r1, #1
    add r1, lr, r1, lsl #5
@L_02093a04:
    cmp r1, #0
    ldrne r12, [r1]
    cmpne r12, #0
    cmpne r2, #0
    ble @L_02093a24
    ldrb r1, [r1, #6]
    cmp r2, r1
    ble @L_02093a2c
@L_02093a24:
    mov r1, #0
    b @L_02093a38
@L_02093a2c:
    sub r2, r2, #1
    mov r1, #0x60
    mla r1, r2, r1, r12
@L_02093a38:
    mov r2, r3
    ldrb r3, [sp, #8]
    bl func_02091fc0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02093a48(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, [r0, #0x1c]
    ldr r12, [sp, #8]
    cmp r4, #0
    ldrne lr, [r0, #0x20]
    cmpne lr, #0
    movle r1, #0
    ble @L_02093a88
    cmp r1, #0
    ble @L_02093a78
    cmp r1, lr
    ble @L_02093a80
@L_02093a78:
    mov r1, #0
    b @L_02093a88
@L_02093a80:
    sub r1, r1, #1
    add r1, r4, r1, lsl #5
@L_02093a88:
    cmp r1, #0
    ldrne lr, [r1]
    cmpne lr, #0
    cmpne r2, #0
    ble @L_02093aa8
    ldrb r1, [r1, #6]
    cmp r2, r1
    ble @L_02093ab0
@L_02093aa8:
    mov r1, #0
    b @L_02093abc
@L_02093ab0:
    sub r2, r2, #1
    mov r1, #0x60
    mla r1, r2, r1, lr
@L_02093abc:
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    ldrb r2, [r1, #0x18]
    cmp r3, #0x64
    movhi r3, #0x64
    cmp r12, #0x64
    movhi r12, #0x64
    cmp r2, r3
    ldreqb r2, [r1, #0x19]
    cmpeq r2, r12
    ldmeqia sp!, {r4, pc}
    strb r3, [r1, #0x18]
    mov r2, #8
    strb r12, [r1, #0x19]
    bl func_020917c0
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02093afc(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, [r0, #0x1c]
    ldr r12, [sp, #8]
    cmp r4, #0
    ldrne lr, [r0, #0x20]
    cmpne lr, #0
    movle r1, #0
    ble @L_02093b3c
    cmp r1, #0
    ble @L_02093b2c
    cmp r1, lr
    ble @L_02093b34
@L_02093b2c:
    mov r1, #0
    b @L_02093b3c
@L_02093b34:
    sub r1, r1, #1
    add r1, r4, r1, lsl #5
@L_02093b3c:
    cmp r1, #0
    ldrne lr, [r1]
    cmpne lr, #0
    cmpne r2, #0
    ble @L_02093b5c
    ldrb r1, [r1, #6]
    cmp r2, r1
    ble @L_02093b64
@L_02093b5c:
    mov r1, #0
    b @L_02093b70
@L_02093b64:
    sub r2, r2, #1
    mov r1, #0x60
    mla r1, r2, r1, lr
@L_02093b70:
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    ldrb r2, [r1, #0x1a]
    cmp r3, #0x64
    movhi r3, #0x64
    cmp r12, #0x64
    movhi r12, #0x64
    cmp r2, r3
    ldreqb r2, [r1, #0x1b]
    cmpeq r2, r12
    ldmeqia sp!, {r4, pc}
    strb r3, [r1, #0x1a]
    mov r2, #4
    strb r12, [r1, #0x1b]
    bl func_020917c0
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_02093bb0(u8 *arg0, s32 arg1, u16 arg2)
{
    s32 r3;
    r3 = *(s32 *)(arg0 + 0x1C);
    if ((r3 == 0 || (arg0 = (u8 *)*(s32 *)(arg0 + 0x20), (s32)arg0 <= 0))) {
        arg0 = (u8 *)0;
    } else {
        if ((arg1 <= 0 || arg1 > (s32)arg0)) {
            arg0 = (u8 *)0;
        } else {
            arg0 = (u8 *)(r3 + ((arg1 - 1) << 5));
        }
    }
    if ((s32)arg0 != 0) {
        *(u16 *)(arg0 + 0x14) = arg2;
    }
    return (s32)arg0;
}

extern "C" s32 func_02093bf4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r12;
    s32 v0;
    s32 v2;
    s32 v4;
    s32 v5;
    s32 v7;
    s32 v9;
    r12 = *(s32 *)(arg0 + 0x1C);
    if ((r12 == 0 || (arg0 = (u8 *)*(s32 *)(arg0 + 0x20), (s32)arg0 <= 0))) {
        r4 = (u8 *)0;
    } else {
        if ((arg1 <= 0 || arg1 > (s32)arg0)) {
            r4 = (u8 *)0;
        } else {
            arg0 = (u8 *)(arg1 - 1);
            r4 = (u8 *)(r12 + ((arg1 - 1) << 5));
        }
    }
    if ((s32)r4 == 0)
        return (s32)arg0;
    if (arg2 > 0) {
        v0 = _fflt((arg2 << 0xC));
        _fadd(0x3F000000, v0);
    } else {
        v2 = _fflt((arg2 << 0xC));
        _fsub(v2, 0x3F000000);
    }
    v4 = _ffix();
    *(s32 *)(r4 + 0x8) = v4;
    if (arg3 > 0) {
        v5 = _fflt((arg3 << 0xC));
        _fadd(0x3F000000, v5);
    } else {
        v7 = _fflt((arg3 << 0xC));
        _fsub(v7, 0x3F000000);
    }
    v9 = _ffix();
    *(s32 *)(r4 + 0xC) = v9;
    return v9;
}

extern "C" s32 func_02093ca8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3)
{
    s32 v0;
    s32 t0;
    if ((s32)arg3 == 0) {
        v0 = func_02093d1c();
        return v0;
    } else {
        arg3 = (u8 *)*(s32 *)(arg0 + 0x1C);
        if (((s32)arg3 == 0 || (arg0 = (u8 *)*(s32 *)(arg0 + 0x20), (s32)arg0 <= 0))) {
            arg3 = (u8 *)0;
        } else {
            if ((arg1 <= 0 || arg1 > (s32)arg0)) {
                arg3 = (u8 *)0;
            } else {
                arg0 = (u8 *)(arg1 - 1);
                arg3 = (u8 *)(arg3 + ((arg1 - 1) << 5));
            }
        }
        if ((s32)arg3 == 0)
            return (s32)arg0;
        t0 = (*(u16 *)(arg3 + 0x4) | ((u16)(arg2 & 0x7003)));
        *(u16 *)(arg3 + 0x4) = t0;
        return t0;
    }
}

extern "C" asm s32 func_02093d1c(...)
{
    ldr r3, [r0, #0x1c]
    cmp r3, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r3, #0
    ble @L_02093d54
    cmp r1, #0
    ble @L_02093d44
    cmp r1, r0
    ble @L_02093d4c
@L_02093d44:
    mov r3, #0
    b @L_02093d54
@L_02093d4c:
    sub r0, r1, #1
    add r3, r3, r0, lsl #5
@L_02093d54:
    cmp r3, #0
    bxeq lr
    ldr r0, =0x7003
    ldrh r1, [r3, #4]
    and r0, r2, r0
    mvn r0, r0
    mov r0, r0, lsl #0x10
    and r0, r1, r0, lsr #16
    strh r0, [r3, #4]
    bx lr
}

extern "C" asm void func_02093d80(void)
{
    ldr r3, [r0, #0x1c]
    cmp r3, #0
    ldrne r0, [r0, #0x20]
    cmpne r0, #0
    movle r0, #0
    ble @L_02093db8
    cmp r1, #0
    ble @L_02093da8
    cmp r1, r0
    ble @L_02093db0
@L_02093da8:
    mov r0, #0
    b @L_02093db8
@L_02093db0:
    sub r0, r1, #1
    add r0, r3, r0, lsl #5
@L_02093db8:
    cmp r0, #0
    ldrne r3, [r0]
    cmpne r3, #0
    cmpne r2, #0
    ble @L_02093dd8
    ldrb r0, [r0, #6]
    cmp r2, r0
    ble @L_02093de0
@L_02093dd8:
    mov r0, #0
    bx lr
@L_02093de0:
    sub r1, r2, #1
    mov r0, #0x60
    mla r0, r1, r0, r3
    bx lr
}

extern "C" s32 func_02093df0(u8 *arg0, s32 arg1)
{
    s32 r2;
    r2 = *(s32 *)(arg0 + 0x1C);
    if ((r2 == 0 || (arg0 = (u8 *)*(s32 *)(arg0 + 0x20), (s32)arg0 <= 0))) {
        return 0;
    } else {
        if ((arg1 <= 0 || arg1 > (s32)arg0)) {
            return 0;
        } else {
            return (r2 + ((arg1 - 1) << 5));
        }
    }
}

extern "C" asm void func_02093e2c(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, [r0, #0x1c]
    ldr r12, [sp, #8]
    cmp r4, #0
    ldrne r0, [r0, #0x20]
    mov lr, #0
    cmpne r0, #0
    movle r0, #0
    ble @L_02093e70
    cmp r1, #0
    ble @L_02093e60
    cmp r1, r0
    ble @L_02093e68
@L_02093e60:
    mov r0, #0
    b @L_02093e70
@L_02093e68:
    sub r0, r1, #1
    add r0, r4, r0, lsl #5
@L_02093e70:
    cmp r0, #0
    ldrne r4, [r0]
    cmpne r4, #0
    cmpne r2, #0
    ble @L_02093e90
    ldrb r0, [r0, #6]
    cmp r2, r0
    ble @L_02093e98
@L_02093e90:
    mov r2, #0
    b @L_02093ea4
@L_02093e98:
    sub r1, r2, #1
    mov r0, #0x60
    mla r2, r1, r0, r4
@L_02093ea4:
    cmp r2, #0
    beq @L_02093ec8
    cmp r3, #0
    ldrnesh r0, [r2, #8]
    strne r0, [r3]
    cmp r12, #0
    ldrnesh r0, [r2, #0xa]
    strne r0, [r12]
    ldmia sp!, {r4, pc}
@L_02093ec8:
    cmp r3, #0
    strne lr, [r3]
    cmp r12, #0
    strne lr, [r12]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02093edc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    bl func_020985fc
    str r0, [sp, #0xc]
    cmp r0, #0
    ldrne r0, [r0, #0x20]
    strne r0, [sp, #0x20]
    cmpne r0, #0
    ldrne r0, [r0]
    cmpne r0, #3
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x20]
    mov r5, #8
    ldr r1, [r0, #0x1c]
    ldr r3, [r0, #0xc]
    add r0, r0, r1
    ldrb r1, [r0, #4]
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x20]
    cmp r1, #3
    ldr r2, [r0, #0x14]
    add r0, r0, r3
    str r0, [sp, #0x1c]
    ldr r0, [sp, #0x20]
    mov r6, #1
    add r0, r0, r2
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x20]
    moveq r6, #2
    ldr r0, [r0, #4]
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x14]
    ldrb r1, [r0, #2]
    ldrb r0, [r0, #3]
    mov r1, r5, lsl r1
    mov r0, r5, lsl r0
    mul r0, r1, r0
    mov r1, r6
    bl _s32_div_f
    ldr r1, [sp, #0x20]
    mov r4, r0
    add r0, r4, #0x20
    str r0, [sp, #4]
    mov r8, #0
    ldr r7, [r1, #0x20]
    ldr r3, [r1, #8]
    ldr r1, [sp, #4]
    ldr r0, =data_020c47b4
    add r1, r1, r3
    mov r2, r8
    add r1, r7, r1
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    mov r2, #3
    str r2, [r0]
    mov r2, #0x20
    stmib r0, {r2, r4}
    add r3, r4, #0x20
    str r0, [sp]
    str r3, [r0, #0xc]
    ldr r0, [sp, #0x20]
    mov r1, r6
    ldr r6, [r0, #8]
    ldr r0, [sp]
    mov r2, r3
    add r3, r3, r6
    str r6, [r0, #0x10]
    add r4, r0, #0x20
    str r3, [r0, #0x14]
    ldr r0, [sp, #0x20]
    add r2, r2, r6
    ldr r6, [r0, #0x20]
    mov r0, r5
    add r3, r6, r2
    ldr r2, [sp]
    str r6, [r2, #0x18]
    str r3, [r2, #0x1c]
    bl _s32_div_f
    mov r10, r0
    ldr r0, [sp, #0x14]
    ldrb r1, [r0, #2]
    ldrb r0, [r0, #3]
    mov r2, r5, lsl r1
    mov r1, r5, lsl r0
    mov r0, r2, asr #2
    add r0, r2, r0, lsr #29
    mov r6, r0, asr #3
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r0, r0, asr #3
    str r0, [sp, #0x10]
    cmp r0, #0
    ble @L_020940cc
    mov r0, r10, lsl #3
    str r0, [sp, #8]
@L_0209405c:
    cmp r6, #0
    mov r7, #0
    ble @L_020940bc
    mul r1, r8, r6
    ldr r0, [sp, #0x1c]
    add r11, r0, r1, lsl #1
@L_02094074:
    mov r0, r7, lsl #1
    ldrh r2, [r0, r11]
    ldr r1, [sp, #8]
    ldr r0, [sp, #0x18]
    mov r9, #0
    mla r5, r1, r2, r0
@L_0209408c:
    mla r0, r9, r10, r5
    add r1, r9, r8, lsl #3
    mla r2, r1, r6, r7
    mla r1, r10, r2, r4
    mov r2, r10
    bl MI_CpuCopy8
    add r9, r9, #1
    cmp r9, #8
    blt @L_0209408c
    add r7, r7, #1
    cmp r7, r6
    blt @L_02094074
@L_020940bc:
    ldr r0, [sp, #0x10]
    add r8, r8, #1
    cmp r8, r0
    blt @L_0209405c
@L_020940cc:
    ldr r0, [sp]
    ldr r1, [sp, #0x20]
    ldr r3, [r0, #0xc]
    ldr r2, [r0, #0x10]
    ldr r0, [sp, #0x24]
    add r0, r1, r0
    ldr r1, [sp]
    add r1, r1, r3
    bl MI_CpuCopy8
    ldr r0, [sp]
    ldr r1, [sp]
    ldr r3, [r0, #0x14]
    ldr r2, [r0, #0x18]
    ldr r0, [sp, #0x14]
    add r1, r1, r3
    bl MI_CpuCopy8
    ldr r0, [sp, #0x20]
    ldr r1, [r0, #8]
    ldr r2, [r0, #0x20]
    ldr r0, [sp, #4]
    add r1, r0, r1
    ldr r0, [sp]
    add r1, r2, r1
    bl DC_FlushRange
    ldr r0, [sp, #0xc]
    ldr r1, [r0, #0x20]
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    ldr r1, [sp]
    ldr r0, [sp, #0xc]
    str r1, [r0, #0x20]
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02094154(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r11, r2
    str r3, [sp]
    bl func_020985fc
    str r0, [sp, #0x10]
    cmp r0, #0
    ldrne r0, [r0, #0x20]
    strne r0, [sp, #0x30]
    cmpne r0, #0
    addeq sp, sp, #0x3c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r0]
    cmp r0, #3
    addlo sp, sp, #0x3c
    ldmloia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x10]
    ldrb r0, [r0, #0x5e]
    cmp r0, #0
    addne sp, sp, #0x3c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x30]
    mov r6, #2
    ldr r2, [r0, #0xc]
    ldr r1, [r0, #0x14]
    ldr r0, [sp]
    cmp r0, #3
    ldr r0, [sp, #0x30]
    movne r6, #1
    add r0, r0, r2
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x30]
    add r0, r0, r1
    str r0, [sp, #0x28]
    ldr r0, [sp, #0x30]
    mov r1, r11
    ldr r0, [r0, #4]
    str r0, [sp, #0x34]
    ldr r0, [sp, #0x30]
    ldr r0, [r0, #0x10]
    bl _u32_div_f
    mov r1, #0
    mov r0, r0, lsr #1
    str r0, [sp, #0x24]
    mov r0, #4
    str r1, [sp, #0x1c]
    str r1, [sp, #0x20]
    mov r1, r11, lsl #3
    str r1, [sp, #0x18]
    ldr r1, [sp, #0x24]
    mov r5, r0
    mov r1, r1, lsl #3
    str r1, [sp, #0x14]
@L_02094228:
    ldr r1, [sp, #0x18]
    mov r5, r5, lsl #1
    cmp r1, r5
    ble @L_0209424c
    ldr r1, [sp, #0x20]
    cmp r5, #0x400
    add r1, r1, #1
    str r1, [sp, #0x20]
    blt @L_02094228
@L_0209424c:
    ldr r1, [sp, #0x14]
    mov r0, r0, lsl #1
    cmp r1, r0
    ble @L_02094270
    ldr r1, [sp, #0x1c]
    cmp r0, #0x400
    add r1, r1, #1
    str r1, [sp, #0x1c]
    blt @L_0209424c
@L_02094270:
    mul r0, r5, r0
    mov r1, r6
    bl _s32_div_f
    mov r4, r0
    ldr r0, [sp, #0x30]
    add r2, r4, #0x30
    ldr r1, [r0, #8]
    ldr r0, =data_020c47b4
    add r1, r2, r1
    mov r7, #0
    mov r2, r7
    mov r3, #1
    str r1, [sp, #8]
    bl _ZN8GameHeap5AllocEiii
    mov r2, #3
    str r2, [r0]
    mov r2, #0x20
    stmib r0, {r2, r4}
    add r3, r4, #0x20
    str r0, [sp, #4]
    str r3, [r0, #0xc]
    ldr r0, [sp, #0x30]
    mov r2, #0x10
    ldr r4, [r0, #8]
    ldr r0, [sp, #4]
    add r3, r3, r4
    str r4, [r0, #0x10]
    str r3, [r0, #0x14]
    str r2, [r0, #0x18]
    ldr r2, [sp, #8]
    mov r1, r6
    str r2, [r0, #0x1c]
    add r4, r0, #0x20
    mov r0, #8
    bl _s32_div_f
    mov r10, r0
    ldr r0, [sp, #0x24]
    cmp r0, #0
    mov r0, r5, asr #2
    add r0, r5, r0, lsr #29
    mov r9, r0, asr #3
    ble @L_02094398
    mov r0, r10, lsl #3
    str r0, [sp, #0xc]
@L_02094320:
    cmp r11, #0
    mov r6, #0
    ble @L_02094388
    mul r1, r7, r11
    ldr r0, [sp, #0x2c]
    add r0, r0, r1, lsl #1
    str r0, [sp, #0x38]
@L_0209433c:
    ldr r0, [sp, #0x38]
    mov r1, r6, lsl #1
    ldrh r2, [r1, r0]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x28]
    mov r8, #0
    mla r5, r1, r2, r0
@L_02094358:
    mla r0, r8, r10, r5
    add r1, r8, r7, lsl #3
    mla r2, r1, r9, r6
    mla r1, r10, r2, r4
    mov r2, r10
    bl MI_CpuCopy8
    add r8, r8, #1
    cmp r8, #8
    blt @L_02094358
    add r6, r6, #1
    cmp r6, r11
    blt @L_0209433c
@L_02094388:
    ldr r0, [sp, #0x24]
    add r7, r7, #1
    cmp r7, r0
    blt @L_02094320
@L_02094398:
    ldr r0, [sp, #4]
    ldr r1, [sp, #0x30]
    ldr r3, [r0, #0xc]
    ldr r2, [r0, #0x10]
    ldr r0, [sp, #0x34]
    add r0, r1, r0
    ldr r1, [sp, #4]
    add r1, r1, r3
    bl MI_CpuCopy8
    ldr r0, [sp, #4]
    mov r4, #1
    ldr r1, [r0, #0x14]
    ldr r2, [sp, #0x14]
    strh r4, [r0, r1]
    add r3, r0, r1
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #8]
    strb r0, [r3, #2]
    ldr r0, [sp, #0x1c]
    strb r0, [r3, #3]
    ldr r0, [sp]
    strb r0, [r3, #4]
    mov r0, #0
    strh r0, [r3, #8]
    strh r0, [r3, #0xa]
    ldr r0, [sp, #0x18]
    strh r0, [r3, #0xc]
    ldr r0, [sp, #4]
    strh r2, [r3, #0xe]
    bl DC_FlushRange
    ldr r0, [sp, #0x10]
    ldr r1, [r0, #0x20]
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    ldr r1, [sp, #4]
    ldr r0, [sp, #0x10]
    str r1, [r0, #0x20]
    strb r4, [r0, #0x5e]
    add sp, sp, #0x3c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" BOOL func_0209443c(u8 *obj)
{
    return (*(u16 *)(obj + 4) & 2) ? TRUE : FALSE;
}

extern "C" s32 func_02094450(s32 arg0, u8 *arg1, s32 arg2)
{
    u8 *r3;
    r3 = (u8 *)(arg1 + *(s32 *)(arg1));
    if ((arg2 < 0 || arg2 >= *(u16 *)(r3))) {
        return 0;
    } else {
        return (s32)(arg1 + *(s32 *)(((u8 *)(r3 + (arg2 << 2))) + 0x4));
    }
}

extern "C" asm void func_02094484(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r3
    mov r4, r1
    bl func_02094450
    add r0, r0, r5, lsl #3
    ldr r1, [r4, #4]
    ldrh r0, [r0, #8]
    add r1, r4, r1
    add r0, r1, r0, lsl #2
    ldr r0, [r0, #4]
    add r0, r4, r0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" BOOL func_020944b4(void *self, u8 *obj)
{
    if (obj == NULL) {
        return FALSE;
    }
    return (*(u16 *)(obj + 4) & 1) ? FALSE : TRUE;
}

extern "C" s32 func_020944d4(s32 arg0)
{
    s32 r4;
    u8 *r5;
    s32 v0;
    BOOL v1;
    r4 = 1;
    r5 = (u8 *)arg0;
    if (*(s32 *)(r5 + 0x24) >= 1) {
        do {
            v0 = func_020960ac((s32)r5, r4);
            v1 = func_020944b4((void *)r5, (u8 *)v0);
            if (v1 != 0)
                return r4;
            r4 = (r4 + 1);
        } while (r4 <= *(s32 *)(r5 + 0x24));
    }
    return 0;
}

extern "C" void func_02094528(s32 arg0, u8 *arg1)
{
    ((void (*)(s32, u8 *, s32))MIi_CpuClearFast)(0, arg1, 0x48);
    arg1[0xC] = 0x1F;
    *(u16 *)(arg1 + 0xE) = 0x7FFF;
    arg1[0x26] = 0x32;
    arg1[0x27] = 0x64;
    arg1[0xD] = 0x3F;
    *(s32 *)(arg1 + 0x44) = 0x1000;
    *(s16 *)(arg1 + 0x10) = -1;
    *(s16 *)(arg1 + 0x12) = -1;
}

extern "C" void func_02094580(void *self, u8 *obj)
{
    MIi_CpuClearFast(0, obj, 0x24);
    obj[7] = 31;
    *(u16 *)(obj + 8) = 0x7FFF;
}

extern "C" void func_020945ac(void)
{
    s32 a;
    s32 b;
    a = 0;
    ((void (*)(s32, s32 *, s32))func_0202b608)(0x30, &a, 1);
    b = 0;
    ((void (*)(s32, s32 *, s32))func_0202b608)(0x31, &b, 1);
}

extern "C" asm void func_020945ec(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    mov r7, r0
    mov r5, r1
    mov r4, r2
    cmp r3, #0
    beq @L_02094634
    mov r6, #0
    add r1, sp, #0xc
    str r6, [sp, #0xc]
    mov r0, #0x20
    mov r2, #1
    bl func_0202b608
    ldr r0, [r7, #0x44]
    mov r1, r6
    and r3, r0, #0xff
    mov r2, #0x30
    b @L_020946a4
@L_02094634:
    ldrh r0, [r4, #0xa]
    tst r0, #0x4000
    bne @L_0209464c
    ldrh r0, [r5, #4]
    tst r0, #0x4000
    beq @L_02094668
@L_0209464c:
    mov r3, #0x10
    add r1, sp, #8
    mov r0, #0x20
    mov r2, #1
    str r3, [sp, #8]
    mov r6, #2
    b @L_02094688
@L_02094668:
    ldrh r3, [r5, #8]
    ldrh r2, [r4, #0xe]
    add r1, sp, #4
    mov r0, #0x20
    and r3, r3, r2
    mov r2, #1
    str r3, [sp, #4]
    mov r6, #0
@L_02094688:
    bl func_0202b608
    ldrb r0, [r4, #0xc]
    ldrb r3, [r5, #7]
    ldrb r2, [r4, #0xd]
    mov r1, #0x800
    cmp r3, r0
    movhs r3, r0
@L_020946a4:
    mov r0, r6, lsl #4
    orr r1, r1, #0x3000
    orr r0, r0, #0xc0
    orr r0, r1, r0
    orr r0, r0, r2, lsl #24
    orr r3, r0, r3, lsl #16
    add r1, sp, #0
    mov r0, #0x29
    mov r2, #1
    str r3, [sp]
    bl func_0202b608
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020946d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    mov r4, #0
    mov r9, r0
    mov r5, r3
    mov r8, r2
    mov r1, r5
    mov r2, r4
    add r0, r9, #4
    str r4, [sp, #0x14]
    str r4, [sp, #0x10]
    ldr r7, [sp, #0x3c]
    ldr r6, [sp, #0x40]
    bl func_0209860c
    ldr r1, [sp, #0x38]
    add r2, sp, #0xc
    add r0, r9, #4
    bl func_02098710
    ldr r0, [sp, #0xc]
    cmp r0, #0x20
    blt @L_02094748
    ldr r1, [sp, #0x38]
    add r3, sp, #0x10
    mov r2, r4
    add r0, r9, #4
    bl func_02098930
    cmp r0, #0
    bne @L_02094754
@L_02094748:
    add sp, sp, #0x18
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02094754:
    ldr r1, [r8, #0x14]
    cmp r1, #0
    ldrne r0, [r8]
    strne r0, [sp, #0x14]
    bne @L_020947b0
    ldrh r0, [r5, #0x30]
    tst r0, #0x10
    beq @L_020947a0
    ldr r0, =data_020c4668
    add r2, sp, #0x14
    ldr r0, [r0]
    add r1, r5, #0x44
    bl func_020990e8
    ldr r1, [sp, #0x14]
    ldr r0, [r7, #0xc]
    add r0, r1, r0
    str r0, [sp, #0x14]
    str r0, [r8]
    b @L_020947b0
@L_020947a0:
    cmp r1, #0
    addeq sp, sp, #0x18
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_020947b0:
    ldrh r0, [r8, #0xa]
    tst r0, #0x40
    ldrb r0, [r6, #2]
    movne r5, #0
    moveq r5, #1
    bl func_02098b48
    mov r4, r0
    ldr r0, [sp, #0xc]
    mov r1, r4
    bl _u32_div_f
    ldrb r1, [r8, #8]
    cmp r1, r0
    ldr r0, [sp, #0x10]
    movhi r1, #0
    mla r1, r4, r1, r0
    str r1, [sp, #0x10]
    ldrb r0, [r6, #2]
    mov r4, #1
    mov r2, r4
    cmp r0, #2
    moveq r0, #1
    movne r0, #0
    rsb r0, r0, #4
    mov r0, r1, lsr r0
    str r0, [sp, #8]
    add r1, sp, #8
    mov r0, #0x2b
    bl func_0202b608
    ldrh r0, [r8, #0xa]
    tst r0, #0x200
    ldrb r0, [r6, #2]
    bne @L_02094864
    ldr r2, [sp, #0x14]
    mov r0, r0, lsl #0x1a
    orr r0, r0, r2, lsr #3
    ldrh r1, [r7, #8]
    ldrh r2, [r7, #0xa]
    orr r0, r0, r1, lsl #20
    orr r0, r0, r2, lsl #23
    orr r3, r0, r5, lsl #29
    add r1, sp, #4
    mov r2, r4
    mov r0, #0x2a
    str r3, [sp, #4]
    b @L_02094888
@L_02094864:
    ldr r2, [sp, #0x14]
    mov r0, r0, lsl #0x1a
    orr r0, r0, r2, lsr #3
    orr r0, r0, #0x1200000
    orr r3, r0, r5, lsl #29
    add r1, sp, #0
    mov r2, r4
    mov r0, #0x2a
    str r3, [sp]
@L_02094888:
    bl func_0202b608
    mov r0, #1
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0209489c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x128
    mov r4, #0
    mov r6, r2
    str r4, [sp, #0x11c]
    str r4, [sp, #0x120]
    str r4, [sp, #0x124]
    ldr r2, [r6, #0x44]
    str r0, [sp]
    str r2, [sp, #0x110]
    str r2, [sp, #0x114]
    str r2, [sp, #0x118]
    ldrh r0, [r6, #0xa]
    mov r10, r1
    mov r5, r3
    tst r0, #0x200
    ldr r0, [sp, #0x154]
    movne r7, #0x20
    str r0, [sp, #0x154]
    ldrh r0, [r6, #0x24]
    ldr r4, [sp, #0x150]
    ldr r11, [sp, #0x158]
    str r0, [sp, #0x10]
    movne r8, r7
    bne @L_0209491c
    ldrh r1, [r5, #8]
    ldrh r0, [r5, #0xa]
    mov r2, #1
    mov r1, r2, lsl r1
    mov r0, r2, lsl r0
    mov r7, r1, lsl #3
    mov r8, r0, lsl #3
@L_0209491c:
    cmp r7, #0
    mov r0, r7, lsl #0xc
    ble @L_0209493c
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094948
@L_0209493c:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094948:
    bl _ffix
    str r0, [sp, #0xc]
    cmp r8, #0
    mov r0, r8, lsl #0xc
    ble @L_02094970
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_0209497c
@L_02094970:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_0209497c:
    bl _ffix
    ldr r1, [sp, #0x15c]
    str r0, [sp, #8]
    cmp r1, #0
    mov r1, r0
    ldr r0, [sp]
    mov r9, #0
    str r1, [r0, #0x34]
    ldr r1, [sp, #0xc]
    str r9, [r0, #0x38]
    str r1, [r0, #0x30]
    str r9, [r0, #0x3c]
    ldrne r0, =data_020c46d0
    mov r2, r9
    ldrne r0, [r0]
    cmpne r0, #0
    beq @L_02094a2c
    bl func_ov015_0213d4d8
    ldr r0, [r0, #4]
    rsb r0, r0, #0x8000
    str r0, [sp, #4]
    bl func_02017ce8
    rsb r12, r0, #0x8000
    mov lr, #0x60
    umull r3, r2, r12, lr
    mla r2, r12, r9, r2
    mov r1, r12, asr #0x1f
    mla r2, r1, lr, r2
    adds r3, r3, #0x800
    adc r1, r2, r9
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #20
    mov r0, #0x2000
    umull r1, r12, r2, r0
    mla r12, r2, r9, r12
    mov r3, r2, asr #0x1f
    mla r12, r3, r0, r12
    adds r1, r1, #0x800
    adc r3, r12, r9
    ldr r0, [sp, #4]
    mov r9, r1, lsr #0xc
    orr r9, r9, r3, lsl #20
    cmp r0, #0
    rsblt r9, r9, #0
@L_02094a2c:
    ldr r1, [r10, #0x14]
    ldr r0, [r6, #0x30]
    ldr r12, [r10, #0x10]
    add r0, r1, r0
    sub r1, r0, r2
    ldr r0, [r6, #0x2c]
    ldr r3, [r10, #0xc]
    add r0, r12, r0
    ldr r2, [r6, #0x28]
    add r2, r3, r2
    sub r2, r2, r9
    str r2, [sp, #0x11c]
    str r0, [sp, #0x120]
    str r1, [sp, #0x124]
    ldrh r0, [r6, #0xa]
    tst r0, #0x1000
    bne @L_02094a7c
    ldrh r0, [r10, #4]
    tst r0, #0x1000
    beq @L_02094bb0
@L_02094a7c:
    ldrh r0, [r6, #0xa]
    tst r0, #0x2000
    bne @L_02094a94
    ldrh r0, [r10, #4]
    tst r0, #0x2000
    beq @L_02094b14
@L_02094a94:
    ldr r1, [sp, #0x120]
    mov r0, r1, asr #0xb
    add r0, r1, r0, lsr #20
    mov r0, r0, asr #0xc
    bl func_02099d90
    cmp r0, #0
    ble @L_02094adc
    ldr r1, [sp, #0x120]
    mov r0, r1, asr #0xb
    add r0, r1, r0, lsr #20
    mov r0, r0, asr #0xc
    bl func_02099d90
    mov r0, r0, lsl #0xc
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094b00
@L_02094adc:
    ldr r1, [sp, #0x120]
    mov r0, r1, asr #0xb
    add r0, r1, r0, lsr #20
    mov r0, r0, asr #0xc
    bl func_02099d90
    mov r0, r0, lsl #0xc
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094b00:
    bl _ffix
    ldr r1, [sp, #0x124]
    rsb r0, r0, #0
    add r0, r1, r0
    str r0, [sp, #0x124]
@L_02094b14:
    ldr r3, [sp, #0x11c]
    ldr r2, [sp, #0x120]
    mov r0, r3, asr #0xb
    add r0, r3, r0, lsr #20
    mov r1, r2, asr #0xb
    add r1, r2, r1, lsr #20
    add r2, sp, #0x1c
    add r3, sp, #0x18
    mov r0, r0, asr #0xc
    mov r1, r1, asr #0xc
    bl func_ov015_02130fd4
    ldr r0, [sp, #0x1c]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094b64
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094b70
@L_02094b64:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094b70:
    bl _ffix
    ldr r1, [sp, #0x18]
    str r0, [sp, #0x11c]
    cmp r1, #0
    mov r0, r1, lsl #0xc
    ble @L_02094b9c
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094ba8
@L_02094b9c:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094ba8:
    bl _ffix
    str r0, [sp, #0x120]
@L_02094bb0:
    ldr r1, [sp, #0x124]
    ldr r0, [r6, #0x3c]
    cmp r11, #0
    add r0, r1, r0
    str r0, [sp, #0x124]
    ldrne r0, [sp, #0x120]
    add r1, sp, #0x11c
    rsbne r0, r0, #0
    strne r0, [sp, #0x120]
    mov r0, #0x1c
    mov r2, #3
    bl func_0202b608
    ldr r0, [sp, #0x15c]
    cmp r0, #0
    ldreq r0, [sp, #0x10]
    cmpeq r0, #0
    bne @L_02094bfc
    cmp r11, #0
    bne @L_02094e1c
@L_02094bfc:
    ldrh r0, [r4]
    mov r0, r0, lsl #1
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094c24
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094c30
@L_02094c24:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094c30:
    bl _ffix
    ldrh r1, [r4, #2]
    mov r9, r0
    add r0, r1, #1
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094c60
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094c6c
@L_02094c60:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094c6c:
    bl _ffix
    ldrb r3, [r6, #0x26]
    ldrb r2, [r6, #0x27]
    ldr r1, =0x51eb851f
    sub r3, r3, #0x32
    mul r3, r9, r3
    sub r2, r2, #0x64
    mul r2, r0, r2
    smull r0, r9, r1, r3
    mov r0, r3, lsr #0x1f
    add r9, r0, r9, asr #5
    smull r0, r10, r1, r2
    mov r0, r2, lsr #0x1f
    add r10, r0, r10, asr #5
    rsb r0, r9, #0
    str r0, [sp, #0x44]
    rsb r0, r10, #0
    str r0, [sp, #0x48]
    mov r0, #0
    str r0, [sp, #0x4c]
    mov r0, #0x1c
    add r1, sp, #0x44
    mov r2, #3
    bl func_0202b608
    ldr r0, [sp, #0x15c]
    cmp r0, #0
    beq @L_02094d60
    ldr r0, [sp, #0x10]
    mov r0, r0, asr #4
    mov r1, r0, lsl #1
    add r0, r1, #1
    mov r2, r0, lsl #1
    ldr r0, =FX_SinCosTable_
    mov r1, r1, lsl #1
    ldrsh r2, [r0, r2]
    ldrsh r1, [r0, r1]
    add r0, sp, #0xb0
    bl MTX_RotZ43_
    ldr r0, =FX_SinCosTable_
    ldrsh r2, [r0, #2]
    ldrsh r1, [r0]
    add r0, sp, #0x50
    bl MTX_RotY43_
    ldr r0, =data_020a2cf8
    ldrsh r2, [r0, #2]
    ldrsh r1, [r0]
    add r0, sp, #0x80
    bl MTX_RotX43_
    add r1, sp, #0xb0
    mov r0, #0x19
    mov r2, #0xc
    bl func_0202b608
    add r1, sp, #0x50
    mov r0, #0x19
    mov r2, #0xc
    bl func_0202b608
    mov r0, #0x19
    add r1, sp, #0x80
    mov r2, #0xc
    bl func_0202b608
    b @L_02094dfc
@L_02094d60:
    cmp r11, #0
    bne @L_02094db8
    ldr r12, =data_020bf464
    add lr, sp, #0xe0
    ldmia r12!, {r0, r1, r2, r3}
    str lr, [sp, #0x14]
    stmia lr!, {r0, r1, r2, r3}
    ldmia r12!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    ldmia r12, {r0, r1, r2, r3}
    stmia lr, {r0, r1, r2, r3}
    mov r0, #0
    str r0, [sp, #0x10c]
    str r0, [sp, #0x108]
    str r0, [sp, #0x104]
    ldr r0, [sp, #0x14]
    mov r1, r0
    bl func_02000e88
    ldr r1, [sp, #0x14]
    mov r0, #0x19
    mov r2, #0xc
    bl func_0202b608
@L_02094db8:
    ldr r0, [sp, #0x10]
    cmp r0, #0
    beq @L_02094dfc
    mov r0, r0, asr #4
    mov r0, r0, lsl #1
    add r2, r0, #1
    ldr r1, =FX_SinCosTable_
    mov r2, r2, lsl #1
    mov r0, r0, lsl #1
    ldrsh r2, [r1, r2]
    ldrsh r1, [r1, r0]
    add r0, sp, #0xe0
    bl MTX_RotZ43_
    add r1, sp, #0xe0
    mov r0, #0x19
    mov r2, #0xc
    bl func_0202b608
@L_02094dfc:
    mov r3, #0
    add r1, sp, #0x38
    mov r0, #0x1c
    mov r2, #3
    str r9, [sp, #0x38]
    str r10, [sp, #0x3c]
    str r3, [sp, #0x40]
    bl func_0202b608
@L_02094e1c:
    add r1, sp, #0x110
    mov r0, #0x1b
    mov r2, #3
    bl func_0202b608
    ldr r0, [sp, #0x154]
    ldr r0, [r0, #4]
    tst r0, #0x10000000
    beq @L_02094ec8
    ldrh r0, [r6, #0xa]
    orr r0, r0, #0x10
    strh r0, [r6, #0xa]
    tst r0, #0x200
    bne @L_02094e90
    ldrh r1, [r4]
    ldrh r0, [r5]
    sub r0, r1, r0
    sub r0, r0, r7
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094e80
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094e8c
@L_02094e80:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094e8c:
    b @L_02094f54
@L_02094e90:
    ldrh r0, [r4]
    sub r0, r0, r7
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094eb8
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094ec4
@L_02094eb8:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094ec4:
    b @L_02094f54
@L_02094ec8:
    ldrh r1, [r6, #0xa]
    ldr r0, =0xffef
    and r0, r1, r0
    strh r0, [r6, #0xa]
    ldrh r0, [r6, #0xa]
    tst r0, #0x200
    bne @L_02094f20
    ldrh r1, [r5]
    ldrh r0, [r4]
    sub r0, r1, r0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094f10
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094f1c
@L_02094f10:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094f1c:
    b @L_02094f54
@L_02094f20:
    ldrh r0, [r4]
    rsb r0, r0, #0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094f48
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094f54
@L_02094f48:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094f54:
    bl _ffix
    str r0, [sp, #0x11c]
    ldr r0, [sp, #0x154]
    mov r9, #0
    ldr r0, [r0, #4]
    mov r7, #3
    tst r0, #0x20000000
    beq @L_02095000
    ldrh r0, [r6, #0xa]
    orr r0, r0, #0x20
    strh r0, [r6, #0xa]
    tst r0, #0x200
    bne @L_02094fc8
    ldrh r1, [r4, #2]
    ldrh r0, [r5, #2]
    sub r0, r1, r0
    sub r0, r0, r8
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094fb8
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094fc4
@L_02094fb8:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094fc4:
    b @L_0209508c
@L_02094fc8:
    ldrh r0, [r4, #2]
    sub r0, r0, r8
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02094ff0
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02094ffc
@L_02094ff0:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02094ffc:
    b @L_0209508c
@L_02095000:
    ldrh r1, [r6, #0xa]
    ldr r0, =0xffdf
    and r0, r1, r0
    strh r0, [r6, #0xa]
    ldrh r0, [r6, #0xa]
    tst r0, #0x200
    bne @L_02095058
    ldrh r1, [r5, #2]
    ldrh r0, [r4, #2]
    sub r0, r1, r0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02095048
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02095054
@L_02095048:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02095054:
    b @L_0209508c
@L_02095058:
    ldrh r0, [r4, #2]
    rsb r0, r0, #0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02095080
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_0209508c
@L_02095080:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_0209508c:
    bl _ffix
    rsb r0, r0, #0
    str r0, [sp, #0x120]
    cmp r11, #0
    beq @L_020950c0
    ldr r2, [sp, #0x11c]
    ldr r0, [r6, #0x34]
    ldr r1, [sp, #0x120]
    add r0, r2, r0
    str r0, [sp, #0x11c]
    ldr r0, [r6, #0x38]
    sub r0, r1, r0
    b @L_020950dc
@L_020950c0:
    ldr r2, [sp, #0x11c]
    ldr r0, [r6, #0x34]
    ldr r1, [sp, #0x120]
    add r0, r2, r0
    str r0, [sp, #0x11c]
    ldr r0, [r6, #0x38]
    add r0, r1, r0
@L_020950dc:
    str r0, [sp, #0x120]
    ldr r4, [sp, #0x120]
    ldr r3, [sp, #0x11c]
    add r1, sp, #0x2c
    mov r2, r7
    mov r0, #0x1c
    str r3, [sp, #0x2c]
    str r4, [sp, #0x30]
    str r9, [sp, #0x34]
    bl func_0202b608
    ldr r3, [sp, #0xc]
    mov r4, #0x1000
    str r3, [sp, #0x20]
    ldr r3, [sp, #8]
    add r1, sp, #0x20
    mov r2, r7
    mov r0, #0x1b
    str r3, [sp, #0x24]
    str r4, [sp, #0x28]
    bl func_0202b608
    mov r0, #1
    add sp, sp, #0x128
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
