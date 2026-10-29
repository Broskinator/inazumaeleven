// (asm for now)

asm void memchr(void)
{
    cmp r2, #0
    and r3, r1, #0xff
    beq @L_020183cc
@L_020183b4:
    ldrb r1, [r0], #1
    cmp r1, r3
    subeq r0, r0, #1
    bxeq lr
    subs r2, r2, #1
    bne @L_020183b4
@L_020183cc:
    mov r0, #0
    bx lr
}

asm void __memrchr(void)
{
    cmp r2, #0
    and r3, r1, #0xff
    add r0, r0, r2
    beq @L_020183f8
@L_020183e4:
    ldrb r1, [r0, #-1]!
    cmp r1, r3
    bxeq lr
    subs r2, r2, #1
    bne @L_020183e4
@L_020183f8:
    mov r0, #0
    bx lr
}

asm void memcmp(void)
{
    cmp r2, #0
    beq @L_02018438
@L_02018408:
    ldrb r12, [r0], #1
    ldrb r3, [r1], #1
    cmp r12, r3
    beq @L_02018430
    ldrb r2, [r0, #-1]
    ldrb r0, [r1, #-1]
    cmp r2, r0
    mvnlo r0, #0
    movhs r0, #1
    bx lr
@L_02018430:
    subs r2, r2, #1
    bne @L_02018408
@L_02018438:
    mov r0, #0
    bx lr
}
