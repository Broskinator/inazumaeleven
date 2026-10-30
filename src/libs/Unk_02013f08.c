// (asm for now)

void func_02013f08(void);
void func_02013f70(void);
void func_02013fec(void);
void func_02014030(void);
void func_0201407c(void);
void func_020141b4(void);
void func_0201422c(void);
void func_020142d4(void);
void func_020143a4(void);
void func_02014414(void);
void func_02014654(void);
void func_020146a0(void);
void func_020149d0(void);
void func_02014aa8(void);
void func_02014bdc(void);
void func_02014cc0(void);
void func_02014d90(void);
void func_02014ee0(void);

void func_0200919c(void);
void func_02013ce4(void);
void func_02012844(void);
void WMi_CheckInitialized(void);
void WMi_SetCallbackTable(void);
void MIi_CpuCopy32(void);
void func_020127d4(void);
void func_020128b4(void);
void DC_InvalidateRange(void);
void DC_StoreRange(void);
void func_02012728(void);
void MI_CpuCopy8(void);
void WM_GetAID(void);
void WM_GetConnectedAIDs(void);
void MIi_CpuClearFast(void);
void func_02015aa0(void);
void func_02012e6c(void);
void MIi_CpuCopy16(void);
void OS_DisableInterrupts(void);
void OS_RestoreInterrupts(void);
void WmGetSharedDataAddress(void);
void MIi_CpuClear16(void);

asm void func_02013f08(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x18
    add r4, sp, #8
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r1, r4
    mov r0, #0
    mov r2, #0x10
    mov r5, r3
    bl func_0200919c
    ldrh r12, [sp, #0x34]
    mov r0, r8
    mov r1, r7
    strh r12, [sp, #0xc]
    strh r12, [sp, #0xe]
    mov r12, #3
    str r12, [sp, #8]
    ldrh r12, [sp, #0x30]
    mov r2, r6
    mov r3, r5
    str r12, [sp]
    str r4, [sp, #4]
    bl func_02013ce4
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02013f70(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x20
    mov r4, r0
    mov r7, r1
    bl func_02012844
    bl WMi_CheckInitialized
    cmp r0, #0
    addne sp, sp, #0x20
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r6, #0x23
    mov r0, r6
    mov r1, r4
    bl WMi_SetCallbackTable
    add r5, sp, #0
    mov r4, #0x20
    mov r1, r5
    mov r2, r4
    mov r0, #0
    bl func_0200919c
    add r1, sp, #4
    mov r0, r7
    mov r2, #0x1c
    strh r6, [sp]
    bl MIi_CpuCopy32
    mov r0, r5
    mov r1, r4
    bl func_020127d4
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02013fec(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x1c
    add r4, sp, #0
    mov r6, r0
    mov r5, r1
    mov r1, r4
    mov r0, #0
    mov r2, #0x1c
    bl func_0200919c
    mov r2, #8
    mov r0, r6
    mov r1, r4
    str r2, [sp]
    strh r5, [sp, #0xa]
    bl func_02013f70
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_02014030(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    add r4, sp, #0
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r1, r4
    mov r0, #0
    mov r2, #0x1c
    bl func_0200919c
    mov r2, #0x180
    mov r0, r7
    mov r1, r4
    str r2, [sp]
    strh r6, [sp, #0x12]
    strh r5, [sp, #0x14]
    bl func_02013f70
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void func_0201407c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x14
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    mov r10, #1
    bl func_02012844
    mov r9, #2
    ldr r4, [r0, #4]
    mov r0, r9
    mov r1, #9
    mov r2, #0xa
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0x14
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, r9
    add r0, r4, #0x188
    bl DC_InvalidateRange
    add r0, r4, #0x100
    ldrh r0, [r0, #0x88]
    cmp r0, #0
    bne @L_02014100
    add r0, r4, #0x82
    mov r1, r9
    add r0, r0, #0x100
    bl DC_InvalidateRange
    add r2, r4, #0x100
    mov r1, r9
    add r0, r4, #0x86
    ldrh r10, [r2, #0x82]
    bl DC_InvalidateRange
@L_02014100:
    cmp r6, #0
    addeq sp, sp, #0x14
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r10, #0
    addeq sp, sp, #0x14
    moveq r0, #7
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r9, #2
    mov r1, r9
    add r0, r4, #0x7c
    bl DC_InvalidateRange
    ldr r0, [r4, #0x7c]
    cmp r6, r0
    addeq sp, sp, #0x14
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r5, #0x200
    addhi sp, sp, #0x14
    movhi r0, #6
    ldmhiia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r5, #0
    addeq sp, sp, #0x14
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r6
    mov r1, r5
    bl DC_StoreRange
    ldrh r2, [sp, #0x38]
    ldrh r1, [sp, #0x3c]
    ldrh r0, [sp, #0x40]
    str r2, [sp]
    str r1, [sp, #4]
    str r0, [sp, #8]
    str r8, [sp, #0xc]
    mov r2, r6
    mov r3, r5
    mov r0, #0xf
    mov r1, #7
    str r7, [sp, #0x10]
    bl func_02012728
    cmp r0, #0
    moveq r0, r9
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_020141b4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl func_02012844
    mov r5, #2
    mov r4, r0
    mov r0, r5
    mov r1, #9
    mov r2, #0xa
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #4]
    mov r1, #4
    add r0, r0, #0xc
    bl DC_InvalidateRange
    ldr r0, [r4, #4]
    ldr r0, [r0, #0xc]
    cmp r0, #0
    moveq r0, #3
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r4, #0x10
    mov r0, r4
    mov r1, r6
    bl WMi_SetCallbackTable
    mov r0, r4
    mov r1, #0
    bl func_02012728
    cmp r0, #0
    moveq r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0201422c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl func_02012844
    mov r7, r0
    mov r0, #1
    mov r1, #8
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r7, #4]
    mov r1, #4
    add r0, r0, #0x10
    bl DC_InvalidateRange
    ldr r0, [r7, #4]
    ldr r0, [r0, #0x10]
    cmp r0, #1
    moveq r0, #3
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r4, #0x10
    movlo r0, #6
    ldmloia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r5, #0
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    mov r1, r4
    bl DC_StoreRange
    mov r7, #0x11
    mov r0, r7
    mov r1, r6
    bl WMi_SetCallbackTable
    mov r6, #2
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_02012728
    cmp r0, #0
    moveq r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_020142d4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl func_02012844
    mov r9, r0
    mov r0, #1
    mov r1, #0xb
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r9, #4]
    mov r4, #4
    mov r1, r4
    add r0, r0, #0x10
    bl DC_InvalidateRange
    ldr r0, [r9, #4]
    ldr r0, [r0, #0x10]
    cmp r0, #0
    addeq sp, sp, #0x10
    moveq r0, #3
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r4, #0x5e0
    cmp r5, r0
    addhi sp, sp, #0x10
    movhi r0, #6
    ldmhiia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6
    mov r1, r5
    bl DC_StoreRange
    mov r9, #0x12
    mov r0, r9
    mov r1, r8
    bl WMi_SetCallbackTable
    add r1, sp, #8
    mov r0, r7
    mov r2, #6
    bl MI_CpuCopy8
    str r6, [sp]
    str r5, [sp, #4]
    ldr r2, [sp, #8]
    ldr r3, [sp, #0xc]
    mov r0, r9
    mov r1, r4
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_020143a4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_02012844
    mov r4, r0
    mov r0, #1
    mov r1, #0xb
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #4]
    mov r1, #4
    add r0, r0, #0x10
    bl DC_InvalidateRange
    ldr r0, [r4, #4]
    ldr r0, [r0, #0x10]
    cmp r0, #0
    moveq r0, #3
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r4, #0x13
    mov r0, r4
    mov r1, r5
    bl WMi_SetCallbackTable
    mov r0, r4
    mov r1, #0
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02014414(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    mov r9, r1
    mov r6, r2
    mov r0, #2
    mov r1, #9
    mov r2, #0xa
    mov r5, r3
    mov r8, #1
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r10, #0
    addeq sp, sp, #0xc
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r9, #0x10
    addhs sp, sp, #0xc
    movhs r0, #6
    ldmhsia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r6, #0
    addeq sp, sp, #0xc
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl WM_GetAID
    movs r11, r0
    bne @L_02014490
    bl WM_GetConnectedAIDs
    mov r8, r0
@L_02014490:
    mov r4, #0
    mov r0, r4
    mov r1, r10
    mov r2, #0x820
    bl MIi_CpuClearFast
    add r0, r10, #0x800
    ldr r1, [sp, #0x30]
    mov r7, #1
    cmp r1, #0
    strh r4, [r0, #8]
    strh r4, [r0, #0xa]
    strh r4, [r0, #0xc]
    strh r4, [r0, #0xe]
    strh r5, [r0, #0x10]
    strh r9, [r0, #0x16]
    mov r0, r7, lsl r11
    mov r0, r0, lsl #0x10
    movne r4, #1
    add r1, r10, #0x800
    orr r0, r6, r0, lsr #16
    strh r4, [r1, #0x18]
    strh r0, [r1, #0xe]
    bl func_02015aa0
    add r3, r10, #0x800
    mul r1, r5, r0
    strh r1, [r3, #0x14]
    ldrh r1, [r3, #0x14]
    strh r0, [r3, #0x12]
    cmp r1, #0x1fc
    movhi r0, #0
    strhih r0, [r3, #0xe]
    addhi sp, sp, #0xc
    movhi r0, #6
    ldmhiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r1, #4
    strh r0, [r3, #0x14]
    strh r7, [r3, #0x1c]
    cmp r11, #0
    bne @L_02014620
    orr r4, r8, #1
    mov r2, #0
@L_02014534:
    ldrh r1, [r3, #0xe]
    mov r0, r2, lsl #9
    add r2, r2, #1
    and r1, r1, r4
    strh r1, [r10, r0]
    cmp r2, #4
    blt @L_02014534
    ldr r1, =func_02014aa8
    mov r0, r9
    mov r2, r10
    bl func_02012e6c
    mov r9, #0
    add r4, r10, #0x800
    mov r11, #2
    ldr r6, =func_020149d0
    ldr r5, =0xffff
    b @L_02014604
@L_02014578:
    ldrh r2, [r4, #8]
    ldrh r1, [r4, #0xe]
    mov r0, r6
    add r2, r2, #1
    and r1, r1, r8
    and r2, r2, #3
    mov r1, r1, lsl #0x10
    strh r2, [r4, #8]
    mov r1, r1, lsr #0x10
    str r1, [sp]
    ldrh r3, [r4, #0x16]
    mov r1, r10
    add r2, r10, r9, lsl #9
    stmib sp, {r3, r7}
    ldrh r3, [r4, #0x14]
    bl func_0201407c
    cmp r0, #7
    bne @L_020145e0
    add r0, r10, r9, lsl #1
    add r0, r0, #0x800
    strh r5, [r0]
    ldrh r0, [r4, #0xa]
    add r0, r0, #1
    and r0, r0, #3
    strh r0, [r4, #0xa]
    b @L_02014600
@L_020145e0:
    cmp r0, #0
    cmpne r0, #2
    addne r1, r10, #0x800
    movne r2, #5
    strneh r2, [r1, #0x1c]
    addne sp, sp, #0xc
    movne r0, r7
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02014600:
    add r9, r9, #1
@L_02014604:
    ldrh r0, [r4, #0x18]
    cmp r0, #1
    movne r0, r7
    moveq r0, r11
    cmp r9, r0
    blt @L_02014578
    b @L_02014638
@L_02014620:
    ldr r1, =func_02014bdc
    mov r4, #3
    mov r0, r9
    mov r2, r10
    strh r4, [r3, #0xa]
    bl func_02012e6c
@L_02014638:
    mov r0, #0
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02014654(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, pc}
    add r0, r5, #0x800
    ldrh r1, [r0, #0xe]
    cmp r1, #0
    moveq r0, #3
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r0, #0x16]
    mov r4, #0
    mov r1, r4
    mov r2, r4
    bl func_02012e6c
    add r1, r5, #0x800
    mov r0, r4
    strh r4, [r1, #0xe]
    strh r4, [r1, #0x1c]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020146a0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    mov r9, r1
    mov r8, r2
    mov r0, #2
    mov r1, #9
    mov r2, #0xa
    mov r5, #0
    mov r11, #1
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r10, #0
    addeq sp, sp, #0x10
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r9, #0
    addeq sp, sp, #0x10
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r8, #0
    addeq sp, sp, #0x10
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl WM_GetAID
    movs r6, r0
    bne @L_0201471c
    bl WM_GetConnectedAIDs
    mov r4, r0
@L_0201471c:
    add r0, r10, #0x800
    ldrh r0, [r0, #0x1c]
    cmp r0, #5
    addeq sp, sp, #0x10
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r0, #1
    cmpne r0, #4
    addne sp, sp, #0x10
    movne r0, #3
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r6, #0
    mov r7, #5
    bne @L_020148d4
    mov r5, #0
    str r5, [sp, #0xc]
    cmp r0, #4
    bne @L_020147f4
    add r2, r10, #0x800
    ldrh r1, [r2, #0xe]
    ldrh r0, [r2, #8]
    strh r11, [r2, #0x1c]
    and r1, r1, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r1, [sp]
    ldrh r1, [r2, #0x16]
    add r0, r0, #3
    and r6, r0, #3
    stmib sp, {r1, r11}
    ldrh r3, [r2, #0x14]
    ldr r0, =func_020149d0
    mov r1, r10
    add r2, r10, r6, lsl #9
    bl func_0201407c
    cmp r0, #7
    bne @L_020147d8
    add r0, r10, r6, lsl #1
    rsb r1, r11, #0x10000
    add r0, r0, #0x800
    strh r1, [r0]
    add r0, r10, #0x800
    ldrh r1, [r0, #0xa]
    add r1, r1, #1
    and r1, r1, #3
    strh r1, [r0, #0xa]
    b @L_020147f4
@L_020147d8:
    cmp r0, #0
    cmpne r0, #2
    addne r1, r10, #0x800
    addne sp, sp, #0x10
    movne r0, r11
    strneh r7, [r1, #0x1c]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020147f4:
    add r0, r10, #0x800
    ldrh r2, [r0, #0xc]
    ldrh r1, [r0, #0xa]
    cmp r2, r1
    beq @L_0201488c
    mov r5, r2, lsl #9
    ldrh r3, [r10, r5]
    mov r1, r8
    mov r2, #0x200
    orr r3, r3, #1
    strh r3, [r10, r5]
    ldrh r0, [r0, #0xc]
    add r0, r10, r0, lsl #9
    bl MIi_CpuCopy16
    add r1, r10, #0x800
    ldrh r6, [r1, #0xc]
    ldrh r2, [r1, #0x18]
    mov r5, #1
    add r0, r10, r6, lsl #1
    add r0, r0, #0x800
    ldrh r3, [r0]
    add r0, r6, #1
    and r0, r0, #3
    strh r3, [r1, #0x1a]
    strh r0, [r1, #0xc]
    cmp r2, #0
    mov r7, #0
    bne @L_02014884
    cmp r4, #0
    beq @L_02014884
    ldrh r0, [r1, #8]
    mov r0, r0, lsl #9
    ldrh r0, [r10, r0]
    cmp r0, #1
    streq r5, [sp, #0xc]
    beq @L_0201488c
@L_02014884:
    mov r0, #0
    str r0, [sp, #0xc]
@L_0201488c:
    mov r4, #0
    mov r0, r10
    mov r1, r4
    bl func_02014d90
    cmp r5, #0
    beq @L_020149c0
    mov r0, r10
    mov r1, r4
    mov r2, r9
    bl func_02014cc0
    add r0, r10, #0x800
    ldrh r0, [r0, #0x18]
    cmp r0, #0
    bne @L_020149c0
    ldr r1, [sp, #0xc]
    mov r0, r10
    bl func_02014d90
    b @L_020149c0
@L_020148d4:
    cmp r0, #4
    add r0, r10, #0x800
    moveq r5, #1
    streqh r5, [r0, #0x1c]
    beq @L_0201494c
    ldrh r1, [r0, #0xc]
    ldrh r0, [r0, #8]
    cmp r1, r0
    beq @L_0201494c
    mov r2, r1, lsl #9
    ldrh r0, [r10, r2]
    tst r0, #1
    orreq r0, r0, #1
    streqh r0, [r10, r2]
    beq @L_0201494c
    mov r1, r8
    add r0, r10, r2
    mov r2, #0x200
    bl MIi_CpuCopy16
    add r1, r10, #0x800
    ldrh r3, [r1, #0xc]
    mov r7, r5
    mov r5, #1
    add r0, r10, r3, lsl #1
    add r0, r0, #0x800
    ldrh r2, [r0]
    add r0, r3, #1
    and r0, r0, #3
    strh r2, [r1, #0x1a]
    strh r0, [r1, #0xc]
@L_0201494c:
    cmp r5, #0
    beq @L_020149c0
    add r0, r10, #0x800
    ldrh r1, [r0, #0xa]
    ldrh r2, [r0, #0x10]
    mov r0, r9
    add r5, r10, r1, lsl #9
    add r1, r5, #0x20
    bl MIi_CpuCopy16
    add r3, r10, #0x800
    ldrh r1, [r3, #0xe]
    ldr r0, =func_020149d0
    add r2, r5, #0x20
    str r1, [sp]
    ldrh r4, [r3, #0x16]
    mov r1, r10
    stmib sp, {r4, r11}
    ldrh r3, [r3, #0x10]
    bl func_0201407c
    add r1, r10, #0x800
    ldrh r2, [r1, #0xa]
    cmp r0, #2
    cmpne r0, #0
    add r2, r2, #1
    and r2, r2, #3
    movne r0, #5
    strh r2, [r1, #0xa]
    movne r7, r11
    strneh r0, [r1, #0x1c]
@L_020149c0:
    mov r0, r7
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_020149d0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_02012844
    ldrh r2, [r5, #0xa]
    ldr r1, =func_02014aa8
    add r0, r0, r2, lsl #2
    ldr r2, [r0, #0xcc]
    ldr r4, [r0, #0x10c]
    cmp r2, r1
    beq @L_02014a04
    ldr r0, =func_02014bdc
    cmp r2, r0
    ldmneia sp!, {r3, r4, r5, pc}
@L_02014a04:
    cmp r4, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x20]
    cmp r4, r0
    ldmneia sp!, {r3, r4, r5, pc}
    bl WM_GetAID
    ldrh r1, [r5, #2]
    cmp r1, #0
    bne @L_02014a60
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    add r1, r4, #0x800
    ldrh r0, [r1, #0xa]
    ldrh r2, [r5, #0x1a]
    add r0, r4, r0, lsl #1
    mov r2, r2, asr #1
    add r0, r0, #0x800
    strh r2, [r0]
    ldrh r0, [r1, #0xa]
    add r0, r0, #1
    and r0, r0, #3
    strh r0, [r1, #0xa]
    ldmia sp!, {r3, r4, r5, pc}
@L_02014a60:
    cmp r1, #0xa
    bne @L_02014a90
    cmp r0, #0
    addne r0, r4, #0x800
    ldrneh r1, [r0, #0xa]
    addne r1, r1, #3
    andne r1, r1, #3
    strneh r1, [r0, #0xa]
    add r0, r4, #0x800
    mov r1, #4
    strh r1, [r0, #0x1c]
    ldmia sp!, {r3, r4, r5, pc}
@L_02014a90:
    add r0, r4, #0x800
    mov r1, #5
    strh r1, [r0, #0x1c]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02014aa8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, [r0, #0x1c]
    cmp r4, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrh r1, [r0, #2]
    cmp r1, #0
    bne @L_02014bcc
    ldrh r1, [r0, #4]
    cmp r1, #0x15
    bgt @L_02014af4
    bge @L_02014b14
    cmp r1, #9
    ldmgtia sp!, {r4, r5, r6, pc}
    cmp r1, #7
    ldmltia sp!, {r4, r5, r6, pc}
    beq @L_02014b34
    cmp r1, #9
    beq @L_02014b44
    ldmia sp!, {r4, r5, r6, pc}
@L_02014af4:
    cmp r1, #0x1a
    ldmgtia sp!, {r4, r5, r6, pc}
    cmp r1, #0x19
    ldmltia sp!, {r4, r5, r6, pc}
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r1, #0x1a
    beq @L_02014b44
    ldmia sp!, {r4, r5, r6, pc}
@L_02014b14:
    ldrh r1, [r0, #0x12]
    ldr r2, [r0, #0xc]
    mov r0, r4
    bl func_02014cc0
    mov r0, r4
    mov r1, #0
    bl func_02014d90
    ldmia sp!, {r4, r5, r6, pc}
@L_02014b34:
    mov r0, r4
    mov r1, #0
    bl func_02014d90
    ldmia sp!, {r4, r5, r6, pc}
@L_02014b44:
    ldrh r5, [r0, #0x12]
    mov r6, #1
    bl OS_DisableInterrupts
    add r1, r4, #0x800
    ldrh r12, [r1, #8]
    mvn r2, r6, lsl r5
    mov r5, r12, lsl #9
    ldrh r3, [r4, r5]
    mov r2, r2, lsl #0x10
    and r3, r3, r2, lsr #16
    strh r3, [r4, r5]
    ldrh r1, [r1, #0x18]
    cmp r1, #1
    bne @L_02014b98
    add r1, r12, #1
    and r1, r1, #3
    mov r1, r1, lsl #0x10
    mov r3, r1, lsr #7
    ldrh r1, [r4, r3]
    and r1, r1, r2, lsr #16
    strh r1, [r4, r3]
@L_02014b98:
    bl OS_RestoreInterrupts
    mov r5, #0
    mov r0, r4
    mov r1, r5
    bl func_02014d90
    add r0, r4, #0x800
    ldrh r0, [r0, #0x18]
    cmp r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r4
    mov r1, r5
    bl func_02014d90
    ldmia sp!, {r4, r5, r6, pc}
@L_02014bcc:
    add r0, r4, #0x800
    mov r1, #5
    strh r1, [r0, #0x1c]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02014bdc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    ldr r4, [r8, #0x1c]
    cmp r4, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrh r0, [r8, #2]
    cmp r0, #0
    bne @L_02014cb0
    ldrh r0, [r8, #4]
    cmp r0, #0x15
    bgt @L_02014c1c
    bge @L_02014c2c
    cmp r0, #9
    ldmgtia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r0, #7
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02014c1c:
    cmp r0, #0x1a
    ldmgtia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r0, #0x19
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02014c2c:
    ldr r7, [r8, #0xc]
    ldrh r5, [r8, #0x10]
    ldrh r6, [r7]
    bl WM_GetAID
    add r1, r4, #0x800
    ldrh r1, [r1, #0x14]
    cmp r5, r1
    beq @L_02014c54
    cmp r5, #0x200
    movhi r5, #0x200
@L_02014c54:
    cmp r5, #4
    ldmloia sp!, {r4, r5, r6, r7, r8, pc}
    mov r1, #1
    tst r6, r1, lsl r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r4, #0x800
    ldrh r1, [r0, #8]
    mov r0, r7
    mov r2, r5
    add r1, r4, r1, lsl #9
    bl MIi_CpuCopy16
    add r1, r4, #0x800
    ldrh r0, [r1, #8]
    ldrh r2, [r8, #0x1a]
    add r0, r4, r0, lsl #1
    mov r2, r2, asr #1
    add r0, r0, #0x800
    strh r2, [r0]
    ldrh r0, [r1, #8]
    add r0, r0, #1
    and r0, r0, #3
    strh r0, [r1, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02014cb0:
    add r0, r4, #0x800
    mov r1, #5
    strh r1, [r0, #0x1c]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02014cc0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r3, r1
    mov r1, #1
    mov r4, r1, lsl r3
    add r0, r6, #0x800
    ldrh r1, [r0, #0xe]
    mov r7, r4, lsl #0x10
    mov r5, r2
    tst r1, r7, lsr #16
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r4, [r0, #8]
    mov r2, r4, lsl #9
    ldrh r2, [r6, r2]
    tst r2, r7, lsr #16
    bne @L_02014d24
    ldrh r0, [r0, #0x18]
    cmp r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r4, #1
    and r4, r0, #3
    mov r0, r4, lsl #9
    ldrh r0, [r6, r0]
    tst r0, r7, lsr #16
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_02014d24:
    add r2, r6, r4, lsl #9
    mov r0, r6
    add r2, r2, #4
    bl WmGetSharedDataAddress
    mov r1, r0
    add r0, r6, #0x800
    cmp r5, #0
    ldrh r2, [r0, #0x10]
    beq @L_02014d54
    mov r0, r5
    bl MIi_CpuCopy16
    b @L_02014d5c
@L_02014d54:
    mov r0, #0
    bl MIi_CpuClear16
@L_02014d5c:
    bl OS_DisableInterrupts
    mov r4, r4, lsl #9
    mvn r1, r7, lsr #16
    ldrh r3, [r6, r4]
    mov r1, r1, lsl #0x10
    add r2, r6, #2
    and r1, r3, r1, lsr #16
    strh r1, [r6, r4]
    ldrh r1, [r2, r4]
    orr r1, r1, r7, lsr #16
    strh r1, [r2, r4]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02014d90(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r10, r0
    mov r9, r1
    bl OS_DisableInterrupts
    add r1, r10, #0x800
    ldrh r1, [r1, #8]
    mov r4, r0
    mov r1, r1, lsl #9
    ldrh r1, [r10, r1]
    cmp r1, #0
    bne @L_02014ecc
    bl WM_GetConnectedAIDs
    add r1, r10, #0x800
    ldrh r6, [r1, #8]
    ldrh r1, [r1, #0x18]
    mov r7, r0
    add r0, r6, #1
    and r5, r0, #3
    cmp r1, #1
    addeq r0, r5, #1
    andeq r8, r0, #3
    movne r8, r5
    add r1, r10, r8, lsl #9
    mov r0, #0
    mov r2, #0x200
    bl MIi_CpuClear16
    add r0, r10, #0x800
    ldrh r3, [r0, #0xe]
    orr r2, r7, #1
    mov r1, r8, lsl #9
    and r2, r3, r2
    strh r2, [r10, r1]
    ldrh r1, [r0, #0xe]
    strh r5, [r0, #8]
    mov r2, r6, lsl #9
    cmp r9, #1
    strh r1, [r10, r2]
    ldreqh r1, [r10, r2]
    ldreq r0, =0xfffe
    andeq r0, r1, r0
    streqh r0, [r10, r2]
    mov r0, r4
    bl OS_RestoreInterrupts
    add r3, r10, #0x800
    ldrh r1, [r3, #0xe]
    mov r4, #1
    ldr r0, =func_020149d0
    and r1, r1, r7
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r1, [sp]
    ldrh r5, [r3, #0x16]
    mov r1, r10
    add r2, r10, r6, lsl #9
    str r5, [sp, #4]
    str r4, [sp, #8]
    ldrh r3, [r3, #0x14]
    bl func_0201407c
    cmp r0, #7
    bne @L_02014eb0
    add r0, r10, r6, lsl #1
    rsb r1, r4, #0x10000
    add r0, r0, #0x800
    strh r1, [r0]
    add r0, r10, #0x800
    ldrh r1, [r0, #0xa]
    add sp, sp, #0xc
    add r1, r1, #1
    and r1, r1, #3
    strh r1, [r0, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02014eb0:
    cmp r0, #0
    cmpne r0, #2
    addne r0, r10, #0x800
    movne r1, #5
    strneh r1, [r0, #0x1c]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02014ecc:
    bl OS_RestoreInterrupts
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_02014ee0(void)
{
    stmdb sp!, {r3, lr}
    mov r3, r2
    cmp r0, #0
    mov lr, r1
    mov r12, #1
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    cmp lr, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r1, [lr]
    ldrh r2, [lr, #2]
    tst r1, r12, lsl r3
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    tst r2, r12, lsl r3
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    add r2, lr, #4
    bl WmGetSharedDataAddress
    ldmia sp!, {r3, pc}
}
