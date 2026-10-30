// (asm for now)

void MTX_Identity44_(void);
void MTX_Copy44To43_(void);
void MTX_RotY44_(void);
void func_02001644(void);
void func_02001a00(void);
void func_02001b4c(void);
void func_02001d60(void);
void func_02001d70(void);
void func_02001d80(void);

void FX_GetDivResultFx64c(void);
void func_02022524(void);
void func_02001dd8(void);
void func_02001e0c(void);
void FX_DivAsync(void);
void FX_GetSqrtResult(void);

asm void MTX_Identity44_(void)
{
    mov r2, #0x1000
    mov r3, #0
    stmia r0!, {r2, r3}
    mov r1, #0
    stmia r0!, {r1, r3}
    stmia r0!, {r1, r2, r3}
    stmia r0!, {r1, r3}
    stmia r0!, {r1, r2, r3}
    stmia r0!, {r1, r3}
    stmia r0!, {r1, r2}
    bx lr
}

asm void MTX_Copy44To43_(void)
{
    ldmia r0!, {r2, r3, r12}
    add r0, r0, #4
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    add r0, r0, #4
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    add r0, r0, #4
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    add r0, r0, #4
    stmia r1!, {r2, r3, r12}
    bx lr
}

#pragma thumb on
asm void MTX_RotY44_(void)
{
    str r2, [r0] // 0x02001620
    str r2, [r0, #0x28] // 0x02001622
    str r1, [r0, #0x20] // 0x02001624
    neg r1, r1 // 0x02001626
    str r1, [r0, #8] // 0x02001628
    mov r3, #1 // 0x0200162a
    mov r1, #0 // 0x0200162c
    lsl r3, r3, #0xc // 0x0200162e
    mov r2, #0 // 0x02001630
    str r2, [r0, #4] // 0x02001632
    add r0, #0xc // 0x02001634
    stmia r0!, {r1, r2, r3} // 0x02001636
    stmia r0!, {r1, r2} // 0x02001638
    str r2, [r0, #4] // 0x0200163a
    add r0, #0xc // 0x0200163c
    stmia r0!, {r1, r2} // 0x0200163e
    stmia r0!, {r1, r2, r3} // 0x02001640
    bx lr // 0x02001642
}
#pragma thumb off

asm void func_02001644(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x74
    ldr r9, [r0, #4]
    ldr r3, [r1, #0x10]
    add r12, sp, #0x34
    smull r4, r3, r9, r3
    cmp r2, r1
    str r2, [sp]
    movne r12, r2
    add r2, sp, #0x34
    str r2, [sp, #0x30]
    ldr r11, [r0]
    ldr r2, [r1]
    ldr r8, [r0, #8]
    smlal r4, r3, r11, r2
    ldr r2, [r1, #0x20]
    ldr r7, [r0, #0xc]
    smlal r4, r3, r8, r2
    ldr r2, [r1, #0x30]
    ldr r6, [r0, #0x14]
    smlal r4, r3, r7, r2
    mov r2, r4, lsr #0xc
    orr r2, r2, r3, lsl #20
    str r2, [r12]
    ldr r2, [r1, #0x14]
    ldr r4, [r1, #4]
    smull r3, r2, r9, r2
    smlal r3, r2, r11, r4
    ldr r5, [r1, #0x24]
    ldr r4, [sp, #0x30]
    smlal r3, r2, r8, r5
    cmp r12, r4
    ldr r4, [r1, #0x34]
    ldr r10, [r0, #0x10]
    smlal r3, r2, r7, r4
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    str r3, [r12, #4]
    ldr r2, [r1, #0x3c]
    ldr r4, [r1, #0x2c]
    ldr r3, [r1, #0x1c]
    str r2, [sp, #4]
    str r4, [sp, #8]
    smull r3, r2, r9, r3
    ldr r4, [r1, #0xc]
    ldr r5, [r0, #0x18]
    smlal r3, r2, r11, r4
    ldr r4, [sp, #8]
    smlal r3, r2, r8, r4
    ldr r4, [sp, #4]
    smlal r3, r2, r7, r4
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    str r3, [r12, #0xc]
    ldr r2, [r1, #0x18]
    ldr r4, [r1, #8]
    str r2, [sp, #0xc]
    ldr r2, [r1, #0x28]
    str r2, [sp, #0x10]
    ldr r2, [sp, #0xc]
    smull r3, r2, r9, r2
    smlal r3, r2, r11, r4
    ldr r9, [sp, #0x10]
    smlal r3, r2, r8, r9
    ldr r8, [sp, #0xc]
    smull r11, r8, r6, r8
    smlal r11, r8, r10, r4
    mov r4, r9
    smlal r11, r8, r5, r4
    ldr r4, [r1, #0x38]
    ldr r9, [r0, #0x1c]
    smlal r3, r2, r7, r4
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    smlal r11, r8, r9, r4
    mov r2, r11, lsr #0xc
    str r3, [r12, #8]
    orr r2, r2, r8, lsl #20
    str r2, [r12, #0x18]
    ldr r2, [r1, #0x14]
    ldr r3, [r1, #4]
    smull r8, r2, r6, r2
    smlal r8, r2, r10, r3
    ldr r4, [r1, #0x24]
    ldr r7, [r1, #0x34]
    smlal r8, r2, r5, r4
    smlal r8, r2, r9, r7
    mov r3, r8, lsr #0xc
    orr r3, r3, r2, lsl #20
    str r3, [r12, #0x14]
    ldr r2, [r1, #0xc]
    ldr lr, [r1, #0x2c]
    str r2, [sp, #0x14]
    ldr r2, [r1, #0x1c]
    ldr r3, [r1, #0x3c]
    smull r8, r7, r6, r2
    ldr r2, [sp, #0x14]
    ldr r4, [r0, #0x24]
    smlal r8, r7, r10, r2
    smlal r8, r7, r5, lr
    smlal r8, r7, r9, r3
    mov r2, r8, lsr #0xc
    orr r2, r2, r7, lsl #20
    str r2, [r12, #0x1c]
    ldr r2, [r1, #0x10]
    ldr r3, [r1]
    str r2, [sp, #0x18]
    smull r7, r2, r6, r2
    smlal r7, r2, r10, r3
    ldr r8, [r1, #0x20]
    ldr r11, [r0, #0x20]
    smlal r7, r2, r5, r8
    ldr r5, [sp, #0x18]
    ldr r10, [r1, #0x30]
    smull r6, r5, r4, r5
    smlal r6, r5, r11, r3
    smlal r7, r2, r9, r10
    ldr r3, [r0, #0x28]
    mov r7, r7, lsr #0xc
    orr r7, r7, r2, lsl #20
    smlal r6, r5, r3, r8
    ldr r2, [r0, #0x2c]
    str r7, [r12, #0x10]
    smlal r6, r5, r2, r10
    mov r6, r6, lsr #0xc
    orr r6, r6, r5, lsl #20
    str r6, [r12, #0x20]
    ldr r5, [r1, #4]
    ldr lr, [r1, #0x24]
    str r5, [sp, #0x1c]
    ldr r5, [r1, #0x14]
    ldr r6, [r1, #0x34]
    smull r10, r9, r4, r5
    ldr r5, [sp, #0x1c]
    ldr r8, [r0, #0x34]
    smlal r10, r9, r11, r5
    smlal r10, r9, r3, lr
    smlal r10, r9, r2, r6
    mov r5, r10, lsr #0xc
    orr r5, r5, r9, lsl #20
    str r5, [r12, #0x24]
    ldr r5, [r1, #0x2c]
    ldr r9, [r1, #0x1c]
    str r5, [sp, #0x20]
    ldr r5, [r1, #0xc]
    ldr r7, [r0, #0x30]
    str r5, [sp, #0x24]
    ldr r6, [r0, #0x38]
    ldr r5, [r0, #0x3c]
    smull r9, r0, r4, r9
    ldr r10, [sp, #0x24]
    ldr lr, [r1, #0x3c]
    smlal r9, r0, r11, r10
    ldr r10, [sp, #0x20]
    smlal r9, r0, r3, r10
    smlal r9, r0, r2, lr
    mov r9, r9, lsr #0xc
    orr r9, r9, r0, lsl #20
    str r9, [r12, #0x2c]
    ldr r0, [r1, #0x18]
    str r0, [sp, #0x28]
    ldr r9, [sp, #0x28]
    ldr r0, [r1, #8]
    smull r10, r9, r4, r9
    ldr r4, [sp, #0x28]
    smlal r10, r9, r11, r0
    smull r4, lr, r8, r4
    smlal r4, lr, r7, r0
    ldr r0, [r1, #0x28]
    ldr r11, [r1, #0x38]
    smlal r10, r9, r3, r0
    smlal r4, lr, r6, r0
    str r0, [sp, #0x2c]
    smlal r10, r9, r2, r11
    mov r0, r10, lsr #0xc
    orr r0, r0, r9, lsl #20
    smlal r4, lr, r5, r11
    str r0, [r12, #0x28]
    mov r0, r4, lsr #0xc
    orr r0, r0, lr, lsl #20
    str r0, [r12, #0x38]
    ldr r0, [r1, #0x14]
    ldr r2, [r1, #4]
    smull r9, r0, r8, r0
    smlal r9, r0, r7, r2
    ldr r3, [r1, #0x24]
    ldr r4, [r1, #0x34]
    smlal r9, r0, r6, r3
    smlal r9, r0, r5, r4
    mov r2, r9, lsr #0xc
    orr r2, r2, r0, lsl #20
    str r2, [r12, #0x34]
    ldr r0, [r1, #0x10]
    ldr r2, [r1]
    smull r9, r0, r8, r0
    smlal r9, r0, r7, r2
    ldr r3, [r1, #0x20]
    ldr r4, [r1, #0x30]
    smlal r9, r0, r6, r3
    smlal r9, r0, r5, r4
    mov r2, r9, lsr #0xc
    orr r2, r2, r0, lsl #20
    str r2, [r12, #0x30]
    ldr r0, [r1, #0x1c]
    ldr r4, [r1, #0x3c]
    ldr r3, [r1, #0x2c]
    ldr r2, [r1, #0xc]
    smull r1, r0, r8, r0
    smlal r1, r0, r7, r2
    smlal r1, r0, r6, r3
    smlal r1, r0, r5, r4
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    str r1, [r12, #0x3c]
    addne sp, sp, #0x74
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, [sp, #0x30]
    ldmia r4!, {r0, r1, r2, r3}
    str r4, [sp, #0x30]
    ldr r4, [sp]
    stmia r4!, {r0, r1, r2, r3}
    str r4, [sp]
    ldr r4, [sp, #0x30]
    ldmia r4!, {r0, r1, r2, r3}
    str r4, [sp, #0x30]
    ldr r4, [sp]
    stmia r4!, {r0, r1, r2, r3}
    str r4, [sp]
    ldr r4, [sp, #0x30]
    ldmia r4!, {r0, r1, r2, r3}
    str r4, [sp, #0x30]
    ldr r4, [sp]
    stmia r4!, {r0, r1, r2, r3}
    ldr r0, [sp, #0x30]
    str r4, [sp]
    ldmia r0, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    add sp, sp, #0x74
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02001a00(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r0
    mov r0, r1
    mov r1, r4
    mov r9, r2
    mov r8, r3
    ldr r7, [sp, #0x24]
    ldr r6, [sp, #0x28]
    bl func_02001d60
    ldr r3, =0x4000290
    mov r2, #0
    str r2, [r3]
    mov r2, #0x1000
    ldr r1, [sp, #0x20]
    str r2, [r3, #4]
    sub r2, r8, r1
    str r2, [r3, #8]
    mov r1, #0
    mov r5, r0
    str r1, [r3, #0xc]
    cmp r7, #0x1000
    mulne r1, r5, r7
    mov r4, #0
    str r4, [r6, #4]
    movne r0, r1, asr #0xb
    str r4, [r6, #8]
    addne r0, r1, r0, lsr #20
    str r4, [r6, #0xc]
    movne r5, r0, asr #0xc
    str r4, [r6, #0x10]
    str r5, [r6, #0x14]
    str r4, [r6, #0x18]
    str r4, [r6, #0x1c]
    str r4, [r6, #0x20]
    str r4, [r6, #0x24]
    rsb r0, r7, #0
    str r0, [r6, #0x2c]
    str r4, [r6, #0x30]
    str r4, [r6, #0x34]
    str r4, [r6, #0x3c]
    bl FX_GetDivResultFx64c
    ldr r2, =0x4000290
    mov r12, r4
    str r12, [r2]
    stmib r2, {r5, r9}
    str r12, [r2, #0xc]
    cmp r7, #0x1000
    beq @L_02001ae4
    mov r2, r7, asr #0x1f
    umull r5, r3, r0, r7
    mla r3, r0, r2, r3
    mla r3, r1, r7, r3
    mov r0, r5
    mov r1, r3
    mov r3, r4
    mov r2, #0x1000
    bl func_02022524
@L_02001ae4:
    ldr r4, [sp, #0x20]
    mov r2, r8, lsl #1
    add r5, r4, r8
    mov r3, r5, asr #0x1f
    umull r8, r7, r0, r5
    mla r7, r0, r3, r7
    smull r4, r3, r2, r4
    mla r7, r1, r5, r7
    adds r2, r8, #0x80000000
    adc r7, r7, #0
    adds r4, r4, #0x800
    adc r2, r3, #0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #20
    umull r5, r4, r0, r3
    mov r2, r3, asr #0x1f
    mla r4, r0, r2, r4
    mla r4, r1, r3, r4
    adds r0, r5, #0x80000000
    str r7, [r6, #0x28]
    adc r0, r4, #0
    str r0, [r6, #0x38]
    bl func_02001dd8
    str r0, [r6]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02001b4c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    str r2, [sp]
    mov r10, r0
    ldr r0, [sp]
    mov r2, r3
    sub r0, r2, r0
    ldr r8, [sp, #0x44]
    str r3, [sp, #4]
    mov r11, r1
    ldr r9, [sp, #0x40]
    bl func_02001e0c
    mov r5, #0
    str r5, [r8, #4]
    str r5, [r8, #8]
    str r5, [r8, #0xc]
    str r5, [r8, #0x10]
    str r5, [r8, #0x18]
    str r5, [r8, #0x1c]
    str r5, [r8, #0x20]
    str r5, [r8, #0x24]
    str r5, [r8, #0x2c]
    str r9, [r8, #0x3c]
    bl FX_GetDivResultFx64c
    mov r6, r1
    ldr r1, =0x4000290
    mov r4, r0
    mov r2, #0x1000
    str r5, [r1]
    sub r0, r10, r11
    str r2, [r1, #4]
    str r0, [r1, #8]
    mov r0, r5
    cmp r9, #0x1000
    str r0, [r1, #0xc]
    beq @L_02001bfc
    mov r3, r9, asr #0x1f
    umull r0, r1, r4, r9
    mla r1, r4, r3, r1
    mla r1, r6, r9, r1
    mov r3, r5
    bl func_02022524
    mov r4, r0
    mov r6, r1
@L_02001bfc:
    mov r1, r6, lsl #0xd
    mov r0, #0x80000000
    orr r1, r1, r4, lsr #19
    adds r0, r0, r4, lsl #13
    adc r0, r1, #0
    str r0, [r8]
    bl FX_GetDivResultFx64c
    mov r5, r0
    mov r7, r1
    ldr r3, =0x4000290
    mov r0, #0
    ldr r12, [sp, #0x38]
    ldr r1, [sp, #0x3c]
    str r0, [r3]
    mov r2, #0x1000
    str r2, [r3, #4]
    sub r12, r12, r1
    str r12, [r3, #8]
    cmp r9, #0x1000
    str r0, [r3, #0xc]
    beq @L_02001c70
    mov r3, r9, asr #0x1f
    umull r0, r1, r5, r9
    mla r1, r5, r3, r1
    mla r1, r7, r9, r1
    mov r3, #0
    bl func_02022524
    mov r5, r0
    mov r7, r1
@L_02001c70:
    mov r1, r7, lsl #0xd
    mov r0, #0x80000000
    orr r1, r1, r5, lsr #19
    adds r0, r0, r5, lsl #13
    adc r0, r1, #0
    str r0, [r8, #0x14]
    bl FX_GetDivResultFx64c
    cmp r9, #0x1000
    beq @L_02001cc4
    umull lr, r12, r0, r9
    mov r2, r9, asr #0x1f
    str r2, [sp, #0xc]
    str lr, [sp, #8]
    ldr lr, [sp, #0xc]
    mov r3, #0
    mla r12, r0, lr, r12
    mla r12, r1, r9, r12
    ldr r0, [sp, #8]
    mov r2, #0x1000
    mov r1, r12
    bl func_02022524
@L_02001cc4:
    ldr r3, [sp, #4]
    ldr r2, [sp]
    add r2, r3, r2
    rsb r12, r2, #0
    add r2, r10, r11
    rsb r3, r2, #0
    ldr r10, [sp, #0x3c]
    ldr r2, [sp, #0x38]
    mov r9, r12, asr #0x1f
    add r2, r10, r2
    umull r11, r10, r4, r12
    mla r10, r4, r9, r10
    mov r4, #0x80000000
    mla r10, r6, r12, r10
    adds r4, r4, r0, lsl #13
    mov r9, r1, lsl #0xd
    mov r6, r3, asr #0x1f
    umull r12, r4, r5, r3
    mla r4, r5, r6, r4
    orr r9, r9, r0, lsr #19
    mla r4, r7, r3, r4
    adc r3, r9, #0
    str r3, [r8, #0x28]
    adds r3, r11, #0x80000000
    adc r7, r10, #0
    adds r3, r12, #0x80000000
    mov r3, r2, asr #0x1f
    umull r6, r5, r0, r2
    mla r5, r0, r3, r5
    adc r3, r4, #0
    str r7, [r8, #0x30]
    mla r5, r1, r2, r5
    adds r0, r6, #0x80000000
    str r3, [r8, #0x34]
    adc r0, r5, #0
    str r0, [r8, #0x38]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02001d60(void)
{
    stmdb sp!, {r3, lr}
    bl FX_DivAsync
    bl func_02001dd8
    ldmia sp!, {r3, pc}
}

asm void func_02001d70(void)
{
    stmdb sp!, {r3, lr}
    bl func_02001e0c
    bl func_02001dd8
    ldmia sp!, {r3, pc}
}

asm void func_02001d80(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    movle r0, #0
    ldmleia sp!, {r3, pc}
    ldr r1, =0x40002b0
    mov r2, #1
    strh r2, [r1]
    mov r2, #0
    str r2, [r1, #8]
    str r0, [r1, #0xc]
    bl FX_GetSqrtResult
    ldmia sp!, {r3, pc}
}
