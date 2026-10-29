// (asm for now)

void SNDi_IncAlarmId(void);
void SNDi_SetAlarmHandler(void);
void SND_AllocCommand(void);
void SND_PushCommand(void);

asm void SND_StopSeq(void)
{
    stmdb sp!, {r3, lr}
    mov r2, #0
    mov r1, r0
    mov r3, r2
    mov r0, #1
    str r2, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_PrepareSeq(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r12, r2
    str r3, [sp]
    mov r1, r0
    mov r2, lr
    mov r3, r12
    mov r0, #2
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_StartPreparedSeq(void)
{
    stmdb sp!, {r3, lr}
    mov r2, #0
    mov r1, r0
    mov r3, r2
    mov r0, #3
    str r2, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_SetPlayerVolume(void)
{
    ldr r12, =SNDi_SetPlayerParam
    mov r2, r1
    mov r1, #6
    mov r3, #2
    bx r12
}

asm void SND_SetPlayerChannelPriority(void)
{
    ldr r12, =SNDi_SetPlayerParam
    mov r2, r1
    mov r1, #4
    mov r3, #1
    bx r12
}

asm void SND_SetTrackPitch(void)
{
    stmdb sp!, {r3, lr}
    mov r3, r2
    mov r12, #2
    mov r2, #0xc
    str r12, [sp]
    bl SNDi_SetTrackParam
    ldmia sp!, {r3, pc}
}

asm void SND_SetTrackAllocatableChannel(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r3, r2
    mov r12, #0
    mov r1, r0
    mov r2, lr
    mov r0, #9
    str r12, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_StartTimer(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r12, r2
    str r3, [sp]
    mov r1, r0
    mov r2, lr
    mov r3, r12
    mov r0, #0xc
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_StopTimer(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r2
    mov r9, r0
    mov r8, r1
    mov r6, r3
    mov r5, r7
    mov r4, #0
    b @L_02009f68
@L_02009f50:
    tst r5, #1
    beq @L_02009f60
    mov r0, r4
    bl SNDi_IncAlarmId
@L_02009f60:
    add r4, r4, #1
    mov r5, r5, lsr #1
@L_02009f68:
    cmp r4, #8
    bge @L_02009f78
    cmp r5, #0
    bne @L_02009f50
@L_02009f78:
    mov r1, r9
    mov r2, r8
    mov r3, r7
    mov r0, #0xd
    str r6, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void SND_SetupCapture(void)
{
    stmdb sp!, {r3, lr}
    mov r1, r1, lsl #0x1e
    orr r0, r1, r0, lsl #31
    ldr r12, [sp, #8]
    mov r1, r2
    orr r0, r0, r12, lsl #29
    ldr r2, [sp, #0xc]
    mov lr, #0
    orr r0, r0, r2, lsl #28
    ldr r12, [sp, #0x10]
    mov r2, r3
    orr r3, r0, r12, lsl #27
    mov r0, #0x11
    str lr, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_SetupAlarm(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r4, r2
    mov r5, r1
    ldr r2, [sp, #0x18]
    mov r6, r0
    mov r1, r3
    bl SNDi_SetAlarmHandler
    str r0, [sp]
    mov r1, r6
    mov r2, r5
    mov r3, r4
    mov r0, #0x12
    bl PushCommand_impl
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void SND_LockChannel(void)
{
    stmdb sp!, {r3, lr}
    mov r2, r1
    mov r3, #0
    mov r1, r0
    mov r0, #0x1a
    str r3, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_UnlockChannel(void)
{
    stmdb sp!, {r3, lr}
    mov r2, r1
    mov r3, #0
    mov r1, r0
    mov r0, #0x1b
    str r3, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_SetChannelTimer(void)
{
    stmdb sp!, {r3, lr}
    mov r2, r1
    mov r3, #0
    mov r1, r0
    mov r0, #0x13
    str r3, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_SetChannelVolume(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r3, r2
    mov r12, #0
    mov r1, r0
    mov r2, lr
    mov r0, #0x14
    str r12, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_SetChannelPan(void)
{
    stmdb sp!, {r3, lr}
    mov r2, r1
    mov r3, #0
    mov r1, r0
    mov r0, #0x15
    str r3, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_SetupChannelPcm(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r12, [sp, #0x1c]
    mov r1, r1, lsl #0x18
    orr r4, r1, r3, lsl #26
    ldr r5, [sp, #0x24]
    mov r1, r12, lsl #0x16
    ldr r3, [sp, #0x18]
    ldr r12, [sp, #0x10]
    orr r4, r4, r5, lsl #16
    orr r4, r12, r4
    ldr lr, [sp, #0x20]
    orr r3, r1, r3, lsl #24
    ldr r12, [sp, #0x14]
    orr r1, r0, lr, lsl #16
    orr r3, r12, r3
    mov r0, #0xe
    str r4, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, r4, r5, pc}
}

asm void SND_SetupChannelPsg(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [sp, #8]
    ldr r12, [sp, #0xc]
    str r1, [sp]
    orr r2, r2, r3, lsl #8
    mov r1, r0
    orr r3, r12, lr, lsl #8
    mov r0, #0xf
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_SetupChannelNoise(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r12, [sp, #0x10]
    mov r4, r1
    mov lr, #0
    mov r1, r0
    orr r2, r4, r2, lsl #8
    orr r3, r12, r3, lsl #8
    mov r0, #0x10
    str lr, [sp]
    bl PushCommand_impl
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void SND_InvalidateBankData(void)
{
    stmdb sp!, {r3, lr}
    mov r2, r1
    mov r3, #0
    mov r1, r0
    mov r0, #0x1f
    str r3, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_InvalidateWaveData(void)
{
    stmdb sp!, {r3, lr}
    mov r2, r1
    mov r3, #0
    mov r1, r0
    mov r0, #0x20
    str r3, [sp]
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SND_SetOutputSelector(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r12, r2
    str r3, [sp]
    mov r1, r0
    mov r2, lr
    mov r3, r12
    mov r0, #0x19
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SNDi_SetPlayerParam(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r12, r2
    str r3, [sp]
    mov r1, r0
    mov r2, lr
    mov r3, r12
    mov r0, #6
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void SNDi_SetTrackParam(void)
{
    stmdb sp!, {r3, lr}
    ldr r12, [sp, #8]
    mov lr, r2
    str r3, [sp]
    mov r2, r1
    orr r1, r0, r12, lsl #24
    mov r3, lr
    mov r0, #7
    bl PushCommand_impl
    ldmia sp!, {r3, pc}
}

asm void PushCommand_impl(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r0, #1
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl SND_AllocCommand
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    str r7, [r0, #4]
    str r6, [r0, #8]
    str r5, [r0, #0xc]
    ldr r1, [sp, #0x18]
    str r4, [r0, #0x10]
    str r1, [r0, #0x14]
    bl SND_PushCommand
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
