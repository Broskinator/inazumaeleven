// (asm for now)

void NNS_G3dGetTex(void);

asm void NNS_G3dGetTex(void)
{
    ldrh r2, [r0, #0xc]
    ldrh r1, [r0, #0xe]
    add r3, r0, r2
    cmp r1, #1
    bne @L_0202c15c
    ldr r2, [r0]
    ldr r1, =0x30585442
    cmp r2, r1
    ldreq r1, [r3]
    addeq r0, r0, r1
    movne r0, #0
    bx lr
@L_0202c15c:
    ldr r1, [r3, #4]
    add r0, r0, r1
    bx lr
}
