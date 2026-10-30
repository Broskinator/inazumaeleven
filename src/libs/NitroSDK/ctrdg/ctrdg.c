// (asm for now)

void CTRDGi_InitCommon(void);
void func_020152f0(void);
void CTRDGi_ChangeLatestAccessCycle(void);
void CTRDGi_RestoreAccessCycle(void);
void func_02015470(void);
void CTRDGi_UnlockByProcessor(void);
void CTRDGi_SendtoPxi(void);
void func_02015540(void);
void func_020155d0(void);
void func_02015680(void);
void func_02015864(void);

extern char data_020be8a4[];
void CpuSet(void);
void OS_GetLockID(void);
extern char data_020be8a0[];
void func_02015294(void);
void OS_DisableInterrupts(void);
void func_020058a8(void);
void func_020057f0(void);
void OS_RestoreInterrupts(void);
void WaitByLoop(void);
void func_020057e4(void);
void func_0200b138(void);
void func_0200763c(void);
void DC_FlushAll(void);
void func_02006d84(void);
void func_0200760c(void);
void func_0200762c(void);
void func_02007660(void);
void func_020075fc(void);
void func_0200761c(void);
void func_02007650(void);
extern char data_020be8a8[];
void func_0200afc0(void);
void func_0200b114(void);
void func_0200b0c8(void);
void CTRDGi_PulledOutCallback(void);
extern char data_020be9a0[];
void CTRDGi_InitTaskThread(void);
void func_020158fc(void);
void OS_SetIrqMask(void);
extern char data_020be8e0[];
void DC_InvalidateRange(void);
void func_02008a08(void);
extern char data_020be8e4[];
void MIi_CpuCopy32(void);
void func_0200878c(void);

asm void CTRDGi_InitCommon(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020be8a4
    mov r3, #0
    ldr r2, =0x5000001
    add r0, sp, #0
    str r3, [sp]
    bl CpuSet
    bl OS_GetLockID
    ldr r1, =data_020be8a0
    strh r0, [r1, #6]
    ldmia sp!, {r3, pc}
}

asm void func_020152f0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    mov r4, #1
    bl func_02015294
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
    ldr r0, =data_020be8a0
    add r1, sp, #8
    ldrh r0, [r0, #6]
    bl func_02015470
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
    ldr r0, =data_020be8a0
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

asm void func_02015470(void)
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
    bl func_020058a8
    ands r0, r0, #0x40
    str r0, [r6]
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    bl func_020057f0
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
    bl func_020057e4
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
    bl func_0200b138
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
    bl func_0200b138
    cmp r0, #0
    bne @L_0201551c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02015540(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    ldr r1, =data_020be8a0
    mov r5, r0
    str r4, [r1]
    bl func_02015294
    cmp r0, #0
    beq @L_020155c0
    mov r1, #0x1000
    cmp r4, #0
    moveq r1, #0x5000
    mov r0, #0xf000
    bl func_0200763c
    cmp r4, #0
    mov r4, #8
    beq @L_020155a8
    bl DC_FlushAll
    bl func_02006d84
    mov r0, r4
    bl func_0200760c
    mov r0, r4
    bl func_0200762c
    mov r0, r4
    bl func_02007660
    b @L_020155c0
@L_020155a8:
    mov r0, r4
    bl func_020075fc
    mov r0, r4
    bl func_0200761c
    mov r0, r4
    bl func_02007650
@L_020155c0:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020155d0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_020be8a8
    ldr r0, [r4, #8]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, #1
    str r0, [r4, #8]
    bl CTRDGi_InitCommon
    mov r0, #0
    str r0, [r4, #0xc]
    bl func_0200afc0
    mov r5, #0xd
    mov r4, #1
@L_02015604:
    mov r0, r5
    mov r1, r4
    bl func_0200b114
    cmp r0, #0
    beq @L_02015604
    ldr r1, =func_02015864
    mov r0, r5
    bl func_0200b0c8
    bl func_02015680
    mov r4, #0
    mov r0, r5
    mov r1, r4
    bl func_0200b0c8
    ldr r1, =CTRDGi_PulledOutCallback
    mov r0, r5
    bl func_0200b0c8
    ldr r1, =data_020be8a8
    ldr r0, =data_020be9a0
    str r4, [r1, #0x18]
    bl CTRDGi_InitTaskThread
    ldr r1, =func_020158fc
    mov r0, #0x11
    bl func_0200b0c8
    mov r0, r4
    bl func_02015540
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02015680(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r0, =data_020be8a8
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
    ldr r4, =data_020be8a4
    mov r8, r0
    strh r7, [r1]
    add r11, sp, #0xc
    ldrh r0, [r4, #2]
    mov r1, r11
    bl func_02015470
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
    bl func_02008a08
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
    bl func_020152f0
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
    ldr r4, =data_020be8a4
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

asm void func_02015864(void)
{
    stmdb sp!, {r3, lr}
    and r0, r1, #0x3f
    cmp r0, #1
    ldreq r0, =data_020be8a4
    moveq r1, #1
    streqh r1, [r0]
    ldmeqia sp!, {r3, pc}
    bl func_0200878c
    ldmia sp!, {r3, pc}
}
