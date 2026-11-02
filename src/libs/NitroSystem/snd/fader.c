// (asm for now)

void NNSi_SndFaderInit(void);
void func_02032628(void);
void NNSi_SndFaderGet(void);
void NNSi_SndFaderUpdate(void);
void NNSi_SndFaderIsFinished(void);

void _s32_div_f(void);

asm void NNSi_SndFaderInit(void)
{
    mov r1, #0
    str r1, [r0, #4]
    str r1, [r0]
    str r1, [r0, #0xc]
    str r1, [r0, #8]
    bx lr
}

asm void func_02032628(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl NNSi_SndFaderGet
    stmia r6, {r0, r5}
    mov r1, #0
    str r4, [r6, #0xc]
    str r1, [r6, #8]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNSi_SndFaderGet(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, [r0, #0xc]
    ldr r2, [r0, #8]
    cmp r2, r1
    ldrge r0, [r0, #4]
    ldmgeia sp!, {r4, pc}
    ldr r4, [r0]
    ldr r0, [r0, #4]
    sub r0, r0, r4
    mul r0, r2, r0
    bl _s32_div_f
    add r0, r4, r0
    ldmia sp!, {r4, pc}
}

asm void NNSi_SndFaderUpdate(void)
{
    ldr r2, [r0, #8]
    ldr r1, [r0, #0xc]
    cmp r2, r1
    addlt r1, r2, #1
    strlt r1, [r0, #8]
    bx lr
}

asm void NNSi_SndFaderIsFinished(void)
{
    ldr r1, [r0, #8]
    ldr r0, [r0, #0xc]
    cmp r1, r0
    movge r0, #1
    movlt r0, #0
    bx lr
}
