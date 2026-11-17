// (asm for now)

void WmGetSharedDataAddress(void);

void MATH_CountPopulation(void);

asm void WmGetSharedDataAddress(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r12, #1
    mov r3, r12, lsl r3
    sub r3, r3, #1
    mov r5, r0
    and r0, r1, r3
    mov r4, r2
    bl MATH_CountPopulation
    add r1, r5, #0x800
    ldrh r1, [r1, #0x10]
    mla r0, r1, r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}
