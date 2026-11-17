// (asm for now)

void NNS_GfdInitLnkPlttVramManager(void);
void NNS_GfdAllocLnkPlttVram(void);
void NNS_GfdFreeLnkPlttVram(void);
void NNS_GfdResetLnkPlttVramState(void);
void NNS_SndInit(void);
void NNS_SndMain(void);

extern char mgr_02097788[];
extern char NNS_GfdDefaultFuncAllocPlttVram[];
extern char NNS_GfdDefaultFuncFreePlttVram[];
extern char data_020c23ac[];
void NNSi_GfdAllocLnkVramAligned(void);
void NNSi_GfdFreeLnkVram(void);
void NNSi_GfdInitLnkVramBlockPool(void);
extern char data_020c23a8_b[];
void NNSi_GfdInitLnkVramMan(void);
void NNSi_GfdAddNewFreeBlock(void);
void NNSi_GfdMergeAllFreeBlocks(void);
extern char data_020c23bc[];
void SND_Init(void);
void BeginSleep(void);
void EndSleep(void);
extern char data_020c23cc[];
void PM_PrependPreSleepCallback(void);
extern char data_020c23dc[];
void PM_AppendPostSleepCallback(void);
void NNSi_SndInitResourceMgr(void);
void NNSi_SndCaptureInit(void);
void NNSi_SndPlayerInit(void);
void SND_RecvCommandReply(void);
void NNSi_SndPlayerMain(void);
void NNSi_SndCaptureMain(void);
void NNSi_SndArcStrmMain(void);
void SND_FlushCommand(void);

asm void NNS_GfdInitLnkPlttVramManager(void)
{
    stmdb sp!, {r4, lr}
    ldr r12, =mgr_02097788
    mov r4, r3
    str r0, [r12, #8]
    str r1, [r12, #0xc]
    str r2, [r12, #0x10]
    bl NNS_GfdResetLnkPlttVramState
    cmp r4, #0
    ldmeqia sp!, {r4, pc}
    ldr r3, =NNS_GfdAllocLnkPlttVram
    ldr r1, =NNS_GfdDefaultFuncAllocPlttVram
    ldr r2, =NNS_GfdFreeLnkPlttVram
    ldr r0, =NNS_GfdDefaultFuncFreePlttVram
    str r3, [r1]
    str r2, [r0]
    ldmia sp!, {r4, pc}
}

asm void NNS_GfdAllocLnkPlttVram(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    cmp r0, #0
    moveq r4, #8
    addne r0, r0, #7
    bicne r4, r0, #7
    ldr r0, =0x7fff8
    cmp r4, r0
    addhs sp, sp, #8
    movhs r0, #0
    ldmhsia sp!, {r4, r5, r6, pc}
    cmp r1, #0
    add r2, sp, #4
    beq @L_02030570
    ldr r6, =mgr_02097788
    ldr r5, =data_020c23ac
    mov r12, #8
    mov r0, r6
    mov r1, r5
    mov r3, r4
    str r12, [sp]
    bl NNSi_GfdAllocLnkVramAligned
    ldr r2, [sp, #4]
    add r1, r2, r4
    cmp r1, #0x10000
    bls @L_02030588
    mov r0, r6
    mov r1, r5
    mov r3, r4
    bl NNSi_GfdFreeLnkVram
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_02030570:
    ldr r0, =mgr_02097788
    mov r12, #0x10
    ldr r1, =data_020c23ac
    mov r3, r4
    str r12, [sp]
    bl NNSi_GfdAllocLnkVramAligned
@L_02030588:
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [sp, #4]
    mov r1, r4, lsr #3
    mov r0, r0, lsl #0xd
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNS_GfdFreeLnkPlttVram(void)
{
    stmdb sp!, {r3, lr}
    mov r1, #0x10000
    rsb r1, r1, #0
    and r1, r0, r1
    mov r2, r0, lsl #0x10
    mov r3, r1, lsr #0x10
    ldr r0, =mgr_02097788
    ldr r1, =data_020c23ac
    mov r2, r2, lsr #0xd
    mov r3, r3, lsl #3
    bl NNSi_GfdFreeLnkVram
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

asm void NNS_GfdResetLnkPlttVramState(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =mgr_02097788
    ldr r1, [r4, #0x10]
    ldr r0, [r4, #0xc]
    mov r1, r1, lsr #4
    bl NNSi_GfdInitLnkVramBlockPool
    ldr r6, =data_020c23a8_b
    str r0, [r4, #4]
    mov r0, r6
    bl NNSi_GfdInitLnkVramMan
    ldr r5, =data_020c23ac
    ldr r3, [r4, #8]
    mov r0, r6
    mov r1, r5
    mov r2, #0
    bl NNSi_GfdAddNewFreeBlock
    mov r0, r6
    mov r1, r5
    bl NNSi_GfdMergeAllFreeBlocks
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNS_SndInit(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_020c23bc
    ldr r0, [r4, #0xc]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r6, #1
    str r6, [r4, #0xc]
    bl SND_Init
    ldr r0, =BeginSleep
    mov r5, #0
    str r0, [r4, #0x10]
    ldr r0, =EndSleep
    str r5, [r4, #0x14]
    str r0, [r4, #0x20]
    ldr r0, =data_020c23cc
    str r5, [r4, #0x24]
    bl PM_PrependPreSleepCallback
    ldr r0, =data_020c23dc
    bl PM_AppendPostSleepCallback
    bl NNSi_SndInitResourceMgr
    bl NNSi_SndCaptureInit
    bl NNSi_SndPlayerInit
    sub r0, r5, #1
    strb r0, [r4]
    str r6, [r4, #4]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNS_SndMain(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
@L_020306e4:
    mov r0, r4
    bl SND_RecvCommandReply
    cmp r0, #0
    bne @L_020306e4
    bl NNSi_SndPlayerMain
    bl NNSi_SndCaptureMain
    bl NNSi_SndArcStrmMain
    mov r0, r4
    bl SND_FlushCommand
    ldmia sp!, {r4, pc}
}
