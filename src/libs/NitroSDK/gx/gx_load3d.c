// (asm for now)

void GX_BeginLoadTex(void);
void GX_LoadTex(void);
void GX_EndLoadTex(void);
void GX_BeginLoadTexPltt(void);
void GX_LoadTexPltt(void);
void GX_EndLoadTexPltt(void);
void GX_VRAMCNT_SetLCDC_(void);
void GX_SetBankForBG(void);
void GX_SetBankForOBJ(void);
void GX_SetBankForBGExtPltt(void);
void GX_SetBankForOBJExtPltt(void);
void GX_SetBankForTex(void);
void GX_SetBankForTexPltt(void);
void GX_SetBankForClearImage(void);
void GX_SetBankForARM7(void);
void GX_SetBankForLCDC(void);
void GX_SetBankForSubBG(void);

void GX_ResetBankForTex(void);
extern char data_020a3e0c[];
extern char data_020a3e0e[];
extern char data_020a3e10[];
extern char sClrImg[];
extern char GXi_DmaId[];
void MIi_DmaCopy32(void);
void MIi_CpuCopy32(void);
void MIi_DmaCopy32Async(void);
void MI_WaitDma(void);
void GX_ResetBankForTexPltt(void);
extern char data_020a3dfc[];
extern char gGXState[];

asm void GX_BeginLoadTex(void)
{
    stmdb sp!, {r3, lr}
    bl GX_ResetBankForTex
    mov r1, #6
    mul lr, r0, r1
    ldr r2, =data_020a3e0c
    ldr r1, =data_020a3e0e
    ldrh r12, [r2, lr]
    ldr r2, =data_020a3e10
    ldrh r3, [r1, lr]
    ldr r1, =sClrImg
    ldrh r2, [r2, lr]
    str r0, [r1, #0x14]
    mov r0, r12, lsl #0xc
    str r0, [r1, #4]
    mov r0, r3, lsl #0xc
    str r0, [r1, #0x18]
    mov r0, r2, lsl #0xc
    str r0, [r1, #0x1c]
    ldmia sp!, {r3, pc}
}

asm void GX_LoadTex(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    ldr r3, =sClrImg
    mov r7, r0
    ldr r4, [r3, #0x18]
    mov r12, r1
    cmp r4, #0
    ldreq r0, [r3, #4]
    mov r6, r2
    addeq r2, r0, r12
    beq @L_02003fe0
    ldr r1, [r3, #0x1c]
    add r0, r12, r6
    cmp r0, r1
    ldrlo r0, [r3, #4]
    addlo r2, r0, r12
    blo @L_02003fe0
    cmp r12, r1
    addhs r0, r4, r12
    subhs r2, r0, r1
    bhs @L_02003fe0
    ldr r0, =GXi_DmaId
    sub r5, r1, r12
    ldr r0, [r0]
    ldr r8, [r3, #4]
    cmn r0, #1
    beq @L_02003f7c
    cmp r5, #0x30
    bls @L_02003f7c
    mov lr, #1
    mov r1, r7
    mov r3, r5
    add r2, r8, r12
    str lr, [sp]
    bl MIi_DmaCopy32
    b @L_02003f8c
@L_02003f7c:
    mov r0, r7
    mov r2, r5
    add r1, r8, r12
    bl MIi_CpuCopy32
@L_02003f8c:
    ldr r0, =GXi_DmaId
    ldr r0, [r0]
    cmn r0, #1
    beq @L_02003fc8
    mov r1, #0
    str r1, [sp]
    mov r2, r4
    str r1, [sp, #4]
    mov r4, #1
    add r1, r7, r5
    sub r3, r6, r5
    str r4, [sp, #8]
    bl MIi_DmaCopy32Async
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02003fc8:
    mov r1, r4
    add r0, r7, r5
    sub r2, r6, r5
    bl MIi_CpuCopy32
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02003fe0:
    ldr r0, =GXi_DmaId
    ldr r0, [r0]
    cmn r0, #1
    beq @L_02004018
    mov r4, #0
    str r4, [sp]
    str r4, [sp, #4]
    mov r4, #1
    mov r1, r7
    mov r3, r6
    str r4, [sp, #8]
    bl MIi_DmaCopy32Async
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02004018:
    mov r1, r2
    mov r0, r7
    mov r2, r6
    bl MIi_CpuCopy32
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void GX_EndLoadTex(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, =GXi_DmaId
    ldr r0, [r0]
    cmn r0, #1
    beq @L_02004050
    bl MI_WaitDma
@L_02004050:
    ldr r4, =sClrImg
    ldr r0, [r4, #0x14]
    bl GX_SetBankForTex
    mov r0, #0
    str r0, [r4, #0x1c]
    str r0, [r4, #0x18]
    str r0, [r4, #4]
    str r0, [r4, #0x14]
    ldmia sp!, {r4, pc}
}

asm void GX_BeginLoadTexPltt(void)
{
    stmdb sp!, {r3, lr}
    bl GX_ResetBankForTexPltt
    mov r3, r0, asr #4
    ldr r1, =sClrImg
    ldr r2, =data_020a3dfc
    mov r3, r3, lsl #1
    ldrh r2, [r2, r3]
    str r0, [r1, #0xc]
    mov r0, r2, lsl #0xc
    str r0, [r1, #8]
    ldmia sp!, {r3, pc}
}

asm void GX_LoadTexPltt(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    ldr r3, =GXi_DmaId
    ldr r12, =sClrImg
    ldr lr, [r3]
    mov r6, r0
    mov r5, r1
    mov r3, r2
    cmn lr, #1
    ldr r4, [r12, #8]
    beq @L_02004108
    mov r2, #0
    str r2, [sp]
    str r2, [sp, #4]
    mov r12, #1
    mov r0, lr
    mov r1, r6
    add r2, r4, r5
    str r12, [sp, #8]
    bl MIi_DmaCopy32Async
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02004108:
    add r1, r4, r5
    bl MIi_CpuCopy32
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void GX_EndLoadTexPltt(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, =GXi_DmaId
    ldr r0, [r0]
    cmn r0, #1
    beq @L_02004138
    bl MI_WaitDma
@L_02004138:
    ldr r4, =sClrImg
    ldr r0, [r4, #0xc]
    bl GX_SetBankForTexPltt
    mov r0, #0
    str r0, [r4, #0xc]
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

asm void GX_VRAMCNT_SetLCDC_(void)
{
    tst r0, #1
    ldrne r1, =0x4000240
    mov r2, #0x80
    strneb r2, [r1]
    tst r0, #2
    ldrne r1, =0x4000241
    strneb r2, [r1]
    tst r0, #4
    ldrne r1, =0x4000242
    strneb r2, [r1]
    tst r0, #8
    ldrne r1, =0x4000243
    strneb r2, [r1]
    tst r0, #0x10
    ldrne r1, =0x4000244
    strneb r2, [r1]
    tst r0, #0x20
    ldrne r1, =0x4000245
    strneb r2, [r1]
    tst r0, #0x40
    ldrne r1, =0x4000246
    strneb r2, [r1]
    tst r0, #0x80
    ldrne r1, =0x4000248
    strneb r2, [r1]
    tst r0, #0x100
    ldrne r0, =0x4000249
    strneb r2, [r0]
    bx lr
}

asm void GX_SetBankForBG(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =gGXState
    mvn lr, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #2]
    cmp r0, #0x40
    ldr r12, =0x4000243
    orr r2, r3, r2
    and r2, lr, r2
    strh r2, [r1]
    strh r0, [r1, #2]
    mov r3, #0x91
    mov r1, #0x89
    mov r2, #0x81
    bgt @L_020042dc
    cmp r0, #0x40
    bge @L_020043c0
    cmp r0, #0x20
    bgt @L_020042d0
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b @L_020043c8
    b @L_020043c8
    b @L_02004348
    b @L_02004328
    b @L_02004340
    b @L_02004314
    b @L_02004368
    b @L_02004320
    b @L_02004338
    b @L_02004308
    b @L_02004378
    b @L_02004388
    b @L_02004350
    b @L_02004310
    b @L_02004364
    b @L_0200431c
    b @L_02004330
    b @L_020043a4
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043c8
    b @L_020043b8
@L_020042d0:
    cmp r0, #0x30
    beq @L_0200439c
    b @L_020043c8
@L_020042dc:
    cmp r0, #0x60
    bgt @L_020042fc
    bge @L_020043b0
    cmp r0, #0x50
    ldreq r0, =0x4000246
    streqb r3, [r0]
    streqb r2, [r0, #-2]
    b @L_020043c8
@L_020042fc:
    cmp r0, #0x70
    beq @L_02004390
    b @L_020043c8
@L_02004308:
    strb r2, [r12]
    b @L_020043c8
@L_02004310:
    strb r1, [r12]
@L_02004314:
    ldr r0, =0x4000242
    b @L_020043c4
@L_0200431c:
    strb r3, [r12]
@L_02004320:
    ldr r0, =0x4000242
    strb r1, [r0]
@L_02004328:
    ldr r0, =0x4000241
    b @L_020043c4
@L_02004330:
    mov r0, #0x99
    strb r0, [r12]
@L_02004338:
    ldr r0, =0x4000242
    strb r3, [r0]
@L_02004340:
    ldr r0, =0x4000241
    strb r1, [r0]
@L_02004348:
    ldr r0, =0x4000240
    b @L_020043c4
@L_02004350:
    ldr r0, =0x4000240
    strb r2, [r0]
    strb r1, [r0, #1]
    strb r3, [r0, #3]
    b @L_020043c8
@L_02004364:
    strb r3, [r12]
@L_02004368:
    ldr r0, =0x4000240
@L_0200436c:
    strb r2, [r0]
    strb r1, [r0, #2]
    b @L_020043c8
@L_02004378:
    ldr r0, =0x4000240
    strb r2, [r0]
    strb r1, [r0, #3]
    b @L_020043c8
@L_02004388:
    ldr r0, =0x4000241
    b @L_0200436c
@L_02004390:
    ldr r0, =0x4000246
    mov r1, #0x99
    strb r1, [r0]
@L_0200439c:
    ldr r0, =0x4000245
    strb r3, [r0]
@L_020043a4:
    ldr r0, =0x4000244
    strb r2, [r0]
    b @L_020043c8
@L_020043b0:
    ldr r0, =0x4000246
    strb r1, [r0]
@L_020043b8:
    ldr r0, =0x4000245
    b @L_020043c4
@L_020043c0:
    ldr r0, =0x4000246
@L_020043c4:
    strb r2, [r0]
@L_020043c8:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForOBJ(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =gGXState
    mvn lr, r0
    ldrh r12, [r2]
    ldrh r3, [r2, #4]
    cmp r0, #0x30
    mov r1, #0x82
    orr r3, r12, r3
    and r3, lr, r3
    strh r3, [r2]
    strh r0, [r2, #4]
    bgt @L_02004464
    cmp r0, #0x30
    bge @L_020044c4
    cmp r0, #0x10
    bgt @L_02004458
    bge @L_020044d0
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_02004500
    b @L_02004500
    b @L_020044a8
    b @L_020044b0
    b @L_0200449c
@L_02004458:
    cmp r0, #0x20
    beq @L_020044f8
    b @L_02004500
@L_02004464:
    cmp r0, #0x50
    bgt @L_02004480
    bge @L_020044d8
    cmp r0, #0x40
    ldreq r0, =0x4000246
    streqb r1, [r0]
    b @L_02004500
@L_02004480:
    cmp r0, #0x60
    bgt @L_02004490
    beq @L_020044ec
    b @L_02004500
@L_02004490:
    cmp r0, #0x70
    beq @L_020044b8
    b @L_02004500
@L_0200449c:
    ldr r0, =0x4000241
    mov r2, #0x8a
    strb r2, [r0]
@L_020044a8:
    ldr r0, =0x4000240
    b @L_020044fc
@L_020044b0:
    ldr r0, =0x4000241
    b @L_020044fc
@L_020044b8:
    ldr r0, =0x4000246
    mov r2, #0x9a
    strb r2, [r0]
@L_020044c4:
    ldr r0, =0x4000245
    mov r2, #0x92
    strb r2, [r0]
@L_020044d0:
    ldr r0, =0x4000244
    b @L_020044fc
@L_020044d8:
    ldr r0, =0x4000246
    mov r2, #0x92
    strb r2, [r0]
    strb r1, [r0, #-2]
    b @L_02004500
@L_020044ec:
    ldr r0, =0x4000246
    mov r2, #0x8a
    strb r2, [r0]
@L_020044f8:
    ldr r0, =0x4000245
@L_020044fc:
    strb r1, [r0]
@L_02004500:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForBGExtPltt(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =gGXState
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #0xe]
    cmp r0, #0x20
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #0xe]
    bgt @L_02004584
    cmp r0, #0x20
    bge @L_020045e8
    cmp r0, #0
    bgt @L_02004578
    moveq r1, #0x4000000
    ldreq r0, [r1]
    biceq r0, r0, #0x40000000
    streq r0, [r1]
    b @L_02004604
@L_02004578:
    cmp r0, #0x10
    beq @L_020045a0
    b @L_02004604
@L_02004584:
    cmp r0, #0x40
    bgt @L_02004594
    beq @L_020045bc
    b @L_02004604
@L_02004594:
    cmp r0, #0x60
    beq @L_020045dc
    b @L_02004604
@L_020045a0:
    mov r2, #0x4000000
    ldr r1, [r2]
    mov r0, #0x84
    orr r1, r1, #0x40000000
    str r1, [r2]
    strb r0, [r2, #0x244]
    b @L_02004604
@L_020045bc:
    mov r2, #0x4000000
    ldr r1, [r2]
    ldr r0, =0x4000246
    orr r1, r1, #0x40000000
    str r1, [r2]
    mov r1, #0x8c
    strb r1, [r0]
    b @L_02004604
@L_020045dc:
    ldr r0, =0x4000246
    mov r1, #0x8c
    strb r1, [r0]
@L_020045e8:
    ldr r0, =0x4000245
    mov r1, #0x84
    strb r1, [r0]
    mov r1, #0x4000000
    ldr r0, [r1]
    orr r0, r0, #0x40000000
    str r0, [r1]
@L_02004604:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForOBJExtPltt(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =gGXState
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #0x10]
    cmp r0, #0
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #0x10]
    beq @L_02004690
    cmp r0, #0x20
    beq @L_02004660
    cmp r0, #0x40
    beq @L_02004680
    b @L_020046a0
@L_02004660:
    mov r2, #0x4000000
    ldr r1, [r2]
    ldr r0, =0x4000245
@L_0200466c:
    orr r1, r1, #0x80000000
    str r1, [r2]
    mov r1, #0x85
    strb r1, [r0]
    b @L_020046a0
@L_02004680:
    mov r2, #0x4000000
    ldr r1, [r2]
    ldr r0, =0x4000246
    b @L_0200466c
@L_02004690:
    mov r1, #0x4000000
    ldr r0, [r1]
    bic r0, r0, #0x80000000
    str r0, [r1]
@L_020046a0:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForTex(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, =gGXState
    mvn r12, r0
    ldrh r4, [r1]
    ldrh r3, [r1, #8]
    ldr r2, =0x4000243
    cmp r0, #0
    orr r3, r4, r3
    and r3, r12, r3
    strh r3, [r1]
    strh r0, [r1, #8]
    sub r3, r2, #1
    mov r12, #0x8b
    mov r1, #0x83
    bne @L_02004710
    ldr r2, =0x4000060
    ldr r0, =0xcffe
    ldrh r1, [r2]
    and r0, r1, r0
    strh r0, [r2]
    b @L_0200480c
@L_02004710:
    ldr r4, =0x4000060
    cmp r0, #0xf
    ldrh lr, [r4]
    bic lr, lr, #0x3000
    orr lr, lr, #1
    strh lr, [r4]
    addls pc, pc, r0, lsl #2
    b @L_0200480c
    b @L_0200480c
    b @L_02004804
    b @L_020047e4
    b @L_020047fc
    b @L_020047d0
    b @L_02004770
    b @L_020047e0
    b @L_020047f4
    b @L_020047c4
    b @L_0200477c
    b @L_02004788
    b @L_02004798
    b @L_020047cc
    b @L_020047b0
    b @L_020047d8
    b @L_020047ec
@L_02004770:
    strb r1, [r4, #0x1e0]
    strb r12, [r3]
    b @L_0200480c
@L_0200477c:
    strb r1, [r4, #0x1e0]
    strb r12, [r2]
    b @L_0200480c
@L_02004788:
    ldr r0, =0x4000241
    strb r1, [r0]
    strb r12, [r0, #2]
    b @L_0200480c
@L_02004798:
    ldr r2, =0x4000241
    strb r1, [r4, #0x1e0]
    strb r12, [r2]
    mov r0, #0x93
    strb r0, [r2, #2]
    b @L_0200480c
@L_020047b0:
    strb r1, [r4, #0x1e0]
    strb r12, [r3]
    mov r0, #0x93
    strb r0, [r3, #1]
    b @L_0200480c
@L_020047c4:
    strb r1, [r2]
    b @L_0200480c
@L_020047cc:
    strb r12, [r2]
@L_020047d0:
    strb r1, [r3]
    b @L_0200480c
@L_020047d8:
    mov r0, #0x93
    strb r0, [r2]
@L_020047e0:
    strb r12, [r3]
@L_020047e4:
    ldr r0, =0x4000241
    b @L_02004808
@L_020047ec:
    mov r0, #0x9b
    strb r0, [r2]
@L_020047f4:
    mov r0, #0x93
    strb r0, [r3]
@L_020047fc:
    ldr r0, =0x4000241
    strb r12, [r0]
@L_02004804:
    ldr r0, =0x4000240
@L_02004808:
    strb r1, [r0]
@L_0200480c:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r4, pc}
}

asm void GX_SetBankForTexPltt(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =gGXState
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #0xa]
    cmp r0, #0x30
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #0xa]
    bgt @L_02004884
    cmp r0, #0x30
    bge @L_020048d8
    cmp r0, #0x10
    bgt @L_02004878
    bge @L_020048e4
    b @L_020048f0
@L_02004878:
    cmp r0, #0x20
    beq @L_020048bc
    b @L_020048f0
@L_02004884:
    cmp r0, #0x60
    bgt @L_020048a4
    bge @L_020048b0
    cmp r0, #0x40
    ldreq r0, =0x4000246
    moveq r1, #0x83
    streqb r1, [r0]
    b @L_020048f0
@L_020048a4:
    cmp r0, #0x70
    beq @L_020048cc
    b @L_020048f0
@L_020048b0:
    ldr r0, =0x4000246
    mov r1, #0x8b
    strb r1, [r0]
@L_020048bc:
    ldr r0, =0x4000245
    mov r1, #0x83
    strb r1, [r0]
    b @L_020048f0
@L_020048cc:
    ldr r0, =0x4000246
    mov r1, #0x9b
    strb r1, [r0]
@L_020048d8:
    ldr r0, =0x4000245
    mov r1, #0x93
    strb r1, [r0]
@L_020048e4:
    ldr r0, =0x4000244
    mov r1, #0x83
    strb r1, [r0]
@L_020048f0:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForClearImage(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =gGXState
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #0xc]
    cmp r0, #0xc
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #0xc]
    addls pc, pc, r0, lsl #2
    b @L_020049e4
    b @L_0200499c
    b @L_020049b4
    b @L_02004980
    b @L_02004974
    b @L_020049c8
    b @L_020049e4
    b @L_020049e4
    b @L_020049e4
    b @L_02004994
    b @L_020049e4
    b @L_020049e4
    b @L_020049e4
    b @L_02004988
@L_02004974:
    ldr r0, =0x4000240
    mov r1, #0x93
    strb r1, [r0]
@L_02004980:
    ldr r0, =0x4000241
    b @L_020049cc
@L_02004988:
    ldr r0, =0x4000242
    mov r1, #0x93
    strb r1, [r0]
@L_02004994:
    ldr r0, =0x4000243
    b @L_020049cc
@L_0200499c:
    ldr r2, =0x4000060
    ldr r0, =0xbfff
    ldrh r1, [r2]
    and r0, r1, r0
    strh r0, [r2]
    b @L_020049e4
@L_020049b4:
    ldr r0, =0x4000240
    mov r1, #0x9b
    strb r1, [r0]
    sub r1, r0, #0x1e0
    b @L_020049d8
@L_020049c8:
    ldr r0, =0x4000242
@L_020049cc:
    mov r2, #0x9b
    ldr r1, =0x4000060
    strb r2, [r0]
@L_020049d8:
    ldrh r0, [r1]
    orr r0, r0, #0x4000
    strh r0, [r1]
@L_020049e4:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForARM7(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =gGXState
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #6]
    cmp r0, #8
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #6]
    bgt @L_02004a6c
    cmp r0, #8
    bge @L_02004a8c
    cmp r0, #4
    bgt @L_02004a98
    cmp r0, #0
    blt @L_02004a98
    beq @L_02004a98
    cmp r0, #4
    ldreq r0, =0x4000242
    moveq r1, #0x82
    streqb r1, [r0]
    b @L_02004a98
@L_02004a6c:
    cmp r0, #0xc
    bne @L_02004a98
    ldr r1, =0x4000243
    mov r0, #0x8a
    strb r0, [r1]
    mov r0, #0x82
    strb r0, [r1, #-1]
    b @L_02004a98
@L_02004a8c:
    ldr r0, =0x4000243
    mov r1, #0x82
    strb r1, [r0]
@L_02004a98:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForLCDC(void)
{
    ldr r2, =gGXState
    mov r1, r0, lsl #0x10
    ldrh r3, [r2]
    ldr r12, =GX_VRAMCNT_SetLCDC_
    orr r1, r3, r1, lsr #16
    strh r1, [r2]
    bx r12
}

asm void GX_SetBankForSubBG(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =gGXState
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #0x12]
    cmp r0, #0x80
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #0x12]
    bgt @L_02004b34
    cmp r0, #0x80
    bge @L_02004b48
    cmp r0, #4
    bgt @L_02004b54
    cmp r0, #0
    blt @L_02004b54
    beq @L_02004b54
    cmp r0, #4
    ldreq r0, =0x4000242
    moveq r1, #0x84
    streqb r1, [r0]
    b @L_02004b54
@L_02004b34:
    cmp r0, #0x180
    bne @L_02004b54
    ldr r0, =0x4000249
    mov r1, #0x81
    strb r1, [r0]
@L_02004b48:
    ldr r0, =0x4000248
    mov r1, #0x81
    strb r1, [r0]
@L_02004b54:
    ldr r0, =gGXState
    ldrh r0, [r0]
    bl GX_VRAMCNT_SetLCDC_
    ldmia sp!, {r3, pc}
}
