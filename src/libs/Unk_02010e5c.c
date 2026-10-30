// (asm for now)

void func_02010e5c(void);
void func_02010ed4(void);
void func_02010f54(void);
void func_02010f6c(void);
void func_02010f8c(void);
void func_02010fa8(void);
void func_02010fd0(void);
void func_0201101c(void);
void func_0201108c(void);
void func_02011100(void);
void func_0201114c(void);
void func_020111c4(void);
void func_02011210(void);
void func_0201124c(void);
void func_02011268(void);
void func_020112c4(void);
void func_020112f8(void);
void func_02011448(void);
void func_020115e0(void);
void func_02011928(void);
void func_02011978(void);
void CARDi_RequestStreamCommand(void);
void CARD_IdentifyBackup(void);
void func_02011a74(void);
void CARD_WaitBackupAsync(void);
void CARD_TryWaitBackupAsync(void);
void func_02011aa0(void);
void func_02011b20(void);
void func_02011b54(void);
void func_02011bac(void);
void func_02011c14(void);
void func_02011c74(void);
void func_02011cc0(void);
void func_02011ddc(void);
void func_02011e7c(void);
void func_02011ef8(void);
void func_02011f28(void);
void func_02011fdc(void);
void func_02012028(void);
void func_020121b0(void);
void func_02012228(void);
void func_02012234(void);
void func_02012240(void);
void func_02012274(void);
void func_02012304(void);
void func_02012314(void);
void func_0201234c(void);

extern char data_020bd460[];
void OS_DisableInterrupts(void);
void func_0200878c(void);
void OS_SleepThread(void);
void OS_RestoreInterrupts(void);
void OS_WakeupThread(void);
void func_0200848c(void);
extern char data_020bd400[];
void MIi_CpuClearFast(void);
void DC_FlushRange(void);
void func_0200b0c8(void);
extern char data_020bd980[];
extern char data_020bd980_b[];
void func_0200628c(void);
void OS_WakeupThreadDirect(void);
extern char data_020a43c8[];
void func_02006d90(void);
void IC_InvalidateRange(void);
void DC_FlushAll(void);
void DC_StoreRange(void);
void DC_InvalidateRange(void);
void func_02006d84(void);
void func_0200b114(void);
void func_02008450(void);
extern char data_020bb120[];
void func_0200b138(void);
void func_02000b64(void);
extern char data_020bd9a0[];
void MI_CpuCopy8(void);
void MI_CpuFill8(void);
void CARD_CheckEnabled(void);
extern char data_020bb110[];
void func_02007c20(void);
void OS_Sleep(void);
extern char data_020aae0c[];
extern char data_020bdb60[];
extern char data_020bdaa0[];
void OS_DisableIrqMask(void);
void OS_ResetRequestIrqMask(void);
void OS_SetIrqFunction(void);
void OS_EnableIrqMask(void);
void OS_IrqHandler(void);
void func_020075c8(void);
extern char data_020bdab0[];
void func_02010d8c(void);
void OS_GetLockID(void);
void func_02010d98(void);
extern char data_020bdacc[];
void CARD_UnlockRom(void);
void func_02005908(void);
void func_0200afc0(void);
extern char data_020bdd60[];
void func_0200f8b0(void);
void CARDi_SendtoPxi(void);
void func_02008d78(void);

asm void func_02010e5c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r5, =data_020bd460
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
    bl func_0200878c
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

asm void func_02010ed4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, =data_020bd460
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
    bl func_0200878c
    b @L_02010f44
@L_02010f0c:
    ldr r0, [r4, #0x24]
    cmp r0, r6
    beq @L_02010f1c
    bl func_0200878c
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

asm void func_02010f54(void)
{
    stmdb sp!, {r3, lr}
    bl func_0200848c
    cmp r0, #1
    moveq r0, #7
    movne r0, #3
    ldmia sp!, {r3, pc}
}

asm void func_02010f6c(void)
{
    mov r1, #0
    ldr r0, =data_020bd460
    ldr r12, =func_0201114c
    mov r2, r1
    mov r3, r1
    bx r12
}

asm void func_02010f8c(void)
{
    ldr r0, =data_020bd460
    ldr r0, [r0, #4]
    tst r0, #4
    moveq r0, #1
    movne r0, #0
    bx lr
}

asm void func_02010fa8(void)
{
    ldr r2, =data_020bd460
    mov r0, #0
    mvn r1, #2
    str r1, [r2, #0x14]
    str r0, [r2, #0x18]
    str r0, [r2, #0x24]
    str r0, [r2, #0x20]
    str r0, [r2, #0x1c]
    bx lr
}

asm void func_02010fd0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =data_020bd400
    ldr r3, =data_020bd460
    mov r4, #0x60
    mov r1, r5
    mov r2, r4
    mov r0, #0
    str r5, [r3]
    bl MIi_CpuClearFast
    mov r0, r5
    mov r1, r4
    bl DC_FlushRange
    ldr r1, =func_020112c4
    mov r0, #0xb
    bl func_0200b0c8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0201101c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    mov r4, r1
    bl OS_DisableInterrupts
    ldr r1, =data_020bd980
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

asm void func_0201108c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    movs r5, r1
    mov r6, r0
    ldr r4, =data_020bd460
    beq @L_020110c8
    ldr r1, [r4, #8]
    add r0, r4, #0x28
    bl func_0200628c
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
    bl func_020111c4
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

asm void func_02011100(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, #0
    ldr r6, =data_020bd460
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
    bl func_0201108c
    b @L_02011110
}

asm void func_0201114c(void)
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

asm void func_020111c4(void)
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

asm void func_02011210(void)
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
    bl func_0200878c
@L_02011240:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_0201124c(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, r2
    blo @L_02011260
    bl func_02006d90
    ldmia sp!, {r3, pc}
@L_02011260:
    bl IC_InvalidateRange
    ldmia sp!, {r3, pc}
}

asm void func_02011268(void)
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
    bl func_02006d84
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020112c4(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0xb
    ldmneia sp!, {r3, pc}
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020bd460
    ldr r1, [r0, #4]
    bic r1, r1, #0x20
    str r1, [r0, #4]
    ldr r0, [r0, #0x51c]
    bl OS_WakeupThreadDirect
    ldmia sp!, {r3, pc}
}

asm void func_020112f8(void)
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
    bl func_0200b114
    cmp r0, #0
    bne @L_0201135c
    mov r5, #0x32
    mov r4, #0xb
@L_02011340:
    mov r0, r5
    bl func_02008450
    mov r0, r4
    mov r1, r7
    bl func_0200b114
    cmp r0, #0
    beq @L_02011340
@L_0201135c:
    mov r0, r10
    mov r1, #0
    mov r2, #1
    bl func_020112f8
@L_0201136c:
    ldr r0, [r10]
    mov r1, #0x60
    bl DC_FlushRange
    bl func_02006d84
    ldr r0, =data_020bb120
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
    bl func_0200b138
    cmp r0, #0
    blt @L_020113a0
    cmp r9, #0
    bne @L_020113dc
    ldr r8, [r10]
@L_020113c4:
    mov r0, r5
    mov r1, r8
    mov r2, r7
    bl func_0200b138
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

asm void func_02011448(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r0
    ldr r5, [r9, #0x510]
    ldr r0, =0x2000bac
    ldr r6, [r9, #0x518]
    ldr r10, [r9, #0x514]
    mov r7, #0x100
    bl func_02000b64
    cmp r5, #0xb
    bne @L_0201147c
    bl func_02011a74
    mov r7, r0
    b @L_0201148c
@L_0201147c:
    cmp r5, #0xf
    ldreq r0, =data_020bd460
    ldreq r0, [r0]
    ldreq r7, [r0, #0x20]
@L_0201148c:
    ldr r4, =data_020bd9a0
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
    bl func_02006d84
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
    bl func_020112f8
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r6, #2
    bne @L_02011590
    mov r0, r9
    mov r1, r11
    mov r2, #1
    bl func_020112f8
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

asm void func_020115e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =data_020bd460
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
    ldr r0, =data_020bd460
    mov r1, #3
    ldr r0, [r0]
    str r1, [r0]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02011928(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #1
    mov r5, r0
    mov r2, r4
    mov r1, #2
    bl func_020112f8
    ldr r0, [r5]
    mov r1, #0
    str r1, [r0, #0xc]
    ldr r1, [r5]
    ldr r2, =data_020bd9a0
    mov r0, r5
    str r2, [r1, #0x10]
    ldr r3, [r5]
    mov r2, r4
    mov r1, #6
    str r4, [r3, #0x14]
    bl func_020112f8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02011978(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, =0x2000bac
    mov r5, r1
    mov r4, r2
    bl func_02000b64
    bl CARD_CheckEnabled
    bl func_02010f54
    and r0, r6, r0
    cmp r6, r0
    beq @L_020119a8
    bl func_0200878c
@L_020119a8:
    ldr r0, =data_020bd460
    mov r2, r5
    mov r3, r4
    mov r1, #1
    bl func_0201114c
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
    bl func_02011978
    ldr r2, =data_020bd460
    ldr r1, [sp, #0x18]
    str r6, [r2, #0x4fc]
    str r5, [r2, #0x500]
    str r4, [r2, #0x504]
    str r1, [r2, #0x510]
    ldr r0, [sp, #0x1c]
    ldr r3, [sp, #0x20]
    str r0, [r2, #0x514]
    ldr r1, [sp, #0x14]
    ldr r0, =func_02011448
    str r3, [r2, #0x518]
    bl func_0201108c
    ldmia sp!, {r4, r5, r6, pc}
}

asm void CARD_IdentifyBackup(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    bne @L_02011a44
    bl func_0200878c
@L_02011a44:
    mov r4, #0
    mov r0, r4
    mov r1, r4
    mov r2, r4
    bl func_02011978
    mov r0, r5
    bl func_020115e0
    ldr r0, =func_02011928
    mov r1, r4
    bl func_0201108c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02011a74(void)
{
    ldr r0, =data_020bd460
    ldr r0, [r0]
    ldr r0, [r0, #0x1c]
    bx lr
}

asm void CARD_WaitBackupAsync(void)
{
    ldr r12, =func_02010f6c
    bx r12
}

asm void CARD_TryWaitBackupAsync(void)
{
    ldr r12, =func_02010f8c
    bx r12
}

asm void func_02011aa0(void)
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

asm void func_02011b20(void)
{
    stmdb sp!, {r3, lr}
    mov r1, r0
    mov r0, #0xb7
    bl func_02011aa0
    ldr r1, =0x2fffae0
    ldr r0, =0x40001a4
    ldr r1, [r1]
    bic r1, r1, #0x7000000
    orr r1, r1, #0xa1000000
    str r1, [r0]
    ldmia sp!, {r3, pc}
}

asm void func_02011b54(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r1, r4
    mov r0, #0xb8
    bl func_02011aa0
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

asm void func_02011bac(void)
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
    bl func_02011aa0
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

asm void func_02011c14(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl func_02011bac
    tst r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_02011c74
    bl func_02011bac
    tst r0, #0x20
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r4, =data_020bb110
    mov r5, #1
@L_02011c40:
    ldr r0, [r4]
    cmp r0, #0
    beq @L_02011c60
    bl func_02007c20
    cmp r0, #0
    beq @L_02011c60
    mov r0, r5
    bl OS_Sleep
@L_02011c60:
    bl func_02011bac
    tst r0, #0x20
    beq @L_02011c40
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02011c74(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r1, r4
    mov r0, #0xb5
    bl func_02011aa0
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

asm void func_02011cc0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r0, =data_020aae0c
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
    bl func_02011b20
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
    bl func_02011b54
    bl func_0201234c
    ldr r2, =data_020aae0c
    ldr r1, [sp]
    ldr r0, [sp, #4]
    str r1, [r2]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02011ddc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, =data_020bdaa0
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
    bl func_02011b20
    ldmia sp!, {r4, r5, r6, pc}
@L_02011e24:
    ldr r0, =data_020bd460
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
    bl func_02011b54
    bl func_0201234c
    ldr r1, [r4, #4]
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #8]
    blx r1
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02011e7c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl OS_DisableInterrupts
    ldr r2, =data_020bdaa0
    mov r4, #0x80000
    mov r5, r0
    ldr r1, =func_02011ddc
    mov r0, r4
    str r6, [r2, #8]
    bl OS_SetIrqFunction
    mov r0, r4
    bl OS_ResetRequestIrqMask
    mov r0, r4
    bl OS_EnableIrqMask
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r2, =data_020bd460
    ldr r1, =0x4100010
    ldr r0, [r2, #0x508]
    ldr r3, [r2, #0x50c]
    ldr r2, [r6, #0x10]
    ldr r12, [r3]
    mov r3, #0x200
    blx r12
    ldr r0, [r6, #0xc]
    bl func_02011b20
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02011ef8(void)
{
    stmdb sp!, {r3, lr}
    bl func_02011b54
    bl func_0201234c
    mov r0, #8
    bl func_02011c14
    ldr r0, =data_020bd460
    mov r2, #0
    ldr r1, [r0]
    str r2, [r1]
    bl func_020111c4
    ldmia sp!, {r3, pc}
}

asm void func_02011f28(void)
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
    bl func_020075c8
    add r1, r9, r7
    cmp r1, r0
    bls @L_02011fac
    bl func_020075c8
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

asm void func_02011fdc(void)
{
    stmdb sp!, {r4, lr}
    ldr r12, =data_020bdaa0
    mov r4, #0
    ldr r1, [r0, #0x500]
    ldr r2, [r0, #0x4fc]
    ldr r3, [r0, #0x504]
    ldr r12, [r12, #0xc]
    mov r0, r4
    blx r12
    bl func_02011b54
    bl func_0201234c
    mov r0, #8
    bl func_02011c14
    ldr r0, =data_020bd460
    ldr r0, [r0]
    str r4, [r0]
    ldmia sp!, {r4, pc}
}

asm void func_02012028(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    ldr r4, =data_020bd460
    bl CARD_CheckEnabled
    bl func_02010f54
    tst r0, #4
    bne @L_02012054
    bl func_0200878c
@L_02012054:
    mov r8, #1
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    mov r0, r4
    mov r1, r8
    bl func_0201114c
    mov r0, r9
    bl func_02011210
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
    ldr r8, =data_020bdaa0
    ldr r0, =func_02011ef8
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
    ldr r0, =func_02011cc0
    cmp r1, r0
    bne @L_02012164
    ldr r0, [r4, #0x508]
    mov r1, r6
    mov r3, r5
    bl func_02011f28
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
    bl func_0201124c
@L_02012120:
    ldr r0, =data_020aae0c
    ldr r0, [r0, #4]
    cmp r0, #0
    beq @L_02012140
    ldr r0, [r4, #0x500]
    ldr r1, [r4, #0x504]
    ldr r2, [r4, #0x10]
    bl func_02011268
@L_02012140:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r0, =data_020bdab0
    bl func_02011e7c
    ldr r0, [sp, #0x28]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl func_02012228
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02012164:
    ldr r0, =data_020bdaa0
    ldr r0, [r0, #4]
    cmp r0, #0
    beq @L_02012184
    ldr r0, [r4, #0x500]
    ldr r1, [r4, #0x504]
    ldr r2, [r4, #0xc]
    bl func_0201124c
@L_02012184:
    ldr r1, [sp, #0x28]
    ldr r0, =func_02011fdc
    bl func_0201108c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_020121b0(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, =func_02011cc0
    ldr r0, =data_020bdaa0
    str r1, [r0, #0xc]
    bl func_0200848c
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
    bl func_02010d98
    bl func_02010d8c
    ldr r2, [r0, #0x80]
    ldr r1, =data_020bdacc
    mov r0, #0
    mov r3, #0x88
    bl func_02011cc0
    mov r0, r4
    bl CARD_UnlockRom
    mov r0, r4
    bl func_02005908
    ldmia sp!, {r4, pc}
}

asm void func_02012228(void)
{
    ldr r12, =func_02010f6c
    bx r12
}

asm void func_02012234(void)
{
    ldr r0, =data_020bdacc
    bx lr
}

asm void func_02012240(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl func_0200afc0
    ldr r4, =data_020bdd60
    mov r5, #0
    str r5, [r4]
    ldr r1, =func_02012274
    mov r0, #0xe
    str r5, [r4, #4]
    bl func_0200b0c8
    str r5, [r4, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02012274(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    and r0, r1, #0x3f
    cmp r0, #0x11
    bne @L_020122cc
    ldr r4, =data_020bdd60
    ldr r0, [r4, #4]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r5, #1
    mov r0, r5
    str r5, [r4, #4]
    mov r1, #0
    bl func_0201101c
    ldr r0, [r4, #8]
    cmp r0, #0
    beq @L_020122bc
    blx r0
    mov r5, r0
@L_020122bc:
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_02012314
    ldmia sp!, {r3, r4, r5, pc}
@L_020122cc:
    cmp r0, #2
    bne @L_020122f8
    ldr r2, =data_020bdd60
    mov r1, #0
    ldr r3, [r2]
    mov r0, #2
    add r3, r3, #1
    str r3, [r2]
    str r1, [r2, #4]
    bl func_0201101c
    ldmia sp!, {r3, r4, r5, pc}
@L_020122f8:
    bl func_0200878c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02012304(void)
{
    ldr r0, =data_020bdd60
    ldr r0, [r0, #4]
    bx lr
}

asm void func_02012314(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =0x2ffffa8
    ldrh r0, [r0]
    and r0, r0, #0x8000
    movs r0, r0, asr #0xf
    beq @L_02012330
    bl func_0200f8b0
@L_02012330:
    mov r0, #1
    mov r1, r0
    bl CARDi_SendtoPxi
    bl func_02008d78
    bl func_0200878c
    ldmia sp!, {r3, pc}
}

asm void func_0201234c(void)
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
    bl func_02012274
    mov r0, r4
    bl OS_RestoreInterrupts
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}
