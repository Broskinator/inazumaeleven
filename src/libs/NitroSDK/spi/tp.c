// (asm for now)

void TP_GetCalibratedResult(void);
void TP_WaitCalibratedResult(void);
void TP_RequestAutoSamplingStartAsync(void);
void TP_RequestAutoSamplingStopAsync(void);
void TP_GetLatestIndexInAuto(void);
void TP_CalcCalibrateParam(void);
void TP_GetCalibratedPoint(void);
void TP_WaitBusy(void);
void TP_CheckError(void);
void PMi_WaitBusy(void);
void PMi_DummyCallback(void);
void PMi_CallCallbackAndUnlock(void);
void PMi_WaitVBlank(void);
void PM_Init(void);
void PMi_CommonCallback(void);
void PMi_TryToSendPxiData(void);
void PMi_TryToSendPxiDataTillSuccess(void);
void PMi_SendSleepStart(void);
void PM_SendUtilityCommandAsync(void);
void func_0200f6c4(void);
void PMi_SetLEDAsync(void);

extern char initial_020976e4[];
void OS_DisableInterrupts(void);
void PXI_SendWordByFifo(void);
void OS_RestoreInterrupts(void);
extern char data_020bd35c[];
extern char data_020bd3a8[];
extern char PMi_WaitBusyMethod[];
void OS_GetProcMode(void);
void OS_GetCpsrIrq(void);
void PXIi_HandlerRecvFifoNotEmpty(void);
extern char data_020bd37c[];
void PXI_Init(void);
void PXI_IsCallbackReady(void);
void WaitByLoop(void);
void PXI_SetFifoRecvCallback(void);
void PMi_SendPxiData(void);
void OS_SpinWaitSysCycles(void);
void PMi_SetLCDPower(void);

asm void TP_GetCalibratedResult(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =initial_020976e4
    ldrh r1, [r2, #0x38]
    tst r1, #1
    movne r0, #1
    ldmneia sp!, {r3, pc}
    ldrh r12, [r2, #8]
    ldrh r3, [r2, #0xa]
    mov r1, r0
    strh r12, [r0]
    strh r3, [r0, #2]
    ldrh r3, [r2, #0xc]
    ldrh r2, [r2, #0xe]
    strh r3, [r0, #4]
    strh r2, [r0, #6]
    bl TP_GetCalibratedPoint
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void TP_WaitCalibratedResult(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r0, #1
    bl TP_WaitBusy
    mov r0, r4
    bl TP_GetCalibratedResult
    ldmia sp!, {r4, pc}
}

asm void TP_RequestAutoSamplingStartAsync(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r12, =initial_020976e4
    mov r5, #0
    str r2, [r12, #0x14]
    mov r6, r1
    strh r5, [r12, #0x10]
    strh r6, [r12, #0x12]
    mov r4, r0
    strh r3, [r12, #0x18]
    cmp r3, #0
    bls @L_0200edf4
    mov r1, r5
@L_0200eddc:
    ldr r0, [r12, #0x14]
    add r0, r0, r5, lsl #3
    add r5, r5, #1
    strh r1, [r0, #4]
    cmp r5, r3
    blo @L_0200eddc
@L_0200edf4:
    bl OS_DisableInterrupts
    and r1, r6, #0xff
    orr r1, r1, #0x100
    mov r7, #0
    mov r5, #6
    mov r6, r0
    mov r0, r5
    mov r2, r7
    orr r1, r1, #0x2000000
    bl PXI_SendWordByFifo
    cmp r0, #0
    blt @L_0200ee40
    orr r1, r4, #0x10000
    mov r0, r5
    mov r2, r7
    orr r1, r1, #0x1000000
    bl PXI_SendWordByFifo
    cmp r0, #0
    movge r7, #1
@L_0200ee40:
    tst r7, #0xff
    bne @L_0200ee80
    mov r0, r6
    bl OS_RestoreInterrupts
    ldr r0, =initial_020976e4
    ldrh r1, [r0, #0x38]
    orr r1, r1, #2
    strh r1, [r0, #0x38]
    ldr r3, [r0, #4]
    cmp r3, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, #1
    mov r1, #4
    mov r2, #0
    blx r3
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0200ee80:
    ldr r2, =initial_020976e4
    ldr r1, =0xfffd
    ldrh r3, [r2, #0x3a]
    mov r0, r6
    orr r3, r3, #2
    strh r3, [r2, #0x3a]
    ldrh r3, [r2, #0x38]
    and r1, r3, r1
    strh r1, [r2, #0x38]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void TP_RequestAutoSamplingStopAsync(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    mov r5, #0
    mov r4, r0
    ldr r1, =0x3000200
    mov r2, r5
    mov r0, #6
    bl PXI_SendWordByFifo
    cmp r0, #0
    movge r5, #1
    cmp r5, #0
    bne @L_0200ef1c
    mov r0, r4
    bl OS_RestoreInterrupts
    ldr r0, =initial_020976e4
    ldrh r1, [r0, #0x38]
    orr r1, r1, #4
    strh r1, [r0, #0x38]
    ldr r3, [r0, #4]
    cmp r3, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, #2
    mov r1, #4
    mov r2, #0
    blx r3
    ldmia sp!, {r3, r4, r5, pc}
@L_0200ef1c:
    ldr r2, =initial_020976e4
    ldr r1, =0xfffb
    ldrh r3, [r2, #0x3a]
    mov r0, r4
    orr r3, r3, #4
    strh r3, [r2, #0x3a]
    ldrh r3, [r2, #0x38]
    and r1, r3, r1
    strh r1, [r2, #0x38]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void TP_GetLatestIndexInAuto(void)
{
    ldr r0, =initial_020976e4
    ldrh r0, [r0, #0x10]
    bx lr
}

asm void TP_CalcCalibrateParam(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    mov r8, r2
    cmp r9, #0x1000
    cmplo r8, #0x1000
    ldrloh r4, [sp, #0x2c]
    mov r7, r3
    mov r10, r0
    cmplo r4, #0x1000
    ldrloh r3, [sp, #0x30]
    cmplo r3, #0x1000
    movhs r0, #1
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, #0x100
    ldrloh r2, [sp, #0x34]
    cmplo r2, #0x100
    ldrloh r1, [sp, #0x28]
    cmplo r1, #0xc0
    ldrloh r0, [sp, #0x38]
    cmplo r0, #0xc0
    movhs r0, #1
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, r2
    cmpne r1, r0
    cmpne r9, r4
    cmpne r8, r3
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl OS_DisableInterrupts
    ldrh lr, [sp, #0x2c]
    ldrh r12, [sp, #0x34]
    ldr r3, =0x4000280
    sub r1, r9, lr
    mov r2, #0
    strh r2, [r3]
    mov r1, r1, lsl #8
    str r1, [r3, #0x10]
    sub r2, r7, r12
    ldrh r4, [sp, #0x38]
    ldrh r5, [sp, #0x28]
    str r2, [r3, #0x18]
    mov r1, #0
    sub r2, r5, r4
    ldrh r6, [sp, #0x30]
    str r1, [r3, #0x1c]
    str r2, [sp]
    sub r1, r8, r6
@L_0200f020:
    ldrh r2, [r3]
    tst r2, #0x8000
    bne @L_0200f020
    mov r11, r1, lsl #8
    ldr r1, =0x40002a0
    ldr r2, [r1]
    mov r1, #0
    strh r1, [r3]
    ldr r1, =0x40002a0
    cmp r2, #0x8000
    str r11, [r1, #-0x10]
    sub r3, r1, #8
    ldr r1, [sp]
    mov r11, #0
    stmia r3, {r1, r11}
    bge @L_0200f070
    mov r1, r11
    sub r1, r1, #0x8000
    cmp r2, r1
    bge @L_0200f07c
@L_0200f070:
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0200f07c:
    strh r2, [r10, #4]
    ldrsh r2, [r10, #4]
    add r1, r7, r12
    add r3, r9, lr
    mul r1, r2, r1
    rsb r1, r1, r3, lsl #8
    mov r1, r1, lsl #9
    mov r2, r1, asr #0x10
    cmp r2, #0x8000
    bge @L_0200f0b4
    mov r1, r11
    sub r1, r1, #0x8000
    cmp r2, r1
    bge @L_0200f0c0
@L_0200f0b4:
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0200f0c0:
    ldr r1, =0x40002a0
    strh r2, [r10]
    sub r2, r1, #0x20
@L_0200f0cc:
    ldrh r1, [r2]
    tst r1, #0x8000
    bne @L_0200f0cc
    ldr r1, =0x40002a0
    ldr r7, [r1]
    bl OS_RestoreInterrupts
    cmp r7, #0x8000
    bge @L_0200f0fc
    mov r1, #0x8000
    rsb r1, r1, #0
    cmp r7, r1
    bge @L_0200f104
@L_0200f0fc:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0200f104:
    strh r7, [r10, #6]
    ldrsh r2, [r10, #6]
    add r0, r5, r4
    add r3, r8, r6
    mul r0, r2, r0
    rsb r0, r0, r3, lsl #8
    mov r0, r0, lsl #9
    mov r0, r0, asr #0x10
    cmp r0, #0x8000
    bge @L_0200f134
    cmp r0, r1
    bge @L_0200f13c
@L_0200f134:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0200f13c:
    strh r0, [r10, #2]
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void TP_GetCalibratedPoint(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r2, =initial_020976e4
    ldrh r2, [r2, #0x34]
    cmp r2, #0
    bne @L_0200f188
    ldrh r4, [r1]
    ldrh r3, [r1, #2]
    ldrh r2, [r1, #4]
    ldrh r1, [r1, #6]
    strh r3, [r0, #2]
    strh r2, [r0, #4]
    strh r1, [r0, #6]
    strh r4, [r0]
    ldmia sp!, {r4, r5, r6, pc}
@L_0200f188:
    ldrh r4, [r1, #4]
    ldrh r3, [r1, #6]
    ldr r2, =data_020bd35c
    cmp r4, #0
    moveq r1, #0
    strh r3, [r0, #6]
    streqh r1, [r0]
    streqh r1, [r0, #2]
    strh r4, [r0, #4]
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrh r4, [r1]
    ldr r3, [r2]
    ldr lr, [r2, #8]
    mov r4, r4, lsl #2
    subs r12, r4, r3
    mov r3, r3, asr #0x1f
    rsc r3, r3, r4, asr #31
    umull r6, r5, lr, r12
    mla r5, lr, r3, r5
    mov r3, lr, asr #0x1f
    mla r5, r3, r12, r5
    mov r3, r6, lsr #0x16
    orr r3, r3, r5, lsl #10
    strh r3, [r0]
    ldrsh r3, [r0]
    cmp r3, #0
    movlt r3, #0
    strlth r3, [r0]
    blt @L_0200f208
    cmp r3, #0xff
    movgt r3, #0xff
    strgth r3, [r0]
@L_0200f208:
    ldrh r3, [r1, #2]
    ldr r1, [r2, #0xc]
    ldr r12, [r2, #0x14]
    mov r2, r3, lsl #2
    subs r3, r2, r1
    mov r1, r1, asr #0x1f
    rsc r1, r1, r2, asr #31
    umull r4, lr, r12, r3
    mla lr, r12, r1, lr
    mov r1, r12, asr #0x1f
    mla lr, r1, r3, lr
    mov r1, r4, lsr #0x16
    orr r1, r1, lr, lsl #10
    strh r1, [r0, #2]
    ldrsh r1, [r0, #2]
    cmp r1, #0
    movlt r1, #0
    strlth r1, [r0, #2]
    ldmltia sp!, {r4, r5, r6, pc}
    cmp r1, #0xbf
    movgt r1, #0xbf
    strgth r1, [r0, #2]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void TP_WaitBusy(void)
{
    ldr r1, =initial_020976e4
@L_0200f270:
    ldrh r2, [r1, #0x3a]
    tst r2, r0
    bne @L_0200f270
    bx lr
}

asm void TP_CheckError(void)
{
    ldr r1, =initial_020976e4
    ldrh r1, [r1, #0x38]
    and r0, r1, r0
    bx lr
}

asm void PMi_WaitBusy(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_020bd3a8
    ldr r0, [r4]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r6, =0x4000208
    ldr r5, =PMi_WaitBusyMethod
@L_0200f2b4:
    ldr r0, [r5]
    tst r0, #2
    beq @L_0200f2cc
    bl OS_GetProcMode
    cmp r0, #0x12
    beq @L_0200f2fc
@L_0200f2cc:
    ldr r0, [r5]
    tst r0, #4
    beq @L_0200f2e4
    bl OS_GetCpsrIrq
    cmp r0, #0x80
    beq @L_0200f2fc
@L_0200f2e4:
    ldr r0, [r5]
    tst r0, #8
    beq @L_0200f300
    ldrh r0, [r6]
    cmp r0, #0
    bne @L_0200f300
@L_0200f2fc:
    bl PXIi_HandlerRecvFifoNotEmpty
@L_0200f300:
    ldr r0, [r4]
    cmp r0, #0
    bne @L_0200f2b4
    ldmia sp!, {r4, r5, r6, pc}
}

asm void PMi_DummyCallback(void)
{
    cmp r1, #0
    strne r0, [r1]
    bx lr
}

asm void PMi_CallCallbackAndUnlock(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =data_020bd37c
    mov r3, #0
    ldr r12, [r2, #0x30]
    ldr r1, [r2, #0x34]
    cmp r12, #0
    str r3, [r2, #0x2c]
    ldmeqia sp!, {r3, pc}
    str r3, [r2, #0x30]
    blx r12
    ldmia sp!, {r3, pc}
}

asm void PMi_WaitVBlank(void)
{
    stmdb sp!, {r3}
    sub sp, sp, #4
    ldr r2, =0x2fffc3c
    ldr r0, [r2]
    str r0, [sp]
@L_0200f36c:
    ldr r1, [r2]
    ldr r0, [sp]
    cmp r0, r1
    beq @L_0200f36c
    add sp, sp, #4
    ldmia sp!, {r3}
    bx lr
}

asm void PM_Init(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r0, =data_020bd37c
    ldrh r1, [r0]
    cmp r1, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r4, #1
    strh r4, [r0]
    mov r1, #0
    str r1, [r0, #0x2c]
    str r1, [r0, #0x30]
    bl PXI_Init
    mov r1, r4
    mov r0, #8
    bl PXI_IsCallbackReady
    cmp r0, #0
    bne @L_0200f3f0
    mov r6, #0x64
    mov r5, #8
@L_0200f3d4:
    mov r0, r6
    bl WaitByLoop
    mov r0, r5
    mov r1, r4
    bl PXI_IsCallbackReady
    cmp r0, #0
    beq @L_0200f3d4
@L_0200f3f0:
    ldr r1, =PMi_CommonCallback
    mov r0, #8
    bl PXI_SetFifoRecvCallback
    ldr r1, =0x2fffc3c
    ldr r0, =data_020bd37c
    ldr r1, [r1]
    str r1, [r0, #8]
    str r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void PMi_CommonCallback(void)
{
    stmdb sp!, {r3, lr}
    and r0, r1, #0x7f00
    mov r3, r0, lsl #8
    and r0, r1, #0xff
    cmp r2, #0
    mov r1, r3, lsr #0x10
    beq @L_0200f454
    cmp r1, #0x61
    cmpne r1, #0x62
    moveq r0, #1
    movne r0, #2
    bl PMi_CallCallbackAndUnlock
    ldmia sp!, {r3, pc}
@L_0200f454:
    sub r1, r1, #0x60
    cmp r1, #3
    addls pc, pc, r1, lsl #2
    b @L_0200f49c
    b @L_0200f48c
    b @L_0200f474
    b @L_0200f49c
    b @L_0200f490
@L_0200f474:
    ldr r1, =data_020bd37c
    ldr r1, [r1, #0x38]
    cmp r1, #0
    strneh r0, [r1]
@L_0200f484:
    mov r0, #0
    b @L_0200f49c
@L_0200f48c:
    b @L_0200f484
@L_0200f490:
    ldr r1, =data_020bd37c
    mov r2, #1
    str r2, [r1, #0xc]
@L_0200f49c:
    bl PMi_CallCallbackAndUnlock
    ldmia sp!, {r3, pc}
}

asm void PMi_TryToSendPxiData(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl OS_DisableInterrupts
    ldr r1, =data_020bd37c
    mov r4, r0
    ldr r2, [r1, #0x2c]
    cmp r2, #0
    beq @L_0200f4e0
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0200f4e0:
    mov r0, #1
    str r0, [r1, #0x2c]
    str r6, [r1, #0x38]
    ldr r0, [sp, #0x18]
    str r5, [r1, #0x30]
    str r0, [r1, #0x34]
    cmp r7, #0
    mov r5, #0
    ble @L_0200f518
@L_0200f504:
    ldr r0, [r8, r5, lsl #2]
    bl PMi_SendPxiData
    add r5, r5, #1
    cmp r5, r7
    blt @L_0200f504
@L_0200f518:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void PMi_TryToSendPxiDataTillSuccess(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r8, #0x10000
    mov r4, #0
    ldr r5, =0x51d23
    ldr r6, =PMi_DummyCallback
    mov r10, r0
    mov r9, r1
    rsb r8, r8, #0
    add r7, sp, #4
    mov r11, r4
@L_0200f558:
    str r8, [sp, #4]
    mov r0, r10
    mov r1, r9
    mov r2, r11
    mov r3, r6
    str r7, [sp]
    bl PMi_TryToSendPxiData
    cmp r0, #0
    beq @L_0200f5a4
@L_0200f57c:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    mov r0, r10
    mov r1, r9
    str r7, [sp]
    mov r2, r4
    mov r3, r6
    bl PMi_TryToSendPxiData
    cmp r0, #0
    bne @L_0200f57c
@L_0200f5a4:
    ldr r0, [sp, #4]
    cmp r0, r8
    bne @L_0200f5c4
@L_0200f5b0:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    ldr r0, [sp, #4]
    cmp r0, r8
    beq @L_0200f5b0
@L_0200f5c4:
    ldr r0, [sp, #4]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r5
    bl OS_SpinWaitSysCycles
    b @L_0200f558
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void PMi_SendSleepStart(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r2, =0x3006000
    mov r8, r0
    mov r6, r1
    add r0, sp, #0
    mov r1, #1
    str r2, [sp]
    bl PMi_TryToSendPxiDataTillSuccess
    mov r5, #0
    mov r4, #2
    mov r7, #1
@L_0200f620:
    mov r0, r5
    mov r1, r4
    mov r2, r5
    mov r3, r7
    bl PMi_SetLCDPower
    cmp r0, #1
    bne @L_0200f620
    and r0, r8, #0xff
    orr r3, r0, #0x6200
    orr r3, r3, #0x2000000
    ldr r1, =0x1010000
    mov r0, r6, lsl #0x10
    orr r2, r1, r0, lsr #16
    add r0, sp, #0
    mov r1, r4
    str r3, [sp]
    str r2, [sp, #4]
    bl PMi_TryToSendPxiDataTillSuccess
    mov r0, r5
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void PM_SendUtilityCommandAsync(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0xc
    and r0, r0, #0xff
    orr lr, r0, #0x6100
    mov r0, r1, lsl #0x10
    ldr r1, =0x1010000
    orr lr, lr, #0x2000000
    orr r1, r1, r0, lsr #16
    str r1, [sp, #8]
    ldr r12, [sp, #0x10]
    str lr, [sp, #4]
    add r0, sp, #4
    mov r1, #2
    str r12, [sp]
    bl PMi_TryToSendPxiData
    add sp, sp, #0xc
    ldmia sp!, {pc}
}

asm void func_0200f6c4(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r3, =PMi_DummyCallback
    add r12, sp, #4
    str r12, [sp]
    bl PM_SendUtilityCommandAsync
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, pc}
    bl PMi_WaitBusy
    ldr r0, [sp, #4]
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void PMi_SetLEDAsync(void)
{
    stmdb sp!, {r3, lr}
    mov r3, r1
    cmp r0, #1
    beq @L_0200f720
    cmp r0, #2
    beq @L_0200f730
    cmp r0, #3
    beq @L_0200f728
    b @L_0200f738
@L_0200f720:
    mov r0, #1
    b @L_0200f73c
@L_0200f728:
    mov r0, #2
    b @L_0200f73c
@L_0200f730:
    mov r0, #3
    b @L_0200f73c
@L_0200f738:
    mov r0, #0
@L_0200f73c:
    cmp r0, #0
    ldreq r0, =0xffff
    ldmeqia sp!, {r3, pc}
    mov r1, #0
    str r2, [sp]
    mov r2, r1
    bl PM_SendUtilityCommandAsync
    ldmia sp!, {r3, pc}
}
