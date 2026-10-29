// (asm for now)

extern char data_020ab128[];
void strncpy(void);
void __fill_mem(void);

asm void wctomb(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =data_020ab128
    ldr r2, [r2, #8]
    ldr r2, [r2, #4]
    blx r2
    ldmia sp!, {r3, pc}
}

asm void wcstombs(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r4, r0
    mov r9, r1
    cmpne r9, #0
    mov r8, r2
    mov r7, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r6, sp, #0
@L_020182d4:
    ldrh r1, [r9]
    cmp r1, #0
    moveq r0, #0
    streqb r0, [r4, r7]
    beq @L_02018320
    mov r0, r6
    add r9, r9, #2
    bl wctomb
    mov r5, r0
    add r0, r7, r5
    cmp r0, r8
    bhi @L_02018320
    mov r1, r6
    mov r2, r5
    add r0, r4, r7
    bl strncpy
    add r7, r7, r5
    cmp r7, r8
    bls @L_020182d4
@L_02018320:
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02018328(void)
{
    mov r12, r0
    cmp r2, #0
    bxeq lr
@L_02018334:
    ldrb r3, [r1], #1
    subs r2, r2, #1
    strb r3, [r12], #1
    bne @L_02018334
    bx lr
}

asm void func_02018348(void)
{
    cmp r1, r0
    blo @L_02018370
    mov r12, r0
    cmp r2, #0
    bxeq lr
@L_0201835c:
    ldrb r3, [r1], #1
    subs r2, r2, #1
    strb r3, [r12], #1
    bne @L_0201835c
    bx lr
@L_02018370:
    cmp r2, #0
    add r3, r1, r2
    add r12, r0, r2
    bxeq lr
@L_02018380:
    ldrb r1, [r3, #-1]!
    subs r2, r2, #1
    strb r1, [r12, #-1]!
    bne @L_02018380
    bx lr
}

asm void memset(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl __fill_mem
    mov r0, r4
    ldmia sp!, {r4, pc}
}
