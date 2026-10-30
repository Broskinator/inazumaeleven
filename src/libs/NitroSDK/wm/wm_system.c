// (asm for now)

void WMi_SetCallbackTable(void);
void func_020126c8(void);
void func_02012728(void);
void func_020127d4(void);
void func_02012844(void);
void WMi_CheckInitialized(void);
void func_02012870(void);
void func_020128b4(void);
void func_02012944(void);
void func_02012d2c(void);
void WMi_GetStatusAddress(void);
void WM_GetAID(void);
void WM_GetConnectedAIDs(void);
void func_02012dd4(void);
void func_02012e08(void);
void func_02012e1c(void);

extern char data_020bdd6c[];
extern char data_020bdd84[];
void func_020068c0(void);
void DC_InvalidateRange(void);
void func_02006960(void);
void DC_StoreRange(void);
void func_0200b138(void);
void OS_SendMessage(void);
void MI_CpuCopy8(void);
void func_0200878c(void);
void func_02012640(void);
extern char data_020bddcc[];
void MI_CpuFill8(void);
extern char data_020bdde0[];
extern char data_020bddf0[];
void MIi_CpuCopy16(void);
void MIi_CpuClear16(void);
void OS_DisableInterrupts(void);
void OS_RestoreInterrupts(void);
extern char data_020bdd74[];
void func_02010144(void);
void func_02010168(void);

asm void WMi_SetCallbackTable(void)
{
    ldr r2, =data_020bdd6c
    ldr r2, [r2, #4]
    add r0, r2, r0, lsl #2
    str r1, [r0, #0x18]
    bx lr
}

asm void func_020126c8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =data_020bdd84
    mov r4, #0
    add r1, sp, #0
    mov r0, r5
    mov r2, r4
    bl func_020068c0
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [sp]
    mov r1, #2
    bl DC_InvalidateRange
    ldr r1, [sp]
    ldrh r0, [r1]
    tst r0, #0x8000
    movne r0, r1
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r2, #1
    bl func_02006960
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02012728(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_020126c8
    movs r4, r0
    moveq r0, #8
    ldmeqia sp!, {r3, r4, r5, lr}
    addeq sp, sp, #0x10
    bxeq lr
    strh r5, [r4]
    ldrh r5, [sp, #0x14]
    add r0, sp, #0x14
    bic r0, r0, #3
    mov r3, #0
    cmp r5, #0
    add r2, r0, #4
    ble @L_02012788
@L_0201276c:
    add r2, r2, #4
    ldr r1, [r2, #-4]
    add r0, r4, r3, lsl #2
    add r3, r3, #1
    str r1, [r0, #4]
    cmp r3, r5
    blt @L_0201276c
@L_02012788:
    mov r0, r4
    mov r1, #0x100
    bl DC_StoreRange
    mov r1, r4
    mov r0, #0xa
    mov r2, #0
    bl func_0200b138
    mov r5, r0
    ldr r0, =data_020bdd84
    mov r1, r4
    mov r2, #1
    bl OS_SendMessage
    mov r0, #8
    cmp r5, #0
    movge r0, #2
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_020127d4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, r1
    bl func_020126c8
    movs r5, r0
    moveq r0, #8
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl MI_CpuCopy8
    mov r0, r5
    mov r1, r4
    bl DC_StoreRange
    mov r1, r5
    mov r0, #0xa
    mov r2, #0
    bl func_0200b138
    mov r4, r0
    ldr r0, =data_020bdd84
    mov r1, r5
    mov r2, #1
    bl OS_SendMessage
    mov r0, #8
    cmp r4, #0
    movge r0, #2
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02012844(void)
{
    ldr r0, =data_020bdd6c
    ldr r0, [r0, #4]
    bx lr
}

asm void WMi_CheckInitialized(void)
{
    ldr r0, =data_020bdd6c
    ldrh r0, [r0]
    cmp r0, #0
    movne r0, #0
    moveq r0, #3
    bx lr
}

asm void func_02012870(void)
{
    stmdb sp!, {r4, lr}
    bl WMi_CheckInitialized
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    ldr r4, =data_020bdd6c
    mov r1, #2
    ldr r0, [r4, #4]
    ldr r0, [r0, #4]
    bl DC_InvalidateRange
    ldr r0, [r4, #4]
    ldr r0, [r0, #4]
    ldrh r0, [r0]
    cmp r0, #1
    movls r0, #3
    movhi r0, #0
    ldmia sp!, {r4, pc}
}

asm void func_020128b4(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, lr}
    bl WMi_CheckInitialized
    cmp r0, #0
    ldmneia sp!, {r4, lr}
    addne sp, sp, #0x10
    bxne lr
    ldr r4, =data_020bdd6c
    mov r1, #2
    ldr r0, [r4, #4]
    ldr r0, [r0, #4]
    bl DC_InvalidateRange
    ldr r1, [r4, #4]
    add r0, sp, #8
    ldr r1, [r1, #4]
    ldr r3, [sp, #8]
    bic r0, r0, #3
    add r4, r0, #4
    cmp r3, #0
    ldrh r12, [r1]
    mov r0, #3
    ldmeqia sp!, {r4, lr}
    addeq sp, sp, #0x10
    bxeq lr
    mov r1, #0
@L_02012918:
    add r4, r4, #4
    ldr r2, [r4, #-4]
    cmp r2, r12
    moveq r0, r1
    subs r3, r3, #1
    str r3, [sp, #8]
    bne @L_02012918
    ldmia sp!, {r4, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02012944(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r0, =data_020bdd6c
    cmp r2, #0
    ldr r4, [r0, #4]
    mov r10, r1
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0x10]
    mov r1, #0x100
    bl DC_InvalidateRange
    ldrh r0, [r4, #0x16]
    cmp r0, #0
    bne @L_02012988
    ldr r0, [r4, #4]
    mov r1, #0x800
    bl DC_InvalidateRange
@L_02012988:
    ldr r0, [r4, #0x10]
    cmp r10, r0
    beq @L_020129a0
    mov r0, r10
    mov r1, #0x100
    bl DC_InvalidateRange
@L_020129a0:
    ldrh r0, [r10]
    cmp r0, #0x2c
    blo @L_02012a4c
    cmp r0, #0x80
    bne @L_020129dc
    ldrh r0, [r10, #2]
    cmp r0, #0x13
    bne @L_020129c4
    bl func_0200878c
@L_020129c4:
    ldr r1, [r4, #0xc8]
    cmp r1, #0
    beq @L_02012cd4
@L_020129d0:
    mov r0, r10
@L_020129d4:
    blx r1
    b @L_02012cd4
@L_020129dc:
    cmp r0, #0x82
    bne @L_02012a2c
    ldrh r0, [r10, #6]
    add r1, r4, r0, lsl #2
    ldr r0, [r1, #0xcc]
    cmp r0, #0
    beq @L_02012cd4
    ldr r0, [r1, #0x10c]
    str r0, [r10, #0x1c]
    ldr r0, [r4, #0x14c]
    strh r0, [r10, #0x22]
    ldr r1, [r4, #4]
    ldr r0, [r10, #8]
    ldrh r1, [r1, #0x72]
    bl DC_InvalidateRange
    ldrh r1, [r10, #6]
    mov r0, r10
    add r1, r4, r1, lsl #2
    ldr r1, [r1, #0xcc]
    b @L_020129d4
@L_02012a2c:
    cmp r0, #0x81
    bne @L_02012cd4
    mov r0, #0xf
    strh r0, [r10]
    ldr r1, [r10, #0x1c]
    cmp r1, #0
    beq @L_02012cd4
    b @L_020129d0
@L_02012a4c:
    cmp r0, #0xe
    bne @L_02012a8c
    ldrh r0, [r10, #4]
    add r0, r0, #0xf5
    add r0, r0, #0xff00
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #1
    bhi @L_02012a8c
    ldrh r0, [r10, #2]
    cmp r0, #0
    bne @L_02012a8c
    ldr r1, [r4, #4]
    ldr r0, [r10, #8]
    ldrh r1, [r1, #0x72]
    bl DC_InvalidateRange
@L_02012a8c:
    ldrh r1, [r10]
    cmp r1, #4
    cmpne r1, #2
    bne @L_02012aa8
    ldrh r0, [r10, #2]
    cmp r0, #0
    beq @L_02012ac4
@L_02012aa8:
    cmp r1, #3
    beq @L_02012ab8
    cmp r1, #0
    bne @L_02012ac8
@L_02012ab8:
    ldrh r0, [r10, #2]
    cmp r0, #0
    beq @L_02012ac8
@L_02012ac4:
    bl func_02012e08
@L_02012ac8:
    ldrh r1, [r10]
    cmp r1, #2
    ldreqh r0, [r10, #2]
    cmpeq r0, #0
    add r0, r4, r1, lsl #2
    bne @L_02012b04
    ldr r4, [r0, #0x18]
    bl func_02012640
    cmp r4, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    blx r4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02012b04:
    ldr r1, [r0, #0x18]
    cmp r1, #0
    beq @L_02012b2c
    mov r0, r10
    blx r1
    ldr r0, =data_020bdd6c
    ldrh r0, [r0]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02012b2c:
    ldrh r0, [r10]
    cmp r0, #8
    beq @L_02012b40
    cmp r0, #0xc
    bne @L_02012cd4
@L_02012b40:
    cmp r0, #8
    bne @L_02012b74
    add r0, r10, #0xa
    str r0, [sp]
    ldrh r5, [r10, #8]
    ldrh r6, [r10, #0x10]
    ldrh r0, [r10, #0x12]
    add r11, r10, #0x14
    mov r7, #0
    str r0, [sp, #4]
    ldrh r8, [r10, #0x2c]
    ldrh r9, [r10, #0x2e]
    b @L_02012ba4
@L_02012b74:
    cmp r0, #0xc
    bne @L_02012ba4
    ldrh r5, [r10, #8]
    ldrh r7, [r10, #0xa]
    ldrh r0, [r10, #0xc]
    mov r6, #0
    mov r11, r6
    str r0, [sp, #4]
    add r0, r10, #0x10
    ldrh r8, [r10, #0x16]
    ldrh r9, [r10, #0x18]
    str r0, [sp]
@L_02012ba4:
    cmp r5, #7
    cmpne r5, #9
    beq @L_02012bb8
    cmp r5, #0x1a
    bne @L_02012cd4
@L_02012bb8:
    cmp r5, #7
    ldreq r1, [r4, #0x14c]
    mov r0, #1
    orreq r0, r1, r0, lsl r6
    mvnne r0, r0, lsl r6
    ldrne r1, [r4, #0x14c]
    mov r2, #0x44
    andne r0, r1, r0
    str r0, [r4, #0x14c]
    add r1, r4, #0x100
    strh r7, [r1, #0x50]
    ldr r0, =data_020bddcc
    mov r1, #0
    bl MI_CpuFill8
    ldr r1, =data_020bddcc
    mov r2, #0x82
    strh r2, [r1]
    mov r2, #0
    strh r2, [r1, #2]
    strh r5, [r1, #4]
    str r2, [r1, #8]
    str r2, [r1, #0xc]
    strh r2, [r1, #0x10]
    strh r6, [r1, #0x12]
    strh r7, [r1, #0x20]
    ldr r3, [r4, #0x14c]
    ldr r2, =0xffff
    strh r3, [r1, #0x22]
    strh r2, [r1, #0x1a]
    ldr r3, [sp, #4]
    ldr r2, =data_020bddcc
    ldr r0, [sp]
    strh r3, [r2, #0x3c]
    ldr r1, =data_020bdde0
    mov r2, #6
    bl MI_CpuCopy8
    cmp r11, #0
    mov r2, #0x18
    beq @L_02012c64
    ldr r1, =data_020bddf0
    mov r0, r11
    bl MIi_CpuCopy16
    b @L_02012c70
@L_02012c64:
    ldr r1, =data_020bddf0
    mov r0, #0
    bl MIi_CpuClear16
@L_02012c70:
    mov r1, r8
    cmp r7, #0
    movne r1, r9
    ldr r0, =data_020bddcc
    cmp r7, #0
    ldr r5, =data_020bddcc
    strh r1, [r0, #0x40]
    movne r9, r8
    mov r6, #0
    strh r9, [r5, #0x42]
@L_02012c98:
    strh r6, [r5, #6]
    add r2, r4, r6, lsl #2
    ldr r0, [r2, #0xcc]
    cmp r0, #0
    beq @L_02012cc0
    ldr r1, [r2, #0x10c]
    mov r0, r5
    str r1, [r5, #0x1c]
    ldr r1, [r2, #0xcc]
    blx r1
@L_02012cc0:
    add r0, r6, #1
    mov r0, r0, lsl #0x10
    mov r6, r0, lsr #0x10
    cmp r6, #0x10
    blo @L_02012c98
@L_02012cd4:
    mov r5, #0x100
    ldr r0, [r4, #0x10]
    mov r1, r5
    bl DC_InvalidateRange
    bl func_02012d2c
    ldr r0, [r4, #0x10]
    cmp r10, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r2, [r10]
    mov r0, r10
    mov r1, r5
    orr r2, r2, #0x8000
    strh r2, [r10]
    bl DC_StoreRange
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02012d2c(void)
{
    ldr r2, =0x2ffff96
    ldrh r1, [r2]
    tst r1, #1
    ldrne r0, =0xfffe
    andne r0, r1, r0
    strneh r0, [r2]
    bx lr
}

asm void WMi_GetStatusAddress(void)
{
    stmdb sp!, {r3, lr}
    bl WMi_CheckInitialized
    cmp r0, #0
    movne r0, #0
    ldreq r0, =data_020bdd6c
    ldreq r0, [r0, #4]
    ldreq r0, [r0, #4]
    ldmia sp!, {r3, pc}
}

asm void WM_GetAID(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =data_020bdd6c
    ldr r1, [r1, #4]
    cmp r1, #0
    addne r1, r1, #0x100
    ldrneh r4, [r1, #0x50]
    moveq r4, #0
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void WM_GetConnectedAIDs(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =data_020bdd6c
    ldr r1, [r1, #4]
    cmp r1, #0
    ldrne r4, [r1, #0x14c]
    moveq r4, #0
    bl OS_RestoreInterrupts
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r4, pc}
}

asm void func_02012dd4(void)
{
    ldr r1, =func_02012e1c
    ldr r2, =data_020bdd6c
    ldr r0, =data_020bdd74
    str r1, [r2, #8]
    mov r3, #0
    ldr r12, =func_02010144
    mov r1, #0x3e8
    str r3, [r2, #0xc]
    bx r12
}

asm void func_02012e08(void)
{
    ldr r0, =data_020bdd74
    ldr r12, =func_02010168
    bx r12
}

asm void func_02012e1c(void)
{
    ldr r12, =func_0200878c
    bx r12
}
