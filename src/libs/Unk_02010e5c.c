// (asm for now)

void CARDi_LockResource(void);
void CARDi_UnlockResource(void);
void CARDi_GetAccessLevel(void);
void CARDi_WaitAsync(void);
void CARDi_TryWaitAsync(void);
void CARDi_InitResourceLock(void);
void CARDi_InitCommand(void);
void CARDi_NotifyEvent(void);
void CARDi_ExecuteOldTypeTask(void);
void CARDi_OldTypeTaskThread(void);
void CARDi_WaitForTask(void);
void CARDi_EndTask(void);
void CARDi_GetDmaInterface(void);
void CARDi_ICInvalidateSmart(void);
void CARDi_DCInvalidateSmart(void);
void CARDi_OnFifoRecv(void);
void CARDi_Request(void);
void CARDi_RequestStreamCommandCore(void);
void CARDi_IdentifyBackupCore2(void);
void CARDi_IdentifyBackupCore(void);
void CARDi_BeginBackupCommand(void);
void CARDi_RequestStreamCommand(void);
void CARD_IdentifyBackup(void);
void CARD_GetBackupSectorSize(void);
void CARD_WaitBackupAsync(void);
void CARD_TryWaitBackupAsync(void);
void CARDi_SetRomOp(void);
void CARDi_StartRomPageTransfer(void);
void CARDi_ReadRomIDCore(void);
void CARDi_ReadRomStatusCore(void);
void CARDi_RefreshRom(void);
void CARDi_RefreshRomCore(void);
void CARDi_ReadRomWithCPU(void);
void CARDi_DmaReadPageCallback(void);
void CARDi_ReadRomWithDMA(void);
void CARDi_DmaReadDone(void);
void CARDi_IsRomDmaAvailable(void);
void CARDi_ReadRomSyncCore(void);
void CARDi_ReadRom(void);
void CARDi_InitRom(void);
void CARD_WaitRomAsync(void);
void CARDi_GetOwnSignature(void);
void CARD_InitPulledOutCallback(void);
void CARDi_PulledOutCallback(void);
void CARD_IsPulledOut(void);
void CARD_TerminateForPulledOut(void);
void CARDi_CheckPulledOutCore(void);

extern char cardi_common[];
void OS_DisableInterrupts(void);
void OS_Terminate(void);
void OS_SleepThread(void);
void OS_RestoreInterrupts(void);
void OS_WakeupThread(void);
void OS_GetBootType(void);
extern char data_020bd400[];
void MIi_CpuClearFast(void);
void DC_FlushRange(void);
void PXI_SetFifoRecvCallback(void);
extern char CARDiHookChain[];
extern char data_020bd980_b[];
void OS_SetThreadPriority(void);
void OS_WakeupThreadDirect(void);
extern char data_020a43c8[];
void IC_InvalidateAll(void);
void IC_InvalidateRange(void);
void DC_FlushAll(void);
void DC_StoreRange(void);
void DC_InvalidateRange(void);
void DC_WaitWriteBufferEmpty(void);
void PXI_IsCallbackReady(void);
void OS_SpinWaitSysCycles(void);
extern char OSi_ThreadInfo[];
void PXI_SendWordByFifo(void);
void OSi_ReferSymbol(void);
extern char CARDi_backup_cache_page_buf[];
void MI_CpuCopy8(void);
void MI_CpuFill8(void);
void CARD_CheckEnabled(void);
extern char data_020bb110[];
void OS_IsAlarmAvailable(void);
void OS_Sleep(void);
extern char cache_page[];
extern char data_020bdb60[];
extern char cardi_rom_base[];
void OS_DisableIrqMask(void);
void OS_ResetRequestIrqMask(void);
void OS_SetIrqFunction(void);
void OS_EnableIrqMask(void);
void OS_IrqHandler(void);
void OS_GetDTCMAddress(void);
extern char data_020bdab0[];
void func_02010d8c(void);
void OS_GetLockID(void);
void CARD_LockRom(void);
extern char CARDiOwnSignature[];
void CARD_UnlockRom(void);
void OS_ReleaseLockID(void);
void PXI_Init(void);
extern char CARDiSlotResetCount[];
void PM_ForceToPowerOff(void);
void CARDi_SendtoPxi(void);
void MI_StopAllDma(void);

asm void CARDi_LockResource(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r5, =cardi_common
    mov r8, r0
    mov r7, r1
    bl OS_DisableInterrupts
    ldr r1, [r5, #0x14]
    mov r6, r0
    cmp r1, r8
    bne @L_02010e94
    ldr r0, [r5, #0x24]
    cmp r0, r7
    beq @L_02010eb8
    bl OS_Terminate
    b @L_02010eb8
@L_02010e94:
    mvn r4, #2
    b @L_02010ea4
@L_02010e9c:
    add r0, r5, #0x1c
    bl OS_SleepThread
@L_02010ea4:
    ldr r0, [r5, #0x14]
    cmp r0, r4
    bne @L_02010e9c
    str r8, [r5, #0x14]
    str r7, [r5, #0x24]
@L_02010eb8:
    ldr r1, [r5, #0x18]
    mov r0, r6
    add r1, r1, #1
    str r1, [r5, #0x18]
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void CARDi_UnlockResource(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, =cardi_common
    mov r7, r0
    mov r6, r1
    bl OS_DisableInterrupts
    ldr r1, [r4, #0x14]
    mov r5, r0
    cmp r1, r7
    bne @L_02010f04
    ldr r0, [r4, #0x18]
    cmp r0, #0
    bne @L_02010f0c
@L_02010f04:
    bl OS_Terminate
    b @L_02010f44
@L_02010f0c:
    ldr r0, [r4, #0x24]
    cmp r0, r6
    beq @L_02010f1c
    bl OS_Terminate
@L_02010f1c:
    ldr r0, [r4, #0x18]
    subs r0, r0, #1
    str r0, [r4, #0x18]
    bne @L_02010f44
    mvn r2, #2
    mov r1, #0
    add r0, r4, #0x1c
    str r2, [r4, #0x14]
    str r1, [r4, #0x24]
    bl OS_WakeupThread
@L_02010f44:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void CARDi_GetAccessLevel(void)
{
    stmdb sp!, {r3, lr}
    bl OS_GetBootType
    cmp r0, #1
    moveq r0, #7
    movne r0, #3
    ldmia sp!, {r3, pc}
}

asm void CARDi_WaitAsync(void)
{
    mov r1, #0
    ldr r0, =cardi_common
    ldr r12, =CARDi_WaitForTask
    mov r2, r1
    mov r3, r1
    bx r12
}

asm void CARDi_TryWaitAsync(void)
{
    ldr r0, =cardi_common
    ldr r0, [r0, #4]
    tst r0, #4
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void CARDi_InitResourceLock(void)
{
    ldr r2, =cardi_common
    mov r0, #0
    mvn r1, #2
    str r1, [r2, #0x14]
    str r0, [r2, #0x18]
    str r0, [r2, #0x24]
    str r0, [r2, #0x20]
    str r0, [r2, #0x1c]
    bx lr
}

asm void CARDi_InitCommand(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =data_020bd400
    ldr r3, =cardi_common
    mov r4, #0x60
    mov r1, r5
    mov r2, r4
    mov r0, #0
    str r5, [r3]
    bl MIi_CpuClearFast
    mov r0, r5
    mov r1, r4
    bl DC_FlushRange
    ldr r1, =CARDi_OnFifoRecv
    mov r0, #0xb
    bl PXI_SetFifoRecvCallback
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CARDi_NotifyEvent(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    mov r4, r1
    bl OS_DisableInterrupts
    ldr r1, =CARDiHookChain
    mov r6, r0
    ldr r8, [r1]
    ldr r7, =data_020bd980_b
    cmp r8, #0
    beq @L_02011078
@L_02011044:
    ldr r3, [r8, #8]
    cmp r3, #0
    beq @L_02011060
    ldr r0, [r8, #4]
    mov r1, r5
    mov r2, r4
    blx r3
@L_02011060:
    ldr r0, [r7]
    cmp r0, r8
    moveq r7, r0
    ldr r8, [r7]
    cmp r8, #0
    bne @L_02011044
@L_02011078:
    mov r0, r6
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void CARDi_ExecuteOldTypeTask(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    movs r5, r1
    mov r6, r0
    ldr r4, =cardi_common
    beq @L_020110c8
    ldr r1, [r4, #8]
    add r0, r4, #0x28
    bl OS_SetThreadPriority
    ldr r1, [r4, #4]
    add r0, r4, #0x28
    orr r1, r1, #8
    str r6, [r4, #0x4e8]
    str r1, [r4, #4]
    bl OS_WakeupThreadDirect
    b @L_020110d8
@L_020110c8:
    mov r0, r4
    blx r6
    mov r0, r4
    bl CARDi_EndTask
@L_020110d8:
    cmp r5, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r4]
    ldr r0, [r0]
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void CARDi_OldTypeTaskThread(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, #0
    ldr r6, =cardi_common
    mov r4, r5
@L_02011110:
    bl OS_DisableInterrupts
    mov r7, r0
@L_02011118:
    ldr r0, [r6, #4]
    tst r0, #8
    bne @L_02011130
    mov r0, r5
    bl OS_SleepThread
    b @L_02011118
@L_02011130:
    mov r0, r7
    bl OS_RestoreInterrupts
    ldr r0, [r6, #0x4e8]
    mov r1, r4
    bl CARDi_ExecuteOldTypeTask
    b @L_02011110
}

asm void CARDi_WaitForTask(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl OS_DisableInterrupts
    ldr r1, [r8, #4]
    mov r4, r0
    tst r1, #4
    beq @L_0201118c
    add r9, r8, #0xf4
@L_02011178:
    add r0, r9, #0x400
    bl OS_SleepThread
    ldr r0, [r8, #4]
    tst r0, #4
    bne @L_02011178
@L_0201118c:
    cmp r7, #0
    ldrne r0, [r8, #4]
    strne r6, [r8, #0x4ec]
    orrne r0, r0, #4
    strne r0, [r8, #4]
    mov r0, r4
    strne r5, [r8, #0x4f0]
    bl OS_RestoreInterrupts
    ldr r0, [r8]
    ldr r0, [r0]
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void CARDi_EndTask(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r5, [r7, #0x4ec]
    ldr r6, [r7, #0x4f0]
    bl OS_DisableInterrupts
    ldr r2, [r7, #4]
    add r1, r7, #0xf4
    mov r4, r0
    bic r2, r2, #0x4c
    add r0, r1, #0x400
    str r2, [r7, #4]
    bl OS_WakeupThread
    mov r0, r4
    bl OS_RestoreInterrupts
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    blx r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void CARDi_GetDmaInterface(void)
{
    stmdb sp!, {r4, lr}
    tst r0, #0x10
    mov r4, #0
    movne r1, #1
    bic r0, r0, #0x10
    moveq r1, r4
    cmp r0, #3
    bhi @L_02011240
    cmp r1, #0
    ldreq r4, =data_020a43c8
    beq @L_02011240
    bl OS_Terminate
@L_02011240:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void CARDi_ICInvalidateSmart(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, r2
    blo @L_02011260
    bl IC_InvalidateAll
    ldmia sp!, {r3, pc}
@L_02011260:
    bl IC_InvalidateRange
    ldmia sp!, {r3, pc}
}

asm void CARDi_DCInvalidateSmart(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r6, r0
    cmp r5, r2
    blo @L_02011284
    bl DC_FlushAll
    ldmia sp!, {r4, r5, r6, pc}
@L_02011284:
    ands r0, r6, #0x1f
    beq @L_020112b0
    sub r6, r6, r0
    mov r4, #0x20
    mov r0, r6
    mov r1, r4
    bl DC_StoreRange
    mov r1, r4
    add r0, r6, r5
    bl DC_StoreRange
    add r5, r5, #0x20
@L_020112b0:
    mov r0, r6
    mov r1, r5
    bl DC_InvalidateRange
    bl DC_WaitWriteBufferEmpty
    ldmia sp!, {r4, r5, r6, pc}
}

asm void CARDi_OnFifoRecv(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0xb
    ldmneia sp!, {r3, pc}
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, =cardi_common
    ldr r1, [r0, #4]
    bic r1, r1, #0x20
    str r1, [r0, #4]
    ldr r0, [r0, #0x51c]
    bl OS_WakeupThreadDirect
    ldmia sp!, {r3, pc}
}

asm void CARDi_Request(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r0, [r10, #4]
    mov r9, r1
    mov r11, r2
    tst r0, #2
    mov r7, #1
    bne @L_0201136c
    ldr r1, [r10, #4]
    mov r0, #0xb
    orr r2, r1, #2
    mov r1, r7
    str r2, [r10, #4]
    bl PXI_IsCallbackReady
    cmp r0, #0
    bne @L_0201135c
    mov r5, #0x32
    mov r4, #0xb
@L_02011340:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    mov r0, r4
    mov r1, r7
    bl PXI_IsCallbackReady
    cmp r0, #0
    beq @L_02011340
@L_0201135c:
    mov r0, r10
    mov r1, #0
    mov r2, #1
    bl CARDi_Request
@L_0201136c:
    ldr r0, [r10]
    mov r1, #0x60
    bl DC_FlushRange
    bl DC_WaitWriteBufferEmpty
    ldr r0, =OSi_ThreadInfo
    mov r6, #0xb
    ldr r0, [r0, #4]
    mov r5, r6
    str r0, [r10, #0x51c]
    mov r4, #0
@L_02011394:
    ldr r0, [r10, #4]
    orr r0, r0, #0x20
    str r0, [r10, #4]
@L_020113a0:
    mov r0, r6
    mov r1, r9
    mov r2, r7
    bl PXI_SendWordByFifo
    cmp r0, #0
    blt @L_020113a0
    cmp r9, #0
    bne @L_020113dc
    ldr r8, [r10]
@L_020113c4:
    mov r0, r5
    mov r1, r8
    mov r2, r7
    bl PXI_SendWordByFifo
    cmp r0, #0
    blt @L_020113c4
@L_020113dc:
    bl OS_DisableInterrupts
    ldr r1, [r10, #4]
    mov r8, r0
    tst r1, #0x20
    beq @L_02011404
@L_020113f0:
    mov r0, r4
    bl OS_SleepThread
    ldr r0, [r10, #4]
    tst r0, #0x20
    bne @L_020113f0
@L_02011404:
    mov r0, r8
    bl OS_RestoreInterrupts
    ldr r0, [r10]
    mov r1, #0x60
    bl DC_InvalidateRange
    ldr r0, [r10]
    ldr r0, [r0]
    cmp r0, #4
    bne @L_02011434
    sub r11, r11, #1
    cmp r11, #0
    bgt @L_02011394
@L_02011434:
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void CARDi_RequestStreamCommandCore(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r0
    ldr r5, [r9, #0x510]
    ldr r0, =0x2000bac
    ldr r6, [r9, #0x518]
    ldr r10, [r9, #0x514]
    mov r7, #0x100
    bl OSi_ReferSymbol
    cmp r5, #0xb
    bne @L_0201147c
    bl CARD_GetBackupSectorSize
    mov r7, r0
    b @L_0201148c
@L_0201147c:
    cmp r5, #0xf
    ldreq r0, =cardi_common
    ldreq r0, [r0]
    ldreq r7, [r0, #0x20]
@L_0201148c:
    ldr r4, =CARDi_backup_cache_page_buf
    mov r11, #9
@L_02011494:
    ldr r8, [r9, #0x504]
    ldr r0, [r9]
    cmp r7, r8
    movlo r8, r7
    str r8, [r0, #0x14]
    ldr r0, [r9, #4]
    tst r0, #0x40
    beq @L_020114d0
    ldr r1, [r9, #4]
    ldr r0, [r9]
    bic r1, r1, #0x40
    str r1, [r9, #4]
    mov r1, #7
    str r1, [r0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020114d0:
    cmp r6, #3
    addls pc, pc, r6, lsl #2
    b @L_02011554
    b @L_020114ec
    b @L_02011510
    b @L_02011510
    b @L_0201153c
@L_020114ec:
    mov r0, r4
    mov r1, r8
    bl DC_InvalidateRange
    ldr r1, [r9, #0x4fc]
    ldr r0, [r9]
    str r1, [r0, #0xc]
    ldr r0, [r9]
    str r4, [r0, #0x10]
    b @L_02011554
@L_02011510:
    ldr r0, [r9, #0x4fc]
    mov r1, r4
    mov r2, r8
    bl MI_CpuCopy8
    mov r0, r4
    mov r1, r8
    bl DC_FlushRange
    bl DC_WaitWriteBufferEmpty
    ldr r0, [r9]
    str r4, [r0, #0xc]
    b @L_02011548
@L_0201153c:
    ldr r1, [r9, #0x4fc]
    ldr r0, [r9]
    str r1, [r0, #0xc]
@L_02011548:
    ldr r1, [r9, #0x500]
    ldr r0, [r9]
    str r1, [r0, #0x10]
@L_02011554:
    mov r0, r9
    mov r1, r5
    mov r2, r10
    bl CARDi_Request
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r6, #2
    bne @L_02011590
    mov r0, r9
    mov r1, r11
    mov r2, #1
    bl CARDi_Request
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    b @L_020115a8
@L_02011590:
    cmp r6, #0
    bne @L_020115a8
    ldr r1, [r9, #0x500]
    mov r0, r4
    mov r2, r8
    bl MI_CpuCopy8
@L_020115a8:
    ldr r0, [r9, #0x4fc]
    ldr r2, [r9, #0x500]
    ldr r1, [r9, #0x504]
    add r0, r0, r8
    add r2, r2, r8
    subs r1, r1, r8
    str r0, [r9, #0x4fc]
    str r2, [r9, #0x500]
    str r1, [r9, #0x504]
    bne @L_02011494
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void CARDi_IdentifyBackupCore2(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =cardi_common
    mov r4, #0x48
    ldr r6, [r1]
    mov r5, #0
    mov r7, r0
    mov r1, r5
    mov r2, r4
    add r0, r6, #0x18
    bl MI_CpuFill8
    ldr r0, =0x203f
    str r7, [r6, #4]
    str r0, [r6, #0x58]
    cmp r7, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7, asr #8
    and r0, r0, #0xff
    mov r3, #1
    mov r12, r3, lsl r0
    and r2, r7, #0xff
    mov r1, r7, asr #0x10
    str r12, [r6, #0x18]
    mov r0, #0xff
    strb r0, [r6, #0x54]
    cmp r2, #1
    and r0, r1, #0xff
    bne @L_02011700
    cmp r12, #0x2000
    bhi @L_02011664
    bhs @L_020116a0
    cmp r12, #0x200
    beq @L_02011680
    b @L_020118e4
@L_02011664:
    cmp r12, #0x10000
    bhi @L_02011674
    beq @L_020116b0
    b @L_020118e4
@L_02011674:
    cmp r12, #0x20000
    beq @L_020116c8
    b @L_020118e4
@L_02011680:
    mov r0, #0x10
    str r0, [r6, #0x24]
    str r3, [r6, #0x28]
    mov r0, #5
    str r0, [r6, #0x2c]
    mov r0, #0xf0
    strb r0, [r6, #0x54]
    b @L_020116e4
@L_020116a0:
    mov r0, #0x20
    str r0, [r6, #0x24]
    mov r0, #2
    b @L_020116d4
@L_020116b0:
    mov r0, #0x80
    str r0, [r6, #0x24]
    mov r0, #2
    str r0, [r6, #0x28]
    mov r0, #0xa
    b @L_020116dc
@L_020116c8:
    mov r0, #0x100
    str r0, [r6, #0x24]
    mov r0, #3
@L_020116d4:
    str r0, [r6, #0x28]
    mov r0, #5
@L_020116dc:
    str r0, [r6, #0x2c]
    strb r5, [r6, #0x54]
@L_020116e4:
    ldr r0, [r6, #0x24]
    str r0, [r6, #0x1c]
    ldr r0, [r6, #0x58]
    orr r0, r0, #0x140
    orr r0, r0, #0x4200
    str r0, [r6, #0x58]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02011700:
    cmp r2, #2
    bne @L_020118a4
    cmp r12, #0x100000
    bhi @L_02011730
    bhs @L_02011754
    cmp r12, #0x40000
    bhi @L_02011724
    beq @L_02011754
    b @L_020118e4
@L_02011724:
    cmp r12, #0x80000
    beq @L_02011754
    b @L_020118e4
@L_02011730:
    cmp r12, #0x400000
    bhi @L_02011748
    bhs @L_020117c0
    cmp r12, #0x200000
    beq @L_0201177c
    b @L_020118e4
@L_02011748:
    cmp r12, #0x800000
    beq @L_02011808
    b @L_020118e4
@L_02011754:
    mov r0, #0x19
    str r0, [r6, #0x30]
    mov r1, #0x12c
    str r1, [r6, #0x34]
    ldr r0, =0x1388
    str r1, [r6, #0x50]
    str r0, [r6, #0x40]
    ldr r0, [r6, #0x58]
    orr r0, r0, #0x480
@L_02011778:
    b @L_02011870
@L_0201177c:
    mov r0, #0x17
    str r0, [r6, #0x30]
    mov r0, #0x12c
    str r0, [r6, #0x34]
    mov r0, #0x1f4
    str r0, [r6, #0x40]
    add r0, r4, #0x1340
    ldr r1, =0x2710
    str r0, [r6, #0x44]
    ldr r0, =0xea60
    str r1, [r6, #0x38]
    str r0, [r6, #0x3c]
    strb r5, [r6, #0x54]
    ldr r0, [r6, #0x58]
    orr r0, r0, #0x480
    orr r0, r0, #0x5000
    b @L_02011778
@L_020117c0:
    mov r0, #0x258
    str r0, [r6, #0x40]
    add r0, r0, #0x960
    str r0, [r6, #0x44]
    mov r0, #0x46
    str r0, [r6, #0x48]
    mov r0, #0x96
    ldr r1, =0x59d8
    str r0, [r6, #0x4c]
    ldr r0, =0xc3500
    str r1, [r6, #0x38]
    str r0, [r6, #0x3c]
    strb r5, [r6, #0x54]
    mov r0, #0x1000
    str r0, [r6, #0x20]
    ldr r0, [r6, #0x58]
    orr r0, r0, #0xd000
    b @L_02011778
@L_02011808:
    cmp r0, #0
    bne @L_02011838
    mov r0, #0x3e8
    str r0, [r6, #0x40]
    add r0, r0, #0x7d0
    ldr r1, =0x109a0
    str r0, [r6, #0x44]
    ldr r0, =0x27100
    str r1, [r6, #0x38]
    str r0, [r6, #0x3c]
    strb r5, [r6, #0x54]
    b @L_02011868
@L_02011838:
    cmp r0, #1
    bne @L_02011874
    mov r0, #0x3e8
    str r0, [r6, #0x40]
    add r0, r0, #0x7d0
    ldr r1, =0x109a0
    str r0, [r6, #0x44]
    ldr r0, =0x27100
    str r1, [r6, #0x38]
    str r0, [r6, #0x3c]
    mov r0, #0x84
    strb r0, [r6, #0x54]
@L_02011868:
    ldr r0, [r6, #0x58]
    orr r0, r0, #0x5000
@L_02011870:
    str r0, [r6, #0x58]
@L_02011874:
    mov r0, #0x10000
    str r0, [r6, #0x1c]
    mov r0, #0x100
    str r0, [r6, #0x24]
    mov r0, #3
    str r0, [r6, #0x28]
    mov r0, #5
    str r0, [r6, #0x2c]
    ldr r0, [r6, #0x58]
    orr r0, r0, #0xb40
    str r0, [r6, #0x58]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020118a4:
    cmp r2, #3
    bne @L_020118e4
    cmp r12, #0x2000
    cmpne r12, #0x8000
    bne @L_020118e4
    str r12, [r6, #0x24]
    str r12, [r6, #0x1c]
    mov r0, #2
    str r0, [r6, #0x28]
    mov r0, #0
    strb r0, [r6, #0x54]
    ldr r0, [r6, #0x58]
    orr r0, r0, #0x140
    orr r0, r0, #0x4200
    str r0, [r6, #0x58]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020118e4:
    mov r1, #0
    str r1, [r6, #4]
    str r1, [r6, #0x18]
    ldr r0, =cardi_common
    mov r1, #3
    ldr r0, [r0]
    str r1, [r0]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void CARDi_IdentifyBackupCore(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #1
    mov r5, r0
    mov r2, r4
    mov r1, #2
    bl CARDi_Request
    ldr r0, [r5]
    mov r1, #0
    str r1, [r0, #0xc]
    ldr r1, [r5]
    ldr r2, =CARDi_backup_cache_page_buf
    mov r0, r5
    str r2, [r1, #0x10]
    ldr r3, [r5]
    mov r2, r4
    mov r1, #6
    str r4, [r3, #0x14]
    bl CARDi_Request
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CARDi_BeginBackupCommand(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, =0x2000bac
    mov r5, r1
    mov r4, r2
    bl OSi_ReferSymbol
    bl CARD_CheckEnabled
    bl CARDi_GetAccessLevel
    and r0, r6, r0
    cmp r6, r0
    beq @L_020119a8
    bl OS_Terminate
@L_020119a8:
    ldr r0, =cardi_common
    mov r2, r5
    mov r3, r4
    mov r1, #1
    bl CARDi_WaitForTask
    ldmia sp!, {r4, r5, r6, pc}
}

asm void CARDi_RequestStreamCommand(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r12, [sp, #0x20]
    mov r6, r0
    mov r4, r2
    mov r5, r1
    mov r0, #1
    cmp r12, #0
    ldr r2, [sp, #0x10]
    movne r0, #2
    mov r1, r3
    bl CARDi_BeginBackupCommand
    ldr r2, =cardi_common
    ldr r1, [sp, #0x18]
    str r6, [r2, #0x4fc]
    str r5, [r2, #0x500]
    str r4, [r2, #0x504]
    str r1, [r2, #0x510]
    ldr r0, [sp, #0x1c]
    ldr r3, [sp, #0x20]
    str r0, [r2, #0x514]
    ldr r1, [sp, #0x14]
    ldr r0, =CARDi_RequestStreamCommandCore
    str r3, [r2, #0x518]
    bl CARDi_ExecuteOldTypeTask
    ldmia sp!, {r4, r5, r6, pc}
}

asm void CARD_IdentifyBackup(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    bne @L_02011a44
    bl OS_Terminate
@L_02011a44:
    mov r4, #0
    mov r0, r4
    mov r1, r4
    mov r2, r4
    bl CARDi_BeginBackupCommand
    mov r0, r5
    bl CARDi_IdentifyBackupCore2
    ldr r0, =CARDi_IdentifyBackupCore
    mov r1, r4
    bl CARDi_ExecuteOldTypeTask
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CARD_GetBackupSectorSize(void)
{
    ldr r0, =cardi_common
    ldr r0, [r0]
    ldr r0, [r0, #0x1c]
    bx lr
}

asm void CARD_WaitBackupAsync(void)
{
    ldr r12, =CARDi_WaitAsync
    bx r12
}

asm void CARD_TryWaitBackupAsync(void)
{
    ldr r12, =CARDi_TryWaitAsync
    bx r12
}

asm void CARDi_SetRomOp(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r0, r0, lsl #0x18
    orr r2, r0, r1, lsr #8
    mov r3, r1, lsl #0x18
    ldr r1, =0x40001a4
@L_02011ab4:
    ldr r0, [r1]
    tst r0, #0x80000000
    bne @L_02011ab4
    ldr r0, =0x40001a0
    and r1, r2, #0xff0000
    ldrh r5, [r0]
    and r12, r3, #0xff0000
    and lr, r2, #0xff000000
    mov r4, r1, lsr #8
    bic r1, r5, #0x2000
    orr r1, r1, #0xc000
    and r5, r2, #0xff00
    orr r4, r4, lr, lsr #24
    orr r5, r4, r5, lsl #8
    and lr, r3, #0xff000000
    mov r12, r12, lsr #8
    and r4, r3, #0xff00
    orr r12, r12, lr, lsr #24
    orr r4, r12, r4, lsl #8
    strh r1, [r0]
    orr r1, r5, r2, lsl #24
    str r1, [r0, #8]
    orr r1, r4, r3, lsl #24
    str r1, [r0, #0xc]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CARDi_StartRomPageTransfer(void)
{
    stmdb sp!, {r3, lr}
    mov r1, r0
    mov r0, #0xb7
    bl CARDi_SetRomOp
    ldr r1, =0x2fffae0
    ldr r0, =0x40001a4
    ldr r1, [r1]
    bic r1, r1, #0x7000000
    orr r1, r1, #0xa1000000
    str r1, [r0]
    ldmia sp!, {r3, pc}
}

asm void CARDi_ReadRomIDCore(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r1, r4
    mov r0, #0xb8
    bl CARDi_SetRomOp
    ldr r1, =0x2fffae0
    sub r0, r4, #0x2000
    ldr r2, [r1]
    ldr r1, =0x40001a4
    bic r2, r2, #0x7000000
    orr r2, r2, #0xa7000000
    and r0, r2, r0
    str r0, [r1]
@L_02011b88:
    ldr r0, [r1]
    tst r0, #0x800000
    beq @L_02011b88
    ldr r0, =0x4100010
    ldr r0, [r0]
    ldmia sp!, {r4, pc}
}

asm void CARDi_ReadRomStatusCore(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =0x2fffc00
    ldr r0, [r5]
    tst r0, #0x20000000
    moveq r0, #0x20
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r4, #0
    mov r1, r4
    mov r0, #0xd6
    bl CARDi_SetRomOp
    ldr r1, [r5, #-0x120]
    sub r0, r4, #0x2000
    bic r1, r1, #0x7000000
    orr r2, r1, #0xa7000000
    ldr r1, =0x40001a4
    and r0, r2, r0
    str r0, [r1]
@L_02011bf0:
    ldr r0, [r1]
    tst r0, #0x800000
    beq @L_02011bf0
    ldr r0, =0x4100010
    ldr r0, [r0]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CARDi_RefreshRom(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl CARDi_ReadRomStatusCore
    tst r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl CARDi_RefreshRomCore
    bl CARDi_ReadRomStatusCore
    tst r0, #0x20
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r4, =data_020bb110
    mov r5, #1
@L_02011c40:
    ldr r0, [r4]
    cmp r0, #0
    beq @L_02011c60
    bl OS_IsAlarmAvailable
    cmp r0, #0
    beq @L_02011c60
    mov r0, r5
    bl OS_Sleep
@L_02011c60:
    bl CARDi_ReadRomStatusCore
    tst r0, #0x20
    beq @L_02011c40
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CARDi_RefreshRomCore(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r1, r4
    mov r0, #0xb5
    bl CARDi_SetRomOp
    ldr r1, =0x2fffae0
    sub r0, r4, #0x2000
    ldr r2, [r1]
    ldr r1, =0x40001a4
    bic r2, r2, #0x7000000
    orr r2, r2, #0xa0000000
    and r0, r2, r0
    str r0, [r1]
@L_02011ca8:
    ldr r0, [r1]
    tst r0, #0x80000000
    bne @L_02011ca8
    ldmia sp!, {r4, pc}
}

asm void CARDi_ReadRomWithCPU(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r0, =cache_page
    mov r8, r3
    ldr r0, [r0]
    mov r10, r1
    mov r9, r2
    str r8, [sp, #4]
    str r0, [sp]
    ldr r11, =0x4100010
    ldr r4, =0x40001a4
    b @L_02011da4
@L_02011cf0:
    mov r0, #0x200
    rsb r0, r0, #0
    and r6, r9, r0
    ldr r0, [sp]
    mov r5, r10
    cmp r6, r0
    mov r7, #0x200
    ldreq r5, =data_020bdb60
    beq @L_02011d68
    cmp r6, r9
    bne @L_02011d30
    tst r10, #3
    bne @L_02011d30
    mov r0, r7
    cmp r8, r0
    bhs @L_02011d38
@L_02011d30:
    ldr r5, =data_020bdb60
    str r6, [sp]
@L_02011d38:
    mov r0, r6
    bl CARDi_StartRomPageTransfer
    mov r3, #0
@L_02011d44:
    ldr r2, [r4]
    tst r2, #0x800000
    beq @L_02011d60
    ldr r1, [r11]
    cmp r3, #0x80
    strlo r1, [r5, r3, lsl #2]
    addlo r3, r3, #1
@L_02011d60:
    tst r2, #0x80000000
    bne @L_02011d44
@L_02011d68:
    ldr r0, =data_020bdb60
    cmp r5, r0
    bne @L_02011d98
    sub r3, r9, r6
    rsb r7, r3, #0x200
    ldr r0, =data_020bdb60
    cmp r8, r7
    movls r7, r8
    mov r1, r10
    mov r2, r7
    add r0, r0, r3
    bl MI_CpuCopy8
@L_02011d98:
    add r10, r10, r7
    add r9, r9, r7
    sub r8, r8, r7
@L_02011da4:
    cmp r8, #0
    bne @L_02011cf0
    bl CARDi_ReadRomIDCore
    bl CARDi_CheckPulledOutCore
    ldr r2, =cache_page
    ldr r1, [sp]
    ldr r0, [sp, #4]
    str r1, [r2]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void CARDi_DmaReadPageCallback(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, =cardi_rom_base
    ldr r4, [r5, #8]
    cmp r4, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #0xc]
    add r0, r0, #0x200
    str r0, [r4, #0xc]
    ldr r0, [r4, #0x10]
    add r0, r0, #0x200
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x14]
    subs r0, r0, #0x200
    str r0, [r4, #0x14]
    beq @L_02011e24
    ldr r0, [r4, #0xc]
    bl CARDi_StartRomPageTransfer
    ldmia sp!, {r4, r5, r6, pc}
@L_02011e24:
    ldr r0, =cardi_common
    ldr r1, [r0, #0x50c]
    ldr r0, [r0, #0x508]
    ldr r1, [r1, #4]
    blx r1
    mov r6, #0x80000
    mov r0, r6
    bl OS_DisableIrqMask
    mov r0, r6
    bl OS_ResetRequestIrqMask
    mov r0, #0
    str r0, [r5, #8]
    bl CARDi_ReadRomIDCore
    bl CARDi_CheckPulledOutCore
    ldr r1, [r4, #4]
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #8]
    blx r1
    ldmia sp!, {r4, r5, r6, pc}
}

asm void CARDi_ReadRomWithDMA(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl OS_DisableInterrupts
    ldr r2, =cardi_rom_base
    mov r4, #0x80000
    mov r5, r0
    ldr r1, =CARDi_DmaReadPageCallback
    mov r0, r4
    str r6, [r2, #8]
    bl OS_SetIrqFunction
    mov r0, r4
    bl OS_ResetRequestIrqMask
    mov r0, r4
    bl OS_EnableIrqMask
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r2, =cardi_common
    ldr r1, =0x4100010
    ldr r0, [r2, #0x508]
    ldr r3, [r2, #0x50c]
    ldr r2, [r6, #0x10]
    ldr r12, [r3]
    mov r3, #0x200
    blx r12
    ldr r0, [r6, #0xc]
    bl CARDi_StartRomPageTransfer
    ldmia sp!, {r4, r5, r6, pc}
}

asm void CARDi_DmaReadDone(void)
{
    stmdb sp!, {r3, lr}
    bl CARDi_ReadRomIDCore
    bl CARDi_CheckPulledOutCore
    mov r0, #8
    bl CARDi_RefreshRom
    ldr r0, =cardi_common
    mov r2, #0
    ldr r1, [r0]
    str r2, [r1]
    bl CARDi_EndTask
    ldmia sp!, {r3, pc}
}

asm void CARDi_IsRomDmaAvailable(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0
    mov r9, r1
    mov r8, r2
    mov r7, r3
    mov r5, r4
    mov r2, r4
    cmp r0, #3
    bhi @L_02011f80
    cmp r7, #0
    beq @L_02011f80
    tst r9, #0x1f
    bne @L_02011f80
    ldr r0, =OS_IrqHandler
    add r1, r9, r7
    cmp r1, r0
    mov r0, #1
    bls @L_02011f78
    cmp r9, #0x2000000
    movlo r0, r4
@L_02011f78:
    cmp r0, #0
    movne r2, #1
@L_02011f80:
    cmp r2, #0
    beq @L_02011fb4
    mov r6, #1
    bl OS_GetDTCMAddress
    add r1, r9, r7
    cmp r1, r0
    bls @L_02011fac
    bl OS_GetDTCMAddress
    add r0, r0, #0x4000
    cmp r9, r0
    movlo r6, #0
@L_02011fac:
    cmp r6, #0
    movne r5, #1
@L_02011fb4:
    cmp r5, #0
    beq @L_02011fcc
    ldr r0, =0x1ff
    orr r1, r8, r7
    tst r1, r0
    moveq r4, #1
@L_02011fcc:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void CARDi_ReadRomSyncCore(void)
{
    stmdb sp!, {r4, lr}
    ldr r12, =cardi_rom_base
    mov r4, #0
    ldr r1, [r0, #0x500]
    ldr r2, [r0, #0x4fc]
    ldr r3, [r0, #0x504]
    ldr r12, [r12, #0xc]
    mov r0, r4
    blx r12
    bl CARDi_ReadRomIDCore
    bl CARDi_CheckPulledOutCore
    mov r0, #8
    bl CARDi_RefreshRom
    ldr r0, =cardi_common
    ldr r0, [r0]
    str r4, [r0]
    ldmia sp!, {r4, pc}
}

asm void CARDi_ReadRom(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    ldr r4, =cardi_common
    bl CARD_CheckEnabled
    bl CARDi_GetAccessLevel
    tst r0, #4
    bne @L_02012054
    bl OS_Terminate
@L_02012054:
    mov r8, #1
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    mov r0, r4
    mov r1, r8
    bl CARDi_WaitForTask
    mov r0, r9
    bl CARDi_GetDmaInterface
    str r0, [r4, #0x50c]
    cmp r0, #0
    andne r0, r9, #3
    subeq r0, r8, #2
    str r0, [r4, #0x508]
    cmp r0, #3
    bhi @L_0201209c
    ldr r1, [r4, #0x50c]
    ldr r1, [r1, #4]
    blx r1
@L_0201209c:
    ldr r8, =cardi_rom_base
    ldr r0, =CARDi_DmaReadDone
    ldr r1, [r8]
    str r6, [r4, #0x500]
    add r2, r7, r1
    str r2, [r4, #0x4fc]
    str r5, [r4, #0x504]
    str r0, [r8, #0x14]
    mov r0, #0
    str r0, [r8, #0x18]
    str r2, [r8, #0x1c]
    str r6, [r8, #0x20]
    str r5, [r8, #0x24]
    str r0, [r8, #0x28]
    ldr r1, [r8, #0xc]
    ldr r0, =CARDi_ReadRomWithCPU
    cmp r1, r0
    bne @L_02012164
    ldr r0, [r4, #0x508]
    mov r1, r6
    mov r3, r5
    bl CARDi_IsRomDmaAvailable
    cmp r0, #0
    beq @L_02012164
    bl OS_DisableInterrupts
    ldr r1, [r8, #4]
    mov r5, r0
    cmp r1, #0
    beq @L_02012120
    ldr r0, [r4, #0x500]
    ldr r1, [r4, #0x504]
    ldr r2, [r4, #0xc]
    bl CARDi_ICInvalidateSmart
@L_02012120:
    ldr r0, =cache_page
    ldr r0, [r0, #4]
    cmp r0, #0
    beq @L_02012140
    ldr r0, [r4, #0x500]
    ldr r1, [r4, #0x504]
    ldr r2, [r4, #0x10]
    bl CARDi_DCInvalidateSmart
@L_02012140:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r0, =data_020bdab0
    bl CARDi_ReadRomWithDMA
    ldr r0, [sp, #0x28]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl CARD_WaitRomAsync
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02012164:
    ldr r0, =cardi_rom_base
    ldr r0, [r0, #4]
    cmp r0, #0
    beq @L_02012184
    ldr r0, [r4, #0x500]
    ldr r1, [r4, #0x504]
    ldr r2, [r4, #0xc]
    bl CARDi_ICInvalidateSmart
@L_02012184:
    ldr r1, [sp, #0x28]
    ldr r0, =CARDi_ReadRomSyncCore
    bl CARDi_ExecuteOldTypeTask
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void CARDi_InitRom(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, =CARDi_ReadRomWithCPU
    ldr r0, =cardi_rom_base
    str r1, [r0, #0xc]
    bl OS_GetBootType
    cmp r0, #1
    ldmneia sp!, {r4, pc}
    bl func_02010d8c
    ldr r0, [r0, #0x80]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    bl OS_GetLockID
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
    mov r0, r4
    bl CARD_LockRom
    bl func_02010d8c
    ldr r2, [r0, #0x80]
    ldr r1, =CARDiOwnSignature
    mov r0, #0
    mov r3, #0x88
    bl CARDi_ReadRomWithCPU
    mov r0, r4
    bl CARD_UnlockRom
    mov r0, r4
    bl OS_ReleaseLockID
    ldmia sp!, {r4, pc}
}

asm void CARD_WaitRomAsync(void)
{
    ldr r12, =CARDi_WaitAsync
    bx r12
}

asm void CARDi_GetOwnSignature(void)
{
    ldr r0, =CARDiOwnSignature
    bx lr
}

asm void CARD_InitPulledOutCallback(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl PXI_Init
    ldr r4, =CARDiSlotResetCount
    mov r5, #0
    str r5, [r4]
    ldr r1, =CARDi_PulledOutCallback
    mov r0, #0xe
    str r5, [r4, #4]
    bl PXI_SetFifoRecvCallback
    str r5, [r4, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CARDi_PulledOutCallback(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    and r0, r1, #0x3f
    cmp r0, #0x11
    bne @L_020122cc
    ldr r4, =CARDiSlotResetCount
    ldr r0, [r4, #4]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r5, #1
    mov r0, r5
    str r5, [r4, #4]
    mov r1, #0
    bl CARDi_NotifyEvent
    ldr r0, [r4, #8]
    cmp r0, #0
    beq @L_020122bc
    blx r0
    mov r5, r0
@L_020122bc:
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl CARD_TerminateForPulledOut
    ldmia sp!, {r3, r4, r5, pc}
@L_020122cc:
    cmp r0, #2
    bne @L_020122f8
    ldr r2, =CARDiSlotResetCount
    mov r1, #0
    ldr r3, [r2]
    mov r0, #2
    add r3, r3, #1
    str r3, [r2]
    str r1, [r2, #4]
    bl CARDi_NotifyEvent
    ldmia sp!, {r3, r4, r5, pc}
@L_020122f8:
    bl OS_Terminate
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CARD_IsPulledOut(void)
{
    ldr r0, =CARDiSlotResetCount
    ldr r0, [r0, #4]
    bx lr
}

asm void CARD_TerminateForPulledOut(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =0x2ffffa8
    ldrh r0, [r0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    beq @L_02012330
    bl PM_ForceToPowerOff
@L_02012330:
    mov r0, #1
    mov r1, r0
    bl CARDi_SendtoPxi
    bl MI_StopAllDma
    bl OS_Terminate
    ldmia sp!, {r3, pc}
}

asm void CARDi_CheckPulledOutCore(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r1, =0x2fffc00
    ldr r1, [r1]
    str r1, [sp]
    ldr r1, [sp]
    cmp r0, r1
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, pc}
    bl OS_DisableInterrupts
    mov r4, r0
    mov r0, #0xe
    mov r1, #0x11
    mov r2, #0
    bl CARDi_PulledOutCallback
    mov r0, r4
    bl OS_RestoreInterrupts
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}
