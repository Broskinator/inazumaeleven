// (asm for now)

void MATH_QSort(void);
void func_020169bc(void);

asm void MATH_QSort(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    cmp r1, #1
    ble @L_020169a4
    ldr r4, [sp, #0x24]
    mov r11, r3
    mov r8, r2
    cmp r4, #0
    bne @L_0201675c
    clz r2, r1
    rsb r2, r2, #0x20
    mov r2, r2, lsl #3
    sub sp, sp, r2
    mov r4, sp
    str r2, [sp, #-4]!
@L_0201675c:
    sub r1, r1, #1
    mla r1, r1, r8, r0
    mov r5, r4
    str r0, [r4], #4
    str r1, [r4], #4
    clz r2, r8
    rsb r2, r2, #0x20
    str r2, [sp, #-4]!
@L_0201677c:
    cmp r4, r5
    beq @L_0201698c
    ldr r7, [r4, #-4]
    ldr r6, [r4, #-8]!
    sub r2, r7, r6
    cmp r2, r8
    bne @L_020167f0
    mov r0, r6
    mov r1, r7
    blx r11
    cmp r0, #0
    ble @L_0201677c
    mov r0, r8
    tst r0, #3
    beq @L_020167d4
@L_020167b8:
    ldrb r1, [r6]
    subs r0, r0, #1
    swpb r1, r1, [r7]
    add r7, r7, #1
    strb r1, [r6], #1
    bne @L_020167b8
    b @L_0201677c
@L_020167d4:
    ldr r1, [r6]
    subs r0, r0, #4
    swp r1, r1, [r7]
    add r7, r7, #4
    str r1, [r6], #4
    bne @L_020167d4
    b @L_0201677c
@L_020167f0:
    ldr r3, [sp]
    sub r2, r7, r6
    mov r2, r2, lsr r3
    mla r2, r2, r8, r6
    mov r3, r6
    mov r0, r8
    mov r2, r2
    tst r0, #3
    beq @L_02016830
@L_02016814:
    ldrb r1, [r2]
    subs r0, r0, #1
    swpb r1, r1, [r3]
    add r3, r3, #1
    strb r1, [r2], #1
    bne @L_02016814
    b @L_02016848
@L_02016830:
    ldr r1, [r2]
    subs r0, r0, #4
    swp r1, r1, [r3]
    add r3, r3, #4
    str r1, [r2], #4
    bne @L_02016830
@L_02016848:
    mov r9, r6
    mov r10, r7
    add r9, r9, r8
@L_02016854:
    cmp r9, r7
    bge @L_02016874
    mov r1, r6
    mov r0, r9
    blx r11
    cmp r0, #0
    addlt r9, r9, r8
    blt @L_02016854
@L_02016874:
    mov r1, r6
    mov r0, r10
    blx r11
    cmp r0, #0
    subgt r10, r10, r8
    bgt @L_02016874
    cmp r9, r10
    bge @L_020168ec
    mov r2, r9
    mov r3, r10
    mov r0, r8
    tst r0, #3
    beq @L_020168c4
@L_020168a8:
    ldrb r1, [r2]
    subs r0, r0, #1
    swpb r1, r1, [r3]
    add r3, r3, #1
    strb r1, [r2], #1
    bne @L_020168a8
    b @L_020168dc
@L_020168c4:
    ldr r1, [r2]
    subs r0, r0, #4
    swp r1, r1, [r3]
    add r3, r3, #4
    str r1, [r2], #4
    bne @L_020168c4
@L_020168dc:
    add r9, r9, r8
    sub r10, r10, r8
    cmp r9, r10
    ble @L_02016854
@L_020168ec:
    mov r2, r6
    mov r3, r10
    mov r0, r8
    tst r0, #3
    beq @L_0201691c
@L_02016900:
    ldrb r1, [r2]
    subs r0, r0, #1
    swpb r1, r1, [r3]
    add r3, r3, #1
    strb r1, [r2], #1
    bne @L_02016900
    b @L_02016934
@L_0201691c:
    ldr r1, [r2]
    subs r0, r0, #4
    swp r1, r1, [r3]
    add r3, r3, #4
    str r1, [r2], #4
    bne @L_0201691c
@L_02016934:
    sub r2, r10, r6
    sub r3, r7, r10
    cmp r2, r3
    ble @L_02016968
    sub r2, r10, r8
    cmp r6, r2
    strlt r6, [r4], #4
    strlt r2, [r4], #4
    add r2, r10, r8
    cmp r2, r7
    strlt r2, [r4], #4
    strlt r7, [r4], #4
    b @L_0201677c
@L_02016968:
    add r2, r10, r8
    cmp r2, r7
    strlt r2, [r4], #4
    strlt r7, [r4], #4
    sub r2, r10, r8
    cmp r6, r2
    strlt r6, [r4], #4
    strlt r2, [r4], #4
    b @L_0201677c
@L_0201698c:
    add sp, sp, #4
    sub r4, r4, #4
    cmp r4, sp
    ldreq r0, [sp]
    addeq r0, r0, #4
    addeq sp, sp, r0
@L_020169a4:
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
    dcd 0x5a827999
    dcd 0x6ed9eba1
    dcd 0x8f1bbcdc
    dcd 0xca62c1d6
}

asm void func_020169bc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
    mov r11, r0
    sub sp, sp, #0x40
    mov r12, sp
    mvn r3, #0xff00
    add r8, r11, #0x14
    mov r1, r12
    ldmia r8!, {r4, r5, r6, r7}
    mov r9, #0x10
@L_020169e0:
    eor r2, r4, r4, ror #16
    and r2, r3, r2, lsr #8
    eor r4, r2, r4, ror #8
    eor r2, r5, r5, ror #16
    and r2, r3, r2, lsr #8
    eor r5, r2, r5, ror #8
    eor r2, r6, r6, ror #16
    and r2, r3, r2, lsr #8
    eor r6, r2, r6, ror #8
    eor r2, r7, r7, ror #16
    and r2, r3, r2, lsr #8
    eor r7, r2, r7, ror #8
    stmia r1!, {r4, r5, r6, r7}
    subs r9, r9, #4
    ldmneia r8!, {r4, r5, r6, r7}
    bne @L_020169e0
    ldmia r11, {r4, r5, r6, r7, r8}
    ldr r12, [pc, #-0x80]
    mov r9, #0
@L_02016a2c:
    and r10, r5, r6
    mvn lr, r5
    and lr, lr, r7
    orr r10, r10, lr
    add r10, r10, r12
    and lr, r9, #0xf
    ldr lr, [sp, lr, lsl #2]
    add r10, r10, r8
    add r10, r10, lr
    add r10, r10, r4, ror #27
    mov r8, r7
    mov r7, r6
    mov r6, r5, ror #2
    mov r5, r4
    mov r4, r10
    add r9, r9, #1
    cmp r9, #0x10
    bne @L_02016a2c
@L_02016a74:
    and r10, r5, r6
    mvn lr, r5
    and lr, lr, r7
    orr r10, r10, lr
    add r10, r10, r12
    sub r2, r9, #0x10
    and r2, r2, #0xf
    sub lr, r9, #0xe
    and lr, lr, #0xf
    ldr r3, [sp, r2, lsl #2]
    ldr r1, [sp, lr, lsl #2]
    sub lr, r9, #8
    eor r3, r3, r1
    and lr, lr, #0xf
    ldr r1, [sp, lr, lsl #2]
    sub r2, r9, #3
    eor r3, r3, r1
    and r2, r2, #0xf
    ldr r1, [sp, r2, lsl #2]
    and r2, r9, #0xf
    eor r3, r3, r1
    mov r3, r3, ror #0x1f
    str r3, [sp, r2, lsl #2]
    and lr, r9, #0xf
    ldr lr, [sp, lr, lsl #2]
    add r10, r10, r8
    add r10, r10, lr
    add r10, r10, r4, ror #27
    mov r8, r7
    mov r7, r6
    mov r6, r5, ror #2
    mov r5, r4
    mov r4, r10
    add r9, r9, #1
    cmp r9, #0x14
    bne @L_02016a74
    ldr r12, [pc, #-0x15c]
@L_02016b08:
    eor r10, r5, r6
    eor r10, r10, r7
    add r10, r10, r12
    sub r2, r9, #0x10
    and r2, r2, #0xf
    sub lr, r9, #0xe
    and lr, lr, #0xf
    ldr r3, [sp, r2, lsl #2]
    ldr r1, [sp, lr, lsl #2]
    sub lr, r9, #8
    eor r3, r3, r1
    and lr, lr, #0xf
    ldr r1, [sp, lr, lsl #2]
    sub r2, r9, #3
    eor r3, r3, r1
    and r2, r2, #0xf
    ldr r1, [sp, r2, lsl #2]
    and r2, r9, #0xf
    eor r3, r3, r1
    mov r3, r3, ror #0x1f
    str r3, [sp, r2, lsl #2]
    and lr, r9, #0xf
    ldr lr, [sp, lr, lsl #2]
    add r10, r10, r8
    add r10, r10, lr
    add r10, r10, r4, ror #27
    mov r8, r7
    mov r7, r6
    mov r6, r5, ror #2
    mov r5, r4
    mov r4, r10
    add r9, r9, #1
    cmp r9, #0x28
    bne @L_02016b08
    ldr r12, [pc, #-0x1e4]
@L_02016b94:
    and r10, r5, r6
    and lr, r5, r7
    orr r10, r10, lr
    and lr, r6, r7
    orr r10, r10, lr
    add r10, r10, r12
    sub r2, r9, #0x10
    and r2, r2, #0xf
    sub lr, r9, #0xe
    and lr, lr, #0xf
    ldr r3, [sp, r2, lsl #2]
    ldr r1, [sp, lr, lsl #2]
    sub lr, r9, #8
    eor r3, r3, r1
    and lr, lr, #0xf
    ldr r1, [sp, lr, lsl #2]
    sub r2, r9, #3
    eor r3, r3, r1
    and r2, r2, #0xf
    ldr r1, [sp, r2, lsl #2]
    and r2, r9, #0xf
    eor r3, r3, r1
    mov r3, r3, ror #0x1f
    str r3, [sp, r2, lsl #2]
    and lr, r9, #0xf
    ldr lr, [sp, lr, lsl #2]
    add r10, r10, r8
    add r10, r10, lr
    add r10, r10, r4, ror #27
    mov r8, r7
    mov r7, r6
    mov r6, r5, ror #2
    mov r5, r4
    mov r4, r10
    add r9, r9, #1
    cmp r9, #0x3c
    bne @L_02016b94
    ldr r12, [pc, #-0x278]
@L_02016c2c:
    eor r10, r5, r6
    eor r10, r10, r7
    add r10, r10, r12
    sub r2, r9, #0x10
    and r2, r2, #0xf
    sub lr, r9, #0xe
    and lr, lr, #0xf
    ldr r3, [sp, r2, lsl #2]
    ldr r1, [sp, lr, lsl #2]
    sub lr, r9, #8
    eor r3, r3, r1
    and lr, lr, #0xf
    ldr r1, [sp, lr, lsl #2]
    sub r2, r9, #3
    eor r3, r3, r1
    and r2, r2, #0xf
    ldr r1, [sp, r2, lsl #2]
    and r2, r9, #0xf
    eor r3, r3, r1
    mov r3, r3, ror #0x1f
    str r3, [sp, r2, lsl #2]
    and lr, r9, #0xf
    ldr lr, [sp, lr, lsl #2]
    add r10, r10, r8
    add r10, r10, lr
    add r10, r10, r4, ror #27
    mov r8, r7
    mov r7, r6
    mov r6, r5, ror #2
    mov r5, r4
    mov r4, r10
    add r9, r9, #1
    cmp r9, #0x50
    bne @L_02016c2c
    ldmia r11, {r1, r2, r3, r9, r10}
    add r1, r1, r4
    add r2, r2, r5
    add r3, r3, r6
    add r9, r9, r7
    add r10, r10, r8
    stmia r11, {r1, r2, r3, r9, r10}
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, pc}
}
