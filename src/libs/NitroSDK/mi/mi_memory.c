// (asm for now)

void MIi_CpuClear16(void);
void MIi_CpuCopy16(void);
void MIi_CpuClear32(void);
void MIi_CpuCopy32(void);
void MIi_CpuSend32(void);
void MIi_CpuClearFast(void);
void MIi_CpuCopyFast(void);
void MI_Copy32B(void);
void MI_Copy36B(void);
void MI_Copy48B(void);
void MI_Copy64B(void);
void MI_CpuFill8(void);
void MI_CpuFill(void);
void MI_CpuCopy8(void);
void MI_CpuComp8(void);
void MI_CpuCopy(void);
void MI_CpuMove(void);
void func_02009bc8(void);
void MI_SwapWord(void);

void func_02009668(void);
void func_020096a4(void);
void func_0200973c(void);
void func_020097d4(void);
void func_02009970(void);
void func_020099ac(void);
void func_02009a48(void);
void func_02009ae4(void);

asm void MIi_CpuClear16(void)
{
    mov r3, #0
@L_0200916c:
    cmp r3, r2
    strlth r0, [r1, r3]
    addlt r3, r3, #2
    blt @L_0200916c
    bx lr
}

asm void MIi_CpuCopy16(void)
{
    mov r12, #0
@L_02009184:
    cmp r12, r2
    ldrlth r3, [r0, r12]
    strlth r3, [r1, r12]
    addlt r12, r12, #2
    blt @L_02009184
    bx lr
}

asm void MIi_CpuClear32(void)
{
    add r12, r1, r2
@L_020091a0:
    cmp r1, r12
    stmltia r1!, {r0}
    blt @L_020091a0
    bx lr
}

asm void MIi_CpuCopy32(void)
{
    add r12, r1, r2
@L_020091b4:
    cmp r1, r12
    ldmltia r0!, {r2}
    stmltia r1!, {r2}
    blt @L_020091b4
    bx lr
}

asm void MIi_CpuSend32(void)
{
    add r12, r0, r2
@L_020091cc:
    cmp r0, r12
    ldmltia r0!, {r2}
    strlt r2, [r1]
    blt @L_020091cc
    bx lr
}

asm void MIi_CpuClearFast(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9}
    add r9, r1, r2
    mov r12, r2, lsr #5
    add r12, r1, r12, lsl #5
    mov r2, r0
    mov r3, r2
    mov r4, r2
    mov r5, r2
    mov r6, r2
    mov r7, r2
    mov r8, r2
@L_0200920c:
    cmp r1, r12
    stmltia r1!, {r0, r2, r3, r4, r5, r6, r7, r8}
    blt @L_0200920c
@L_02009218:
    cmp r1, r9
    stmltia r1!, {r0}
    blt @L_02009218
    ldmia sp!, {r4, r5, r6, r7, r8, r9}
    bx lr
}

asm void MIi_CpuCopyFast(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10}
    add r10, r1, r2
    mov r12, r2, lsr #5
    add r12, r1, r12, lsl #5
@L_0200923c:
    cmp r1, r12
    ldmltia r0!, {r2, r3, r4, r5, r6, r7, r8, r9}
    stmltia r1!, {r2, r3, r4, r5, r6, r7, r8, r9}
    blt @L_0200923c
@L_0200924c:
    cmp r1, r10
    ldmltia r0!, {r2}
    stmltia r1!, {r2}
    blt @L_0200924c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10}
    bx lr
}

asm void MI_Copy32B(void)
{
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3}
    stmia r1!, {r2, r3}
    bx lr
}

asm void MI_Copy36B(void)
{
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    bx lr
}

asm void MI_Copy48B(void)
{
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    bx lr
}

asm void MI_Copy64B(void)
{
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0, {r0, r2, r3, r12}
    stmia r1!, {r0, r2, r3, r12}
    bx lr
}

asm void MI_CpuFill8(void)
{
    cmp r2, #0
    bxeq lr
    tst r0, #1
    beq @L_02009318
    ldrh r12, [r0, #-1]
    and r12, r12, #0xff
    orr r3, r12, r1, lsl #8
    strh r3, [r0, #-1]
    add r0, r0, #1
    subs r2, r2, #1
    bxeq lr
@L_02009318:
    cmp r2, #2
    blo @L_02009360
    orr r1, r1, r1, lsl #8
    tst r0, #2
    beq @L_02009338
    strh r1, [r0], #2
    subs r2, r2, #2
    bxeq lr
@L_02009338:
    orr r1, r1, r1, lsl #16
    bics r3, r2, #3
    beq @L_02009358
    sub r2, r2, r3
    add r12, r3, r0
@L_0200934c:
    str r1, [r0], #4
    cmp r0, r12
    blo @L_0200934c
@L_02009358:
    tst r2, #2
    strneh r1, [r0], #2
@L_02009360:
    tst r2, #1
    bxeq lr
    ldrh r3, [r0]
    and r3, r3, #0xff00
    and r1, r1, #0xff
    orr r1, r1, r3
    strh r1, [r0]
    bx lr
}

asm void MI_CpuFill(void)
{
    cmp r2, #0
    bxeq lr
    cmp r2, #8
    bgt @L_020093c0
    rsb r3, r2, #8
    add pc, pc, r3, lsl #2
    mov r0, r0
    strb r1, [r0], #1
    strb r1, [r0], #1
    strb r1, [r0], #1
    strb r1, [r0], #1
    strb r1, [r0], #1
    strb r1, [r0], #1
    strb r1, [r0], #1
    strb r1, [r0], #1
    bx lr
@L_020093c0:
    orr r1, r1, r1, lsl #8
    orr r1, r1, r1, lsl #16
    tst r0, #1
    subne r2, r2, #1
    strneb r1, [r0], #1
    tst r0, #2
    subne r2, r2, #2
    strneh r1, [r0], #2
    tst r0, #4
    subne r2, r2, #4
    strne r1, [r0], #4
    cmp r2, #0x20
    blt @L_0200942c
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10}
    mov r4, r1
    mov r5, r1
    mov r6, r1
    mov r7, r1
    mov r8, r1
    mov r9, r1
    mov r10, r1
    subs r2, r2, #0x20
@L_02009418:
    stmgeia r0!, {r1, r4, r5, r6, r7, r8, r9, r10}
    subges r2, r2, #0x20
    bge @L_02009418
    add r2, r2, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10}
@L_0200942c:
    cmp r2, #4
    blt @L_02009448
    subs r2, r2, #4
@L_02009438:
    strge r1, [r0], #4
    subs r2, r2, #4
    bge @L_02009438
    add r2, r2, #4
@L_02009448:
    subs r2, r2, #1
    strgeb r1, [r0], #1
    subges r2, r2, #1
    strgeb r1, [r0], #1
    subges r2, r2, #1
    strgeb r1, [r0], #1
    bx lr
}

asm void MI_CpuCopy8(void)
{
    cmp r2, #0
    bxeq lr
    tst r1, #1
    beq @L_020094a4
    ldrh r12, [r1, #-1]
    and r12, r12, #0xff
    tst r0, #1
    ldrneh r3, [r0, #-1]
    movne r3, r3, lsr #8
    ldreqh r3, [r0]
    orr r3, r12, r3, lsl #8
    strh r3, [r1, #-1]
    add r0, r0, #1
    add r1, r1, #1
    subs r2, r2, #1
    bxeq lr
@L_020094a4:
    eor r12, r1, r0
    tst r12, #1
    beq @L_020094f8
    bic r0, r0, #1
    ldrh r12, [r0], #2
    mov r3, r12, lsr #8
    subs r2, r2, #2
    blo @L_020094dc
@L_020094c4:
    ldrh r12, [r0], #2
    orr r12, r3, r12, lsl #8
    strh r12, [r1], #2
    mov r3, r12, lsr #0x10
    subs r2, r2, #2
    bhs @L_020094c4
@L_020094dc:
    tst r2, #1
    bxeq lr
    ldrh r12, [r1]
    and r12, r12, #0xff00
    orr r12, r12, r3
    strh r12, [r1]
    bx lr
@L_020094f8:
    tst r12, #2
    beq @L_02009524
    bics r3, r2, #1
    beq @L_02009570
    sub r2, r2, r3
    add r12, r3, r1
@L_02009510:
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    cmp r1, r12
    blo @L_02009510
    b @L_02009570
@L_02009524:
    cmp r2, #2
    blo @L_02009570
    tst r1, #2
    beq @L_02009544
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    subs r2, r2, #2
    bxeq lr
@L_02009544:
    bics r3, r2, #3
    beq @L_02009564
    sub r2, r2, r3
    add r12, r3, r1
@L_02009554:
    ldr r3, [r0], #4
    str r3, [r1], #4
    cmp r1, r12
    blo @L_02009554
@L_02009564:
    tst r2, #2
    ldrneh r3, [r0], #2
    strneh r3, [r1], #2
@L_02009570:
    tst r2, #1
    bxeq lr
    ldrh r2, [r1]
    ldrh r0, [r0]
    and r2, r2, #0xff00
    and r0, r0, #0xff
    orr r0, r2, r0
    strh r0, [r1]
    bx lr
}

asm void MI_CpuComp8(void)
{
    add r12, r0, r2
    cmp r0, r12
    bhs @L_020095bc
@L_020095a0:
    ldrb r3, [r0], #1
    ldrb r2, [r1], #1
    subs r2, r3, r2
    movne r0, r2
    bxne lr
    cmp r0, r12
    blo @L_020095a0
@L_020095bc:
    mov r0, #0
    bx lr
}

asm void MI_CpuCopy(void)
{
    cmp r2, #8
    bgt @L_0200961c
    rsb r3, r2, #8
    add pc, pc, r3, lsl #3
    mov r0, r0
    ldrb r3, [r0], #1
    strb r3, [r1], #1
    ldrb r3, [r0], #1
    strb r3, [r1], #1
    ldrb r3, [r0], #1
    strb r3, [r1], #1
    ldrb r3, [r0], #1
    strb r3, [r1], #1
    ldrb r3, [r0], #1
    strb r3, [r1], #1
    ldrb r3, [r0], #1
    strb r3, [r1], #1
    ldrb r3, [r0], #1
    strb r3, [r1], #1
    ldrb r3, [r0], #1
    strb r3, [r1], #1
    bx lr
@L_0200961c:
    tst r0, #1
    subne r2, r2, #1
    ldrneb r3, [r0], #1
    strneb r3, [r1], #1
    tst r0, #2
    subne r2, r2, #2
    ldrneb r3, [r0], #1
    strneb r3, [r1], #1
    ldrneb r3, [r0], #1
    strneb r3, [r1], #1
    and r3, r1, #3
    bic r1, r1, #3
    cmp r3, #0
    beq func_02009668
    cmp r3, #1
    beq func_020096a4
    cmp r3, #2
    beq func_0200973c
    b func_020097d4
    dcd 0xe92d47f0
    dcd 0xe2522020
    dcd 0xa8b047f0
    dcd 0xa8a147f0
    dcd 0xa2522020
    dcd 0xaafffffb
    dcd 0xe2822020
    dcd 0xe8bd47f0
    dcd 0xe2522004
    dcd 0xa4903004
    dcd 0xa4813004
    dcd 0xa2522004
    dcd 0xaafffffb
    dcd 0xe2822004
    dcd 0xea000071
    dcd 0xe591c000
    dcd 0xe1a0cc0c
    dcd 0xe1a0cc2c
    dcd 0xe92d47f0
    dcd 0xe2522020
    dcd 0xa8b047f0
    dcd 0xa1a03c24
    dcd 0xa18c4404
    dcd 0xa1a0cc25
    dcd 0xa1835405
    dcd 0xa1a03c26
    dcd 0xa18c6406
    dcd 0xa1a0cc27
    dcd 0xa1837407
    dcd 0xa1a03c28
    dcd 0xa18c8408
    dcd 0xa1a0cc29
    dcd 0xa1839409
    dcd 0xa1a03c2a
    dcd 0xa18ca40a
    dcd 0xa1a0cc2e
    dcd 0xa183e40e
    dcd 0xa8a147f0
    dcd 0xa2522020
    dcd 0xaaffffeb
    dcd 0xe2822020
    dcd 0xe8bd47f0
    dcd 0xe2522004
    dcd 0xa4903004
    dcd 0xa18cc403
    dcd 0xa481c004
    dcd 0xa1a0cc23
    dcd 0xa2522004
    dcd 0xaafffff9
    dcd 0xe2822004
    dcd 0xe2400001
    dcd 0xe2822001
    dcd 0xea00004b
    dcd 0xe591c000
    dcd 0xe1a0c80c
    dcd 0xe1a0c82c
    dcd 0xe92d47f0
    dcd 0xe2522020
    dcd 0xa8b047f0
    dcd 0xa1a03824
    dcd 0xa18c4804
    dcd 0xa1a0c825
    dcd 0xa1835805
    dcd 0xa1a03826
    dcd 0xa18c6806
    dcd 0xa1a0c827
    dcd 0xa1837807
    dcd 0xa1a03828
    dcd 0xa18c8808
    dcd 0xa1a0c829
    dcd 0xa1839809
    dcd 0xa1a0382a
    dcd 0xa18ca80a
    dcd 0xa1a0c82e
    dcd 0xa183e80e
    dcd 0xa8a147f0
    dcd 0xa2522020
    dcd 0xaaffffeb
    dcd 0xe2822020
    dcd 0xe8bd47f0
    dcd 0xe2522004
    dcd 0xa4903004
    dcd 0xa18cc803
    dcd 0xa481c004
    dcd 0xa1a0c823
    dcd 0xa2522004
    dcd 0xaafffff9
    dcd 0xe2822004
    dcd 0xe2400002
    dcd 0xe2822002
    dcd 0xea000025
    dcd 0xe591c000
    dcd 0xe1a0c40c
    dcd 0xe1a0c42c
    dcd 0xe92d47f0
    dcd 0xe2522020
    dcd 0xa8b047f0
    dcd 0xa1a03424
    dcd 0xa18c4c04
    dcd 0xa1a0c425
    dcd 0xa1835c05
    dcd 0xa1a03426
    dcd 0xa18c6c06
    dcd 0xa1a0c427
    dcd 0xa1837c07
    dcd 0xa1a03428
    dcd 0xa18c8c08
    dcd 0xa1a0c429
    dcd 0xa1839c09
    dcd 0xa1a0342a
    dcd 0xa18cac0a
    dcd 0xa1a0c42e
    dcd 0xa183ec0e
    dcd 0xa8a147f0
    dcd 0xa2522020
    dcd 0xaaffffeb
    dcd 0xe2822020
    dcd 0xe8bd47f0
    dcd 0xe2522004
    dcd 0xa4903004
    dcd 0xa18ccc03
    dcd 0xa481c004
    dcd 0xa1a0c423
    dcd 0xa2522004
    dcd 0xaafffff9
    dcd 0xe2822004
    dcd 0xe2400003
    dcd 0xe2822003
    dcd 0xeaffffff
    dcd 0xe3120004
    dcd 0x14d03001
    dcd 0x14c13001
    dcd 0x14d03001
    dcd 0x14c13001
    dcd 0x14d03001
    dcd 0x14c13001
    dcd 0x14d03001
    dcd 0x14c13001
    dcd 0xe3120002
    dcd 0x14d03001
    dcd 0x14c13001
    dcd 0x14d03001
    dcd 0x14c13001
    dcd 0xe3120001
    dcd 0x14d03001
    dcd 0x14c13001
    dcd 0xe12fff1e
}

asm void MI_CpuMove(void)
{
    cmp r2, #0
    subnes r3, r0, r1
    bxeq lr
    bgt MI_CpuCopy
    add r1, r1, r2
    add r0, r0, r2
    cmp r2, #8
    bgt @L_02009924
    rsb r3, r2, #8
    add pc, pc, r3, lsl #3
    mov r0, r0
    ldrb r3, [r0, #-1]!
    strb r3, [r1, #-1]!
    ldrb r3, [r0, #-1]!
    strb r3, [r1, #-1]!
    ldrb r3, [r0, #-1]!
    strb r3, [r1, #-1]!
    ldrb r3, [r0, #-1]!
    strb r3, [r1, #-1]!
    ldrb r3, [r0, #-1]!
    strb r3, [r1, #-1]!
    ldrb r3, [r0, #-1]!
    strb r3, [r1, #-1]!
    ldrb r3, [r0, #-1]!
    strb r3, [r1, #-1]!
    ldrb r3, [r0, #-1]!
    strb r3, [r1, #-1]!
    bx lr
@L_02009924:
    tst r0, #2
    subne r2, r2, #2
    ldrneb r3, [r0, #-1]!
    strneb r3, [r1, #-1]!
    ldrneb r3, [r0, #-1]!
    strneb r3, [r1, #-1]!
    tst r0, #1
    subne r2, r2, #1
    ldrneb r3, [r0, #-1]!
    strneb r3, [r1, #-1]!
    and r3, r1, #3
    bic r1, r1, #3
    cmp r3, #0
    beq func_02009970
    cmp r3, #1
    beq func_020099ac
    cmp r3, #2
    beq func_02009a48
    b func_02009ae4
    dcd 0xe92d47f0
    dcd 0xe2522020
    dcd 0xa93047f0
    dcd 0xa92147f0
    dcd 0xa2522020
    dcd 0xaafffffb
    dcd 0xe2822020
    dcd 0xe8bd47f0
    dcd 0xe2522004
    dcd 0xa5303004
    dcd 0xa5213004
    dcd 0xa2522004
    dcd 0xaafffffb
    dcd 0xe2822004
    dcd 0xea000074
    dcd 0xe591c000
    dcd 0xe1a0c42c
    dcd 0xe1a0c40c
    dcd 0xe92d47f0
    dcd 0xe2522020
    dcd 0xa93047f0
    dcd 0xa1a0340e
    dcd 0xa18cec2e
    dcd 0xa1a0c40a
    dcd 0xa183ac2a
    dcd 0xa1a03409
    dcd 0xa18c9c29
    dcd 0xa1a0c408
    dcd 0xa1838c28
    dcd 0xa1a03407
    dcd 0xa18c7c27
    dcd 0xa1a0c406
    dcd 0xa1836c26
    dcd 0xa1a03405
    dcd 0xa18c5c25
    dcd 0xa1a0c404
    dcd 0xa1834c24
    dcd 0xa82147f0
    dcd 0xa2522020
    dcd 0xaaffffeb
    dcd 0xe2822020
    dcd 0xe8bd47f0
    dcd 0xe2522004
    dcd 0xa5303004
    dcd 0xa18ccc23
    dcd 0xa401c004
    dcd 0xa1a0c403
    dcd 0xa2522004
    dcd 0xaafffff9
    dcd 0xe2822004
    dcd 0xe2811004
    dcd 0xe2800003
    dcd 0xe2822003
    dcd 0xea00004d
    dcd 0xe591c000
    dcd 0xe1a0c82c
    dcd 0xe1a0c80c
    dcd 0xe92d47f0
    dcd 0xe2522020
    dcd 0xa93047f0
    dcd 0xa1a0380e
    dcd 0xa18ce82e
    dcd 0xa1a0c80a
    dcd 0xa183a82a
    dcd 0xa1a03809
    dcd 0xa18c9829
    dcd 0xa1a0c808
    dcd 0xa1838828
    dcd 0xa1a03807
    dcd 0xa18c7827
    dcd 0xa1a0c806
    dcd 0xa1836826
    dcd 0xa1a03805
    dcd 0xa18c5825
    dcd 0xa1a0c804
    dcd 0xa1834824
    dcd 0xa82147f0
    dcd 0xa2522020
    dcd 0xaaffffeb
    dcd 0xe2822020
    dcd 0xe8bd47f0
    dcd 0xe2522004
    dcd 0xa5303004
    dcd 0xa18cc823
    dcd 0xa401c004
    dcd 0xa1a0c803
    dcd 0xa2522004
    dcd 0xaafffff9
    dcd 0xe2822004
    dcd 0xe2811004
    dcd 0xe2800002
    dcd 0xe2822002
    dcd 0xea000026
    dcd 0xe591c000
    dcd 0xe1a0cc2c
    dcd 0xe1a0cc0c
    dcd 0xe92d47f0
    dcd 0xe2522020
    dcd 0xa93047f0
    dcd 0xa1a03c0e
    dcd 0xa18ce42e
    dcd 0xa1a0cc0a
    dcd 0xa183a42a
    dcd 0xa1a03c09
    dcd 0xa18c9429
    dcd 0xa1a0cc08
    dcd 0xa1838428
    dcd 0xa1a03c07
    dcd 0xa18c7427
    dcd 0xa1a0cc06
    dcd 0xa1836426
    dcd 0xa1a03c05
    dcd 0xa18c5425
    dcd 0xa1a0cc04
    dcd 0xa1834424
    dcd 0xa82147f0
    dcd 0xa2522020
    dcd 0xaaffffeb
    dcd 0xe2822020
    dcd 0xe8bd47f0
    dcd 0xe2522004
    dcd 0xa5303004
    dcd 0xa18cc423
    dcd 0xa401c004
    dcd 0xa1a0cc03
    dcd 0xa2522004
    dcd 0xaafffff9
    dcd 0xe2822004
    dcd 0xe2811004
    dcd 0xe2800001
    dcd 0xe2822001
    dcd 0xeaffffff
    dcd 0xe3120004
    dcd 0x15703001
    dcd 0x15613001
    dcd 0x15703001
    dcd 0x15613001
    dcd 0x15703001
    dcd 0x15613001
    dcd 0x15703001
    dcd 0x15613001
    dcd 0xe3120002
    dcd 0x15703001
    dcd 0x15613001
    dcd 0x15703001
    dcd 0x15613001
    dcd 0xe3120001
    dcd 0x15703001
    dcd 0x15613001
    dcd 0xe12fff1e
}

#pragma thumb on
asm void func_02009bc8(void)
{
    mov r1, #0 // 0x02009bc8
    mov r2, #0 // 0x02009bca
    mov r3, #0 // 0x02009bcc
    stmia r0!, {r1, r2, r3} // 0x02009bce
    stmia r0!, {r1, r2, r3} // 0x02009bd0
    stmia r0!, {r1, r2, r3} // 0x02009bd2
    bx lr // 0x02009bd4
    dcb 0x00
    dcb 0x00
}
#pragma thumb off

asm void MI_SwapWord(void)
{
    swp r0, r0, [r1]
    bx lr
}
