// (asm for now)

void SND_AllocCommand(void);
void SND_PushCommand(void);
void SND_FlushCommand(void);
void SND_WaitForCommandProc(void);
void SND_GetCurrentCommandTag(void);
void SND_IsFinishedCommandTag(void);
void SND_CountFreeCommand(void);
void SND_CountReservedCommand(void);
void SND_CountWaitingCommand(void);
void PxiFifoCallback(void);
void InitPXI(void);
void RequestCommandProc(void);
void AllocCommand(void);
void IsCommandAvailable(void);
void SND_AlarmInit(void);

void SND_RecvCommandReply(void);
void OS_DisableInterrupts(void);
extern char sFreeList[];
void OS_RestoreInterrupts(void);
extern char sCommandArray[];
void DC_FlushRange(void);
void PXI_SendWordByFifo(void);
extern char sWaitingCommandListQueue[];
void SNDi_CallAlarmHandler(void);
void PXI_SetFifoRecvCallback(void);
void PXI_IsCallbackReady(void);
void OS_SpinWaitSysCycles(void);
void OS_IsRunOnEmulator(void);
extern char sCallbackTable[];

asm void SND_AllocCommand(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl IsCommandAvailable
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    bl AllocCommand
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    tst r4, #1
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    bl SND_CountWaitingCommand
    cmp r0, #0
    ble @L_0200a4f0
    mov r4, #0
@L_0200a4d0:
    mov r0, r4
    bl SND_RecvCommandReply
    cmp r0, #0
    bne @L_0200a4d0
    bl AllocCommand
    cmp r0, #0
    beq @L_0200a4f8
    ldmia sp!, {r4, pc}
@L_0200a4f0:
    mov r0, #1
    bl SND_FlushCommand
@L_0200a4f8:
    bl RequestCommandProc
    mov r4, #1
@L_0200a500:
    mov r0, r4
    bl SND_RecvCommandReply
    bl AllocCommand
    cmp r0, #0
    beq @L_0200a500
    ldmia sp!, {r4, pc}
}

asm void SND_PushCommand(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    ldr r1, =sFreeList
    ldr r2, [r1, #0xc]
    cmp r2, #0
    streq r4, [r1, #8]
    strne r4, [r2]
    str r4, [r1, #0xc]
    mov r1, #0
    str r1, [r4]
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void SND_FlushCommand(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r8, r0
    mov r5, #0
    bl OS_DisableInterrupts
    ldr r9, =sFreeList
    mov r7, r0
    ldr r1, [r9, #8]
    cmp r1, #0
    bne @L_0200a580
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0200a580:
    ldr r1, [r9, #0x1c]
    cmp r1, #8
    blt @L_0200a5d4
    tst r8, #1
    bne @L_0200a5a0
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0200a5a0:
    mov r4, #1
@L_0200a5a4:
    mov r0, r4
    bl SND_RecvCommandReply
    ldr r0, [r9, #0x1c]
    cmp r0, #8
    bge @L_0200a5a4
    ldr r0, [r9, #8]
    cmp r0, #0
    bne @L_0200a5d4
    mov r0, r7
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0200a5d4:
    ldr r6, =sCommandArray
    mov r1, #0x1800
    mov r0, r6
    bl DC_FlushRange
    ldr r1, [r9, #8]
    mov r2, r5
    mov r0, #7
    bl PXI_SendWordByFifo
    cmp r0, #0
    bge @L_0200a684
    tst r8, #1
    bne @L_0200a614
    mov r0, r7
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0200a614:
    mov r10, #7
    mov r4, #0x1800
    b @L_0200a660
@L_0200a620:
    mov r0, r7
    bl OS_RestoreInterrupts
    mov r0, r5
    bl SND_RecvCommandReply
    bl OS_DisableInterrupts
    mov r7, r0
    mov r0, r6
    mov r1, r4
    bl DC_FlushRange
    ldr r0, [r9, #8]
    cmp r0, #0
    bne @L_0200a660
    mov r0, r7
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0200a660:
    ldr r0, [r9, #0x1c]
    cmp r0, #8
    bge @L_0200a620
    ldr r1, [r9, #8]
    mov r0, r10
    mov r2, r5
    bl PXI_SendWordByFifo
    cmp r0, #0
    blt @L_0200a620
@L_0200a684:
    ldr r2, [r9, #0x18]
    ldr r3, [r9, #8]
    ldr r1, =sWaitingCommandListQueue
    add r0, r2, #1
    str r3, [r1, r2, lsl #2]
    str r0, [r9, #0x18]
    cmp r0, #8
    strgt r5, [r9, #0x18]
    str r5, [r9, #8]
    str r5, [r9, #0xc]
    ldr r1, [r9, #0x1c]
    mov r0, r7
    add r1, r1, #1
    str r1, [r9, #0x1c]
    ldr r1, [r9, #0x20]
    add r1, r1, #1
    str r1, [r9, #0x20]
    bl OS_RestoreInterrupts
    tst r8, #2
    beq @L_0200a6d8
    bl RequestCommandProc
@L_0200a6d8:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void SND_WaitForCommandProc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl SND_IsFinishedCommandTag
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #0
@L_0200a704:
    mov r0, r4
    bl SND_RecvCommandReply
    cmp r0, #0
    bne @L_0200a704
    mov r0, r5
    bl SND_IsFinishedCommandTag
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    bl RequestCommandProc
    mov r0, r5
    bl SND_IsFinishedCommandTag
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #1
@L_0200a73c:
    mov r0, r4
    bl SND_RecvCommandReply
    mov r0, r5
    bl SND_IsFinishedCommandTag
    cmp r0, #0
    beq @L_0200a73c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void SND_GetCurrentCommandTag(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =sFreeList
    ldr r2, [r1, #8]
    cmp r2, #0
    ldreq r4, [r1, #4]
    ldrne r4, [r1, #0x20]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void SND_IsFinishedCommandTag(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    ldr r1, =sFreeList
    ldr r1, [r1, #4]
    cmp r4, r1
    bls @L_0200a7b4
    sub r1, r4, r1
    cmp r1, #0x80000000
    movlo r4, #0
    movhs r4, #1
    b @L_0200a7c4
@L_0200a7b4:
    sub r1, r1, r4
    mov r4, #1
    cmp r1, #0x80000000
    movhs r4, #0
@L_0200a7c4:
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void SND_CountFreeCommand(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =sFreeList
    mov r4, #0
    ldr r1, [r1]
    cmp r1, #0
    beq @L_0200a800
@L_0200a7f0:
    ldr r1, [r1]
    add r4, r4, #1
    cmp r1, #0
    bne @L_0200a7f0
@L_0200a800:
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void SND_CountReservedCommand(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =sFreeList
    mov r4, #0
    ldr r1, [r1, #8]
    cmp r1, #0
    beq @L_0200a83c
@L_0200a82c:
    ldr r1, [r1]
    add r4, r4, #1
    cmp r1, #0
    bne @L_0200a82c
@L_0200a83c:
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void SND_CountWaitingCommand(void)
{
    stmdb sp!, {r4, lr}
    bl SND_CountFreeCommand
    mov r4, r0
    bl SND_CountReservedCommand
    rsb r1, r4, #0x100
    sub r0, r1, r0
    ldmia sp!, {r4, pc}
}

asm void PxiFifoCallback(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r1
    bl OS_DisableInterrupts
    mov r4, r0
    mov r0, r5
    bl SNDi_CallAlarmHandler
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void InitPXI(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, #7
    ldr r1, =PxiFifoCallback
    mov r0, r4
    bl PXI_SetFifoRecvCallback
    bl IsCommandAvailable
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r4
    mov r1, #1
    bl PXI_IsCallbackReady
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r5, r4
    mov r6, #0x32
    mov r4, #1
@L_0200a8cc:
    mov r0, r6
    bl OS_SpinWaitSysCycles
    mov r0, r5
    mov r1, r4
    bl PXI_IsCallbackReady
    cmp r0, #0
    beq @L_0200a8cc
    ldmia sp!, {r4, r5, r6, pc}
}

asm void RequestCommandProc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, #7
    mov r4, #0
@L_0200a8fc:
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl PXI_SendWordByFifo
    cmp r0, #0
    blt @L_0200a8fc
    ldmia sp!, {r3, r4, r5, pc}
}

asm void AllocCommand(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =sFreeList
    ldr r4, [r1]
    cmp r4, #0
    bne @L_0200a93c
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, pc}
@L_0200a93c:
    ldr r2, [r4]
    str r2, [r1]
    cmp r2, #0
    moveq r2, #0
    streq r2, [r1, #0x10]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void IsCommandAvailable(void)
{
    stmdb sp!, {r4, lr}
    bl OS_IsRunOnEmulator
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r4, pc}
    bl OS_DisableInterrupts
    ldr r1, =0x4fff200
    mov r2, #0x10
    str r2, [r1]
    ldr r4, [r1]
    bl OS_RestoreInterrupts
    mov r0, #1
    cmp r4, #0
    moveq r0, #0
    ldmia sp!, {r4, pc}
}

asm void SND_AlarmInit(void)
{
    mov r12, #0
    ldr r3, =sCallbackTable
    mov r1, r12
    mov r0, #0xc
@L_0200a9b0:
    mul r2, r12, r0
    str r1, [r3, r2]
    add r2, r3, r2
    str r1, [r2, #4]
    add r12, r12, #1
    strb r1, [r2, #8]
    cmp r12, #8
    blt @L_0200a9b0
    bx lr
}
