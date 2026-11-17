// (asm for now)

void CTRDGi_InitCommon(void);
void CTRDG_IsExisting(void);
void CTRDGi_ChangeLatestAccessCycle(void);
void CTRDGi_RestoreAccessCycle(void);
void CTRDGi_LockByProcessor(void);
void CTRDGi_UnlockByProcessor(void);
void CTRDGi_SendtoPxi(void);
void CTRDG_Enable(void);
void CTRDG_Init(void);
void CTRDGi_InitModuleInfo(void);
void CTRDGi_CallbackForInitModuleInfo(void);

extern char CTRDGi_Work[];
void CpuSet(void);
void OS_GetLockID(void);
extern char CTRDGi_EnableFlag[];
void CTRDG_IsExistedAtInit(void);
void OS_DisableInterrupts(void);
void OS_ReadOwnerOfLockWord(void);
void OS_TryLockCartridge(void);
void OS_RestoreInterrupts(void);
void WaitByLoop(void);
void OS_UnlockCartridge(void);
void PXI_SendWordByFifo(void);
void OS_SetDPermissionsForProtectionRegion(void);
void DC_FlushAll(void);
void DC_WaitWriteBufferEmpty(void);
void OS_DisableICacheForProtectionRegion(void);
void OS_DisableDCacheForProtectionRegion(void);
void OS_DisableWriteBufferForProtectionRegion(void);
void OS_EnableICacheForProtectionRegion(void);
void OS_EnableDCacheForProtectionRegion(void);
void OS_EnableWriteBufferForProtectionRegion(void);
extern char isInfoInitialized[];
void PXI_Init(void);
void PXI_IsCallbackReady(void);
void PXI_SetFifoRecvCallback(void);
void CTRDGi_PulledOutCallback(void);
extern char data_020be9a0[];
void CTRDGi_InitTaskThread(void);
void CTRDGi_CallbackForSetPhi(void);
void OS_SetIrqMask(void);
extern char data_020be8e0[];
void DC_InvalidateRange(void);
void MIi_DmaCopy16(void);
extern char data_020be8e4[];
void MIi_CpuCopy32(void);
void OS_Terminate(void);

asm void CTRDGi_InitCommon(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =CTRDGi_Work
    mov r3, #0
    ldr r2, =0x5000001
    add r0, sp, #0
    str r3, [sp]
    bl CpuSet
    bl OS_GetLockID
    ldr r1, =CTRDGi_EnableFlag
    strh r0, [r1, #6]
    ldmia sp!, {r3, pc}
}

asm void CTRDG_IsExisting(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    mov r4, #1
    bl CTRDG_IsExistedAtInit
    cmp r0, #0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r5, =0x2fffc30
    ldrb r0, [r5, #5]
    mov r0, r0, lsl #0x1e
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =CTRDGi_EnableFlag
    add r1, sp, #8
    ldrh r0, [r0, #6]
    bl CTRDGi_LockByProcessor
    add r0, sp, #0
    bl CTRDGi_ChangeLatestAccessCycle
    mov r0, #0x8000000
    ldrb r2, [r0, #0xb2]
    cmp r2, #0x96
    bne @L_02015368
    ldrh r1, [r5]
    ldrh r0, [r0, #0xbe]
    cmp r1, r0
    bne @L_020153b0
@L_02015368:
    cmp r2, #0x96
    beq @L_02015388
    ldr r1, =0x2fffc30
    ldr r0, =0x801fffe
    ldrh r1, [r1]
    ldrh r0, [r0]
    cmp r1, r0
    bne @L_020153b0
@L_02015388:
    ldr r2, =0x2fffc30
    mov r0, #0x8000000
    ldr r1, [r2, #8]
    ldr r0, [r0, #0xac]
    cmp r1, r0
    beq @L_020153c4
    ldrb r0, [r2, #5]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq @L_020153c4
@L_020153b0:
    ldr r1, =0x2fffc30
    mov r4, #0
    ldrb r0, [r1, #5]
    orr r0, r0, #2
    strb r0, [r1, #5]
@L_020153c4:
    add r0, sp, #0
    bl CTRDGi_RestoreAccessCycle
    ldr r0, =CTRDGi_EnableFlag
    add r1, sp, #8
    ldrh r0, [r0, #6]
    bl CTRDGi_UnlockByProcessor
    mov r0, r4
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CTRDGi_ChangeLatestAccessCycle(void)
{
    ldr r2, =0x4000204
    ldrh r1, [r2]
    and r1, r1, #0xc
    mov r1, r1, asr #2
    str r1, [r0]
    ldrh r1, [r2]
    and r1, r1, #0x10
    mov r1, r1, asr #4
    str r1, [r0, #4]
    ldrh r0, [r2]
    bic r0, r0, #0xc
    orr r0, r0, #0xc
    strh r0, [r2]
    ldrh r0, [r2]
    bic r0, r0, #0x10
    strh r0, [r2]
    bx lr
}

asm void CTRDGi_RestoreAccessCycle(void)
{
    ldr r3, =0x4000204
    ldr r2, [r0]
    ldrh r1, [r3]
    bic r1, r1, #0xc
    orr r1, r1, r2, lsl #2
    strh r1, [r3]
    ldrh r1, [r3]
    ldr r2, [r0, #4]
    bic r0, r1, #0x10
    orr r0, r0, r2, lsl #4
    strh r0, [r3]
    bx lr
}

asm void CTRDGi_LockByProcessor(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r5, =0x2ffffe8
    mov r7, r0
    mov r6, r1
    mov r4, #1
@L_02015484:
    bl OS_DisableInterrupts
    str r0, [r6, #4]
    mov r0, r5
    bl OS_ReadOwnerOfLockWord
    ands r0, r0, #0x40
    str r0, [r6]
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    bl OS_TryLockCartridge
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r6, #4]
    bl OS_RestoreInterrupts
    mov r0, r4
    bl WaitByLoop
    b @L_02015484
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void CTRDGi_UnlockByProcessor(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    ldr r1, [r4]
    cmp r1, #0
    bne @L_020154e4
    bl OS_UnlockCartridge
@L_020154e4:
    ldr r0, [r4, #4]
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void CTRDGi_SendtoPxi(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r1, r7
    mov r0, #0xd
    mov r2, #0
    bl PXI_SendWordByFifo
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r6, #1
    mov r5, #0xd
    mov r4, #0
@L_0201551c:
    mov r0, r6
    bl WaitByLoop
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl PXI_SendWordByFifo
    cmp r0, #0
    bne @L_0201551c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void CTRDG_Enable(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    ldr r1, =CTRDGi_EnableFlag
    mov r5, r0
    str r4, [r1]
    bl CTRDG_IsExistedAtInit
    cmp r0, #0
    beq @L_020155c0
    mov r1, #0x1000
    cmp r4, #0
    moveq r1, #0x5000
    mov r0, #0xf000
    bl OS_SetDPermissionsForProtectionRegion
    cmp r4, #0
    mov r4, #8
    beq @L_020155a8
    bl DC_FlushAll
    bl DC_WaitWriteBufferEmpty
    mov r0, r4
    bl OS_DisableICacheForProtectionRegion
    mov r0, r4
    bl OS_DisableDCacheForProtectionRegion
    mov r0, r4
    bl OS_DisableWriteBufferForProtectionRegion
    b @L_020155c0
@L_020155a8:
    mov r0, r4
    bl OS_EnableICacheForProtectionRegion
    mov r0, r4
    bl OS_EnableDCacheForProtectionRegion
    mov r0, r4
    bl OS_EnableWriteBufferForProtectionRegion
@L_020155c0:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CTRDG_Init(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =isInfoInitialized
    ldr r0, [r4, #8]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, #1
    str r0, [r4, #8]
    bl CTRDGi_InitCommon
    mov r0, #0
    str r0, [r4, #0xc]
    bl PXI_Init
    mov r5, #0xd
    mov r4, #1
@L_02015604:
    mov r0, r5
    mov r1, r4
    bl PXI_IsCallbackReady
    cmp r0, #0
    beq @L_02015604
    ldr r1, =CTRDGi_CallbackForInitModuleInfo
    mov r0, r5
    bl PXI_SetFifoRecvCallback
    bl CTRDGi_InitModuleInfo
    mov r4, #0
    mov r0, r5
    mov r1, r4
    bl PXI_SetFifoRecvCallback
    ldr r1, =CTRDGi_PulledOutCallback
    mov r0, r5
    bl PXI_SetFifoRecvCallback
    ldr r1, =isInfoInitialized
    ldr r0, =data_020be9a0
    str r4, [r1, #0x18]
    bl CTRDGi_InitTaskThread
    ldr r1, =CTRDGi_CallbackForSetPhi
    mov r0, #0x11
    bl PXI_SetFifoRecvCallback
    mov r0, r4
    bl CTRDG_Enable
    ldmia sp!, {r3, r4, r5, pc}
}

asm void CTRDGi_InitModuleInfo(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r0, =isInfoInitialized
    ldr r1, [r0]
    cmp r1, #0
    addne sp, sp, #0x14
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, =0x4000300
    mov r7, #1
    ldrh r1, [r5]
    str r7, [r0]
    tst r1, #1
    addeq sp, sp, #0x14
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0x40000
    bl OS_SetIrqMask
    sub r1, r5, #0xf8
    ldrh r9, [r1]
    ldr r4, =CTRDGi_Work
    mov r8, r0
    strh r7, [r1]
    add r11, sp, #0xc
    ldrh r0, [r4, #2]
    mov r1, r11
    bl CTRDGi_LockByProcessor
    sub r6, r5, #0xfc
    ldrh r0, [r6]
    and r0, r0, #0x8000
    mov r10, r0, asr #0xf
    add r0, sp, #4
    bl CTRDGi_ChangeLatestAccessCycle
    ldrh r0, [r6]
    ldr r5, =data_020be8e0
    mov r1, #0x40
    bic r0, r0, #0x8000
    strh r0, [r6]
    add r0, r5, #0x80
    bl DC_InvalidateRange
    ldr r1, =0x8000080
    add r2, r5, #0x80
    mov r3, #0x40
    str r7, [sp]
    mov r0, r7
    bl MIi_DmaCopy16
    ldrh r1, [r6]
    add r0, sp, #4
    bic r1, r1, #0x8000
    orr r1, r1, r10, lsl #15
    strh r1, [r6]
    bl CTRDGi_RestoreAccessCycle
    ldrh r0, [r4, #2]
    mov r1, r11
    bl CTRDGi_UnlockByProcessor
    ldr r1, =0x2ffff9b
    ldrb r0, [r1]
    cmp r0, #0
    bne @L_02015770
    ldrb r0, [r1, #-1]
    cmp r0, #0
    bne @L_020157d4
@L_02015770:
    ldr r3, =data_020be8e0
    ldr r4, =0x2fffc30
    ldrh r0, [r3, #0xbe]
    mov r2, #0
    strh r0, [r4]
    b @L_0201579c
@L_02015788:
    add r0, r3, r2
    ldrb r1, [r0, #0xb5]
    add r0, r4, r2
    add r2, r2, #1
    strb r1, [r0, #2]
@L_0201579c:
    cmp r2, #3
    blt @L_02015788
    ldrh r0, [r3, #0xb0]
    strh r0, [r4, #6]
    ldr r0, [r3, #0xac]
    str r0, [r4, #8]
    bl CTRDG_IsExisting
    cmp r0, #0
    mov r2, #1
    ldr r1, =0x2ffff9b
    moveq r2, #0
    mov r0, #1
    strb r2, [r1]
    strb r0, [r1, #-1]
@L_020157d4:
    ldr r0, =0xffff0020
    ldr r1, =data_020be8e4
    mov r2, #0x9c
    bl MIi_CpuCopy32
    bl DC_FlushAll
    ldr r0, =data_020be8e0
    add r0, r0, #0xfe000000
    mov r0, r0, lsr #5
    mov r0, r0, lsl #6
    orr r0, r0, #1
    bl CTRDGi_SendtoPxi
    mov r5, #1
    ldr r4, =CTRDGi_Work
    b @L_02015814
@L_0201580c:
    mov r0, r5
    bl WaitByLoop
@L_02015814:
    ldrh r0, [r4]
    cmp r0, #1
    bne @L_0201580c
    ldr r2, =0x4000208
    mov r0, r8
    ldrh r1, [r2]
    strh r9, [r2]
    bl OS_SetIrqMask
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void CTRDGi_CallbackForInitModuleInfo(void)
{
    stmdb sp!, {r3, lr}
    and r0, r1, #0x3f
    cmp r0, #1
    ldreq r0, =CTRDGi_Work
    moveq r1, #1
    streqh r1, [r0]
    ldmeqia sp!, {r3, pc}
    bl OS_Terminate
    ldmia sp!, {r3, pc}
}
