// (asm for now)

void scalbn(void);

void frexp(void);
void ldexp(void);

asm void scalbn(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r2
    add r2, sp, #0
    bl frexp
    ldr r2, [sp]
    add r2, r2, r4
    str r2, [sp]
    bl ldexp
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}
