// (asm for now)

void NNS_SndArcPlayerStartSeqArc(void);
void StartSeqArc(void);
void NNSi_SndArcStrmMain(void);
void FreePlayer(void);
void ForceStopStrm(void);
void ShutdownPlayer(void);
void FreeChannel(void);

void NNS_SndArcGetSeqArcInfo(void);
void NNS_SndArcGetFileAddress(void);
void NNSi_SndSeqArcGetSeqInfo(void);
void NNSi_SndPlayerAllocSeqPlayer(void);
void NNSi_SndPlayerAllocHeap(void);
void NNSi_SndArcLoadBank(void);
void NNSi_SndPlayerFreeSeqPlayer(void);
void NNSi_SndPlayerStartSeq(void);
void NNS_SndPlayerSetInitialVolume(void);
void NNS_SndPlayerSetChannelPriority(void);
void NNS_SndPlayerSetSeqArcNo(void);
extern char SNDi_DecibelTable[];
extern char data_020c2e6c[];
void NNS_SndStrmStart(void);
void NNSi_SndFaderUpdate(void);
void NNSi_SndFaderGet(void);
void NNS_SndStrmSetVolume(void);
void NNSi_SndFaderIsFinished(void);
extern char data_020c4524[];
void OS_LockMutex(void);
extern char nns_sndarc_initialized[];
void NNS_SndStrmStop(void);
void OS_UnlockMutex(void);
extern char data_020c453c[];
void RemoveCommandByPlayer(void);
void NNS_SndStrmFreeChannel(void);

asm void NNS_SndArcPlayerStartSeqArc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    mov r6, r1
    mov r7, r0
    mov r0, r6
    mov r5, r2
    bl NNS_SndArcGetSeqArcInfo
    cmp r0, #0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r0]
    bl NNS_SndArcGetFileAddress
    movs r4, r0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, r5
    bl NNSi_SndSeqArcGetSeqInfo
    cmp r0, #0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    stmia sp, {r0, r4, r6}
    str r5, [sp, #0xc]
    ldrb r1, [r0, #9]
    ldrh r2, [r0, #4]
    ldrb r3, [r0, #8]
    mov r0, r7
    bl StartSeqArc
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void StartSeqArc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    mov r8, r2
    mov r2, r3
    ldr r7, [sp, #0x20]
    mov r4, r0
    mov r5, r1
    bl NNSi_SndPlayerAllocSeqPlayer
    movs r6, r0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r5
    mov r1, r6
    bl NNSi_SndPlayerAllocHeap
    mov r5, #0
    add r12, sp, #4
    mov r2, r0
    mov r0, r8
    mov r3, r5
    mov r1, #6
    str r12, [sp]
    bl NNSi_SndArcLoadBank
    cmp r0, #0
    beq @L_02032288
    mov r0, r6
    bl NNSi_SndPlayerFreeSeqPlayer
    add sp, sp, #8
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02032288:
    ldr r12, [sp, #0x24]
    ldr r2, [r7]
    ldr r1, [r12, #0x18]
    ldr r3, [sp, #4]
    mov r0, r6
    add r1, r12, r1
    bl NNSi_SndPlayerStartSeq
    ldrb r1, [r7, #6]
    mov r0, r4
    bl NNS_SndPlayerSetInitialVolume
    ldrb r1, [r7, #7]
    mov r0, r4
    bl NNS_SndPlayerSetChannelPriority
    ldr r1, [sp, #0x28]
    ldr r2, [sp, #0x2c]
    mov r0, r4
    bl NNS_SndPlayerSetSeqArcNo
    mov r0, #1
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void NNSi_SndArcStrmMain(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r4, =SNDi_DecibelTable
    ldr r5, =data_020c2e6c
    mov r7, #0
    mov r9, #0x17c
@L_020322ec:
    mla r6, r7, r9, r5
    ldr r1, [r6, #0x118]
    mov r0, r1, lsl #0x1f
    movs r0, r0, asr #0x1f
    beq @L_020323cc
    ldr r0, [r6, #0x11c]
    cmp r0, #0
    bne @L_02032310
    b @L_020323c4
@L_02032310:
    mov r0, r1, lsl #0x1d
    movs r0, r0, asr #0x1f
    ldrne r0, [r6, #0x120]
    cmpne r0, #0
    beq @L_0203233c
    mov r0, r6
    bl NNS_SndStrmStart
    ldr r0, [r6, #0x118]
    orr r0, r0, #2
    bic r0, r0, #4
    str r0, [r6, #0x118]
@L_0203233c:
    ldr r0, [r6, #0x118]
    mov r0, r0, lsl #0x1e
    movs r0, r0, asr #0x1f
    beq @L_020323cc
    add r0, r6, #0xf0
    bl NNSi_SndFaderUpdate
    ldr r1, [r6, #0x15c]
    add r0, r6, #0xf0
    mov r1, r1, lsl #1
    ldrsh r8, [r4, r1]
    bl NNSi_SndFaderGet
    mov r0, r0, asr #8
    ldr r1, [r6, #0x160]
    mov r0, r0, lsl #1
    mov r2, r1, lsl #1
    ldrsh r1, [r4, r0]
    ldrsh r2, [r4, r2]
    ldr r0, [r6, #0x164]
    add r1, r1, r8
    add r8, r2, r1
    cmp r8, r0
    beq @L_020323a4
    mov r0, r6
    mov r1, r8
    bl NNS_SndStrmSetVolume
    str r8, [r6, #0x164]
@L_020323a4:
    ldr r0, [r6, #0x118]
    mov r0, r0, lsl #0x1c
    movs r0, r0, asr #0x1f
    beq @L_020323cc
    add r0, r6, #0xf0
    bl NNSi_SndFaderIsFinished
    cmp r0, #0
    beq @L_020323cc
@L_020323c4:
    mov r0, r6
    bl ForceStopStrm
@L_020323cc:
    add r7, r7, #1
    cmp r7, #4
    blt @L_020322ec
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void FreePlayer(void)
{
    ldr r2, [r0, #0x154]
    cmp r2, #0
    movne r1, #0
    strne r1, [r2]
    strne r1, [r0, #0x154]
    ldr r1, [r0, #0x118]
    bic r1, r1, #1
    bic r1, r1, #4
    bic r1, r1, #2
    str r1, [r0, #0x118]
    bx lr
}

asm void ForceStopStrm(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, =data_020c4524
    bl OS_LockMutex
    ldr r0, =nns_sndarc_initialized
    ldr r0, [r0, #4]
    cmp r0, #0
    beq @L_0203243c
    add r0, r0, #0xc8
    add r0, r0, #0x1000
    bl OS_LockMutex
@L_0203243c:
    ldr r0, [r4, #0x118]
    mov r0, r0, lsl #0x1e
    movs r0, r0, asr #0x1f
    beq @L_02032454
    mov r0, r4
    bl NNS_SndStrmStop
@L_02032454:
    ldr r0, [r4, #0x118]
    mov r0, r0, lsl #0x1f
    movs r0, r0, asr #0x1f
    beq @L_02032470
    ldr r1, [r4, #0x178]
    mov r0, r4
    blx r1
@L_02032470:
    mov r0, r4
    bl ShutdownPlayer
    ldr r0, =data_020c4524
    bl OS_UnlockMutex
    ldr r0, =nns_sndarc_initialized
    ldr r0, [r0, #4]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    add r0, r0, #0xc8
    add r0, r0, #0x1000
    bl OS_UnlockMutex
    ldmia sp!, {r4, pc}
}

asm void ShutdownPlayer(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x118]
    mov r1, r1, lsl #0x1f
    movs r1, r1, asr #0x1f
    ldmeqia sp!, {r4, pc}
    bl FreeChannel
    ldr r1, [r4, #0x170]
    mov r0, r4
    blx r1
    ldr r0, =data_020c453c
    mov r1, r4
    bl RemoveCommandByPlayer
    ldr r0, =nns_sndarc_initialized
    ldr r0, [r0, #4]
    cmp r0, #0
    beq @L_020324fc
    add r0, r0, #0xe0
    mov r1, r4
    add r0, r0, #0x1000
    bl RemoveCommandByPlayer
@L_020324fc:
    mov r0, r4
    bl FreePlayer
    ldmia sp!, {r4, pc}
}

asm void FreeChannel(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0, #0x128]
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    subs r1, r1, #1
    str r1, [r0, #0x128]
    ldmneia sp!, {r3, pc}
    bl NNS_SndStrmFreeChannel
    ldmia sp!, {r3, pc}
}
