// (asm for now)

void FX_GetDivResultFx64c(void);
void func_02001dd8(void);
void func_02001e0c(void);
void FX_GetSqrtResult(void);
void FX_DivAsync(void);
void FX_DivS32(void);
void FX_ModS32(void);
void func_02001f08(void);
void func_02001f38(void);

asm void FX_GetDivResultFx64c(void)
{
    ldr r1, =0x4000280
@L_02001db8:
    ldrh r0, [r1]
    tst r0, #0x8000
    bne @L_02001db8
    ldr r1, =0x40002a0
    ldmia r1, {r0, r1}
    bx lr
}

asm void func_02001dd8(void)
{
    ldr r1, =0x4000280
@L_02001ddc:
    ldrh r0, [r1]
    tst r0, #0x8000
    bne @L_02001ddc
    ldr r1, =0x40002a0
    ldmia r1, {r0, r1}
    adds r0, r0, #0x80000
    adc r1, r1, #0
    mov r0, r0, lsr #0x14
    orr r0, r0, r1, lsl #12
    bx lr
}

asm void func_02001e0c(void)
{
    ldr r3, =0x4000280
    mov r1, #1
    strh r1, [r3]
    mov r2, #0
    str r2, [r3, #0x10]
    mov r1, #0x1000
    str r1, [r3, #0x14]
    str r0, [r3, #0x18]
    mov r0, r2
    str r0, [r3, #0x1c]
    bx lr
}

asm void FX_GetSqrtResult(void)
{
    ldr r1, =0x40002b0
@L_02001e40:
    ldrh r0, [r1]
    tst r0, #0x8000
    bne @L_02001e40
    ldr r0, =0x40002b4
    ldr r0, [r0]
    add r0, r0, #0x200
    mov r0, r0, lsr #0xa
    bx lr
}

asm void FX_DivAsync(void)
{
    ldr r3, =0x4000280
    mov r2, #1
    strh r2, [r3]
    mov r2, #0
    str r2, [r3, #0x10]
    str r0, [r3, #0x14]
    str r1, [r3, #0x18]
    str r2, [r3, #0x1c]
    bx lr
}

asm void FX_DivS32(void)
{
    ldr r2, =0x4000280
    mov r3, #0
    strh r3, [r2]
    str r0, [r2, #0x10]
    str r1, [r2, #0x18]
    mov r0, r3
    str r0, [r2, #0x1c]
@L_02001eac:
    ldrh r0, [r2]
    tst r0, #0x8000
    bne @L_02001eac
    ldr r0, =0x40002a0
    ldr r0, [r0]
    bx lr
}

asm void FX_ModS32(void)
{
    ldr r2, =0x4000280
    mov r3, #0
    strh r3, [r2]
    str r0, [r2, #0x10]
    str r1, [r2, #0x18]
    mov r0, r3
    str r0, [r2, #0x1c]
@L_02001ee8:
    ldrh r0, [r2]
    tst r0, #0x8000
    bne @L_02001ee8
    ldr r0, =0x40002a8
    ldr r0, [r0]
    bx lr
}

asm void func_02001f08(void)
{
    stmdb sp!, {r4, lr}
    ldr lr, [r1]
    ldr r3, [r1, #4]
    ldmia r0, {r4, r12}
    add r12, r12, r3
    add r4, r4, lr
    ldr r3, [r0, #8]
    ldr r0, [r1, #8]
    stmia r2, {r4, r12}
    add r0, r3, r0
    str r0, [r2, #8]
    ldmia sp!, {r4, pc}
}

asm void func_02001f38(void)
{
    stmdb sp!, {r4, lr}
    ldr lr, [r1]
    ldr r3, [r1, #4]
    ldmia r0, {r4, r12}
    sub r12, r12, r3
    sub r4, r4, lr
    ldr r3, [r0, #8]
    ldr r0, [r1, #8]
    stmia r2, {r4, r12}
    sub r0, r3, r0
    str r0, [r2, #8]
    ldmia sp!, {r4, pc}
}
