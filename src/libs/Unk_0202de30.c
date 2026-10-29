// (asm for now)

void func_0202dc30(void);
void GetTexSRTAnmSinCosVal_(void);
extern char data_020ab830[];
void MIi_CpuClear16(void);
void func_0202bfb8(void);
extern char data_020ab834[];
void func_0202bdfc(void);
void func_02001d60(void);
void NNSi_G3dGetTexPatAnmFV(void);
void func_0202c1c8(void);
void func_0202c1f0(void);
extern char data_020ab828[];
void func_0202b608(void);
extern char data_020bf67c[];
extern char data_020c048c[];
extern char data_020c0490[];
extern char data_020c0494[];
void FX_DivAsync(void);
void func_02001dd8(void);
extern char data_020aba40[];
extern char data_020c0480[];
void MIi_CpuCopy32(void);
extern char data_020c0484[];
extern char data_020c0488[];
extern char data_020aba60[];
extern char data_020aba80[];

asm void func_0202de30(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    mov r6, r2
    mov r5, r3
    adds r3, r7, #8
    beq @L_0202de6c
    ldrb r0, [r7, #9]
    cmp r1, r0
    bhs @L_0202de6c
    ldrh r2, [r7, #0xe]
    ldrh r0, [r3, r2]
    add r2, r3, r2
    add r2, r2, #4
    mla r4, r0, r1, r2
    b @L_0202de70
@L_0202de6c:
    mov r4, #0
@L_0202de70:
    ldr r1, [r4, #0x18]
    ldr r2, [r4, #0x1c]
    mov r0, r7
    mov r3, r6
    ldr r8, [r5]
    bl func_0202dc30
    mov r9, r0
    ldr r1, [r4, #0x20]
    ldr r2, [r4, #0x24]
    mov r0, r7
    mov r3, r6
    bl func_0202dc30
    cmp r9, #0
    cmpeq r0, #0
    strne r0, [r5, #0x28]
    strne r9, [r5, #0x24]
    orreq r8, r8, #4
    ldr r1, [r4, #0x10]
    ldr r2, [r4, #0x14]
    mov r0, r7
    mov r3, r6
    bicne r8, r8, #4
    bl GetTexSRTAnmSinCosVal_
    cmp r0, #0x10000000
    movne r1, r0, lsr #0x10
    orreq r8, r8, #2
    strneh r0, [r5, #0x20]
    strneh r1, [r5, #0x22]
    mov r0, r7
    mov r3, r6
    bicne r8, r8, #2
    ldmia r4, {r1, r2}
    bl func_0202dc30
    mov r9, r0
    ldr r1, [r4, #8]
    ldr r2, [r4, #0xc]
    mov r0, r7
    mov r3, r6
    bl func_0202dc30
    cmp r9, #0x1000
    cmpeq r0, #0x1000
    orreq r8, r8, #1
    bicne r8, r8, #1
    strne r9, [r5, #0x18]
    strne r0, [r5, #0x1c]
    str r8, [r5]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_0202df2c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r0
    cmp r2, #0
    ldrne r0, [r2, #8]
    mov r9, r1
    cmpne r0, #0
    addne r8, r2, r0
    ldr r0, =data_020ab830
    mov r7, #0
    ldr r1, [r0]
    mov r0, r7
    str r1, [r10, #0xc]
    ldrb r2, [r2, #0x18]
    add r1, r10, #0x1a
    moveq r8, #0
    strb r2, [r10, #0x19]
    mov r2, r2, lsl #1
    bl MIi_CpuClear16
    ldrb r0, [r9, #9]
    cmp r0, #0
    ldmlsia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r6, r9, #8
    mov r5, r7
    mvn r4, #0
@L_0202df8c:
    cmp r6, #0
    beq @L_0202dfb8
    ldrb r0, [r9, #9]
    cmp r7, r0
    bhs @L_0202dfb8
    ldrh r0, [r9, #0xe]
    add r1, r6, r0
    ldrh r0, [r1, #2]
    add r0, r1, r0
    add r1, r0, r7, lsl #4
    b @L_0202dfbc
@L_0202dfb8:
    mov r1, r5
@L_0202dfbc:
    cmp r8, #0
    moveq r0, r4
    beq @L_0202dfd0
    add r0, r8, #4
    bl func_0202bfb8
@L_0202dfd0:
    cmp r0, #0
    orrge r1, r7, #0x100
    addge r0, r10, r0, lsl #1
    strgeh r1, [r0, #0x1a]
    ldrb r0, [r9, #9]
    add r7, r7, #1
    cmp r7, r0
    blo @L_0202df8c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_0202dff8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r1, #8]
    ldr r12, [r1]
    ldrh r1, [r0, #4]
    cmp r12, r1, lsl #12
    mov r1, r1, lsl #0xc
    subge r12, r1, #1
    bge @L_0202e024
    cmp r12, #0
    movlt r12, #0
@L_0202e024:
    mov r1, r2, lsl #0x10
    mov r3, r4
    mov r1, r1, lsr #0x10
    mov r2, r12, asr #0xc
    bl func_0202de30
    ldr r1, [r4, #0x10]
    ldr r0, [r4]
    bic r1, r1, #0xc0000000
    orr r1, r1, #0x40000000
    orr r0, r0, #8
    str r1, [r4, #0x10]
    str r0, [r4]
    ldmia sp!, {r4, pc}
}

asm void func_0202e058(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r0
    cmp r2, #0
    ldrne r0, [r2, #8]
    mov r9, r1
    cmpne r0, #0
    addne r8, r2, r0
    ldr r0, =data_020ab834
    mov r7, #0
    ldr r1, [r0]
    mov r0, r7
    str r1, [r10, #0xc]
    ldrb r2, [r2, #0x18]
    add r1, r10, #0x1a
    moveq r8, #0
    strb r2, [r10, #0x19]
    str r9, [r10, #8]
    mov r2, r2, lsl #1
    bl MIi_CpuClear16
    ldrb r0, [r9, #0xd]
    cmp r0, #0
    ldmlsia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r6, r9, #0xc
    mov r5, r7
    mvn r4, #0
@L_0202e0bc:
    cmp r6, #0
    beq @L_0202e0e8
    ldrb r0, [r9, #0xd]
    cmp r7, r0
    bhs @L_0202e0e8
    ldrh r0, [r9, #0x12]
    add r1, r6, r0
    ldrh r0, [r1, #2]
    add r0, r1, r0
    add r1, r0, r7, lsl #4
    b @L_0202e0ec
@L_0202e0e8:
    mov r1, r5
@L_0202e0ec:
    cmp r8, #0
    moveq r0, r4
    beq @L_0202e100
    add r0, r8, #4
    bl func_0202bfb8
@L_0202e100:
    cmp r0, #0
    orrge r1, r7, #0x100
    addge r0, r10, r0, lsl #1
    strgeh r1, [r0, #0x1a]
    ldrb r0, [r9, #0xd]
    add r7, r7, #1
    cmp r7, r0
    blo @L_0202e0bc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_0202e128(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    mov r4, r2
    moveq r0, #0
    beq @L_0202e144
    add r0, r5, #0x3c
    bl func_0202bdfc
@L_0202e144:
    ldr r1, [r0]
    ldr r3, [r4, #0x10]
    and r1, r1, #0x1c000000
    cmp r1, #0x14000000
    ldrne r1, [r5, #8]
    ldr r2, =0x7ff
    ldreq r1, [r5, #0x18]
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bic r5, r1, #0xe0000000
    ldr r1, =0xc00f0000
    and r3, r3, r1
    str r3, [r4, #0x10]
    ldr r1, [r0]
    add r1, r1, r5
    orr r1, r3, r1
    str r1, [r4, #0x10]
    ldr r1, [r0, #4]
    and r1, r1, r2
    strh r1, [r4, #0x2c]
    ldr r3, [r0, #4]
    and r3, r3, r2, lsl #11
    mov r3, r3, lsr #0xb
    strh r3, [r4, #0x2e]
    ldr r0, [r0, #4]
    and r3, r0, r2
    and r0, r0, r2, lsl #11
    cmp r3, r1
    mov r5, r0, lsr #0xb
    moveq r0, #0x1000
    beq @L_0202e1cc
    mov r0, r3, lsl #0xc
    mov r1, r1, lsl #0xc
    bl func_02001d60
@L_0202e1cc:
    ldrh r1, [r4, #0x2e]
    str r0, [r4, #0x30]
    cmp r5, r1
    moveq r0, #0x1000
    beq @L_0202e1ec
    mov r0, r5, lsl #0xc
    mov r1, r1, lsl #0xc
    bl func_02001d60
@L_0202e1ec:
    str r0, [r4, #0x34]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0202e1fc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    ldrneh r0, [r5, #0x34]
    mov r4, r2
    cmpne r0, #0
    moveq r0, #0
    beq @L_0202e220
    add r0, r5, r0
    bl func_0202bdfc
@L_0202e220:
    ldr r1, [r5, #0x2c]
    ldrh r2, [r0, #2]
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bic r1, r1, #0xe0000000
    mov r1, r1, lsl #0x10
    ldrh r0, [r0]
    tst r2, #1
    mov r1, r1, lsr #0x10
    moveq r0, r0, lsl #0xf
    moveq r1, r1, lsl #0xf
    moveq r0, r0, lsr #0x10
    moveq r1, r1, lsr #0x10
    add r0, r0, r1
    str r0, [r4, #0x14]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0202e260(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    ldr r4, [r5, #8]
    ldr r3, [r5]
    ldrh r1, [r4, #4]
    mov r6, r0
    mov r0, r1, lsl #0xc
    cmp r3, r1, lsl #12
    subge r3, r0, #1
    bge @L_0202e290
    cmp r3, #0
    movlt r3, #0
@L_0202e290:
    mov r1, r2, lsl #0x10
    mov r2, r3, lsl #4
    mov r0, r4
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    bl NNSi_G3dGetTexPatAnmFV
    mov r7, r0
    ldrb r1, [r7, #2]
    mov r0, r4
    bl func_0202c1c8
    mov r1, r0
    ldr r0, [r5, #0x14]
    mov r2, r6
    bl func_0202e128
    ldrb r1, [r7, #3]
    cmp r1, #0xff
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r4
    bl func_0202c1f0
    mov r1, r0
    ldr r0, [r5, #0x14]
    mov r2, r6
    bl func_0202e1fc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202e2f0(void)
{
    ldr r3, =data_020ab828
    ldrb r2, [r2, #0x17]
    ldr r3, [r3]
    mov r12, #0
    str r3, [r0, #0xc]
    strb r2, [r0, #0x19]
    str r1, [r0, #8]
    tst r2, #0xff
    bxeq lr
@L_0202e314:
    orr r2, r12, #0x100
    add r1, r0, r12, lsl #1
    strh r2, [r1, #0x1a]
    ldrb r1, [r0, #0x19]
    add r12, r12, #1
    cmp r12, r1
    blo @L_0202e314
    bx lr
}

asm void func_0202e338(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r1, #8]
    ldr r3, [r1]
    ldrh r1, [lr, #4]
    cmp r3, r1, lsl #12
    mov r1, r1, lsl #0xc
    subge r3, r1, #1
    bge @L_0202e360
    cmp r3, #0
    movlt r3, #0
@L_0202e360:
    ldrh r1, [lr, #6]
    mov r12, r3, asr #0xc
    mov r3, #1
    mla r2, r12, r1, r2
    mov r1, r2, lsr #5
    add r1, lr, r1, lsl #2
    ldr r1, [r1, #0xc]
    and r2, r2, #0x1f
    and r1, r1, r3, lsl r2
    str r1, [r0]
    ldmia sp!, {r3, pc}
}

asm void func_0202e38c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4]
    tst r0, #4
    bne @L_0202e3c8
    tst r0, #2
    bne @L_0202e3b8
    add r1, r4, #0x28
    mov r0, #0x19
    mov r2, #0xc
    b @L_0202e3dc
@L_0202e3b8:
    add r1, r4, #0x4c
    mov r0, #0x1c
    mov r2, #3
    b @L_0202e3dc
@L_0202e3c8:
    tst r0, #2
    bne @L_0202e3e0
    add r1, r4, #0x28
    mov r0, #0x1a
    mov r2, #9
@L_0202e3dc:
    bl func_0202b608
@L_0202e3e0:
    ldr r0, [r4]
    tst r0, #1
    ldmneia sp!, {r4, pc}
    add r1, r4, #4
    mov r0, #0x1b
    mov r2, #3
    bl func_0202b608
    ldmia sp!, {r4, pc}
}

asm void func_0202e400(void)
{
    tst r3, #4
    ldrne r1, [r0]
    orrne r1, r1, #1
    strne r1, [r0]
    bne @L_0202e42c
    ldr r3, [r1]
    ldr r2, [r1, #4]
    ldr r1, [r1, #8]
    str r3, [r0, #4]
    str r2, [r0, #8]
    str r1, [r0, #0xc]
@L_0202e42c:
    ldr r1, [r0]
    orr r1, r1, #0x18
    str r1, [r0]
    bx lr
}

asm void func_0202e43c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5]
    mov r4, #0
    tst r0, #4
    moveq r4, #1
    tst r0, #0x20
    beq @L_0202e490
    tst r0, #8
    bne @L_0202e490
    cmp r4, #0
    beq @L_0202e480
    add r1, r5, #0x4c
    mov r0, #0x1c
    mov r2, #3
    bl func_0202b608
    mov r4, #0
@L_0202e480:
    add r1, r5, #0x10
    mov r0, #0x1b
    mov r2, #3
    bl func_0202b608
@L_0202e490:
    ldr r0, [r5]
    tst r0, #2
    bne @L_0202e4c0
    cmp r4, #0
    add r1, r5, #0x28
    beq @L_0202e4b4
    mov r0, #0x19
    mov r2, #0xc
    b @L_0202e4d4
@L_0202e4b4:
    mov r0, #0x1a
    mov r2, #9
    b @L_0202e4d4
@L_0202e4c0:
    cmp r4, #0
    beq @L_0202e4d8
    add r1, r5, #0x4c
    mov r0, #0x1c
    mov r2, #3
@L_0202e4d4:
    bl func_0202b608
@L_0202e4d8:
    ldr r0, [r5]
    tst r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    add r1, r5, #4
    mov r0, #0x1b
    mov r2, #3
    bl func_0202b608
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0202e4f8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov lr, r0
    tst r3, #4
    ldrb r12, [r2, #3]
    beq @L_0202e54c
    ldr r0, [lr]
    tst r12, #2
    orr r0, r0, #1
    str r0, [lr]
    beq @L_0202e5c4
    ldr r0, =data_020bf67c
    ldrb r6, [r2, #1]
    ldr r0, [r0]
    mov r1, #1
    add r5, r0, #0xc4
    mov r4, r6, lsr #5
    ldr r3, [r5, r4, lsl #2]
    and r0, r6, #0x1f
    orr r0, r3, r1, lsl r0
    str r0, [r5, r4, lsl #2]
    b @L_0202e5c4
@L_0202e54c:
    ldr r4, [r1]
    ldr r3, [r1, #4]
    ldr r0, [r1, #8]
    str r4, [lr, #4]
    str r3, [lr, #8]
    str r0, [lr, #0xc]
    tst r12, #2
    beq @L_0202e5c4
    ldr r0, =data_020bf67c
    ldrb r7, [r2, #1]
    ldr r0, [r0]
    mov r4, #0x18
    add r3, r0, #0xc4
    mov r0, r7, lsr #5
    and r5, r7, #0x1f
    mov r6, #1
    mvn r5, r6, lsl r5
    ldr r6, [r3, r0, lsl #2]
    smulbb r7, r7, r4
    and r4, r6, r5
    ldr r6, [r1, #0xc]
    ldr r5, =data_020c048c
    str r4, [r3, r0, lsl #2]
    ldr r4, [r1, #0x10]
    ldr r3, =data_020c0490
    str r6, [r5, r7]
    ldr r1, [r1, #0x14]
    ldr r0, =data_020c0494
    str r4, [r3, r7]
    str r1, [r0, r7]
@L_0202e5c4:
    tst r12, #1
    beq @L_0202e620
    ldr r0, [lr]
    ldrb r4, [r2, #2]
    orr r3, r0, #0x20
    ldr r0, =data_020bf67c
    str r3, [lr]
    ldr r1, [r0]
    mov r0, r4, lsr #5
    add r0, r1, r0, lsl #2
    ldr r0, [r0, #0xc4]
    and r1, r4, #0x1f
    mov r2, #1
    tst r0, r2, lsl r1
    orrne r0, r3, #8
    strne r0, [lr]
    bne @L_0202e620
    ldr r1, =data_020c048c
    mov r0, #0x18
    mla r0, r4, r0, r1
    add r3, lr, #0x10
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
@L_0202e620:
    ldr r0, [lr]
    orr r0, r0, #0x10
    str r0, [lr]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202e640(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    ldrh r2, [r9, #0x2c]
    ldrh r1, [r9, #0x2e]
    mov r10, r0
    mov r8, r2, lsl #0xc
    mov r11, r1, lsl #0xc
    mov r0, r11
    mov r1, r8
    bl FX_DivAsync
    ldrsh r0, [r9, #0x20]
    ldr r3, [r9, #0x18]
    ldrsh r5, [r9, #0x22]
    ldr r4, [r9, #0x1c]
    smull r2, r1, r3, r0
    mov r7, r2, lsr #0xc
    orr r7, r7, r1, lsl #20
    smull r2, r1, r3, r5
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #20
    smull r3, r2, r4, r0
    smull r1, r0, r4, r5
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #20
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #20
    str r6, [r10]
    str r4, [r10, #0x14]
    bl func_02001dd8
    mov r1, r11
    rsb r2, r5, #0
    mul r0, r2, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #4]
    mov r0, r8
    bl FX_DivAsync
    sub r0, r5, r4
    add r1, r7, r6
    ldr r5, [r9, #0x18]
    ldrh r4, [r9, #0x2c]
    sub r2, r5, r1
    ldr r1, [r9, #0x24]
    mul r3, r4, r2
    smull r2, r1, r5, r1
    mov r2, r2, lsr #8
    orr r2, r2, r1, lsl #24
    mul r1, r4, r2
    rsb r1, r1, r3, lsl #3
    str r1, [r10, #0x30]
    ldr r4, [r9, #0x1c]
    ldrh r3, [r9, #0x2e]
    sub r0, r0, r4
    add r0, r0, #0x2000
    mul r2, r3, r0
    ldr r0, [r9, #0x28]
    smull r1, r0, r4, r0
    mov r1, r1, lsr #8
    orr r1, r1, r0, lsl #24
    mul r0, r3, r1
    add r0, r0, r2, lsl #3
    str r0, [r10, #0x34]
    bl func_02001dd8
    mul r0, r7, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202e748(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    ldrh r2, [r5, #0x2c]
    ldrh r1, [r5, #0x2e]
    mov r6, r0
    mov r4, r2, lsl #0xc
    mov r7, r1, lsl #0xc
    mov r0, r7
    mov r1, r4
    bl FX_DivAsync
    ldrsh r0, [r5, #0x22]
    str r0, [r6]
    str r0, [r6, #0x14]
    bl func_02001dd8
    ldrsh r2, [r5, #0x20]
    mov r1, r7
    rsb r2, r2, #0
    mul r0, r2, r0
    mov r2, r0, asr #0xc
    mov r0, r4
    str r2, [r6, #4]
    bl FX_DivAsync
    ldrsh r2, [r5, #0x20]
    ldrsh r1, [r5, #0x22]
    ldrh r12, [r5, #0x2c]
    ldr r0, [r5, #0x24]
    add r3, r2, r1
    sub r1, r2, r1
    rsb r2, r3, #0
    add r4, r2, #0x1000
    mul r2, r0, r12
    ldrh r3, [r5, #0x2e]
    mul r4, r12, r4
    ldr r0, [r5, #0x28]
    mov r2, r2, lsl #4
    rsb r4, r2, r4, lsl #3
    add r2, r1, #0x1000
    mul r1, r0, r3
    mul r2, r3, r2
    mov r0, r1, lsl #4
    add r0, r0, r2, lsl #3
    str r4, [r6, #0x30]
    str r0, [r6, #0x34]
    bl func_02001dd8
    ldrsh r1, [r5, #0x20]
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r6, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202e80c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r3, [r1, #0x1c]
    ldr r12, [r1, #0x18]
    ldr r4, [r1, #0x24]
    ldr r2, [r1, #0x28]
    smull r7, r6, r12, r4
    smull r5, r4, r3, r2
    mov r2, #0
    mov lr, r3, lsl #1
    mov r7, r7, lsr #8
    rsb lr, lr, #0
    mov r5, r5, lsr #8
    orr r7, r7, r6, lsl #24
    ldrh r6, [r1, #0x2e]
    add lr, lr, #0x2000
    orr r5, r5, r4, lsl #24
    ldrh r8, [r1, #0x2c]
    rsb r7, r7, #0
    mul r4, r6, lr
    mul r1, r6, r5
    mul r5, r8, r7
    add r1, r1, r4, lsl #3
    str r12, [r0]
    str r3, [r0, #0x14]
    str r2, [r0, #4]
    str r5, [r0, #0x30]
    str r1, [r0, #0x34]
    str r2, [r0, #0x10]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_0202e880(void)
{
    stmdb sp!, {r3, lr}
    ldrh r3, [r1, #0x2c]
    ldr r12, [r1, #0x24]
    ldrh r2, [r1, #0x2e]
    ldr r1, [r1, #0x28]
    mul r3, r12, r3
    mov lr, #0x1000
    mov r12, #0
    mul r2, r1, r2
    rsb r1, r3, #0
    mov r3, r1, lsl #4
    mov r1, r2, lsl #4
    str lr, [r0]
    str lr, [r0, #0x14]
    str r12, [r0, #4]
    str r3, [r0, #0x30]
    str r1, [r0, #0x34]
    str r12, [r0, #0x10]
    ldmia sp!, {r3, pc}
}

asm void func_0202e8cc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    ldrh r2, [r9, #0x2c]
    ldrh r1, [r9, #0x2e]
    mov r10, r0
    mov r8, r2, lsl #0xc
    mov r11, r1, lsl #0xc
    mov r0, r11
    mov r1, r8
    bl FX_DivAsync
    ldrsh r0, [r9, #0x20]
    ldr r3, [r9, #0x18]
    ldrsh r5, [r9, #0x22]
    ldr r4, [r9, #0x1c]
    smull r2, r1, r3, r0
    mov r7, r2, lsr #0xc
    orr r7, r7, r1, lsl #20
    smull r2, r1, r3, r5
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #20
    smull r3, r2, r4, r0
    smull r1, r0, r4, r5
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #20
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #20
    str r6, [r10]
    str r4, [r10, #0x14]
    bl func_02001dd8
    mov r1, r11
    rsb r2, r5, #0
    mul r0, r2, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #4]
    mov r0, r8
    bl FX_DivAsync
    sub r1, r5, r4
    add r0, r7, r6
    ldrh r4, [r9, #0x2c]
    ldr r3, [r9, #0x18]
    ldrh r2, [r9, #0x2e]
    sub r0, r3, r0
    mul r0, r4, r0
    mov r0, r0, lsl #3
    str r0, [r10, #0x30]
    ldr r0, [r9, #0x1c]
    sub r0, r1, r0
    add r0, r0, #0x2000
    mul r0, r2, r0
    mov r0, r0, lsl #3
    str r0, [r10, #0x34]
    bl func_02001dd8
    mul r0, r7, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202e9ac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    ldrh r2, [r5, #0x2c]
    ldrh r1, [r5, #0x2e]
    mov r6, r0
    mov r4, r2, lsl #0xc
    mov r7, r1, lsl #0xc
    mov r0, r7
    mov r1, r4
    bl FX_DivAsync
    ldrsh r0, [r5, #0x22]
    str r0, [r6]
    str r0, [r6, #0x14]
    bl func_02001dd8
    ldrsh r2, [r5, #0x20]
    mov r1, r7
    rsb r2, r2, #0
    mul r0, r2, r0
    mov r2, r0, asr #0xc
    mov r0, r4
    str r2, [r6, #4]
    bl FX_DivAsync
    ldrsh r2, [r5, #0x20]
    ldrsh r0, [r5, #0x22]
    ldrh r4, [r5, #0x2c]
    ldrh r1, [r5, #0x2e]
    add r3, r2, r0
    sub r0, r2, r0
    rsb r2, r3, #0
    add r2, r2, #0x1000
    add r0, r0, #0x1000
    mul r2, r4, r2
    mul r0, r1, r0
    mov r1, r2, lsl #3
    mov r0, r0, lsl #3
    str r1, [r6, #0x30]
    str r0, [r6, #0x34]
    bl func_02001dd8
    ldrsh r1, [r5, #0x20]
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r6, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202ea58(void)
{
    stmdb sp!, {r4, lr}
    ldr lr, [r1, #0x1c]
    ldrh r3, [r1, #0x2e]
    mov r2, lr, lsl #1
    rsb r2, r2, #0
    add r2, r2, #0x2000
    ldr r4, [r1, #0x18]
    mul r1, r3, r2
    mov r12, #0
    str lr, [r0, #0x14]
    stmia r0, {r4, r12}
    mov r1, r1, lsl #3
    str r12, [r0, #0x30]
    str r1, [r0, #0x34]
    str r12, [r0, #0x10]
    ldmia sp!, {r4, pc}
}

asm void func_0202ea98(void)
{
    mov r1, #0
    mov r2, #0x1000
    str r2, [r0]
    str r1, [r0, #4]
    str r1, [r0, #0x10]
    str r2, [r0, #0x14]
    str r1, [r0, #0x30]
    str r1, [r0, #0x34]
    bx lr
}

asm void func_0202eabc(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x4c
    mov r4, r0
    ldr r0, [r4]
    mov r5, #0
    tst r0, #8
    ldrne r0, =0x101610
    ldr r1, [r4]
    strne r0, [sp]
    ldreq r0, =0x101810
    and r1, r1, #7
    streq r0, [sp]
    ldr r0, =data_020aba40
    mov lr, #3
    ldr r2, [r0, r1, lsl #2]
    mov r12, #2
    mov r3, #0x1000
    add r0, sp, #8
    mov r1, r4
    str lr, [sp, #4]
    str r12, [sp, #0x48]
    str r5, [sp, #0x40]
    str r5, [sp, #0x34]
    str r5, [sp, #0x30]
    str r5, [sp, #0x2c]
    str r5, [sp, #0x28]
    str r5, [sp, #0x24]
    str r5, [sp, #0x20]
    str r5, [sp, #0x14]
    str r5, [sp, #0x10]
    str r3, [sp, #0x44]
    blx r2
    ldr r5, [r4, #0x30]
    cmp r5, #0x1000
    beq @L_0202eb84
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x38]
    smull lr, r12, r5, r2
    smull r3, r2, r5, r1
    smull r1, r0, r5, r0
    mov lr, lr, lsr #0xc
    mov r3, r3, lsr #0xc
    mov r1, r1, lsr #0xc
    orr lr, lr, r12, lsl #20
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    str lr, [sp, #8]
    str r3, [sp, #0xc]
    str r1, [sp, #0x38]
@L_0202eb84:
    ldr lr, [r4, #0x34]
    cmp lr, #0x1000
    beq @L_0202ebcc
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x3c]
    smull r12, r4, lr, r2
    smull r3, r2, lr, r1
    smull r1, r0, lr, r0
    mov r12, r12, lsr #0xc
    mov r3, r3, lsr #0xc
    mov r1, r1, lsr #0xc
    orr r12, r12, r4, lsl #20
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    str r12, [sp, #0x18]
    str r3, [sp, #0x1c]
    str r1, [sp, #0x3c]
@L_0202ebcc:
    add r1, sp, #0
    ldr r0, [sp]
    add r1, r1, #4
    mov r2, #0x12
    bl func_0202b608
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, pc}
}

asm void func_0202ebf4(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r6, r0
    ldr r0, [r6]
    mov r4, #0
    ands r5, r0, #0x18
    bne @L_0202ec20
    add r1, r6, #0x1c
    mov r0, #0x1b
    mov r2, #3
    bl func_0202b608
@L_0202ec20:
    ldr r0, [r6]
    tst r0, #4
    bne @L_0202ec90
    cmp r5, #0
    movne r4, #1
    bne @L_0202ec90
    ldr r3, [r6, #0x4c]
    ldr r2, [r6, #0x10]
    ldr r1, [r6, #0x50]
    smull r12, lr, r3, r2
    ldr r0, [r6, #0x14]
    mov r12, r12, lsr #0xc
    smull r2, r0, r1, r0
    mov r3, r2, lsr #0xc
    orr r3, r3, r0, lsl #20
    orr r12, r12, lr, lsl #20
    ldr r2, [r6, #0x54]
    ldr r0, [r6, #0x18]
    add r1, sp, #0
    smull lr, r0, r2, r0
    mov lr, lr, lsr #0xc
    orr lr, lr, r0, lsl #20
    mov r0, #0x1c
    mov r2, #3
    str r12, [sp]
    str r3, [sp, #4]
    str lr, [sp, #8]
    bl func_0202b608
@L_0202ec90:
    ldr r0, [r6]
    tst r0, #2
    bne @L_0202ecc0
    cmp r4, #0
    add r1, r6, #0x28
    beq @L_0202ecb4
    mov r0, #0x19
    mov r2, #0xc
    b @L_0202ecd4
@L_0202ecb4:
    mov r0, #0x1a
    mov r2, #9
    b @L_0202ecd4
@L_0202ecc0:
    cmp r4, #0
    beq @L_0202ecd8
    add r1, r6, #0x4c
    mov r0, #0x1c
    mov r2, #3
@L_0202ecd4:
    bl func_0202b608
@L_0202ecd8:
    cmp r5, #0
    bne @L_0202ecf0
    add r1, r6, #0x10
    mov r0, #0x1b
    mov r2, #3
    bl func_0202b608
@L_0202ecf0:
    ldr r0, [r6]
    tst r0, #1
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, pc}
    add r1, r6, #4
    mov r0, #0x1b
    mov r2, #3
    bl func_0202b608
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_0202ed18(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r5, r0
    tst r3, #4
    ldrb r4, [r2, #1]
    ldrb r0, [r2, #2]
    beq @L_0202edb8
    ldr r2, [r5]
    ldr r1, =data_020bf67c
    orr r2, r2, #1
    str r2, [r5]
    ldr r3, [r1]
    mov r1, r0, lsr #5
    add r1, r3, r1, lsl #2
    ldr r1, [r1, #0xc4]
    and r2, r0, #0x1f
    mov r6, #1
    tst r1, r6, lsl r2
    beq @L_0202ed88
    add r3, r3, #0xc4
    mov r2, r4, lsr #5
    ldr r1, [r3, r2, lsl #2]
    and r0, r4, #0x1f
    orr r0, r1, r6, lsl r0
    str r0, [r3, r2, lsl #2]
    ldr r0, [r5]
    orr r0, r0, #0x18
    str r0, [r5]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202ed88:
    mov r6, #0x18
    ldr r8, =data_020c0480
    mul r7, r0, r6
    mla r1, r4, r6, r8
    mov r2, r6
    add r0, r8, r7
    bl MIi_CpuCopy32
    mov r2, r6
    add r0, r8, r7
    add r1, r5, #0x10
    bl MIi_CpuCopy32
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202edb8:
    ldr r10, [r1]
    ldr r9, [r1, #4]
    ldr r8, [r1, #8]
    ldr r6, =data_020bf67c
    str r10, [r5, #4]
    str r9, [r5, #8]
    str r8, [r5, #0xc]
    ldr r3, [r6]
    mov r2, r0, lsr #5
    add r2, r3, r2, lsl #2
    ldr r7, [r2, #0xc4]
    and r11, r0, #0x1f
    mov r2, #1
    tst r7, r2, lsl r11
    mov r2, #0x18
    beq @L_0202ee3c
    ldr r3, =data_020c0480
    mov r0, r1
    mla r1, r4, r2, r3
    bl MIi_CpuCopy32
    ldr r0, [r6]
    and r1, r4, #0x1f
    add r3, r0, #0xc4
    mov r0, #1
    mov r2, r4, lsr #5
    mvn r0, r0, lsl r1
    ldr r1, [r3, r2, lsl #2]
    and r0, r1, r0
    str r0, [r3, r2, lsl #2]
    ldr r0, [r5]
    orr r0, r0, #0x18
    str r0, [r5]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202ee3c:
    mul r12, r0, r2
    add r7, r3, #0xc4
    mov r6, r4, lsr #5
    and r0, r4, #0x1f
    mov r3, #1
    mvn r0, r3, lsl r0
    ldr lr, [r7, r6, lsl #2]
    ldr r11, =data_020c0480
    and r0, lr, r0
    str r0, [r7, r6, lsl #2]
    ldr r0, [r11, r12]
    mul r3, r4, r2
    smull r4, r0, r10, r0
    mov r4, r4, lsr #0xc
    orr r4, r4, r0, lsl #20
    str r4, [r11, r3]
    ldr r6, =data_020c0484
    ldr r4, =data_020c0488
    ldr r0, [r6, r12]
    smull r7, r0, r9, r0
    mov r7, r7, lsr #0xc
    orr r7, r7, r0, lsl #20
    str r7, [r6, r3]
    ldr r0, [r4, r12]
    ldr r6, =data_020c048c
    smull r7, r0, r8, r0
    mov r7, r7, lsr #0xc
    orr r7, r7, r0, lsl #20
    str r7, [r4, r3]
    ldr r7, [r1, #0xc]
    ldr r0, [r6, r12]
    ldr r4, =data_020c0490
    smull r8, r0, r7, r0
    mov r7, r8, lsr #0xc
    orr r7, r7, r0, lsl #20
    str r7, [r6, r3]
    ldr r6, [r1, #0x10]
    ldr r0, [r4, r12]
    ldr r7, [r1, #0x14]
    smull r1, r0, r6, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    str r1, [r4, r3]
    ldr r6, =data_020c0494
    add r1, r5, #0x10
    ldr r4, [r6, r12]
    add r0, r11, r12
    smull r5, r4, r7, r4
    mov r5, r5, lsr #0xc
    orr r5, r5, r4, lsl #20
    str r5, [r6, r3]
    bl MIi_CpuCopy32
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202ef2c(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x3c
    ldr r1, [r0]
    mov r2, #0
    tst r1, #8
    ldrne r1, =0x101710
    mov r4, #3
    strne r1, [sp]
    ldreq r1, =0x101910
    mov r3, #2
    streq r1, [sp]
    ldr r1, [r0]
    str r4, [sp, #4]
    str r3, [sp, #0x38]
    str r2, [sp, #0x34]
    str r2, [sp, #0x28]
    str r2, [sp, #0x24]
    str r2, [sp, #0x20]
    str r2, [sp, #0x1c]
    str r2, [sp, #0x14]
    str r2, [sp, #0x10]
    str r2, [sp, #0xc]
    tst r1, #4
    beq @L_0202efb8
    tst r1, #1
    movne r1, #0x1000
    str r2, [sp, #0x2c]
    str r2, [sp, #0x30]
    strne r1, [sp, #8]
    strne r1, [sp, #0x18]
    ldreq r2, [r0, #0x18]
    ldreq r1, [r0, #0x1c]
    streq r2, [sp, #8]
    streq r1, [sp, #0x18]
    b @L_0202f050
@L_0202efb8:
    tst r1, #1
    beq @L_0202f000
    ldr r2, [r0, #0x24]
    ldr r1, [r0, #0x28]
    mov r2, r2, lsl #4
    mov r1, r1, lsl #4
    ldrh r4, [r0, #0x2c]
    rsb r5, r2, #0
    ldrh r2, [r0, #0x2e]
    rsb r3, r1, #0
    mul r4, r5, r4
    mov r1, #0x1000
    mul r2, r3, r2
    str r4, [sp, #0x2c]
    str r2, [sp, #0x30]
    str r1, [sp, #8]
    str r1, [sp, #0x18]
    b @L_0202f050
@L_0202f000:
    ldr lr, [r0, #0x18]
    ldr r3, [r0, #0x24]
    ldr r2, [r0, #0x1c]
    ldr r1, [r0, #0x28]
    smull r4, r12, lr, r3
    smull r3, r1, r2, r1
    mov r4, r4, lsr #8
    mov r3, r3, lsr #8
    orr r4, r4, r12, lsl #24
    orr r3, r3, r1, lsl #24
    ldrh r5, [r0, #0x2c]
    rsb r4, r4, #0
    ldrh r12, [r0, #0x2e]
    rsb r1, r3, #0
    mul r3, r5, r4
    mul r1, r12, r1
    str r3, [sp, #0x2c]
    str r1, [sp, #0x30]
    str lr, [sp, #8]
    str r2, [sp, #0x18]
@L_0202f050:
    ldr lr, [r0, #0x30]
    cmp lr, #0x1000
    beq @L_0202f084
    ldr r2, [sp, #8]
    ldr r1, [sp, #0x2c]
    smull r12, r3, lr, r2
    smull r2, r1, lr, r1
    mov r12, r12, lsr #0xc
    mov r2, r2, lsr #0xc
    orr r12, r12, r3, lsl #20
    orr r2, r2, r1, lsl #20
    str r12, [sp, #8]
    str r2, [sp, #0x2c]
@L_0202f084:
    ldr r12, [r0, #0x34]
    cmp r12, #0x1000
    beq @L_0202f0b8
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x30]
    smull r3, r2, r12, r1
    smull r1, r0, r12, r0
    mov r3, r3, lsr #0xc
    mov r1, r1, lsr #0xc
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    str r3, [sp, #0x18]
    str r1, [sp, #0x30]
@L_0202f0b8:
    add r1, sp, #0
    ldr r0, [sp]
    add r1, r1, #4
    mov r2, #0xe
    bl func_0202b608
    add sp, sp, #0x3c
    ldmia sp!, {r4, r5, pc}
}

asm void func_0202f0dc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    ldrh r2, [r9, #0x2c]
    ldrh r1, [r9, #0x2e]
    mov r10, r0
    mov r8, r2, lsl #0xc
    mov r11, r1, lsl #0xc
    mov r0, r11
    mov r1, r8
    bl FX_DivAsync
    ldrsh r0, [r9, #0x22]
    ldr r3, [r9, #0x18]
    ldrsh r5, [r9, #0x20]
    ldr r4, [r9, #0x1c]
    smull r2, r1, r3, r0
    mov r7, r2, lsr #0xc
    orr r7, r7, r1, lsl #20
    smull r2, r1, r3, r5
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #20
    smull r3, r2, r4, r0
    smull r1, r0, r4, r5
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #20
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #20
    str r7, [r10]
    str r5, [r10, #0x14]
    bl func_02001dd8
    mov r1, r11
    mul r0, r4, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #4]
    mov r0, r8
    bl FX_DivAsync
    ldrh r1, [r9, #0x2c]
    ldrh r0, [r9, #0x2e]
    ldr r3, [r9, #0x28]
    ldr r2, [r9, #0x24]
    mul r8, r3, r0
    mul r9, r2, r1
    rsb r2, r0, #0
    add r8, r8, r2, lsl #11
    smull r3, r2, r5, r8
    smull r8, r5, r6, r8
    rsb r11, r1, #0
    rsb r9, r9, r11, lsl #11
    smlal r3, r2, r4, r9
    smull r9, r4, r7, r9
    subs r7, r9, r8
    sbc r4, r4, r5
    mov r5, r7, lsr #8
    orr r5, r5, r4, lsl #24
    add r1, r5, r1, lsl #15
    str r1, [r10, #0x30]
    mov r1, r3, lsr #8
    orr r1, r1, r2, lsl #24
    add r0, r1, r0, lsl #15
    str r0, [r10, #0x34]
    bl func_02001dd8
    rsb r1, r6, #0
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202f1e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, r1
    ldrh r2, [r5, #0x2c]
    ldrh r1, [r5, #0x2e]
    mov r6, r0
    mov r4, r2, lsl #0xc
    mov r7, r1, lsl #0xc
    mov r0, r7
    mov r1, r4
    bl FX_DivAsync
    ldrsh r0, [r5, #0x22]
    str r0, [r6]
    str r0, [r6, #0x14]
    bl func_02001dd8
    ldrsh r2, [r5, #0x20]
    mov r1, r7
    mul r0, r2, r0
    mov r2, r0, asr #0xc
    mov r0, r4
    str r2, [r6, #4]
    bl FX_DivAsync
    ldrh r1, [r5, #0x2e]
    ldr r0, [r5, #0x28]
    ldrh r2, [r5, #0x2c]
    ldr r3, [r5, #0x24]
    mul r4, r0, r1
    rsb r0, r1, #0
    add r0, r4, r0, lsl #11
    ldrsh lr, [r5, #0x22]
    mul r4, r3, r2
    rsb r3, r2, #0
    rsb r9, r4, r3, lsl #11
    ldrsh r12, [r5, #0x20]
    smull r8, r7, lr, r9
    smull r4, r3, lr, r0
    smlal r4, r3, r12, r9
    smull lr, r0, r12, r0
    subs r8, r8, lr
    sbc r0, r7, r0
    mov r7, r8, lsr #8
    orr r7, r7, r0, lsl #24
    add r0, r7, r2, lsl #15
    str r0, [r6, #0x30]
    mov r0, r4, lsr #8
    orr r0, r0, r3, lsl #24
    add r0, r0, r1, lsl #15
    str r0, [r6, #0x34]
    bl func_02001dd8
    ldrsh r1, [r5, #0x20]
    rsb r1, r1, #0
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r6, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_0202f2b8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldrh r3, [r1, #0x2e]
    ldrh r2, [r1, #0x2c]
    ldr r4, [r1, #0x28]
    ldr r6, [r1, #0x24]
    mul r5, r4, r3
    rsb r4, r3, #0
    ldr lr, [r1, #0x18]
    ldr r12, [r1, #0x1c]
    add r1, r5, r4, lsl #11
    smull r5, r4, r12, r1
    mov r1, #0
    mov r5, r5, lsr #8
    orr r5, r5, r4, lsl #24
    add r3, r5, r3, lsl #15
    mul r4, r6, r2
    rsb r5, r2, #0
    rsb r4, r4, r5, lsl #11
    smull r5, r4, lr, r4
    mov r5, r5, lsr #8
    orr r5, r5, r4, lsl #24
    add r2, r5, r2, lsl #15
    str lr, [r0]
    str r12, [r0, #0x14]
    str r1, [r0, #4]
    str r2, [r0, #0x30]
    str r3, [r0, #0x34]
    str r1, [r0, #0x10]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0202f32c(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r1, #0x24]
    ldrh r3, [r1, #0x2c]
    rsb r12, r2, #0
    ldrh r2, [r1, #0x2e]
    ldr r1, [r1, #0x28]
    mul r3, r12, r3
    mov lr, #0x1000
    mov r12, #0
    mul r2, r1, r2
    mov r3, r3, lsl #4
    mov r1, r2, lsl #4
    str lr, [r0]
    str lr, [r0, #0x14]
    str r12, [r0, #4]
    str r3, [r0, #0x30]
    str r1, [r0, #0x34]
    str r12, [r0, #0x10]
    ldmia sp!, {r3, pc}
}

asm void func_0202f378(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    ldrh r2, [r9, #0x2c]
    ldrh r1, [r9, #0x2e]
    mov r10, r0
    mov r8, r2, lsl #0xc
    mov r11, r1, lsl #0xc
    mov r0, r11
    mov r1, r8
    bl FX_DivAsync
    ldrsh r0, [r9, #0x22]
    ldr r3, [r9, #0x18]
    ldrsh r5, [r9, #0x20]
    ldr r4, [r9, #0x1c]
    smull r2, r1, r3, r0
    mov r7, r2, lsr #0xc
    orr r7, r7, r1, lsl #20
    smull r2, r1, r3, r5
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #20
    smull r3, r2, r4, r0
    smull r1, r0, r4, r5
    mov r5, r3, lsr #0xc
    orr r5, r5, r2, lsl #20
    mov r4, r1, lsr #0xc
    orr r4, r4, r0, lsl #20
    str r7, [r10]
    str r5, [r10, #0x14]
    bl func_02001dd8
    mov r1, r11
    mul r0, r4, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #4]
    mov r0, r8
    bl FX_DivAsync
    ldrh r8, [r9, #0x2c]
    ldrh r2, [r9, #0x2e]
    rsb r0, r8, #0
    mov r11, r0, lsl #0xb
    smull r1, r0, r7, r11
    rsb r3, r2, #0
    mov r3, r3, lsl #0xb
    smull r9, r7, r5, r3
    smlal r9, r7, r4, r11
    mov r4, r9, lsr #8
    orr r4, r4, r7, lsl #24
    add r2, r4, r2, lsl #15
    str r2, [r10, #0x34]
    smull r3, r2, r6, r3
    subs r1, r1, r3
    sbc r0, r0, r2
    mov r1, r1, lsr #8
    orr r1, r1, r0, lsl #24
    add r0, r1, r8, lsl #15
    str r0, [r10, #0x30]
    bl func_02001dd8
    rsb r1, r6, #0
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202f46c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, r1
    ldrh r2, [r5, #0x2c]
    ldrh r1, [r5, #0x2e]
    mov r6, r0
    mov r4, r2, lsl #0xc
    mov r7, r1, lsl #0xc
    mov r0, r7
    mov r1, r4
    bl FX_DivAsync
    ldrsh r0, [r5, #0x22]
    str r0, [r6]
    str r0, [r6, #0x14]
    bl func_02001dd8
    ldrsh r2, [r5, #0x20]
    mov r1, r7
    mul r0, r2, r0
    mov r2, r0, asr #0xc
    mov r0, r4
    str r2, [r6, #4]
    bl FX_DivAsync
    ldrh r0, [r5, #0x2e]
    ldrh r1, [r5, #0x2c]
    ldrsh r12, [r5, #0x22]
    rsb r2, r0, #0
    mov r9, r2, lsl #0xb
    ldrsh r4, [r5, #0x20]
    rsb r2, r1, #0
    mov lr, r2, lsl #0xb
    smull r8, r7, r12, lr
    smull r3, r2, r12, r9
    smlal r3, r2, r4, lr
    smull lr, r12, r4, r9
    subs r8, r8, lr
    sbc r4, r7, r12
    mov r7, r8, lsr #8
    orr r7, r7, r4, lsl #24
    add r1, r7, r1, lsl #15
    str r1, [r6, #0x30]
    mov r1, r3, lsr #8
    orr r1, r1, r2, lsl #24
    add r0, r1, r0, lsl #15
    str r0, [r6, #0x34]
    bl func_02001dd8
    ldrsh r1, [r5, #0x20]
    rsb r1, r1, #0
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r6, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_0202f534(void)
{
    stmdb sp!, {r4, lr}
    ldr lr, [r1, #0x1c]
    ldr r4, [r1, #0x18]
    ldrh r3, [r1, #0x2c]
    rsb r12, r4, #0x1000
    ldrh r1, [r1, #0x2e]
    rsb r2, lr, #0x1000
    mul r3, r12, r3
    mul r1, r2, r1
    mov r12, #0
    str lr, [r0, #0x14]
    stmia r0, {r4, r12}
    mov r2, r3, lsl #3
    mov r1, r1, lsl #3
    str r2, [r0, #0x30]
    str r1, [r0, #0x34]
    str r12, [r0, #0x10]
    ldmia sp!, {r4, pc}
}

asm void func_0202f57c(void)
{
    mov r1, #0
    mov r2, #0x1000
    str r2, [r0]
    str r1, [r0, #4]
    str r1, [r0, #0x10]
    str r2, [r0, #0x14]
    str r1, [r0, #0x30]
    str r1, [r0, #0x34]
    bx lr
}

asm void func_0202f5a0(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x4c
    mov r4, r0
    ldr r0, [r4]
    mov r5, #0
    tst r0, #8
    ldrne r0, =0x101610
    ldr r1, [r4]
    strne r0, [sp]
    ldreq r0, =0x101810
    and r1, r1, #7
    streq r0, [sp]
    ldr r0, =data_020aba60
    mov lr, #3
    ldr r2, [r0, r1, lsl #2]
    mov r12, #2
    mov r3, #0x1000
    add r0, sp, #8
    mov r1, r4
    str lr, [sp, #4]
    str r12, [sp, #0x48]
    str r5, [sp, #0x40]
    str r5, [sp, #0x34]
    str r5, [sp, #0x30]
    str r5, [sp, #0x2c]
    str r5, [sp, #0x28]
    str r5, [sp, #0x24]
    str r5, [sp, #0x20]
    str r5, [sp, #0x14]
    str r5, [sp, #0x10]
    str r3, [sp, #0x44]
    blx r2
    ldr r5, [r4, #0x30]
    cmp r5, #0x1000
    beq @L_0202f668
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x38]
    smull lr, r12, r5, r2
    smull r3, r2, r5, r1
    smull r1, r0, r5, r0
    mov lr, lr, lsr #0xc
    mov r3, r3, lsr #0xc
    mov r1, r1, lsr #0xc
    orr lr, lr, r12, lsl #20
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    str lr, [sp, #8]
    str r3, [sp, #0xc]
    str r1, [sp, #0x38]
@L_0202f668:
    ldr lr, [r4, #0x34]
    cmp lr, #0x1000
    beq @L_0202f6b0
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x3c]
    smull r12, r4, lr, r2
    smull r3, r2, lr, r1
    smull r1, r0, lr, r0
    mov r12, r12, lsr #0xc
    mov r3, r3, lsr #0xc
    mov r1, r1, lsr #0xc
    orr r12, r12, r4, lsl #20
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    str r12, [sp, #0x18]
    str r3, [sp, #0x1c]
    str r1, [sp, #0x3c]
@L_0202f6b0:
    add r1, sp, #0
    ldr r0, [sp]
    add r1, r1, #4
    mov r2, #0x12
    bl func_0202b608
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, pc}
}

asm void func_0202f6d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r6, r1
    ldrh r2, [r6, #0x2c]
    ldrh r1, [r6, #0x2e]
    mov r7, r0
    mov r10, r2, lsl #0xc
    mov r11, r1, lsl #0xc
    mov r0, r11
    mov r1, r10
    bl FX_DivAsync
    ldrsh r3, [r6, #0x22]
    ldr r0, [r6, #0x18]
    ldr r8, [r6, #0x1c]
    smull r2, r1, r0, r3
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    str r2, [r7]
    smull r2, r1, r8, r3
    mov r4, r2, lsr #0xc
    orr r4, r4, r1, lsl #20
    ldrsh r9, [r6, #0x20]
    str r4, [r7, #0x14]
    smull r2, r1, r0, r9
    mov r5, r2, lsr #0xc
    orr r5, r5, r1, lsl #20
    bl func_02001dd8
    smull r2, r1, r8, r9
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    mul r0, r2, r0
    mov r0, r0, asr #0xc
    str r0, [r7, #4]
    mov r0, r10
    mov r1, r11
    bl FX_DivAsync
    ldrh r1, [r6, #0x2c]
    ldrh r10, [r6, #0x2e]
    mov r0, r8
    str r1, [sp, #4]
    mov r1, r0, asr #0x1f
    ldr lr, [r6, #0x28]
    ldr r3, [r6, #0x24]
    str r1, [sp]
    smull r2, r1, r3, r9
    rsb r11, r10, #0
    smull r10, r9, lr, r9
    ldrsh r12, [r6, #0x22]
    ldr r8, [r6, #0x18]
    smlal r10, r9, r3, r12
    smull r12, r3, lr, r12
    subs r2, r2, r12
    sbc r1, r1, r3
    mov r12, r2, lsr #0xc
    mov r3, r10, lsr #0xc
    mov r10, r1, asr #0xc
    orr r12, r12, r1, lsl #20
    ldr r1, [sp]
    mov r2, r9, asr #0xc
    orr r3, r3, r9, lsl #20
    umull lr, r9, r12, r0
    mla r9, r12, r1, r9
    mla r9, r10, r0, r9
    mov r0, lr, lsr #0xc
    orr r0, r0, r9, lsl #20
    add r0, r4, r0
    sub r0, r0, #0x1000
    mul r0, r11, r0
    mov r0, r0, lsl #4
    str r0, [r7, #0x34]
    umull r1, r0, r3, r8
    mov r6, r8, asr #0x1f
    mla r0, r3, r6, r0
    mla r0, r2, r8, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    ldr r0, [sp, #4]
    sub r1, r5, r1
    mul r1, r0, r1
    mov r0, r1, lsl #4
    str r0, [r7, #0x30]
    bl func_02001dd8
    rsb r1, r5, #0
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r7, #0x10]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202f838(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    ldrh r2, [r5, #0x2c]
    ldrh r1, [r5, #0x2e]
    mov r6, r0
    mov r4, r2, lsl #0xc
    mov r7, r1, lsl #0xc
    mov r0, r7
    mov r1, r4
    bl FX_DivAsync
    ldrsh r0, [r5, #0x22]
    str r0, [r6]
    str r0, [r6, #0x14]
    bl func_02001dd8
    ldrsh r2, [r5, #0x20]
    mov r1, r7
    mul r0, r2, r0
    mov r2, r0, asr #0xc
    mov r0, r4
    str r2, [r6, #4]
    bl FX_DivAsync
    ldrsh r12, [r5, #0x20]
    ldr r1, [r5, #0x28]
    ldrsh r2, [r5, #0x22]
    ldr r4, [r5, #0x24]
    smull r3, r0, r1, r12
    smlal r3, r0, r4, r2
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #20
    sub r0, r12, r3
    smull lr, r12, r4, r12
    smull r4, r3, r1, r2
    subs r4, lr, r4
    sbc r1, r12, r3
    mov r3, r4, lsr #0xc
    orr r3, r3, r1, lsl #20
    add r1, r2, r3
    ldrh r2, [r5, #0x2e]
    sub r1, r1, #0x1000
    ldrh r3, [r5, #0x2c]
    rsb r2, r2, #0
    mul r1, r2, r1
    mul r0, r3, r0
    mov r2, r0, lsl #4
    mov r0, r1, lsl #4
    str r2, [r6, #0x30]
    str r0, [r6, #0x34]
    bl func_02001dd8
    ldrsh r1, [r5, #0x20]
    rsb r1, r1, #0
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r6, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202f910(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, [r1, #0x28]
    ldr r3, [r1, #0x1c]
    rsb r4, r2, #0
    ldr r12, [r1, #0x18]
    ldr r2, [r1, #0x24]
    smull r7, r6, r4, r3
    smull r5, lr, r2, r12
    mov r7, r7, lsr #0xc
    mov r2, #0
    ldrh r4, [r1, #0x2e]
    orr r7, r7, r6, lsl #20
    mov r5, r5, lsr #0xc
    orr r5, r5, lr, lsl #20
    add lr, r3, r7
    ldrh r6, [r1, #0x2c]
    rsb r5, r5, #0
    rsb r4, r4, #0
    sub r1, lr, #0x1000
    mul r5, r6, r5
    mul r1, r4, r1
    mov r4, r5, lsl #4
    mov r1, r1, lsl #4
    str r12, [r0]
    str r3, [r0, #0x14]
    str r2, [r0, #4]
    str r4, [r0, #0x30]
    str r1, [r0, #0x34]
    str r2, [r0, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202f988(void)
{
    stmdb sp!, {r4, lr}
    ldrh r2, [r1, #0x2e]
    ldr lr, [r1, #0x28]
    ldr r3, [r1, #0x24]
    ldrh r12, [r1, #0x2c]
    rsb r3, r3, #0
    rsb lr, lr, #0
    mul r3, r12, r3
    rsb r1, r2, #0
    mul r2, r1, lr
    mov r4, #0x1000
    mov r12, #0
    str r4, [r0, #0x14]
    stmia r0, {r4, r12}
    mov r3, r3, lsl #4
    mov r1, r2, lsl #4
    str r3, [r0, #0x30]
    str r1, [r0, #0x34]
    str r12, [r0, #0x10]
    ldmia sp!, {r4, pc}
}

asm void func_0202f9d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    ldrh r2, [r9, #0x2c]
    ldrh r1, [r9, #0x2e]
    mov r10, r0
    mov r8, r2, lsl #0xc
    mov r11, r1, lsl #0xc
    mov r0, r11
    mov r1, r8
    bl FX_DivAsync
    ldrsh r3, [r9, #0x22]
    ldr r0, [r9, #0x18]
    ldrsh r7, [r9, #0x20]
    ldr r5, [r9, #0x1c]
    smull r2, r1, r0, r3
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    str r2, [r10]
    smull r2, r1, r5, r3
    mov r4, r2, lsr #0xc
    orr r4, r4, r1, lsl #20
    smull r2, r1, r0, r7
    mov r6, r2, lsr #0xc
    orr r6, r6, r1, lsl #20
    str r4, [r10, #0x14]
    bl func_02001dd8
    smull r2, r1, r5, r7
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    mul r0, r2, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #4]
    mov r0, r8
    mov r1, r11
    bl FX_DivAsync
    sub r0, r4, #0x1000
    ldrh r2, [r9, #0x2c]
    ldrh r1, [r9, #0x2e]
    mul r3, r2, r6
    mov r2, r3, lsl #4
    str r2, [r10, #0x30]
    rsb r1, r1, #0
    mul r0, r1, r0
    mov r0, r0, lsl #4
    str r0, [r10, #0x34]
    bl func_02001dd8
    rsb r1, r6, #0
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r10, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202faa4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    ldrh r2, [r5, #0x2c]
    ldrh r1, [r5, #0x2e]
    mov r6, r0
    mov r4, r2, lsl #0xc
    mov r7, r1, lsl #0xc
    mov r0, r7
    mov r1, r4
    bl FX_DivAsync
    ldrsh r0, [r5, #0x22]
    str r0, [r6]
    str r0, [r6, #0x14]
    bl func_02001dd8
    ldrsh r2, [r5, #0x20]
    mov r1, r7
    mul r0, r2, r0
    mov r2, r0, asr #0xc
    mov r0, r4
    str r2, [r6, #4]
    bl FX_DivAsync
    ldrh r1, [r5, #0x2e]
    ldrsh r0, [r5, #0x22]
    ldrh r3, [r5, #0x2c]
    ldrsh r2, [r5, #0x20]
    rsb r1, r1, #0
    sub r0, r0, #0x1000
    mul r2, r3, r2
    mul r0, r1, r0
    mov r1, r2, lsl #4
    mov r0, r0, lsl #4
    str r1, [r6, #0x30]
    str r0, [r6, #0x34]
    bl func_02001dd8
    ldrsh r1, [r5, #0x20]
    rsb r1, r1, #0
    mul r0, r1, r0
    mov r0, r0, asr #0xc
    str r0, [r6, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202fb44(void)
{
    stmdb sp!, {r3, lr}
    ldrh r2, [r1, #0x2e]
    ldr lr, [r1, #0x1c]
    mov r12, #0
    rsb r3, r2, #0
    sub r2, lr, #0x1000
    mul r2, r3, r2
    ldr r3, [r1, #0x18]
    str lr, [r0, #0x14]
    stmia r0, {r3, r12}
    mov r1, r2, lsl #4
    str r12, [r0, #0x30]
    str r1, [r0, #0x34]
    str r12, [r0, #0x10]
    ldmia sp!, {r3, pc}
}

asm void func_0202fb80(void)
{
    mov r1, #0
    mov r2, #0x1000
    str r2, [r0]
    str r1, [r0, #4]
    str r1, [r0, #0x10]
    str r2, [r0, #0x14]
    str r1, [r0, #0x30]
    str r1, [r0, #0x34]
    bx lr
}

asm void func_0202fba4(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x4c
    mov r4, r0
    ldr r0, [r4]
    mov r2, #0
    tst r0, #8
    ldrne r0, =0x101610
    mov r1, #0x1000
    strne r0, [sp]
    ldreq r0, =0x101810
    mov r5, #3
    streq r0, [sp]
    ldr r0, [r4]
    mov r3, #2
    tst r0, #1
    ldr r0, [r4]
    strne r1, [r4, #0x1c]
    strne r1, [r4, #0x18]
    tst r0, #2
    movne r0, #0
    strneh r0, [r4, #0x20]
    str r1, [sp, #0x44]
    movne r1, #0x1000
    strneh r1, [r4, #0x22]
    ldr r0, [r4]
    ldr r1, [r4]
    tst r0, #4
    movne r0, #0
    strne r0, [r4, #0x28]
    strne r0, [r4, #0x24]
    ldr r0, =data_020aba80
    and r1, r1, #7
    str r2, [sp, #0x40]
    str r2, [sp, #0x34]
    str r2, [sp, #0x30]
    str r2, [sp, #0x2c]
    str r2, [sp, #0x28]
    str r2, [sp, #0x24]
    str r2, [sp, #0x20]
    str r2, [sp, #0x14]
    str r2, [sp, #0x10]
    ldr r2, [r0, r1, lsl #2]
    add r0, sp, #8
    mov r1, r4
    str r5, [sp, #4]
    str r3, [sp, #0x48]
    blx r2
    ldr r5, [r4, #0x30]
    cmp r5, #0x1000
    beq @L_0202fca8
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x38]
    smull lr, r12, r5, r2
    smull r3, r2, r5, r1
    smull r1, r0, r5, r0
    mov lr, lr, lsr #0xc
    mov r3, r3, lsr #0xc
    mov r1, r1, lsr #0xc
    orr lr, lr, r12, lsl #20
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    str lr, [sp, #8]
    str r3, [sp, #0xc]
    str r1, [sp, #0x38]
@L_0202fca8:
    ldr lr, [r4, #0x34]
    cmp lr, #0x1000
    beq @L_0202fcf0
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x3c]
    smull r12, r4, lr, r2
    smull r3, r2, lr, r1
    smull r1, r0, lr, r0
    mov r12, r12, lsr #0xc
    mov r3, r3, lsr #0xc
    mov r1, r1, lsr #0xc
    orr r12, r12, r4, lsl #20
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    str r12, [sp, #0x18]
    str r3, [sp, #0x1c]
    str r1, [sp, #0x3c]
@L_0202fcf0:
    add r1, sp, #0
    ldr r0, [sp]
    add r1, r1, #4
    mov r2, #0x12
    bl func_0202b608
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, pc}
}

asm void func_0202fd18(void)
{
    mov r0, #0
    bx lr
}

asm void func_0202fd20(void)
{
    mvn r0, #0
    bx lr
}

asm void func_0202fd28(void)
{
    mov r0, #0
    bx lr
}

asm void func_0202fd30(void)
{
    mvn r0, #0
    bx lr
}
