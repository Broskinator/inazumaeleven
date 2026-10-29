// (asm for now)

asm void G2x_ChangeBlendBrightness_(void)
{
    ldrh r3, [r0]
    cmp r1, #0
    and r2, r3, #0xc0
    bge @L_02002818
    cmp r2, #0x80
    biceq r2, r3, #0xc0
    orreq r2, r2, #0xc0
    streqh r2, [r0]
    rsb r1, r1, #0
    strh r1, [r0, #4]
    bx lr
@L_02002818:
    cmp r2, #0xc0
    biceq r2, r3, #0xc0
    orreq r2, r2, #0x80
    streqh r2, [r0]
    strh r1, [r0, #4]
    bx lr
}
