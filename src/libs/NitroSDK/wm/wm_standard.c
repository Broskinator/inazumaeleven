// (asm for now)

void WmCheckParentParameter(void);
void func_020138d8(void);
void func_02013940(void);
void func_02013950(void);
void func_02013994(void);
void func_02013ae4(void);
void func_02013b28(void);
void func_02013bf4(void);
void func_02013ce4(void);

void func_020128b4(void);
void func_02012844(void);
void WMi_SetCallbackTable(void);
void func_02012728(void);
void MI_CpuCopy8(void);
void func_020127d4(void);
void DC_StoreRange(void);
void MI_CpuFill8(void);
void DC_InvalidateRange(void);
void func_02013004(void);
void func_02012f94(void);
void func_0200919c(void);
void MIi_CpuCopy32(void);

asm void WmCheckParentParameter(void)
{
    ldrh r1, [r0, #4]
    cmp r1, #0x70
    movhi r0, #0
    bxhi lr
    ldrh r1, [r0, #0x18]
    cmp r1, #0xa
    blo @L_020138ac
    cmp r1, #0x3e8
    bls @L_020138b4
@L_020138ac:
    mov r0, #0
    bx lr
@L_020138b4:
    ldrh r0, [r0, #0x32]
    cmp r0, #1
    blo @L_020138c8
    cmp r0, #0xe
    bls @L_020138d0
@L_020138c8:
    mov r0, #0
    bx lr
@L_020138d0:
    mov r0, #1
    bx lr
}

asm void func_020138d8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, #1
    mov r8, r0
    mov r5, #2
    mov r7, r1
    mov r0, r6
    mov r1, r5
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    bl func_02012844
    add r1, r0, #0x100
    mov r2, #0
    strh r2, [r1, #0x50]
    mov r4, #8
    str r2, [r0, #0x14c]
    mov r0, r4
    mov r1, r8
    bl WMi_SetCallbackTable
    mov r0, r4
    mov r1, r6
    mov r2, r7
    bl func_02012728
    cmp r0, #0
    moveq r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02013940(void)
{
    ldr r12, =func_020138d8
    mov r1, #1
    bx r12
}

asm void func_02013950(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #1
    mov r1, #7
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #9
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

asm void func_02013994(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x3c
    mov r5, r0
    mov r0, #3
    mov r4, r1
    mov r2, r0
    mov r1, #2
    mov r3, #5
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0x3c
    ldmneia sp!, {r3, r4, r5, r6, pc}
    cmp r4, #0
    addeq sp, sp, #0x3c
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [r4]
    cmp r0, #0
    addeq sp, sp, #0x3c
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r4, #4]
    cmp r0, #0x400
    addhi sp, sp, #0x3c
    movhi r0, #6
    ldmhiia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r4, #0x12]
    cmp r0, #0x20
    addhi sp, sp, #0x3c
    movhi r0, #6
    ldmhiia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r4, #0x10]
    cmp r0, #0
    cmpne r0, #1
    cmpne r0, #2
    cmpne r0, #3
    addne sp, sp, #0x3c
    movne r0, #6
    ldmneia sp!, {r3, r4, r5, r6, pc}
    add r0, r0, #0xfe
    add r0, r0, #0xff00
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #1
    bhi @L_02013a5c
    ldrh r0, [r4, #0x34]
    cmp r0, #0x20
    addhi sp, sp, #0x3c
    movhi r0, #6
    ldmhiia sp!, {r3, r4, r5, r6, pc}
@L_02013a5c:
    mov r6, #0x26
    mov r0, r6
    mov r1, r5
    bl WMi_SetCallbackTable
    ldrh lr, [r4, #6]
    ldrh r5, [r4, #4]
    ldrh r3, [r4, #8]
    ldr r12, [r4]
    add r1, sp, #0xc
    add r0, r4, #0xa
    mov r2, #6
    strh r6, [sp]
    strh lr, [sp, #2]
    str r12, [sp, #4]
    strh r5, [sp, #8]
    strh r3, [sp, #0xa]
    bl MI_CpuCopy8
    ldrh r12, [r4, #0x10]
    ldrh r5, [r4, #0x34]
    ldrh r3, [r4, #0x12]
    add r1, sp, #0x16
    add r0, r4, #0x14
    mov r2, #0x20
    strh r12, [sp, #0x12]
    strh r5, [sp, #0x36]
    strh r3, [sp, #0x14]
    bl MI_CpuCopy8
    add r0, sp, #0
    mov r1, #0x3c
    bl func_020127d4
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #0x3c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_02013ae4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #1
    mov r1, #5
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #0xb
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

asm void func_02013b28(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x28
    mov r7, r0
    mov r6, r1
    mov r0, #1
    mov r1, #2
    mov r5, r2
    mov r4, r3
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0x28
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r6, #0
    addeq sp, sp, #0x28
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrh r1, [r6]
    mov r0, r6
    mov r1, r1, lsl #1
    bl DC_StoreRange
    bl func_02012844
    add r1, r0, #0x100
    mov r9, #0
    strh r9, [r1, #0x50]
    mov r8, #0xc
    str r9, [r0, #0x14c]
    mov r0, r8
    mov r1, r7
    bl WMi_SetCallbackTable
    strh r8, [sp]
    str r6, [sp, #4]
    cmp r5, #0
    mov r2, #0x18
    beq @L_02013bc0
    add r1, sp, #8
    mov r0, r5
    bl MI_CpuCopy8
    b @L_02013bcc
@L_02013bc0:
    add r0, sp, #8
    mov r1, r9
    bl MI_CpuFill8
@L_02013bcc:
    ldrh r2, [sp, #0x48]
    add r0, sp, #0
    mov r1, #0x28
    str r4, [sp, #0x20]
    strh r2, [sp, #0x26]
    bl func_020127d4
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02013bf4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r5, r0
    mov r4, r1
    bl func_02012844
    mov r1, #0xa
    mov r7, r0
    str r1, [sp]
    mov r6, #0xb
    mov r0, #5
    mov r1, #7
    mov r2, #9
    mov r3, #8
    str r6, [sp, #4]
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r7, #4]
    ldrh r0, [r1]
    cmp r0, #7
    beq @L_02013c54
    cmp r0, #9
    bne @L_02013ca4
@L_02013c54:
    cmp r4, #1
    blo @L_02013c64
    cmp r4, #0xf
    bls @L_02013c70
@L_02013c64:
    add sp, sp, #8
    mov r0, #6
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02013c70:
    add r0, r1, #0x82
    add r0, r0, #0x100
    mov r1, #2
    bl DC_InvalidateRange
    ldr r0, [r7, #4]
    mov r1, #1
    add r0, r0, #0x100
    ldrh r0, [r0, #0x82]
    tst r0, r1, lsl r4
    bne @L_02013cb4
    add sp, sp, #8
    mov r0, #7
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02013ca4:
    cmp r4, #0
    addne sp, sp, #8
    movne r0, #6
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_02013cb4:
    mov r6, #0xd
    mov r0, r6
    mov r1, r5
    bl WMi_SetCallbackTable
    mov r1, #1
    mov r2, r1, lsl r4
    mov r0, r6
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02013ce4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x40
    mov r8, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl func_02012844
    mov r9, #2
    ldr r7, [r0, #4]
    mov r0, r9
    mov r1, #7
    mov r2, #8
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #0x40
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, r9
    add r0, r7, #0x188
    bl DC_InvalidateRange
    mov r1, r9
    add r0, r7, #0xc6
    bl DC_InvalidateRange
    add r0, r7, #0x100
    ldrh r0, [r0, #0x88]
    cmp r0, #0
    ldrneh r0, [r7, #0xc6]
    cmpne r0, #1
    addne sp, sp, #0x40
    movne r0, #3
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r0, r7, #0xc
    mov r1, #4
    bl DC_InvalidateRange
    ldr r0, [r7, #0xc]
    cmp r0, #1
    addeq sp, sp, #0x40
    moveq r0, #3
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    tst r5, #0x3f
    addne sp, sp, #0x40
    movne r0, #6
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r9, [sp, #0x60]
    tst r9, #0x1f
    addne sp, sp, #0x40
    movne r0, #6
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r0, r7, #0x9c
    mov r1, #2
    bl DC_InvalidateRange
    ldrh r0, [r7, #0x9c]
    cmp r0, #0
    bne @L_02013de0
    bl func_02013004
    cmp r5, r0
    addlt sp, sp, #0x40
    movlt r0, #6
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    bl func_02012f94
    cmp r9, r0
    addlt sp, sp, #0x40
    movlt r0, #6
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02013de0:
    mov r10, #0xe
    mov r0, r10
    mov r1, r8
    bl WMi_SetCallbackTable
    add r8, sp, #0
    mov r9, #0
    mov r7, #0x40
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl func_0200919c
    ldrh r3, [sp, #0x60]
    mov r5, r5, lsr #1
    add r1, sp, #0x14
    mov r0, r9
    mov r2, #0x1c
    strh r10, [sp]
    str r6, [sp, #4]
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    str r3, [sp, #0x10]
    bl func_0200919c
    ldr r0, [sp, #0x64]
    add r1, sp, #0x30
    mov r2, #0x10
    bl MIi_CpuCopy32
    mov r0, r8
    mov r1, r7
    bl func_020127d4
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
