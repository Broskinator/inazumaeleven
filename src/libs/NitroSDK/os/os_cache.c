// (asm for now)

asm void DC_FlushAll(void)
{
    mov r12, #0
    mov r1, #0
@L_02006cfc:
    mov r0, #0
@L_02006d00:
    orr r2, r1, r0
    mcr p15, #0, r12, c7, c10, #4
    mcr p15, #0, r2, c7, c14, #2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt @L_02006d00
    add r1, r1, #0x40000000
    cmp r1, #0
    bne @L_02006cfc
    bx lr
}

asm void DC_InvalidateRange(void)
{
    add r1, r1, r0
    bic r0, r0, #0x1f
@L_02006d30:
    mcr p15, #0, r0, c7, c6, #1
    add r0, r0, #0x20
    cmp r0, r1
    blt @L_02006d30
    bx lr
}

asm void DC_StoreRange(void)
{
    add r1, r1, r0
    bic r0, r0, #0x1f
@L_02006d4c:
    mcr p15, #0, r0, c7, c10, #1
    add r0, r0, #0x20
    cmp r0, r1
    blt @L_02006d4c
    bx lr
}

asm void DC_FlushRange(void)
{
    mov r12, #0
    add r1, r1, r0
    bic r0, r0, #0x1f
@L_02006d6c:
    mcr p15, #0, r12, c7, c10, #4
    mcr p15, #0, r0, c7, c14, #1
    add r0, r0, #0x20
    cmp r0, r1
    blt @L_02006d6c
    bx lr
}

asm void func_02006d84(void)
{
    mov r0, #0
    mcr p15, #0, r0, c7, c10, #4
    bx lr
}

asm void func_02006d90(void)
{
    mov r0, #0
    mcr p15, #0, r0, c7, c5, #0
    bx lr
}

asm void IC_InvalidateRange(void)
{
    add r1, r1, r0
    bic r0, r0, #0x1f
@L_02006da4:
    mcr p15, #0, r0, c7, c5, #1
    add r0, r0, #0x20
    cmp r0, r1
    blt @L_02006da4
    bx lr
}
