// (asm for now)

asm void wcslen(void)
{
    mvn r2, #0
@L_0201c0cc:
    ldrh r1, [r0], #2
    add r2, r2, #1
    cmp r1, #0
    bne @L_0201c0cc
    mov r0, r2
    bx lr
}
