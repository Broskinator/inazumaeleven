// (asm for now)

void func_02014414(void);
void func_02014654(void);
void func_02012870(void);
void DC_StoreRange(void);
void WMi_SetCallbackTable(void);
void func_02012728(void);
void func_020128b4(void);
extern char data_020be820[];
void MIi_CpuCopy16(void);
void func_02012844(void);
void func_020127d4(void);

asm void WM_StartKeySharing(void)
{
    stmdb sp!, {r3, lr}
    mov r12, #1
    rsb r2, r12, #0x10000
    mov r3, #2
    str r12, [sp]
    bl func_02014414
    ldmia sp!, {r3, pc}
}

asm void func_02014f80(void)
{
    ldr r12, =func_02014654
    bx r12
}

asm void func_02014f8c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r7, r1
    mov r6, r2
    bl func_02012870
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r7, #3
    movhi r0, #6
    ldmhiia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r7, #0
    beq @L_02014fd4
    cmp r6, #0
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, #0x50
    bl DC_StoreRange
@L_02014fd4:
    mov r5, #0x14
    mov r0, r5
    mov r1, r4
    bl WMi_SetCallbackTable
    mov r4, #2
    mov r0, r5
    mov r1, r4
    mov r2, r7
    mov r3, r6
    bl func_02012728
    cmp r0, #0
    moveq r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02015008(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl func_02012870
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r7, #3
    addhi sp, sp, #4
    movhi r0, #6
    ldmhiia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r7, #0
    beq @L_02015064
    cmp r5, #0
    addeq sp, sp, #4
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r5
    mov r1, #0x50
    bl DC_StoreRange
@L_02015064:
    mov r4, #0x27
    mov r0, r4
    mov r1, r8
    bl WMi_SetCallbackTable
    mov r0, r4
    mov r2, r7
    mov r3, r5
    mov r1, #3
    str r6, [sp]
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void func_0201509c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r6, #2
    mov r9, r0
    mov r4, r1
    mov r8, r2
    mov r0, r6
    mov r1, #7
    mov r2, #9
    mov r7, r3
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, pc}
    cmp r4, #0
    addeq sp, sp, #0xc
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    cmp r8, #0x70
    addhi sp, sp, #0xc
    movhi r0, #6
    ldmhiia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r5, =data_020be820
    mov r0, r4
    mov r1, r5
    mov r2, r8
    bl MIi_CpuCopy16
    mov r0, r5
    mov r1, r8
    bl DC_StoreRange
    mov r4, #0x18
    mov r1, r9
    mov r0, r4
    bl WMi_SetCallbackTable
    ldrh lr, [sp, #0x28]
    str r7, [sp]
    ldrb r12, [sp, #0x2c]
    str lr, [sp, #4]
    mov r0, r4
    mov r2, r5
    mov r3, r8
    mov r1, #5
    str r12, [sp, #8]
    bl func_02012728
    cmp r0, #0
    moveq r0, r6
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02015160(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    bl func_02012870
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    cmp r5, #0
    cmpne r5, #1
    movne r0, #6
    ldmneia sp!, {r4, r5, r6, pc}
    mov r4, #0x19
    mov r0, r4
    mov r1, r6
    bl WMi_SetCallbackTable
    mov r0, r4
    mov r2, r5
    mov r1, #1
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020151b4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl func_02012870
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r4, #0x1d
    mov r0, r4
    mov r1, r8
    bl WMi_SetCallbackTable
    ldrh r12, [sp, #0x20]
    mov r0, r4
    mov r2, r7
    mov r3, r6
    mov r1, #4
    stmia sp, {r5, r12}
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02015218(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    bl func_02012844
    mov r5, #2
    mov r1, r5
    mov r0, #1
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, pc}
    mov r4, #0x1e
    mov r0, r4
    mov r1, r9
    bl WMi_SetCallbackTable
    ldrh r2, [sp, #0x28]
    add r0, sp, #0
    mov r1, #0xa
    strh r4, [sp]
    strh r8, [sp, #2]
    strh r7, [sp, #4]
    strh r6, [sp, #6]
    strh r2, [sp, #8]
    bl func_020127d4
    cmp r0, #0
    moveq r0, r5
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02015294(void)
{
    ldr r1, =0x2fffc30
    ldr r0, =0xffff
    ldrh r1, [r1]
    cmp r1, r0
    movne r0, #1
    moveq r0, #0
    bx lr
}
