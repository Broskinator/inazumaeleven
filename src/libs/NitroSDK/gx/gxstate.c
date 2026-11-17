// (asm for now)

void GX_InitGXState(void);

extern char gGXState[];

asm void GX_InitGXState(void)
{
    ldr r0, =gGXState
    mov r2, #0
    strh r2, [r0]
    strh r2, [r0, #2]
    strh r2, [r0, #4]
    strh r2, [r0, #6]
    strh r2, [r0, #8]
    strh r2, [r0, #0xa]
    strh r2, [r0, #0xc]
    strh r2, [r0, #0xe]
    strh r2, [r0, #0x10]
    strh r2, [r0, #0x12]
    strh r2, [r0, #0x14]
    strh r2, [r0, #0x16]
    ldr r1, =0x4000240
    strh r2, [r0, #0x18]
    str r2, [r1]
    strb r2, [r1, #4]
    strb r2, [r1, #5]
    strb r2, [r1, #6]
    strh r2, [r1, #8]
    bx lr
}
