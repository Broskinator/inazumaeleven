// (asm for now)

void OS_RestoreInterrupts(void);
void OS_DisableInterrupts_IrqAndFiq(void);
void OS_RestoreInterrupts_IrqAndFiq(void);
void OS_GetCpsrIrq(void);
void OS_GetProcMode(void);
void OS_SpinWaitCpuCycles(void);
void OS_SpinWaitSysCycles(void);
void OS_WaitVBlankIntr(void);
void OS_GetBootType(void);
void OS_GetBootInfo(void);
void OS_InitReset(void);
void func_020084fc(void);
void OS_GetMacAddress(void);
void OS_GetOwnerInfo(void);
void OsCountZeroBits(void);

void WaitByLoop(void);
void OS_WaitIrq(void);
extern char data_020bb490[];
void PXI_Init(void);
void PXI_IsCallbackReady(void);
void OSi_CommonCallback(void);
void PXI_SetFifoRecvCallback(void);
void OS_Terminate(void);
void OS_GetLockID(void);
void CARD_LockRom(void);
void OS_SetIrqMask(void);
void OS_ResetRequestIrqMask(void);
void MI_StopAllDma(void);
void OSi_SendToPxi(void);
void func_0200779c(void);
void OSi_DoResetSystem(void);
void MI_CpuCopy8(void);
void MIi_CpuCopy16(void);

asm void OS_RestoreInterrupts(void)
{
    mrs r1, CPSR
    bic r2, r1, #0x80
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0x80
    bx lr
}

asm void OS_DisableInterrupts_IrqAndFiq(void)
{
    mrs r0, CPSR
    orr r1, r0, #0xc0
    msr cpsr_c, r1
    and r0, r0, #0xc0
    bx lr
}

asm void OS_RestoreInterrupts_IrqAndFiq(void)
{
    mrs r1, CPSR
    bic r2, r1, #0xc0
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0xc0
    bx lr
}

asm void OS_GetCpsrIrq(void)
{
    mrs r0, CPSR
    and r0, r0, #0x80
    bx lr
}

asm void OS_GetProcMode(void)
{
    mrs r0, CPSR
    and r0, r0, #0x1f
    bx lr
}

asm void OS_SpinWaitCpuCycles(void)
{
@L_02008444:
    subs r0, r0, #4
    bhs @L_02008444
    bx lr
}

asm void OS_SpinWaitSysCycles(void)
{
    stmdb sp!, {r3, lr}
    mov r0, r0, lsl #1
    cmp r0, #0x10
    ldmlsia sp!, {r3, pc}
    sub r0, r0, #0x10
    bl OS_SpinWaitCpuCycles
    ldmia sp!, {r3, pc}
}

asm void OS_WaitVBlankIntr(void)
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

asm void OS_GetBootType(void)
{
    stmdb sp!, {r3, lr}
    bl OS_GetBootInfo
    ldrh r0, [r0]
    ldmia sp!, {r3, pc}
}

asm void OS_GetBootInfo(void)
{
    ldr r0, =0x2fffc40
    bx lr
}

asm void OS_InitReset(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, =data_020bb490
    ldrh r1, [r0]
    cmp r1, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r1, #1
    strh r1, [r0]
    bl PXI_Init
    mov r5, #0xc
    mov r4, #1
@L_020084d0:
    mov r0, r5
    mov r1, r4
    bl PXI_IsCallbackReady
    cmp r0, #0
    beq @L_020084d0
    ldr r1, =OSi_CommonCallback
    mov r0, r5
    bl PXI_SetFifoRecvCallback
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
    bl OS_Terminate
@L_02008518:
    bl OS_GetLockID
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl CARD_LockRom
    mov r0, #0x40000
    bl OS_SetIrqMask
    mvn r0, #0x40000
    bl OS_ResetRequestIrqMask
    bl MI_StopAllDma
    ldr r4, =0x2fffc20
    mov r0, #0x10
    str r5, [r4]
    bl OSi_SendToPxi
    bl func_0200779c
    str r0, [r4, #0x37c]
    bl OSi_DoResetSystem
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OS_GetMacAddress(void)
{
    mov r1, r0
    ldr r0, =0x2fffcf4
    ldr r12, =MI_CpuCopy8
    mov r2, #6
    bx r12
}

asm void OS_GetOwnerInfo(void)
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

asm void OsCountZeroBits(void)
{
    clz r0, r0
    bx lr
}
