// (asm for now)

void func_02031538(void);
void func_02031754(void);
void func_0203159c(void);
void func_0200abcc(void);
void func_02031664(void);
void NNS_SndHeapAlloc(void);
void func_0203168c(void);
void DC_StoreRange(void);
void func_020314c4(void);
void func_0203177c(void);
extern char data_020c2e00[];
extern char data_020c2e00_b[];
void MI_CpuCopy8(void);
void MI_CpuFill8(void);
void OS_DisableInterrupts(void);
void func_020314ac(void);
void OS_RestoreInterrupts(void);
void SND_InvalidateBankData(void);
void func_0200ac9c(void);
void SND_InvalidateWaveData(void);
void SND_DestroyWaveArc(void);
void SND_GetWaveDataAddress(void);
void SND_SetWaveDataAddress(void);
void func_0200af48(void);
void func_0200ad7c(void);
void func_0200ad9c(void);
void func_02031600(void);
void NNS_SndPlayerSetPlayableSeqCount(void);
void NNS_SndPlayerSetAllocatableChannel(void);
void func_02030828(void);

asm void NNSi_SndArcLoadBank(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r10, r1
    mov r9, r2
    mov r11, r3
    bl func_02031538
    movs r5, r0
    addeq sp, sp, #8
    moveq r0, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    tst r10, #2
    ldr r0, [r5]
    beq @L_02031a3c
    mov r1, r9
    mov r2, r11
    bl func_02031c50
    movs r6, r0
    bne @L_02031a44
    add sp, sp, #8
    mov r0, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02031a3c:
    bl func_02031754
    mov r6, r0
@L_02031a44:
    and r8, r10, #4
    mov r7, #0
@L_02031a4c:
    add r0, r5, r7, lsl #1
    ldrh r0, [r0, #4]
    ldr r1, =0xffff
    cmp r0, r1
    beq @L_02031b00
    bl func_0203159c
    movs r4, r0
    addeq sp, sp, #8
    moveq r0, #5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, sp, #4
    str r0, [sp]
    add r0, r5, r7, lsl #1
    ldrh r0, [r0, #4]
    mov r1, r10
    mov r2, r9
    mov r3, r11
    bl func_02031b28
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4]
    mov r0, r0, lsr #0x18
    tst r0, #1
    cmpne r8, #0
    beq @L_02031ae4
    str r9, [sp]
    ldr r1, [r4]
    ldr r0, [sp, #4]
    mov r3, r1, lsl #8
    mov r1, r6
    mov r2, r7
    mov r3, r3, lsr #8
    bl func_02032038
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #9
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02031ae4:
    cmp r6, #0
    ldrne r2, [sp, #4]
    cmpne r2, #0
    beq @L_02031b00
    mov r0, r6
    mov r1, r7
    bl func_0200abcc
@L_02031b00:
    add r7, r7, #1
    cmp r7, #4
    blt @L_02031a4c
    ldr r0, [sp, #0x30]
    cmp r0, #0
    strne r6, [r0]
    mov r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02031b28(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl func_0203159c
    cmp r0, #0
    moveq r0, #5
    ldmeqia sp!, {r4, r5, r6, pc}
    tst r6, #4
    ldr r0, [r0]
    beq @L_02031b8c
    mov r1, r0, lsr #0x18
    mov r0, r0, lsl #8
    tst r1, #1
    mov r1, r5
    mov r2, r4
    mov r0, r0, lsr #8
    beq @L_02031b78
    bl func_02031d28
    b @L_02031b7c
@L_02031b78:
    bl func_02031cbc
@L_02031b7c:
    cmp r0, #0
    bne @L_02031b98
    mov r0, #9
    ldmia sp!, {r4, r5, r6, pc}
@L_02031b8c:
    mov r0, r0, lsl #8
    mov r0, r0, lsr #8
    bl func_02031754
@L_02031b98:
    ldr r1, [sp, #0x10]
    cmp r1, #0
    strne r0, [r1]
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02031bac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r8, r0
    mov r7, r1
    mov r5, r2
    mov r4, r3
    bl func_02031664
    movs r6, r0
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r0, [sp, #0x20]
    cmp r0, #0
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r2, r7
    mov r3, r5
    add r1, r6, #0x20
    str r4, [sp]
    bl NNS_SndHeapAlloc
    movs r5, r0
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r4, #0
    mov r0, r8
    mov r1, r5
    mov r2, r6
    mov r3, r4
    bl func_0203168c
    cmp r6, r0
    addne sp, sp, #4
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r5
    mov r1, r6
    bl DC_StoreRange
    mov r0, r5
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void func_02031c50(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_02031754
    movs r4, r0
    bne @L_02031cb0
    cmp r5, #0
    moveq r2, #0
    beq @L_02031c80
    bl func_020314c4
    mov r2, r0
@L_02031c80:
    ldr r1, =func_02031ea8
    mov r0, r7
    mov r3, r7
    str r6, [sp]
    bl func_02031bac
    mov r4, r0
    cmp r5, #0
    cmpne r4, #0
    beq @L_02031cb0
    mov r0, r7
    mov r1, r4
    bl func_0203177c
@L_02031cb0:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02031cbc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_02031754
    movs r4, r0
    bne @L_02031d1c
    cmp r5, #0
    moveq r2, #0
    beq @L_02031cec
    bl func_020314c4
    mov r2, r0
@L_02031cec:
    ldr r1, =func_02031ed8
    mov r0, r7
    mov r3, r7
    str r6, [sp]
    bl func_02031bac
    mov r4, r0
    cmp r5, #0
    cmpne r4, #0
    beq @L_02031d1c
    mov r0, r7
    mov r1, r4
    bl func_0203177c
@L_02031d1c:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02031d28(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r4, r0
    mov r10, r1
    mov r9, r2
    bl func_02031754
    movs r7, r0
    bne @L_02031e38
    mov r5, #0
    ldr r1, =data_020c2e00
    mov r0, r4
    mov r3, r5
    mov r2, #0x3c
    bl func_0203168c
    cmp r0, #0x3c
    addne sp, sp, #4
    movne r0, r5
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c2e00_b
    cmp r10, #0
    ldr r0, [r0, #0x38]
    addeq sp, sp, #4
    mov r8, r0, lsl #2
    mov r6, r8, lsl #1
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r9, #0
    beq @L_02031da0
    bl func_020314c4
    mov r5, r0
@L_02031da0:
    ldr r2, =WaveArcTableDisposeCallback
    mov r0, r10
    mov r3, r5
    add r1, r6, #0x5c
    str r4, [sp]
    bl NNS_SndHeapAlloc
    movs r7, r0
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r5, #0
    mov r0, r4
    mov r1, r7
    mov r3, r5
    add r2, r8, #0x3c
    bl func_0203168c
    add r1, r8, #0x3c
    cmp r0, r1
    addne sp, sp, #4
    movne r0, r5
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r7, #0x38]
    add r0, r7, #0x3c
    mov r2, r8
    add r1, r0, r1, lsl #2
    bl MI_CpuCopy8
    mov r1, r5
    mov r2, r8
    add r0, r7, #0x3c
    bl MI_CpuFill8
    mov r0, r7
    add r1, r6, #0x3c
    bl DC_StoreRange
    cmp r9, #0
    beq @L_02031e38
    mov r0, r4
    mov r1, r7
    bl func_0203177c
@L_02031e38:
    mov r0, r7
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void DisposeCallback(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r4, r1
    mov r7, r0
    mov r6, r2
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl OS_DisableInterrupts
    mov r5, r0
    mov r0, r4
    bl func_020314ac
    mov r4, r0
    mov r0, r6
    bl func_02031754
    cmp r7, r0
    bne @L_02031e94
    mov r0, r6
    mov r1, #0
    bl func_0203177c
@L_02031e94:
    mov r0, r4
    bl func_020314ac
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02031ea8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r1, r2
    mov r5, r0
    mov r2, r3
    bl DisposeCallback
    mov r0, r5
    add r1, r5, r4
    bl SND_InvalidateBankData
    mov r0, r5
    bl func_0200ac9c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02031ed8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r1, r2
    mov r5, r0
    mov r2, r3
    bl DisposeCallback
    mov r0, r5
    add r1, r5, r4
    bl SND_InvalidateWaveData
    mov r0, r5
    bl SND_DestroyWaveArc
    ldmia sp!, {r3, r4, r5, pc}
}

asm void WaveArcTableDisposeCallback(void)
{
    stmdb sp!, {r4, lr}
    mov r1, r2
    mov r4, r0
    mov r2, r3
    bl DisposeCallback
    mov r0, r4
    bl SND_DestroyWaveArc
    ldmia sp!, {r4, pc}
}

asm void SingleWaveDisposeCallback(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r2
    mov r7, r0
    mov r4, r3
    mov r6, r1
    mov r0, r5
    mov r1, r4
    bl SND_GetWaveDataAddress
    cmp r7, r0
    bne @L_02031f60
    mov r0, r5
    mov r1, r4
    mov r2, #0
    bl SND_SetWaveDataAddress
@L_02031f60:
    mov r0, r7
    add r1, r7, r6
    bl SND_InvalidateWaveData
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void LoadSingleWave(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl SND_GetWaveDataAddress
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r8
    bl func_0200af48
    ldr r1, [r8, #0x38]
    sub r0, r0, #1
    add r1, r1, r7
    add r1, r8, r1, lsl #2
    cmp r7, r0
    ldrlo r0, [r1, #0x40]
    ldr r4, [r1, #0x3c]
    ldrhs r0, [r8, #8]
    cmp r5, #0
    sub r9, r0, r4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r2, =SingleWaveDisposeCallback
    mov r0, r5
    mov r3, r8
    add r1, r9, #0x20
    str r7, [sp]
    bl NNS_SndHeapAlloc
    movs r5, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6
    mov r1, r5
    mov r2, r9
    mov r3, r4
    bl func_0203168c
    cmp r9, r0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r5
    mov r1, r9
    bl DC_StoreRange
    mov r0, r8
    mov r1, r7
    mov r2, r5
    bl SND_SetWaveDataAddress
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02032038(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x1c
    mov r10, r0
    add r0, sp, #0
    mov r9, r1
    mov r8, r2
    mov r7, r3
    ldr r6, [sp, #0x40]
    bl func_0200ad7c
    ldr r1, [sp]
    ldr r0, [sp, #4]
    str r1, [sp, #8]
    str r0, [sp, #0xc]
    cmp r9, #0
    add r5, sp, #8
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    add r4, sp, #0x10
    mov r0, r9
    mov r1, r4
    mov r2, r5
    bl func_0200ad9c
    cmp r0, #0
    beq @L_020320ec
@L_0203209c:
    ldrb r0, [sp, #0x10]
    cmp r0, #1
    ldreqh r0, [sp, #0x14]
    cmpeq r8, r0
    bne @L_020320d4
    ldrh r1, [sp, #0x12]
    mov r0, r10
    mov r2, r7
    mov r3, r6
    bl LoadSingleWave
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020320d4:
    mov r0, r9
    mov r1, r4
    mov r2, r5
    bl func_0200ad9c
    cmp r0, #0
    bne @L_0203209c
@L_020320ec:
    mov r0, #1
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_020320f8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    bl func_020314c4
    mov r6, #0
    mov r5, r6
@L_0203210c:
    mov r0, r6
    bl func_02031600
    movs r7, r0
    beq @L_0203217c
    ldrb r1, [r7]
    mov r0, r6
    bl NNS_SndPlayerSetPlayableSeqCount
    ldrh r1, [r7, #2]
    mov r0, r6
    bl NNS_SndPlayerSetAllocatableChannel
    ldr r0, [r7, #4]
    cmp r0, #0
    cmpne r4, #0
    ldrneb r0, [r7]
    movne r8, r5
    cmpne r0, #0
    ble @L_0203217c
@L_02032150:
    ldr r2, [r7, #4]
    mov r0, r6
    mov r1, r4
    bl func_02030828
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r0, [r7]
    add r8, r8, #1
    cmp r8, r0
    blt @L_02032150
@L_0203217c:
    add r6, r6, #1
    cmp r6, #0x20
    blt @L_0203210c
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
