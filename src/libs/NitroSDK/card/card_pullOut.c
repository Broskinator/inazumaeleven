// (asm for now)

void CARDi_SendtoPxi(void);
void WM_Init(void);
void WmInitCore(void);
void WM_Finish(void);

void PXI_SendWordByFifo(void);
void WaitByLoop(void);
extern char wmInitialized[];
void OS_DisableInterrupts(void);
void OS_RestoreInterrupts(void);
void OS_IsOnVram(void);
void PXI_Init(void);
void PXI_IsCallbackReady(void);
void DC_InvalidateRange(void);
void MIi_DmaFill32(void);
void WmClearFifoRecvFlag(void);
extern char bufMsgQ[];
extern char data_020bdda4[];
void OS_InitMessageQueue(void);
extern char data_020bde20[];
void DC_StoreRange(void);
void OS_SendMessage(void);
void WmReceiveFifo(void);
void PXI_SetFifoRecvCallback(void);
void WMi_CheckInitialized(void);
void WMi_CheckStateEx(void);

asm void CARDi_SendtoPxi(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r1, r7
    mov r0, #0xe
    mov r2, #0
    bl PXI_SendWordByFifo
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r5, #0xe
    mov r4, #0
@L_020123c8:
    mov r0, r6
    bl WaitByLoop
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl PXI_SendWordByFifo
    cmp r0, #0
    bne @L_020123c8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void WM_Init(void)
{
    stmdb sp!, {r3, lr}
    mov r2, #0xf00
    bl WmInitCore
    cmp r0, #0
    ldreq r1, =wmInitialized
    moveq r2, #0
    ldreq r1, [r1, #4]
    streqh r2, [r1, #0x16]
    ldmia sp!, {r3, pc}
}

asm void WmInitCore(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r8, r0
    mov r7, r1
    mov r5, r2
    bl OS_DisableInterrupts
    ldr r9, =wmInitialized
    mov r6, r0
    ldrh r1, [r9]
    cmp r1, #0
    beq @L_02012450
    bl OS_RestoreInterrupts
    add sp, sp, #4
    mov r0, #3
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02012450:
    cmp r8, #0
    bne @L_02012468
    bl OS_RestoreInterrupts
    add sp, sp, #4
    mov r0, #6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02012468:
    mov r0, r8
    bl OS_IsOnVram
    cmp r0, #0
    beq @L_0201248c
    mov r0, r6
    bl OS_RestoreInterrupts
    add sp, sp, #4
    mov r0, #6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0201248c:
    cmp r7, #3
    bls @L_020124a8
    mov r0, r6
    bl OS_RestoreInterrupts
    add sp, sp, #4
    mov r0, #6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020124a8:
    tst r8, #0x1f
    beq @L_020124c4
    mov r0, r6
    bl OS_RestoreInterrupts
    add sp, sp, #4
    mov r0, #6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020124c4:
    bl PXI_Init
    mov r10, #1
    mov r1, r10
    mov r0, #0xa
    bl PXI_IsCallbackReady
    cmp r0, #0
    bne @L_020124f4
    mov r0, r6
    bl OS_RestoreInterrupts
    add sp, sp, #4
    mov r0, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020124f4:
    mov r0, r8
    mov r1, r5
    bl DC_InvalidateRange
    mov r4, #0
    mov r0, r7
    mov r1, r8
    mov r2, r4
    str r10, [sp]
    mov r3, r5
    bl MIi_DmaFill32
    str r8, [r9, #4]
    add r0, r8, #0x200
    str r0, [r8]
    ldr r1, [r9, #4]
    ldr r0, [r1]
    add r0, r0, #0x300
    str r0, [r1, #4]
    ldr r1, [r9, #4]
    ldr r0, [r1, #4]
    add r0, r0, #0x800
    str r0, [r1, #0xc]
    ldr r1, [r9, #4]
    ldr r0, [r1, #0xc]
    add r0, r0, #0x100
    str r0, [r1, #0x10]
    bl WmClearFifoRecvFlag
    ldr r0, [r9, #4]
    mov r1, r4
    strh r7, [r0, #0x14]
    ldr r0, [r9, #4]
    str r4, [r0, #0x14c]
    ldr r0, [r9, #4]
    add r0, r0, #0x100
    strh r4, [r0, #0x50]
    b @L_0201259c
@L_02012580:
    ldr r0, [r9, #4]
    add r0, r0, r4, lsl #2
    str r1, [r0, #0xcc]
    ldr r0, [r9, #4]
    add r0, r0, r4, lsl #2
    str r1, [r0, #0x10c]
    add r4, r4, #1
@L_0201259c:
    cmp r4, #0x10
    blt @L_02012580
    ldr r5, =bufMsgQ
    ldr r1, =data_020bdda4
    mov r0, r5
    mov r2, #0xa
    bl OS_InitMessageQueue
    mov r7, #0
    mov r4, #0x8000
    ldr r10, =data_020bde20
    mov r9, #2
    mov r8, #1
    b @L_020125f8
@L_020125d0:
    mov r2, r7, lsl #8
    mov r1, r9
    add r0, r10, r7, lsl #8
    strh r4, [r10, r2]
    bl DC_StoreRange
    mov r0, r5
    mov r2, r8
    add r1, r10, r7, lsl #8
    bl OS_SendMessage
    add r7, r7, #1
@L_020125f8:
    cmp r7, #0xa
    blt @L_020125d0
    ldr r1, =WmReceiveFifo
    mov r0, #0xa
    bl PXI_SetFifoRecvCallback
    ldr r1, =wmInitialized
    mov r2, #1
    mov r0, r6
    strh r2, [r1]
    bl OS_RestoreInterrupts
    mov r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void WM_Finish(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    mov r5, r0
    bl WMi_CheckInitialized
    cmp r0, #0
    beq @L_02012668
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, #3
    ldmia sp!, {r3, r4, r5, pc}
@L_02012668:
    mov r4, #0
    mov r1, r4
    mov r0, #1
    bl WMi_CheckStateEx
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    bl WmClearFifoRecvFlag
    mov r1, r4
    mov r0, #0xa
    bl PXI_SetFifoRecvCallback
    ldr r1, =wmInitialized
    mov r0, r5
    str r4, [r1, #4]
    strh r4, [r1]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}
