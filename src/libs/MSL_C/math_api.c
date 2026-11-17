// (asm for now)

void __msl_generic_count_bits64(void);
void __signbitd(void);
void __fpclassifyd(void);
void __mbtowc_noconv(void);
void __wctomb_noconv(void);

asm void __msl_generic_count_bits64(void)
{
    mov r3, r0, lsr #1
    ldr r2, =0x55555555
    orr r3, r3, r1, lsl #31
    and r3, r3, r2
    subs r12, r0, r3
    and r2, r2, r1, lsr #1
    ldr r0, =0x33333333
    sbc r3, r1, r2
    mov r1, r12, lsr #2
    orr r1, r1, r3, lsl #30
    and r2, r12, r0
    and r1, r1, r0
    adds r2, r2, r1
    and r1, r3, r0
    and r0, r0, r3, lsr #2
    adc r1, r1, r0
    mov r0, r2, lsr #4
    orr r0, r0, r1, lsl #28
    adds r2, r2, r0
    ldr r0, =0xf0f0f0f
    adc r1, r1, r1, lsr #4
    and r3, r2, r0
    and r2, r1, r0
    mov r0, r3, lsr #8
    orr r0, r0, r2, lsl #24
    adds r1, r3, r0
    adc r2, r2, r2, lsr #8
    mov r0, r1, lsr #0x10
    orr r0, r0, r2, lsl #16
    adds r1, r1, r0
    adc r0, r2, r2, lsr #16
    adds r0, r1, r0
    and r0, r0, #0xff
    bx lr
}

asm void __signbitd(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    ldr r0, [sp, #4]
    tst r0, #0x80000000
    movne r0, #1
    moveq r0, #0
    add sp, sp, #0x10
    bx lr
}

asm void __fpclassifyd(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    ldr r2, [sp, #4]
    ldr r0, =0x7ff00000
    ands r1, r2, r0
    beq @L_02018214
    cmp r1, r0
    bne @L_02018234
    ldr r0, =0xfffff
    tst r2, r0
    ldreq r0, [sp]
    add sp, sp, #0x10
    cmpeq r0, #0
    movne r0, #1
    moveq r0, #2
    bx lr
@L_02018214:
    ldr r0, =0xfffff
    tst r2, r0
    ldreq r0, [sp]
    add sp, sp, #0x10
    cmpeq r0, #0
    movne r0, #5
    moveq r0, #3
    bx lr
@L_02018234:
    mov r0, #4
    add sp, sp, #0x10
    bx lr
}

asm void __mbtowc_noconv(void)
{
    cmp r1, #0
    moveq r0, #0
    bxeq lr
    cmp r2, #0
    mvneq r0, #0
    bxeq lr
    cmp r0, #0
    ldrneb r2, [r1]
    strneh r2, [r0]
    ldrb r0, [r1]
    cmp r0, #0
    moveq r0, #0
    movne r0, #1
    bx lr
}

asm void __wctomb_noconv(void)
{
    cmp r0, #0
    moveq r0, #0
    strneb r1, [r0]
    movne r0, #1
    bx lr
}
