// (asm for now)

void MBi_IsCommSizeValid(void);
void MB_SetParentCommParam(void);
void MBi_StartCommon(void);
void MBi_StartParentCore(void);
void MB_StartParentFromIdle(void);
void MBi_CallReset(void);
void MBi_OnReset(void);
void MBi_CommEnd(void);
void MB_EndToIdle(void);
void MB_DisconnectChild(void);
void MBi_SetMaxScanTime(void);
void MBi_SetMPData(void);
void MBi_SendMP(void);
void MBi_GetGgid(void);
void MBi_GetTgid(void);
void MBi_GetAttribute(void);
void MBi_IsStarted(void);
void MBi_CheckWmErrcode(void);
void MBi_InitCache(void);

void OS_DisableInterrupts(void);
extern char WM_DMA_NO[];
void OS_RestoreInterrupts(void);
void func_020136b4(void);
void WM_SetIndCallback(void);
void MBi_OnInitializeDone(void);
void MIi_CpuClear16(void);
void MB_CommSetParentStateCallback(void);
void MBi_SetChildMPMaxSize(void);
void MBi_SetParentPieceBuffer(void);
void MI_CpuFill8(void);
void MBi_CommParentCallback(void);
void MBi_ParentCallback(void);
void MB_InitSendGameInfoStatus(void);
void PXI_IsCallbackReady(void);
void WM_Reset(void);
void MBi_EndCommon(void);
void MBi_IsTaskAvailable(void);
void MBi_EndTaskThread(void);
void OS_Terminate(void);
void WM_Disconnect(void);
void MBi_ClearParentPieceBuffer(void);
extern char mbiScanParam[];
void WM_SetMPDataToPortEx(void);
void MBi_ChildCallback(void);

asm void MBi_IsCommSizeValid(void)
{
    ldr r3, =0x1fe
    cmp r0, r3
    bhi @L_0217818c
    cmp r0, #0xe4
    bhs @L_02178194
@L_0217818c:
    mov r0, #0
    bx lr
@L_02178194:
    cmp r1, #0x10
    bhi @L_021781a4
    cmp r1, #8
    bhs @L_021781ac
@L_021781a4:
    mov r0, #0
    bx lr
@L_021781ac:
    add r0, r0, #0x26
    mov r0, r0, lsl #2
    add r1, r1, #0x20
    add r0, r0, #0x4a
    mov r1, r1, lsl #2
    add r3, r0, #0x100
    add r0, r1, #0x70
    mla r1, r2, r0, r3
    ldr r0, =0x15e0
    cmp r1, r0
    movlt r0, #1
    movge r0, #0
    bx lr
}

asm void MB_SetParentCommParam(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r6, r1
    bl OS_DisableInterrupts
    ldr r8, =WM_DMA_NO
    mov r5, r0
    ldr r1, [r8, #0xc]
    ldrb r1, [r1, #0x50d]
    cmp r1, #0
    beq @L_0217821c
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0217821c:
    mov r4, #8
    mov r0, r7
    mov r1, r4
    mov r2, r6
    bl MBi_IsCommSizeValid
    cmp r0, #0
    bne @L_02178248
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02178248:
    ldr r1, [r8, #0xc]
    mov r0, r5
    strh r6, [r1, #0x10]
    ldr r1, [r8, #0xc]
    add r1, r1, #0x500
    strh r7, [r1]
    ldr r1, [r8, #0xc]
    add r1, r1, #0x500
    strh r4, [r1, #2]
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void MBi_StartCommon(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =WM_DMA_NO
    mov r4, #0
    ldr r1, [r5, #0xc]
    mov r0, #0x1e
    add r1, r1, #0x500
    strh r4, [r1, #0x28]
    ldr r1, [r5, #0xc]
    add r1, r1, #0x500
    strh r4, [r1, #0x2a]
    ldr r1, [r5, #0xc]
    add r1, r1, #0x500
    strh r4, [r1, #0x26]
    ldr r1, [r5, #0xc]
    add r1, r1, #0x500
    strh r4, [r1, #0x48]
    bl MBi_SetMaxScanTime
    ldr r0, [r5, #0x10]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x320]
    cmp r0, #0
    bne @L_02178320
@L_021782d4:
    ldr r1, [r5, #0xc]
    ldrh r2, [r5]
    ldr r0, [r5, #4]
    ldr r1, [r1, #0x508]
    bl func_020136b4
    cmp r0, #4
    beq @L_021782d4
    cmp r0, #2
    movne r0, #8
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r4, =WM_DMA_NO
    ldr r0, [r4, #0xc]
    ldr r0, [r0, #0x508]
    bl WM_SetIndCallback
    ldr r0, [r4, #0xc]
    mov r1, #1
    strb r1, [r0, #0x50d]
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02178320:
    ldr r0, [r5, #0xc]
    ldr r0, [r0, #0x508]
    bl WM_SetIndCallback
    ldr r0, [r5, #0xc]
    mov r1, #1
    strb r1, [r0, #0x50d]
    bl MBi_OnInitializeDone
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void MBi_StartParentCore(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r4, =WM_DMA_NO
    mov r6, #0
    ldr r1, [r4, #0xc]
    mov r7, r0
    strh r5, [r1, #0x32]
    ldr r1, [r4, #0x10]
    ldr r2, =0x69c0
    add r0, r1, #0x1f
    add r0, r0, #0x7d00
    bic r0, r0, #0x1f
    str r0, [r4, #4]
    add r0, r1, #0x1000
    ldr r5, [r0, #0x4e4]
    mov r0, r6
    add r1, r1, #0x1340
    bl MIi_CpuClear16
    mov r0, r5
    bl MB_CommSetParentStateCallback
    ldr r0, [r4, #0xc]
    ldr r1, [r4, #0x10]
    add r0, r0, #0x500
    ldrh r2, [r0]
    add r0, r1, #0x1000
    sub r1, r2, #6
    str r1, [r0, #0x318]
    ldr r0, [r4, #0xc]
    add r0, r0, #0x500
    ldrh r0, [r0, #2]
    bl MBi_SetChildMPMaxSize
    ldr r0, [r4, #0x10]
    add r0, r0, #0x138
    add r0, r0, #0x1400
    bl MBi_SetParentPieceBuffer
    mov r5, r6
    mvn r1, #0
@L_021783e0:
    ldr r0, [r4, #0x10]
    add r0, r0, r6, lsl #2
    add r0, r0, #0x1000
    str r5, [r0, #0x4e8]
    ldr r0, [r4, #0x10]
    add r0, r0, r6
    add r0, r0, #0x1000
    add r6, r6, #1
    strb r1, [r0, #0x526]
    cmp r6, #0xf
    blt @L_021783e0
    ldr r4, =WM_DMA_NO
    ldr r2, =0x5d40
    ldr r1, [r4, #0x10]
    mov r0, r5
    add r1, r1, #0x1000
    strb r5, [r1, #0x524]
    ldr r1, [r4, #0x10]
    add r1, r1, #0x388
    add r1, r1, #0x1400
    bl MIi_CpuClear16
    ldr r0, [r4, #0x10]
    mov r1, r5
    add r0, r0, #0x354
    add r0, r0, #0x1400
    mov r2, #0x1e
    bl MI_CpuFill8
    ldr r0, [r4, #0xc]
    mov r5, #1
    add r0, r0, #0x500
    strh r5, [r0, #0x24]
    ldr r0, [r4, #0xc]
    ldr r2, =MBi_CommParentCallback
    ldr r1, =MBi_ParentCallback
    str r2, [r0, #0x51c]
    ldr r0, [r4, #0xc]
    str r1, [r0, #0x508]
    ldr r1, [r4, #0xc]
    add r0, r1, #0x500
    ldrh r0, [r0]
    strh r0, [r1, #0x34]
    ldr r0, [r4, #0xc]
    ldrh r1, [r0, #0x34]
    add r0, r0, #0x500
    add r1, r1, #0x23
    bic r1, r1, #0x1f
    strh r1, [r0, #0x18]
    ldr r1, [r4, #0xc]
    add r0, r1, #0x500
    ldrh r0, [r0, #2]
    strh r0, [r1, #0x36]
    ldr r0, [r4, #0xc]
    ldrh r1, [r0, #0x36]
    add r0, r0, #0x500
    add r1, r1, #0xe
    rsb r1, r1, r1, lsl #4
    add r1, r1, #0x29
    bic r1, r1, #0x1f
    mov r1, r1, lsl #1
    strh r1, [r0, #0x1a]
    bl MB_InitSendGameInfoStatus
    bl MBi_StartCommon
    mov r6, r0
    mov r0, r7
    bl OS_RestoreInterrupts
    mov r1, r5
    mov r0, #0xf
    bl PXI_IsCallbackReady
    ldr r1, [r4, #0x10]
    add r1, r1, #0x7000
    str r0, [r1, #0x4c8]
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void MB_StartParentFromIdle(void)
{
    ldr r1, =WM_DMA_NO
    ldr r12, =MBi_StartParentCore
    ldr r1, [r1, #0x10]
    mov r2, #1
    add r1, r1, #0x1000
    str r2, [r1, #0x320]
    bx r12
}

asm void MBi_CallReset(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, =WM_DMA_NO
    ldr r0, [r0, #0xc]
    ldr r0, [r0, #0x508]
    bl WM_Reset
    mov r4, r0
    mov r1, r4
    mov r0, #1
    bl MBi_CheckWmErrcode
    cmp r4, #2
    moveq r4, #0
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void MBi_OnReset(void)
{
    ldr r12, =MBi_CallReset
    bx r12
}

asm void MBi_CommEnd(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, #1
    bl OS_DisableInterrupts
    ldr r1, =WM_DMA_NO
    mov r5, r0
    ldr r2, [r1, #0xc]
    ldrb r0, [r2, #0x50d]
    cmp r0, #0
    bne @L_021785b0
    mov r0, #0
    bl MBi_EndCommon
    b @L_021785f8
@L_021785b0:
    add r0, r2, #0x500
    ldrh r0, [r0, #0x26]
    cmp r0, #0
    bne @L_021785f8
    mov r6, #0
    str r6, [r2, #0x5e4]
    ldr r0, [r1, #0xc]
    add r0, r0, #0x500
    strh r4, [r0, #0x26]
    bl MBi_IsTaskAvailable
    cmp r0, #0
    beq @L_021785f0
    ldr r0, =MBi_OnReset
    bl MBi_EndTaskThread
    mov r4, r6
    b @L_021785f8
@L_021785f0:
    bl MBi_CallReset
    mov r4, r0
@L_021785f8:
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

asm void MB_EndToIdle(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =WM_DMA_NO
    mov r4, r0
    ldr r0, [r1, #0x10]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x320]
    cmp r0, #0
    bne @L_02178638
    bl OS_Terminate
@L_02178638:
    bl MBi_CommEnd
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void MB_DisconnectChild(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    ldr r0, =MBi_ParentCallback
    mov r1, r8
    bl WM_Disconnect
    cmp r8, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r8, #0x10
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r4, =WM_DMA_NO
    mov r6, #0
    ldr r0, [r4, #0x10]
    sub r7, r8, #1
    add r0, r0, r7, lsl #1
    add r0, r0, #0x1400
    strh r6, [r0, #0x8a]
    ldr r0, [r4, #0x10]
    mov r5, #4
    add r0, r0, #0xa8
    add r0, r0, #0x1400
    mov r1, r6
    mov r2, r5
    add r0, r0, r7, lsl #2
    bl MI_CpuFill8
    ldr r0, [r4, #0x10]
    mov r9, #0x16
    add r0, r0, #0x1340
    mla r0, r7, r9, r0
    mov r1, r6
    mov r2, r9
    bl MI_CpuFill8
    mov r0, r8
    bl MBi_ClearParentPieceBuffer
    ldr r0, [r4, #0x10]
    sub r1, r9, #0x17
    add r0, r0, r7, lsl #1
    add r0, r0, #0x1700
    strh r6, [r0, #0x54]
    ldr r2, [r4, #0x10]
    add r0, r2, r7
    add r0, r0, #0x1500
    ldrsb r0, [r0, #0x26]
    cmp r0, r1
    beq @L_02178778
    and r1, r0, #0xff
    add r0, r5, #0x5d0
    mul r0, r1, r0
    mov r1, #1
    add r2, r2, r0
    add r3, r2, #0x1d00
    mvn r2, r1, lsl r8
    ldrh r5, [r3, #0x4e]
    mov r2, r2, lsl #0x10
    mov r6, r1, lsl r8
    and r5, r5, r2, lsr #16
    strh r5, [r3, #0x4e]
    ldr r5, [r4, #0x10]
    mov r3, r6, lsl #0x10
    add r5, r5, r0
    add r5, r5, #0x1d00
    ldrh lr, [r5, #0x50]
    sub r12, r1, #2
    mov r6, r7
    orr r1, lr, r3, lsr #16
    strh r1, [r5, #0x50]
    ldr r1, [r4, #0x10]
    add r1, r1, r6
    add r1, r1, #0x1000
    strb r12, [r1, #0x526]
    ldr r1, [r4, #0x10]
    add r0, r1, r0
    add r0, r0, #0x1d00
    ldrh r1, [r0, #0x4c]
    and r1, r1, r2, lsr #16
    strh r1, [r0, #0x4c]
@L_02178778:
    ldr r1, =WM_DMA_NO
    mov r4, #1
    ldr r2, [r1, #0x10]
    add r0, r2, #0x1500
    ldrh r0, [r0, #0x36]
    tst r0, r4, lsl r8
    beq @L_021787c0
    add r0, r2, #0x1000
    ldrb r3, [r0, #0x535]
    mvn r2, r4, lsl r8
    sub r3, r3, #1
    strb r3, [r0, #0x535]
    ldr r1, [r1, #0x10]
    mov r0, r2, lsl #0x10
    add r1, r1, #0x1500
    ldrh r2, [r1, #0x36]
    and r0, r2, r0, lsr #16
    strh r0, [r1, #0x36]
@L_021787c0:
    ldr r0, =WM_DMA_NO
    mov r1, #0
    ldr r0, [r0, #0x10]
    add r0, r0, r7, lsl #2
    add r0, r0, #0x1000
    str r1, [r0, #0x4e8]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void MBi_SetMaxScanTime(void)
{
    ldr r1, =mbiScanParam
    strh r0, [r1, #8]
    bx lr
}

asm void MBi_SetMPData(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldrh r4, [sp, #0x18]
    mov r3, r2
    mov r2, r1
    str r4, [sp]
    mov r4, #1
    str r4, [sp, #4]
    mov r4, #3
    mov r1, #0
    str r4, [sp, #8]
    bl WM_SetMPDataToPortEx
    mov r4, r0
    mov r1, r4
    mov r0, #0xf
    bl MBi_CheckWmErrcode
    mov r0, r4
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
}

asm void MBi_SendMP(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    ldr r5, =WM_DMA_NO
    mov r12, r1, lsl #0x10
    ldr r3, [r5, #0xc]
    mov lr, r2, lsl #0x10
    add r4, r3, #0x500
    ldrh r6, [r4, #0x28]
    mov r1, r0
    mov r2, r12, lsr #0x10
    cmp r6, #0
    ldrneh r0, [r4, #0x26]
    mov r6, lr, lsr #0x10
    cmpne r0, #1
    addeq sp, sp, #4
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r4, #0x24]
    cmp r0, #1
    beq @L_0217889c
    cmp r0, #2
    beq @L_021788e4
    b @L_02178914
@L_0217889c:
    ldrh r0, [r4, #0x2c]
    cmp r0, #0
    moveq r0, #0x3e8
    movne r0, #0
    str r6, [sp]
    mov r12, r0, lsl #0x10
    ldr r0, [r3, #0x508]
    mov r3, r12, lsr #0x10
    bl MBi_SetMPData
    cmp r0, #2
    ldreq r1, =WM_DMA_NO
    moveq r2, #1
    ldreq r1, [r1, #0xc]
    add sp, sp, #4
    streqb r2, [r1, #0x50c]
    cmp r0, #2
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_021788e4:
    ldr r0, =MBi_ChildCallback
    mov r3, #0
    str r6, [sp]
    bl MBi_SetMPData
    cmp r0, #2
    ldreq r1, [r5, #0xc]
    moveq r2, #1
    streqb r2, [r1, #0x50c]
    cmp r0, #2
    add sp, sp, #4
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02178914:
    mov r0, #1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void MBi_GetGgid(void)
{
    ldr r0, =WM_DMA_NO
    ldr r0, [r0, #0xc]
    ldr r0, [r0, #8]
    bx lr
}

asm void MBi_GetTgid(void)
{
    ldr r0, =WM_DMA_NO
    ldr r0, [r0, #0xc]
    ldrh r0, [r0, #0xc]
    bx lr
}

asm void MBi_GetAttribute(void)
{
    ldr r0, =WM_DMA_NO
    mov r2, #2
    ldr r1, [r0, #0xc]
    mov r3, #1
    ldrh r0, [r1, #0x12]
    mov r12, #4
    cmp r0, #0
    ldrh r0, [r1, #0xe]
    moveq r2, #0
    cmp r0, #0
    ldrh r0, [r1, #0x14]
    moveq r3, #0
    cmp r0, #0
    ldrh r0, [r1, #0x16]
    moveq r12, #0
    mov r1, #8
    cmp r0, #0
    orr r0, r3, r2
    moveq r1, #0
    orr r0, r12, r0
    orr r0, r1, r0
    and r0, r0, #0xff
    bx lr
}

asm void MBi_IsStarted(void)
{
    ldr r0, =WM_DMA_NO
    ldr r0, [r0, #0xc]
    ldrb r0, [r0, #0x50d]
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void MBi_CheckWmErrcode(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #2
    cmpne r1, #0
    ldmeqia sp!, {r3, pc}
    ldr r2, =WM_DMA_NO
    strh r0, [sp]
    ldr r0, [r2, #0xc]
    strh r1, [sp, #2]
    ldr r2, [r0, #0x51c]
    add r1, sp, #0
    mov r0, #0xff
    blx r2
    ldmia sp!, {r3, pc}
}

asm void MBi_InitCache(void)
{
    ldr r12, =MI_CpuFill8
    mov r1, #0
    mov r2, #0x70
    bx r12
}
