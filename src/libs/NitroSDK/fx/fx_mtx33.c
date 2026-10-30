// (asm for now)

void MTX_Identity33_(void);
void func_02000cd8(void);

asm void MTX_Identity33_(void)
{
    mov r2, #0x1000
    str r2, [r0, #0x20]
    mov r3, #0
    stmia r0!, {r2, r3}
    mov r1, #0
    stmia r0!, {r1, r3}
    stmia r0!, {r2, r3}
    stmia r0!, {r1, r3}
    bx lr
}

asm void func_02000cd8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r6, [r0]
    ldr r5, [r0, #4]
    smull r8, r7, r2, r6
    ldr r4, [r0, #8]
    ldr r12, [r0, #0xc]
    smull r11, r4, r2, r4
    str r4, [sp]
    ldr r10, [r0, #0x10]
    smull r6, r5, r2, r5
    smull r4, lr, r3, r12
    ldr r9, [r0, #0x14]
    smull r12, r2, r3, r10
    smull r10, r9, r3, r9
    mov r3, r8, lsr #0xc
    orr r3, r3, r7, lsl #20
    mov r7, r6, lsr #0xc
    orr r7, r7, r5, lsl #20
    mov r8, r12, lsr #0xc
    orr r8, r8, r2, lsl #20
    str r3, [r1]
    mov r3, r4, lsr #0xc
    str r7, [r1, #4]
    mov r4, r10, lsr #0xc
    orr r3, r3, lr, lsl #20
    orr r4, r4, r9, lsl #20
    ldr r5, [sp]
    mov r6, r11, lsr #0xc
    orr r6, r6, r5, lsl #20
    ldr r2, [sp, #0x28]
    ldr r7, [r0, #0x18]
    ldr r5, [r0, #0x1c]
    str r6, [r1, #8]
    ldr r0, [r0, #0x20]
    str r3, [r1, #0xc]
    smull r9, r7, r2, r7
    str r8, [r1, #0x10]
    mov r8, r9, lsr #0xc
    orr r8, r8, r7, lsl #20
    smull r6, r5, r2, r5
    smull r3, r0, r2, r0
    str r4, [r1, #0x14]
    mov r4, r6, lsr #0xc
    mov r2, r3, lsr #0xc
    orr r4, r4, r5, lsl #20
    orr r2, r2, r0, lsl #20
    str r8, [r1, #0x18]
    str r4, [r1, #0x1c]
    str r2, [r1, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
