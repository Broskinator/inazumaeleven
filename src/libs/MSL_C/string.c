// (asm for now)

asm void strcmp(void)
{
    stmdb sp!, {r4, lr}
    ldrb r2, [r0]
    ldrb r3, [r1]
    subs r3, r2, r3
    movne r0, r3
    ldmneia sp!, {r4, pc}
    and r4, r0, #3
    and r3, r1, #3
    cmp r3, r4
    bne @L_0201ab10
    cmp r4, #0
    beq @L_0201aaa8
    cmp r2, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    rsbs r4, r4, #3
    beq @L_0201aaa0
@L_0201aa78:
    ldrb r3, [r0, #1]!
    ldrb r2, [r1, #1]!
    subs r2, r3, r2
    movne r0, r2
    ldmneia sp!, {r4, pc}
    cmp r3, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    subs r4, r4, #1
    bne @L_0201aa78
@L_0201aaa0:
    add r0, r0, #1
    add r1, r1, #1
@L_0201aaa8:
    ldr r2, [r0]
    ldr r3, =0xfefefeff
    mvn r4, r2
    add lr, r2, r3
    ldr r12, =0x80808080
    and r4, lr, r4
    tst r4, r12
    ldr r4, [r1]
    bne @L_0201aafc
    cmp r2, r4
    bne @L_0201aaf0
@L_0201aad4:
    ldr r2, [r0, #4]!
    ldr r4, [r1, #4]!
    add lr, r2, r3
    tst lr, r12
    bne @L_0201aafc
    cmp r2, r4
    beq @L_0201aad4
@L_0201aaf0:
    sub r0, r0, #1
    sub r1, r1, #1
    b @L_0201ab10
@L_0201aafc:
    ldrb r2, [r0]
    ldrb r3, [r1]
    subs r3, r2, r3
    movne r0, r3
    ldmneia sp!, {r4, pc}
@L_0201ab10:
    cmp r2, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
@L_0201ab1c:
    ldrb r3, [r0, #1]!
    ldrb r2, [r1, #1]!
    subs r2, r3, r2
    movne r0, r2
    ldmneia sp!, {r4, pc}
    cmp r3, #0
    bne @L_0201ab1c
    mov r0, #0
    ldmia sp!, {r4, pc}
}

asm void strncmp(void)
{
    cmp r2, #0
    beq @L_0201ab74
@L_0201ab50:
    ldrb r12, [r1], #1
    ldrb r3, [r0], #1
    cmp r3, r12
    subne r0, r3, r12
    bxne lr
    cmp r3, #0
    beq @L_0201ab74
    subs r2, r2, #1
    bne @L_0201ab50
@L_0201ab74:
    mov r0, #0
    bx lr
}

asm void strchr(void)
{
    ldrb r2, [r0], #1
    and r1, r1, #0xff
    cmp r2, #0
    beq @L_0201aba4
@L_0201ab8c:
    cmp r2, r1
    subeq r0, r0, #1
    bxeq lr
    ldrb r2, [r0], #1
    cmp r2, #0
    bne @L_0201ab8c
@L_0201aba4:
    cmp r1, #0
    movne r0, #0
    subeq r0, r0, #1
    bx lr
}

asm void strrchr(void)
{
    ldrb r2, [r0]
    and r1, r1, #0xff
    add r3, r0, #1
    cmp r2, #0
    mov r0, #0
    beq @L_0201abe0
@L_0201abcc:
    cmp r2, r1
    subeq r0, r3, #1
    ldrb r2, [r3], #1
    cmp r2, #0
    bne @L_0201abcc
@L_0201abe0:
    cmp r0, #0
    moveq r0, #0
    cmpeq r1, #0
    subeq r0, r3, #1
    bx lr
}

asm void strstr(void)
{
    stmdb sp!, {r4, lr}
    cmp r1, #0
    ldrneb r2, [r1]
    cmpne r2, #0
    ldmeqia sp!, {r4, pc}
    ldrb r3, [r0]
    add r4, r0, #1
    cmp r3, #0
    beq @L_0201ac58
@L_0201ac18:
    cmp r3, r2
    bne @L_0201ac4c
    mov lr, r4
    add r12, r1, #1
@L_0201ac28:
    ldrb r3, [r12], #1
    ldrb r0, [lr], #1
    cmp r0, r3
    bne @L_0201ac40
    cmp r0, #0
    bne @L_0201ac28
@L_0201ac40:
    cmp r3, #0
    subeq r0, r4, #1
    ldmeqia sp!, {r4, pc}
@L_0201ac4c:
    ldrb r3, [r4], #1
    cmp r3, #0
    bne @L_0201ac18
@L_0201ac58:
    mov r0, #0
    ldmia sp!, {r4, pc}
}
