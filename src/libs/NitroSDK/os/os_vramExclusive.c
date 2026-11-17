// (asm for now)

void OSi_InitVramExclusive(void);
void OSi_UnlockVram(void);
void OS_GetLowEntropyData(void);
void OS_Terminate(void);
void OSi_TerminateCore(void);
void OS_Halt(void);
void OS_InitEvent(void);
void OS_WaitEventEx(void);
void OS_SignalEvent(void);
void MI_SetWramBank(void);
void MIi_DmaFill32(void);
void MIi_DmaCopy32(void);
void MIi_DmaCopy16(void);
void MIi_DmaFill32Async(void);
void MIi_DmaCopy32Async(void);
void MI_WaitDma(void);
void MI_StopDma(void);
void MI_StopAllDma(void);
void MIi_CheckAnotherAutoDMA(void);

extern char OSi_vramExclusive[];
extern char OSi_vramLockId[];
void OS_DisableInterrupts(void);
void OsCountZeroBits(void);
void OS_RestoreInterrupts(void);
void OS_GetTickLo(void);
extern char data_020bb468[];
extern char data_020bb4ac[];
void OS_SleepThread(void);
void OS_WakeupThread(void);
void MIi_DmaSetParameters(void);
void MIi_CheckDma0SourceAddress(void);
void OSi_EnterDmaCallback(void);

asm void OSi_InitVramExclusive(void)
{
    ldr r0, =OSi_vramExclusive
    mov r3, #0
    str r3, [r0]
    ldr r0, =OSi_vramLockId
    mov r2, r3
@L_0200861c:
    mov r1, r3, lsl #1
    add r3, r3, #1
    strh r2, [r0, r1]
    cmp r3, #9
    blt @L_0200861c
    bx lr
}

asm void OSi_UnlockVram(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r5, r0
    mov r10, r1
    bl OS_DisableInterrupts
    ldr r4, =OSi_vramExclusive
    ldr r1, =0x1ff
    ldr r2, [r4]
    mov r9, r0
    and r0, r5, r2
    ldr r6, =OSi_vramLockId
    and r8, r0, r1
    mov r7, #1
    mov r5, #0
@L_02008670:
    mov r0, r8
    bl OsCountZeroBits
    rsbs r2, r0, #0x1f
    bmi @L_020086a8
    mov r1, r2, lsl #1
    ldrh r0, [r6, r1]
    mvn r2, r7, lsl r2
    cmp r10, r0
    ldreq r0, [r4]
    and r8, r8, r2
    andeq r0, r0, r2
    streqh r5, [r6, r1]
    streq r0, [r4]
    b @L_02008670
@L_020086a8:
    mov r0, r9
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void OS_GetLowEntropyData(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r1, =0x4000006
    mov r5, r0
    ldrh r6, [r1]
    ldr r4, =0x2fffc00
    bl OS_GetTickLo
    orr r0, r0, r6, lsl #16
    str r0, [r5]
    ldr r0, =data_020bb468
    ldrh r1, [r4, #0xf8]
    ldr r2, [r0]
    ldr r3, [r0, #4]
    eor r1, r2, r1, lsl #16
    str r1, [r5, #4]
    ldr r2, [r0]
    ldr r2, =0x4000600
    ldr r1, [r0, #4]
    ldr r0, [r4, #0xf4]
    ldr r3, [r4, #0x3c]
    eor r0, r1, r0
    eor r3, r3, r0
    str r3, [r5, #8]
    ldr r1, [r2]
    add r0, r4, #0x300
    eor r1, r3, r1
    str r1, [r5, #8]
    ldr r1, [r4, #0x1e8]
    sub r2, r2, #0x4d0
    str r1, [r5, #0xc]
    ldr r3, [r4, #0x1ec]
    add r1, r4, #0x3a8
    str r3, [r5, #0x10]
    ldrh r12, [r0, #0x94]
    ldr r3, [r4, #0x390]
    eor r3, r3, r12, lsl #16
    str r3, [r5, #0x14]
    ldrh r4, [r0, #0xaa]
    ldrh r3, [r0, #0xac]
    orr r3, r3, r4, lsl #16
    str r3, [r5, #0x18]
    ldrh r2, [r2]
    ldrh r1, [r1]
    ldrh r3, [r0, #0x98]
    orr r0, r2, r1
    orr r0, r0, r3, lsl #16
    str r0, [r5, #0x1c]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void OS_Terminate(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020bb4ac
    ldr r2, [r0]
    cmp r2, #0
    beq @L_020087b0
    mov r1, #0
    str r1, [r0]
    ldr r0, [r0, #4]
    blx r2
@L_020087b0:
    bl OSi_TerminateCore
    ldmia sp!, {r3, pc}
}

asm void OSi_TerminateCore(void)
{
    stmdb sp!, {r3, lr}
    bl OS_DisableInterrupts
@L_020087c4:
    bl OS_Halt
    b @L_020087c4
}

asm void OS_Halt(void)
{
    mov r0, #0
    mcr p15, 0, r0, c7, c0, 4
    bx lr
}

asm void OS_InitEvent(void)
{
    mov r1, #0
    str r1, [r0, #8]
    str r1, [r0, #4]
    str r1, [r0]
    bx lr
}

asm void OS_WaitEventEx(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r2
    mov r8, r0
    mov r7, r1
    mov r6, r3
    mov r4, #0
    bl OS_DisableInterrupts
    mov r5, r0
    cmp r9, #0
    beq @L_02008820
    cmp r9, #1
    beq @L_0200884c
    b @L_02008870
@L_02008820:
    ldr r0, [r8]
    and r0, r0, r7
    cmp r7, r0
    beq @L_02008848
@L_02008830:
    add r0, r8, #4
    bl OS_SleepThread
    ldr r0, [r8]
    and r0, r0, r7
    cmp r7, r0
    bne @L_02008830
@L_02008848:
    b @L_0200886c
@L_0200884c:
    ldr r0, [r8]
    tst r0, r7
    bne @L_0200886c
@L_02008858:
    add r0, r8, #4
    bl OS_SleepThread
    ldr r0, [r8]
    tst r0, r7
    beq @L_02008858
@L_0200886c:
    ldr r4, [r8]
@L_02008870:
    cmp r4, #0
    ldrne r1, [r8]
    mvnne r0, r6
    andne r0, r1, r0
    strne r0, [r8]
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void OS_SignalEvent(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r6, r0
    bl OS_DisableInterrupts
    mov r4, r0
    cmp r5, #0
    beq @L_020088c4
    ldr r1, [r6]
    add r0, r6, #4
    orr r1, r1, r5
    str r1, [r6]
    bl OS_WakeupThread
@L_020088c4:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
}

asm void MI_SetWramBank(void)
{
    ldr r1, =0x4000247
    strb r0, [r1]
    bx lr
}

asm void MIi_DmaFill32(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    cmp r3, #0
    addeq sp, sp, #4
    mov r12, r1
    ldmeqia sp!, {r3, r4, pc}
    add r1, r0, r0, lsl #1
    add r1, r1, #2
    mov r1, r1, lsl #2
    add r1, r1, #0xb0
    add r4, r1, #0x4000000
@L_0200890c:
    ldr r1, [r4]
    tst r1, #0x80000000
    bne @L_0200890c
    ldr r1, [sp, #0x10]
    mov r3, r3, lsr #2
    cmp r1, #0
    mov r1, r2
    beq @L_0200893c
    mov lr, #0x12
    mov r2, r12
    orr r3, r3, #0x85000000
    b @L_02008948
@L_0200893c:
    mov lr, #0x16
    mov r2, r12
    orr r3, r3, #0x5000000
@L_02008948:
    str lr, [sp]
    bl MIi_DmaSetParameters
@L_02008950:
    ldr r0, [r4]
    tst r0, #0x80000000
    bne @L_02008950
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void MIi_DmaCopy32(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    movs r5, r3
    mov r8, r0
    mov r7, r1
    mov r6, r2
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r2, r5
    mov r3, #0
    bl MIi_CheckDma0SourceAddress
    add r0, r8, r8, lsl #1
    add r0, r0, #2
    mov r0, r0, lsl #2
    add r0, r0, #0xb0
    add r4, r0, #0x4000000
@L_020089a4:
    ldr r0, [r4]
    tst r0, #0x80000000
    bne @L_020089a4
    ldr r0, [sp, #0x20]
    mov r3, r5, lsr #2
    cmp r0, #0
    beq @L_020089d8
    mov r5, #2
    mov r0, r8
    mov r1, r7
    mov r2, r6
    orr r3, r3, #0x84000000
    b @L_020089ec
@L_020089d8:
    mov r5, #6
    mov r0, r8
    mov r1, r7
    mov r2, r6
    orr r3, r3, #0x4000000
@L_020089ec:
    str r5, [sp]
    bl MIi_DmaSetParameters
@L_020089f4:
    ldr r0, [r4]
    tst r0, #0x80000000
    bne @L_020089f4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void MIi_DmaCopy16(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    movs r5, r3
    mov r8, r0
    mov r7, r1
    mov r6, r2
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r2, r5
    mov r3, #0
    bl MIi_CheckDma0SourceAddress
    add r0, r8, r8, lsl #1
    add r0, r0, #2
    mov r0, r0, lsl #2
    add r0, r0, #0xb0
    add r4, r0, #0x4000000
@L_02008a48:
    ldr r0, [r4]
    tst r0, #0x80000000
    bne @L_02008a48
    ldr r0, [sp, #0x20]
    cmp r0, #0
    beq @L_02008a80
    mov r3, r5, lsr #1
    mov r5, #2
    mov r0, r8
    mov r1, r7
    mov r2, r6
    orr r3, r3, #0x80000000
    str r5, [sp]
    b @L_02008a98
@L_02008a80:
    mov r12, #6
    mov r0, r8
    mov r1, r7
    mov r2, r6
    mov r3, r5, lsr #1
    str r12, [sp]
@L_02008a98:
    bl MIi_DmaSetParameters
@L_02008a9c:
    ldr r0, [r4]
    tst r0, #0x80000000
    bne @L_02008a9c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void MIi_DmaFill32Async(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    movs r8, r3
    mov r6, r0
    mov r5, r1
    mov r4, r2
    ldr r7, [sp, #0x20]
    bne @L_02008aec
    cmp r7, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r0, [sp, #0x24]
    blx r7
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02008aec:
    bl MI_WaitDma
    cmp r7, #0
    beq @L_02008b60
    ldr r2, [sp, #0x24]
    mov r0, r6
    mov r1, r7
    bl OSi_EnterDmaCallback
    ldr r0, [sp, #0x28]
    mov r3, r8, lsr #2
    cmp r0, #0
    beq @L_02008b3c
    mov r12, #0x10
    mov r0, r6
    mov r1, r4
    mov r2, r5
    orr r3, r3, #0xc5000000
    str r12, [sp]
    bl MIi_DmaSetParameters
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02008b3c:
    mov r12, #0x14
    mov r0, r6
    mov r1, r4
    mov r2, r5
    orr r3, r3, #0x45000000
    str r12, [sp]
    bl MIi_DmaSetParameters
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02008b60:
    ldr r0, [sp, #0x28]
    mov r3, r8, lsr #2
    cmp r0, #0
    beq @L_02008b94
    mov r12, #0x10
    mov r0, r6
    mov r1, r4
    mov r2, r5
    orr r3, r3, #0x85000000
    str r12, [sp]
    bl MIi_DmaSetParameters
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02008b94:
    mov r12, #0x14
    mov r0, r6
    mov r1, r4
    mov r2, r5
    orr r3, r3, #0x5000000
    str r12, [sp]
    bl MIi_DmaSetParameters
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void MIi_DmaCopy32Async(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, r3
    mov r4, #0
    mov r6, r2
    mov r2, r5
    mov r3, r4
    mov r8, r0
    mov r7, r1
    ldr r9, [sp, #0x20]
    bl MIi_CheckDma0SourceAddress
    cmp r5, #0
    bne @L_02008bfc
    cmp r9, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [sp, #0x24]
    blx r9
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02008bfc:
    mov r0, r8
    bl MI_WaitDma
    cmp r9, #0
    beq @L_02008c68
    ldr r2, [sp, #0x24]
    mov r0, r8
    mov r1, r9
    bl OSi_EnterDmaCallback
    ldr r0, [sp, #0x28]
    mov r3, r5, lsr #2
    cmp r0, #0
    beq @L_02008c48
    mov r0, r8
    mov r1, r7
    mov r2, r6
    orr r3, r3, #0xc4000000
    str r4, [sp]
    bl MIi_DmaSetParameters
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02008c48:
    mov r4, #4
    mov r0, r8
    mov r1, r7
    mov r2, r6
    orr r3, r3, #0x44000000
    str r4, [sp]
    bl MIi_DmaSetParameters
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02008c68:
    ldr r0, [sp, #0x28]
    mov r3, r5, lsr #2
    cmp r0, #0
    beq @L_02008c94
    mov r0, r8
    mov r1, r7
    mov r2, r6
    orr r3, r3, #0x84000000
    str r4, [sp]
    bl MIi_DmaSetParameters
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02008c94:
    mov r4, #4
    mov r0, r8
    mov r1, r7
    mov r2, r6
    orr r3, r3, #0x4000000
    str r4, [sp]
    bl MIi_DmaSetParameters
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void MI_WaitDma(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    mov r1, #0xc
    mul r3, r4, r1
    add r1, r3, #0xb8
    add r2, r1, #0x4000000
@L_02008cd0:
    ldr r1, [r2]
    tst r1, #0x80000000
    bne @L_02008cd0
    cmp r4, #0
    bne @L_02008d04
    add r1, r3, #0xb0
    add r2, r3, #0x4000000
    mov r3, #0
    str r3, [r2, #0xb0]
    add r2, r1, #0x4000000
    ldr r1, =0x81400001
    str r3, [r2, #4]
    str r1, [r2, #8]
@L_02008d04:
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void MI_StopDma(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    mov r1, #0xc
    mul r3, r4, r1
    add r2, r3, #0x4000000
    ldr r1, [r2, #0xb8]
    cmp r4, #0
    bic r1, r1, #0x3a000000
    str r1, [r2, #0xb8]
    ldr r1, [r2, #0xb8]
    bic r1, r1, #0x80000000
    str r1, [r2, #0xb8]
    ldr r1, [r2, #0xb8]
    ldr r1, [r2, #0xb8]
    bne @L_02008d6c
    add r1, r3, #0xb0
    mov r3, #0
    str r3, [r2, #0xb0]
    add r2, r1, #0x4000000
    ldr r1, =0x81400001
    str r3, [r2, #4]
    str r1, [r2, #8]
@L_02008d6c:
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void MI_StopAllDma(void)
{
    stmdb sp!, {r3, lr}
    mov r0, #0
    bl MI_StopDma
    mov r0, #1
    bl MI_StopDma
    mov r0, #2
    bl MI_StopDma
    mov r0, #3
    bl MI_StopDma
    ldmia sp!, {r3, pc}
}

asm void MIi_CheckAnotherAutoDMA(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r4, r1
    mov r7, #0
    mov r6, #0xc
@L_02008db4:
    cmp r7, r5
    beq @L_02008e1c
    mul r0, r7, r6
    add r0, r0, #0x4000000
    ldr r0, [r0, #0xb8]
    tst r0, #0x80000000
    andne r0, r0, #0x38000000
    cmpne r0, r4
    beq @L_02008e1c
    cmp r0, #0x8000000
    bne @L_02008de8
    cmp r4, #0x10000000
    beq @L_02008e1c
@L_02008de8:
    cmp r0, #0x10000000
    bne @L_02008df8
    cmp r4, #0x8000000
    beq @L_02008e1c
@L_02008df8:
    cmp r0, #0x18000000
    cmpne r0, #0x20000000
    cmpne r0, #0x28000000
    cmpne r0, #0x30000000
    cmpne r0, #0x38000000
    cmpne r0, #0x8000000
    cmpne r0, #0x10000000
    bne @L_02008e1c
    bl OS_Terminate
@L_02008e1c:
    add r7, r7, #1
    cmp r7, #3
    blt @L_02008db4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
