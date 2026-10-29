// (asm for now)

void FS_EndOverlay(void);
void func_0200ca8c(void);
void func_0200cc70(void);
void func_0200cdb0(void);
void MI_CpuCopy8(void);
void func_0200b37c(void);
void func_0200c50c(void);
void FS_InitFile(void);
void func_0200c1b8(void);
void STD_GetStringLength(void);
extern char data_020aadc8[];
extern char data_020a4294[];
void func_0200e500(void);
void func_0200e4e4(void);
void MI_CpuFill8(void);
void CARD_GetOwnRomHeader(void);
void func_0200e4d4(void);
extern char data_020a42c8[];
void func_0200c1c8(void);
void func_0200c210(void);

asm void func_0200cf90(void)
{
    stmdb sp!, {r3, lr}
    bl FS_EndOverlay
    mov r0, #1
    ldmia sp!, {r3, pc}
}

asm void FS_LoadOverlay(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x2c
    add r4, sp, #0
    mov r3, r0
    mov r2, r1
    mov r0, r4
    mov r1, r3
    mov r5, #0
    bl func_0200ca8c
    cmp r0, #0
    beq @L_0200cfe8
    mov r0, r4
    bl func_0200cc70
    cmp r0, #0
    beq @L_0200cfe8
    mov r0, r4
    bl func_0200cdb0
    mov r5, #1
@L_0200cfe8:
    mov r0, r5
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, pc}
}

asm void FS_UnloadOverlay(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x2c
    add r4, sp, #0
    mov r3, r0
    mov r2, r1
    mov r0, r4
    mov r1, r3
    bl func_0200ca8c
    cmp r0, #0
    beq @L_0200d034
    mov r0, r4
    bl func_0200cf90
    cmp r0, #0
    addne sp, sp, #0x2c
    movne r0, #1
    ldmneia sp!, {r3, r4, pc}
@L_0200d034:
    mov r0, #0
    add sp, sp, #0x2c
    ldmia sp!, {r3, r4, pc}
}

asm void func_0200d040(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r5, [r4]
    mov r6, r2
    ldr r3, [r5, #0x20]
    ldr r0, [r3, #0x1c]
    cmp r0, #0
    beq @L_0200d070
    ldr r0, [r4, #4]
    bl MI_CpuCopy8
    mov r0, #0
    b @L_0200d090
@L_0200d070:
    ldr r2, [r4, #4]
    ldr r12, [r3, #0x20]
    mov r0, r5
    mov r3, r6
    blx r12
    mov r1, r0
    ldr r0, [r5, #8]
    bl func_0200b37c
@L_0200d090:
    ldr r1, [r4, #4]
    add r1, r1, r6
    str r1, [r4, #4]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0200d0a0(void)
{
    stmdb sp!, {r3, lr}
    ldr r12, [r0, #8]
    mov r3, #0
    strh r1, [r0, #0x34]
    mov r1, #2
    mov r2, #1
    str r12, [r0, #0x30]
    strh r3, [r0, #0x36]
    str r3, [r0, #0x38]
    bl func_0200d938
    ldmia sp!, {r3, pc}
}

asm void func_0200d0cc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r6, r0
    ldr r1, [r6, #8]
    add r5, r6, #0x30
    ldr r4, [r1, #0x20]
    add r0, sp, #0
    str r1, [sp]
    ldrh r2, [r5, #4]
    ldr r3, [r4, #0xc]
    add r1, sp, #8
    add r3, r3, r2, lsl #3
    mov r2, #8
    str r3, [sp, #4]
    bl func_0200d040
    movs r3, r0
    bne @L_0200d158
    add r12, r6, #0x20
    ldmia r5, {r0, r1, r2}
    stmia r12, {r0, r1, r2}
    ldrh r0, [r5, #6]
    cmp r0, #0
    ldreq r0, [r5, #8]
    cmpeq r0, #0
    bne @L_0200d148
    ldrh r0, [sp, #0xc]
    strh r0, [r6, #0x26]
    ldr r1, [r4, #0xc]
    ldr r0, [sp, #8]
    add r0, r1, r0
    str r0, [r6, #0x28]
@L_0200d148:
    ldrh r1, [sp, #0xe]
    ldr r0, =0xfff
    and r0, r1, r0
    str r0, [r6, #0x2c]
@L_0200d158:
    mov r0, r3
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0200d168(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r6, r0
    ldr r5, [r6, #0x30]
    ldr r0, [r6, #8]
    mov r7, #1
    str r0, [sp, #4]
    add r4, sp, #4
    ldr r3, [r6, #0x28]
    add r1, sp, #0
    mov r0, r4
    mov r2, r7
    str r3, [sp, #8]
    bl func_0200d040
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, pc}
    ldrb r1, [sp]
    ands r2, r1, #0x7f
    mov r1, r1, asr #7
    str r2, [r5, #0x10]
    and r1, r1, #1
    addeq sp, sp, #0xc
    str r1, [r5, #0xc]
    moveq r0, r7
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r1, [r6, #0x34]
    cmp r1, #0
    bne @L_0200d208
    mov r0, r4
    add r1, r5, #0x14
    bl func_0200d040
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, pc}
    ldr r1, [r5, #0x10]
    mov r2, #0
    add r1, r5, r1
    strb r2, [r1, #0x14]
    b @L_0200d214
@L_0200d208:
    ldr r1, [sp, #8]
    add r1, r1, r2
    str r1, [sp, #8]
@L_0200d214:
    ldr r1, [r5, #0xc]
    cmp r1, #0
    bne @L_0200d240
    ldr r1, [r6, #8]
    str r1, [r5]
    ldrh r1, [r6, #0x26]
    str r1, [r5, #4]
    ldrh r1, [r6, #0x26]
    add r1, r1, #1
    strh r1, [r6, #0x26]
    b @L_0200d27c
@L_0200d240:
    add r0, sp, #4
    add r1, sp, #2
    mov r2, #2
    bl func_0200d040
    cmp r0, #0
    bne @L_0200d27c
    ldr r2, [r6, #8]
    ldr r1, =0xfff
    str r2, [r5]
    ldrh r3, [sp, #2]
    mov r2, #0
    and r1, r3, r1
    strh r1, [r5, #4]
    strh r2, [r5, #6]
    str r2, [r5, #8]
@L_0200d27c:
    cmp r0, #0
    ldreq r1, [sp, #8]
    streq r1, [r6, #0x28]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void func_0200d294(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x98
    mov r10, r0
    ldr r3, [r10, #0x40]
    mov r2, #1
    ldr r7, [r10, #0x3c]
    mov r1, #2
    str r3, [sp]
    mov r4, r2
    mov r6, #0
    bl func_0200d938
    ldrsb r0, [r7]
    cmp r0, #0
    beq @L_0200d480
@L_0200d2cc:
    mov r0, r7
    mov r1, r6
    bl func_0200c50c
    mov r9, r0
    ldrsb r0, [r7, r9]
    mov r8, #1
    cmp r0, #0
    ldreq r0, [sp]
    cmpeq r0, #0
    moveq r8, r6
    cmp r9, #0
    addeq sp, sp, #0x98
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsb r0, [r7]
    cmp r0, #0x2e
    bne @L_0200d34c
    cmp r9, #1
    addeq r7, r7, #1
    beq @L_0200d464
    cmp r9, #2
    ldreqsb r0, [r7, #1]
    cmpeq r0, #0x2e
    bne @L_0200d354
    ldrh r0, [r10, #0x24]
    cmp r0, #0
    beq @L_0200d344
    ldr r1, [r10, #0x2c]
    mov r0, r10
    bl func_0200d0a0
@L_0200d344:
    add r7, r7, #2
    b @L_0200d464
@L_0200d34c:
    cmp r0, #0x2a
    beq @L_0200d480
@L_0200d354:
    cmp r9, #0x7f
    addgt sp, sp, #0x98
    movgt r0, #0xb
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r5, sp, #4
    str r5, [r10, #0x30]
    str r6, [r10, #0x34]
    mov r11, #3
@L_0200d374:
    mov r0, r10
    mov r1, r11
    mov r2, r4
    bl func_0200d938
    cmp r0, #0
    addne sp, sp, #0x98
    movne r0, #0xb
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x10]
    cmp r8, r0
    ldreq r0, [sp, #0x14]
    cmpeq r9, r0
    bne @L_0200d374
    mov r1, r6
    mov r0, r6
    cmp r9, #0
    bls @L_0200d3f8
@L_0200d3b8:
    add r1, r5, r0
    ldrsb r2, [r7, r0]
    ldrsb r1, [r1, #0x14]
    sub r2, r2, #0x41
    sub r1, r1, #0x41
    and r2, r2, #0xff
    cmp r2, #0x19
    and r1, r1, #0xff
    addls r2, r2, #0x20
    cmp r1, #0x19
    addls r1, r1, #0x20
    subs r1, r2, r1
    bne @L_0200d3f8
    add r0, r0, #1
    cmp r0, r9
    blo @L_0200d3b8
@L_0200d3f8:
    cmp r1, #0
    bne @L_0200d374
    cmp r8, #0
    beq @L_0200d430
    add r0, sp, #4
    add r3, r10, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r10
    mov r1, #2
    mov r2, #1
    add r7, r7, r9
    bl func_0200d938
    b @L_0200d464
@L_0200d430:
    ldr r0, [sp]
    cmp r0, #0
    addne sp, sp, #0x98
    movne r0, #0xb
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r3, [r10, #0x44]
    ldr r2, [sp, #4]
    ldr r1, [sp, #8]
    add sp, sp, #0x98
    str r2, [r3]
    mov r0, #0
    str r1, [r3, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0200d464:
    ldrsb r0, [r7]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldrsb r0, [r7, r0]!
    cmp r0, #0
    bne @L_0200d2cc
@L_0200d480:
    ldr r0, [sp]
    cmp r0, #0
    moveq r0, #0xb
    addne r0, r10, #0x20
    ldrne r3, [r10, #0x44]
    ldmneia r0, {r0, r1, r2}
    stmneia r3, {r0, r1, r2}
    movne r0, #0
    add sp, sp, #0x98
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0200d4a8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xe0
    mov r11, r0
    ldr r0, [r11, #8]
    add r8, sp, #4
    str r0, [sp]
    add r0, sp, #4
    mov r6, #3
    mov r7, #1
    bl FS_InitFile
    ldr r0, [sp]
    str r0, [sp, #0xc]
    ldr r0, [r11, #0xc]
    tst r0, #0x20
    movne r0, r7
    moveq r0, #0
    cmp r0, #0
    ldrneh r5, [r11, #0x24]
    movne r4, #0x10000
    bne @L_0200d584
    mov r9, #0
    ldr r4, [r11, #0x20]
    mov r10, r9
    mov r5, #0x10000
@L_0200d508:
    mov r0, r8
    mov r1, r9
    bl func_0200d0a0
    add r2, sp, #0x4c
    str r2, [sp, #0x34]
    cmp r9, #0
    mov r0, r8
    mov r1, r6
    mov r2, r7
    ldreq r10, [sp, #0x30]
    str r7, [sp, #0x38]
    bl func_0200d938
    cmp r0, #0
    bne @L_0200d570
@L_0200d540:
    ldr r0, [sp, #0x58]
    cmp r0, #0
    ldreq r0, [sp, #0x50]
    cmpeq r0, r4
    ldreqh r5, [sp, #0x28]
    beq @L_0200d570
    mov r0, r8
    mov r1, r6
    mov r2, r7
    bl func_0200d938
    cmp r0, #0
    beq @L_0200d540
@L_0200d570:
    cmp r5, #0x10000
    bne @L_0200d584
    add r9, r9, #1
    cmp r9, r10
    blo @L_0200d508
@L_0200d584:
    cmp r5, #0x10000
    mov r0, #0
    streqh r0, [r11, #0x38]
    mov r6, #3
    mov r7, #1
    addeq sp, sp, #0xe0
    moveq r0, #0xb
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp]
    mov r9, r5
    bl func_0200c1b8
    bl STD_GetStringLength
    add r10, r0, #2
    add r0, sp, #4
    mov r1, r5
    bl func_0200d0a0
    cmp r4, #0x10000
    ldrne r0, [sp, #0x5c]
    add r8, sp, #4
    addne r10, r10, r0
    cmp r5, #0
    beq @L_0200d654
@L_0200d5dc:
    ldr r1, [sp, #0x30]
    mov r0, r8
    bl func_0200d0a0
    add r0, sp, #0x4c
    str r0, [sp, #0x34]
    mov r0, r8
    mov r1, r6
    mov r2, r7
    str r7, [sp, #0x38]
    bl func_0200d938
    cmp r0, #0
    bne @L_0200d648
@L_0200d60c:
    ldr r0, [sp, #0x58]
    cmp r0, #0
    beq @L_0200d630
    ldrh r0, [sp, #0x50]
    cmp r0, r9
    ldreq r0, [sp, #0x5c]
    addeq r0, r0, #1
    addeq r10, r10, r0
    beq @L_0200d648
@L_0200d630:
    mov r0, r8
    mov r1, r6
    mov r2, r7
    bl func_0200d938
    cmp r0, #0
    beq @L_0200d60c
@L_0200d648:
    ldrh r9, [sp, #0x28]
    cmp r9, #0
    bne @L_0200d5dc
@L_0200d654:
    ldr r7, [r11, #0x30]
    add r0, r10, #1
    strh r0, [r11, #0x38]
    strh r5, [r11, #0x3a]
    cmp r7, #0
    add r9, sp, #4
    mov r8, #1
    beq @L_0200d814
    ldrh r6, [r11, #0x38]
    ldr r0, [r11, #0x34]
    cmp r0, r6
    blo @L_0200d814
    ldr r0, [sp]
    bl func_0200c1b8
    mov r11, r0
    bl STD_GetStringLength
    mov r10, r0
    mov r0, r11
    mov r1, r7
    mov r2, r10
    bl MI_CpuCopy8
    mov r0, #0
    add r0, r10, r0
    add r1, r7, r0
    ldr r0, =data_020aadc8
    mov r2, #2
    bl MI_CpuCopy8
    mov r0, r9
    mov r1, r5
    bl func_0200d0a0
    cmp r4, #0x10000
    beq @L_0200d750
    add r3, sp, #0x4c
    mov r1, #3
    str r3, [sp, #0x34]
    mov r3, #0
    mov r0, r9
    mov r2, r8
    str r3, [sp, #0x38]
    mov r10, r1
    bl func_0200d938
    cmp r0, #0
    bne @L_0200d72c
@L_0200d700:
    ldr r0, [sp, #0x58]
    cmp r0, #0
    ldreq r0, [sp, #0x50]
    cmpeq r0, r4
    beq @L_0200d72c
    mov r0, r9
    mov r1, r10
    mov r2, r8
    bl func_0200d938
    cmp r0, #0
    beq @L_0200d700
@L_0200d72c:
    ldr r0, [sp, #0x5c]
    add r1, r7, r6
    add r4, r0, #1
    add r0, sp, #0x60
    mov r2, r4
    sub r1, r1, r4
    bl MI_CpuCopy8
    sub r6, r6, r4
    b @L_0200d760
@L_0200d750:
    add r1, r7, r6
    mov r0, #0
    strb r0, [r1, #-1]
    sub r6, r6, #1
@L_0200d760:
    cmp r5, #0
    add r10, sp, #4
    mov r11, #0
    mov r8, #3
    mov r4, #1
    beq @L_0200d814
    add r9, sp, #0x4c
@L_0200d77c:
    ldr r1, [sp, #0x30]
    mov r0, r10
    bl func_0200d0a0
    add r1, r7, r6
    str r9, [sp, #0x34]
    str r11, [sp, #0x38]
    mov r0, #0x2f
    strb r0, [r1, #-1]
    mov r0, r10
    mov r1, r8
    mov r2, r4
    sub r6, r6, #1
    bl func_0200d938
    cmp r0, #0
    bne @L_0200d808
@L_0200d7b8:
    ldr r0, [sp, #0x58]
    cmp r0, #0
    beq @L_0200d7f0
    ldrh r0, [sp, #0x50]
    cmp r0, r5
    bne @L_0200d7f0
    ldr r5, [sp, #0x5c]
    add r1, r7, r6
    add r0, sp, #0x60
    sub r1, r1, r5
    mov r2, r5
    bl MI_CpuCopy8
    sub r6, r6, r5
    b @L_0200d808
@L_0200d7f0:
    mov r0, r10
    mov r1, r8
    mov r2, r4
    bl func_0200d938
    cmp r0, #0
    beq @L_0200d7b8
@L_0200d808:
    ldrh r5, [sp, #0x28]
    cmp r5, #0
    bne @L_0200d77c
@L_0200d814:
    mov r0, #0
    add sp, sp, #0xe0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0200d824(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    mov r5, r0
    ldr r3, [r5, #8]
    ldr r4, [r5, #0x34]
    ldr r1, [r3, #0x20]
    mov r2, r4, lsl #3
    ldr r0, [r1, #8]
    cmp r0, r4, lsl #3
    addls sp, sp, #0x10
    movls r0, #0xb
    ldmlsia sp!, {r3, r4, r5, pc}
    str r3, [sp]
    ldr r1, [r1, #4]
    add r0, sp, #0
    add r3, r1, r2
    add r1, sp, #8
    mov r2, #8
    str r3, [sp, #4]
    bl func_0200d040
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r1, [sp, #8]
    mov r0, r5
    str r1, [r5, #0x30]
    ldr r3, [sp, #0xc]
    mov r1, #7
    mov r2, #1
    str r3, [r5, #0x34]
    str r4, [r5, #0x38]
    bl func_0200d938
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200d8ac(void)
{
    ldr r3, [r0, #0x30]
    ldr r2, [r0, #0x34]
    ldr r1, [r0, #0x38]
    str r3, [r0, #0x24]
    str r3, [r0, #0x2c]
    str r2, [r0, #0x28]
    str r1, [r0, #0x20]
    mov r0, #0
    bx lr
}

asm void func_0200d8d0(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #8]
    ldr r2, [r0, #0x2c]
    ldr r3, [r0, #0x38]
    ldr r12, [lr, #0x20]
    add r1, r2, r3
    str r1, [r0, #0x2c]
    ldr r1, [r0, #0x30]
    ldr r12, [r12, #0x20]
    mov r0, lr
    blx r12
    ldmia sp!, {r3, pc}
}

asm void func_0200d900(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #8]
    ldr r2, [r0, #0x2c]
    ldr r3, [r0, #0x38]
    ldr r12, [lr, #0x20]
    add r1, r2, r3
    str r1, [r0, #0x2c]
    ldr r1, [r0, #0x30]
    ldr r12, [r12, #0x24]
    mov r0, lr
    blx r12
    ldmia sp!, {r3, pc}
}

asm void func_0200d930(void)
{
    mov r0, #0
    bx lr
}

asm void func_0200d938(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    ldr r3, [r9, #8]
    ldr r5, =0x101
    ldr r6, [r3, #0x20]
    mov r8, r1
    ldr r3, [r6, #0x30]
    mov r4, #1
    mov r7, r2
    mov r2, r5
    tst r3, r4, lsl r8
    beq @L_0200d9b4
    ldr r2, [r6, #0x2c]
    blx r2
    mov r2, r0
    cmp r2, #0x100
    bgt @L_0200d998
    bge @L_0200d9b4
    cmp r2, #4
    bgt @L_0200d9b4
    cmp r2, #0
    blt @L_0200d9b4
    cmpne r2, #1
    b @L_0200d9b4
@L_0200d998:
    add r0, r5, #1
    cmp r2, r0
    mvneq r0, r4, lsl r8
    ldreq r1, [r6, #0x30]
    moveq r2, r5
    andeq r0, r1, r0
    streq r0, [r6, #0x30]
@L_0200d9b4:
    ldr r0, =0x101
    cmp r2, r0
    bne @L_0200d9e0
    cmp r8, #0xd
    movhs r2, #4
    bhs @L_0200d9e0
    ldr r1, =data_020a4294
    mov r0, r9
    ldr r1, [r1, r8, lsl #2]
    blx r1
    mov r2, r0
@L_0200d9e0:
    cmp r7, #0
    beq @L_0200d9f8
    mov r0, r9
    mov r1, r2
    bl func_0200b37c
    mov r2, r0
@L_0200d9f8:
    mov r0, r2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_0200da08(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, [r1, #4]
    ldr lr, [r3]
    ldr r12, [r0, #8]
    ldr r0, [r0, #0xc]
    sub r0, r12, r0
    cmp lr, r0
    strhi r0, [r3]
    str lr, [r1, #0x34]
    str r2, [r1, #0x30]
    ldr r2, [r3]
    mov r0, r1
    str r2, [r1, #0x38]
    mov r1, #0
    mov r2, r1
    bl func_0200d938
    ldmia sp!, {r3, pc}
}

asm void func_0200da4c(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, [r1, #4]
    ldr lr, [r3]
    ldr r12, [r0, #8]
    ldr r0, [r0, #0xc]
    sub r0, r12, r0
    cmp lr, r0
    strhi r0, [r3]
    str lr, [r1, #0x34]
    str r2, [r1, #0x30]
    ldr r2, [r3]
    mov r0, r1
    str r2, [r1, #0x38]
    mov r1, #1
    mov r2, #0
    bl func_0200d938
    ldmia sp!, {r3, pc}
}

asm void func_0200da90(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    mov r12, r2, lsr #0x10
    strh r2, [r4, #0x34]
    mov r0, r4
    mov r1, #2
    mov r2, #1
    str r5, [r4, #8]
    str r5, [r4, #0x30]
    strh r12, [r4, #0x36]
    str r3, [r4, #0x38]
    bl func_0200d938
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r2, [r4, #0xc]
    add r1, r4, #0x20
    orr r2, r2, #0x20
    bic r2, r2, #0x10
    str r2, [r4, #0xc]
    stmib r4, {r1, r5}
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200dae8(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xa4
    add r3, sp, #0x10
    mov r4, #0
    mov r7, r0
    mov r6, r2
    mov r0, r1
    str r3, [r1, #0x30]
    str r4, [r1, #0x34]
    mov r1, #3
    mov r2, #1
    bl func_0200d938
    movs r5, r0
    bne @L_0200dc04
    str r4, [r6, #0x10]
    ldr r2, [sp, #0x20]
    add r0, sp, #0x24
    str r2, [r6, #0x118]
    add r1, r6, #0x14
    bl MI_CpuCopy8
    ldr r0, [r6, #0x118]
    add r0, r6, r0
    strb r4, [r0, #0x14]
    ldr r0, [sp, #0x1c]
    cmp r0, #0
    beq @L_0200db70
    mov r0, #0x100
    str r0, [r6, #0x11c]
    ldrh r1, [sp, #0x14]
    ldrh r0, [sp, #0x16]
    orr r0, r1, r0, lsl #16
    str r0, [r6, #0x16c]
    str r4, [r6, #0x168]
    b @L_0200dbe8
@L_0200db70:
    str r4, [r6, #0x11c]
    ldr r3, [sp, #0x14]
    str r3, [r6, #0x16c]
    str r4, [r6, #0x168]
    ldr r1, [r7, #0x20]
    mov r2, r3, lsl #3
    ldr r0, [r1, #8]
    cmp r0, r3, lsl #3
    bls @L_0200dbe8
    str r7, [sp]
    ldr r1, [r1, #4]
    add r0, sp, #0
    add r3, r1, r2
    add r1, sp, #8
    mov r2, #8
    str r3, [sp, #4]
    bl func_0200d040
    cmp r0, #0
    bne @L_0200dbe8
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #8]
    mov r0, r7
    sub r1, r2, r1
    str r1, [r6, #0x168]
    ldr r1, [sp, #8]
    bl func_0200e500
    cmp r0, #0
    ldrne r0, [r6, #0x11c]
    orrne r0, r0, #0x400
    strne r0, [r6, #0x11c]
@L_0200dbe8:
    mov r0, #0
    str r0, [r6, #0x138]
    str r0, [r6, #0x13c]
    str r0, [r6, #0x140]
    str r0, [r6, #0x144]
    str r0, [r6, #0x148]
    str r0, [r6, #0x14c]
@L_0200dc04:
    mov r0, r5
    add sp, sp, #0xa4
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void func_0200dc10(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x54
    add r4, sp, #0xc
    mov r8, r0
    mov r0, r4
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl FS_InitFile
    mov lr, #0
    ldr r12, [sp, #0x70]
    add r3, sp, #0
    mov r0, r4
    mov r1, #4
    mov r2, #1
    strh r7, [sp, #0x40]
    str r6, [sp, #0x48]
    str r12, [sp, #0x4c]
    str r8, [sp, #0x14]
    str r8, [sp, #0x3c]
    strh lr, [sp, #0x42]
    str lr, [sp, #0x44]
    str r3, [sp, #0x50]
    bl func_0200d938
    cmp r0, #0
    addne sp, sp, #0x54
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r1, [sp, #0x70]
    cmp r1, #0
    ldrneh r1, [sp, #4]
    strne r1, [r5]
    ldreq r1, [sp, #4]
    streq r1, [r5]
    add sp, sp, #0x54
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void func_0200dc9c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r1
    mov r0, #0
    ldr r4, [sp, #0x10]
    strh r0, [r5, #0x38]
    strh r0, [r5, #0x3a]
    str r3, [r5, #0x30]
    ldr r3, [r4]
    mov r0, r5
    mov r1, #5
    mov r2, #1
    str r3, [r5, #0x34]
    bl func_0200d938
    cmp r0, #0
    ldreq r1, [r5, #0x34]
    streq r1, [r4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200dce0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    str r2, [r4, #0x34]
    mov r0, r4
    mov r1, #6
    mov r2, #1
    str r5, [r4, #0x30]
    bl func_0200d938
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r2, [r4, #0xc]
    add r1, r4, #0x20
    orr r2, r2, #0x10
    bic r2, r2, #0x20
    str r2, [r4, #0xc]
    stmib r4, {r1, r5}
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200dd28(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    str r2, [r4, #0x30]
    ldr r1, [sp, #0x10]
    str r3, [r4, #0x34]
    ldr r3, [r1]
    mov r5, r0
    mov r0, r4
    mov r1, #7
    mov r2, #1
    str r3, [r4, #0x38]
    bl func_0200d938
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r2, [r4, #0xc]
    add r1, r4, #0x20
    orr r2, r2, #0x10
    bic r2, r2, #0x20
    str r2, [r4, #0xc]
    stmib r4, {r1, r5}
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200dd7c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    mov r0, r4
    mov r1, #8
    mov r2, #1
    bl func_0200d938
    ldr r1, [r4, #0xc]
    mov r2, #0
    bic r1, r1, #0x30
    str r2, [r4, #4]
    str r1, [r4, #0xc]
    ldmia sp!, {r4, pc}
}

asm void func_0200ddac(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x48
    add r4, sp, #0
    mov r5, r0
    mov r0, r4
    bl FS_InitFile
    mov r0, r4
    mov r1, #9
    mov r2, #0
    str r5, [sp, #8]
    bl func_0200d938
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200dde0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x48
    add r4, sp, #0
    mov r5, r0
    mov r0, r4
    bl FS_InitFile
    mov r0, r4
    mov r1, #0xa
    mov r2, #0
    str r5, [sp, #8]
    bl func_0200d938
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200de14(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x48
    add r4, sp, #0
    mov r5, r0
    mov r0, r4
    bl FS_InitFile
    mov r0, r4
    mov r1, #0xb
    mov r2, #0
    str r5, [sp, #8]
    bl func_0200d938
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200de48(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x48
    add r4, sp, #0
    mov r5, r0
    mov r0, r4
    bl FS_InitFile
    mov r0, r4
    mov r1, #0xc
    mov r2, #0
    str r5, [sp, #8]
    bl func_0200d938
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200de7c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r4, r1
    mov r1, r2
    mov r2, r3
    mov r12, #0
    add r3, sp, #4
    mov r5, r0
    str r12, [sp]
    bl func_0200dc10
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r2, [sp, #4]
    ldr r3, [sp, #0x18]
    mov r0, r5
    mov r1, r4
    bl func_0200dce0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200decc(void)
{
    cmp r3, #0
    ldr r1, [r1, #4]
    ldr r12, [r2]
    beq @L_0200def0
    cmp r3, #1
    beq @L_0200def8
    cmp r3, #2
    beq @L_0200df00
    b @L_0200def8
@L_0200def0:
    ldr r0, [r1, #4]
    b @L_0200df04
@L_0200def8:
    ldr r0, [r1, #0xc]
    b @L_0200df04
@L_0200df00:
    ldr r0, [r1, #8]
@L_0200df04:
    add r12, r12, r0
    ldr r0, [r1, #4]
    cmp r12, r0
    blt @L_0200df20
    ldr r0, [r1, #8]
    cmp r12, r0
    ble @L_0200df28
@L_0200df20:
    mov r0, #6
    bx lr
@L_0200df28:
    str r12, [r1, #0xc]
    str r12, [r2]
    mov r0, #0
    bx lr
}

asm void func_0200df38(void)
{
    ldr r1, [r1, #4]
    mov r0, #0
    ldr r3, [r1, #8]
    ldr r1, [r1, #4]
    sub r1, r3, r1
    str r1, [r2]
    bx lr
}

asm void func_0200df54(void)
{
    ldr r1, [r1, #4]
    mov r0, #0
    ldr r3, [r1, #0xc]
    ldr r1, [r1, #4]
    sub r1, r3, r1
    str r1, [r2]
    bx lr
}

asm void func_0200df70(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, [r0, #0x20]
    bl func_0200e4e4
    mov r0, #0
    str r0, [r4]
    str r0, [r4, #4]
    str r0, [r4, #8]
    str r0, [r4, #0xc]
    str r0, [r4, #0x10]
    str r0, [r4, #0x14]
    str r0, [r4, #0x18]
    ldmia sp!, {r4, pc}
}

asm void func_0200dfa0(void)
{
    mov r0, #0
    str r0, [r1]
    bx lr
}

asm void func_0200dfac(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r4, #0
    mov r5, r1
    mov r1, r2
    mov r2, r3
    add r3, sp, #4
    str r4, [sp, #4]
    mov r12, #1
    mov r6, r0
    str r12, [sp]
    bl func_0200dc10
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r2, [sp, #4]
    mov r0, r6
    mov r1, r5
    mov r3, r4
    bl func_0200da90
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0200e004(void)
{
    ldr r2, [r1, #0xc]
    mov r0, #0
    bic r2, r2, #0x30
    str r0, [r1, #4]
    str r2, [r1, #0xc]
    bx lr
}

asm void func_0200e01c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    mov r4, #0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    mov r9, r0
    mov r0, r6
    mov r1, r4
    mov r2, #0x54
    str r4, [sp, #0x14]
    mov r5, #5
    bl MI_CpuFill8
    mov r0, #1
    add r10, sp, #0x14
    str r0, [sp]
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r10
    bl func_0200dc10
    cmp r0, #0
    bne @L_0200e090
    mov r0, #0x100
    str r0, [r6]
    ldr r0, [sp, #0x14]
    mov r5, r4
    str r0, [r6, #0x50]
    b @L_0200e130
@L_0200e090:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r10
    str r4, [sp]
    bl func_0200dc10
    cmp r0, #0
    bne @L_0200e130
    str r4, [r6]
    ldr r0, [sp, #0x14]
    str r0, [r6, #0x50]
    str r4, [r6, #0x4c]
    ldr r3, [r9, #0x20]
    ldr r1, [sp, #0x14]
    ldr r0, [r3, #8]
    mov r2, r1, lsl #3
    cmp r0, r1, lsl #3
    bls @L_0200e12c
    str r9, [sp, #4]
    ldr r1, [r3, #4]
    add r0, sp, #4
    add r3, r1, r2
    add r1, sp, #0xc
    mov r2, #8
    str r3, [sp, #8]
    bl func_0200d040
    cmp r0, #0
    bne @L_0200e12c
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0xc]
    mov r0, r9
    sub r1, r2, r1
    str r1, [r6, #0x4c]
    ldr r1, [sp, #0xc]
    bl func_0200e500
    cmp r0, #0
    ldrne r0, [r6]
    orrne r0, r0, #0x400
    strne r0, [r6]
@L_0200e12c:
    mov r5, #0
@L_0200e130:
    ldr r1, [r6]
    mov r0, r5
    orr r1, r1, #0x200
    str r1, [r6]
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_0200e148(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    bl CARD_GetOwnRomHeader
    mov lr, #0
    str lr, [r4, #0x20]
    str lr, [r4, #0x24]
    str lr, [r4, #0x28]
    str lr, [r4, #0x2c]
    ldr r12, [r0, #0x80]
    mov r2, lr
    str r12, [r4]
    stmib r4, {r2, lr}
    sub r1, lr, #0x80000001
    mov r0, lr
    str lr, [r4, #0xc]
    str r1, [r4, #0x10]
    str lr, [r4, #0x14]
    str r1, [r4, #0x18]
    str lr, [r4, #0x1c]
    ldmia sp!, {r4, pc}
}

asm void func_0200e198(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r1
    mov r4, r3
    mov r1, r2
    bl func_0200e4d4
    mov r1, r5
    mov r2, r4
    bl MI_CpuCopy8
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200e1c0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r1
    mov r4, r3
    mov r1, r2
    bl func_0200e4d4
    mov r1, r0
    mov r0, r5
    mov r2, r4
    bl MI_CpuCopy8
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200e1ec(void)
{
    stmdb sp!, {r4, lr}
    ldr r12, [sp, #8]
    ldr r4, [sp, #0x10]
    str r12, [r0, #0x34]
    str r12, [r0, #0x40]
    ldr lr, [sp, #0xc]
    cmp r4, #0
    ldreq r4, =func_0200e198
    ldr r12, [sp, #0x14]
    str r1, [r0, #0x28]
    cmp r12, #0
    ldreq r12, =func_0200e1c0
    str r3, [r0, #0x30]
    mov r3, #0
    str r2, [r0, #0x2c]
    str r2, [r0, #0x3c]
    ldr r2, =data_020a42c8
    add r1, r0, #0x28
    str lr, [r0, #0x38]
    str r4, [r0, #0x48]
    str r12, [r0, #0x4c]
    str r3, [r0, #0x44]
    bl func_0200c1c8
    ldmia sp!, {r4, pc}
}

asm void func_0200e258(void)
{
    ldr r12, =func_0200c210
    bx r12
}

asm void func_0200e264(void)
{
    stmdb sp!, {r4, lr}
    mov lr, r0
    ldr r0, [lr, #8]
    ldr r3, =data_020a42c8
    ldr r12, [r0, #0x24]
    mov r2, r1
    cmp r12, r3
    mov r4, #0
    bne @L_0200e298
    mov r1, lr
    bl func_0200df38
    cmp r0, #0
    moveq r4, #1
@L_0200e298:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_0200e2a4(void)
{
    stmdb sp!, {r4, lr}
    mov lr, r0
    ldr r0, [lr, #8]
    ldr r3, =data_020a42c8
    ldr r12, [r0, #0x24]
    mov r2, r1
    cmp r12, r3
    mov r4, #0
    bne @L_0200e2d8
    mov r1, lr
    bl func_0200df54
    cmp r0, #0
    moveq r4, #1
@L_0200e2d8:
    mov r0, r4
    ldmia sp!, {r4, pc}
}
