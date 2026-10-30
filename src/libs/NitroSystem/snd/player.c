// (asm for now)

void NNS_SndPlayerSetPlayerVolume(void);
void NNS_SndPlayerSetPlayableSeqCount(void);
void NNS_SndPlayerSetAllocatableChannel(void);
void func_02030828(void);
void func_020308ac(void);
void func_020308bc(void);
void func_020308c8(void);
void func_020308e4(void);
void func_020308f8(void);
void NNS_SndPlayerSetChannelPriority(void);
void NNS_SndPlayerSetTrackMute(void);
void NNS_SndPlayerSetSeqArcNo(void);
void func_02030978(void);
void NNSi_SndPlayerMain(void);
void func_02030b90(void);
void func_02030c2c(void);
void func_02030c38(void);
void func_02030c88(void);
void func_02030cd8(void);
void func_02030d30(void);
void InsertPlayerList(void);
void func_02030dc8(void);
void ForceStopSeq(void);
void func_02030e54(void);
void func_02030ec0(void);
void PlayerHeapDisposeCallback(void);
void SetPlayerPriority(void);
void func_02030ff0(void);
void func_02031018(void);
void func_0203106c(void);
void func_02031088(void);
void func_020310f4(void);
void func_02031168(void);
void func_02031198(void);
void func_020311b8(void);
void func_02031238(void);
void func_0203131c(void);
void func_02031374(void);
void func_020313f4(void);
void func_020314ac(void);
void func_020314c4(void);
void func_020314d4(void);
void func_02031538(void);
void func_0203159c(void);
void func_02031600(void);
void func_02031664(void);
void func_0203168c(void);
void func_02031754(void);
void func_0203177c(void);
void func_02031798(void);

extern char data_020c2870[];
extern char data_020c2868[];
extern char data_020c286c[];
void NNS_SndHeapAlloc(void);
extern char data_020c2850[];
void func_020326f8(void);
void SND_SetPlayerChannelPriority(void);
void SND_SetTrackPitch(void);
extern char data_020c2404[];
void NNS_FndInitList(void);
extern char data_020c23f8[];
extern char data_020c2410[];
void func_0200aa6c(void);
void NNS_FndGetNextListObject(void);
extern char data_020a3e80[];
void func_0200a784(void);
void NNSi_SndFaderUpdate(void);
void NNSi_SndFaderGet(void);
void SND_SetPlayerVolume(void);
void NNSi_SndFaderIsFinished(void);
void SND_StartPreparedSeq(void);
void SND_PrepareSeq(void);
void SND_SetTrackAllocatableChannel(void);
void SND_GetCurrentCommandTag(void);
void func_02032628(void);
void NNS_FndRemoveListObject(void);
void NNS_SndHeapClear(void);
void NNSi_SndFaderInit(void);
void NNS_FndInsertListObject(void);
void SND_StopSeq(void);
void NNS_SndHeapDestroy(void);
void NNS_SndUnlockChannel(void);
void SND_StartTimer(void);
void func_02010104(void);
void func_02010124(void);
extern char data_020c2ce0[];
void SND_CalcChannelVolume(void);
void SND_SetChannelVolume(void);
void SND_StopTimer(void);
void func_02010168(void);
void func_02010180(void);
void func_0200a550(void);
void SND_WaitForCommandProc(void);
void NNS_SndFreeAlarm(void);
extern char data_020c2cd4[];
extern char data_020c2d60[];
extern char data_020c2da8[];
extern char data_020c2d68[];
void func_020068c0(void);
void NNS_SndUnlockCapture(void);
void SND_SetOutputSelector(void);
void func_0200919c(void);
void DC_FlushRange(void);
void MIi_CpuCopy32(void);
extern char data_020c2dfc[];
void FS_SeekFile(void);
void FS_ReadFile(void);
void NNS_FndCreateFrmHeapEx(void);
void InitHeap(void);
void func_020331ac(void);

asm void NNS_SndPlayerSetPlayerVolume(void)
{
    mov r2, #0x24
    mul r2, r0, r2
    ldr r0, =data_020c2870
    strb r1, [r0, r2]
    bx lr
}

asm void NNS_SndPlayerSetPlayableSeqCount(void)
{
    mov r2, #0x24
    mul r2, r0, r2
    mov r0, r1, lsl #0x10
    ldr r1, =data_020c2868
    mov r0, r0, lsr #0x10
    str r0, [r1, r2]
    bx lr
}

asm void NNS_SndPlayerSetAllocatableChannel(void)
{
    mov r2, #0x24
    mul r2, r0, r2
    ldr r0, =data_020c286c
    str r1, [r0, r2]
    bx lr
}

asm void func_02030828(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, #0
    mov r6, r2
    mov r7, r0
    mov r0, r1
    ldr r2, =PlayerHeapDisposeCallback
    mov r3, r5
    add r1, r6, #0x14
    str r5, [sp]
    bl NNS_SndHeapAlloc
    movs r4, r0
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    str r5, [r4, #0xc]
    str r7, [r4, #0x10]
    mov r1, r6
    add r0, r4, #0x14
    str r5, [r4, #8]
    bl func_02031798
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r2, =data_020c2850
    mov r1, #0x24
    mla r2, r7, r1, r2
    str r0, [r4, #8]
    mov r1, r4
    add r0, r2, #0xc
    bl func_020326f8
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_020308ac(void)
{
    ldr r0, [r0]
    ldr r12, =func_02030c88
    bx r12
}

asm void func_020308bc(void)
{
    mov r1, #0
    str r1, [r0]
    bx lr
}

asm void func_020308c8(void)
{
    ldr r1, [r0]
    cmp r1, #0
    ldrne r1, [r0]
    movne r2, #0
    strne r2, [r1]
    strne r2, [r0]
    bx lr
}

asm void func_020308e4(void)
{
    ldr r2, [r0]
    cmp r2, #0
    ldrne r0, [r0]
    strneb r1, [r0, #0x41]
    bx lr
}

asm void func_020308f8(void)
{
    ldr r2, [r0]
    cmp r2, #0
    ldrne r0, [r0]
    strneb r1, [r0, #0x40]
    bx lr
}

asm void NNS_SndPlayerSetChannelPriority(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, [r0]
    ldrb r0, [r0, #0x3c]
    bl SND_SetPlayerChannelPriority
    ldmia sp!, {r3, pc}
}

asm void NNS_SndPlayerSetTrackMute(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, [r0]
    cmp r3, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, [r0]
    ldrb r0, [r0, #0x3c]
    bl SND_SetTrackPitch
    ldmia sp!, {r3, pc}
}

asm void NNS_SndPlayerSetSeqArcNo(void)
{
    ldr r3, [r0]
    cmp r3, #0
    bxeq lr
    ldr r3, [r0]
    mov r12, #2
    strh r12, [r3, #0x34]
    ldr r3, [r0]
    strh r1, [r3, #0x38]
    ldr r0, [r0]
    strh r2, [r0, #0x3a]
    bx lr
}

asm void func_02030978(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, #0x14
    ldr r0, =data_020c2404
    mov r1, r4
    bl NNS_FndInitList
    ldr r6, =data_020c23f8
    mov r1, r4
    mov r0, r6
    bl NNS_FndInitList
    mov r7, #0
    ldr r5, =data_020c2410
    mov r10, r7
    mov r4, #0x44
@L_020309ac:
    mla r1, r7, r4, r5
    strb r10, [r1, #0x2c]
    mov r0, r6
    strb r7, [r1, #0x3c]
    bl func_020326f8
    add r7, r7, #1
    cmp r7, #0x10
    blt @L_020309ac
    ldr r8, =data_020c2850
    mov r11, #0xc
    mov r7, #0
    mov r6, #0x7f
    mov r5, #1
    mov r4, #0x24
@L_020309e4:
    mla r9, r10, r4, r8
    mov r0, r9
    mov r1, r11
    bl NNS_FndInitList
    mov r1, r7
    add r0, r9, #0xc
    bl NNS_FndInitList
    strb r6, [r9, #0x20]
    str r5, [r9, #0x18]
    add r10, r10, #1
    str r7, [r9, #0x1c]
    cmp r10, #0x20
    blt @L_020309e4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void NNSi_SndPlayerMain(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bl func_0200aa6c
    mov r11, r0
    ldr r0, =data_020c2404
    mov r1, #0
    bl NNS_FndGetNextListObject
    movs r6, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #0x8000
    ldr r5, =data_020a3e80
    rsb r4, r4, #0
@L_02030a58:
    ldr r0, =data_020c2404
    mov r1, r6
    bl NNS_FndGetNextListObject
    ldrb r1, [r6, #0x2d]
    mov r7, r0
    cmp r1, #0
    bne @L_02030a88
    ldr r0, [r6, #0x30]
    bl func_0200a784
    cmp r0, #0
    movne r0, #1
    strneb r0, [r6, #0x2d]
@L_02030a88:
    ldrb r0, [r6, #0x2d]
    cmp r0, #0
    beq @L_02030ab0
    ldrb r1, [r6, #0x3c]
    mov r0, #1
    tst r11, r0, lsl r1
    bne @L_02030ab0
    mov r0, r6
    bl func_02030ec0
    b @L_02030b74
@L_02030ab0:
    add r0, r6, #0x1c
    bl NNSi_SndFaderUpdate
    ldr r0, [r6, #4]
    ldrb r2, [r6, #0x41]
    ldrb r0, [r0, #0x20]
    ldrb r1, [r6, #0x40]
    mov r2, r2, lsl #1
    mov r0, r0, lsl #1
    mov r1, r1, lsl #1
    ldrsh r10, [r5, r0]
    add r0, r6, #0x1c
    ldrsh r8, [r5, r2]
    ldrsh r9, [r5, r1]
    bl NNSi_SndFaderGet
    mov r0, r0, asr #8
    mov r0, r0, lsl #1
    add r1, r9, r8
    ldrsh r0, [r5, r0]
    add r1, r10, r1
    add r8, r0, r1
    cmp r8, r4
    movlt r8, r4
    blt @L_02030b18
    ldr r0, =0x7fff
    cmp r8, r0
    movgt r8, r0
@L_02030b18:
    ldrsh r0, [r6, #0x3e]
    cmp r8, r0
    beq @L_02030b34
    ldrb r0, [r6, #0x3c]
    mov r1, r8
    bl SND_SetPlayerVolume
    strh r8, [r6, #0x3e]
@L_02030b34:
    ldrb r0, [r6, #0x2c]
    cmp r0, #2
    bne @L_02030b58
    add r0, r6, #0x1c
    bl NNSi_SndFaderIsFinished
    cmp r0, #0
    beq @L_02030b58
    mov r0, r6
    bl ForceStopSeq
@L_02030b58:
    ldrb r0, [r6, #0x2f]
    cmp r0, #0
    beq @L_02030b74
    ldrb r0, [r6, #0x3c]
    bl SND_StartPreparedSeq
    mov r0, #0
    strb r0, [r6, #0x2f]
@L_02030b74:
    mov r6, r7
    cmp r7, #0
    bne @L_02030a58
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02030b90(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, =data_020c2850
    mov r3, #0x24
    mov r6, r0
    ldr r7, [r6]
    mla r4, r1, r3, r4
    mov r5, r2
    cmp r7, #0
    beq @L_02030bb8
    bl func_020308c8
@L_02030bb8:
    ldrh r1, [r4, #8]
    ldr r0, [r4, #0x18]
    cmp r1, r0
    blo @L_02030bf8
    mov r7, #0
    mov r0, r4
    mov r1, r7
    bl NNS_FndGetNextListObject
    cmp r0, #0
    moveq r0, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r1, [r0, #0x3d]
    cmp r5, r1
    movlt r0, r7
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    bl ForceStopSeq
@L_02030bf8:
    mov r0, r5
    bl func_02030e54
    movs r5, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r4
    mov r1, r5
    bl InsertPlayerList
    str r6, [r5]
    mov r0, r5
    str r5, [r6]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02030c2c(void)
{
    ldr r12, =func_02030ec0
    bx r12
}

asm void func_02030c38(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrb r0, [r5, #0x3c]
    ldr r4, [r5, #4]
    bl SND_PrepareSeq
    ldr r2, [r4, #0x1c]
    cmp r2, #0
    beq @L_02030c64
    ldrb r0, [r5, #0x3c]
    ldr r1, =0xffff
    bl SND_SetTrackAllocatableChannel
@L_02030c64:
    mov r0, r5
    bl func_02030d30
    bl SND_GetCurrentCommandTag
    mov r1, #1
    str r0, [r5, #0x30]
    strb r1, [r5, #0x2f]
    strb r1, [r5, #0x2c]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02030c88(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    mov r2, r1
    ldrneb r1, [r5, #0x2c]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r2, #0
    bne @L_02030cb0
    bl ForceStopSeq
    ldmia sp!, {r3, r4, r5, pc}
@L_02030cb0:
    mov r4, #0
    mov r1, r4
    add r0, r5, #0x1c
    bl func_02032628
    mov r0, r5
    mov r1, r4
    bl SetPlayerPriority
    mov r0, #2
    strb r0, [r5, #0x2c]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02030cd8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r3, =data_020c2850
    mov r2, #0x24
    mla r6, r0, r2, r3
    mov r5, #0
    mov r7, r1
    mov r1, r5
    add r0, r6, #0xc
    bl NNS_FndGetNextListObject
    movs r4, r0
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, r4
    add r0, r6, #0xc
    bl NNS_FndRemoveListObject
    str r7, [r4, #0xc]
    str r4, [r7, #8]
    ldr r0, [r4, #8]
    bl NNS_SndHeapClear
    ldr r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02030d30(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r2, #0
    mov r1, #0x7f
    add r0, r4, #0x1c
    strb r2, [r4, #0x2e]
    strb r2, [r4, #0x2d]
    strb r2, [r4, #0x2f]
    strh r2, [r4, #0x34]
    strh r2, [r4, #0x3e]
    strb r1, [r4, #0x40]
    strb r1, [r4, #0x41]
    bl NNSi_SndFaderInit
    add r0, r4, #0x1c
    mov r1, #0x7f00
    mov r2, #1
    bl func_02032628
    ldmia sp!, {r4, pc}
}

asm void InsertPlayerList(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r1, #0
    mov r5, r0
    bl NNS_FndGetNextListObject
    movs r1, r0
    beq @L_02030db4
@L_02030d94:
    ldrb r2, [r4, #0x3d]
    ldrb r0, [r1, #0x3d]
    cmp r2, r0
    blo @L_02030db4
    mov r0, r5
    bl NNS_FndGetNextListObject
    movs r1, r0
    bne @L_02030d94
@L_02030db4:
    mov r0, r5
    mov r2, r4
    bl NNS_FndInsertListObject
    str r5, [r4, #4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02030dc8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_020c2404
    mov r5, r0
    mov r0, r4
    mov r1, #0
    bl NNS_FndGetNextListObject
    movs r1, r0
    beq @L_02030e08
@L_02030de8:
    ldrb r2, [r5, #0x3d]
    ldrb r0, [r1, #0x3d]
    cmp r2, r0
    blo @L_02030e08
    mov r0, r4
    bl NNS_FndGetNextListObject
    movs r1, r0
    bne @L_02030de8
@L_02030e08:
    ldr r0, =data_020c2404
    mov r2, r5
    bl NNS_FndInsertListObject
    ldmia sp!, {r3, r4, r5, pc}
}

asm void ForceStopSeq(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x2c]
    cmp r0, #2
    bne @L_02030e3c
    ldrb r0, [r4, #0x3c]
    ldr r1, =0xfffffd2d
    bl SND_SetPlayerVolume
@L_02030e3c:
    ldrb r0, [r4, #0x3c]
    bl SND_StopSeq
    mov r0, r4
    bl func_02030ec0
    ldmia sp!, {r4, pc}
}

asm void func_02030e54(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, #0
    ldr r0, =data_020c23f8
    mov r1, r4
    bl NNS_FndGetNextListObject
    movs r5, r0
    bne @L_02030e98
    ldr r0, =data_020c2404
    mov r1, r4
    bl NNS_FndGetNextListObject
    mov r5, r0
    ldrb r1, [r5, #0x3d]
    cmp r6, r1
    movlt r0, r4
    ldmltia sp!, {r4, r5, r6, pc}
    bl ForceStopSeq
@L_02030e98:
    ldr r0, =data_020c23f8
    mov r1, r5
    bl NNS_FndRemoveListObject
    mov r0, r5
    strb r6, [r5, #0x3d]
    bl func_02030dc8
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02030ec0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r1, [r6]
    cmp r1, #0
    movne r0, #0
    strne r0, [r1]
    ldr r5, [r6, #4]
    strne r0, [r6]
    mov r1, r6
    mov r0, r5
    bl NNS_FndRemoveListObject
    ldr r1, [r6, #8]
    mov r4, #0
    str r4, [r6, #4]
    cmp r1, #0
    beq @L_02030f14
    add r0, r5, #0xc
    bl func_020326f8
    ldr r0, [r6, #8]
    str r4, [r0, #0xc]
    str r4, [r6, #8]
@L_02030f14:
    ldr r0, =data_020c2404
    mov r1, r6
    bl NNS_FndRemoveListObject
    ldr r0, =data_020c23f8
    mov r1, r6
    bl func_020326f8
    mov r0, #0
    strb r0, [r6, #0x2c]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void PlayerHeapDisposeCallback(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #8]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    bl NNS_SndHeapDestroy
    ldr r1, [r4, #0xc]
    cmp r1, #0
    movne r0, #0
    strne r0, [r1, #8]
    ldmneia sp!, {r4, pc}
    ldr r1, [r4, #0x10]
    ldr r2, =data_020c2850
    mov r0, #0x24
    mla r0, r1, r0, r2
    mov r1, r4
    add r0, r0, #0xc
    bl NNS_FndRemoveListObject
    ldmia sp!, {r4, pc}
}

asm void SetPlayerPriority(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r4, [r6, #4]
    mov r5, r1
    cmp r4, #0
    beq @L_02030fbc
    mov r0, r4
    mov r1, r6
    bl NNS_FndRemoveListObject
    mov r0, #0
    str r0, [r6, #4]
@L_02030fbc:
    ldr r0, =data_020c2404
    mov r1, r6
    bl NNS_FndRemoveListObject
    strb r5, [r6, #0x3d]
    cmp r4, #0
    beq @L_02030fe0
    mov r0, r4
    mov r1, r6
    bl InsertPlayerList
@L_02030fe0:
    mov r0, r6
    bl func_02030dc8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02030ff0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x4c]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    bl NNS_SndUnlockChannel
    mov r0, #0
    str r0, [r4, #0x4c]
    str r0, [r4, #0x50]
    ldmia sp!, {r4, pc}
}

asm void func_02031018(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x48]
    mov r2, #1
    mov r1, #0
    mov r2, r2, lsl r0
    ldr r0, [r4, #0x4c]
    mov r3, r1
    bl SND_StartTimer
    ldr r0, [r4, #0x2c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, asr #0x1f
    ldmneia sp!, {r4, pc}
    add r0, r4, #8
    bl func_02010104
    add r0, r4, #0x18
    bl func_02010124
    ldr r0, [r4, #0x2c]
    orr r0, r0, #2
    str r0, [r4, #0x2c]
    ldmia sp!, {r4, pc}
}

asm void func_0203106c(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0, #0x2c]
    mov r1, r1, lsl #0x1f
    movs r1, r1, asr #0x1f
    ldmeqia sp!, {r3, pc}
    bl func_020310f4
    ldmia sp!, {r3, pc}
}

asm void func_02031088(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    ldr r0, [r7, #0x50]
    mov r6, #0
    str r1, [r7, #0x44]
    cmp r0, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r4, =data_020c2ce0
    mov r8, #1
@L_020310ac:
    add r0, r7, r6
    ldrb r5, [r0, #0x54]
    ldr r1, [r7, #0x44]
    add r0, r4, r5, lsl #3
    ldr r0, [r0, #4]
    add r0, r1, r0
    bl SND_CalcChannelVolume
    mov r2, r0
    mov r0, r8, lsl r5
    and r1, r2, #0xff
    mov r2, r2, asr #8
    bl SND_SetChannelVolume
    ldr r0, [r7, #0x50]
    add r6, r6, #1
    cmp r6, r0
    blt @L_020310ac
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_020310f4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r0, [r4, #0x2c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, asr #0x1f
    beq @L_0203115c
    ldr r0, [r4, #0x48]
    mov r6, #1
    mov r1, #0
    mov r2, r6, lsl r0
    ldr r0, [r4, #0x4c]
    mov r3, r1
    bl SND_StopTimer
    add r0, r4, #8
    bl func_02010168
    add r0, r4, #0x18
    bl func_02010180
    ldr r0, [r4, #0x2c]
    bic r0, r0, #2
    str r0, [r4, #0x2c]
    bl SND_GetCurrentCommandTag
    mov r5, r0
    mov r0, r6
    bl func_0200a550
    mov r0, r5
    bl SND_WaitForCommandProc
@L_0203115c:
    mov r0, r4
    bl func_02031168
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02031168(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x48]
    bl NNS_SndFreeAlarm
    ldr r0, =data_020c2cd4
    mov r1, r4
    bl NNS_FndRemoveListObject
    ldr r0, [r4, #0x2c]
    bic r0, r0, #1
    str r0, [r4, #0x2c]
    ldmia sp!, {r4, pc}
}

asm void func_02031198(void)
{
    ldr r1, =data_020c2d60
    mov r2, #0
    ldr r0, =data_020c2da8
    str r2, [r1]
    str r2, [r0]
    bx lr
}

asm void func_020311b8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_020c2da8
    ldr r0, [r4]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #4]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    add r0, r4, #0x3c
    bl NNSi_SndFaderUpdate
    ldr r0, [r4, #0x4c]
    cmp r0, #0
    beq @L_02031204
    add r0, r4, #0x3c
    bl NNSi_SndFaderIsFinished
    cmp r0, #0
    beq @L_02031204
    bl func_02031238
    ldmia sp!, {r3, r4, r5, pc}
@L_02031204:
    add r0, r4, #0x3c
    bl NNSi_SndFaderGet
    ldr r1, [r4, #0x50]
    mov r5, r0, asr #8
    cmp r5, r1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #0x24]
    mov r1, r5
    mov r2, #0
    bl SND_SetChannelVolume
    str r5, [r4, #0x50]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02031238(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, =data_020c2da8
    mov r4, #0
    ldr r0, [r6]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r6, #0x2c]
    mov r7, #1
    cmp r1, #0
    movlt r7, r4
    cmp r7, #0
    movne r0, #1
    movne r2, r0, lsl r1
    ldr r0, [r6, #0x24]
    ldr r1, [r6, #0x28]
    moveq r2, #0
    mov r3, #0
    bl SND_StopTimer
    cmp r7, #0
    beq @L_020312bc
    bl SND_GetCurrentCommandTag
    mov r5, r0
    mov r0, #1
    bl func_0200a550
    mov r0, r5
    bl SND_WaitForCommandProc
    ldr r5, =data_020c2d68
@L_020312a4:
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl func_020068c0
    cmp r0, #0
    bne @L_020312a4
@L_020312bc:
    ldr r0, [r6, #0x28]
    cmp r0, #0
    beq @L_020312cc
    bl NNS_SndUnlockCapture
@L_020312cc:
    ldr r0, [r6, #0x20]
    cmp r0, #0
    beq @L_020312dc
    bl NNS_SndUnlockChannel
@L_020312dc:
    cmp r7, #0
    beq @L_020312ec
    ldr r0, [r6, #0x2c]
    bl NNS_SndFreeAlarm
@L_020312ec:
    ldr r0, [r6, #4]
    cmp r0, #1
    bne @L_0203130c
    mov r0, #0
    mov r1, r0
    mov r2, r0
    mov r3, r0
    bl SND_SetOutputSelector
@L_0203130c:
    str r4, [r6]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0203131c(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, =data_020c2da8
    ldr r0, [r3]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, [r3, #0x2c]
    cmp r1, #0
    movge r0, #1
    movge r2, r0, lsl r1
    ldr r0, [r3, #0x24]
    ldr r1, [r3, #0x28]
    movlt r2, #0
    mov r3, #0
    bl SND_StopTimer
    bl SND_GetCurrentCommandTag
    mov r4, r0
    mov r0, #1
    bl func_0200a550
    mov r0, r4
    bl SND_WaitForCommandProc
    ldmia sp!, {r4, pc}
}

asm void func_02031374(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_020c2da8
    ldr r0, [r4]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r5, #0
    ldr r1, [r4, #0xc]
    ldr r2, [r4, #0x14]
    mov r0, r5
    str r5, [r4, #0x1c]
    bl func_0200919c
    ldr r1, [r4, #0x10]
    ldr r2, [r4, #0x14]
    mov r0, r5
    bl func_0200919c
    ldr r0, [r4, #0xc]
    ldr r1, [r4, #0x14]
    bl DC_FlushRange
    ldr r0, [r4, #0x10]
    ldr r1, [r4, #0x14]
    bl DC_FlushRange
    ldr r1, [r4, #0x2c]
    mov r3, #0
    cmp r1, #0
    movge r0, #1
    movge r5, r0, lsl r1
    ldr r0, [r4, #0x24]
    ldr r1, [r4, #0x28]
    mov r2, r5
    bl SND_StartTimer
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020313f4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, r1
    mov r0, r4
    mov r1, r5
    mov r2, #0x30
    mov r6, #0
    bl MIi_CpuCopy32
    ldr r0, [r5, #0x18]
    mov r2, #0
    mov r1, r6
    cmp r0, #0
    addne r1, r4, r0
    ldr r0, [r5, #0x20]
    str r1, [r5, #0x98]
    mov r1, #0
    cmp r0, #0
    addne r1, r4, r0
    ldr r0, [r5, #0x10]
    str r1, [r5, #0x90]
    cmp r0, #0
    moveq r0, #0
    addne r0, r4, r0
    ldr r1, [r5, #0x90]
    str r2, [r5, #0x9c]
    str r0, [r5, #0x94]
    ldr r0, [r1, #8]
    cmp r0, #0
    bls @L_02031498
@L_02031468:
    add r0, r1, #0xc
    add r1, r0, r2, lsl #4
    ldr r0, [r1]
    add r2, r2, #1
    cmp r0, #0
    moveq r0, r6
    addne r0, r4, r0
    str r0, [r1, #8]
    ldr r1, [r5, #0x90]
    ldr r0, [r1, #8]
    cmp r2, r0
    blo @L_02031468
@L_02031498:
    ldr r0, =data_020c2dfc
    str r6, [r5, #0x30]
    str r5, [r0]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020314ac(void)
{
    ldr r1, =data_020c2dfc
    ldr r2, [r1]
    str r0, [r1]
    mov r0, r2
    bx lr
}

asm void func_020314c4(void)
{
    ldr r0, =data_020c2dfc
    ldr r0, [r0]
    bx lr
}

asm void func_020314d4(void)
{
    ldr r1, =data_020c2dfc
    ldr r3, [r1]
    ldr r2, [r3, #0x98]
    ldr r1, [r2, #0xc]
    cmp r1, #0
    moveq r2, #0
    addne r2, r2, r1
    cmp r2, #0
    moveq r0, #0
    bxeq lr
    cmp r0, #0
    movlt r0, #0
    bxlt lr
    ldr r1, [r2]
    cmp r0, r1
    movhs r0, #0
    bxhs lr
    add r0, r2, r0, lsl #2
    ldr r1, [r0, #4]
    ldr r0, [r3, #0x98]
    cmp r1, #0
    moveq r0, #0
    addne r0, r0, r1
    bx lr
}

asm void func_02031538(void)
{
    ldr r1, =data_020c2dfc
    ldr r3, [r1]
    ldr r2, [r3, #0x98]
    ldr r1, [r2, #0x10]
    cmp r1, #0
    moveq r2, #0
    addne r2, r2, r1
    cmp r2, #0
    moveq r0, #0
    bxeq lr
    cmp r0, #0
    movlt r0, #0
    bxlt lr
    ldr r1, [r2]
    cmp r0, r1
    movhs r0, #0
    bxhs lr
    add r0, r2, r0, lsl #2
    ldr r1, [r0, #4]
    ldr r0, [r3, #0x98]
    cmp r1, #0
    moveq r0, #0
    addne r0, r0, r1
    bx lr
}

asm void func_0203159c(void)
{
    ldr r1, =data_020c2dfc
    ldr r3, [r1]
    ldr r2, [r3, #0x98]
    ldr r1, [r2, #0x14]
    cmp r1, #0
    moveq r2, #0
    addne r2, r2, r1
    cmp r2, #0
    moveq r0, #0
    bxeq lr
    cmp r0, #0
    movlt r0, #0
    bxlt lr
    ldr r1, [r2]
    cmp r0, r1
    movhs r0, #0
    bxhs lr
    add r0, r2, r0, lsl #2
    ldr r1, [r0, #4]
    ldr r0, [r3, #0x98]
    cmp r1, #0
    moveq r0, #0
    addne r0, r0, r1
    bx lr
}

asm void func_02031600(void)
{
    ldr r1, =data_020c2dfc
    ldr r3, [r1]
    ldr r2, [r3, #0x98]
    ldr r1, [r2, #0x18]
    cmp r1, #0
    moveq r2, #0
    addne r2, r2, r1
    cmp r2, #0
    moveq r0, #0
    bxeq lr
    cmp r0, #0
    movlt r0, #0
    bxlt lr
    ldr r1, [r2]
    cmp r0, r1
    movhs r0, #0
    bxhs lr
    add r0, r2, r0, lsl #2
    ldr r1, [r0, #4]
    ldr r0, [r3, #0x98]
    cmp r1, #0
    moveq r0, #0
    addne r0, r0, r1
    bx lr
}

asm void func_02031664(void)
{
    ldr r1, =data_020c2dfc
    ldr r1, [r1]
    ldr r2, [r1, #0x90]
    ldr r1, [r2, #8]
    cmp r0, r1
    movhs r0, #0
    addlo r0, r2, r0, lsl #4
    ldrlo r0, [r0, #0x10]
    bx lr
}

asm void func_0203168c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r4, =data_020c2dfc
    mov r9, r2
    ldr r7, [r4]
    mov r10, r1
    ldr r2, [r7, #0x90]
    mov r8, r3
    ldr r1, [r2, #8]
    cmp r0, r1
    mvnhs r0, #0
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, [r7, #0x9c]
    add r1, r2, #0xc
    cmp r5, #0
    moveq r5, r9
    add r11, r1, r0, lsl #4
    cmp r9, #0
    mov r4, #0
    ble @L_02031748
@L_020316d8:
    ldr r0, [r11, #4]
    sub r6, r9, r4
    cmp r6, r5
    movgt r6, r5
    sub r0, r0, r8
    cmp r6, r0
    movhi r6, r0
    cmp r6, #0
    beq @L_02031748
    ldr r1, [r11]
    mov r2, #0
    add r0, r7, #0x34
    add r1, r1, r8
    bl FS_SeekFile
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r10
    mov r2, r6
    add r0, r7, #0x34
    bl FS_ReadFile
    cmp r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r4, r4, r0
    cmp r4, r9
    add r8, r8, r0
    add r10, r10, r0
    blt @L_020316d8
@L_02031748:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02031754(void)
{
    ldr r1, =data_020c2dfc
    ldr r1, [r1]
    ldr r2, [r1, #0x90]
    ldr r1, [r2, #8]
    cmp r0, r1
    movhs r0, #0
    addlo r0, r2, r0, lsl #4
    ldrlo r0, [r0, #0x14]
    bx lr
}

asm void func_0203177c(void)
{
    ldr r2, =data_020c2dfc
    ldr r2, [r2]
    ldr r2, [r2, #0x90]
    add r0, r2, r0, lsl #4
    str r1, [r0, #0x14]
    bx lr
}

asm void func_02031798(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    add r2, r0, #3
    add r0, r0, r1
    bic r6, r2, #3
    cmp r6, r0
    movhi r0, #0
    ldmhiia sp!, {r4, r5, r6, pc}
    sub r1, r0, r6
    cmp r1, #0x10
    movlo r0, #0
    ldmloia sp!, {r4, r5, r6, pc}
    mov r5, #0
    mov r2, r5
    add r0, r6, #0x10
    sub r1, r1, #0x10
    bl NNS_FndCreateFrmHeapEx
    movs r4, r0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r4
    bl InitHeap
    cmp r0, #0
    movne r0, r6
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r4
    bl func_020331ac
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}
