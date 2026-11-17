// (asm for now)

void MI_UncompressLZ8(void);
void MI_UncompressHuffman(void);
void MIi_CardDmaCopy32(void);

void MIi_CheckAnotherAutoDMA(void);
void MIi_CheckDma0SourceAddress(void);
void MIi_DmaSetParameters(void);

asm void MI_UncompressLZ8(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    ldr r5, [r0], #4
    mov r2, r5, lsr #8
    mov r7, #0
    tst r5, #0xf
    movne r7, #1
@L_02009bf8:
    cmp r2, #0
    ble @L_02009cb8
    ldrb lr, [r0], #1
    mov r4, #8
@L_02009c08:
    subs r4, r4, #1
    blt @L_02009bf8
    tst lr, #0x80
    bne @L_02009c2c
    ldrb r6, [r0], #1
    swpb r6, r6, [r1]
    add r1, r1, #1
    sub r2, r2, #1
    b @L_02009ca8
@L_02009c2c:
    ldrb r5, [r0]
    cmp r7, #0
    moveq r6, #3
    beq @L_02009c74
    tst r5, #0xe0
    movne r6, #1
    bne @L_02009c74
    add r0, r0, #1
    and r6, r5, #0xf
    mov r6, r6, lsl #4
    tst r5, #0x10
    beq @L_02009c6c
    mov r6, r6, lsl #8
    ldrb r5, [r0], #1
    add r6, r6, r5, lsl #4
    add r6, r6, #0x100
@L_02009c6c:
    add r6, r6, #0x11
    ldrb r5, [r0]
@L_02009c74:
    add r3, r6, r5, asr #4
    add r0, r0, #1
    and r5, r5, #0xf
    mov r12, r5, lsl #8
    ldrb r6, [r0], #1
    orr r5, r6, r12
    add r12, r5, #1
    sub r2, r2, r3
@L_02009c94:
    ldrb r5, [r1, -r12]
    swpb r5, r5, [r1]
    add r1, r1, #1
    subs r3, r3, #1
    bgt @L_02009c94
@L_02009ca8:
    cmp r2, #0
    movgt lr, lr, lsl #1
    bgt @L_02009c08
    b @L_02009bf8
@L_02009cb8:
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
}

asm void MI_UncompressHuffman(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #4
    add r2, r0, #4
    add r7, r2, #1
    ldrb r10, [r0]
    and r4, r10, #0xf
    mov r3, #0
    mov lr, #0
    and r10, r4, #7
    add r11, r10, #4
    str r11, [sp]
    ldr r10, [r0]
    mov r12, r10, lsr #8
    ldrb r10, [r2]
    add r10, r10, #1
    add r0, r2, r10, lsl #1
    mov r2, r7
@L_02009d04:
    cmp r12, #0
    ble @L_02009d8c
    mov r8, #0x20
    ldr r5, [r0], #4
@L_02009d14:
    subs r8, r8, #1
    blt @L_02009d04
    mov r10, #1
    and r9, r10, r5, lsr #31
    ldrb r6, [r2]
    mov r6, r6, lsl r9
    mov r10, r2, lsr #1
    mov r10, r10, lsl #1
    ldrb r11, [r2]
    and r11, r11, #0x3f
    add r11, r11, #1
    add r10, r10, r11, lsl #1
    add r2, r10, r9
    tst r6, #0x80
    beq @L_02009d7c
    mov r3, r3, lsr r4
    ldrb r10, [r2]
    rsb r11, r4, #0x20
    orr r3, r3, r10, lsl r11
    mov r2, r7
    add lr, lr, #1
    ldr r11, [sp]
    cmp lr, r11
    streq r3, [r1], #4
    subeq r12, r12, #4
    moveq lr, #0
@L_02009d7c:
    cmp r12, #0
    movgt r5, r5, lsl #1
    bgt @L_02009d14
    b @L_02009d04
@L_02009d8c:
    add sp, sp, #4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}

asm void MIi_CardDmaCopy32(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r1
    mov r6, r0
    mov r7, r3
    mvn r1, #0
    mov r4, r2
    bl MIi_CheckAnotherAutoDMA
    mov r0, r6
    mov r1, r5
    mov r2, r7
    mov r3, #0x1000000
    bl MIi_CheckDma0SourceAddress
    cmp r7, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r6, r6, lsl #1
    add r0, r0, #2
    mov r0, r0, lsl #2
    add r0, r0, #0xb0
    add r1, r0, #0x4000000
@L_02009de4:
    ldr r0, [r1]
    tst r0, #0x80000000
    bne @L_02009de4
    ldr r3, =0xaf000001
    mov r12, #0
    mov r0, r6
    mov r1, r5
    mov r2, r4
    str r12, [sp]
    bl MIi_DmaSetParameters
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
