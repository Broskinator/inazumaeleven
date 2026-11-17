// (asm for now)

void GetMatColAnmuAlphaValue_(void);
void func_0202da58(void);
void NNSi_G3dAnmCalcNsBma(void);
void GetTexSRTAnmVectorVal_(void);

extern char data_020ab838[];
void MIi_CpuClear16(void);
void NNS_G3dGetResDictIdxByName(void);
void GetMatColAnmValue_(void);

asm void GetMatColAnmuAlphaValue_(void)
{
    tst r1, #0x20000000
    movne r0, r1, lsl #0x10
    movne r0, r0, lsr #0x10
    bxne lr
    mov r3, r1, lsl #0x10
    add r3, r0, r3, lsr #16
    tst r1, #0xc0000000
    ldreqb r0, [r3, r2]
    bxeq lr
    ldr r0, =0x1fff0000
    tst r1, #0x40000000
    and r0, r1, r0
    mov r0, r0, lsr #0x10
    beq @L_0202d9e0
    tst r2, #1
    beq @L_0202d9d8
    cmp r2, r0
    addhi r0, r3, r0, lsr #1
    ldrhib r0, [r0, #1]
    bxhi lr
    add r0, r3, r2, lsr #1
    ldrb r1, [r3, r2, lsr #1]
    ldrb r0, [r0, #1]
    add r0, r1, r0
    mov r0, r0, lsl #0xf
    mov r0, r0, lsr #0x10
    bx lr
@L_0202d9d8:
    ldrb r0, [r3, r2, lsr #1]
    bx lr
@L_0202d9e0:
    ands r1, r2, #3
    beq @L_0202da4c
    cmp r2, r0
    addhi r0, r3, r0, lsr #2
    ldrhib r0, [r1, r0]
    bxhi lr
    tst r2, #1
    beq @L_0202da30
    tst r2, #2
    movne r2, r2, lsr #2
    addne r0, r2, #1
    moveq r0, r2, lsr #2
    ldrb r1, [r3, r0]
    addeq r2, r0, #1
    ldrb r0, [r3, r2]
    add r1, r1, r1, lsl #1
    add r0, r1, r0
    mov r0, r0, lsl #0xe
    mov r0, r0, lsr #0x10
    bx lr
@L_0202da30:
    add r0, r3, r2, lsr #2
    ldrb r1, [r3, r2, lsr #2]
    ldrb r0, [r0, #1]
    add r0, r1, r0
    mov r0, r0, lsl #0xf
    mov r0, r0, lsr #0x10
    bx lr
@L_0202da4c:
    ldrb r0, [r3, r2, lsr #2]
    bx lr
}

asm void func_0202da58(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r0
    cmp r2, #0
    ldrne r0, [r2, #8]
    mov r9, r1
    cmpne r0, #0
    addne r8, r2, r0
    ldr r0, =data_020ab838
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
@L_0202dab8:
    cmp r6, #0
    beq @L_0202dae4
    ldrb r0, [r9, #9]
    cmp r7, r0
    bhs @L_0202dae4
    ldrh r0, [r9, #0xe]
    add r1, r6, r0
    ldrh r0, [r1, #2]
    add r0, r1, r0
    add r1, r0, r7, lsl #4
    b @L_0202dae8
@L_0202dae4:
    mov r1, r5
@L_0202dae8:
    cmp r8, #0
    moveq r0, r4
    beq @L_0202dafc
    add r0, r8, #4
    bl NNS_G3dGetResDictIdxByName
@L_0202dafc:
    cmp r0, #0
    orrge r1, r7, #0x100
    addge r0, r10, r0, lsl #1
    strgeh r1, [r0, #0x1a]
    ldrb r0, [r9, #9]
    add r7, r7, #1
    cmp r7, r0
    blo @L_0202dab8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void NNSi_G3dAnmCalcNsBma(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, [r1, #8]
    ldr r3, [r1]
    ldrh r1, [r4, #4]
    mov r7, r0
    mov r0, r1, lsl #0xc
    cmp r3, r1, lsl #12
    subge r3, r0, #1
    bge @L_0202db50
    cmp r3, #0
    movlt r3, #0
@L_0202db50:
    mov r5, r3, asr #0xc
    adds r3, r4, #8
    beq @L_0202db88
    ldrb r1, [r4, #9]
    mov r0, r2, lsl #0x10
    mov r2, r0, lsr #0x10
    cmp r1, r0, lsr #16
    bls @L_0202db88
    ldrh r1, [r4, #0xe]
    ldrh r0, [r3, r1]
    add r1, r3, r1
    add r1, r1, #4
    mla r6, r0, r2, r1
    b @L_0202db8c
@L_0202db88:
    mov r6, #0
@L_0202db8c:
    ldr r1, [r6]
    mov r0, r4
    mov r2, r5
    bl GetMatColAnmValue_
    mov r8, r0
    ldr r1, [r6, #4]
    mov r0, r4
    mov r2, r5
    bl GetMatColAnmValue_
    ldr r1, [r7, #4]
    orr r0, r8, r0, lsl #16
    tst r1, #0x8000
    movne r1, #1
    moveq r1, #0
    orr r0, r0, r1, lsl #15
    str r0, [r7, #4]
    ldr r1, [r6, #0xc]
    mov r0, r4
    mov r2, r5
    bl GetMatColAnmValue_
    mov r8, r0
    ldr r1, [r6, #8]
    mov r0, r4
    mov r2, r5
    bl GetMatColAnmValue_
    ldr r1, [r7, #8]
    orr r0, r0, r8, lsl #16
    tst r1, #0x8000
    movne r1, #1
    moveq r1, #0
    orr r0, r0, r1, lsl #15
    str r0, [r7, #8]
    ldr r1, [r6, #0x10]
    mov r0, r4
    mov r2, r5
    bl GetMatColAnmuAlphaValue_
    ldr r1, [r7, #0xc]
    bic r1, r1, #0x1f0000
    orr r0, r1, r0, lsl #16
    str r0, [r7, #0xc]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void GetTexSRTAnmVectorVal_(void)
{
    tst r1, #0x20000000
    movne r0, r2
    bxne lr
    tst r1, #0xc0000000
    add r0, r0, r2
    beq @L_0202dce8
    mov r2, r1, lsl #0x10
    tst r1, #0x40000000
    mov r12, r2, lsr #0x10
    beq @L_0202dc80
    tst r3, #1
    beq @L_0202dc78
    cmp r3, r12
    movhi r2, r12, lsr #1
    addhi r3, r2, #1
    bhi @L_0202dce8
    mov r3, r3, lsr #1
    b @L_0202dcfc
@L_0202dc78:
    mov r3, r3, lsr #1
    b @L_0202dce8
@L_0202dc80:
    ands r2, r3, #3
    beq @L_0202dce4
    cmp r3, r12
    addhi r3, r2, r12, lsr #2
    bhi @L_0202dce8
    tst r3, #1
    beq @L_0202dcdc
    tst r3, #2
    movne r3, r3, lsr #2
    addne r2, r3, #1
    moveq r2, r3, lsr #2
    addeq r3, r2, #1
    tst r1, #0x10000000
    movne r2, r2, lsl #1
    movne r1, r3, lsl #1
    ldrnesh r2, [r0, r2]
    ldrnesh r1, [r0, r1]
    ldreq r2, [r0, r2, lsl #2]
    ldreq r1, [r0, r3, lsl #2]
    add r0, r2, r2, lsl #1
    add r0, r0, r1
    mov r0, r0, asr #2
    bx lr
@L_0202dcdc:
    mov r3, r3, lsr #2
    b @L_0202dcfc
@L_0202dce4:
    mov r3, r3, lsr #2
@L_0202dce8:
    tst r1, #0x10000000
    movne r1, r3, lsl #1
    ldrnesh r0, [r0, r1]
    ldreq r0, [r0, r3, lsl #2]
    bx lr
@L_0202dcfc:
    tst r1, #0x10000000
    addne r1, r0, r3, lsl #1
    movne r2, r3, lsl #1
    ldrnesh r0, [r0, r2]
    ldrnesh r1, [r1, #2]
    addeq r1, r0, r3, lsl #2
    ldmeqia r1, {r0, r1}
    add r0, r0, r1
    mov r0, r0, asr #1
    bx lr
}
