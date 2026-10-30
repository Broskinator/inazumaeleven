// (asm for now)

void GetRegionOfMBlock(void);
void RemoveMBlock(void);
void InsertMBlock(void);
void func_02032a7c(void);
void func_02032aa8(void);
void func_02032b18(void);
void func_02032c84(void);
void func_02032d38(void);
void RecycleRegion(void);
void NNS_FndCreateExpHeapEx(void);
void NNS_FndDestroyExpHeap(void);
void NNS_FndAllocFromExpHeapEx(void);
void NNS_FndFreeToExpHeap(void);
void NNS_FndGetTotalFreeSizeForExpHeap(void);
void NNS_FndGetAllocatableSizeForExpHeapEx(void);
void func_02033038(void);

void func_02032964(void);
void func_0200919c(void);
void func_020329e0(void);
void func_02017cdc(void);

asm void GetRegionOfMBlock(void)
{
    ldrh r2, [r1, #2]
    add r3, r1, #0x10
    mov r2, r2, asr #8
    and r2, r2, #0x7f
    mov r2, r2, lsl #0x10
    sub r2, r1, r2, lsr #16
    str r2, [r0]
    ldr r1, [r1, #4]
    add r1, r1, r3
    str r1, [r0, #4]
    bx lr
}

asm void RemoveMBlock(void)
{
    ldr r2, [r1, #8]
    ldr r1, [r1, #0xc]
    cmp r2, #0
    strne r1, [r2, #0xc]
    streq r1, [r0]
    cmp r1, #0
    strne r2, [r1, #8]
    streq r2, [r0, #4]
    mov r0, r2
    bx lr
}

asm void InsertMBlock(void)
{
    str r2, [r1, #8]
    cmp r2, #0
    ldrne r3, [r2, #0xc]
    strne r1, [r2, #0xc]
    ldreq r3, [r0]
    streq r1, [r0]
    str r3, [r1, #0xc]
    cmp r3, #0
    strne r1, [r3, #8]
    streq r1, [r0, #4]
    mov r0, r1
    bx lr
}

asm void func_02032a7c(void)
{
    ldr r3, [r0]
    ldr r2, [r0, #4]
    add r0, r3, #0x10
    strh r1, [r3]
    mov r1, #0
    strh r1, [r3, #2]
    sub r0, r2, r0
    stmib r3, {r0, r1}
    mov r0, r3
    str r1, [r3, #0xc]
    bx lr
}

asm void func_02032aa8(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r3, r1
    mov r5, r0
    str r2, [sp]
    ldr r1, =0x45585048
    add r2, r5, #0x38
    bl func_02032964
    mov r4, #0
    bic r1, r4, #1
    strh r1, [r5, #0x36]
    ldr r0, [r5, #0x18]
    strh r4, [r5, #0x34]
    str r0, [sp, #4]
    ldr r2, [r5, #0x1c]
    ldr r1, =0x4652
    add r0, sp, #4
    str r2, [sp, #8]
    bl func_02032a7c
    str r0, [r5, #0x24]
    str r0, [r5, #0x28]
    mov r0, r5
    str r4, [r5, #0x2c]
    str r4, [r5, #0x30]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, pc}
}

asm void func_02032b18(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    add r4, sp, #0x10
    mov r8, r0
    mov r0, r4
    mov r5, r1
    mov r7, r2
    mov r9, r3
    bl GetRegionOfMBlock
    ldr r3, [sp, #0x14]
    sub r6, r7, #0x10
    add r2, r9, r7
    mov r0, r8
    mov r1, r5
    str r6, [sp, #0x14]
    str r3, [sp, #0xc]
    str r2, [sp, #8]
    bl RemoveMBlock
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x14]
    mov r5, r0
    sub r0, r1, r2
    cmp r0, #0x14
    strlo r2, [sp, #0x14]
    blo @L_02032b9c
    ldr r1, =0x4652
    mov r0, r4
    bl func_02032a7c
    mov r1, r0
    mov r0, r8
    mov r2, r5
    bl InsertMBlock
    mov r5, r0
@L_02032b9c:
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #8]
    sub r0, r1, r0
    cmp r0, #0x14
    strlo r1, [sp, #8]
    blo @L_02032bd0
    ldr r1, =0x4652
    add r0, sp, #8
    bl func_02032a7c
    mov r1, r0
    mov r0, r8
    mov r2, r5
    bl InsertMBlock
@L_02032bd0:
    ldr r0, [r8, #-4]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #8]
    and r0, r0, #0xff
    tst r0, #1
    sub r2, r2, r1
    beq @L_02032bf4
    mov r0, #0
    bl func_0200919c
@L_02032bf4:
    ldr r2, [sp, #8]
    ldr r1, =0x5544
    add r0, sp, #0
    str r6, [sp]
    str r2, [sp, #4]
    bl func_02032a7c
    mov r1, r0
    ldrh r3, [r1, #2]
    ldrh r2, [sp, #0x38]
    add r0, r8, #8
    bic r3, r3, #0x8000
    mov r2, r2, lsl #0x1f
    orr r2, r3, r2, lsr #16
    strh r2, [r1, #2]
    ldr r3, [sp, #0x14]
    bic r2, r2, #0x7f00
    strh r2, [r1, #2]
    sub r2, r1, r3
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    ldrh r3, [r1, #2]
    mov r2, r2, lsl #0x19
    orr r2, r3, r2, lsr #17
    strh r2, [r1, #2]
    ldrh r3, [r8, #0x10]
    bic r2, r2, #0xff
    and r3, r3, #0xff
    orr r2, r2, r3
    strh r2, [r1, #2]
    ldr r2, [r8, #0xc]
    bl InsertMBlock
    mov r0, r7
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02032c84(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldrh r4, [r0, #0x36]
    mov r3, r1
    ldr r12, [r0, #0x24]
    and r1, r4, #1
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    mov r1, #0
    moveq r6, #1
    movne r6, #0
    mov r4, r1
    cmp r12, #0
    sub lr, r1, #1
    beq @L_02032d14
    sub r2, r2, #1
    mvn r5, r2
@L_02032cc4:
    add r8, r12, #0x10
    add r7, r2, r8
    and r9, r5, r7
    sub r7, r9, r8
    ldr r8, [r12, #4]
    add r7, r3, r7
    cmp r8, r7
    blo @L_02032d08
    cmp lr, r8
    bls @L_02032d08
    mov r1, r12
    mov lr, r8
    mov r4, r9
    cmp r6, #0
    bne @L_02032d14
    cmp r8, r3
    beq @L_02032d14
@L_02032d08:
    ldr r12, [r12, #0xc]
    cmp r12, #0
    bne @L_02032cc4
@L_02032d14:
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r5, #0
    mov r2, r4
    add r0, r0, #0x24
    str r5, [sp]
    bl func_02032b18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02032d38(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldrh r4, [r0, #0x36]
    mov r3, r1
    ldr r12, [r0, #0x28]
    and r1, r4, #1
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    mov r1, #0
    moveq r5, #1
    movne r5, #0
    mov r4, r1
    cmp r12, #0
    sub lr, r1, #1
    beq @L_02032dc4
    sub r2, r2, #1
    mvn r2, r2
@L_02032d78:
    ldr r8, [r12, #4]
    add r9, r12, #0x10
    add r6, r8, r9
    sub r6, r6, r3
    and r7, r2, r6
    subs r6, r7, r9
    bmi @L_02032db8
    cmp lr, r8
    bls @L_02032db8
    mov r1, r12
    mov lr, r8
    mov r4, r7
    cmp r5, #0
    bne @L_02032dc4
    cmp r8, r3
    beq @L_02032dc4
@L_02032db8:
    ldr r12, [r12, #8]
    cmp r12, #0
    bne @L_02032d78
@L_02032dc4:
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r5, #1
    mov r2, r4
    add r0, r0, #0x24
    str r5, [sp]
    bl func_02032b18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void RecycleRegion(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r5, r1
    ldr r2, [r5]
    ldr r1, [r5, #4]
    mov r6, r0
    str r2, [sp]
    str r1, [sp, #4]
    ldr r1, [r6]
    mov r4, #0
    cmp r1, #0
    beq @L_02032e5c
    ldr r0, [r5]
@L_02032e1c:
    cmp r1, r0
    movlo r4, r1
    blo @L_02032e50
    ldr r0, [r5, #4]
    cmp r1, r0
    bne @L_02032e5c
    ldr r2, [r1, #4]
    add r0, r1, #0x10
    add r2, r2, r0
    mov r0, r6
    str r2, [sp, #4]
    bl RemoveMBlock
    b @L_02032e5c
@L_02032e50:
    ldr r1, [r1, #0xc]
    cmp r1, #0
    bne @L_02032e1c
@L_02032e5c:
    cmp r4, #0
    beq @L_02032e90
    ldr r2, [r4, #4]
    add r1, r4, #0x10
    ldr r0, [r5]
    add r1, r2, r1
    cmp r1, r0
    bne @L_02032e90
    mov r0, r6
    mov r1, r4
    str r4, [sp]
    bl RemoveMBlock
    mov r4, r0
@L_02032e90:
    ldr r1, [sp, #4]
    ldr r0, [sp]
    sub r0, r1, r0
    cmp r0, #0x10
    addlo sp, sp, #8
    movlo r0, #0
    ldmloia sp!, {r4, r5, r6, pc}
    ldr r1, =0x4652
    add r0, sp, #0
    bl func_02032a7c
    mov r1, r0
    mov r0, r6
    mov r2, r4
    bl InsertMBlock
    mov r0, #1
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNS_FndCreateExpHeapEx(void)
{
    stmdb sp!, {r3, lr}
    add r1, r1, r0
    add r0, r0, #3
    bic r1, r1, #3
    bic r0, r0, #3
    cmp r0, r1
    bhi @L_02032f00
    sub r3, r1, r0
    cmp r3, #0x4c
    bhs @L_02032f08
@L_02032f00:
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_02032f08:
    bl func_02032aa8
    ldmia sp!, {r3, pc}
}

asm void NNS_FndDestroyExpHeap(void)
{
    ldr r12, =func_020329e0
    bx r12
}

asm void NNS_FndAllocFromExpHeapEx(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    moveq r1, #1
    add r1, r1, #3
    cmp r2, #0
    bic r1, r1, #3
    blt @L_02032f40
    bl func_02032c84
    ldmia sp!, {r3, pc}
@L_02032f40:
    rsb r2, r2, #0
    bl func_02032d38
    ldmia sp!, {r3, pc}
}

asm void NNS_FndFreeToExpHeap(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    sub r5, r1, #0x10
    add r4, sp, #0
    mov r6, r0
    mov r0, r4
    mov r1, r5
    bl GetRegionOfMBlock
    mov r1, r5
    add r0, r6, #0x2c
    bl RemoveMBlock
    mov r1, r4
    add r0, r6, #0x24
    bl RecycleRegion
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNS_FndGetTotalFreeSizeForExpHeap(void)
{
    ldr r2, [r0, #0x24]
    mov r0, #0
    cmp r2, #0
    bxeq lr
@L_02032f9c:
    ldr r1, [r2, #4]
    ldr r2, [r2, #0xc]
    add r0, r0, r1
    cmp r2, #0
    bne @L_02032f9c
    bx lr
}

asm void NNS_FndGetAllocatableSizeForExpHeapEx(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r0, r1
    bl func_02017cdc
    ldr lr, [r4, #0x24]
    mov r3, #0
    cmp lr, #0
    sub r12, r3, #1
    beq @L_02033030
    sub r4, r0, #1
    mvn r5, r4
@L_02032fe0:
    add r2, lr, #0x10
    ldr r0, [lr, #4]
    add r1, r4, r2
    and r1, r5, r1
    add r0, r0, r2
    cmp r1, r0
    bhs @L_02033024
    sub r0, r0, r1
    cmp r3, r0
    sub r1, r1, r2
    blo @L_0203301c
    cmp r3, r0
    bne @L_02033024
    cmp r12, r1
    bls @L_02033024
@L_0203301c:
    mov r3, r0
    mov r12, r1
@L_02033024:
    ldr lr, [lr, #0xc]
    cmp lr, #0
    bne @L_02032fe0
@L_02033030:
    mov r0, r3
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02033038(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r3, r1
    mov r4, r0
    str r2, [sp]
    ldr r1, =0x46524d48
    add r2, r4, #0x30
    bl func_02032964
    ldr r3, [r4, #0x18]
    ldr r2, [r4, #0x1c]
    mov r1, #0
    mov r0, r4
    str r3, [r4, #0x24]
    str r2, [r4, #0x28]
    str r1, [r4, #0x2c]
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}
