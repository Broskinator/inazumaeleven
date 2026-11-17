// (asm for now)

void MTX_Identity43_(void);
void MTX_Copy43To44_(void);
void MTX_ScaleApply43(void);
void MTX_RotX43_(void);
void MTX_RotY43_(void);
void MTX_RotZ43_(void);
void MTX_Inverse43(void);
void MTX_Concat43(void);
void MTX_MultVec43(void);
void MTX_LookAt(void);

void MTX_ScaleApply33(void);
void FX_InvAsync(void);
void FX_GetDivResult(void);
void MI_Copy48B(void);
void VEC_Normalize(void);
void VEC_CrossProduct(void);
void VEC_DotProduct(void);

asm void MTX_Identity43_(void)
{
    mov r2, #0x1000
    mov r3, #0
    stmia r0!, {r2, r3}
    mov r1, #0
    stmia r0!, {r1, r3}
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r3}
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r3}
    bx lr
}

asm void MTX_Copy43To44_(void)
{
    stmdb sp!, {r4}
    mov r12, #0
    ldmia r0!, {r2, r3, r4}
    stmia r1!, {r2, r3, r4, r12}
    ldmia r0!, {r2, r3, r4}
    stmia r1!, {r2, r3, r4, r12}
    ldmia r0!, {r2, r3, r4}
    stmia r1!, {r2, r3, r4, r12}
    mov r12, #0x1000
    ldmia r0!, {r2, r3, r4}
    stmia r1!, {r2, r3, r4, r12}
    ldmia sp!, {r4}
    bx lr
}

asm void MTX_ScaleApply43(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r12, [sp, #0x10]
    mov r5, r0
    mov r4, r1
    str r12, [sp]
    bl MTX_ScaleApply33
    ldr r2, [r5, #0x24]
    ldr r1, [r5, #0x28]
    ldr r0, [r5, #0x2c]
    str r2, [r4, #0x24]
    str r1, [r4, #0x28]
    str r0, [r4, #0x2c]
    ldmia sp!, {r3, r4, r5, pc}
}

#pragma thumb on
asm void MTX_RotX43_(void)
{
    str r1, [r0, #0x14] // 0x02000e30
    neg r1, r1 // 0x02000e32
    str r1, [r0, #0x1c] // 0x02000e34
    mov r1, #1 // 0x02000e36
    lsl r1, r1, #0xc // 0x02000e38
    stmia r0!, {r1} // 0x02000e3a
    mov r3, #0 // 0x02000e3c
    mov r1, #0 // 0x02000e3e
    stmia r0!, {r1, r3} // 0x02000e40
    stmia r0!, {r1, r2} // 0x02000e42
    str r1, [r0, #4] // 0x02000e44
    add r0, #0xc // 0x02000e46
    stmia r0!, {r2, r3} // 0x02000e48
    stmia r0!, {r1, r3} // 0x02000e4a
    bx lr // 0x02000e4c
    dcb 0x00
    dcb 0x00
}
#pragma thumb off

#pragma thumb on
asm void MTX_RotY43_(void)
{
    str r1, [r0, #0x18] // 0x02000e50
    mov r3, #0 // 0x02000e52
    stmia r0!, {r2, r3} // 0x02000e54
    neg r1, r1 // 0x02000e56
    stmia r0!, {r1, r3} // 0x02000e58
    mov r1, #1 // 0x02000e5a
    lsl r1, r1, #0xc // 0x02000e5c
    stmia r0!, {r1, r3} // 0x02000e5e
    add r0, #4 // 0x02000e60
    mov r1, #0 // 0x02000e62
    stmia r0!, {r1, r2, r3} // 0x02000e64
    stmia r0!, {r1, r3} // 0x02000e66
    bx lr // 0x02000e68
    dcb 0x00
    dcb 0x00
}
#pragma thumb off

#pragma thumb on
asm void MTX_RotZ43_(void)
{
    stmia r0!, {r2} // 0x02000e6c
    mov r3, #0 // 0x02000e6e
    stmia r0!, {r1, r3} // 0x02000e70
    neg r1, r1 // 0x02000e72
    stmia r0!, {r1, r2, r3} // 0x02000e74
    mov r1, #0 // 0x02000e76
    mov r2, #0 // 0x02000e78
    mov r3, #1 // 0x02000e7a
    lsl r3, r3, #0xc // 0x02000e7c
    stmia r0!, {r1, r2, r3} // 0x02000e7e
    mov r3, #0 // 0x02000e80
    stmia r0!, {r1, r2, r3} // 0x02000e82
    bx lr // 0x02000e84
    dcb 0x00
    dcb 0x00
}
#pragma thumb off

asm void MTX_Inverse43(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x68
    mov r10, r0
    ldr r0, [r10, #0x14]
    ldr r3, [r10, #0x18]
    ldr r2, [r10, #0xc]
    ldr r6, [r10, #0x20]
    add r9, sp, #0x38
    cmp r10, r1
    str r1, [sp]
    movne r9, r1
    smull r11, r8, r2, r6
    smull r7, r1, r0, r3
    subs r7, r11, r7
    sbc r12, r8, r1
    ldr r4, [r10, #0x10]
    ldr r5, [r10, #0x1c]
    adds r1, r7, #0x800
    smull r11, r8, r4, r6
    smull r7, r6, r0, r5
    adc r0, r12, #0
    subs r7, r11, r7
    sbc r6, r8, r6
    mov r8, r1, lsr #0xc
    orr r8, r8, r0, lsl #20
    smull r1, r0, r2, r5
    adds r7, r7, #0x800
    smull r5, r3, r4, r3
    adc r2, r6, #0
    mov r7, r7, lsr #0xc
    orr r7, r7, r2, lsl #20
    subs r1, r1, r5
    sbc r5, r0, r3
    ldr r2, [r10]
    adds r6, r1, #0x800
    ldr r11, [r10, #4]
    smull r4, r3, r2, r7
    smull r1, r0, r11, r8
    adc r2, r5, #0
    mov r6, r6, lsr #0xc
    orr r6, r6, r2, lsl #20
    subs r2, r4, r1
    ldr r1, [r10, #8]
    sbc r0, r3, r0
    smlal r2, r0, r1, r6
    adds r1, r2, #0x800
    adc r2, r0, #0
    mov r0, r1, lsr #0xc
    mov r1, r8, asr #0x1f
    str r1, [sp, #4]
    mov r1, r7, asr #0x1f
    str r1, [sp, #8]
    mov r1, r6, asr #0x1f
    str r1, [sp, #0xc]
    orrs r0, r0, r2, lsl #20
    mov r1, #0
    addeq sp, sp, #0x68
    subeq r0, r1, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl FX_InvAsync
    ldr r1, [r10, #8]
    ldr r2, [r10, #0x1c]
    ldr r11, [r10, #0x10]
    smull r0, r4, r2, r1
    smull r3, r2, r11, r1
    ldr r5, [r10, #0x18]
    str r2, [sp, #0x18]
    str r3, [sp, #0x14]
    smull r3, r2, r5, r1
    str r2, [sp, #0x20]
    ldr r2, [r10, #0x20]
    str r3, [sp, #0x1c]
    str r2, [sp, #0x10]
    ldr r5, [sp, #0x10]
    ldmia r10, {r3, lr}
    smull r12, r5, lr, r5
    subs r0, r12, r0
    ldr r2, [r10, #0xc]
    sbc r4, r5, r4
    smull r1, r5, r2, r1
    str r5, [sp, #0x28]
    mov r5, r0, lsr #0xc
    ldr r11, [r10, #0x14]
    orr r5, r5, r4, lsl #20
    smull r4, r2, lr, r11
    ldr r0, [sp, #0x14]
    subs r4, r4, r0
    ldr r0, [sp, #0x18]
    mov r4, r4, lsr #0xc
    sbc r0, r2, r0
    orr r4, r4, r0, lsl #20
    ldr r0, [sp, #0x10]
    ldr r2, [sp, #0x1c]
    smull r12, r0, r3, r0
    subs r2, r12, r2
    ldr r12, [sp, #0x20]
    sbc r0, r0, r12
    smull r12, r11, r3, r11
    ldr r3, [sp, #0x28]
    subs r1, r12, r1
    sbc r3, r11, r3
    mov r11, r2, lsr #0xc
    orr r11, r11, r0, lsl #20
    mov r0, r1, lsr #0xc
    orr r0, r0, r3, lsl #20
    str r0, [sp, #0x24]
    bl FX_GetDivResult
    smull r2, r1, r0, r5
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    rsb r5, r2, #0
    smull r2, r1, r0, r4
    mov r4, r2, lsr #0xc
    orr r4, r4, r1, lsl #20
    smull r2, r1, r0, r11
    mov r3, r2, lsr #0xc
    orr r3, r3, r1, lsl #20
    ldr r1, [sp, #0x24]
    umull lr, r11, r0, r7
    smull r2, r1, r0, r1
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    ldr r1, [sp, #8]
    mov r12, r0, asr #0x1f
    mla r11, r0, r1, r11
    mla r11, r12, r7, r11
    mov r1, lr, lsr #0xc
    orr r1, r1, r11, lsl #20
    stmia r9, {r1, r5}
    str r1, [sp, #0x34]
    ldr r1, [sp, #4]
    umull r11, r7, r0, r8
    mla r7, r0, r1, r7
    mla r7, r12, r8, r7
    mov r1, r11, lsr #0xc
    orr r1, r1, r7, lsl #20
    rsb r1, r1, #0
    str r4, [r9, #8]
    str r1, [r9, #0xc]
    str r1, [sp, #0x2c]
    umull r8, r7, r0, r6
    ldr r1, [sp, #0xc]
    rsb r2, r2, #0
    mla r7, r0, r1, r7
    str r3, [r9, #0x10]
    mla r7, r12, r6, r7
    mov r11, r8, lsr #0xc
    str r2, [r9, #0x14]
    orr r11, r11, r7, lsl #20
    str r11, [r9, #0x18]
    ldr r7, [r10]
    ldr r1, [r10, #0x1c]
    ldr r8, [r10, #0x18]
    smull r6, r1, r7, r1
    ldr r7, [r10, #4]
    smull r12, r7, r8, r7
    subs r6, r6, r12
    sbc r1, r1, r7
    mov r6, r6, lsr #0xc
    orr r6, r6, r1, lsl #20
    smull r6, r1, r0, r6
    mov r6, r6, lsr #0xc
    orr r6, r6, r1, lsl #20
    rsb r1, r6, #0
    str r1, [r9, #0x1c]
    str r1, [sp, #0x30]
    ldr r7, [r10]
    ldr r1, [r10, #0x10]
    ldr r8, [r10, #0xc]
    smull r6, r1, r7, r1
    ldr r7, [r10, #4]
    smull r12, r7, r8, r7
    subs r6, r6, r12
    sbc r1, r1, r7
    mov r6, r6, lsr #0xc
    orr r6, r6, r1, lsl #20
    smull r6, r1, r0, r6
    mov r8, r6, lsr #0xc
    orr r8, r8, r1, lsl #20
    str r8, [r9, #0x20]
    add r0, sp, #0x38
    ldr r6, [r10, #0x28]
    ldr r12, [sp, #0x2c]
    ldr lr, [r10, #0x24]
    smull r7, r6, r12, r6
    ldr r12, [sp, #0x34]
    ldr r1, [r10, #0x2c]
    smlal r7, r6, r12, lr
    smlal r7, r6, r11, r1
    mov r1, r7, lsr #0xc
    orr r1, r1, r6, lsl #20
    rsb r1, r1, #0
    str r1, [r9, #0x24]
    ldr r1, [r10, #0x28]
    ldr r6, [r10, #0x24]
    smull r12, r11, r3, r1
    smlal r12, r11, r5, r6
    ldr r7, [r10, #0x2c]
    ldr r1, [sp, #0x30]
    cmp r9, r0
    smlal r12, r11, r1, r7
    mov r1, r12, lsr #0xc
    orr r1, r1, r11, lsl #20
    rsb r1, r1, #0
    str r1, [r9, #0x28]
    ldr r1, [r10, #0x28]
    ldr r3, [r10, #0x24]
    smull r6, r1, r2, r1
    smlal r6, r1, r4, r3
    ldr r5, [r10, #0x2c]
    smlal r6, r1, r8, r5
    mov r2, r6, lsr #0xc
    orr r2, r2, r1, lsl #20
    rsb r1, r2, #0
    str r1, [r9, #0x2c]
    bne @L_020011f0
    ldr r1, [sp]
    bl MI_Copy48B
@L_020011f0:
    mov r0, #0
    add sp, sp, #0x68
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MTX_Concat43(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x30
    ldr r8, [r0, #4]
    ldr r3, [r1, #0xc]
    mov r12, r2
    smull r6, r5, r8, r3
    ldr r9, [r0]
    ldr r3, [r1]
    cmp r12, r1
    smlal r6, r5, r9, r3
    ldr lr, [r0, #8]
    ldr r4, [r1, #0x18]
    addeq r2, sp, #0
    smlal r6, r5, lr, r4
    mov r4, r6, lsr #0xc
    orr r4, r4, r5, lsl #20
    str r4, [r2]
    ldr r4, [r1, #0x10]
    ldr r5, [r1, #4]
    smull r7, r6, r8, r4
    smlal r7, r6, r9, r5
    ldr r4, [r1, #0x1c]
    ldr r3, [r0, #0x10]
    smlal r7, r6, lr, r4
    mov r4, r7, lsr #0xc
    orr r4, r4, r6, lsl #20
    str r4, [r2, #4]
    ldr r10, [r1, #0x14]
    ldr r7, [r1, #8]
    smull r6, r4, r8, r10
    smlal r6, r4, r9, r7
    smull r9, r8, r3, r10
    ldr r5, [r0, #0xc]
    ldr r10, [r1, #0x20]
    smlal r9, r8, r5, r7
    ldr r7, [r0, #0x14]
    smlal r6, r4, lr, r10
    mov r6, r6, lsr #0xc
    orr r6, r6, r4, lsl #20
    smlal r9, r8, r7, r10
    mov r4, r9, lsr #0xc
    str r6, [r2, #8]
    orr r4, r4, r8, lsl #20
    str r4, [r2, #0x14]
    ldr r4, [r1, #0x10]
    ldr r6, [r1, #4]
    smull r9, r8, r3, r4
    smlal r9, r8, r5, r6
    ldr r4, [r1, #0x1c]
    ldr r6, [r0, #0x18]
    smlal r9, r8, r7, r4
    mov r4, r9, lsr #0xc
    orr r4, r4, r8, lsl #20
    str r4, [r2, #0x10]
    ldr r4, [r1, #0xc]
    ldr lr, [r1]
    smull r9, r8, r3, r4
    smlal r9, r8, r5, lr
    ldr r3, [r1, #0x18]
    ldr r5, [r0, #0x1c]
    smlal r9, r8, r7, r3
    mov r7, r9, lsr #0xc
    orr r7, r7, r8, lsl #20
    str r7, [r2, #0xc]
    smull r8, r7, r5, r4
    smlal r8, r7, r6, lr
    ldr r4, [r0, #0x20]
    ldr lr, [r0, #0x28]
    smlal r8, r7, r4, r3
    mov r3, r8, lsr #0xc
    orr r3, r3, r7, lsl #20
    str r3, [r2, #0x18]
    ldr r7, [r1, #0x10]
    ldr r3, [r0, #0x24]
    smull r10, r7, r5, r7
    ldr r8, [r1, #4]
    ldr r9, [r1, #0x1c]
    smlal r10, r7, r6, r8
    smlal r10, r7, r4, r9
    mov r8, r10, lsr #0xc
    orr r8, r8, r7, lsl #20
    str r8, [r2, #0x1c]
    ldr r7, [r1, #0x14]
    ldr r10, [r1, #8]
    smull r9, r8, r5, r7
    smlal r9, r8, r6, r10
    smull r7, r6, lr, r7
    smlal r7, r6, r3, r10
    ldr r10, [r1, #0x20]
    ldr r0, [r0, #0x2c]
    smlal r9, r8, r4, r10
    mov r4, r9, lsr #0xc
    orr r4, r4, r8, lsl #20
    smlal r7, r6, r0, r10
    str r4, [r2, #0x20]
    mov r4, r7, lsr #0xc
    orr r4, r4, r6, lsl #20
    ldr r6, [r1, #0x2c]
    add r5, sp, #0
    adds r4, r6, r4
    str r4, [r2, #0x2c]
    ldr r4, [r1, #0x10]
    ldr r6, [r1, #4]
    smull r8, r4, lr, r4
    smlal r8, r4, r3, r6
    ldr r7, [r1, #0x1c]
    ldr r9, [r1, #0x28]
    smlal r8, r4, r0, r7
    mov r6, r8, lsr #0xc
    orr r6, r6, r4, lsl #20
    adds r4, r9, r6
    str r4, [r2, #0x28]
    ldr r8, [r1, #0x24]
    ldr r6, [r1, #0x18]
    ldr r4, [r1]
    ldr r1, [r1, #0xc]
    smull r7, r1, lr, r1
    smlal r7, r1, r3, r4
    smlal r7, r1, r0, r6
    mov r0, r7, lsr #0xc
    orr r0, r0, r1, lsl #20
    adds r0, r8, r0
    cmp r2, r5
    str r0, [r2, #0x24]
    addne sp, sp, #0x30
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r12, {r0, r1, r2, r3}
    add sp, sp, #0x30
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void MTX_MultVec43(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r7, [r0, #4]
    ldr r5, [r1, #0xc]
    ldr r3, [r1, #0x10]
    ldr r4, [r1, #0x14]
    smull lr, r12, r7, r5
    smull r8, r3, r7, r3
    smull r6, r5, r7, r4
    ldr r10, [r0]
    ldr r9, [r1]
    ldr r7, [r1, #4]
    ldr r4, [r1, #8]
    smlal lr, r12, r10, r9
    smlal r8, r3, r10, r7
    smlal r6, r5, r10, r4
    ldr r9, [r0, #8]
    ldr r7, [r1, #0x18]
    ldr r4, [r1, #0x1c]
    ldr r0, [r1, #0x20]
    smlal lr, r12, r9, r7
    smlal r8, r3, r9, r4
    smlal r6, r5, r9, r0
    mov r9, lr, lsr #0xc
    mov r7, r8, lsr #0xc
    mov r4, r6, lsr #0xc
    ldr r0, [r1, #0x24]
    orr r9, r9, r12, lsl #20
    add r6, r9, r0
    ldr r0, [r1, #0x28]
    orr r7, r7, r3, lsl #20
    add r3, r7, r0
    ldr r0, [r1, #0x2c]
    orr r4, r4, r5, lsl #20
    add r0, r4, r0
    str r6, [r2]
    str r3, [r2, #4]
    str r0, [r2, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void MTX_LookAt(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x24
    mov r8, r0
    ldr r4, [r8]
    ldr r0, [r2]
    mov r7, r1
    sub r4, r4, r0
    ldr r9, [r8, #4]
    ldr r6, [r2, #4]
    ldr r1, [r8, #8]
    sub r9, r9, r6
    ldr r0, [r2, #8]
    add r5, sp, #0x18
    sub r2, r1, r0
    mov r0, r5
    mov r1, r5
    mov r6, r3
    str r4, [sp, #0x18]
    str r9, [sp, #0x1c]
    str r2, [sp, #0x20]
    bl VEC_Normalize
    add r9, sp, #0xc
    mov r0, r7
    mov r1, r5
    mov r2, r9
    bl VEC_CrossProduct
    mov r0, r9
    mov r1, r9
    bl VEC_Normalize
    add r4, sp, #0
    mov r0, r5
    mov r1, r9
    mov r2, r4
    bl VEC_CrossProduct
    ldr r2, [sp, #0xc]
    mov r1, r9
    str r2, [r6]
    ldr r2, [sp]
    mov r0, r8
    str r2, [r6, #4]
    ldr r2, [sp, #0x18]
    str r2, [r6, #8]
    ldr r2, [sp, #0x10]
    str r2, [r6, #0xc]
    ldr r2, [sp, #4]
    str r2, [r6, #0x10]
    ldr r2, [sp, #0x1c]
    str r2, [r6, #0x14]
    ldr r2, [sp, #0x14]
    str r2, [r6, #0x18]
    ldr r2, [sp, #8]
    str r2, [r6, #0x1c]
    ldr r2, [sp, #0x20]
    str r2, [r6, #0x20]
    bl VEC_DotProduct
    rsb r0, r0, #0
    str r0, [r6, #0x24]
    mov r1, r4
    mov r0, r8
    bl VEC_DotProduct
    rsb r0, r0, #0
    str r0, [r6, #0x28]
    mov r1, r5
    mov r0, r8
    bl VEC_DotProduct
    rsb r0, r0, #0
    str r0, [r6, #0x2c]
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}
