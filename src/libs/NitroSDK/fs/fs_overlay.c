// (asm for now)

void FSi_GetOverlayBinarySize(void);
void FS_ClearOverlayImage(void);
void func_0200ca60(void);
void func_0200ca8c(void);
void func_0200cbec(void);
void func_0200cc70(void);
void func_0200ccf0(void);
void func_0200cdb0(void);
void FS_EndOverlay(void);

void IC_InvalidateRange(void);
void DC_InvalidateRange(void);
void MI_CpuFill8(void);
extern char data_020bd2bc[];
extern char data_020bd2c0[];
extern char data_020bd2c8[];
void FS_InitFile(void);
void MI_CpuCopy8(void);
void FS_OpenFileFast(void);
void func_02010d8c(void);
void FS_CreateFileFromRom(void);
void FS_ReadFile(void);
void FS_CloseFile(void);
void func_0200e4f8(void);
void FS_GetFileLength(void);
void FS_ReadFileAsync(void);
void DGT_SetOverlayTableMode(void);
void func_02016434(void);
void func_0200848c(void);
extern char data_020bb02c[];
extern char data_020bb02c_b[];
void func_0200878c(void);
void MIi_UncompressBackward(void);
void DC_FlushRange(void);
void OS_DisableInterrupts(void);
extern char data_020bf410[];
void OS_RestoreInterrupts(void);

asm void FSi_GetOverlayBinarySize(void)
{
    ldr r1, [r0, #0x1c]
    mov r2, r1, lsr #0x18
    tst r2, #1
    movne r0, r1, lsl #8
    movne r0, r0, lsr #8
    ldreq r0, [r0, #8]
    bx lr
}

asm void FS_ClearOverlayImage(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r1, [r0, #0xc]
    ldmib r0, {r4, r5}
    add r6, r5, r1
    mov r0, r4
    mov r1, r6
    bl IC_InvalidateRange
    mov r0, r4
    mov r1, r6
    bl DC_InvalidateRange
    add r0, r4, r5
    sub r2, r6, r5
    mov r1, #0
    bl MI_CpuFill8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0200ca60(void)
{
    sub sp, sp, #8
    ldr r2, =data_020bd2bc
    ldr r1, [r1, #0x18]
    ldr r2, [r2]
    str r1, [sp, #4]
    str r2, [sp]
    str r2, [r0]
    str r1, [r0, #4]
    add sp, sp, #8
    bx lr
}

asm void func_0200ca8c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xa0
    movs r4, r1
    ldreq r9, =data_020bd2c0
    mov r5, r0
    ldrne r9, =data_020bd2c8
    mov r8, r2, lsl #5
    ldr r0, [r9]
    mov r7, #0
    cmp r0, #0
    beq @L_0200cb10
    ldr r0, [r9, #4]
    cmp r8, r0
    bhs @L_0200cbd8
    add r6, sp, #0x58
    mov r0, r6
    bl FS_InitFile
    ldr r0, [r9]
    mov r1, r5
    add r0, r0, r8
    mov r2, #0x20
    bl MI_CpuCopy8
    add r8, sp, #8
    mov r1, r5
    mov r0, r8
    str r4, [r5, #0x20]
    bl func_0200ca60
    mov r0, r6
    ldmia r8, {r1, r2}
    bl FS_OpenFileFast
    cmp r0, #0
    beq @L_0200cbd8
    b @L_0200cbb4
@L_0200cb10:
    cmp r4, #0
    bne @L_0200cb24
    bl func_02010d8c
    add r9, r0, #0x50
    b @L_0200cb2c
@L_0200cb24:
    bl func_02010d8c
    add r9, r0, #0x58
@L_0200cb2c:
    ldr r0, [r9, #4]
    cmp r8, r0
    bhs @L_0200cbd8
    add r6, sp, #0x10
    mov r0, r6
    bl FS_InitFile
    ldr r3, [r9]
    ldr r2, [r9, #4]
    mov r0, r6
    add r1, r3, r8
    add r2, r3, r2
    bl FS_CreateFileFromRom
    cmp r0, #0
    beq @L_0200cbd8
    mov r0, r6
    mov r1, r5
    mov r2, #0x20
    bl FS_ReadFile
    cmp r0, #0x20
    mov r0, r6
    beq @L_0200cb88
    bl FS_CloseFile
    b @L_0200cbd8
@L_0200cb88:
    bl FS_CloseFile
    add r8, sp, #0
    mov r1, r5
    mov r0, r8
    str r4, [r5, #0x20]
    bl func_0200ca60
    mov r0, r6
    ldmia r8, {r1, r2}
    bl FS_OpenFileFast
    cmp r0, #0
    beq @L_0200cbd8
@L_0200cbb4:
    mov r0, r6
    bl func_0200e4f8
    str r0, [r5, #0x24]
    mov r0, r6
    bl FS_GetFileLength
    str r0, [r5, #0x28]
    mov r0, r6
    bl FS_CloseFile
    mov r7, #1
@L_0200cbd8:
    mov r0, r7
    add sp, sp, #0xa0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_0200cbec(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r6, r1
    mov r7, r0
    mov r0, r6
    mov r5, #0
    bl FS_InitFile
    add r4, sp, #0
    mov r1, r7
    mov r0, r4
    bl func_0200ca60
    mov r0, r6
    ldmia r4, {r1, r2}
    bl FS_OpenFileFast
    cmp r0, #0
    beq @L_0200cc64
    mov r0, r7
    bl FSi_GetOverlayBinarySize
    mov r4, r0
    mov r0, r7
    bl FS_ClearOverlayImage
    ldr r1, [r7, #4]
    mov r0, r6
    mov r2, r4
    bl FS_ReadFileAsync
    cmp r4, r0
    moveq r5, #1
    beq @L_0200cc64
    mov r0, r6
    bl FS_CloseFile
@L_0200cc64:
    mov r0, r5
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0200cc70(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x50
    add r5, sp, #8
    mov r7, r0
    mov r0, r5
    mov r6, #0
    bl FS_InitFile
    add r4, sp, #0
    mov r1, r7
    mov r0, r4
    bl func_0200ca60
    mov r0, r5
    ldmia r4, {r1, r2}
    bl FS_OpenFileFast
    cmp r0, #0
    beq @L_0200cce4
    mov r0, r7
    bl FSi_GetOverlayBinarySize
    mov r4, r0
    mov r0, r7
    bl FS_ClearOverlayImage
    ldr r1, [r7, #4]
    mov r0, r5
    mov r2, r4
    bl FS_ReadFile
    cmp r4, r0
    add r0, sp, #8
    moveq r6, #1
    bl FS_CloseFile
@L_0200cce4:
    mov r0, r6
    add sp, sp, #0x50
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0200ccf0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x58
    mov r4, #0
    mov r8, r0
    mov r6, r2
    mov r7, r1
    add r0, sp, #0x44
    mov r1, r4
    mov r2, #0x14
    mov r5, r3
    bl MI_CpuFill8
    ldr r2, =data_020bd2bc
    add r1, sp, #4
    ldr r0, [r2, #0x14]
    ldr r2, [r2, #0x18]
    bl MI_CpuCopy8
    cmp r5, #0
    beq @L_0200cd44
    mov r0, #1
    bl DGT_SetOverlayTableMode
    mov r4, r0
@L_0200cd44:
    ldr r1, =data_020bd2bc
    add r0, sp, #0x44
    ldr r12, [r1, #0x18]
    add r3, sp, #4
    mov r1, r7
    mov r2, r6
    str r12, [sp]
    bl func_02016434
    cmp r5, #0
    beq @L_0200cd74
    mov r0, r4
    bl DGT_SetOverlayTableMode
@L_0200cd74:
    mov r3, #0
    add r2, sp, #0x44
@L_0200cd7c:
    ldr r1, [r2, r3]
    ldr r0, [r8, r3]
    cmp r1, r0
    bne @L_0200cd98
    add r3, r3, #4
    cmp r3, #0x14
    blo @L_0200cd7c
@L_0200cd98:
    mov r0, #1
    cmp r3, #0x14
    movne r0, #0
    add sp, sp, #0x58
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_0200cdb0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl FSi_GetOverlayBinarySize
    mov r4, r0
    bl func_0200848c
    cmp r0, #1
    beq @L_0200ce40
    ldr r0, [r5, #0x1c]
    mov r3, #0
    mov r0, r0, lsr #0x18
    tst r0, #2
    beq @L_0200ce20
    ldr r0, =data_020bb02c
    ldr r2, =data_020bb02c_b
    ldr r1, =0x66666667
    sub r12, r0, r2
    smull r0, lr, r1, r12
    mov r0, r12, lsr #0x1f
    ldr r1, [r5]
    add lr, r0, lr, asr #3
    cmp r1, lr
    bhs @L_0200ce20
    mov r0, #0x14
    mla r0, r1, r0, r2
    ldr r1, [r5, #4]
    mov r2, r4
    bl func_0200ccf0
    mov r3, r0
@L_0200ce20:
    cmp r3, #0
    bne @L_0200ce40
    ldr r0, [r5, #4]
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    bl func_0200878c
    ldmia sp!, {r3, r4, r5, pc}
@L_0200ce40:
    ldr r0, [r5, #0x1c]
    mov r0, r0, lsr #0x18
    tst r0, #1
    beq @L_0200ce5c
    ldr r0, [r5, #4]
    add r0, r0, r4
    bl MIi_UncompressBackward
@L_0200ce5c:
    ldmib r5, {r0, r1}
    bl DC_FlushRange
    ldr r4, [r5, #0x10]
    ldr r5, [r5, #0x14]
    cmp r4, r5
    ldmhsia sp!, {r3, r4, r5, pc}
@L_0200ce74:
    ldr r0, [r4]
    cmp r0, #0
    beq @L_0200ce84
    blx r0
@L_0200ce84:
    add r4, r4, #4
    cmp r4, r5
    blo @L_0200ce74
    ldmia sp!, {r3, r4, r5, pc}
}

asm void FS_EndOverlay(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r11, r0
@L_0200cea8:
    ldr r1, [r11, #8]
    ldr r0, [r11, #0xc]
    mov r4, #0
    ldr r6, [r11, #4]
    add r0, r1, r0
    mov r5, r4
    add r7, r6, r0
    bl OS_DisableInterrupts
    ldr r1, =data_020bf410
    mov r12, r4
    ldr lr, [r1]
    mov r8, lr
    cmp lr, #0
    beq @L_0200cf54
    mov r2, r4
@L_0200cee4:
    ldr r10, [r8, #8]
    ldr r9, [r8]
    cmp r10, #0
    ldr r3, [r8, #4]
    bne @L_0200cf08
    cmp r3, r6
    blo @L_0200cf08
    cmp r3, r7
    blo @L_0200cf18
@L_0200cf08:
    cmp r10, r6
    blo @L_0200cf44
    cmp r10, r7
    bhs @L_0200cf44
@L_0200cf18:
    cmp r5, #0
    strne r8, [r5]
    moveq r4, r8
    cmp lr, r8
    streq r9, [r1]
    moveq lr, r9
    str r2, [r8]
    cmp r12, #0
    mov r5, r8
    strne r9, [r12]
    b @L_0200cf48
@L_0200cf44:
    mov r12, r8
@L_0200cf48:
    mov r8, r9
    cmp r9, #0
    bne @L_0200cee4
@L_0200cf54:
    bl OS_RestoreInterrupts
    cmp r4, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0200cf60:
    ldr r1, [r4, #4]
    ldr r5, [r4]
    cmp r1, #0
    beq @L_0200cf78
    ldr r0, [r4, #8]
    blx r1
@L_0200cf78:
    mov r4, r5
    cmp r5, #0
    bne @L_0200cf60
    b @L_0200cea8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
