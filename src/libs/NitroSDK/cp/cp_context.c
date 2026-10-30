// (asm for now)

void CP_SaveContext(void);
void CPi_RestoreContext(void);
void func_0200e83c(void);
void func_0200eab0(void);
void func_0200eb24(void);
void func_0200ebb8(void);
void func_0200eca8(void);

extern char data_020bd340[];
void func_0200878c(void);
void func_0200afc0(void);
void func_0200b114(void);
void func_0200b0c8(void);
void func_0200ef64(void);
void OS_DisableInterrupts(void);
void OS_RestoreInterrupts(void);
void func_0200b138(void);

asm void CP_SaveContext(void)
{
    ldr r1, =0x4000290
    stmdb sp!, {r4}
    ldmia r1, {r2, r3, r4, r12}
    stmia r0!, {r2, r3, r4, r12}
    ldrh r12, [r1, #-0x10]
    add r1, r1, #0x28
    ldmia r1, {r2, r3}
    stmia r0!, {r2, r3}
    and r12, r12, #3
    ldrh r2, [r1, #-8]
    strh r12, [r0]
    and r2, r2, #1
    strh r2, [r0, #2]
    ldmia sp!, {r4}
    bx lr
}

asm void CPi_RestoreContext(void)
{
    stmdb sp!, {r4}
    ldr r1, =0x4000290
    ldmia r0, {r2, r3, r4, r12}
    stmia r1, {r2, r3, r4, r12}
    ldrh r2, [r0, #0x18]
    ldrh r3, [r0, #0x1a]
    strh r2, [r1, #-0x10]
    strh r3, [r1, #0x20]
    add r0, r0, #0x10
    add r1, r1, #0x28
    ldmia r0, {r2, r3}
    stmia r1, {r2, r3}
    ldmia sp!, {r4}
    bx lr
}

asm void func_0200e83c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r0, r1, lsl #0x10
    mov r4, r0, lsr #0x10
    and r0, r4, #0x7f00
    mov r0, r0, lsl #8
    cmp r2, #0
    mov r0, r0, lsr #0x10
    mov r2, #0
    ldr r3, =data_020bd340
    beq @L_0200e8a4
    mov r1, #1
    mov r1, r1, lsl r0
    ldrh r2, [r3, #0x38]
    mov r1, r1, lsl #0x10
    orr r1, r2, r1, lsr #16
    strh r1, [r3, #0x38]
    ldr r3, [r3, #4]
    cmp r3, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #4
    mov r2, #0
    blx r3
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0200e8a4:
    cmp r0, #0x10
    bne @L_0200e950
    ldrh r1, [r3, #0x10]
    add r1, r1, #1
    strh r1, [r3, #0x10]
    ldrh r4, [r3, #0x10]
    ldrh r1, [r3, #0x18]
    cmp r4, r1
    strhsh r2, [r3, #0x10]
    ldr r1, =0x2ffffaa
    ldrh lr, [r3, #0x10]
    ldrh r2, [r1]
    ldrh r1, [r1, #2]
    ldr r7, [r3, #0x14]
    strh r2, [sp, #4]
    strh r1, [sp, #6]
    ldr r5, [sp, #4]
    mov r6, lr, lsl #3
    mov r1, r5, lsl #7
    mov r2, r1, lsr #0x1f
    mov r4, r5, lsl #8
    mov r1, r5, lsl #5
    mov r12, r5, lsl #0x14
    mov r5, r12, lsr #0x14
    strh r5, [r7, r6]
    mov r1, r1, lsr #0x1e
    add r5, r7, lr, lsl #3
    mov r4, r4, lsr #0x14
    strh r4, [r5, #2]
    and r2, r2, #0xff
    strh r2, [r5, #4]
    and r1, r1, #0xff
    strh r1, [r5, #6]
    ldr r4, [r3, #4]
    cmp r4, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r2, [r3, #0x10]
    mov r1, #0
    and r2, r2, #0xff
    blx r4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0200e950:
    tst r1, #0x1000000
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    and r1, r4, #0xff
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_0200ea9c
    b @L_0200e980
    b @L_0200ea9c
    b @L_0200ea40
    b @L_0200ea48
    b @L_0200ea38
@L_0200e980:
    cmp r0, #0
    beq @L_0200e99c
    cmp r0, #1
    beq @L_0200e9f4
    cmp r0, #2
    streqh r2, [r3, #0x36]
    b @L_0200e9fc
@L_0200e99c:
    ldr r1, =0x2ffffaa
    ldrh r4, [r1]
    ldrh r1, [r1, #2]
    strh r4, [sp]
    strh r1, [sp, #2]
    ldr r4, [sp]
    mov r1, r4, lsl #0x14
    mov r5, r1, lsr #0x14
    mov lr, r4, lsl #8
    mov r1, r4, lsl #7
    mov r12, r1, lsr #0x1f
    mov r1, r4, lsl #5
    mov r1, r1, lsr #0x1e
    strh r5, [r3, #8]
    mov lr, lr, lsr #0x14
    strh lr, [r3, #0xa]
    and r12, r12, #0xff
    strh r12, [r3, #0xc]
    and r1, r1, #0xff
    strh r1, [r3, #0xe]
    strh r2, [r3, #0x36]
    b @L_0200e9fc
@L_0200e9f4:
    mov r1, #2
    strh r1, [r3, #0x36]
@L_0200e9fc:
    mov r1, #1
    mvn r1, r1, lsl r0
    ldrh r2, [r3, #0x3a]
    mov r1, r1, lsl #0x10
    and r1, r2, r1, lsr #16
    strh r1, [r3, #0x3a]
    ldr r3, [r3, #4]
    cmp r3, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0
    mov r2, r1
    blx r3
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0200ea38:
    mov r4, #3
    b @L_0200ea4c
@L_0200ea40:
    mov r4, #1
    b @L_0200ea4c
@L_0200ea48:
    mov r4, #2
@L_0200ea4c:
    mov r2, #1
    mov r1, r2, lsl r0
    ldrh r12, [r3, #0x38]
    mov r1, r1, lsl #0x10
    mvn r2, r2, lsl r0
    orr r1, r12, r1, lsr #16
    strh r1, [r3, #0x38]
    ldrh r12, [r3, #0x3a]
    mov r1, r2, lsl #0x10
    and r1, r12, r1, lsr #16
    strh r1, [r3, #0x3a]
    ldr r3, [r3, #4]
    cmp r3, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    and r1, r4, #0xff
    mov r2, #0
    blx r3
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0200ea9c:
    bl func_0200878c
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0200eab0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_020bd340
    ldrh r0, [r4]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, #1
    strh r0, [r4]
    bl func_0200afc0
    mov r0, #0
    strh r0, [r4, #0x10]
    str r0, [r4, #4]
    str r0, [r4, #0x14]
    strh r0, [r4, #0x36]
    strh r0, [r4, #0x34]
    strh r0, [r4, #0x3a]
    strh r0, [r4, #0x38]
    mov r5, #6
    mov r4, #1
@L_0200eaf8:
    mov r0, r5
    mov r1, r4
    bl func_0200b114
    cmp r0, #0
    beq @L_0200eaf8
    ldr r1, =func_0200e83c
    mov r0, r5
    bl func_0200b0c8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200eb24(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    ldr r12, =0x2fffc80
    mov r4, r0
    ldrh r1, [r12, #0x58]
    ldrh r2, [r12, #0x5a]
    ldrh r0, [r12, #0x5e]
    cmp r1, #0
    ldrh lr, [r12, #0x60]
    cmpeq r0, #0
    cmpeq r2, #0
    ldrb r3, [r12, #0x5c]
    ldrb r5, [r12, #0x5d]
    ldrb r6, [r12, #0x62]
    ldrb r12, [r12, #0x63]
    cmpeq lr, #0
    beq @L_0200eb88
    str r5, [sp]
    stmib sp, {r0, lr}
    str r6, [sp, #0xc]
    mov r0, r4
    str r12, [sp, #0x10]
    bl func_0200ef64
    cmp r0, #0
    beq @L_0200eba8
@L_0200eb88:
    mov r0, #0
    add sp, sp, #0x14
    strh r0, [r4]
    strh r0, [r4, #2]
    strh r0, [r4, #4]
    strh r0, [r4, #6]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200eba8:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_0200ebb8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r6, =data_020bd340
    movs r5, r0
    mov r4, #0
    streqh r4, [r6, #0x34]
    ldmeqia sp!, {r4, r5, r6, pc}
    bl OS_DisableInterrupts
    ldrsh r12, [r5, #4]
    cmp r12, #0
    beq @L_0200ec24
    ldr r3, =0x4000280
    mov r1, #0x10000000
    strh r4, [r3]
    str r1, [r3, #0x10]
    ldrsh r1, [r5]
    str r12, [r3, #0x18]
    mov r2, r4
    str r2, [r3, #0x1c]
    str r1, [r6, #0x1c]
    str r12, [r6, #0x20]
@L_0200ec08:
    ldrh r1, [r3]
    tst r1, #0x8000
    bne @L_0200ec08
    ldr r1, =0x40002a0
    ldr r1, [r1]
    str r1, [r6, #0x24]
    b @L_0200ec30
@L_0200ec24:
    str r4, [r6, #0x1c]
    str r4, [r6, #0x20]
    str r4, [r6, #0x24]
@L_0200ec30:
    ldrsh r12, [r5, #6]
    cmp r12, #0
    beq @L_0200ec80
    ldr r3, =0x4000280
    mov r1, #0x10000000
    strh r4, [r3]
    str r1, [r3, #0x10]
    ldrsh r1, [r5, #2]
    str r12, [r3, #0x18]
    mov r2, #0
    str r2, [r3, #0x1c]
    str r1, [r6, #0x28]
    str r12, [r6, #0x2c]
@L_0200ec64:
    ldrh r1, [r3]
    tst r1, #0x8000
    bne @L_0200ec64
    ldr r1, =0x40002a0
    ldr r1, [r1]
    str r1, [r6, #0x30]
    b @L_0200ec8c
@L_0200ec80:
    str r4, [r6, #0x28]
    str r4, [r6, #0x2c]
    str r4, [r6, #0x30]
@L_0200ec8c:
    bl OS_RestoreInterrupts
    mov r0, #1
    strh r0, [r6, #0x34]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0200eca8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    mov r5, #0
    mov r4, r0
    mov r2, r5
    mov r0, #6
    mov r1, #0x3000000
    bl func_0200b138
    cmp r0, #0
    movge r5, #1
    cmp r5, #0
    bne @L_0200ed10
    mov r0, r4
    bl OS_RestoreInterrupts
    ldr r0, =data_020bd340
    ldrh r1, [r0, #0x38]
    orr r1, r1, #1
    strh r1, [r0, #0x38]
    ldr r3, [r0, #4]
    cmp r3, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, #0
    mov r2, r0
    mov r1, #4
    blx r3
    ldmia sp!, {r3, r4, r5, pc}
@L_0200ed10:
    ldr r2, =data_020bd340
    ldr r1, =0xfffe
    ldrh r3, [r2, #0x3a]
    mov r0, r4
    orr r3, r3, #1
    strh r3, [r2, #0x3a]
    ldrh r3, [r2, #0x38]
    and r1, r3, r1
    strh r1, [r2, #0x38]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}
