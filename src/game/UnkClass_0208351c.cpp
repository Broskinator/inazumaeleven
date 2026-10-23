#include "game/UnkClass_0208351c.hpp"

extern "C" void *data_020af44c[];     // (the vtable)

extern "C" void FX_SinCosTable_(void);
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN17UnkClass_0208306013func_02083060Ev(void);
extern "C" void _ZN17UnkClass_0208306013func_020830a8Ev(void);
extern "C" void _ZN17UnkClass_0208306013func_020832c8Ev(void);
extern "C" void _ZN17UnkClass_0208306013func_0208331cEv(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02001d60(void);
extern "C" void func_0200226c(void);
extern "C" void func_02084094(void);
extern "C" void func_020841d8(void);
extern "C" void func_0208488c(void);
extern "C" void func_ov015_021319b0(void);
extern "C" void func_ov015_02131bb4(void);
extern "C" void func_ov015_021335c0(void);

UnkClass_0208351c *UnkClass_0208351c::func_0208351c()
{
    func_02083060();
    vtable = data_020af44c;
    return this;
}

UnkClass_0208351c *UnkClass_0208351c::func_0208353c()
{
    func_020830a8();
    return this;
}

UnkClass_0208351c *UnkClass_0208351c::func_02083550()
{
    func_020830a8();
    operator delete(this);
    return this;
}

void UnkClass_0208351c::func_0208356c()
{
    func_020832c8();
}

asm void UnkClass_0208351c::func_02083578()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_ov015_021335c0
    cmp r0, #0xa
    bne @L_020835ac
    mov r0, r4
    bl func_ov015_021319b0
    bl func_ov015_02131bb4
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_020835ac:
    cmp r0, #0xb
    bne @L_020835d0
    mov r0, r4
    bl func_ov015_021319b0
    bl func_ov015_02131bb4
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_020835d0:
    mov r0, r5
    mov r1, r4
    bl _ZN17UnkClass_0208306013func_0208331cEv
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_0208351c::func_020835e0()
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    bl func_ov015_021335c0
    cmp r0, #0xa
    bne @L_0208360c
    mov r0, r4
    bl func_ov015_02131bb4
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r4, pc}
@L_0208360c:
    cmp r0, #0xb
    bne @L_0208362c
    mov r0, r4
    bl func_ov015_02131bb4
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r4, pc}
@L_0208362c:
    mov r0, #1
    ldmia sp!, {r4, pc}
}

asm void UnkClass_0208351c::func_02083634()
{
    mov r0, #0
    bx lr
}

asm void UnkClass_0208351c::func_0208363c()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_02084094
    mov r0, r0, asr #4
    mov r3, r0, lsl #1
    add r0, r3, #1
    ldr r2, =FX_SinCosTable_
    mov r1, r0, lsl #1
    mov r0, r3, lsl #1
    ldrsh r1, [r2, r1]
    ldrsh r0, [r2, r0]
    ldr r12, [r5]
    smull r1, r2, r4, r1
    adds r3, r1, #0x800
    smull r1, r0, r4, r0
    adc r2, r2, #0
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    add r3, r12, r3
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    ldr r2, [r5, #4]
    orr r1, r1, r0, lsl #20
    add r0, r2, r1
    str r3, [r5, #8]
    str r0, [r5, #0xc]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_0208351c::func_020836b4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r4, r1
    bl func_02084094
    mov r0, r0, asr #4
    mov r3, r0, lsl #1
    add r0, r3, #1
    ldr r1, =FX_SinCosTable_
    mov r2, r0, lsl #1
    mov r0, r3, lsl #1
    ldrsh r2, [r1, r2]
    ldrsh r1, [r1, r0]
    ldr r0, [r6]
    smull r2, r3, r4, r2
    adds r5, r2, #0x800
    smull r1, r2, r4, r1
    adc r7, r3, #0
    adds r3, r1, #0x800
    mov r5, r5, lsr #0xc
    ldr r1, [r6, #8]
    adc r2, r2, #0
    mov r4, r3, lsr #0xc
    orr r5, r5, r7, lsl #20
    orr r4, r4, r2, lsl #20
    bl func_02083750
    mov r7, r0
    ldr r0, [r6, #4]
    ldr r1, [r6, #0xc]
    bl func_02083750
    sub r3, r7, r5
    sub r2, r0, r4
    add r1, r7, r5
    add r0, r0, r4
    str r3, [r6]
    str r2, [r6, #4]
    str r1, [r6, #8]
    str r0, [r6, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_0208351c::func_02083750()
{
    cmp r0, r1
    blt @L_02083768
    subs r0, r0, r1
    rsbmi r0, r0, #0
    add r0, r1, r0, asr #1
    bx lr
@L_02083768:
    subs r1, r1, r0
    rsbmi r1, r1, #0
    add r0, r0, r1, asr #1
    bx lr
}

asm void UnkClass_0208351c::func_02083778()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    mov r5, r1
    mov r9, r2
    mov r4, r3
    mov r6, r0
    mov r0, r5
    mov r1, r9
    mov r2, r4
    bl func_0208488c
    cmp r0, #0
    bne @L_020837bc
    mov r0, r6
    bl func_020841d8
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_020837bc:
    ldr r0, [r5]
    ldr r1, [r9]
    bl func_02083750
    mov r8, r0
    ldr r0, [r5, #4]
    ldr r1, [r9, #4]
    bl func_02083750
    ldr r2, [r5, #4]
    ldr r1, [r9, #4]
    mov r7, r0
    sub r0, r2, r1
    ldr r2, [r5]
    ldr r1, [r9]
    sub r1, r2, r1
    bl func_0200226c
    add r0, r0, #0x4000
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #4
    mov r1, r0, lsl #1
    add r0, r1, #1
    mov r2, r0, lsl #1
    ldr r9, =FX_SinCosTable_
    mov r1, r1, lsl #1
    ldrsh r3, [r9, r2]
    ldrsh r2, [r9, r1]
    ldr r0, [r5]
    add r3, r8, r3, lsl #4
    add r2, r7, r2, lsl #4
    ldr r1, [r4]
    str r8, [sp, #0x10]
    str r7, [sp, #0x14]
    str r3, [sp, #0x18]
    str r2, [sp, #0x1c]
    bl func_02083750
    mov r8, r0
    ldr r0, [r5, #4]
    ldr r1, [r4, #4]
    bl func_02083750
    mov r7, r0
    ldr r0, [r4, #4]
    ldmia r5, {r2, r3}
    ldr r1, [r4]
    sub r0, r3, r0
    sub r1, r2, r1
    bl func_0200226c
    add r0, r0, #0x4000
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #4
    mov r3, r0, lsl #1
    add r0, r3, #1
    mov r0, r0, lsl #1
    ldrsh r1, [r9, r0]
    mov r0, r3, lsl #1
    ldrsh r0, [r9, r0]
    add r1, r8, r1, lsl #4
    str r1, [sp, #8]
    add r0, r7, r0, lsl #4
    str r0, [sp, #0xc]
    mov r2, r6
    add r0, sp, #0x10
    add r1, sp, #0
    str r8, [sp]
    str r7, [sp, #4]
    bl func_020838d0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_0208351c::func_020838d0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r1
    mov r10, r0
    mov r8, r2
    bl func_02084094
    mov r4, r0
    mov r0, r9
    bl func_02084094
    mov r5, r0
    cmp r8, #0
    beq @L_0208390c
    mov r0, r8
    mov r1, #0
    mov r2, #8
    bl MI_CpuFill8
@L_0208390c:
    ldr r0, =0x7fff
    and r1, r4, r0
    and r0, r5, r0
    cmp r1, r0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r8, #0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4, asr #4
    mov r4, r0, lsl #1
    add r1, r4, #1
    mov r0, r5, asr #4
    mov r2, r0, lsl #1
    add r0, r2, #1
    ldr r3, =FX_SinCosTable_
    mov r1, r1, lsl #1
    ldrsh r6, [r3, r1]
    mov r4, r4, lsl #1
    mov r1, r2, lsl #1
    mov r0, r0, lsl #1
    cmp r6, #0
    ldrsh r5, [r3, r4]
    ldrsh r4, [r3, r1]
    ldrsh r7, [r3, r0]
    beq @L_02083a2c
    smull r0, r4, r6, r4
    adds r12, r0, #0x800
    ldr r3, [r9]
    ldr r1, [r9, #4]
    ldr r0, [r10, #4]
    adc r9, r4, #0
    mov r4, r12, lsr #0xc
    orr r4, r4, r9, lsl #20
    ldr r2, [r10]
    sub r0, r1, r0
    sub r1, r3, r2
    smull r1, r2, r4, r1
    adds r3, r1, #0x800
    smull r1, r0, r7, r0
    adc r2, r2, #0
    adds r1, r1, #0x800
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    smull r1, r0, r6, r1
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    smull r12, r9, r7, r5
    adc r0, r0, #0
    adds r7, r12, #0x800
    mov r12, r1, lsr #0xc
    adc r1, r9, #0
    mov r7, r7, lsr #0xc
    orr r7, r7, r1, lsl #20
    orr r3, r3, r2, lsl #20
    orr r12, r12, r0, lsl #20
    sub r0, r3, r12
    sub r1, r4, r7
    bl func_02001d60
    mov r4, r0
    smull r1, r0, r4, r5
    adds r1, r1, #0x800
    adc r2, r0, #0
    mov r0, r1, lsr #0xc
    mov r1, r6
    orr r0, r0, r2, lsl #20
    bl func_02001d60
    ldr r2, [r10]
    ldr r1, [r10, #4]
    add r2, r4, r2
    b @L_02083ae0
@L_02083a2c:
    smull r0, r5, r7, r5
    adds r12, r0, #0x800
    ldr r3, [r10]
    ldr r1, [r10, #4]
    ldr r0, [r9, #4]
    adc r10, r5, #0
    mov r5, r12, lsr #0xc
    orr r5, r5, r10, lsl #20
    ldr r2, [r9]
    sub r0, r1, r0
    sub r1, r3, r2
    smull r1, r2, r5, r1
    adds r3, r1, #0x800
    smull r1, r0, r6, r0
    adc r2, r2, #0
    adds r1, r1, #0x800
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    smull r1, r0, r7, r1
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    smull r12, r10, r6, r4
    adc r0, r0, #0
    adds r6, r12, #0x800
    mov r12, r1, lsr #0xc
    adc r1, r10, #0
    mov r6, r6, lsr #0xc
    orr r6, r6, r1, lsl #20
    orr r3, r3, r2, lsl #20
    orr r12, r12, r0, lsl #20
    sub r0, r3, r12
    sub r1, r5, r6
    bl func_02001d60
    mov r5, r0
    smull r1, r0, r5, r4
    adds r1, r1, #0x800
    adc r2, r0, #0
    mov r0, r1, lsr #0xc
    mov r1, r7
    orr r0, r0, r2, lsl #20
    bl func_02001d60
    ldr r2, [r9]
    ldr r1, [r9, #4]
    add r2, r5, r2
@L_02083ae0:
    add r0, r0, r1
    str r0, [r8, #4]
    str r2, [r8]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
