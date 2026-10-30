// (asm for now)

void __must_round(void);
void __dorounddecup(void);
void func_0201c19c(void);
void __rounddec(void);
void func_0201c1e0(void);
void func_0201c2a4(void);
void func_0201c424(void);
void func_0201c4c0(void);
void func_0201c840(void);
void __less_dec(void);
void func_0201ca00(void);
void func_0201cca0(void);
void func_0201ce20(void);
void func_0201cecc(void);

void func_020226e0(void);
void _ll_udiv(void);
extern char data_020ab36c[];
extern char data_020ab39c[];
extern char data_020ab3c4[];
extern char data_020ab3dc[];
extern char data_020ab3ec[];
extern char data_020ab3f4[];
extern char data_020ab3fc[];
extern char data_020ab404[];
extern char data_020ab40c[];
extern char data_020ab410[];
extern char data_020ab414[];
extern char data_020ab418[];
extern char data_020ab41c[];
extern char data_020ab420[];
extern char data_020ab424[];
extern char data_020ab428[];
extern char data_020ab42c[];
extern char data_020ab430[];
extern char data_020ab434[];
extern char data_020ab438[];
extern char data_020ab43c[];
void func_020181bc(void);
void func_02022230(void);
void __fpclassifyd(void);
void func_02021728(void);
void func_020207d4(void);
void __msl_generic_count_bits64(void);
void func_02020894(void);
void func_02022c04(void);
void copysign(void);
extern char data_020ab0c4[];
void func_02022400(void);
extern char data_020ab440[];
void func_02021f84(void);
extern char data_020ab32c[];
void func_02021adc(void);
void func_020213f8(void);
void func_02021f44(void);
void func_02020c78(void);
void func_02023890(void);

asm void __must_round(void)
{
    add r3, r0, #5
    ldrb r2, [r3, r1]
    add r12, r3, r1
    cmp r2, #5
    movhi r0, #1
    bxhi lr
    mvnlo r0, #0
    bxlo lr
    ldrb r2, [r0, #4]
    add r12, r12, #1
    add r3, r3, r2
    cmp r12, r3
    bhs @L_0201c134
@L_0201c118:
    ldrb r2, [r12]
    cmp r2, #0
    movne r0, #1
    bxne lr
    add r12, r12, #1
    cmp r12, r3
    blo @L_0201c118
@L_0201c134:
    sub r1, r1, #1
    add r0, r0, r1
    ldrb r0, [r0, #5]
    tst r0, #1
    movne r0, #1
    mvneq r0, #0
    bx lr
}

asm void __dorounddecup(void)
{
    add r3, r0, #5
    add r1, r3, r1
    sub r12, r1, #1
    mov r1, #0
@L_0201c160:
    ldrb r2, [r12]
    cmp r2, #9
    addlo r0, r2, #1
    strlob r0, [r12]
    bxlo lr
    cmp r12, r3
    bne @L_0201c194
    mov r1, #1
    strb r1, [r12]
    ldrsh r1, [r0, #2]
    add r1, r1, #1
    strh r1, [r0, #2]
    bx lr
@L_0201c194:
    strb r1, [r12], #-1
    b @L_0201c160
}

asm void func_0201c19c(void)
{
    bx lr
}

asm void __rounddec(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #0
    ldmleia sp!, {r3, r4, r5, pc}
    ldrb r2, [r5, #4]
    cmp r4, r2
    ldmgeia sp!, {r3, r4, r5, pc}
    bl __must_round
    strb r4, [r5, #4]
    cmp r0, #0
    ldmltia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r1, r4
    bl __dorounddecup
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0201c1e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, r2
    mov r7, r0
    mov r0, #0
    mov r6, r1
    cmp r5, #0
    strb r0, [r7]
    strb r0, [r7, #4]
    cmpeq r6, #0
    beq @L_0201c264
    mov r9, #0xa
    mov r8, r0
@L_0201c210:
    ldrb r1, [r7, #4]
    mov r0, r6
    mov r2, r9
    add r12, r1, #1
    mov r4, r1
    mov r1, r5
    mov r3, r8
    strb r12, [r7, #4]
    bl func_020226e0
    add r1, r7, r4
    strb r0, [r1, #5]
    mov r0, r6
    mov r1, r5
    mov r2, r9
    mov r3, r8
    bl _ll_udiv
    mov r5, r1
    mov r6, r0
    cmp r5, #0
    cmpeq r6, #0
    bne @L_0201c210
@L_0201c264:
    ldrb r0, [r7, #4]
    add r2, r7, #5
    add r0, r2, r0
    sub r3, r0, #1
    cmp r2, r3
    bhs @L_0201c294
@L_0201c27c:
    ldrb r1, [r2]
    ldrb r0, [r3]
    strb r1, [r3], #-1
    strb r0, [r2], #1
    cmp r2, r3
    blo @L_0201c27c
@L_0201c294:
    ldrb r0, [r7, #4]
    sub r0, r0, #1
    strh r0, [r7, #2]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_0201c2a4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    ldrb r6, [r1, #4]
    ldrb r5, [r2, #4]
    mov r4, #0
    add r3, sp, #0
    add r5, r6, r5
    sub r5, r5, #1
    add r3, r3, r5
    add r6, r3, #1
    mov r7, r6
    strb r4, [r0]
    cmp r5, #0
    ble @L_0201c36c
    add lr, r1, #5
    add r11, r2, #5
@L_0201c2e4:
    ldrb r3, [r2, #4]
    sub r10, r3, #1
    sub r3, r5, r10
    subs r9, r3, #1
    ldrb r3, [r1, #4]
    movmi r9, #0
    submi r10, r5, #1
    add r8, r10, #1
    sub r3, r3, r9
    cmp r8, r3
    movgt r8, r3
    add r10, r11, r10
    add r9, lr, r9
    cmp r8, #0
    ble @L_0201c338
@L_0201c320:
    ldrb r12, [r9], #1
    ldrb r3, [r10], #-1
    sub r8, r8, #1
    cmp r8, #0
    mla r4, r12, r3, r4
    bgt @L_0201c320
@L_0201c338:
    ldr r3, =0xcccccccd
    sub r5, r5, #1
    umull r8, r9, r4, r3
    mov r9, r9, lsr #3
    cmp r5, #0
    mov r10, #0xa
    umull r8, r9, r10, r9
    sub r9, r4, r8
    strb r9, [r6, #-1]!
    mov r8, r4
    umull r3, r4, r8, r3
    mov r4, r4, lsr #3
    bgt @L_0201c2e4
@L_0201c36c:
    ldrsh r3, [r1, #2]
    ldrsh r1, [r2, #2]
    cmp r4, #0
    add r1, r3, r1
    strh r1, [r0, #2]
    strneb r4, [r6, #-1]!
    ldrnesh r1, [r0, #2]
    mov r3, #0
    addne r1, r1, #1
    strneh r1, [r0, #2]
    b @L_0201c3a8
@L_0201c398:
    ldrb r2, [r6], #1
    add r1, r0, r3
    add r3, r3, #1
    strb r2, [r1, #5]
@L_0201c3a8:
    cmp r3, #0x20
    bge @L_0201c3b8
    cmp r6, r7
    blo @L_0201c398
@L_0201c3b8:
    cmp r6, r7
    addhs sp, sp, #0x40
    strb r3, [r0, #4]
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r1, [r6]
    cmp r1, #5
    addlo sp, sp, #0x40
    ldmloia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bne @L_0201c410
    add r2, r6, #1
    cmp r2, r7
    bhs @L_0201c400
@L_0201c3e8:
    ldrb r1, [r2]
    cmp r1, #0
    bne @L_0201c410
    add r2, r2, #1
    cmp r2, r7
    blo @L_0201c3e8
@L_0201c400:
    ldrb r1, [r6, #-1]
    tst r1, #1
    addeq sp, sp, #0x40
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201c410:
    ldrb r1, [r0, #4]
    bl __dorounddecup
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0201c424(void)
{
    stmdb sp!, {r3, lr}
    mov r12, #0
    strh r2, [r0, #2]
    strb r12, [r0]
    b @L_0201c44c
@L_0201c438:
    ldrb r3, [r1], #1
    add r2, r0, r12
    add r12, r12, #1
    sub r3, r3, #0x30
    strb r3, [r2, #5]
@L_0201c44c:
    cmp r12, #0x20
    bge @L_0201c460
    ldrb r2, [r1]
    cmp r2, #0
    bne @L_0201c438
@L_0201c460:
    ldrb r2, [r1]
    strb r12, [r0, #4]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    cmp r2, #5
    ldmloia sp!, {r3, pc}
    bhi @L_0201c4b4
    ldrb r2, [r1, #1]
    add r1, r1, #1
    cmp r2, #0
    beq @L_0201c4a0
@L_0201c48c:
    cmp r2, #0x30
    bne @L_0201c4b4
    ldrb r2, [r1, #1]!
    cmp r2, #0
    bne @L_0201c48c
@L_0201c4a0:
    sub r1, r12, #1
    add r1, r0, r1
    ldrb r1, [r1, #5]
    tst r1, #1
    ldmeqia sp!, {r3, pc}
@L_0201c4b4:
    ldrb r1, [r0, #4]
    bl __dorounddecup
    ldmia sp!, {r3, pc}
}

asm void func_0201c4c0(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x4c
    mov r4, r1
    mvn r2, #0x34
    mov r5, r0
    cmp r4, r2
    bgt @L_0201c4f0
    bge @L_0201c5bc
    sub r0, r2, #0xb
    cmp r4, r0
    beq @L_0201c5a4
    b @L_0201c74c
@L_0201c4f0:
    add r1, r4, #0x20
    cmp r1, #0x28
    addls pc, pc, r1, lsl #2
    b @L_0201c74c
    b @L_0201c5d0
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c5e4
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c74c
    b @L_0201c5f8
    b @L_0201c60c
    b @L_0201c620
    b @L_0201c634
    b @L_0201c648
    b @L_0201c65c
    b @L_0201c670
    b @L_0201c684
    b @L_0201c698
    b @L_0201c6ac
    b @L_0201c6c0
    b @L_0201c6d4
    b @L_0201c6e8
    b @L_0201c6fc
    b @L_0201c710
    b @L_0201c724
    b @L_0201c738
@L_0201c5a4:
    ldr r1, =data_020ab36c
    mov r0, r5
    mvn r2, #0x13
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c5bc:
    ldr r1, =data_020ab39c
    add r2, r2, #0x25
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c5d0:
    ldr r1, =data_020ab3c4
    add r2, r2, #0x2b
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c5e4:
    ldr r1, =data_020ab3dc
    add r2, r2, #0x30
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c5f8:
    ldr r1, =data_020ab3ec
    add r2, r2, #0x32
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c60c:
    ldr r1, =data_020ab3f4
    add r2, r2, #0x32
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c620:
    ldr r1, =data_020ab3fc
    add r2, r2, #0x33
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c634:
    ldr r1, =data_020ab404
    add r2, r2, #0x33
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c648:
    ldr r1, =data_020ab40c
    add r2, r2, #0x33
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c65c:
    ldr r1, =data_020ab410
    add r2, r2, #0x34
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c670:
    ldr r1, =data_020ab414
    add r2, r2, #0x34
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c684:
    ldr r1, =data_020ab418
    add r2, r2, #0x34
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c698:
    ldr r1, =data_020ab41c
    mov r2, #0
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c6ac:
    ldr r1, =data_020ab420
    mov r2, #0
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c6c0:
    ldr r1, =data_020ab424
    mov r2, #0
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c6d4:
    ldr r1, =data_020ab428
    mov r2, #0
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c6e8:
    ldr r1, =data_020ab42c
    mov r2, #1
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c6fc:
    ldr r1, =data_020ab430
    mov r2, #1
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c710:
    ldr r1, =data_020ab434
    mov r2, #1
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c724:
    ldr r1, =data_020ab438
    mov r2, #2
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c738:
    ldr r1, =data_020ab43c
    mov r2, #2
    bl func_0201c424
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201c74c:
    and r0, r4, #0x80000000
    add r1, r4, r0, lsr #31
    add r6, sp, #0x26
    mov r0, r6
    mov r1, r1, asr #1
    bl func_0201c4c0
    mov r0, r5
    mov r1, r6
    mov r2, r6
    bl func_0201c2a4
    tst r4, #1
    addeq sp, sp, #0x4c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    add r3, sp, #0
    mov r12, r5
    mov r2, #9
@L_0201c78c:
    ldrh r1, [r12]
    ldrh r0, [r12, #2]
    add r12, r12, #4
    subs r2, r2, #1
    strh r0, [r3, #2]
    strh r1, [r3], #4
    bne @L_0201c78c
    ldrh r0, [r12]
    cmp r4, #0
    strh r0, [r3]
    add r0, sp, #0x26
    ble @L_0201c7c8
    ldr r1, =data_020ab420
    mov r2, #0
    b @L_0201c7d0
@L_0201c7c8:
    ldr r1, =data_020ab418
    mvn r2, #0
@L_0201c7d0:
    bl func_0201c424
    add r1, sp, #0
    add r2, sp, #0x26
    mov r0, r5
    bl func_0201c2a4
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_0201c840(void)
{
    stmdb sp!, {r4, lr}
    ldrb r3, [r0, #5]
    cmp r3, #0
    bne @L_0201c864
    ldrb r0, [r1, #5]
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r4, pc}
@L_0201c864:
    ldrb r2, [r1, #5]
    cmp r2, #0
    bne @L_0201c880
    mov r0, #1
    cmp r3, #0
    movne r0, #0
    ldmia sp!, {r4, pc}
@L_0201c880:
    ldrsh r3, [r0, #2]
    ldrsh r2, [r1, #2]
    cmp r3, r2
    bne @L_0201c918
    ldrb r4, [r0, #4]
    ldrb r2, [r1, #4]
    mov r12, #0
    mov lr, r4
    cmp r4, r2
    movgt lr, r2
    cmp lr, #0
    ble @L_0201c8d8
@L_0201c8b0:
    add r3, r0, r12
    add r2, r1, r12
    ldrb r3, [r3, #5]
    ldrb r2, [r2, #5]
    cmp r3, r2
    movne r0, #0
    ldmneia sp!, {r4, pc}
    add r12, r12, #1
    cmp r12, lr
    blt @L_0201c8b0
@L_0201c8d8:
    cmp lr, r4
    moveq r0, r1
    ldrb r1, [r0, #4]
    cmp r12, r1
    bge @L_0201c910
@L_0201c8ec:
    add r1, r0, r12
    ldrb r1, [r1, #5]
    cmp r1, #0
    movne r0, #0
    ldmneia sp!, {r4, pc}
    ldrb r1, [r0, #4]
    add r12, r12, #1
    cmp r12, r1
    blt @L_0201c8ec
@L_0201c910:
    mov r0, #1
    ldmia sp!, {r4, pc}
@L_0201c918:
    mov r0, #0
    ldmia sp!, {r4, pc}
}

asm void __less_dec(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldrb r2, [r0, #5]
    cmp r2, #0
    bne @L_0201c944
    ldrb r0, [r1, #5]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_0201c944:
    ldrb r2, [r1, #5]
    cmp r2, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrsh r3, [r1, #2]
    ldrsh r2, [r0, #2]
    cmp r2, r3
    bne @L_0201c9f4
    ldrb r5, [r0, #4]
    ldrb r4, [r1, #4]
    mov r12, #0
    mov lr, r5
    cmp r5, r4
    movgt lr, r4
    cmp lr, #0
    ble @L_0201c9b8
@L_0201c984:
    add r3, r1, r12
    add r2, r0, r12
    ldrb r3, [r3, #5]
    ldrb r2, [r2, #5]
    cmp r2, r3
    movlo r0, #1
    ldmloia sp!, {r3, r4, r5, pc}
    cmp r3, r2
    movlo r0, #0
    ldmloia sp!, {r3, r4, r5, pc}
    add r12, r12, #1
    cmp r12, lr
    blt @L_0201c984
@L_0201c9b8:
    cmp lr, r5
    bne @L_0201c9ec
    cmp r12, r4
    bge @L_0201c9ec
@L_0201c9c8:
    add r0, r1, r12
    ldrb r0, [r0, #5]
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    ldrb r0, [r1, #4]
    add r12, r12, #1
    cmp r12, r0
    blt @L_0201c9c8
@L_0201c9ec:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_0201c9f4:
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0201ca00(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, #9
@L_0201ca0c:
    ldrh r3, [r1, #2]
    ldrh r4, [r1], #4
    subs r5, r5, #1
    strh r3, [r6, #2]
    strh r4, [r6], #4
    bne @L_0201ca0c
    ldrh r1, [r1]
    strh r1, [r6]
    ldrb r1, [r2, #5]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r7, [r0, #4]
    ldrb r3, [r2, #4]
    ldrsh r4, [r0, #2]
    mov r1, r7
    cmp r7, r3
    movlt r1, r3
    ldrsh r3, [r2, #2]
    sub r6, r4, r3
    add r1, r1, r6
    cmp r1, #0x20
    movgt r1, #0x20
    cmp r7, r1
    bge @L_0201ca90
    mov r4, #0
@L_0201ca70:
    ldrb r5, [r0, #4]
    add r3, r0, r7
    add r5, r5, #1
    strb r5, [r0, #4]
    strb r4, [r3, #5]
    ldrb r7, [r0, #4]
    cmp r7, r1
    blt @L_0201ca70
@L_0201ca90:
    ldrb r4, [r2, #4]
    add r3, r0, #5
    add r12, r3, r1
    add r4, r4, r6
    cmp r4, r1
    addlt r12, r3, r4
    sub r4, r12, r3
    add r1, r2, #5
    sub r4, r4, r6
    add lr, r1, r4
    mov r4, lr
    b @L_0201cb24
@L_0201cac0:
    ldrb r7, [r12, #-1]!
    ldrb r5, [lr, #-1]!
    cmp r7, r5
    bhs @L_0201cb14
    ldrb r7, [r12, #-1]
    sub r5, r12, #1
    cmp r7, #0
    bne @L_0201caec
@L_0201cae0:
    ldrb r7, [r5, #-1]!
    cmp r7, #0
    beq @L_0201cae0
@L_0201caec:
    cmp r5, r12
    beq @L_0201cb14
@L_0201caf4:
    ldrb r7, [r5]
    sub r7, r7, #1
    strb r7, [r5]
    ldrb r7, [r5, #1]!
    cmp r5, r12
    add r7, r7, #0xa
    strb r7, [r5]
    bne @L_0201caf4
@L_0201cb14:
    ldrb r7, [r12]
    ldrb r5, [lr]
    sub r5, r7, r5
    strb r5, [r12]
@L_0201cb24:
    cmp r12, r3
    bls @L_0201cb34
    cmp lr, r1
    bhi @L_0201cac0
@L_0201cb34:
    ldrb r5, [r2, #4]
    sub lr, r4, r1
    cmp lr, r5
    bge @L_0201cc04
    ldrb r1, [r4]
    mov r7, #0
    cmp r1, #5
    movlo r7, #1
    blo @L_0201cba0
    bne @L_0201cba0
    add r1, r2, #5
    add r2, r1, r5
    add r4, r4, #1
    cmp r4, r2
    bhs @L_0201cb88
@L_0201cb70:
    ldrb r1, [r4]
    cmp r1, #0
    bne @L_0201cc04
    add r4, r4, #1
    cmp r4, r2
    blo @L_0201cb70
@L_0201cb88:
    add r1, r3, lr
    add r2, r1, r6
    ldrb r1, [r2, #-1]
    sub r12, r2, #1
    tst r1, #1
    movne r7, #1
@L_0201cba0:
    cmp r7, #0
    beq @L_0201cc04
    ldrb r1, [r12]
    cmp r1, #1
    bhs @L_0201cbf8
    ldrb r1, [r12, #-1]
    sub r2, r12, #1
    cmp r1, #0
    bne @L_0201cbd0
@L_0201cbc4:
    ldrb r1, [r2, #-1]!
    cmp r1, #0
    beq @L_0201cbc4
@L_0201cbd0:
    cmp r2, r12
    beq @L_0201cbf8
@L_0201cbd8:
    ldrb r1, [r2]
    sub r1, r1, #1
    strb r1, [r2]
    ldrb r1, [r2, #1]!
    cmp r2, r12
    add r1, r1, #0xa
    strb r1, [r2]
    bne @L_0201cbd8
@L_0201cbf8:
    ldrb r1, [r12]
    sub r1, r1, #1
    strb r1, [r12]
@L_0201cc04:
    ldrb r1, [r3]
    mov r6, r3
    cmp r1, #0
    bne @L_0201cc20
@L_0201cc14:
    ldrb r1, [r6, #1]!
    cmp r1, #0
    beq @L_0201cc14
@L_0201cc20:
    cmp r6, r3
    bls @L_0201cc68
    ldrb r1, [r0, #4]
    sub r4, r6, r3
    ldrsh r2, [r0, #2]
    and r5, r4, #0xff
    add r4, r3, r1
    sub r1, r2, r5
    strh r1, [r0, #2]
    cmp r6, r4
    bhs @L_0201cc5c
@L_0201cc4c:
    ldrb r1, [r6], #1
    cmp r6, r4
    strb r1, [r3], #1
    blo @L_0201cc4c
@L_0201cc5c:
    ldrb r1, [r0, #4]
    sub r1, r1, r5
    strb r1, [r0, #4]
@L_0201cc68:
    ldrb r1, [r0, #4]
    add r2, r0, #5
    add r3, r2, r1
    cmp r3, r2
    bls @L_0201cc90
@L_0201cc7c:
    ldrb r1, [r3, #-1]!
    cmp r1, #0
    bne @L_0201cc90
    cmp r3, r2
    bhi @L_0201cc7c
@L_0201cc90:
    sub r1, r3, r2
    add r1, r1, #1
    strb r1, [r0, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0201cca0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x58
    mov r8, r1
    mov r6, r2
    mov r7, r0
    mov r0, r8
    mov r1, r6
    bl func_020181bc
    mov r4, #0
    cmp r0, #0
    mov r5, #1
    moveq r5, #0
    mov r0, r4
    mov r1, r4
    mov r2, r8
    mov r3, r6
    and r5, r5, #0xff
    bl func_02022230
    bne @L_0201cd08
    mov r0, #1
    add sp, sp, #0x58
    strb r5, [r7]
    strh r4, [r7, #2]
    strb r0, [r7, #4]
    strb r4, [r7, #5]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0201cd08:
    mov r0, r8
    mov r1, r6
    bl __fpclassifyd
    cmp r0, #2
    bgt @L_0201cd50
    mov r2, #1
    mov r0, r8
    mov r1, r6
    strb r5, [r7]
    strh r4, [r7, #2]
    strb r2, [r7, #4]
    bl __fpclassifyd
    cmp r0, #1
    moveq r0, #0x4e
    movne r0, #0x49
    add sp, sp, #0x58
    strb r0, [r7, #5]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0201cd50:
    cmp r5, #0
    beq @L_0201cd74
    mov r0, r4
    mov r1, r4
    mov r2, r8
    mov r3, r6
    bl func_02021728
    mov r8, r0
    mov r6, r1
@L_0201cd74:
    add r2, sp, #8
    mov r0, r8
    mov r1, r6
    bl func_020207d4
    mov r4, r0
    mov r6, r1
    orr r8, r4, #0
    rsbs r2, r8, #0
    orr r3, r6, #0x100000
    rsc r1, r3, #0
    mov r0, #0
    and r3, r3, r1
    sub r1, r0, #1
    and r8, r8, r2
    mov r2, r1
    adds r0, r8, r1
    adc r1, r3, r2
    str r4, [sp]
    str r6, [sp, #4]
    bl __msl_generic_count_bits64
    ldr r1, [sp, #8]
    rsb r9, r0, #0x35
    add r8, sp, #0xc
    sub r1, r1, r9
    mov r0, r8
    bl func_0201c4c0
    mov r0, r4
    mov r1, r6
    mov r2, r9
    bl func_02020894
    bl func_02022c04
    mov r2, r1
    add r4, sp, #0x32
    mov r1, r0
    mov r0, r4
    bl func_0201c1e0
    mov r1, r4
    mov r2, r8
    mov r0, r7
    bl func_0201c2a4
    strb r5, [r7]
    add sp, sp, #0x58
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_0201ce20(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r3
    ldrsh r5, [r0, #2]
    mov r0, r4
    bl func_0201cca0
    ldrb r0, [r4, #5]
    cmp r0, #9
    ldmhiia sp!, {r3, r4, r5, pc}
    cmp r5, #0x20
    movgt r5, #0x20
    mov r0, r4
    mov r1, r5
    bl __rounddec
    ldrb r0, [r4, #4]
    cmp r0, r5
    bge @L_0201ce84
    mov r1, #0
@L_0201ce64:
    ldrb r2, [r4, #4]
    add r0, r4, r0
    add r2, r2, #1
    strb r2, [r4, #4]
    strb r1, [r0, #5]
    ldrb r0, [r4, #4]
    cmp r0, r5
    blt @L_0201ce64
@L_0201ce84:
    ldrsh r2, [r4, #2]
    sub r0, r0, #1
    ldrb r1, [r4, #4]
    mov r0, r0, lsl #0x10
    sub r0, r2, r0, asr #16
    strh r0, [r4, #2]
    cmp r1, #0
    mov r2, #0
    ldmleia sp!, {r3, r4, r5, pc}
@L_0201cea8:
    add r1, r4, r2
    ldrb r0, [r1, #5]
    add r2, r2, #1
    add r0, r0, #0x30
    strb r0, [r1, #5]
    ldrb r0, [r4, #4]
    cmp r2, r0
    blt @L_0201cea8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0201cecc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xfc
    mov r4, r0
    ldrb r0, [r4, #4]
    cmp r0, #0
    bne @L_0201cf0c
    ldrb r0, [r4]
    ldr r3, =0x3ff00000
    mov r2, #0
    cmp r0, #0
    mov r0, #0
    ldrne r3, =0xbff00000
    mov r1, r0
    bl copysign
    add sp, sp, #0xfc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201cf0c:
    ldrb r0, [r4, #5]
    cmp r0, #0x30
    beq @L_0201cf2c
    cmp r0, #0x49
    beq @L_0201cf54
    cmp r0, #0x4e
    beq @L_0201cf88
    b @L_0201cfc4
@L_0201cf2c:
    ldrb r0, [r4]
    ldr r3, =0x3ff00000
    mov r2, #0
    cmp r0, #0
    mov r0, #0
    ldrne r3, =0xbff00000
    mov r1, r0
    bl copysign
    add sp, sp, #0xfc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201cf54:
    ldrb r0, [r4]
    ldr r4, =0x3ff00000
    mov r5, #0
    cmp r0, #0
    ldr r0, =data_020ab0c4
    ldrne r4, =0xbff00000
    ldr r0, [r0]
    bl func_02022400
    mov r2, r5
    mov r3, r4
    bl copysign
    add sp, sp, #0xfc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201cf88:
    ldrb r1, [r4]
    add r3, sp, #0x10
    ldr r2, =0x7ff00000
    mov r0, #0
    cmp r1, #0
    stmia r3, {r0, r2}
    orrne r1, r2, #0x80000000
    orrne r0, r0, r0
    stmneia r3, {r0, r1}
    ldmia r3, {r0, r1}
    orr r0, r0, #0
    orr r1, r1, #0x80000
    add sp, sp, #0xfc
    stmia r3, {r0, r1}
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201cfc4:
    add r3, sp, #0xd6
    mov r5, r4
    mov r2, #9
@L_0201cfd0:
    ldrh r0, [r5, #2]
    ldrh r1, [r5], #4
    subs r2, r2, #1
    strh r0, [r3, #2]
    strh r1, [r3], #4
    bne @L_0201cfd0
    ldrh r0, [r5]
    add r1, sp, #0xdb
    strh r0, [r3]
    ldrb r0, [sp, #0xda]
    add r5, r1, r0
    cmp r1, r5
    bhs @L_0201d018
@L_0201d004:
    ldrb r0, [r1]
    sub r0, r0, #0x30
    strb r0, [r1], #1
    cmp r1, r5
    blo @L_0201d004
@L_0201d018:
    ldrb r0, [sp, #0xda]
    ldrsh r1, [sp, #0xd8]
    add r6, sp, #0xb0
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    add r0, r1, r0, asr #16
    strh r0, [sp, #0xd8]
    ldr r1, =data_020ab440
    mov r0, r6
    mov r2, #0x134
    ldrsh r11, [sp, #0xd8]
    bl func_0201c424
    add r1, sp, #0xd6
    mov r0, r6
    bl __less_dec
    cmp r0, #0
    beq @L_0201d090
    ldrb r0, [r4]
    ldr r4, =0x3ff00000
    mov r5, #0
    cmp r0, #0
    ldr r0, =data_020ab0c4
    ldrne r4, =0xbff00000
    ldr r0, [r0]
    bl func_02022400
    mov r2, r5
    mov r3, r4
    bl copysign
    add sp, sp, #0xfc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201d090:
    add r1, sp, #0xdb
    ldrb r0, [r1]
    add r8, r1, #1
    bl func_02021f84
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    cmp r8, r5
    bhs @L_0201d168
@L_0201d0b0:
    sub r0, r5, r8
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #29
    adds r7, r1, r0, ror #29
    moveq r7, #8
    mov r6, #0
    mov r2, #0
    cmp r7, #0
    ble @L_0201d0ec
    mov r0, #0xa
@L_0201d0d8:
    ldrb r1, [r8], #1
    add r2, r2, #1
    cmp r2, r7
    mla r6, r0, r6, r1
    blt @L_0201d0d8
@L_0201d0ec:
    ldr r0, =data_020ab32c
    ldr r1, [sp, #0xc]
    add r3, r0, r7, lsl #3
    ldr r2, [r3, #-8]
    ldr r0, [sp, #8]
    ldr r3, [r3, #-4]
    bl func_02021adc
    mov r4, r0
    mov r9, r1
    mov r0, r6
    bl func_02021f84
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r9
    bl func_020213f8
    cmp r6, #0
    mov r6, r0
    mov r10, r1
    beq @L_0201d154
    mov r0, r4
    mov r1, r9
    mov r2, r6
    mov r3, r10
    bl func_02022230
    beq @L_0201d168
@L_0201d154:
    str r6, [sp, #8]
    str r10, [sp, #0xc]
    cmp r8, r5
    sub r11, r11, r7
    blo @L_0201d0b0
@L_0201d168:
    cmp r11, #0
    add r7, sp, #0x8a
    add r4, sp, #0xd6
    bge @L_0201d1ac
    rsb r0, r11, #0
    bl func_02021f44
    mov r3, r1
    mov r2, r0
    ldr r1, =0x40140000
    mov r0, #0
    bl func_02020c78
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    bl func_02023890
    b @L_0201d1dc
@L_0201d1ac:
    mov r0, r11
    bl func_02021f44
    mov r3, r1
    mov r2, r0
    ldr r1, =0x40140000
    mov r0, #0
    bl func_02020c78
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    bl func_02021adc
@L_0201d1dc:
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    mov r2, r11
    bl func_02020894
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    bl __fpclassifyd
    cmp r0, #2
    ldreq r1, =0x7fefffff
    mvneq r0, #0
    streq r0, [sp, #8]
    streq r1, [sp, #0xc]
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    mov r0, r7
    add r5, sp, #0
    mov r6, #0
    bl func_0201cca0
    mov r0, r7
    mov r1, r4
    bl func_0201c840
    cmp r0, #0
    bne @L_0201d468
    mov r0, r7
    mov r1, r4
    bl __less_dec
    cmp r0, #0
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    movne r6, #1
    mov r7, #1
    cmp r6, #0
    str r0, [sp]
    str r1, [sp, #4]
    movne r7, #0
    add r9, sp, #0xd6
    add r4, sp, #0x64
    mov r8, #0
@L_0201d27c:
    cmp r7, #0
    ldmia r5, {r0, r1}
    bne @L_0201d2a4
    adds r0, r0, #1
    adc r1, r1, #0
    stmia r5, {r0, r1}
    bl __fpclassifyd
    cmp r0, #2
    beq @L_0201d468
    b @L_0201d2b0
@L_0201d2a4:
    subs r0, r0, #1
    sbc r1, r1, #0
    stmia r5, {r0, r1}
@L_0201d2b0:
    ldr r1, [sp]
    ldr r2, [sp, #4]
    mov r0, r4
    bl func_0201cca0
    cmp r6, #0
    beq @L_0201d2dc
    add r1, sp, #0xd6
    mov r0, r4
    bl __less_dec
    cmp r0, #0
    beq @L_0201d3e0
@L_0201d2dc:
    cmp r6, #0
    bne @L_0201d3a0
    add r0, sp, #0xd6
    add r1, sp, #0x64
    bl __less_dec
    cmp r0, #0
    bne @L_0201d3a0
    add r3, sp, #0x8a
    add r5, sp, #0x3e
    mov r2, #9
@L_0201d304:
    ldrh r0, [r3, #2]
    ldrh r1, [r3], #4
    subs r2, r2, #1
    strh r0, [r5, #2]
    strh r1, [r5], #4
    bne @L_0201d304
    ldrh r0, [r3]
    add r3, sp, #0x64
    add r4, sp, #0x8a
    strh r0, [r5]
    mov r2, #9
@L_0201d330:
    ldrh r0, [r3, #2]
    ldrh r1, [r3], #4
    subs r2, r2, #1
    strh r0, [r4, #2]
    strh r1, [r4], #4
    bne @L_0201d330
    ldrh r0, [r3]
    add r3, sp, #0x3e
    add r5, sp, #0x64
    strh r0, [r4]
    mov r2, #9
@L_0201d35c:
    ldrh r0, [r3, #2]
    ldrh r1, [r3], #4
    subs r2, r2, #1
    strh r0, [r5, #2]
    strh r1, [r5], #4
    bne @L_0201d35c
    ldrh r4, [r3]
    ldr r2, [sp, #8]
    ldr r0, [sp]
    ldr r3, [sp, #0xc]
    ldr r1, [sp, #4]
    strh r4, [r5]
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    str r2, [sp]
    str r3, [sp, #4]
    b @L_0201d3e0
@L_0201d3a0:
    add r10, sp, #0x64
    add r3, sp, #0x8a
    mov r2, #9
@L_0201d3ac:
    ldrh r0, [r10, #2]
    ldrh r1, [r10], #4
    subs r2, r2, #1
    strh r0, [r3, #2]
    strh r1, [r3], #4
    bne @L_0201d3ac
    ldrh r2, [r10]
    ldr r0, [sp]
    ldr r1, [sp, #4]
    strh r2, [r3]
    str r0, [sp, #8]
    str r1, [sp, #0xc]
    b @L_0201d27c
@L_0201d3e0:
    add r5, sp, #0x3e
    add r2, sp, #0x8a
    mov r0, r5
    mov r1, r9
    bl func_0201ca00
    add r4, sp, #0x18
    add r1, sp, #0x64
    mov r0, r4
    mov r2, r9
    bl func_0201ca00
    mov r0, r5
    mov r1, r4
    bl func_0201c840
    cmp r0, #0
    beq @L_0201d448
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    and r0, r0, #1
    and r1, r1, r8
    cmp r1, r8
    cmpeq r0, r8
    ldrne r0, [sp]
    ldrne r1, [sp, #4]
    strne r0, [sp, #8]
    strne r1, [sp, #0xc]
    b @L_0201d468
@L_0201d448:
    mov r0, r5
    mov r1, r4
    bl __less_dec
    cmp r0, #0
    ldreq r0, [sp]
    ldreq r1, [sp, #4]
    streq r0, [sp, #8]
    streq r1, [sp, #0xc]
@L_0201d468:
    ldrb r0, [sp, #0xd6]
    cmp r0, #0
    beq @L_0201d490
    mov r0, #0
    ldr r2, [sp, #8]
    ldr r3, [sp, #0xc]
    mov r1, r0
    bl func_02021728
    str r0, [sp, #8]
    str r1, [sp, #0xc]
@L_0201d490:
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    add sp, sp, #0xfc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
