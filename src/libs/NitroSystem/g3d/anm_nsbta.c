// (asm for now)

void GetTexSRTAnmSinCosVal_(void);

asm void GetTexSRTAnmSinCosVal_(void)
{
    tst r1, #0x20000000
    movne r0, r2
    bxne lr
    tst r1, #0xc0000000
    add r0, r0, r2
    beq @L_0202ddf4
    mov r2, r1, lsl #0x10
    tst r1, #0x40000000
    mov r2, r2, lsr #0x10
    beq @L_0202dd74
    tst r3, #1
    beq @L_0202dd6c
    cmp r3, r2
    movhi r1, r2, lsr #1
    addhi r3, r1, #1
    bhi @L_0202ddf4
    mov r1, r3, lsr #1
    b @L_0202ddfc
@L_0202dd6c:
    mov r3, r3, lsr #1
    b @L_0202ddf4
@L_0202dd74:
    ands r1, r3, #3
    beq @L_0202ddf0
    cmp r3, r2
    addhi r3, r1, r2, lsr #2
    bhi @L_0202ddf4
    tst r3, #1
    beq @L_0202dde8
    tst r3, #2
    movne r3, r3, lsr #2
    addne r1, r3, #1
    moveq r1, r3, lsr #2
    add r2, r0, r1, lsl #2
    mov r12, r1, lsl #2
    addeq r3, r1, #1
    add r1, r0, r3, lsl #2
    ldrsh r2, [r2, #2]
    mov r3, r3, lsl #2
    ldrsh r12, [r0, r12]
    ldrsh r1, [r1, #2]
    ldrsh r3, [r0, r3]
    add r2, r2, r2, lsl #1
    add r0, r2, r1
    add r12, r12, r12, lsl #1
    mov r1, r0, asr #2
    add r2, r12, r3
    mov r0, r2, lsl #0xe
    mov r1, r1, lsl #0x10
    orr r0, r1, r0, lsr #16
    bx lr
@L_0202dde8:
    mov r1, r3, lsr #2
    b @L_0202ddfc
@L_0202ddf0:
    mov r3, r3, lsr #2
@L_0202ddf4:
    ldr r0, [r0, r3, lsl #2]
    bx lr
@L_0202ddfc:
    add r3, r0, r1, lsl #2
    mov r12, r1, lsl #2
    ldrsh r2, [r3, #2]
    ldrsh r1, [r3, #6]
    ldrsh r12, [r0, r12]
    ldrsh r3, [r3, #4]
    add r0, r2, r1
    mov r1, r0, asr #1
    add r0, r12, r3
    mov r0, r0, lsl #0xf
    mov r1, r1, lsl #0x10
    orr r0, r1, r0, lsr #16
    bx lr
}
