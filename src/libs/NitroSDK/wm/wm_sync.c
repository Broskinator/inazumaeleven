// (asm for now)

void OS_DisableInterrupts(void);
void WMi_CheckInitialized(void);
void OS_RestoreInterrupts(void);
void func_02012844(void);
void MI_CpuFill8(void);
void func_02008564(void);
void WM_GetConnectedAIDs(void);
void WM_GetAID(void);
void DC_InvalidateRange(void);
void MIi_CpuCopyFast(void);
void func_020128b4(void);
extern char data_020aae14[];
void func_0201025c(void);
void func_020103e0(void);
void WMi_SetCallbackTable(void);
void func_02012dd4(void);
void func_02012728(void);
void func_020123ec(void);
void func_02012870(void);
void WmCheckParentParameter(void);
void DC_StoreRange(void);

asm void WM_SetIndCallback(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl OS_DisableInterrupts
    mov r5, r0
    bl WMi_CheckInitialized
    movs r4, r0
    beq @L_02012e54
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
@L_02012e54:
    bl func_02012844
    str r6, [r0, #0xc8]
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02012e6c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x44
    movs r5, r1
    mov r6, r0
    mov r4, r2
    beq @L_02012ed4
    mov r7, #0
    add r0, sp, #0
    mov r1, r7
    mov r2, #0x44
    bl MI_CpuFill8
    ldr r1, =0xffff
    mov r3, #0x82
    mov r2, #0x19
    add r0, sp, #0x14
    strh r3, [sp]
    strh r7, [sp, #2]
    strh r2, [sp, #4]
    strh r6, [sp, #6]
    str r7, [sp, #8]
    str r7, [sp, #0xc]
    strh r7, [sp, #0x10]
    strh r1, [sp, #0x1a]
    str r4, [sp, #0x1c]
    strh r7, [sp, #0x12]
    bl func_02008564
@L_02012ed4:
    bl OS_DisableInterrupts
    mov r8, r0
    bl WMi_CheckInitialized
    movs r7, r0
    beq @L_02012efc
    mov r0, r8
    bl OS_RestoreInterrupts
    add sp, sp, #0x44
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02012efc:
    bl func_02012844
    add r0, r0, r6, lsl #2
    str r5, [r0, #0xcc]
    str r4, [r0, #0x10c]
    cmp r5, #0
    beq @L_02012f2c
    bl WM_GetConnectedAIDs
    strh r0, [sp, #0x22]
    bl WM_GetAID
    strh r0, [sp, #0x20]
    add r0, sp, #0
    blx r5
@L_02012f2c:
    mov r0, r8
    bl OS_RestoreInterrupts
    mov r0, #0
    add sp, sp, #0x44
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void func_02012f44(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl func_02012844
    mov r5, r0
    bl WMi_CheckInitialized
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    cmp r6, #0
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r4, #0x7d0
    ldr r0, [r5, #4]
    mov r1, r4
    bl DC_InvalidateRange
    ldr r0, [r5, #4]
    mov r1, r6
    mov r2, r4
    bl MIi_CpuCopyFast
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02012f94(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl func_02012844
    mov r5, r0
    mov r0, #2
    mov r1, #7
    mov r2, #8
    bl func_020128b4
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #4]
    mov r4, #4
    mov r1, r4
    add r0, r0, #0xc
    bl DC_InvalidateRange
    ldr r2, [r5, #4]
    ldr r0, [r2, #0xc]
    cmp r0, #1
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r1, r4
    add r0, r2, #0x3c
    bl DC_InvalidateRange
    ldr r0, [r5, #4]
    ldrh r0, [r0, #0x3c]
    add r0, r0, #0x1f
    bic r0, r0, #0x1f
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02013004(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    bl func_02012844
    mov r5, #2
    mov r4, r0
    mov r0, r5
    mov r1, #7
    mov r2, #8
    bl func_020128b4
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #4]
    mov r1, #4
    add r0, r0, #0xc
    bl DC_InvalidateRange
    ldr r2, [r4, #4]
    ldr r0, [r2, #0xc]
    cmp r0, #1
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, r5
    add r0, r2, #0x188
    bl DC_InvalidateRange
    ldr r2, [r4, #4]
    mov r5, #2
    add r0, r2, #0x100
    ldrh r0, [r0, #0x88]
    mov r6, #1
    mov r1, r5
    cmp r0, #0
    add r0, r2, #0x3e
    movne r6, #0
    bl DC_InvalidateRange
    ldr r0, [r4, #4]
    cmp r6, #1
    ldrh r6, [r0, #0x3e]
    addne r0, r6, #0x51
    bicne r0, r0, #0x1f
    movne r0, r0, lsl #1
    ldmneia sp!, {r4, r5, r6, pc}
    mov r1, r5
    add r0, r0, #0xf8
    bl DC_InvalidateRange
    ldr r0, [r4, #4]
    add r1, r6, #0xc
    ldrh r0, [r0, #0xf8]
    mul r0, r1, r0
    add r0, r0, #0x29
    bic r0, r0, #0x1f
    mov r0, r0, lsl #1
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020130d0(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x3c
    mov r5, r0
    mov r4, r1
    bl func_02012844
    mov r6, r0
    bl WMi_CheckInitialized
    cmp r0, #0
    addne sp, sp, #0x3c
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, pc}
    cmp r4, #1
    blo @L_0201310c
    cmp r4, #0xf
    bls @L_02013118
@L_0201310c:
    add sp, sp, #0x3c
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02013118:
    ldr r0, [r6, #4]
    mov r1, #2
    add r0, r0, #0x82
    add r0, r0, #0x100
    bl DC_InvalidateRange
    ldr r0, [r6, #4]
    mov r1, #1
    add r0, r0, #0x100
    ldrh r0, [r0, #0x82]
    tst r0, r1, lsl r4
    addeq sp, sp, #0x3c
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r5, #4]
    cmp r0, #0
    beq @L_02013160
    cmp r0, #0xf
    bls @L_0201316c
@L_02013160:
    add sp, sp, #0x3c
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0201316c:
    add r0, r5, #0xa
    str r0, [sp]
    mov r6, #0
    add r3, sp, #0
@L_0201317c:
    ldr r0, [r3, r6, lsl #2]
    ldrh r1, [r0, #4]
    cmp r4, r1
    addeq sp, sp, #0x3c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    add r6, r6, #1
    add r1, r3, r6, lsl #2
    ldrh r0, [r5, #4]
    ldrh r2, [r5, #6]
    ldr r1, [r1, #-4]
    cmp r6, r0
    add r0, r2, r1
    str r0, [r3, r6, lsl #2]
    blt @L_0201317c
    mov r0, #0
    add sp, sp, #0x3c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_020131c0(void)
{
    stmdb sp!, {r3, lr}
    bl WMi_CheckInitialized
    cmp r0, #0
    movne r0, #0x8000
    ldreq r0, =0x2fffcfa
    ldreqh r0, [r0]
    ldmia sp!, {r3, pc}
}

asm void func_020131e0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl func_02012844
    mov r5, r0
    bl WMi_CheckInitialized
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #2
    ldr r0, [r5, #4]
    mov r1, r4
    bl DC_InvalidateRange
    ldr r1, [r5, #4]
    ldrh r0, [r1]
    cmp r0, #9
    beq @L_0201322c
    cmp r0, #0xa
    cmpne r0, #0xb
    beq @L_02013254
    b @L_0201326c
@L_0201322c:
    add r0, r1, #0x82
    mov r1, r4
    add r0, r0, #0x100
    bl DC_InvalidateRange
    ldr r1, [r5, #4]
    add r0, r1, #0x100
    ldrh r0, [r0, #0x82]
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_02013254:
    add r0, r1, #0xbc
    mov r1, #2
    bl DC_InvalidateRange
    ldr r0, [r5, #4]
    ldrh r0, [r0, #0xbc]
    ldmia sp!, {r3, r4, r5, pc}
@L_0201326c:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02013274(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    add r4, sp, #0
    mov r0, r4
    bl func_02008564
    mov r2, #0
    mov r1, r2
@L_02013290:
    ldrb r0, [r4, r2]
    add r2, r2, #1
    cmp r2, #6
    add r0, r1, r0
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    blt @L_02013290
    ldr r0, =0x2fffc3c
    ldr r12, =0x66666667
    ldr r0, [r0]
    mov r3, #0x14
    mov r0, r0, lsl #0x10
    add r0, r1, r0, lsr #16
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    rsb r0, r0, r0, lsl #3
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r1, r2, lsr #0x1f
    smull r2, lr, r12, r2
    add lr, r1, lr, asr #3
    smull r1, r2, r3, lr
    rsb lr, r1, r0, lsr #16
    add r0, lr, #0xc8
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

asm void func_02013308(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    add r4, sp, #0
    mov r0, r4
    bl func_02008564
    mov r1, #0
    mov r2, r1
@L_02013324:
    ldrb r0, [r4, r1]
    add r1, r1, #1
    cmp r1, #6
    add r0, r2, r0
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    blt @L_02013324
    ldr r0, =0x2fffc3c
    mov r1, #0xd
    ldr r0, [r0]
    ldr r3, =0x66666667
    mov r0, r0, lsl #0x10
    add r0, r2, r0, lsr #16
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mul r0, r2, r1
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r1, r2, lsr #0x1f
    smull r2, r12, r3, r2
    add r12, r1, r12, asr #2
    mov r3, #0xa
    smull r1, r2, r3, r12
    rsb r12, r1, r0, lsr #16
    add r0, r12, #0x1e
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

asm void func_020133a0(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x84
    ldrh r2, [r1, #0x3c]
    mov lr, r0
    cmp r2, #0
    beq @L_020133e8
    mov r0, #0
    add r5, sp, #0
    strb r0, [sp]
    mov r4, #8
@L_020133c8:
    ldmia r5!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs r4, r4, #1
    bne @L_020133c8
    ldr r0, [r5]
    add sp, sp, #0x84
    str r0, [lr]
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_020133e8:
    ldrh r0, [r1, #0x3e]
    strb r0, [sp]
    ands r0, r0, #0xff
    bne @L_02013420
    add r5, sp, #0
    mov r4, #8
@L_02013400:
    ldmia r5!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs r4, r4, #1
    bne @L_02013400
    ldr r0, [r5]
    add sp, sp, #0x84
    str r0, [lr]
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_02013420:
    ldrh r2, [r1]
    cmp r0, #0x10
    movhi r0, #0x10
    strhib r0, [sp]
    ldrb r0, [sp]
    mov r2, r2, lsl #1
    sub r4, r2, #0x40
    mov r3, #0
    cmp r0, #0
    mov r2, r3
    add r0, r1, #0x40
    mov r4, r4, lsl #0x10
    ble @L_020134d0
    add r12, sp, #0
@L_02013458:
    ldrb r5, [r0, #1]
    ldrb r7, [r0]
    add r6, r12, r2, lsl #3
    add r1, r5, #2
    mov r1, r1, lsl #0x10
    add r3, r3, r1, lsr #16
    strb r7, [r6, #4]
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    strb r5, [r6, #5]
    add r5, r0, #2
    str r5, [r6, #8]
    cmp r3, r4, lsr #16
    bls @L_020134bc
    mov r0, #0
    strb r0, [sp]
    mov r4, #8
@L_0201349c:
    ldmia r12!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs r4, r4, #1
    bne @L_0201349c
    ldr r0, [r12]
    add sp, sp, #0x84
    str r0, [lr]
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_020134bc:
    ldrb r5, [sp]
    add r2, r2, #1
    add r0, r0, r1, lsr #16
    cmp r2, r5
    blt @L_02013458
@L_020134d0:
    add r12, sp, #0
    mov r4, #8
@L_020134d8:
    ldmia r12!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs r4, r4, #1
    bne @L_020134d8
    ldr r0, [r12]
    str r0, [lr]
    add sp, sp, #0x84
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void func_020134f8(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r4, =data_020aae14
    ldr r0, [r4]
    cmp r0, #0x10000
    bne @L_0201353c
    bl func_0201025c
    add r0, sp, #0
    bl func_020103e0
    cmp r0, #0
    bne @L_0201353c
    ldr r1, [sp, #8]
    ldr r0, [sp, #4]
    add r0, r1, r0, lsl #8
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [r4]
@L_0201353c:
    ldr r1, =data_020aae14
    ldr r0, [r1]
    add r0, r0, #1
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r2, lsl #0x10
    str r2, [r1]
    mov r0, r0, lsr #0x10
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
}

asm void func_02013568(void)
{
    ldr r12, =func_02013578
    mov r1, #0
    bx r12
}

asm void func_02013578(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r6, r0
    mov r5, r1
    mov r0, #1
    mov r1, #0
    bl func_020128b4
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, pc}
    mov r4, #3
    mov r0, r4
    mov r1, r6
    bl WMi_SetCallbackTable
    bl func_02012dd4
    bl func_02012844
    mov r3, r0
    ldr r2, [r3, #0x10]
    mov r0, r4
    stmia sp, {r2, r5}
    mov r1, #4
    ldmia r3, {r2, r3}
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020135e4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #1
    mov r1, r0
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #4
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

asm void func_02013628(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #1
    mov r1, r0
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #5
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

asm void func_0201366c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, #2
    mov r6, r0
    mov r1, r5
    mov r0, #1
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r4, #6
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

asm void func_020136b4(void)
{
    ldr r12, =func_020136c4
    mov r3, #0
    bx r12
}

asm void func_020136c4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r6, r1
    mov r1, r2
    mov r5, r3
    bl func_020123ec
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, pc}
    mov r4, #0
    mov r0, r4
    mov r1, r6
    bl WMi_SetCallbackTable
    bl func_02012dd4
    bl func_02012844
    mov r3, r0
    ldr r2, [r3, #0x10]
    mov r0, r4
    stmia sp, {r2, r5}
    mov r1, #4
    ldmia r3, {r2, r3}
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0201372c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_02012870
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #1
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

asm void func_02013768(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #2
    mov r5, r0
    mov r1, r4
    mov r0, #1
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r4
    mov r1, r5
    bl WMi_SetCallbackTable
    mov r0, r4
    mov r1, #0
    bl func_02012728
    cmp r0, #0
    moveq r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020137ac(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    mov r0, #1
    mov r1, #2
    bl func_020128b4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    cmp r4, #0
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r4, #4]
    cmp r0, #0
    beq @L_020137f4
    ldr r0, [r4]
    cmp r0, #0
    moveq r0, #6
    ldmeqia sp!, {r3, r4, r5, pc}
@L_020137f4:
    ldrh r1, [r4, #0x14]
    ldrh r0, [r4, #0x34]
    mov r2, #0x2a
    cmp r1, #0
    moveq r2, #0
    add r0, r0, r2
    cmp r0, #0x200
    bgt @L_02013830
    ldrh r0, [r4, #0x36]
    cmp r1, #0
    movne r1, #6
    moveq r1, #0
    add r0, r0, r1
    cmp r0, #0x200
    ble @L_02013838
@L_02013830:
    mov r0, #6
    ldmia sp!, {r3, r4, r5, pc}
@L_02013838:
    mov r0, r4
    bl WmCheckParentParameter
    mov r1, r5
    mov r0, #7
    bl WMi_SetCallbackTable
    mov r0, r4
    mov r1, #0x40
    bl DC_StoreRange
    ldrh r1, [r4, #4]
    cmp r1, #0
    beq @L_0201386c
    ldr r0, [r4]
    bl DC_StoreRange
@L_0201386c:
    mov r2, r4
    mov r0, #7
    mov r1, #1
    bl func_02012728
    cmp r0, #0
    moveq r0, #2
    ldmia sp!, {r3, r4, r5, pc}
}
