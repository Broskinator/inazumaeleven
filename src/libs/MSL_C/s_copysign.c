// (asm for now)

asm void copysign(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    ldr r1, [sp, #4]
    ldr r0, [sp, #0xc]
    bic r1, r1, #0x80000000
    and r0, r0, #0x80000000
    orr r1, r1, r0
    ldr r0, [sp]
    str r1, [sp, #4]
    add sp, sp, #0x10
    bx lr
}
