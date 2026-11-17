// (asm for now)

void PXI_Init(void);
void PXI_InitFifo(void);
void PXI_SetFifoRecvCallback(void);
void PXI_IsCallbackReady(void);
void PXI_SendWordByFifo(void);
void PXIi_HandlerRecvFifoNotEmpty(void);
void FSi_IsEventCommand(void);
void FSi_EndCommand(void);
void FSi_WaitForArchiveCompletion(void);
void FSi_InvokeCommand(void);
void FSi_NextCommand(void);
void FSi_ExecuteAsyncCommand(void);
void FSi_ExecuteSyncCommand(void);
void FSi_SendCommand(void);
void FS_FindArchive(void);
void FS_SetCurrentDirectory(void);
void FSi_CopySafeString(void);
void FS_NormalizePath(void);
void FS_InitArchive(void);
void FS_RegisterArchiveName(void);
void FS_ReleaseArchiveName(void);
void FS_GetArchiveName(void);
void FS_MountArchive(void);
void FS_UnmountArchive(void);
void FS_SuspendArchive(void);
void FS_ResumeArchive(void);
void FS_NotifyArchiveAsyncEnd(void);
void FS_WaitAsync(void);
void FSi_DecrementSjisPosition(void);
void FSi_IncrementSjisPositionToSlash(void);
void FSi_DecrementSjisPositionToSlash(void);
void FSi_TrimSjisTrailingSlash(void);
void FS_InitFile(void);
void FS_CancelFile(void);
void FS_GetPathName(void);
void FS_OpenFileDirect(void);
void FS_OpenFileFast(void);
void FS_OpenFileEx(void);
void FS_CloseFile(void);
void FS_GetFileLength(void);
void FS_GetFilePosition(void);
void FS_SeekFile(void);
void FS_ReadFile(void);
void FS_ReadFileAsync(void);
void FS_OpenFile(void);
void FS_GetLength(void);
void func_0200c980(void);
void FS_ChangeDir(void);
void FSi_InitOverlay(void);

void OS_DisableInterrupts(void);
extern char data_020bd024[];
extern char FifoRecvCallbackTable[];
void OS_ResetRequestIrqMask(void);
void OS_SetIrqFunction(void);
void OS_EnableIrqMask(void);
void OS_RestoreInterrupts(void);
void OS_WakeupThread(void);
void OS_SleepThread(void);
void OS_Terminate(void);
extern char arc_list[];
void STD_CompareNString(void);
extern char current_dir_path[];
void STD_CopyLString(void);
extern char data_020aadc0[];
void MI_CpuFill8(void);
extern char data_020bd0a8_b[];
extern char data_020bd0b8[];
void STD_GetStringLength(void);
void FSi_GetFileLengthIfProc(void);
void FSi_GetFilePositionIfProc(void);
void OS_GetBootType(void);
extern char FSiOverlayContext[];
extern char data_020a4254[];
extern char data_020aadc4[];

asm void PXI_Init(void)
{
    ldr r12, =PXI_InitFifo
    bx r12
}

asm void PXI_InitFifo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    bl OS_DisableInterrupts
    ldr r1, =data_020bd024
    mov r4, r0
    ldrh r0, [r1]
    cmp r0, #0
    bne @L_0200b0a4
    mov r2, #1
    strh r2, [r1]
    mov r1, #0
    ldr r0, =0x2fffc00
    mov r5, r1
    str r1, [r0, #0x388]
    ldr r0, =FifoRecvCallbackTable
@L_0200b004:
    str r5, [r0, r1, lsl #2]
    add r1, r1, #1
    cmp r1, #0x20
    blt @L_0200b004
    mov r6, #0x40000
    ldr r1, =0xc408
    ldr r7, =0x4000184
    mov r0, r6
    strh r1, [r7]
    bl OS_ResetRequestIrqMask
    ldr r1, =PXIi_HandlerRecvFifoNotEmpty
    mov r0, r6
    bl OS_SetIrqFunction
    mov r0, r6
    bl OS_EnableIrqMask
    sub r3, r7, #4
    mov r1, #0
    mov r2, #0x3e8
@L_0200b04c:
    ldrh r0, [r3]
    ands r7, r0, #0xf
    mov r0, r7, lsl #8
    strh r0, [r3]
    bne @L_0200b068
    cmp r5, #4
    bgt @L_0200b0a4
@L_0200b068:
    ldrh r0, [r3]
    mov r6, r2
    and r0, r0, #0xf
    cmp r0, r7
    bne @L_0200b09c
@L_0200b07c:
    cmp r6, #0
    movle r5, r1
    ble @L_0200b09c
    ldrh r0, [r3]
    sub r6, r6, #1
    and r0, r0, #0xf
    cmp r0, r7
    beq @L_0200b07c
@L_0200b09c:
    add r5, r5, #1
    b @L_0200b04c
@L_0200b0a4:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void PXI_SetFifoRecvCallback(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r5, r1
    bl OS_DisableInterrupts
    ldr r1, =FifoRecvCallbackTable
    ldr r3, =0x2fffc00
    str r5, [r1, r4, lsl #2]
    cmp r5, #0
    ldrne r2, [r3, #0x388]
    mov r1, #1
    orrne r1, r2, r1, lsl r4
    mvneq r1, r1, lsl r4
    ldreq r2, [r3, #0x388]
    andeq r1, r2, r1
    str r1, [r3, #0x388]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void PXI_IsCallbackReady(void)
{
    ldr r2, =0x2fffc00
    mov r3, #1
    add r1, r2, r1, lsl #2
    ldr r1, [r1, #0x388]
    tst r1, r3, lsl r0
    moveq r3, #0
    mov r0, r3
    bx lr
}

asm void PXI_SendWordByFifo(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r3, [sp]
    ldr r5, =0x4000184
    bic r3, r3, #0x1f
    and r0, r0, #0x1f
    orr r3, r3, r0
    ldrh r0, [r5]
    bic r3, r3, #0x20
    mov r2, r2, lsl #0x1f
    orr r2, r3, r2, lsr #26
    and r2, r2, #0x3f
    tst r0, #0x4000
    orr r4, r2, r1, lsl #6
    ldrneh r1, [r5]
    mvnne r0, #0
    orrne r1, r1, #0xc000
    strneh r1, [r5]
    ldmneia sp!, {r3, r4, r5, pc}
    bl OS_DisableInterrupts
    ldrh r1, [r5]
    tst r1, #2
    beq @L_0200b19c
    bl OS_RestoreInterrupts
    mvn r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_0200b19c:
    str r4, [r5, #4]
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void PXIi_HandlerRecvFifoNotEmpty(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mvn r7, #3
    ldr r9, [sp]
    ldr r8, =0x4000184
    ldr r4, =FifoRecvCallbackTable
    add r10, r7, #1
    mov r6, #0x4100000
    mov r5, #0
@L_0200b1d4:
    ldrh r0, [r8]
    tst r0, #0x4000
    ldrneh r0, [r8]
    addne r1, r7, #1
    orrne r0, r0, #0xc000
    strneh r0, [r8]
    bne @L_0200b218
    bl OS_DisableInterrupts
    ldrh r1, [r8]
    tst r1, #0x100
    beq @L_0200b20c
    bl OS_RestoreInterrupts
    mov r1, r7
    b @L_0200b218
@L_0200b20c:
    ldr r9, [r6]
    bl OS_RestoreInterrupts
    mov r1, r5
@L_0200b218:
    cmp r1, r7
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r1, r10
    beq @L_0200b1d4
    mov r0, r9, lsl #0x1b
    movs r0, r0, lsr #0x1b
    beq @L_0200b1d4
    ldr r3, [r4, r0, lsl #2]
    cmp r3, #0
    beq @L_0200b258
    mov r2, r9, lsl #0x1a
    mov r1, r9, lsr #6
    mov r2, r2, lsr #0x1f
    blx r3
    b @L_0200b1d4
@L_0200b258:
    mov r0, r9, lsl #0x1a
    movs r0, r0, lsr #0x1f
    bne @L_0200b1d4
    ldrh r0, [r8]
    orr r9, r9, #0x20
    tst r0, #0x4000
    ldrneh r0, [r8]
    orrne r0, r0, #0xc000
    strneh r0, [r8]
    bne @L_0200b1d4
    bl OS_DisableInterrupts
    ldrh r1, [r8]
    tst r1, #2
    beq @L_0200b294
    b @L_0200b298
@L_0200b294:
    str r9, [r8, #4]
@L_0200b298:
    bl OS_RestoreInterrupts
    b @L_0200b1d4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void FSi_IsEventCommand(void)
{
    sub r3, r0, #9
    cmp r3, #0x1a
    mov r0, #0
    bxhi lr
    ldr r1, =0x400030f
    mov r2, #1
    tst r1, r2, lsl r3
    movne r0, r2
    bx lr
}

asm void FSi_EndCommand(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r6, r1
    bl OS_DisableInterrupts
    ldr r5, [r7, #8]
    mov r4, r0
    cmp r5, #0
    beq @L_0200b330
    ldr r0, [r5, #8]
    add r1, r5, #8
    cmp r0, #0
    beq @L_0200b328
@L_0200b308:
    cmp r0, r7
    ldreq r0, [r7]
    streq r0, [r1]
    beq @L_0200b328
    mov r1, r0
    ldr r0, [r0]
    cmp r0, #0
    bne @L_0200b308
@L_0200b328:
    mov r0, #0
    str r0, [r7]
@L_0200b330:
    ldr r0, [r7, #0xc]
    mov r0, r0, lsr #8
    and r8, r0, #0xff
    mov r0, r8
    bl FSi_IsEventCommand
    cmp r0, #0
    bne @L_0200b358
    cmp r5, #0
    strne r8, [r5, #0x18]
    strne r6, [r5, #0x1c]
@L_0200b358:
    ldr r1, [r7, #0xc]
    add r0, r7, #0x18
    bic r1, r1, #0xcf
    str r6, [r7, #0x14]
    str r1, [r7, #0xc]
    bl OS_WakeupThread
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void FSi_WaitForArchiveCompletion(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    cmp r1, #0x100
    bne @L_0200b3cc
    bl OS_DisableInterrupts
    ldr r1, [r5, #0xc]
    mov r4, r0
    tst r1, #8
    bne @L_0200b3b4
@L_0200b3a0:
    add r0, r5, #0x18
    bl OS_SleepThread
    ldr r0, [r5, #0xc]
    tst r0, #8
    beq @L_0200b3a0
@L_0200b3b4:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldr r0, [r5, #0xc]
    ldr r1, [r5, #0x14]
    bic r0, r0, #8
    str r0, [r5, #0xc]
@L_0200b3cc:
    mov r0, r1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FSi_InvokeCommand(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r5, r0
    ldr r0, [r5, #8]
    mov r4, r1
    cmp r4, #0x23
    ldr r12, [r0, #0x24]
    movhs r6, #4
    bhs @L_0200b704
    ldr r1, [r12, r4, lsl #2]
    cmp r1, #0
    moveq r6, #4
    beq @L_0200b704
    cmp r4, #0x22
    addls pc, pc, r4, lsl #2
    b @L_0200b700
    b @L_0200b4a0
    b @L_0200b4b4
    b @L_0200b4c0
    b @L_0200b4d8
    b @L_0200b4f4
    b @L_0200b510
    b @L_0200b52c
    b @L_0200b538
    b @L_0200b550
    b @L_0200b55c
    b @L_0200b570
    b @L_0200b584
    b @L_0200b598
    b @L_0200b5ac
    b @L_0200b5c8
    b @L_0200b5d8
    b @L_0200b5e4
    b @L_0200b5f0
    b @L_0200b604
    b @L_0200b618
    b @L_0200b628
    b @L_0200b634
    b @L_0200b648
    b @L_0200b660
    b @L_0200b66c
    b @L_0200b678
    b @L_0200b688
    b @L_0200b694
    b @L_0200b6ac
    b @L_0200b700
    b @L_0200b6bc
    b @L_0200b6c4
    b @L_0200b6d0
    b @L_0200b6ec
    b @L_0200b6f4
@L_0200b4a0:
    ldr r3, [r5, #0x10]
    ldr r12, [r12]
@L_0200b4a8:
    ldr r2, [r3], #4
@L_0200b4ac:
    mov r1, r5
@L_0200b4b0:
    b @L_0200b4d0
@L_0200b4b4:
    ldr r3, [r5, #0x10]
    ldr r12, [r12, #4]
    b @L_0200b4a8
@L_0200b4c0:
    ldr r1, [r5, #0x10]
    ldr r12, [r12, #8]
@L_0200b4c8:
    ldmia r1, {r2, r3}
    mov r1, r5
@L_0200b4d0:
    blx r12
@L_0200b4d4:
    b @L_0200b4ec
@L_0200b4d8:
    ldr r1, [r5, #0x10]
    ldr r3, [r12, #0xc]
@L_0200b4e0:
    ldr r2, [r1]
@L_0200b4e4:
    mov r1, r5
    blx r3
@L_0200b4ec:
    mov r6, r0
    b @L_0200b704
@L_0200b4f4:
    ldr r2, [r5, #0x10]
    ldr r1, [r2, #0xc]
    add r3, r2, #8
    str r1, [sp]
    ldmia r2, {r1, r2}
    ldr r12, [r12, #0x10]
    b @L_0200b4b0
@L_0200b510:
    ldr r3, [r5, #0x10]
    mov r1, r5
    add r2, r3, #8
    str r2, [sp]
    ldmia r3, {r2, r3}
    ldr r12, [r12, #0x14]
    b @L_0200b4b0
@L_0200b52c:
    ldr r1, [r5, #0x10]
    ldr r12, [r12, #0x18]
    b @L_0200b4c8
@L_0200b538:
    ldr r3, [r5, #0x10]
    mov r1, r5
    str r3, [sp]
    ldmib r3, {r2, r3}
    ldr r12, [r12, #0x1c]
    b @L_0200b4b0
@L_0200b550:
    ldr r2, [r12, #0x20]
@L_0200b554:
    mov r1, r5
    b @L_0200b620
@L_0200b55c:
    ldr r1, [r12, #0x24]
    blx r1
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200b570:
    ldr r1, [r12, #0x28]
    blx r1
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200b584:
    ldr r1, [r12, #0x2c]
    blx r1
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200b598:
    ldr r1, [r12, #0x30]
    blx r1
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200b5ac:
    ldr r3, [r5, #0x10]
    mov r1, r5
    ldr r2, [r3, #8]
    str r2, [sp]
    ldmia r3, {r2, r3}
    ldr r12, [r12, #0x34]
    b @L_0200b4b0
@L_0200b5c8:
    ldr r2, [r5, #0x10]
    ldr r12, [r12, #0x38]
    ldr r3, [r2, #4]
    b @L_0200b4ac
@L_0200b5d8:
    ldr r2, [r5, #0x10]
    ldr r3, [r12, #0x3c]
@L_0200b5e0:
    b @L_0200b4e4
@L_0200b5e4:
    ldr r2, [r5, #0x10]
    ldr r3, [r12, #0x40]
    b @L_0200b5e0
@L_0200b5f0:
    ldr r1, [r12, #0x44]
    blx r1
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200b604:
    ldr r1, [r12, #0x48]
    blx r1
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0200b618:
    ldr r1, [r5, #0x10]
    ldr r2, [r12, #0x4c]
@L_0200b620:
    blx r2
    b @L_0200b4d4
@L_0200b628:
    ldr r3, [r5, #0x10]
    ldr r12, [r12, #0x50]
    b @L_0200b680
@L_0200b634:
    ldr r2, [r5, #0x10]
    ldr r3, [r12, #0x54]
@L_0200b63c:
    ldmia r2, {r1, r2}
    blx r3
    b @L_0200b4d4
@L_0200b648:
    ldr r3, [r5, #0x10]
    ldr r1, [r3, #0xc]
    str r1, [sp]
    ldmia r3, {r1, r2, r3}
    ldr r12, [r12, #0x58]
    b @L_0200b4b0
@L_0200b660:
    ldr r3, [r5, #0x10]
    ldr r12, [r12, #0x5c]
    b @L_0200b680
@L_0200b66c:
    ldr r3, [r5, #0x10]
    ldr r12, [r12, #0x60]
    b @L_0200b680
@L_0200b678:
    ldr r3, [r5, #0x10]
    ldr r12, [r12, #0x64]
@L_0200b680:
    ldmia r3, {r1, r2, r3}
    b @L_0200b4b0
@L_0200b688:
    ldr r2, [r5, #0x10]
    ldr r3, [r12, #0x68]
    b @L_0200b63c
@L_0200b694:
    ldr r3, [r5, #0x10]
    ldr r1, [r3, #0xc]
    str r1, [sp]
    ldmia r3, {r1, r2, r3}
    ldr r12, [r12, #0x6c]
    b @L_0200b4b0
@L_0200b6ac:
    ldr r1, [r5, #0x10]
    ldr r2, [r12, #0x70]
    ldr r1, [r1]
    b @L_0200b620
@L_0200b6bc:
    ldr r2, [r12, #0x78]
    b @L_0200b554
@L_0200b6c4:
    ldr r1, [r5, #0x10]
    ldr r3, [r12, #0x7c]
    b @L_0200b4e0
@L_0200b6d0:
    ldr r3, [r5, #0x10]
    mov r1, r5
    ldr r2, [r3, #8]
    str r2, [sp]
    ldmia r3, {r2, r3}
    ldr r12, [r12, #0x80]
    b @L_0200b4b0
@L_0200b6ec:
    ldr r2, [r12, #0x84]
    b @L_0200b554
@L_0200b6f4:
    ldr r1, [r5, #0x10]
    ldr r12, [r12, #0x88]
    b @L_0200b4c8
@L_0200b700:
    mov r6, #4
@L_0200b704:
    mov r0, r4
    bl FSi_IsEventCommand
    cmp r0, #0
    bne @L_0200b748
    ldr r0, [r5, #0xc]
    tst r0, #4
    beq @L_0200b734
    mov r0, r5
    mov r1, r6
    bl FSi_WaitForArchiveCompletion
    mov r6, r0
    b @L_0200b748
@L_0200b734:
    cmp r6, #0x100
    beq @L_0200b748
    mov r0, r5
    mov r1, r6
    bl FSi_EndCommand
@L_0200b748:
    mov r0, r6
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void FSi_NextCommand(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    mov r10, r0
    mov r9, r1
    mov r7, #0
    bl OS_DisableInterrupts
    ldr r1, [r10, #0x14]
    mov r11, r0
    tst r1, #0x20
    bicne r1, r1, #0x20
    ldrne r0, [r10, #8]
    strne r1, [r10, #0x14]
    cmpne r0, #0
    beq @L_0200b7dc
    mov r5, r7
    mov r6, #1
    mov r4, #3
@L_0200b798:
    ldr r1, [r0, #0xc]
    ldr r8, [r0]
    tst r1, #2
    movne r1, r6
    moveq r1, r5
    cmp r1, #0
    beq @L_0200b7d0
    ldr r1, [r0, #0xc]
    tst r1, #0x40
    bne @L_0200b7d0
    mov r1, r4
    bl FSi_EndCommand
    cmp r8, #0
    ldreq r8, [r10, #8]
@L_0200b7d0:
    mov r0, r8
    cmp r8, #0
    bne @L_0200b798
@L_0200b7dc:
    mov r0, r11
    bl OS_RestoreInterrupts
    bl OS_DisableInterrupts
    ldr r1, [r10, #0x14]
    mov r4, r0
    tst r1, #0x40
    bne @L_0200b894
    tst r1, #8
    bne @L_0200b894
    ldr r0, [r10, #8]
    cmp r0, #0
    beq @L_0200b894
    cmp r9, #0
    beq @L_0200b820
    tst r1, #0x10
    moveq r5, #1
    beq @L_0200b824
@L_0200b820:
    mov r5, #0
@L_0200b824:
    cmp r5, #0
    ldrne r0, [r10, #0x14]
    orrne r0, r0, #0x10
    strne r0, [r10, #0x14]
    mov r0, r4
    bl OS_RestoreInterrupts
    cmp r5, #0
    beq @L_0200b850
    ldr r0, [r10, #8]
    mov r1, #9
    bl FSi_InvokeCommand
@L_0200b850:
    bl OS_DisableInterrupts
    cmp r9, #0
    cmpeq r5, #0
    ldrne r7, [r10, #8]
    mov r4, r0
    ldrne r0, [r7, #0xc]
    orrne r0, r0, #0x40
    strne r0, [r7, #0xc]
    cmp r9, #0
    beq @L_0200b890
    ldr r0, [r7, #0xc]
    tst r0, #4
    beq @L_0200b890
    add r0, r7, #0x18
    bl OS_WakeupThread
    mov r7, #0
@L_0200b890:
    b @L_0200b8ec
@L_0200b894:
    cmp r9, #0
    beq @L_0200b8ec
    tst r1, #0x10
    beq @L_0200b8cc
    add r5, sp, #0
    mov r0, r5
    bl FS_InitFile
    str r10, [sp, #8]
    ldr r1, [r10, #0x14]
    mov r0, r5
    bic r2, r1, #0x10
    mov r1, #0xa
    str r2, [r10, #0x14]
    bl FSi_InvokeCommand
@L_0200b8cc:
    ldr r0, [r10, #0x14]
    tst r0, #0x40
    beq @L_0200b8ec
    bic r0, r0, #0x40
    orr r1, r0, #8
    add r0, r10, #0xc
    str r1, [r10, #0x14]
    bl OS_WakeupThread
@L_0200b8ec:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r7
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void FSi_ExecuteAsyncCommand(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    movs r5, r0
    ldr r4, [r5, #8]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r7, #0
    mov r6, #1
@L_0200b918:
    bl OS_DisableInterrupts
    ldr r1, [r5, #0xc]
    mov r8, r0
    orr r0, r1, #0x40
    str r0, [r5, #0xc]
    tst r0, #4
    beq @L_0200b940
    add r0, r5, #0x18
    bl OS_WakeupThread
    mov r5, r7
@L_0200b940:
    mov r0, r8
    bl OS_RestoreInterrupts
    cmp r5, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r1, [r5, #0xc]
    mov r0, r5
    mov r1, r1, lsr #8
    and r1, r1, #0xff
    bl FSi_InvokeCommand
    cmp r0, #0x100
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r4
    mov r1, r6
    bl FSi_NextCommand
    movs r5, r0
    bne @L_0200b918
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void FSi_ExecuteSyncCommand(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    mov r4, r0
    b @L_0200b9a0
@L_0200b998:
    add r0, r5, #0x18
    bl OS_SleepThread
@L_0200b9a0:
    ldr r0, [r5, #0xc]
    tst r0, #0x40
    bne @L_0200b9b4
    tst r0, #1
    bne @L_0200b998
@L_0200b9b4:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldr r0, [r5, #0xc]
    tst r0, #0x40
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r5, #0xc]
    mov r0, r5
    mov r1, r1, lsr #8
    and r1, r1, #0xff
    ldr r4, [r5, #8]
    bl FSi_InvokeCommand
    mov r1, r0
    mov r0, r5
    bl FSi_EndCommand
    mov r0, r4
    mov r1, #1
    bl FSi_NextCommand
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl FSi_ExecuteAsyncCommand
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FSi_SendCommand(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    ldr r0, [r9, #0xc]
    mov r6, #0
    tst r0, #1
    mov r7, r6
    movne r0, #1
    moveq r0, r7
    mov r5, r1
    mov r8, r2
    ldr r4, [r9, #8]
    cmp r0, #0
    beq @L_0200ba40
    bl OS_Terminate
@L_0200ba40:
    cmp r4, #0
    moveq r0, #6
    streq r0, [r9, #0x14]
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r9, #0xc]
    mov r1, #2
    bic r0, r0, #0xff00
    orr r0, r0, r5, lsl #8
    orr r0, r0, #1
    str r0, [r9, #0xc]
    cmp r8, #0
    orrne r0, r0, #4
    str r1, [r9, #0x14]
    str r6, [r9]
    strne r0, [r9, #0xc]
    bl OS_DisableInterrupts
    ldr r1, [r4, #0x14]
    mov r5, r0
    tst r1, #0x80
    beq @L_0200baa4
    mov r0, r9
    mov r1, #3
    bl FSi_EndCommand
    b @L_0200bac8
@L_0200baa4:
    ldr r1, [r4, #8]
    add r0, r4, #8
    cmp r1, #0
    beq @L_0200bac4
@L_0200bab4:
    mov r0, r1
    ldr r1, [r1]
    cmp r1, #0
    bne @L_0200bab4
@L_0200bac4:
    str r9, [r0]
@L_0200bac8:
    ldr r0, [r4, #8]
    mov r6, #0
    cmp r0, r9
    bne @L_0200bae4
    ldr r0, [r4, #0x14]
    tst r0, #0x10
    moveq r6, #1
@L_0200bae4:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r0, [r9, #0x14]
    cmp r0, #3
    beq @L_0200bb38
    mov r0, r4
    mov r1, r6
    bl FSi_NextCommand
    cmp r8, #0
    beq @L_0200bb28
    mov r0, r9
    bl FSi_ExecuteSyncCommand
    ldr r0, [r9, #0x14]
    mov r7, #1
    cmp r0, #0
    movne r7, #0
    b @L_0200bb38
@L_0200bb28:
    cmp r0, #0
    beq @L_0200bb34
    bl FSi_ExecuteAsyncCommand
@L_0200bb34:
    mov r7, #1
@L_0200bb38:
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void FS_FindArchive(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    mov r8, r1
    bl OS_DisableInterrupts
    ldr r1, =arc_list
    mov r6, r0
    ldr r7, [r1]
    cmp r7, #0
    beq @L_0200bbb8
    mov r4, #0
    mov r5, #1
@L_0200bb6c:
    ldr r0, [r7, #0x14]
    tst r0, #2
    movne r0, r5
    moveq r0, r4
    cmp r0, #0
    beq @L_0200bbac
    mov r0, r7
    bl FS_GetArchiveName
    mov r1, r9
    mov r2, r8
    mov r10, r0
    bl STD_CompareNString
    cmp r0, #0
    ldreqsb r0, [r8, r10]
    cmpeq r0, #0
    beq @L_0200bbb8
@L_0200bbac:
    ldr r7, [r7, #4]
    cmp r7, #0
    bne @L_0200bb6c
@L_0200bbb8:
    mov r0, r6
    bl OS_RestoreInterrupts
    mov r0, r7
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void FS_SetCurrentDirectory(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x160
    add r8, sp, #0x5c
    mov r4, #0
    add r1, sp, #0
    mov r2, r8
    str r4, [sp]
    bl FS_NormalizePath
    movs r7, r0
    beq @L_0200bc8c
    ldr r9, =arc_list
    ldr r6, =current_dir_path
    str r7, [r9, #4]
    strh r4, [r9, #8]
    strh r4, [r9, #0xa]
    mov r5, #0x104
    mov r0, r6
    mov r1, r8
    mov r2, r5
    str r4, [r9, #0xc]
    bl STD_CopyLString
    ldr r0, [r7, #0x24]
    ldr r0, [r0, #0x10]
    cmp r0, #0
    beq @L_0200bc88
    add r4, sp, #0x14
    mov r0, r4
    bl FS_InitFile
    ldr r3, [sp]
    add r12, sp, #4
    mov r2, #1
    mov r0, r4
    mov r1, #4
    str r7, [sp, #0x1c]
    str r12, [sp, #0x24]
    str r3, [sp, #4]
    str r8, [sp, #8]
    str r2, [sp, #0x10]
    bl FSi_SendCommand
    cmp r0, #0
    beq @L_0200bc88
    ldr r3, [sp, #0xc]
    mov r0, r6
    mov r1, r8
    mov r2, r5
    strh r3, [r9, #8]
    bl STD_CopyLString
@L_0200bc88:
    mov r4, #1
@L_0200bc8c:
    mov r0, r4
    add sp, sp, #0x160
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void FSi_CopySafeString(void)
{
    stmdb sp!, {r3, lr}
    sub lr, r1, #1
    cmp lr, r3
    movge lr, r3
    mov r12, #0
    b @L_0200bcc0
@L_0200bcb8:
    strb r1, [r0, r12]
    add r12, r12, #1
@L_0200bcc0:
    cmp r12, lr
    bge @L_0200bcd4
    ldrsb r1, [r2, r12]
    cmp r1, #0
    bne @L_0200bcb8
@L_0200bcd4:
    cmp r12, r3
    bge @L_0200bcf0
    ldrsb r1, [r2, r12]
    cmp r1, #0
    ldrne r1, [sp, #8]
    movne r2, #1
    strne r2, [r1]
@L_0200bcf0:
    mov r1, #0
    strb r1, [r0, r12]
    mov r0, r12
    ldmia sp!, {r3, pc}
}

asm void FS_NormalizePath(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r3, =arc_list
    mov r6, #0
    ldr r4, [r3, #4]
    mov r7, r1
    mov r10, r0
    mov r9, r2
    str r6, [sp, #8]
    cmp r4, #0
    mov r1, #1
    mov r5, r6
    bne @L_0200bd50
    ldr r2, [r3]
    ldr r0, =current_dir_path
    str r2, [r3, #4]
    strh r6, [r3, #8]
    str r6, [r3, #0xc]
    strh r6, [r3, #0xa]
    strb r6, [r0]
@L_0200bd50:
    ldrb r0, [r10]
    cmp r0, #0x2f
    beq @L_0200bd64
    cmp r0, #0x5c
    bne @L_0200bd7c
@L_0200bd64:
    ldr r0, =arc_list
    cmp r7, #0
    ldr r0, [r0, #4]
    add r10, r10, #1
    str r0, [sp, #4]
    b @L_0200be44
@L_0200bd7c:
    mov r4, #0
@L_0200bd80:
    ldrb r0, [r10, r4]
    cmp r0, #0
    cmpne r0, #0x2f
    beq @L_0200bd98
    cmp r0, #0x5c
    bne @L_0200be14
@L_0200bd98:
    ldr r1, =arc_list
    cmp r7, #0
    ldr r0, [r1, #4]
    str r0, [sp, #4]
    ldrneh r0, [r1, #8]
    strne r0, [r7]
    cmp r9, #0
    beq @L_0200be6c
    ldr r0, =arc_list
    ldrh r0, [r0, #8]
    cmp r0, #0
    bne @L_0200be6c
    ldr r2, =current_dir_path
    ldrsb r0, [r2]
    cmp r0, #0
    beq @L_0200be6c
    mov r1, #0x104
    add r4, sp, #8
    mov r0, r9
    mov r3, r1
    str r4, [sp]
    bl FSi_CopySafeString
    add r6, r6, r0
    ldr r2, =data_020aadc0
    add r0, r9, r6
    rsb r1, r6, #0x104
    mov r3, #1
    str r4, [sp]
    bl FSi_CopySafeString
    add r6, r6, r0
    b @L_0200be6c
@L_0200be14:
    cmp r0, #0x3a
    bne @L_0200be4c
    mov r0, r10
    mov r1, r4
    bl FS_FindArchive
    add r1, r4, #1
    ldrb r1, [r10, r1]!
    str r0, [sp, #4]
    cmp r1, #0x2f
    cmpne r1, #0x5c
    addeq r10, r10, #1
    cmp r7, #0
@L_0200be44:
    strne r5, [r7]
    b @L_0200be6c
@L_0200be4c:
    eor r0, r0, #0x20
    sub r0, r0, #0xa1
    cmp r0, #0x3c
    mov r2, r1
    movhs r2, r5
    add r0, r4, #1
    add r4, r0, r2
    b @L_0200bd80
@L_0200be6c:
    cmp r9, #0
    mov r4, #1
    beq @L_0200bfc0
    ldr r0, [sp, #8]
    mov r7, #0
    cmp r0, #0
    bne @L_0200bfb0
    add r11, sp, #8
@L_0200be8c:
    add r0, r10, r7
    ldrsb r8, [r10, r7]
    cmp r8, #0
    beq @L_0200bf00
    and r1, r8, #0xff
    cmp r1, #0x2f
    mov r2, r4
    cmpne r1, #0x5c
    movne r2, r5
    cmp r2, #0
    bne @L_0200bf00
    and r1, r8, #0xff
    eor r1, r1, #0x20
    sub r1, r1, #0xa1
    cmp r1, #0x3c
    mov r1, r5
    bhs @L_0200beec
    ldrsb r0, [r0, #1]
    cmp r0, #0x7f
    beq @L_0200beec
    sub r0, r0, #0x40
    and r0, r0, #0xff
    cmp r0, #0xbc
    movls r1, r4
@L_0200beec:
    mov r0, #2
    cmp r1, #0
    moveq r0, r4
    add r7, r7, r0
    b @L_0200bfa4
@L_0200bf00:
    cmp r7, #0
    beq @L_0200bf90
    cmp r7, #1
    bne @L_0200bf1c
    ldrsb r0, [r10]
    cmp r0, #0x2e
    beq @L_0200bf90
@L_0200bf1c:
    cmp r7, #2
    ldreqsb r0, [r10]
    cmpeq r0, #0x2e
    ldreqsb r0, [r10, #1]
    cmpeq r0, #0x2e
    bne @L_0200bf50
    cmp r6, #0
    subgt r6, r6, #1
    mov r0, r9
    mov r1, r6
    bl FSi_DecrementSjisPositionToSlash
    add r6, r0, #1
    b @L_0200bf90
@L_0200bf50:
    str r11, [sp]
    add r0, r9, r6
    rsb r1, r6, #0x104
    mov r2, r10
    mov r3, r7
    bl FSi_CopySafeString
    add r6, r6, r0
    cmp r8, #0
    beq @L_0200bf90
    ldr r2, =data_020aadc0
    add r0, r9, r6
    rsb r1, r6, #0x104
    mov r3, r4
    str r11, [sp]
    bl FSi_CopySafeString
    add r6, r6, r0
@L_0200bf90:
    cmp r8, #0
    beq @L_0200bfb0
    add r0, r7, #1
    add r10, r10, r0
    mov r7, r5
@L_0200bfa4:
    ldr r0, [sp, #8]
    cmp r0, #0
    beq @L_0200be8c
@L_0200bfb0:
    mov r1, #0
    mov r0, r9
    strb r1, [r9, r6]
    bl FSi_TrimSjisTrailingSlash
@L_0200bfc0:
    ldr r0, [sp, #8]
    cmp r0, #0
    movne r0, #0
    strne r0, [sp, #4]
    ldr r0, [sp, #4]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void FS_InitArchive(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r1, r4
    mov r2, #0x5c
    mov r5, r0
    bl MI_CpuFill8
    str r4, [r5, #0x10]
    str r4, [r5, #0xc]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FS_RegisterArchiveName(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r1
    mov r6, r2
    mov r8, r0
    mov r5, #0
    bl OS_DisableInterrupts
    mov r4, r0
    mov r0, r7
    mov r1, r6
    bl FS_FindArchive
    cmp r0, #0
    bne @L_0200c0f0
    ldr r0, =arc_list
    ldr r1, =data_020bd0a8_b
    ldr r0, [r0]
    cmp r0, #0
    beq @L_0200c060
@L_0200c050:
    add r1, r0, #4
    ldr r0, [r0, #4]
    cmp r0, #0
    bne @L_0200c050
@L_0200c060:
    str r8, [r1]
    cmp r6, #3
    bhi @L_0200c088
    mov r3, #0
    mov r0, r8
    mov r1, r7
    add r2, r6, #1
    str r3, [r8]
    bl STD_CopyLString
    b @L_0200c0e0
@L_0200c088:
    cmp r6, #0xf
    bhi @L_0200c0dc
    ldr r9, =data_020bd0b8
    mov r5, #0
@L_0200c098:
    cmp r5, #0x10
    blt @L_0200c0a8
    bl OS_Terminate
    b @L_0200c0d4
@L_0200c0a8:
    mov r1, r5, lsl #4
    ldrsb r0, [r9, r1]
    cmp r0, #0
    bne @L_0200c0d4
    add r5, r9, r1
    mov r0, r5
    mov r1, r7
    add r2, r6, #1
    bl STD_CopyLString
    str r5, [r8]
    b @L_0200c0e0
@L_0200c0d4:
    add r5, r5, #1
    b @L_0200c098
@L_0200c0dc:
    bl OS_Terminate
@L_0200c0e0:
    ldr r0, [r8, #0x14]
    mov r5, #1
    orr r0, r0, #1
    str r0, [r8, #0x14]
@L_0200c0f0:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void FS_ReleaseArchiveName(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, =arc_list
    mov r4, r0
    ldr r0, [r1]
    cmp r4, r0
    bne @L_0200c128
    bl OS_Terminate
@L_0200c128:
    ldr r0, [r4]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    bl OS_DisableInterrupts
    ldr r1, =arc_list
    ldr r2, =data_020bd0a8_b
    ldr r1, [r1]
    cmp r1, #0
    beq @L_0200c16c
@L_0200c14c:
    cmp r1, r4
    ldreq r1, [r1, #4]
    streq r1, [r2]
    beq @L_0200c16c
    add r2, r1, #4
    ldr r1, [r1, #4]
    cmp r1, #0
    bne @L_0200c14c
@L_0200c16c:
    ldrsb r1, [r4, #3]
    mov r3, #0
    cmp r1, #0
    ldrne r1, [r4]
    movne r2, #0
    strneb r2, [r1]
    ldr r1, [r4, #0x14]
    str r3, [r4]
    bic r2, r1, #1
    ldr r1, =arc_list
    str r3, [r4, #4]
    str r2, [r4, #0x14]
    ldr r2, [r1, #4]
    cmp r2, r4
    streq r3, [r1, #4]
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void FS_GetArchiveName(void)
{
    ldrsb r1, [r0, #3]
    cmp r1, #0
    ldrne r0, [r0]
    bx lr
}

asm void FS_MountArchive(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x48
    mov r5, r0
    add r4, sp, #0
    mov r0, r4
    str r1, [r5, #0x20]
    str r2, [r5, #0x24]
    bl FS_InitFile
    mov r0, r4
    str r5, [sp, #8]
    mov r1, #0x11
    bl FSi_InvokeCommand
    ldr r1, [r5, #0x14]
    mov r0, #1
    orr r1, r1, #2
    str r1, [r5, #0x14]
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FS_UnmountArchive(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x48
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, [r5, #0x14]
    mov r4, r0
    tst r1, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0200c2bc
    mov r0, r5
    bl FS_SuspendArchive
    ldr r1, [r5, #0x14]
    mov r7, r0
    ldr r0, [r5, #8]
    orr r1, r1, #0x80
    str r1, [r5, #0x14]
    cmp r0, #0
    beq @L_0200c27c
    mov r6, #3
@L_0200c264:
    ldr r8, [r0]
    mov r1, r6
    bl FSi_EndCommand
    mov r0, r8
    cmp r8, #0
    bne @L_0200c264
@L_0200c27c:
    mov r0, #0
    str r0, [r5, #8]
    cmp r7, #0
    beq @L_0200c294
    mov r0, r5
    bl FS_ResumeArchive
@L_0200c294:
    add r6, sp, #0
    mov r0, r6
    bl FS_InitFile
    mov r0, r6
    str r5, [sp, #8]
    mov r1, #0x12
    bl FSi_InvokeCommand
    ldr r0, [r5, #0x14]
    bic r0, r0, #0xa2
    str r0, [r5, #0x14]
@L_0200c2bc:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    add sp, sp, #0x48
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void FS_SuspendArchive(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    bl OS_DisableInterrupts
    ldr r1, [r6, #0x14]
    mov r4, r0
    tst r1, #8
    movne r0, #1
    moveq r0, #0
    mov r5, #1
    cmp r0, #0
    movne r5, #0
    cmp r5, #0
    beq @L_0200c350
    ldr r0, [r6, #0x14]
    tst r0, #0x10
    orreq r0, r0, #8
    streq r0, [r6, #0x14]
    beq @L_0200c350
    orr r0, r0, #0x40
    str r0, [r6, #0x14]
    bl OS_DisableInterrupts
    ldr r1, [r6, #0x14]
    mov r7, r0
    tst r1, #0x40
    beq @L_0200c348
@L_0200c334:
    add r0, r6, #0xc
    bl OS_SleepThread
    ldr r0, [r6, #0x14]
    tst r0, #0x40
    bne @L_0200c334
@L_0200c348:
    mov r0, r7
    bl OS_RestoreInterrupts
@L_0200c350:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void FS_ResumeArchive(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, [r5, #0x14]
    mov r4, #1
    tst r1, #8
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    movne r4, #0
    cmp r4, #0
    ldreq r1, [r5, #0x14]
    biceq r1, r1, #8
    streq r1, [r5, #0x14]
    bl OS_RestoreInterrupts
    mov r0, r5
    mov r1, #1
    bl FSi_NextCommand
    cmp r0, #0
    beq @L_0200c3b4
    bl FSi_ExecuteAsyncCommand
@L_0200c3b4:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FS_NotifyArchiveAsyncEnd(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r5, [r4, #8]
    mov r6, r1
    ldr r0, [r5, #0xc]
    tst r0, #4
    beq @L_0200c404
    bl OS_DisableInterrupts
    ldr r1, [r5, #0xc]
    mov r4, r0
    orr r0, r1, #8
    str r0, [r5, #0xc]
    add r0, r5, #0x18
    str r6, [r5, #0x14]
    bl OS_WakeupThread
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
@L_0200c404:
    mov r0, r5
    bl FSi_EndCommand
    mov r0, r4
    mov r1, #1
    bl FSi_NextCommand
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    bl FSi_ExecuteAsyncCommand
    ldmia sp!, {r4, r5, r6, pc}
}

asm void FS_WaitAsync(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r5, #0
    bl OS_DisableInterrupts
    ldr r1, [r4, #0xc]
    tst r1, #1
    movne r1, #1
    moveq r1, r5
    cmp r1, #0
    beq @L_0200c470
    ldr r1, [r4, #0xc]
    tst r1, #0x44
    moveq r5, #1
    movne r5, #0
    cmp r5, #0
    ldrne r1, [r4, #0xc]
    orrne r1, r1, #4
    strne r1, [r4, #0xc]
@L_0200c470:
    bl OS_RestoreInterrupts
    cmp r5, #0
    beq @L_0200c488
    mov r0, r4
    bl FSi_ExecuteSyncCommand
    b @L_0200c4b8
@L_0200c488:
    bl OS_DisableInterrupts
    ldr r1, [r4, #0xc]
    mov r5, r0
    tst r1, #1
    beq @L_0200c4b0
@L_0200c49c:
    add r0, r4, #0x18
    bl OS_SleepThread
    ldr r0, [r4, #0xc]
    tst r0, #1
    bne @L_0200c49c
@L_0200c4b0:
    mov r0, r5
    bl OS_RestoreInterrupts
@L_0200c4b8:
    ldr r0, [r4, #0x14]
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FSi_DecrementSjisPosition(void)
{
    sub r3, r1, #1
    b @L_0200c4d8
@L_0200c4d4:
    sub r3, r3, #1
@L_0200c4d8:
    cmp r3, #0
    ble @L_0200c4f8
    add r2, r0, r3
    ldrb r2, [r2, #-1]
    eor r2, r2, #0x20
    sub r2, r2, #0xa1
    cmp r2, #0x3c
    blo @L_0200c4d4
@L_0200c4f8:
    sub r1, r1, #1
    sub r0, r1, r3
    and r0, r0, #1
    sub r0, r1, r0
    bx lr
}

asm void FSi_IncrementSjisPositionToSlash(void)
{
    stmdb sp!, {r3, lr}
    mov r3, #0
    mov r12, #1
    b @L_0200c53c
@L_0200c51c:
    and r2, lr, #0xff
    eor r2, r2, #0x20
    sub r2, r2, #0xa1
    cmp r2, #0x3c
    movlo r2, r12
    movhs r2, r3
    add r1, r1, #1
    add r1, r1, r2
@L_0200c53c:
    ldrsb lr, [r0, r1]
    cmp lr, #0
    andne r2, lr, #0xff
    cmpne r2, #0x2f
    beq @L_0200c558
    cmp r2, #0x5c
    bne @L_0200c51c
@L_0200c558:
    mov r0, r1
    ldmia sp!, {r3, pc}
}

asm void FSi_DecrementSjisPositionToSlash(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
@L_0200c568:
    mov r0, r4
    bl FSi_DecrementSjisPosition
    movs r1, r0
    bmi @L_0200c58c
    ldrb r0, [r4, r1]
    cmp r0, #0x2f
    beq @L_0200c58c
    cmp r0, #0x5c
    bne @L_0200c568
@L_0200c58c:
    mov r0, r1
    ldmia sp!, {r4, pc}
}

asm void FSi_TrimSjisTrailingSlash(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl STD_GetStringLength
    mov r4, r0
    mov r0, r5
    mov r1, r4
    bl FSi_DecrementSjisPosition
    cmp r0, #0
    blt @L_0200c5d0
    ldrb r1, [r5, r0]
    cmp r1, #0x2f
    cmpne r1, #0x5c
    moveq r1, #0
    moveq r4, r0
    streqb r1, [r5, r0]
@L_0200c5d0:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FS_InitFile(void)
{
    mov r2, #0
    orr r1, r2, #0x2300
    str r2, [r0, #8]
    str r2, [r0, #4]
    str r2, [r0]
    str r2, [r0, #0x1c]
    str r2, [r0, #0x18]
    str r1, [r0, #0xc]
    str r2, [r0, #0x10]
    str r2, [r0, #0x14]
    bx lr
}

asm void FS_CancelFile(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    ldr r1, [r4, #0xc]
    tst r1, #1
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    beq @L_0200c644
    ldr r1, [r4, #0xc]
    ldr r2, [r4, #8]
    orr r1, r1, #2
    str r1, [r4, #0xc]
    ldr r1, [r2, #0x14]
    orr r1, r1, #0x20
    str r1, [r2, #0x14]
@L_0200c644:
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void FS_GetPathName(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0xc
    ldr r3, [r0, #0xc]
    add r12, sp, #0
    str r12, [r0, #0x10]
    tst r3, #0x20
    movne r3, #1
    moveq r3, #0
    str r1, [sp, #4]
    str r2, [sp, #8]
    mov r1, #5
    mov r2, #1
    str r3, [sp]
    bl FSi_SendCommand
    add sp, sp, #0xc
    ldmia sp!, {pc}
}

asm void FS_OpenFileDirect(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x10
    add r12, sp, #0
    str r1, [r0, #8]
    str r12, [r0, #0x10]
    ldr lr, [sp, #0x18]
    str r2, [sp, #4]
    mov r12, #0
    mov r1, #7
    mov r2, #1
    str lr, [sp]
    str r3, [sp, #8]
    str r12, [sp, #0xc]
    bl FSi_SendCommand
    add sp, sp, #0x10
    ldmia sp!, {r3, pc}
}

asm void FS_OpenFileFast(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x18]
    cmp r2, #0
    mov r12, #0
    beq @L_0200c710
    add r1, sp, #0
    str r2, [r0, #8]
    str r1, [r0, #0x10]
    mov r1, #6
    mov r2, #1
    str r3, [sp]
    str r12, [sp, #4]
    bl FSi_SendCommand
    mov r12, r0
@L_0200c710:
    mov r0, r12
    add sp, sp, #8
    ldmia sp!, {r3, lr}
    add sp, sp, #0x10
    bx lr
}

asm void FS_OpenFileEx(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x128
    add r4, sp, #0x10
    mov r7, r0
    mov r0, r1
    mov r6, r2
    mov r5, #0
    add r1, sp, #0
    mov r2, r4
    str r5, [sp]
    bl FS_NormalizePath
    movs r9, r0
    beq @L_0200c79c
    mov r0, r7
    bl FS_InitFile
    add r0, sp, #4
    str r0, [r7, #0x10]
    str r9, [r7, #8]
    mov r8, #1
    ldr r3, [sp]
    mov r0, r7
    mov r2, r8
    mov r1, #0xd
    str r3, [sp, #4]
    str r4, [sp, #8]
    str r6, [sp, #0xc]
    bl FSi_SendCommand
    cmp r0, #0
    movne r5, r8
    streq r5, [r7, #8]
@L_0200c79c:
    mov r0, r5
    add sp, sp, #0x128
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void FS_CloseFile(void)
{
    ldr r12, =FSi_SendCommand
    mov r1, #8
    mov r2, #1
    bx r12
}

asm void FS_GetFileLength(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r4, #0
    add r1, sp, #4
    mov r5, r0
    str r4, [sp, #4]
    bl FSi_GetFileLengthIfProc
    cmp r0, #0
    bne @L_0200c808
    add r1, sp, #0
    str r1, [r5, #0x10]
    mov r0, r5
    mov r1, #0xf
    mov r2, #1
    str r4, [sp]
    bl FSi_SendCommand
    cmp r0, #0
    ldrne r0, [sp]
    strne r0, [sp, #4]
@L_0200c808:
    ldr r0, [sp, #4]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FS_GetFilePosition(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r4, #0
    add r1, sp, #4
    mov r5, r0
    str r4, [sp, #4]
    bl FSi_GetFilePositionIfProc
    cmp r0, #0
    bne @L_0200c860
    add r1, sp, #0
    str r1, [r5, #0x10]
    mov r0, r5
    mov r1, #0x10
    mov r2, #1
    str r4, [sp]
    bl FSi_SendCommand
    cmp r0, #0
    ldrne r0, [sp]
    strne r0, [sp, #4]
@L_0200c860:
    ldr r0, [sp, #4]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FS_SeekFile(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    add r3, sp, #0
    str r3, [r0, #0x10]
    str r1, [sp]
    str r2, [sp, #4]
    mov r1, #0xe
    mov r2, #1
    bl FSi_SendCommand
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void FS_ReadFile(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    add r3, sp, #0
    mov r5, r0
    str r3, [r5, #0x10]
    str r1, [sp]
    mov r4, #1
    str r2, [sp, #4]
    mov r2, r4
    mov r1, #0
    bl FSi_SendCommand
    cmp r0, #0
    ldrne r2, [sp, #4]
    bne @L_0200c8e0
    ldr r0, [r5, #0x14]
    sub r2, r4, #2
    cmp r0, #6
    ldrne r2, [sp, #4]
@L_0200c8e0:
    mov r0, r2
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FS_ReadFileAsync(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r5, r1
    add r1, sp, #0
    mov r6, r0
    mov r4, r2
    bl FSi_GetFilePositionIfProc
    cmp r0, #0
    beq @L_0200c938
    add r1, sp, #4
    mov r0, r6
    bl FSi_GetFileLengthIfProc
    cmp r0, #0
    beq @L_0200c938
    ldr r2, [sp]
    ldr r1, [sp, #4]
    add r0, r2, r4
    cmp r0, r1
    subhi r4, r1, r2
@L_0200c938:
    mov r1, #0
    add r3, r6, #0x30
    mov r0, r6
    mov r2, r1
    str r3, [r6, #0x10]
    str r5, [r6, #0x30]
    str r4, [r3, #4]
    bl FSi_SendCommand
    mov r0, r4
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void FS_OpenFile(void)
{
    ldr r12, =FS_OpenFileEx
    mov r2, #1
    bx r12
}

asm void FS_GetLength(void)
{
    ldr r12, =FS_GetFileLength
    bx r12
}

asm void func_0200c980(void)
{
    ldr r12, =FS_GetFilePosition
    bx r12
}

asm void FS_ChangeDir(void)
{
    ldr r12, =FS_SetCurrentDirectory
    bx r12
}

asm void FSi_InitOverlay(void)
{
    stmdb sp!, {r4, lr}
    bl OS_GetBootType
    cmp r0, #2
    ldrne r0, =FSiOverlayContext
    mov r1, #0
    strne r1, [r0, #4]
    strne r1, [r0, #8]
    strne r1, [r0, #0xc]
    bne @L_0200c9d0
    ldr r0, =FSiOverlayContext
    mvn r2, #0
    str r2, [r0, #4]
    str r1, [r0, #8]
    str r2, [r0, #0xc]
@L_0200c9d0:
    str r1, [r0, #0x10]
    ldr r1, =data_020a4254
    ldr r4, =FSiOverlayContext
    ldr r0, =data_020aadc4
    str r1, [r4, #0x14]
    mov r2, #0x40
    mov r1, #3
    str r2, [r4, #0x18]
    bl FS_FindArchive
    str r0, [r4]
    ldmia sp!, {r4, pc}
}
