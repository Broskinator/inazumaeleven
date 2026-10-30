// (asm for now)

void MBi_BlockHeaderEnd(void);
void MBi_calc_cksum(void);
void func_ov089_021763a0(void);
void func_ov089_02176490(void);
void func_ov089_02176538(void);

void DC_FlushRange(void);
void func_02006d84(void);
void func_ov089_02178840(void);
void MIi_CpuClear16(void);
void MIi_CpuClearFast(void);
void MIi_CpuCopy16(void);
void mystrlen(void);
void FS_InitFile(void);
void FS_OpenFileEx(void);
void FS_GetFileLength(void);
void FS_CloseFile(void);
void FS_ReadFile(void);

asm void MBi_BlockHeaderEnd(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, r2
    add r2, r6, #0x1f
    mov r5, r1
    mov r0, r4
    bic r1, r2, #0x1f
    bl DC_FlushRange
    bl func_02006d84
    mov r0, r4
    mov r1, r6
    mov r2, r5
    bl func_ov089_02178840
    ldmia sp!, {r4, r5, r6, pc}
}

asm void MBi_calc_cksum(void)
{
    mov r3, r1, asr #1
    cmp r3, #0
    mov r2, #0
    ble @L_02176378
@L_02176364:
    ldrh r1, [r0], #2
    sub r3, r3, #1
    cmp r3, #0
    add r2, r2, r1
    bgt @L_02176364
@L_02176378:
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    add r1, r0, r2, lsr #16
    ldr r0, =0xffff
    add r1, r1, r1, lsr #16
    eor r0, r1, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bx lr
}

asm void func_ov089_021763a0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r0
    mov r7, #0
    mov r5, r1
    mov r4, r2
    mov r0, r7
    mov r1, r6
    mov r2, #0x4c0
    bl MIi_CpuClear16
    mov r8, #1
    ldr r0, [r5, #0xc]
    mov r1, r6
    mov r2, r8
    strb r7, [r6, #0x4b2]
    bl func_ov089_02176490
    cmp r0, #0
    movne r8, r7
    mov r7, #0
    ldr r0, [r5, #0x10]
    mov r1, r6
    mov r2, r7
    bl func_ov089_02176490
    cmp r0, #0
    moveq r7, #1
    orrs r0, r8, r7
    beq @L_02176420
    mov r3, #1
    mov r1, r6
    mov r0, #0
    mov r2, #0x220
    strb r3, [r6, #0x4b2]
    bl MIi_CpuClearFast
@L_02176420:
    ldr r0, [r5, #0x14]
    cmp r4, #0
    str r0, [r6, #0x4b8]
    beq @L_02176440
    mov r0, r4
    add r1, r6, #0x220
    mov r2, #0x16
    bl MIi_CpuCopy16
@L_02176440:
    ldrb r1, [r5, #0x18]
    ldr r0, [r5, #4]
    strb r1, [r6, #0x236]
    bl mystrlen
    mov r2, r0, lsl #0x11
    ldr r0, [r5, #4]
    add r1, r6, #0x238
    mov r2, r2, lsr #0x10
    bl MIi_CpuCopy16
    ldr r0, [r5, #8]
    add r1, r6, #0x298
    mov r2, #0xc0
    bl MIi_CpuCopy16
    mov r2, #1
    add r0, r6, #0x300
    add r1, r6, #0x400
    strb r2, [r6, #0x358]
    strh r2, [r0, #0x5a]
    strh r2, [r1, #0xb0]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_ov089_02176490(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x48
    mov r8, r0
    mov r7, r1
    mov r6, #0x200
    cmp r2, #0
    moveq r6, #0x20
    cmp r2, #0
    addne r7, r7, #0x20
    cmp r8, #0
    addeq sp, sp, #0x48
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r5, sp, #0
    mov r0, r5
    bl FS_InitFile
    mov r4, #1
    mov r0, r5
    mov r1, r8
    mov r2, r4
    bl FS_OpenFileEx
    cmp r0, #0
    addeq sp, sp, #0x48
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r5
    bl FS_GetFileLength
    cmp r6, r0
    mov r0, r5
    beq @L_02176518
    bl FS_CloseFile
    add sp, sp, #0x48
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02176518:
    mov r1, r7
    mov r2, r6
    bl FS_ReadFile
    mov r0, r5
    bl FS_CloseFile
    mov r0, r4
    add sp, sp, #0x48
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_ov089_02176538(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r2
    add r4, r7, #0x5e
    mov r0, r1
    add r1, r4, #0x300
    ldr r2, =0x14a
    mov r5, r3
    mov r4, #1
    bl MIi_CpuCopy16
    mov r2, #0
    mov r1, #2
@L_02176568:
    tst r6, r1, lsl r2
    addne r0, r4, #1
    add r2, r2, #1
    andne r4, r0, #0xff
    cmp r2, #0xf
    blt @L_02176568
    ldrb r1, [r7, #0x4b4]
    add r0, r7, #0x300
    orr r2, r6, #1
    add r1, r1, #1
    strb r4, [r7, #0x358]
    strh r2, [r0, #0x5a]
    strh r5, [r0, #0x5c]
    strb r1, [r7, #0x4b4]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
