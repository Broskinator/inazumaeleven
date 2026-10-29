// (asm for now)

extern char data_020bb4b4[];

asm void MIi_DMAFastCallback(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020bb4b4
    mov r1, #0
    str r1, [r0]
    ldr r1, [r0, #0x10]
    ldr r0, [r0, #0x14]
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    blx r1
    ldmia sp!, {r3, pc}
}
