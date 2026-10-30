// (asm for now)

void TryToMergeBlockRegion_(void);
void func_0202fe1c(void);
void func_0202fe28(void);
void NNSi_GfdAddNewFreeBlock(void);
void func_0202fec8(void);
void func_0202fedc(void);
void NNSi_GfdMergeAllFreeBlocks(void);
void NNSi_GfdFreeLnkVram(void);
void func_02030128(void);

asm void TryToMergeBlockRegion_(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r3, [r0]
    mov lr, #0
    cmp r3, #0
    beq @L_0202fe14
    mov r8, lr
    mov r4, lr
@L_0202fd54:
    ldr r6, [r3]
    ldr r5, [r2, #4]
    ldr r12, [r3, #0xc]
    cmp r6, r5
    bne @L_0202fdb0
    ldr r5, [r3, #4]
    orr lr, lr, #1
    add r5, r6, r5
    str r5, [r2, #4]
    ldr r6, [r3, #8]
    ldr r5, [r3, #0xc]
    cmp r6, #0
    strne r5, [r6, #0xc]
    streq r5, [r0]
    cmp r5, #0
    strne r6, [r5, #8]
    ldr r5, [r1]
    cmp r5, #0
    strne r3, [r5, #8]
    ldr r5, [r1]
    str r5, [r3, #0xc]
    str r8, [r3, #8]
    str r3, [r1]
@L_0202fdb0:
    ldr r7, [r3]
    ldr r5, [r3, #4]
    ldr r6, [r2]
    add r5, r7, r5
    cmp r6, r5
    bne @L_0202fe08
    str r7, [r2]
    ldr r6, [r3, #8]
    ldr r5, [r3, #0xc]
    cmp r6, #0
    strne r5, [r6, #0xc]
    streq r5, [r0]
    cmp r5, #0
    strne r6, [r5, #8]
    ldr r5, [r1]
    orr lr, lr, #1
    cmp r5, #0
    strne r3, [r5, #8]
    ldr r5, [r1]
    str r5, [r3, #0xc]
    str r4, [r3, #8]
    str r3, [r1]
@L_0202fe08:
    mov r3, r12
    cmp r12, #0
    bne @L_0202fd54
@L_0202fe14:
    mov r0, lr
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_0202fe1c(void)
{
    mov r1, #0
    str r1, [r0]
    bx lr
}

asm void func_0202fe28(void)
{
    stmdb sp!, {r3, lr}
    subs lr, r1, #1
    mov r12, #0
    beq @L_0202fe58
@L_0202fe38:
    add r3, r12, #1
    add r2, r0, r12, lsl #4
    add r12, r0, r3, lsl #4
    str r12, [r2, #0xc]
    mov r12, r3
    str r2, [r2, #0x18]
    cmp r3, lr
    blo @L_0202fe38
@L_0202fe58:
    mov r2, #0
    str r2, [r0, #8]
    add r1, r0, r1, lsl #4
    str r2, [r1, #-4]
    ldmia sp!, {r3, pc}
}

asm void NNSi_GfdAddNewFreeBlock(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r1]
    cmp lr, #0
    ldrne r12, [lr, #0xc]
    strne r12, [r1]
    cmp lr, #0
    beq @L_0202fec0
    stmia lr, {r2, r3}
    mov r1, #0
    str r1, [lr, #8]
    str r1, [lr, #0xc]
    ldr r1, [r0]
    cmp r1, #0
    strne lr, [r1, #8]
    ldr r2, [r0]
    mov r1, #0
    str r2, [lr, #0xc]
    str r1, [lr, #8]
    str lr, [r0]
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_0202fec0:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void func_0202fec8(void)
{
    stmdb sp!, {r3, lr}
    mov r12, #0
    str r12, [sp]
    bl func_0202fedc
    ldmia sp!, {r3, pc}
}

asm void func_0202fedc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r7, [r0]
    ldr r9, [sp, #0x28]
    cmp r7, #0
    mov r6, #0
    beq @L_0202ff44
    sub r12, r9, #1
    mvn r8, r12
    mov r11, r6
@L_0202ff00:
    cmp r9, #1
    ldrls lr, [r7]
    movls r5, r11
    movls r4, r3
    bls @L_0202ff28
    ldr r5, [r7]
    add r4, r5, r12
    and lr, r8, r4
    sub r5, lr, r5
    add r4, r3, r5
@L_0202ff28:
    ldr r10, [r7, #4]
    cmp r10, r4
    movhs r6, r7
    bhs @L_0202ff44
    ldr r7, [r7, #0xc]
    cmp r7, #0
    bne @L_0202ff00
@L_0202ff44:
    cmp r6, #0
    beq @L_02030008
    cmp r5, #0
    beq @L_0202ffa4
    ldr r3, [r1]
    cmp r3, #0
    ldrne r7, [r3, #0xc]
    strne r7, [r1]
    cmp r3, #0
    beq @L_02030008
    ldr r7, [r6]
    str r7, [r3]
    str r5, [r3, #4]
    mov r5, #0
    str r5, [r3, #8]
    str r5, [r3, #0xc]
    ldr r5, [r0]
    cmp r5, #0
    strne r3, [r5, #8]
    ldr r5, [r0]
    str r5, [r3, #0xc]
    mov r5, #0
    str r5, [r3, #8]
    str r3, [r0]
@L_0202ffa4:
    ldr r3, [r6, #4]
    subs r3, r3, r4
    str r3, [r6, #4]
    ldr r3, [r6]
    add r3, r3, r4
    str r3, [r6]
    bne @L_0202fffc
    ldr r4, [r6, #8]
    ldr r3, [r6, #0xc]
    cmp r4, #0
    strne r3, [r4, #0xc]
    streq r3, [r0]
    cmp r3, #0
    strne r4, [r3, #8]
    ldr r0, [r1]
    cmp r0, #0
    strne r6, [r0, #8]
    ldr r0, [r1]
    str r0, [r6, #0xc]
    mov r0, #0
    str r0, [r6, #8]
    str r6, [r1]
@L_0202fffc:
    str lr, [r2]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02030008:
    mov r0, #0
    str r0, [r2]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void NNSi_GfdMergeAllFreeBlocks(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r7, r0
    ldr r5, [r7]
    mov r6, r1
    cmp r5, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r4, sp, #0
@L_02030038:
    ldr r1, [r5]
    mov r0, r7
    str r1, [sp]
    ldr r3, [r5]
    ldr r2, [r5, #4]
    mov r1, r6
    add r3, r3, r2
    mov r2, r4
    str r3, [sp, #4]
    bl TryToMergeBlockRegion_
    cmp r0, #0
    ldreq r5, [r5, #0xc]
    beq @L_02030088
    ldr r0, [sp]
    str r0, [r5]
    ldr r1, [sp, #4]
    ldr r0, [sp]
    sub r0, r1, r0
    str r0, [r5, #4]
    ldr r5, [r7]
@L_02030088:
    cmp r5, #0
    bne @L_02030038
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void NNSi_GfdFreeLnkVram(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    add r3, r2, r3
    str r2, [sp]
    add r2, sp, #0
    mov r5, r1
    str r3, [sp, #4]
    mov r4, r0
    bl TryToMergeBlockRegion_
    ldr r3, [r5]
    cmp r3, #0
    ldrne r0, [r3, #0xc]
    strne r0, [r5]
    cmp r3, #0
    addeq sp, sp, #8
    mov r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [sp]
    str r1, [r3]
    ldr r2, [sp, #4]
    ldr r1, [sp]
    sub r1, r2, r1
    str r1, [r3, #4]
    str r0, [r3, #8]
    str r0, [r3, #0xc]
    ldr r0, [r4]
    cmp r0, #0
    strne r3, [r0, #8]
    ldr r1, [r4]
    mov r0, #0
    str r1, [r3, #0xc]
    str r0, [r3, #8]
    str r3, [r4]
    mov r0, #1
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02030128(void)
{
    mov r0, r0, lsl #4
    bx lr
}
