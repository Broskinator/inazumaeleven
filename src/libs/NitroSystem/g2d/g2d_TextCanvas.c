// (asm for now)

void NNSi_G2dTextCanvasDrawTextRect(void);
void func_020275fc(void);
void func_020277c0(void);
void func_02027898(void);
void NNSi_G2dSplitCharUTF16(void);

void func_02025e38(void);
void func_020272a8(void);
void func_0200878c(void);
void NNS_G2dFindBinaryBlock(void);

asm void NNSi_G2dTextCanvasDrawTextRect(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    ldr r12, [sp, #0x30]
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    tst r12, #0x100
    beq @L_02027570
    ldr r0, [r7, #4]
    ldr r1, [r7, #0xc]
    ldr r2, [sp, #0x34]
    bl func_02025e38
    ldrsb r2, [sp, #0x39]
    ldr r3, [sp, #0x28]
    ldrsb r1, [sp, #0x38]
    sub r3, r3, r0
    rsb r0, r2, #0
    mla r6, r3, r0, r6
    mla r5, r3, r1, r5
    b @L_020275b8
@L_02027570:
    tst r12, #0x80
    beq @L_020275b8
    ldr r0, [r7, #4]
    ldr r1, [r7, #0xc]
    ldr r2, [sp, #0x34]
    bl func_02025e38
    ldr r1, [sp, #0x28]
    add r0, r0, #1
    ldrsb r3, [sp, #0x39]
    add r12, r1, #1
    add r1, r0, r0, lsr #31
    ldrsb r2, [sp, #0x38]
    add r0, r12, r12, lsr #31
    mov r1, r1, asr #1
    rsb r1, r1, r0, asr #1
    rsb r0, r3, #0
    mla r6, r1, r0, r6
    mla r5, r1, r2, r5
@L_020275b8:
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0x30]
    str r1, [sp]
    ldr r1, [sp, #0x34]
    str r0, [sp, #4]
    ldrb r0, [sp, #0x38]
    str r1, [sp, #8]
    ldrb r12, [sp, #0x39]
    strb r0, [sp, #0xc]
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    strb r12, [sp, #0xd]
    bl func_020272a8
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_020275fc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    movs r7, r0
    mov r6, r1
    mov r5, r4
    beq @L_02027678
    cmp r7, #0
    beq @L_02027630
    ldr r1, [r7]
    ldr r0, =0x4e465452
    cmp r1, r0
    moveq r0, #1
    beq @L_02027634
@L_02027630:
    mov r0, #0
@L_02027634:
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0202767c
    cmp r7, #0
    beq @L_02027664
    ldrh r1, [r7, #6]
    ldr r0, =0x102
    cmp r1, r0
    movhs r0, #1
    bhs @L_02027668
@L_02027664:
    mov r0, #0
@L_02027668:
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    b @L_0202767c
@L_02027678:
    mov r0, r5
@L_0202767c:
    cmp r0, #0
    bne @L_02027770
    cmp r7, #0
    beq @L_020276ec
    beq @L_020276a4
    ldr r1, [r7]
    ldr r0, =0x4e465452
    cmp r1, r0
    moveq r0, #1
    beq @L_020276a8
@L_020276a4:
    mov r0, #0
@L_020276a8:
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_020276f0
    cmp r7, #0
    beq @L_020276d8
    ldrh r1, [r7, #6]
    ldr r0, =0x101
    cmp r1, r0
    movhs r0, #1
    bhs @L_020276dc
@L_020276d8:
    mov r0, #0
@L_020276dc:
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    b @L_020276f0
@L_020276ec:
    mov r0, #0
@L_020276f0:
    cmp r0, #0
    bne @L_02027770
    cmp r7, #0
    beq @L_0202775c
    beq @L_02027718
    ldr r1, [r7]
    ldr r0, =0x4e465452
    cmp r1, r0
    moveq r0, #1
    beq @L_0202771c
@L_02027718:
    mov r0, #0
@L_0202771c:
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02027760
    cmp r7, #0
    beq @L_02027748
    ldrh r0, [r7, #6]
    cmp r0, #0x100
    movhs r0, #1
    bhs @L_0202774c
@L_02027748:
    mov r0, #0
@L_0202774c:
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    b @L_02027760
@L_0202775c:
    mov r0, #0
@L_02027760:
    cmp r0, #0
    bne @L_0202776c
    bl func_0200878c
@L_0202776c:
    mov r5, #1
@L_02027770:
    mov r0, r7
    bl func_020277c0
    ldr r1, =0x46494e46
    mov r0, r7
    bl NNS_G2dFindBinaryBlock
    cmp r0, #0
    moveq r0, #0
    streq r0, [r6]
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r0, #8
    str r0, [r6]
    cmp r5, #0
    ldrne r0, [r0, #8]
    strneb r4, [r0, #7]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_020277c0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldrh r1, [r0, #0xc]
    ldrh r3, [r0, #0xe]
    mov r2, #0
    add r1, r0, r1
    cmp r3, #0
    ldmleia sp!, {r4, r5, r6, pc}
    ldr r3, =0x46494e46
    ldr r12, =0x43574448
    ldr r4, =0x434d4150
    ldr lr, =0x43474c50
@L_020277ec:
    ldr r5, [r1]
    cmp r5, r4
    bhi @L_02027800
    bhs @L_0202785c
    b @L_0202786c
@L_02027800:
    cmp r5, r12
    bhi @L_02027810
    beq @L_02027848
    b @L_0202786c
@L_02027810:
    cmp r5, r3
    bne @L_0202786c
    ldr r5, [r1, #0x10]
    add r5, r5, r0
    str r5, [r1, #0x10]
    ldr r5, [r1, #0x14]
    cmp r5, #0
    addne r5, r5, r0
    strne r5, [r1, #0x14]
    ldr r5, [r1, #0x18]
    cmp r5, #0
    addne r5, r5, r0
    strne r5, [r1, #0x18]
    b @L_0202786c
@L_02027848:
    ldr r5, [r1, #0xc]
    cmp r5, #0
    addne r5, r5, r0
    strne r5, [r1, #0xc]
    b @L_0202786c
@L_0202785c:
    ldr r5, [r1, #0x10]
    cmp r5, #0
    addne r5, r5, r0
    strne r5, [r1, #0x10]
@L_0202786c:
    ldrh r5, [r0, #0xe]
    ldr r6, [r1, #4]
    add r2, r2, #1
    cmp r2, r5
    add r1, r1, r6
    blt @L_020277ec
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02027898(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldrsb r3, [r0, #4]
    ldrb r4, [r0, #5]
    mov r5, r1
    cmp r3, r5
    subge r1, r3, r5
    movge r2, r4, lsr r1
    strgeb r1, [r0, #4]
    bge @L_020278e8
    ldr r2, [r0]
    sub r6, r5, r3
    add r1, r2, #1
    str r1, [r0]
    ldrb r3, [r2]
    mov r2, #8
    mov r1, r6
    strb r3, [r0, #5]
    strb r2, [r0, #4]
    bl func_02027898
    orr r2, r0, r4, lsl r6
@L_020278e8:
    rsb r0, r5, #8
    mov r1, #0xff
    and r0, r2, r1, asr r0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNSi_G2dSplitCharUTF16(void)
{
    ldr r1, [r0]
    ldrh r2, [r1], #2
    str r1, [r0]
    mov r0, r2
    bx lr
}
