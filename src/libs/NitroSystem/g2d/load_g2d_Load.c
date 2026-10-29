// (asm for now)

asm void NNS_G2dFindBinaryBlock(void)
{
    ldrh r2, [r0, #0xc]
    ldrh r12, [r0, #0xe]
    mov r3, #0
    add r0, r0, r2
    cmp r12, #0
    bls @L_02025be4
@L_02025bbc:
    ldr r2, [r0]
    cmp r2, r1
    bxeq lr
    add r2, r3, #1
    mov r2, r2, lsl #0x10
    ldr r3, [r0, #4]
    cmp r12, r2, lsr #16
    add r0, r0, r3
    mov r3, r2, lsr #0x10
    bhi @L_02025bbc
@L_02025be4:
    mov r0, #0
    bx lr
}
