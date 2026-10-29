// (asm for now)

void WaitByLoop(void);
void OS_WaitIrq(void);
extern char data_020bb490[];
void func_0200afc0(void);
void func_0200b114(void);
void func_0200553c(void);
void func_0200b0c8(void);
void func_0200878c(void);
void OS_GetLockID(void);
void func_02010d98(void);
void OS_SetIrqMask(void);
void OS_ResetRequestIrqMask(void);
void func_02008d78(void);
void OSi_SendToPxi(void);
void func_0200779c(void);
void func_01ff81b8(void);
void MI_CpuCopy8(void);
void MIi_CpuCopy16(void);

asm void OS_RestoreInterrupts(void)
{
    mrs r1, apsr
    bic r2, r1, #0x80
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0x80
    bx lr
}

asm void func_02008400(void)
{
    mrs r0, apsr
    orr r1, r0, #0xc0
    msr cpsr_c, r1
    and r0, r0, #0xc0
    bx lr
}

asm void OS_RestoreInterrupts_IrqAndFiq(void)
{
    mrs r1, apsr
    bic r2, r1, #0xc0
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0xc0
    bx lr
}

asm void func_0200842c(void)
{
    mrs r0, apsr
    and r0, r0, #0x80
    bx lr
}

asm void func_02008438(void)
{
    mrs r0, apsr
    and r0, r0, #0x1f
    bx lr
}

asm void func_02008444(void)
{
@L_02008444:
    subs r0, r0, #4
    bhs @L_02008444
    bx lr
}

asm void func_02008450(void)
{
    stmdb sp!, {r3, lr}
    mov r0, r0, lsl #1
    cmp r0, #0x10
    ldmlsia sp!, {r3, pc}
    sub r0, r0, #0x10
    bl func_02008444
    ldmia sp!, {r3, pc}
}

asm void func_0200846c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #1
    mov r0, r4
    bl WaitByLoop
    mov r0, r4
    mov r1, r4
    bl OS_WaitIrq
    ldmia sp!, {r4, pc}
}

asm void func_0200848c(void)
{
    stmdb sp!, {r3, lr}
    bl func_0200849c
    ldrh r0, [r0]
    ldmia sp!, {r3, pc}
}

asm void func_0200849c(void)
{
    ldr r0, =0x2fffc40
    bx lr
}

asm void func_020084a8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, =data_020bb490
    ldrh r1, [r0]
    cmp r1, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r1, #1
    strh r1, [r0]
    bl func_0200afc0
    mov r5, #0xc
    mov r4, #1
@L_020084d0:
    mov r0, r5
    mov r1, r4
    bl func_0200b114
    cmp r0, #0
    beq @L_020084d0
    ldr r1, =func_0200553c
    mov r0, r5
    bl func_0200b0c8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020084fc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =0x2fffc40
    mov r5, r0
    ldrh r0, [r1]
    cmp r0, #2
    bne @L_02008518
    bl func_0200878c
@L_02008518:
    bl OS_GetLockID
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_02010d98
    mov r0, #0x40000
    bl OS_SetIrqMask
    mvn r0, #0x40000
    bl OS_ResetRequestIrqMask
    bl func_02008d78
    ldr r4, =0x2fffc20
    mov r0, #0x10
    str r5, [r4]
    bl OSi_SendToPxi
    bl func_0200779c
    str r0, [r4, #0x37c]
    bl func_01ff81b8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02008564(void)
{
    mov r1, r0
    ldr r0, =0x2fffcf4
    ldr r12, =MI_CpuCopy8
    mov r2, #6
    bx r12
}

asm void func_02008580(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =0x2fffc80
    mov r5, r0
    ldrh r2, [r4, #0x64]
    add r0, r4, #6
    add r1, r5, #4
    mov r2, r2, lsl #0x1d
    mov r2, r2, lsr #0x1d
    strb r2, [r5]
    ldrb r3, [r4, #2]
    mov r2, #0x14
    mov r3, r3, lsl #0x1c
    mov r3, r3, lsr #0x1c
    strb r3, [r5, #1]
    ldrb r3, [r4, #3]
    strb r3, [r5, #2]
    ldrb r3, [r4, #4]
    strb r3, [r5, #3]
    ldrb r3, [r4, #0x1a]
    strh r3, [r5, #0x1a]
    ldrb r3, [r4, #0x50]
    strh r3, [r5, #0x52]
    bl MIi_CpuCopy16
    add r0, r4, #0x1c
    add r1, r5, #0x1c
    mov r2, #0x34
    bl MIi_CpuCopy16
    mov r0, #0
    strh r0, [r5, #0x18]
    strh r0, [r5, #0x50]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02008600(void)
{
    clz r0, r0
    bx lr
}
