// (asm for now)

extern char data_020a44f8[];
void func_02022948(void);
void _ll_udiv(void);
void func_0201ce20(void);
extern char data_020ab2f0[];
extern char data_020ab2f8[];
extern char data_020ab300[];
extern char data_020ab304[];
extern char data_020ab308[];
extern char data_020ab310[];
extern char data_020ab318[];
extern char data_020ab31c[];
void fabs(void);
void func_020222bc(void);
void func_02022194(void);
void strchr(void);
void strlen(void);
void func_0201a77c(void);
extern char data_020ab320[];
void wcstombs(void);
extern char data_020ab324[];
void memchr(void);

asm void __fill_mem(void)
{
    cmp r2, #0x20
    and r3, r1, #0xff
    blo @L_020184d0
    rsb r1, r0, #0
    ands r12, r1, #3
    beq @L_0201846c
    sub r2, r2, r12
    and r1, r3, #0xff
@L_02018460:
    strb r1, [r0], #1
    subs r12, r12, #1
    bne @L_02018460
@L_0201846c:
    cmp r3, #0
    movne r1, r3, lsl #0x10
    orrne r1, r1, r3, lsl #24
    orrne r1, r1, r3, lsl #8
    orrne r3, r3, r1
    movs r1, r2, lsr #5
    beq @L_020184b4
@L_02018488:
    str r3, [r0]
    str r3, [r0, #4]
    str r3, [r0, #8]
    str r3, [r0, #0xc]
    str r3, [r0, #0x10]
    str r3, [r0, #0x14]
    str r3, [r0, #0x18]
    str r3, [r0, #0x1c]
    add r0, r0, #0x20
    subs r1, r1, #1
    bne @L_02018488
@L_020184b4:
    and r1, r2, #0x1f
    movs r1, r1, lsr #2
    beq @L_020184cc
@L_020184c0:
    str r3, [r0], #4
    subs r1, r1, #1
    bne @L_020184c0
@L_020184cc:
    and r2, r2, #3
@L_020184d0:
    cmp r2, #0
    bxeq lr
    and r1, r3, #0xff
@L_020184dc:
    strb r1, [r0], #1
    subs r2, r2, #1
    bne @L_020184dc
    bx lr
}

asm void func_020184ec(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    ldrb lr, [r0, #1]
    mov r5, #0
    mov r6, #1
    mov r4, r2
    strb r6, [sp]
    strb r5, [sp, #1]
    strb r5, [sp, #2]
    strb r5, [sp, #3]
    strb r5, [sp, #4]
    str r5, [sp, #8]
    str r5, [sp, #0xc]
    cmp lr, #0x25
    add r12, r0, #1
    bne @L_02018548
    add r0, sp, #0
    strb lr, [sp, #5]
    ldmia r0, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    add sp, sp, #0x10
    add r0, r12, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02018548:
    mov r0, #2
    mov r3, r0
@L_02018550:
    mov r7, r6
    cmp lr, #0x2b
    bgt @L_02018580
    bge @L_020185a8
    cmp lr, #0x23
    bgt @L_020185d8
    cmp lr, #0x20
    blt @L_020185d8
    beq @L_020185b0
    cmp lr, #0x23
    beq @L_020185c0
    b @L_020185d8
@L_02018580:
    cmp lr, #0x30
    bgt @L_020185d8
    cmp lr, #0x2d
    blt @L_020185d8
    beq @L_020185a0
    cmp lr, #0x30
    beq @L_020185c8
    b @L_020185d8
@L_020185a0:
    strb r5, [sp]
    b @L_020185dc
@L_020185a8:
    strb r6, [sp, #1]
    b @L_020185dc
@L_020185b0:
    ldrb r2, [sp, #1]
    cmp r2, #1
    strneb r3, [sp, #1]
    b @L_020185dc
@L_020185c0:
    strb r6, [sp, #3]
    b @L_020185dc
@L_020185c8:
    ldrb r2, [sp]
    cmp r2, #0
    strneb r0, [sp]
    b @L_020185dc
@L_020185d8:
    mov r7, r5
@L_020185dc:
    cmp r7, #0
    ldrneb lr, [r12, #1]!
    bne @L_02018550
    cmp lr, #0x2a
    mov r0, #0
    mov r3, #0xff
    bne @L_02018624
    ldr r2, [r1]
    ldrb lr, [r12, #1]!
    add r2, r2, #4
    str r2, [r1]
    ldr r2, [r2, #-4]
    cmp r2, #0
    str r2, [sp, #8]
    rsblt r2, r2, #0
    strltb r0, [sp]
    strlt r2, [sp, #8]
    b @L_02018660
@L_02018624:
    ldr r6, =data_020a44f8
    mov r2, #0xa
    b @L_02018644
@L_02018630:
    ldr r5, [sp, #8]
    sub r7, lr, #0x30
    mla r7, r5, r2, r7
    ldrb lr, [r12, #1]!
    str r7, [sp, #8]
@L_02018644:
    cmp lr, #0x80
    movhs r5, r0
    movlo r5, lr, lsl #1
    ldrloh r5, [r6, r5]
    andlo r5, r5, #8
    cmp r5, #0
    bne @L_02018630
@L_02018660:
    ldr r2, [sp, #8]
    ldr r0, =0x1fd
    cmp r2, r0
    mov r2, #1
    mov r0, #0
    ble @L_02018694
    add r0, sp, #0
    strb r3, [sp, #5]
    ldmia r0, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    add sp, sp, #0x10
    add r0, r12, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02018694:
    cmp lr, #0x2e
    bne @L_0201870c
    ldrb lr, [r12, #1]!
    strb r2, [sp, #2]
    cmp lr, #0x2a
    bne @L_020186d0
    ldr r5, [r1]
    ldrb lr, [r12, #1]!
    add r5, r5, #4
    str r5, [r1]
    ldr r1, [r5, #-4]
    cmp r1, #0
    str r1, [sp, #0xc]
    strltb r0, [sp, #2]
    b @L_0201870c
@L_020186d0:
    ldr r6, =data_020a44f8
    mov r1, #0xa
    b @L_020186f0
@L_020186dc:
    ldr r5, [sp, #0xc]
    sub lr, lr, #0x30
    mla r7, r5, r1, lr
    ldrb lr, [r12, #1]!
    str r7, [sp, #0xc]
@L_020186f0:
    cmp lr, #0x80
    movhs r5, r0
    movlo r5, lr, lsl #1
    ldrloh r5, [r6, r5]
    andlo r5, r5, #8
    cmp r5, #0
    bne @L_020186dc
@L_0201870c:
    cmp lr, #0x6c
    mov r0, #1
    bgt @L_02018744
    cmp lr, #0x68
    blt @L_02018738
    beq @L_02018760
    cmp lr, #0x6a
    beq @L_020187a4
    cmp lr, #0x6c
    beq @L_02018778
    b @L_020187bc
@L_02018738:
    cmp lr, #0x4c
    beq @L_02018798
    b @L_020187bc
@L_02018744:
    cmp lr, #0x74
    bgt @L_02018754
    beq @L_020187ac
    b @L_020187bc
@L_02018754:
    cmp lr, #0x7a
    beq @L_020187b4
    b @L_020187bc
@L_02018760:
    ldrb r1, [r12, #1]
    mov r5, #2
    strb r5, [sp, #4]
    cmp r1, #0x68
    streqb r0, [sp, #4]
    b @L_02018790
@L_02018778:
    ldrb r1, [r12, #1]
    mov r5, #3
    strb r5, [sp, #4]
    cmp r1, #0x6c
    moveq r1, #4
    streqb r1, [sp, #4]
@L_02018790:
    ldreqb lr, [r12, #1]!
    b @L_020187c0
@L_02018798:
    mov r1, #9
@L_0201879c:
    strb r1, [sp, #4]
    b @L_020187c0
@L_020187a4:
    mov r1, #6
    b @L_0201879c
@L_020187ac:
    mov r1, #8
    b @L_0201879c
@L_020187b4:
    mov r1, #7
    b @L_0201879c
@L_020187bc:
    mov r0, #0
@L_020187c0:
    cmp r0, #0
    ldrneb lr, [r12, #1]!
    strb lr, [sp, #5]
    cmp lr, #0x61
    bgt @L_02018814
    bge @L_020188dc
    cmp lr, #0x47
    bgt @L_02018808
    subs r0, lr, #0x41
    addpl pc, pc, r0, lsl #2
    b @L_020189d4
    b @L_020188dc
    b @L_020189d4
    b @L_020189d4
    b @L_020189d4
    b @L_02018920
    b @L_020188b8
    b @L_02018914
@L_02018808:
    cmp lr, #0x58
    beq @L_02018888
    b @L_020189d4
@L_02018814:
    cmp lr, #0x63
    bgt @L_02018824
    beq @L_02018978
    b @L_020189d4
@L_02018824:
    sub r0, lr, #0x64
    cmp r0, #0x14
    addls pc, pc, r0, lsl #2
    b @L_020189d4
    b @L_02018888
    b @L_02018920
    b @L_020188b8
    b @L_02018914
    b @L_020189d4
    b @L_02018888
    b @L_020189d4
    b @L_020189d4
    b @L_020189d4
    b @L_020189d4
    b @L_020189c4
    b @L_02018888
    b @L_02018958
    b @L_020189d4
    b @L_020189d4
    b @L_020189a4
    b @L_020189d4
    b @L_02018888
    b @L_020189d4
    b @L_020189d4
    b @L_02018888
@L_02018888:
    ldrb r0, [sp, #4]
    cmp r0, #9
    streqb r3, [sp, #5]
    beq @L_020189d8
    ldrb r0, [sp, #2]
    cmp r0, #0
    streq r2, [sp, #0xc]
    beq @L_020189d8
    ldrb r0, [sp]
    cmp r0, #2
    streqb r2, [sp]
    b @L_020189d8
@L_020188b8:
    ldrb r0, [sp, #4]
    cmp r0, #2
    cmpne r0, #6
    cmpne r0, #7
    cmpne r0, #8
    cmpne r0, #4
    streqb r3, [sp, #5]
    beq @L_020189d8
    b @L_02018944
@L_020188dc:
    ldrb r0, [sp, #2]
    cmp r0, #0
    moveq r0, #0xd
    streq r0, [sp, #0xc]
    ldrb r0, [sp, #4]
    cmp r0, #2
    cmpne r0, #6
    cmpne r0, #7
    cmpne r0, #8
    cmpne r0, #4
    beq @L_02018910
    cmp r0, #1
    bne @L_020189d8
@L_02018910:
    b @L_020189d4
@L_02018914:
    ldr r0, [sp, #0xc]
    cmp r0, #0
    streq r2, [sp, #0xc]
@L_02018920:
    ldrb r0, [sp, #4]
    cmp r0, #2
    cmpne r0, #1
    cmpne r0, #6
    cmpne r0, #7
    cmpne r0, #8
    cmpne r0, #4
    streqb r3, [sp, #5]
    beq @L_020189d8
@L_02018944:
    ldrb r0, [sp, #2]
    cmp r0, #0
    moveq r0, #6
    streq r0, [sp, #0xc]
    b @L_020189d8
@L_02018958:
    mov r3, #0x78
    mov r1, #3
    mov r0, #8
    strb r3, [sp, #5]
    strb r2, [sp, #3]
    strb r1, [sp, #4]
    str r0, [sp, #0xc]
    b @L_020189d8
@L_02018978:
    ldrb r1, [sp, #4]
    cmp r1, #3
    moveq r0, #5
    streqb r0, [sp, #4]
    beq @L_020189d8
    ldrb r0, [sp, #2]
    cmp r0, #0
    bne @L_020189a0
    cmp r1, #0
    beq @L_020189d8
@L_020189a0:
    b @L_020189d4
@L_020189a4:
    ldrb r0, [sp, #4]
    cmp r0, #3
    moveq r0, #5
    streqb r0, [sp, #4]
    beq @L_020189d8
    cmp r0, #0
    strneb r3, [sp, #5]
    b @L_020189d8
@L_020189c4:
    ldrb r0, [sp, #4]
    cmp r0, #9
    streqb r3, [sp, #5]
    b @L_020189d8
@L_020189d4:
    strb r3, [sp, #5]
@L_020189d8:
    add r0, sp, #0
    ldmia r0, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    add r0, r12, #1
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_020189f8(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    movs r10, r0
    mov r0, #0
    mov r5, r1
    str r0, [sp, #0xc]
    ldr r7, [sp, #0x4c]
    mov r6, r0
    strb r0, [r5, #-1]!
    ldrb r0, [sp, #0x43]
    str r1, [sp]
    ldrb r8, [sp, #0x45]
    str r0, [sp, #4]
    ldr r0, [sp, #0x48]
    ldrb r11, [sp, #0x41]
    str r0, [sp, #8]
    cmpeq r7, #0
    bne @L_02018a6c
    ldr r0, [sp, #4]
    cmp r0, #0
    beq @L_02018a58
    cmp r8, #0x6f
    beq @L_02018a6c
@L_02018a58:
    add sp, sp, #0x10
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02018a6c:
    cmp r8, #0x69
    bgt @L_02018a94
    bge @L_02018ac8
    cmp r8, #0x58
    bgt @L_02018a88
    beq @L_02018af8
    b @L_02018b00
@L_02018a88:
    cmp r8, #0x64
    beq @L_02018ac8
    b @L_02018b00
@L_02018a94:
    cmp r8, #0x6f
    bgt @L_02018aa8
    moveq r4, #8
    moveq r11, #0
    b @L_02018b00
@L_02018aa8:
    cmp r8, #0x78
    bgt @L_02018b00
    cmp r8, #0x75
    blt @L_02018b00
    beq @L_02018af0
    cmp r8, #0x78
    beq @L_02018af8
    b @L_02018b00
@L_02018ac8:
    cmp r10, #0
    mov r4, #0xa
    bge @L_02018b00
    mov r0, r10, asr #0x1f
    cmp r0, #0x80000000
    mov r0, #1
    cmpeq r10, #0
    rsbne r10, r10, #0
    str r0, [sp, #0xc]
    b @L_02018b00
@L_02018af0:
    mov r4, #0xa
    b @L_02018afc
@L_02018af8:
    mov r4, #0x10
@L_02018afc:
    mov r11, #0
@L_02018b00:
    mov r0, r10
    mov r1, r4
    bl func_02022948
    mov r9, r1
    mov r0, r10
    mov r1, r4
    bl func_02022948
    cmp r9, #0xa
    mov r10, r0
    addlt r9, r9, #0x30
    blt @L_02018b38
    cmp r8, #0x78
    addeq r9, r9, #0x57
    addne r9, r9, #0x37
@L_02018b38:
    cmp r10, #0
    strb r9, [r5, #-1]!
    add r6, r6, #1
    bne @L_02018b00
    cmp r4, #8
    bne @L_02018b6c
    ldr r0, [sp, #4]
    cmp r0, #0
    ldrneb r0, [r5]
    cmpne r0, #0x30
    movne r0, #0x30
    strneb r0, [r5, #-1]!
    addne r6, r6, #1
@L_02018b6c:
    ldrb r0, [sp, #0x40]
    cmp r0, #2
    bne @L_02018ba0
    ldr r0, [sp, #0xc]
    ldr r7, [sp, #8]
    cmp r0, #0
    cmpeq r11, #0
    subne r7, r7, #1
    cmp r4, #0x10
    bne @L_02018ba0
    ldr r0, [sp, #4]
    cmp r0, #0
    subne r7, r7, #2
@L_02018ba0:
    ldr r0, [sp]
    sub r1, r0, r5
    ldr r0, =0x1fd
    add r1, r7, r1
    cmp r1, r0
    addgt sp, sp, #0x10
    movgt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addgt sp, sp, #0x10
    bxgt lr
    cmp r6, r7
    bge @L_02018be4
    mov r0, #0x30
@L_02018bd4:
    add r6, r6, #1
    cmp r6, r7
    strb r0, [r5, #-1]!
    blt @L_02018bd4
@L_02018be4:
    cmp r4, #0x10
    bne @L_02018c00
    ldr r0, [sp, #4]
    cmp r0, #0
    movne r0, #0x30
    strneb r8, [r5, #-1]
    strneb r0, [r5, #-2]!
@L_02018c00:
    ldr r0, [sp, #0xc]
    cmp r0, #0
    movne r0, #0x2d
    strneb r0, [r5, #-1]!
    bne @L_02018c30
    cmp r11, #1
    moveq r0, #0x2b
    streqb r0, [r5, #-1]!
    beq @L_02018c30
    cmp r11, #2
    moveq r0, #0x20
    streqb r0, [r5, #-1]!
@L_02018c30:
    mov r0, r5
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02018c48(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r9, r1
    mov r1, #0
    mov r10, r0
    mov r7, r2
    mov r0, r1
    strb r0, [r7, #-1]!
    ldr r0, [sp, #0x58]
    cmp r9, #0
    str r0, [sp, #0x10]
    ldrb r0, [sp, #0x4f]
    cmpeq r10, #0
    str r2, [sp]
    str r0, [sp, #4]
    ldr r0, [sp, #0x54]
    str r1, [sp, #0x14]
    str r0, [sp, #8]
    ldrb r0, [sp, #0x4d]
    mov r8, r1
    ldrb r11, [sp, #0x51]
    str r0, [sp, #0xc]
    ldreq r0, [sp, #0x10]
    cmpeq r0, #0
    bne @L_02018cd8
    ldr r0, [sp, #4]
    cmp r0, #0
    beq @L_02018cc4
    cmp r11, #0x6f
    beq @L_02018cd8
@L_02018cc4:
    add sp, sp, #0x18
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02018cd8:
    cmp r11, #0x69
    bgt @L_02018d00
    bge @L_02018d38
    cmp r11, #0x58
    bgt @L_02018cf4
    beq @L_02018d7c
    b @L_02018d88
@L_02018cf4:
    cmp r11, #0x64
    beq @L_02018d38
    b @L_02018d88
@L_02018d00:
    cmp r11, #0x6f
    bgt @L_02018d18
    moveq r5, #0
    streq r5, [sp, #0xc]
    moveq r6, #8
    b @L_02018d88
@L_02018d18:
    cmp r11, #0x78
    bgt @L_02018d88
    cmp r11, #0x75
    blt @L_02018d88
    beq @L_02018d6c
    cmp r11, #0x78
    beq @L_02018d7c
    b @L_02018d88
@L_02018d38:
    subs r0, r10, #0
    sbcs r0, r9, #0
    mov r6, #0xa
    mov r5, #0
    bge @L_02018d88
    cmp r9, #0x80000000
    cmpeq r10, r5
    beq @L_02018d60
    rsbs r10, r10, #0
    rsc r9, r9, #0
@L_02018d60:
    mov r0, #1
    str r0, [sp, #0x14]
    b @L_02018d88
@L_02018d6c:
    mov r5, #0
    str r5, [sp, #0xc]
    mov r6, #0xa
    b @L_02018d88
@L_02018d7c:
    mov r5, #0
    str r5, [sp, #0xc]
    mov r6, #0x10
@L_02018d88:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    bl .L_020226e0
    mov r4, r0
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    bl _ll_udiv
    mov r10, r0
    cmp r4, #0xa
    mov r9, r1
    addlt r0, r4, #0x30
    blt @L_02018dd4
    add r0, r4, #0x57
    cmp r11, #0x78
    addne r0, r4, #0x37
@L_02018dd4:
    strb r0, [r7, #-1]!
    cmp r9, #0
    cmpeq r10, #0
    add r8, r8, #1
    bne @L_02018d88
    cmp r5, #0
    cmpeq r6, #8
    bne @L_02018e10
    ldr r0, [sp, #4]
    cmp r0, #0
    ldrneb r0, [r7]
    cmpne r0, #0x30
    movne r0, #0x30
    strneb r0, [r7, #-1]!
    addne r8, r8, #1
@L_02018e10:
    ldrb r0, [sp, #0x4c]
    cmp r0, #2
    bne @L_02018e60
    ldr r0, [sp, #8]
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    cmp r0, #0
    ldreq r0, [sp, #0xc]
    cmpeq r0, #0
    ldrne r0, [sp, #0x10]
    subne r0, r0, #1
    strne r0, [sp, #0x10]
    cmp r5, #0
    cmpeq r6, #0x10
    bne @L_02018e60
    ldr r0, [sp, #4]
    cmp r0, #0
    ldrne r0, [sp, #0x10]
    subne r0, r0, #2
    strne r0, [sp, #0x10]
@L_02018e60:
    ldr r0, [sp]
    ldr r1, =0x1fd
    sub r2, r0, r7
    ldr r0, [sp, #0x10]
    add r0, r0, r2
    cmp r0, r1
    addgt sp, sp, #0x18
    movgt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addgt sp, sp, #0x10
    bxgt lr
    ldr r0, [sp, #0x10]
    cmp r8, r0
    bge @L_02018eb0
    mov r1, #0x30
@L_02018e9c:
    ldr r0, [sp, #0x10]
    add r8, r8, #1
    cmp r8, r0
    strb r1, [r7, #-1]!
    blt @L_02018e9c
@L_02018eb0:
    cmp r5, #0
    cmpeq r6, #0x10
    bne @L_02018ed0
    ldr r0, [sp, #4]
    cmp r0, #0
    movne r0, #0x30
    strneb r11, [r7, #-1]
    strneb r0, [r7, #-2]!
@L_02018ed0:
    ldr r0, [sp, #0x14]
    cmp r0, #0
    movne r0, #0x2d
    strneb r0, [r7, #-1]!
    bne @L_02018f04
    ldr r0, [sp, #0xc]
    cmp r0, #1
    moveq r0, #0x2b
    streqb r0, [r7, #-1]!
    beq @L_02018f04
    cmp r0, #2
    moveq r0, #0x20
    streqb r0, [r7, #-1]!
@L_02018f04:
    mov r0, r7
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02018f1c(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    ldr r6, [sp, #0x88]
    ldr r0, =0x1fd
    ldrb r5, [sp, #0x81]
    cmp r6, r0
    ldr r0, [sp, #0x70]
    ldrb r11, [sp, #0x7f]
    str r0, [sp, #8]
    ldr r0, [sp, #0x74]
    ldrb r4, [sp, #0x7d]
    str r0, [sp, #0xc]
    mov r7, #0
    mov r8, r2
    addgt sp, sp, #0x4c
    movgt r0, r7
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addgt sp, sp, #0x10
    bxgt lr
    ldr r1, [sp, #8]
    mov r9, #0x20
    ldr r2, [sp, #0xc]
    add r0, sp, #0x10
    add r3, sp, #0x14
    strb r7, [sp, #0x10]
    strh r9, [sp, #0x12]
    bl func_0201ce20
    ldrb r0, [sp, #0x19]
    cmp r0, #0x30
    beq @L_02018fac
    cmp r0, #0x49
    beq @L_02018fb4
    cmp r0, #0x4e
    beq @L_020190b8
    b @L_020191bc
@L_02018fac:
    strh r7, [sp, #0x16]
    b @L_020191bc
@L_02018fb4:
    ldrb r0, [sp, #0x14]
    cmp r0, #0
    beq @L_02019044
    cmp r5, #0x41
    sub r0, r8, #5
    bne @L_02019008
    ldr r3, =data_020ab2f0
    add sp, sp, #0x4c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldrb r1, [r3, #4]
    strb r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019008:
    ldr r3, =data_020ab2f8
    add sp, sp, #0x4c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldrb r1, [r3, #4]
    strb r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019044:
    cmp r5, #0x41
    sub r0, r8, #4
    bne @L_02019084
    ldr r3, =data_020ab300
    add sp, sp, #0x4c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019084:
    ldr r3, =data_020ab304
    add sp, sp, #0x4c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_020190b8:
    ldrb r0, [sp, #0x14]
    cmp r0, #0
    beq @L_02019148
    cmp r5, #0x41
    sub r0, r8, #5
    bne @L_0201910c
    ldr r3, =data_020ab308
    add sp, sp, #0x4c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldrb r1, [r3, #4]
    strb r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201910c:
    ldr r3, =data_020ab310
    add sp, sp, #0x4c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldrb r1, [r3, #4]
    strb r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019148:
    cmp r5, #0x41
    sub r0, r8, #4
    bne @L_02019188
    ldr r3, =data_020ab318
    add sp, sp, #0x4c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019188:
    ldr r3, =data_020ab31c
    add sp, sp, #0x4c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_020191bc:
    mov r3, #0
    mov r1, #1
    mov r0, #0x64
    add r7, sp, #0x70
    strb r1, [sp, #0x3c]
    strb r1, [sp, #0x3d]
    strb r3, [sp, #0x3e]
    strb r3, [sp, #0x3f]
    strb r3, [sp, #0x40]
    str r3, [sp, #0x44]
    str r1, [sp, #0x48]
    strb r0, [sp, #0x41]
@L_020191ec:
    rsb r1, r3, #7
    ldrb r2, [r7, r3]
    ldrb r0, [r7, r1]
    strb r0, [r7, r3]
    add r3, r3, #1
    strb r2, [r7, r1]
    cmp r3, #4
    blt @L_020191ec
    ldrb r1, [sp, #0x71]
    ldrb r2, [sp, #0x70]
    ldr r0, =0x7ff
    mov r1, r1, lsl #0x11
    orr r1, r1, r2, lsl #25
    ands r1, r0, r1, lsr #21
    rsbne r0, r0, #0x400
    addne r9, r1, r0
    add r0, sp, #0x3c
    sub r7, sp, #8
    ldmia r0, {r0, r1, r2, r3}
    stmia r7, {r0, r1, r2, r3}
    moveq r9, #0
    mov r0, r9
    mov r1, r8
    ldmia r7, {r2, r3}
    bl func_020189f8
    cmp r5, #0x61
    sub r7, r0, #1
    moveq r0, #0x70
    movne r0, #0x50
    strb r0, [r7]
    mov r0, r6, lsl #2
    mov r9, r6
    cmp r6, #1
    add r10, r0, #0xb
    add lr, sp, #0x70
    blt @L_02019308
    mov r0, #0x30
@L_02019280:
    cmp r10, #0x40
    bge @L_020192f0
    ldrb r1, [lr, r10, asr #3]
    and r2, r10, #7
    rsb r3, r2, #7
    mov r2, r1, asr r3
    sub r1, r10, #4
    and r8, r2, #0xff
    bic r1, r1, #7
    bic r2, r10, #7
    add r12, lr, r10, asr #3
    cmp r2, r1
    ldrneb r1, [r12, #-1]
    movne r1, r1, lsl #8
    movne r1, r1, asr r3
    andne r1, r1, #0xff
    orrne r8, r8, r1
    and r1, r8, #0xf
    cmp r1, #0xa
    addlo r1, r1, #0x30
    andlo r8, r1, #0xff
    blo @L_020192f4
    cmp r5, #0x61
    addeq r1, r1, #0x57
    andeq r8, r1, #0xff
    addne r1, r1, #0x37
    andne r8, r1, #0xff
    b @L_020192f4
@L_020192f0:
    mov r8, r0
@L_020192f4:
    sub r9, r9, #1
    cmp r9, #1
    strb r8, [r7, #-1]!
    sub r10, r10, #4
    bge @L_02019280
@L_02019308:
    cmp r6, #0
    cmpeq r11, #0
    movne r0, #0x2e
    strneb r0, [r7, #-1]!
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    bl fabs
    mov r2, r0
    mov r0, #0
    mov r3, r1
    mov r1, r0
    bl func_020222bc
    movne r0, #0x31
    moveq r0, #0x30
    strb r0, [r7, #-1]!
    mov r0, #0x78
    cmp r5, #0x61
    movne r0, #0x58
    strb r0, [r7, #-1]!
    mov r0, #0x30
    strb r0, [r7, #-1]!
    ldrb r0, [sp, #0x14]
    cmp r0, #0
    movne r0, #0x2d
    strneb r0, [r7, #-1]!
    bne @L_0201938c
    cmp r4, #1
    moveq r0, #0x2b
    streqb r0, [r7, #-1]!
    beq @L_0201938c
    cmp r4, #2
    moveq r0, #0x20
    streqb r0, [r7, #-1]!
@L_0201938c:
    mov r0, r7
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_020193c8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    cmp r1, #0
    mov r2, #1
    bge @L_020193f0
@L_020193d8:
    mov r1, #0x30
    mov r3, #0
    strb r2, [r0, #4]
    strb r1, [r0, #5]
    strh r3, [r0, #2]
    ldmia sp!, {r3, r4, r5, pc}
@L_020193f0:
    ldrb r4, [r0, #4]
    cmp r1, r4
    ldmgeia sp!, {r3, r4, r5, pc}
    add lr, r0, #5
    add r3, lr, r1
    add r3, r3, #1
    ldrb r12, [r3, #-1]!
    sub r12, r12, #0x30
    and r12, r12, #0xff
    cmp r12, #5
    bne @L_0201944c
    add r4, lr, r4
@L_02019420:
    sub r4, r4, #1
    cmp r4, r3
    bls @L_02019438
    ldrb r12, [r4]
    cmp r12, #0x30
    beq @L_02019420
@L_02019438:
    cmp r4, r3
    ldreqb r12, [r3, #-1]
    andeq r5, r12, #1
    movne r5, #1
    b @L_02019454
@L_0201944c:
    movhi r5, r2
    movls r5, #0
@L_02019454:
    cmp r1, #0
    beq @L_020194a8
    mov r12, #0
@L_02019460:
    ldrb lr, [r3, #-1]!
    sub lr, lr, #0x30
    add lr, lr, r5
    and r4, lr, #0xff
    mov r5, r2
    cmp r4, #9
    movls r5, r12
    cmp r5, #0
    bne @L_0201948c
    cmp r4, #0
    bne @L_02019494
@L_0201948c:
    sub r1, r1, #1
    b @L_020194a0
@L_02019494:
    add r12, r4, #0x30
    strb r12, [r3]
    b @L_020194a8
@L_020194a0:
    cmp r1, #0
    bne @L_02019460
@L_020194a8:
    cmp r5, #0
    beq @L_020194cc
    ldrsh r3, [r0, #2]
    mov r1, #0x31
    strb r2, [r0, #4]
    add r3, r3, #1
    strb r1, [r0, #5]
    strh r3, [r0, #2]
    ldmia sp!, {r3, r4, r5, pc}
@L_020194cc:
    cmp r1, #0
    beq @L_020193d8
    strb r1, [r0, #4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020194dc(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r7, [sp, #0x68]
    ldr r3, =0x1fd
    ldrb r6, [sp, #0x61]
    ldrb r5, [sp, #0x5f]
    ldrb r4, [sp, #0x5d]
    cmp r7, r3
    mov r8, r0
    mov r12, #0
    mov r11, r1
    mov r9, r2
    addgt sp, sp, #0x2c
    movgt r0, r12
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addgt sp, sp, #0x10
    bxgt lr
    mov r10, #0x20
    add r0, sp, #0
    add r3, sp, #4
    mov r1, r8
    mov r2, r11
    strb r12, [sp]
    strh r10, [sp, #2]
    bl func_0201ce20
    ldrb r0, [sp, #8]
    add r1, sp, #9
    add r1, r1, r0
    mov r0, #0
    b @L_02019570
@L_02019558:
    ldrb r3, [sp, #8]
    ldrsh r2, [sp, #6]
    sub r3, r3, #1
    add r2, r2, #1
    strb r3, [sp, #8]
    strh r2, [sp, #6]
@L_02019570:
    ldrb r2, [sp, #8]
    cmp r2, #1
    bls @L_02019588
    ldrb r2, [r1, #-1]!
    cmp r2, #0x30
    beq @L_02019558
@L_02019588:
    ldrb r1, [sp, #9]
    mov r10, #0x30
    cmp r1, #0x30
    beq @L_020195ac
    cmp r1, #0x49
    beq @L_020195b4
    cmp r1, #0x4e
    beq @L_020196f4
    b @L_02019828
@L_020195ac:
    strh r0, [sp, #6]
    b @L_02019828
@L_020195b4:
    mov r2, #0
    mov r0, r8
    mov r1, r11
    mov r3, r2
    bl func_02022194
    bhs @L_02019668
    cmp r6, #0x80
    movhs r1, #0
    ldrlo r1, =data_020a44f8
    movlo r2, r6, lsl #1
    ldrloh r1, [r1, r2]
    sub r0, r9, #5
    andlo r1, r1, #0x200
    cmp r1, #0
    beq @L_0201962c
    ldr r3, =data_020ab2f0
    add sp, sp, #0x2c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldrb r1, [r3, #4]
    strb r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201962c:
    ldr r3, =data_020ab2f8
    add sp, sp, #0x2c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldrb r1, [r3, #4]
    strb r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019668:
    cmp r6, #0x80
    movhs r1, #0
    ldrlo r1, =data_020a44f8
    movlo r2, r6, lsl #1
    ldrloh r1, [r1, r2]
    sub r0, r9, #4
    andlo r1, r1, #0x200
    cmp r1, #0
    beq @L_020196c0
    ldr r3, =data_020ab300
    add sp, sp, #0x2c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_020196c0:
    ldr r3, =data_020ab304
    add sp, sp, #0x2c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_020196f4:
    ldrb r0, [sp, #4]
    cmp r0, #0
    beq @L_0201979c
    cmp r6, #0x80
    movhs r1, #0
    ldrlo r1, =data_020a44f8
    movlo r2, r6, lsl #1
    ldrloh r1, [r1, r2]
    sub r0, r9, #5
    andlo r1, r1, #0x200
    cmp r1, #0
    beq @L_02019760
    ldr r3, =data_020ab308
    add sp, sp, #0x2c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldrb r1, [r3, #4]
    strb r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019760:
    ldr r3, =data_020ab310
    add sp, sp, #0x2c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldrb r1, [r3, #4]
    strb r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201979c:
    cmp r6, #0x80
    movhs r1, #0
    ldrlo r1, =data_020a44f8
    movlo r2, r6, lsl #1
    ldrloh r1, [r1, r2]
    sub r0, r9, #4
    andlo r1, r1, #0x200
    cmp r1, #0
    beq @L_020197f4
    ldr r3, =data_020ab318
    add sp, sp, #0x2c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_020197f4:
    ldr r3, =data_020ab31c
    add sp, sp, #0x2c
    ldrb r2, [r3]
    ldrb r1, [r3, #1]
    strb r2, [r0]
    strb r1, [r0, #1]
    ldrb r2, [r3, #2]
    ldrb r1, [r3, #3]
    strb r2, [r0, #2]
    strb r1, [r0, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019828:
    ldrb r1, [sp, #8]
    ldrsh r2, [sp, #6]
    sub r8, r9, #1
    sub r1, r1, #1
    mov r1, r1, lsl #0x10
    add r1, r2, r1, asr #16
    strh r1, [sp, #6]
    strb r0, [r8]
    cmp r6, #0x65
    bgt @L_0201987c
    bge @L_02019904
    cmp r6, #0x47
    bgt @L_02019bac
    cmp r6, #0x45
    blt @L_02019bac
    beq @L_02019904
    cmp r6, #0x46
    beq @L_02019a40
    cmp r6, #0x47
    beq @L_02019894
    b @L_02019bac
@L_0201987c:
    cmp r6, #0x66
    bgt @L_0201988c
    beq @L_02019a40
    b @L_02019bac
@L_0201988c:
    cmp r6, #0x67
    bne @L_02019bac
@L_02019894:
    ldrb r0, [sp, #8]
    cmp r0, r7
    ble @L_020198ac
    add r0, sp, #4
    mov r1, r7
    bl func_020193c8
@L_020198ac:
    ldrsh r0, [sp, #6]
    cmn r0, #4
    blt @L_020198c0
    cmp r0, r7
    blt @L_020198e0
@L_020198c0:
    cmp r5, #0
    ldreqb r0, [sp, #8]
    subne r7, r7, #1
    subeq r7, r0, #1
    cmp r6, #0x67
    moveq r6, #0x65
    movne r6, #0x45
    b @L_02019904
@L_020198e0:
    cmp r5, #0
    addne r0, r0, #1
    subne r7, r7, r0
    bne @L_02019a40
    ldrb r1, [sp, #8]
    add r0, r0, #1
    subs r7, r1, r0
    movmi r7, #0
    b @L_02019a40
@L_02019904:
    ldrb r0, [sp, #8]
    add r1, r7, #1
    cmp r0, r1
    ble @L_0201991c
    add r0, sp, #4
    bl func_020193c8
@L_0201991c:
    ldrsh lr, [sp, #6]
    mov r11, #0x2b
    mov r10, #0
    cmp lr, #0
    rsblt lr, lr, #0
    movlt r11, #0x2d
    ldr r3, =0x66666667
    mov r0, #0xa
    b @L_02019970
@L_02019940:
    mov r1, lr, lsr #0x1f
    smull r2, r12, r3, lr
    add r12, r1, r12, asr #2
    smull r1, r2, r0, r12
    sub r12, lr, r1
    add r1, r12, #0x30
    strb r1, [r8, #-1]!
    mov r2, lr
    smull r1, lr, r3, r2
    mov r1, r2, lsr #0x1f
    add lr, r1, lr, asr #2
    add r10, r10, #1
@L_02019970:
    cmp lr, #0
    bne @L_02019940
    cmp r10, #2
    blt @L_02019940
    strb r11, [r8, #-1]
    strb r6, [r8, #-2]!
    sub r1, r9, r8
    ldr r0, =0x1fd
    add r1, r7, r1
    cmp r1, r0
    mov r0, #0x30
    addgt sp, sp, #0x2c
    movgt r0, #0
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addgt sp, sp, #0x10
    bxgt lr
    ldrb r2, [sp, #8]
    add r1, r7, #1
    cmp r2, r1
    bge @L_020199dc
    add r1, r7, #2
    sub r1, r1, r2
    subs r1, r1, #1
    beq @L_020199dc
@L_020199d0:
    strb r0, [r8, #-1]!
    subs r1, r1, #1
    bne @L_020199d0
@L_020199dc:
    ldrb r1, [sp, #8]
    add r0, sp, #9
    add r2, r0, r1
    subs r1, r1, #1
    beq @L_02019a00
@L_020199f0:
    ldrb r0, [r2, #-1]!
    subs r1, r1, #1
    strb r0, [r8, #-1]!
    bne @L_020199f0
@L_02019a00:
    cmp r7, #0
    cmpeq r5, #0
    movne r0, #0x2e
    strneb r0, [r8, #-1]!
    ldrb r0, [sp, #9]
    strb r0, [r8, #-1]!
    ldrb r0, [sp, #4]
    cmp r0, #0
    movne r0, #0x2d
    strneb r0, [r8, #-1]!
    bne @L_02019bac
    cmp r4, #1
    moveq r0, #0x2b
    streqb r0, [r8, #-1]!
    beq @L_02019bac
    b @L_02019ba0
@L_02019a40:
    ldrsh r3, [sp, #6]
    ldrb r2, [sp, #8]
    sub r0, r2, r3
    subs r1, r0, #1
    movmi r1, #0
    cmp r1, r7
    ble @L_02019a80
    sub r1, r1, r7
    add r0, sp, #4
    sub r1, r2, r1
    bl func_020193c8
    ldrsh r3, [sp, #6]
    ldrb r2, [sp, #8]
    sub r0, r2, r3
    subs r1, r0, #1
    movmi r1, #0
@L_02019a80:
    adds r0, r3, #1
    movmi r0, #0
    ldr r3, =0x1fd
    add r6, r0, r1
    cmp r6, r3
    addgt sp, sp, #0x2c
    movgt r0, #0
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addgt sp, sp, #0x10
    bxgt lr
    add r3, sp, #9
    sub r6, r7, r1
    add r2, r3, r2
    cmp r6, #0
    mov r3, #0
    ble @L_02019ad0
@L_02019ac0:
    add r3, r3, #1
    cmp r3, r6
    strb r10, [r8, #-1]!
    blt @L_02019ac0
@L_02019ad0:
    mov r3, #0x30
    mov r9, #0
    b @L_02019ae8
@L_02019adc:
    ldrb r6, [r2, #-1]!
    add r9, r9, #1
    strb r6, [r8, #-1]!
@L_02019ae8:
    cmp r9, r1
    bge @L_02019afc
    ldrb r6, [sp, #8]
    cmp r9, r6
    blt @L_02019adc
@L_02019afc:
    cmp r9, r1
    bge @L_02019b14
@L_02019b04:
    add r9, r9, #1
    cmp r9, r1
    strb r3, [r8, #-1]!
    blt @L_02019b04
@L_02019b14:
    cmp r7, #0
    cmpeq r5, #0
    movne r1, #0x2e
    strneb r1, [r8, #-1]!
    cmp r0, #0
    beq @L_02019b78
    ldrb r1, [sp, #8]
    mov r5, #0
    sub r1, r0, r1
    cmp r1, #0
    ble @L_02019b58
@L_02019b40:
    strb r3, [r8, #-1]!
    ldrb r1, [sp, #8]
    add r5, r5, #1
    sub r1, r0, r1
    cmp r5, r1
    blt @L_02019b40
@L_02019b58:
    cmp r5, r0
    bge @L_02019b7c
@L_02019b60:
    ldrb r1, [r2, #-1]!
    add r5, r5, #1
    cmp r5, r0
    strb r1, [r8, #-1]!
    blt @L_02019b60
    b @L_02019b7c
@L_02019b78:
    strb r3, [r8, #-1]!
@L_02019b7c:
    ldrb r0, [sp, #4]
    cmp r0, #0
    movne r0, #0x2d
    strneb r0, [r8, #-1]!
    bne @L_02019bac
    cmp r4, #1
    moveq r0, #0x2b
    streqb r0, [r8, #-1]!
    beq @L_02019bac
@L_02019ba0:
    cmp r4, #2
    moveq r0, #0x20
    streqb r0, [r8, #-1]!
@L_02019bac:
    mov r0, r8
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02019bec(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x22c
    mov r3, #0x20
    mov r11, r2
    strb r3, [sp, #0x19]
    ldrb r2, [r11]
    mov r9, r0
    ldr r0, [sp, #0x260]
    mov r8, r1
    cmp r2, #0
    str r0, [sp, #0x260]
    mov r4, #0
    beq @L_0201a47c
@L_02019c24:
    mov r0, r11
    mov r1, #0x25
    bl strchr
    str r0, [sp, #0xc]
    cmp r0, #0
    bne @L_02019c78
    mov r0, r11
    bl strlen
    movs r2, r0
    add r4, r4, r2
    beq @L_0201a47c
    mov r0, r8
    mov r1, r11
    blx r9
    cmp r0, #0
    bne @L_0201a47c
    add sp, sp, #0x22c
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02019c78:
    subs r2, r0, r11
    add r4, r4, r2
    beq @L_02019ca8
    mov r0, r8
    mov r1, r11
    blx r9
    cmp r0, #0
    addeq sp, sp, #0x22c
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
@L_02019ca8:
    ldr r0, [sp, #0xc]
    add r1, sp, #0x25c
    add r2, sp, #0x1c
    bl func_020184ec
    ldrb r1, [sp, #0x21]
    mov r11, r0
    cmp r1, #0x61
    bgt @L_02019d14
    bge @L_0201a00c
    cmp r1, #0x47
    bgt @L_02019d08
    subs r0, r1, #0x41
    addpl pc, pc, r0, lsl #2
    b @L_02019cfc
    b @L_0201a00c
    b @L_0201a274
    b @L_0201a274
    b @L_0201a274
    b @L_02019fb4
    b @L_02019fb4
    b @L_02019fb4
@L_02019cfc:
    cmp r1, #0x25
    beq @L_0201a260
    b @L_0201a274
@L_02019d08:
    cmp r1, #0x58
    beq @L_02019ea8
    b @L_0201a274
@L_02019d14:
    cmp r1, #0x75
    bgt @L_02019d7c
    subs r0, r1, #0x64
    addpl pc, pc, r0, lsl #2
    b @L_02019d70
    b @L_02019d8c
    b @L_02019fb4
    b @L_02019fb4
    b @L_02019fb4
    b @L_0201a274
    b @L_02019d8c
    b @L_0201a274
    b @L_0201a274
    b @L_0201a274
    b @L_0201a274
    b @L_0201a198
    b @L_02019ea8
    b @L_0201a274
    b @L_0201a274
    b @L_0201a274
    b @L_0201a064
    b @L_0201a274
    b @L_02019ea8
@L_02019d70:
    cmp r1, #0x63
    beq @L_0201a240
    b @L_0201a274
@L_02019d7c:
    cmp r1, #0x78
    bgt @L_0201a274
    beq @L_02019ea8
    b @L_0201a274
@L_02019d8c:
    ldrb r0, [sp, #0x20]
    cmp r0, #3
    ldreq r1, [sp, #0x25c]
    addeq r1, r1, #4
    streq r1, [sp, #0x25c]
    ldreq r10, [r1, #-4]
    beq @L_02019e18
    cmp r0, #4
    bne @L_02019dd0
@L_02019db0:
    ldr r1, [sp, #0x25c]
    add r1, r1, #8
    str r1, [sp, #0x25c]
    ldr r2, [r1, #-8]
    ldr r1, [r1, #-4]
    str r2, [sp, #0x10]
    str r1, [sp, #0x14]
    b @L_02019e18
@L_02019dd0:
    cmp r0, #6
    bne @L_02019ddc
    b @L_02019db0
@L_02019ddc:
    cmp r0, #7
    ldreq r1, [sp, #0x25c]
    addeq r1, r1, #4
    streq r1, [sp, #0x25c]
    ldreq r10, [r1, #-4]
    beq @L_02019e18
    cmp r0, #8
    ldreq r1, [sp, #0x25c]
    addeq r1, r1, #4
    streq r1, [sp, #0x25c]
    ldreq r10, [r1, #-4]
    ldrne r1, [sp, #0x25c]
    addne r1, r1, #4
    strne r1, [sp, #0x25c]
    ldrne r10, [r1, #-4]
@L_02019e18:
    cmp r0, #2
    moveq r1, r10, lsl #0x10
    moveq r10, r1, asr #0x10
    cmp r0, #1
    moveq r1, r10, lsl #0x18
    moveq r10, r1, asr #0x18
    cmp r0, #4
    beq @L_02019e40
    cmp r0, #6
    bne @L_02019e70
@L_02019e40:
    add r0, sp, #0x1c
    sub r5, sp, #4
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r3, [r5]
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    add r2, sp, #0x22c
    bl func_02018c48
    movs r7, r0
    beq @L_0201a274
    b @L_02019e98
@L_02019e70:
    add r0, sp, #0x1c
    sub r5, sp, #8
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    mov r0, r10
    add r1, sp, #0x22c
    ldmia r5, {r2, r3}
    bl func_020189f8
    movs r7, r0
    beq @L_0201a274
@L_02019e98:
    add r0, sp, #0x200
    add r0, r0, #0x2b
    sub r6, r0, r7
    b @L_0201a2c0
@L_02019ea8:
    ldrb r0, [sp, #0x20]
    cmp r0, #3
    ldreq r1, [sp, #0x25c]
    addeq r1, r1, #4
    streq r1, [sp, #0x25c]
    ldreq r10, [r1, #-4]
    beq @L_02019f34
    cmp r0, #4
    bne @L_02019eec
@L_02019ecc:
    ldr r1, [sp, #0x25c]
    add r1, r1, #8
    str r1, [sp, #0x25c]
    ldr r2, [r1, #-8]
    ldr r1, [r1, #-4]
    str r2, [sp, #0x10]
    str r1, [sp, #0x14]
    b @L_02019f34
@L_02019eec:
    cmp r0, #6
    bne @L_02019ef8
    b @L_02019ecc
@L_02019ef8:
    cmp r0, #7
    ldreq r1, [sp, #0x25c]
    addeq r1, r1, #4
    streq r1, [sp, #0x25c]
    ldreq r10, [r1, #-4]
    beq @L_02019f34
    cmp r0, #8
    ldreq r1, [sp, #0x25c]
    addeq r1, r1, #4
    streq r1, [sp, #0x25c]
    ldreq r10, [r1, #-4]
    ldrne r1, [sp, #0x25c]
    addne r1, r1, #4
    strne r1, [sp, #0x25c]
    ldrne r10, [r1, #-4]
@L_02019f34:
    cmp r0, #2
    moveq r1, r10, lsl #0x10
    moveq r10, r1, lsr #0x10
    cmp r0, #1
    andeq r10, r10, #0xff
    cmp r0, #4
    beq @L_02019f58
    cmp r0, #6
    bne @L_02019f88
@L_02019f58:
    add r0, sp, #0x1c
    sub r5, sp, #4
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r3, [r5]
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    add r2, sp, #0x22c
    bl func_02018c48
    movs r7, r0
    beq @L_0201a274
    b @L_02019fb0
@L_02019f88:
    add r0, sp, #0x1c
    sub r5, sp, #8
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    mov r0, r10
    add r1, sp, #0x22c
    ldmia r5, {r2, r3}
    bl func_020189f8
    movs r7, r0
    beq @L_0201a274
@L_02019fb0:
    b @L_02019e98
@L_02019fb4:
    ldrb r0, [sp, #0x20]
    sub r5, sp, #4
    cmp r0, #9
    ldreq r0, [sp, #0x25c]
    addeq r0, r0, #8
    streq r0, [sp, #0x25c]
    ldrne r0, [sp, #0x25c]
    addne r0, r0, #8
    strne r0, [sp, #0x25c]
    ldr r6, [r0, #-8]
    ldr r7, [r0, #-4]
    add r0, sp, #0x1c
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r3, [r5]
    mov r0, r6
    mov r1, r7
    add r2, sp, #0x22c
    bl func_020194dc
    movs r7, r0
    beq @L_0201a274
    b @L_02019e98
@L_0201a00c:
    ldrb r0, [sp, #0x20]
    sub r5, sp, #4
    cmp r0, #9
    ldreq r0, [sp, #0x25c]
    addeq r0, r0, #8
    streq r0, [sp, #0x25c]
    ldrne r0, [sp, #0x25c]
    addne r0, r0, #8
    strne r0, [sp, #0x25c]
    ldr r6, [r0, #-8]
    ldr r7, [r0, #-4]
    add r0, sp, #0x1c
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r3, [r5]
    mov r0, r6
    mov r1, r7
    add r2, sp, #0x22c
    bl func_02018f1c
    movs r7, r0
    beq @L_0201a274
    b @L_02019e98
@L_0201a064:
    ldrb r0, [sp, #0x20]
    cmp r0, #5
    bne @L_0201a0e0
    ldr r0, [sp, #0x260]
    ldr r1, [sp, #0x25c]
    cmp r0, #0
    add r0, r1, #4
    str r0, [sp, #0x25c]
    ldr r1, [r0, #-4]
    beq @L_0201a0bc
    cmp r1, #0
    bne @L_0201a0bc
    mov r0, #0
    mvn r4, #0
    mov r1, r0
    mov r2, r4
    bl func_0201a77c
    add sp, sp, #0x22c
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201a0bc:
    cmp r1, #0
    add r7, sp, #0x2c
    ldreq r1, =data_020ab320
    mov r2, #0x200
    mov r0, r7
    bl wcstombs
    cmp r0, #0
    blt @L_0201a274
    b @L_0201a0f0
@L_0201a0e0:
    ldr r0, [sp, #0x25c]
    add r0, r0, #4
    str r0, [sp, #0x25c]
    ldr r7, [r0, #-4]
@L_0201a0f0:
    ldr r0, [sp, #0x260]
    cmp r0, #0
    beq @L_0201a12c
    cmp r7, #0
    bne @L_0201a12c
    mov r0, #0
    mvn r4, #0
    mov r1, r0
    mov r2, r4
    bl func_0201a77c
    add sp, sp, #0x22c
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201a12c:
    ldrb r0, [sp, #0x1f]
    cmp r7, #0
    ldreq r7, =data_020ab324
    cmp r0, #0
    beq @L_0201a15c
    ldrb r0, [sp, #0x1e]
    ldrb r6, [r7], #1
    cmp r0, #0
    ldrne r0, [sp, #0x28]
    cmpne r6, r0
    movgt r6, r0
    b @L_0201a2c0
@L_0201a15c:
    ldrb r0, [sp, #0x1e]
    cmp r0, #0
    beq @L_0201a188
    ldr r6, [sp, #0x28]
    mov r0, r7
    mov r2, r6
    mov r1, #0
    bl memchr
    cmp r0, #0
    subne r6, r0, r7
    b @L_0201a2c0
@L_0201a188:
    mov r0, r7
    bl strlen
    mov r6, r0
    b @L_0201a2c0
@L_0201a198:
    ldr r0, [sp, #0x260]
    ldr r1, [sp, #0x25c]
    cmp r0, #0
    add r0, r1, #4
    str r0, [sp, #0x25c]
    ldr r1, [r0, #-4]
    beq @L_0201a1dc
    mov r0, #0
    mvn r4, #0
    mov r1, r0
    mov r2, r4
    bl func_0201a77c
    add sp, sp, #0x22c
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201a1dc:
    ldrb r0, [sp, #0x20]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_0201a470
    b @L_0201a210
    b @L_0201a470
    b @L_0201a218
    b @L_0201a220
    b @L_0201a23c
    b @L_0201a470
    b @L_0201a224
    b @L_0201a234
    b @L_0201a238
@L_0201a210:
    str r4, [r1]
    b @L_0201a470
@L_0201a218:
    strh r4, [r1]
    b @L_0201a470
@L_0201a220:
    b @L_0201a210
@L_0201a224:
    str r4, [r1]
    mov r0, r4, asr #0x1f
    str r0, [r1, #4]
    b @L_0201a470
@L_0201a234:
    b @L_0201a210
@L_0201a238:
    b @L_0201a210
@L_0201a23c:
    b @L_0201a224
@L_0201a240:
    ldr r0, [sp, #0x25c]
    add r7, sp, #0x2c
    add r0, r0, #4
    str r0, [sp, #0x25c]
    ldr r0, [r0, #-4]
    mov r6, #1
    strb r0, [sp, #0x2c]
    b @L_0201a2c0
@L_0201a260:
    mov r0, #0x25
    strb r0, [sp, #0x2c]
    add r7, sp, #0x2c
    mov r6, #1
    b @L_0201a2c0
@L_0201a274:
    ldr r0, [sp, #0xc]
    bl strlen
    movs r2, r0
    add r4, r4, r2
    beq @L_0201a2ac
    ldr r1, [sp, #0xc]
    mov r0, r8
    blx r9
    cmp r0, #0
    addeq sp, sp, #0x22c
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
@L_0201a2ac:
    add sp, sp, #0x22c
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201a2c0:
    ldrb r0, [sp, #0x1c]
    mov r5, r6
    cmp r0, #0
    beq @L_0201a3e0
    mov r3, #0x30
    cmp r0, #2
    movne r3, #0x20
    strb r3, [sp, #0x19]
    ldrb r0, [r7]
    cmp r0, #0x2b
    cmpne r0, #0x2d
    beq @L_0201a2f8
    cmp r0, #0x20
    bne @L_0201a334
@L_0201a2f8:
    and r0, r3, #0xff
    cmp r0, #0x30
    bne @L_0201a334
    mov r0, r8
    mov r1, r7
    mov r2, #1
    blx r9
    cmp r0, #0
    addeq sp, sp, #0x22c
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
    add r7, r7, #1
    sub r6, r6, #1
@L_0201a334:
    ldrb r0, [sp, #0x1c]
    cmp r0, #2
    bne @L_0201a39c
    ldrb r0, [sp, #0x21]
    cmp r0, #0x61
    beq @L_0201a354
    cmp r0, #0x41
    bne @L_0201a39c
@L_0201a354:
    cmp r6, #2
    addlt sp, sp, #0x22c
    mvnlt r0, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addlt sp, sp, #0x10
    bxlt lr
    mov r0, r8
    mov r1, r7
    mov r2, #2
    blx r9
    cmp r0, #0
    addeq sp, sp, #0x22c
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
    sub r6, r6, #2
    add r7, r7, #2
@L_0201a39c:
    ldr r0, [sp, #0x24]
    cmp r5, r0
    bge @L_0201a3e0
@L_0201a3a8:
    mov r0, r8
    add r1, sp, #0x19
    mov r2, #1
    blx r9
    cmp r0, #0
    addeq sp, sp, #0x22c
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
    ldr r0, [sp, #0x24]
    add r5, r5, #1
    cmp r5, r0
    blt @L_0201a3a8
@L_0201a3e0:
    cmp r6, #0
    beq @L_0201a410
    mov r0, r8
    mov r1, r7
    mov r2, r6
    blx r9
    cmp r0, #0
    addeq sp, sp, #0x22c
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
@L_0201a410:
    ldrb r0, [sp, #0x1c]
    cmp r0, #0
    bne @L_0201a46c
    ldr r0, [sp, #0x24]
    cmp r5, r0
    bge @L_0201a46c
    mov r6, #0x20
    add r7, sp, #0x18
@L_0201a430:
    mov r0, r8
    mov r1, r7
    mov r2, #1
    strb r6, [sp, #0x18]
    blx r9
    cmp r0, #0
    addeq sp, sp, #0x22c
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
    ldr r0, [sp, #0x24]
    add r5, r5, #1
    cmp r5, r0
    blt @L_0201a430
@L_0201a46c:
    add r4, r4, r5
@L_0201a470:
    ldrb r0, [r11]
    cmp r0, #0
    bne @L_02019c24
@L_0201a47c:
    mov r0, r4
    add sp, sp, #0x22c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}
