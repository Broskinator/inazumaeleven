// (asm for now)

void getJntSRTAnmResult_(void);
void getTransData_(void);
void getTransDataEx_(void);
void getScaleData_(void);
void getScaleDataEx_(void);
void getRotData_(void);
void getRotDataEx_(void);
void getRotDataByIdx_(void);
void GetMatColAnmValue_(void);

void getMdlTrans_(void);
void getMdlRot_(void);
void getMdlScale_(void);
extern char NNS_G3dRS[];
void VEC_Normalize(void);
extern char data_020a48f1[];
extern char data_020a48f0[];
extern char data_020a48f2[];
extern char data_020a48f3[];

asm void getJntSRTAnmResult_(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r9, r0
    add r0, r9, r1, lsl #1
    ldrh r0, [r0, #0x14]
    mov r7, r3
    mov r8, r2
    ldr r4, [r9, r0]
    add r1, r9, r0
    tst r4, #1
    movne r0, #7
    strne r0, [r7]
    bne @L_0202c934
    ldr r0, =0xfff
    add r5, r1, #4
    tst r8, r0
    beq @L_0202c670
    ldr r0, [r9, #8]
    tst r0, #1
    movne r6, #1
    bne @L_0202c674
@L_0202c670:
    mov r6, #0
@L_0202c674:
    mov r0, #0
    str r0, [r7]
    tst r4, #6
    bne @L_0202c73c
    tst r4, #8
    bne @L_0202c6b8
    cmp r6, #0
    mov r1, r8
    mov r2, r5
    mov r3, r9
    add r0, r7, #0x4c
    beq @L_0202c6ac
    bl getTransDataEx_
    b @L_0202c6b0
@L_0202c6ac:
    bl getTransData_
@L_0202c6b0:
    add r5, r5, #8
    b @L_0202c6c0
@L_0202c6b8:
    ldr r0, [r5], #4
    str r0, [r7, #0x4c]
@L_0202c6c0:
    tst r4, #0x10
    bne @L_0202c6f4
    cmp r6, #0
    mov r1, r8
    mov r2, r5
    mov r3, r9
    add r0, r7, #0x50
    beq @L_0202c6e8
    bl getTransDataEx_
    b @L_0202c6ec
@L_0202c6e8:
    bl getTransData_
@L_0202c6ec:
    add r5, r5, #8
    b @L_0202c6fc
@L_0202c6f4:
    ldr r0, [r5], #4
    str r0, [r7, #0x50]
@L_0202c6fc:
    tst r4, #0x20
    bne @L_0202c730
    cmp r6, #0
    mov r1, r8
    mov r2, r5
    mov r3, r9
    add r0, r7, #0x54
    beq @L_0202c724
    bl getTransDataEx_
    b @L_0202c728
@L_0202c724:
    bl getTransData_
@L_0202c728:
    add r5, r5, #8
    b @L_0202c754
@L_0202c730:
    ldr r0, [r5], #4
    str r0, [r7, #0x54]
    b @L_0202c754
@L_0202c73c:
    tst r4, #2
    orrne r0, r0, #4
    strne r0, [r7]
    bne @L_0202c754
    mov r0, r7
    bl getMdlTrans_
@L_0202c754:
    tst r4, #0xc0
    bne @L_0202c810
    tst r4, #0x100
    bne @L_0202c790
    cmp r6, #0
    mov r1, r8
    mov r2, r5
    mov r3, r9
    add r0, r7, #0x28
    beq @L_0202c784
    bl getRotDataEx_
    b @L_0202c788
@L_0202c784:
    bl getRotData_
@L_0202c788:
    add r5, r5, #8
    b @L_0202c82c
@L_0202c790:
    ldr r1, [r9, #0xc]
    ldr r2, [r9, #0x10]
    ldr r3, [r5]
    add r0, r7, #0x28
    add r1, r9, r1
    add r2, r9, r2
    bl getRotDataByIdx_
    cmp r0, #0
    beq @L_0202c808
    ldr r12, [r7, #0x3c]
    ldr r3, [r7, #0x28]
    ldr r0, [r7, #0x2c]
    ldr r2, [r7, #0x34]
    ldr r1, [r7, #0x30]
    ldr r11, [r7, #0x38]
    mul r10, r0, r12
    mul lr, r1, r11
    sub r10, r10, lr
    mov r10, r10, asr #0xc
    mul lr, r1, r2
    mul r1, r3, r12
    sub r1, lr, r1
    mov r1, r1, asr #0xc
    mul r11, r3, r11
    mul r2, r0, r2
    sub r0, r11, r2
    mov r0, r0, asr #0xc
    str r10, [r7, #0x40]
    str r1, [r7, #0x44]
    str r0, [r7, #0x48]
@L_0202c808:
    add r5, r5, #4
    b @L_0202c82c
@L_0202c810:
    tst r4, #0x40
    ldrne r0, [r7]
    orrne r0, r0, #2
    strne r0, [r7]
    bne @L_0202c82c
    mov r0, r7
    bl getMdlRot_
@L_0202c82c:
    tst r4, #0x600
    bne @L_0202c910
    tst r4, #0x800
    bne @L_0202c86c
    cmp r6, #0
    add r0, sp, #0x10
    mov r1, r8
    mov r2, r5
    mov r3, r9
    beq @L_0202c85c
    bl getScaleDataEx_
    b @L_0202c860
@L_0202c85c:
    bl getScaleData_
@L_0202c860:
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    b @L_0202c874
@L_0202c86c:
    ldr r1, [r5]
    ldr r0, [r5, #4]
@L_0202c874:
    str r1, [sp, #0x18]
    str r0, [sp, #0x24]
    tst r4, #0x1000
    bne @L_0202c8b4
    cmp r6, #0
    add r0, sp, #8
    mov r1, r8
    mov r3, r9
    add r2, r5, #8
    beq @L_0202c8a4
    bl getScaleDataEx_
    b @L_0202c8a8
@L_0202c8a4:
    bl getScaleData_
@L_0202c8a8:
    ldr r1, [sp, #8]
    ldr r0, [sp, #0xc]
    b @L_0202c8bc
@L_0202c8b4:
    ldr r1, [r5, #8]
    ldr r0, [r5, #0xc]
@L_0202c8bc:
    str r1, [sp, #0x1c]
    str r0, [sp, #0x28]
    tst r4, #0x2000
    bne @L_0202c904
    cmp r6, #0
    add r0, sp, #0
    mov r1, r8
    mov r3, r9
    add r2, r5, #0x10
    beq @L_0202c8ec
    bl getScaleDataEx_
    b @L_0202c8f0
@L_0202c8ec:
    bl getScaleData_
@L_0202c8f0:
    ldr r1, [sp]
    ldr r0, [sp, #4]
@L_0202c8f8:
    str r1, [sp, #0x20]
    str r0, [sp, #0x2c]
    b @L_0202c934
@L_0202c904:
    ldr r1, [r5, #0x10]
    ldr r0, [r5, #0x14]
    b @L_0202c8f8
@L_0202c910:
    tst r4, #0x200
    ldrne r0, [r7]
    orrne r0, r0, #1
    strne r0, [r7]
    bne @L_0202c934
    mov r0, r7
    bl getMdlScale_
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202c934:
    ldr r0, [r7]
    add r1, sp, #0x18
    tst r0, #1
    ldr r0, =NNS_G3dRS
    movne r3, #4
    ldr r4, [r0]
    moveq r3, #0
    ldr r2, [r4]
    ldr r4, [r4, #0xe8]
    mov r0, r7
    blx r4
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void getTransData_(void)
{
    stmdb sp!, {r4, lr}
    ldr r12, [r2, #4]
    ldr lr, [r2]
    mov r4, r1, asr #0xc
    tst lr, #0xc0000000
    add r1, r3, r12
    beq @L_0202caa0
    ldr r2, =0x1fff0000
    tst lr, #0x40000000
    and r2, lr, r2
    mov r3, r2, lsr #0x10
    beq @L_0202c9c8
    tst r4, #1
    beq @L_0202c9c0
    cmp r4, r3
    movhi r2, r3, lsr #1
    addhi r4, r2, #1
    bhi @L_0202caa0
    mov r4, r4, lsr #1
    b @L_0202ca64
@L_0202c9c0:
    mov r4, r4, lsr #1
    b @L_0202caa0
@L_0202c9c8:
    ands r2, r4, #3
    beq @L_0202ca5c
    cmp r4, r3
    addhi r4, r2, r3, lsr #2
    bhi @L_0202caa0
    tst r4, #1
    beq @L_0202ca54
    tst r4, #2
    movne r4, r4, lsr #2
    addne r2, r4, #1
    moveq r2, r4, lsr #2
    addeq r4, r2, #1
    tst lr, #0x20000000
    beq @L_0202ca24
    mov r3, r2, lsl #1
    mov r2, r4, lsl #1
    ldrsh r3, [r1, r3]
    ldrsh r1, [r1, r2]
    add r2, r3, r3, lsl #1
    add r1, r2, r1
    mov r1, r1, asr #2
    str r1, [r0]
    ldmia sp!, {r4, pc}
@L_0202ca24:
    ldr r3, [r1, r2, lsl #2]
    mov r2, #3
    umull lr, r12, r3, r2
    mov r3, r3, asr #0x1f
    mla r12, r3, r2, r12
    ldr r1, [r1, r4, lsl #2]
    adds r2, lr, r1
    adc r1, r12, r1, asr #31
    mov r2, r2, lsr #2
    orr r2, r2, r1, lsl #30
    str r2, [r0]
    ldmia sp!, {r4, pc}
@L_0202ca54:
    mov r4, r4, lsr #2
    b @L_0202ca64
@L_0202ca5c:
    mov r4, r4, lsr #2
    b @L_0202caa0
@L_0202ca64:
    tst lr, #0x20000000
    addeq r2, r1, r4, lsl #2
    ldreq r2, [r2, #4]
    ldreq r3, [r1, r4, lsl #2]
    moveq r1, r2, asr #1
    addeq r1, r1, r3, asr #1
    beq @L_0202ca98
    mov r3, r4, lsl #1
    add r2, r1, r4, lsl #1
    ldrsh r3, [r1, r3]
    ldrsh r1, [r2, #2]
    add r1, r3, r1
    mov r1, r1, asr #1
@L_0202ca98:
    str r1, [r0]
    ldmia sp!, {r4, pc}
@L_0202caa0:
    tst lr, #0x20000000
    movne r2, r4, lsl #1
    ldrnesh r1, [r1, r2]
    strne r1, [r0]
    ldreq r1, [r1, r4, lsl #2]
    streq r1, [r0]
    ldmia sp!, {r4, pc}
}

asm void getTransDataEx_(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldrh r4, [r3, #4]
    ldr r12, [r2, #4]
    mov lr, r1, asr #0xc
    sub r4, r4, #1
    cmp r4, r1, asr #12
    add r12, r3, r12
    ldr r2, [r2]
    bne @L_0202cb58
    tst r2, #0xc0000000
    beq @L_0202cb00
    tst r2, #0x40000000
    andne r4, lr, #1
    addne lr, r4, lr, lsr #1
    andeq r4, lr, #3
    addeq lr, r4, lr, lsr #2
@L_0202cb00:
    ldr r3, [r3, #8]
    tst r3, #2
    beq @L_0202cb40
    ldr r3, =0xfff
    tst r2, #0x20000000
    and r2, r1, r3
    movne r1, lr, lsl #1
    ldrnesh r3, [r12, r1]
    ldrnesh r1, [r12]
    ldreq r3, [r12, lr, lsl #2]
    ldreq r1, [r12]
    sub r1, r1, r3
    mul r1, r2, r1
    add r1, r3, r1, asr #12
    str r1, [r0]
    ldmia sp!, {r3, r4, r5, pc}
@L_0202cb40:
    tst r2, #0x20000000
    movne r1, lr, lsl #1
    ldrnesh r1, [r12, r1]
    ldreq r1, [r12, lr, lsl #2]
    str r1, [r0]
    ldmia sp!, {r3, r4, r5, pc}
@L_0202cb58:
    tst r2, #0xc0000000
    beq @L_0202cbbc
    ldr r3, =0x1fff0000
    tst r2, #0x40000000
    and r4, r2, r3
    mov r4, r4, lsr #0x10
    beq @L_0202cb94
    cmp lr, r4
    movhs lr, r4, lsr #1
    bhs @L_0202cbbc
    mov lr, lr, lsr #1
    and r1, r1, r3, lsr #16
    mov r4, #2
    mov r5, #1
    b @L_0202cbcc
@L_0202cb94:
    cmp lr, r4
    andhs r3, lr, #3
    addhs lr, r3, lr, lsr #2
    bhs @L_0202cbbc
    ldr r3, =0x3fff
    mov lr, lr, lsr #2
    and r1, r1, r3
    mov r4, #4
    mov r5, #2
    b @L_0202cbcc
@L_0202cbbc:
    ldr r3, =0xfff
    mov r4, #1
    and r1, r1, r3
    mov r5, #0
@L_0202cbcc:
    tst r2, #0x20000000
    addne r2, r12, lr, lsl #1
    movne r3, lr, lsl #1
    ldrnesh r12, [r12, r3]
    ldrnesh r2, [r2, #2]
    addeq r2, r12, lr, lsl #2
    ldreq r12, [r2]
    ldreq r2, [r2, #4]
    mul r3, r12, r4
    sub r2, r2, r12
    mul r2, r1, r2
    add r1, r3, r2, asr #12
    mov r1, r1, asr r5
    str r1, [r0]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void getScaleData_(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, [r2, #4]
    ldr r5, [r2]
    mov r6, r1, asr #0xc
    tst r5, #0xc0000000
    add r1, r3, r4
    beq @L_0202cd50
    ldr r2, =0x1fff0000
    tst r5, #0x40000000
    and r2, r5, r2
    mov r3, r2, lsr #0x10
    beq @L_0202cc6c
    tst r6, #1
    beq @L_0202cc64
    cmp r6, r3
    movhi r2, r3, lsr #1
    addhi r6, r2, #1
    bhi @L_0202cd50
    mov r2, r6, lsr #1
    b @L_0202cd7c
@L_0202cc64:
    mov r6, r6, lsr #1
    b @L_0202cd50
@L_0202cc6c:
    ands r2, r6, #3
    beq @L_0202cd4c
    cmp r6, r3
    addhi r6, r2, r3, lsr #2
    bhi @L_0202cd50
    tst r6, #1
    beq @L_0202cd44
    tst r6, #2
    movne r2, r6, lsr #2
    addne r4, r2, #1
    moveq r4, r6, lsr #2
    addeq r2, r4, #1
    tst r5, #0x20000000
    beq @L_0202cce8
    mov r5, r4, lsl #2
    add r3, r1, r4, lsl #2
    mov r4, r2, lsl #2
    add r2, r1, r2, lsl #2
    ldrsh r6, [r1, r5]
    ldrsh r5, [r1, r4]
    ldrsh r3, [r3, #2]
    ldrsh r2, [r2, #2]
    add r4, r6, r6, lsl #1
    add r1, r3, r3, lsl #1
    add r1, r2, r1
    add r3, r5, r4
    mov r2, r3, asr #2
    mov r1, r1, asr #2
    str r2, [r0]
    str r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0202cce8:
    add r3, r1, r4, lsl #3
    ldmia r3, {r4, lr}
    add r12, r1, r2, lsl #3
    mov r3, #3
    mov r5, r4, asr #0x1f
    umull r7, r6, r4, r3
    ldr r8, [r12]
    umull r4, r2, lr, r3
    mov r1, lr, asr #0x1f
    mla r2, r1, r3, r2
    mla r6, r5, r3, r6
    adds r7, r7, r8
    ldr r1, [r12, #4]
    adc r5, r6, r8, asr #31
    adds r3, r4, r1
    adc r1, r2, r1, asr #31
    mov r2, r3, lsr #2
    mov r4, r7, lsr #2
    orr r2, r2, r1, lsl #30
    orr r4, r4, r5, lsl #30
    str r2, [r0, #4]
    str r4, [r0]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0202cd44:
    mov r2, r6, lsr #2
    b @L_0202cd7c
@L_0202cd4c:
    mov r6, r6, lsr #2
@L_0202cd50:
    tst r5, #0x20000000
    movne r3, r6, lsl #2
    addne r2, r1, r6, lsl #2
    ldrnesh r3, [r1, r3]
    ldrnesh r1, [r2, #2]
    addeq r2, r1, r6, lsl #3
    ldreq r3, [r2]
    ldreq r1, [r2, #4]
    str r3, [r0]
    str r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0202cd7c:
    tst r5, #0x20000000
    beq @L_0202cdb8
    add r12, r1, r2, lsl #2
    mov r2, r2, lsl #2
    ldrsh lr, [r1, r2]
    ldrsh r3, [r12, #4]
    ldrsh r2, [r12, #2]
    ldrsh r1, [r12, #6]
    add r3, lr, r3
    mov r3, r3, asr #1
    add r1, r2, r1
    mov r1, r1, asr #1
    str r3, [r0]
    str r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0202cdb8:
    add r12, r1, r2, lsl #3
    ldr lr, [r12]
    ldr r1, [r12, #0xc]
    ldmib r12, {r2, r3}
    add r1, r2, r1
    add r3, lr, r3
    mov r2, r3, asr #1
    mov r1, r1, asr #1
    str r2, [r0]
    str r1, [r0, #4]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void getScaleDataEx_(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldrh r4, [r3, #4]
    ldr r5, [r2, #4]
    mov lr, r1, asr #0xc
    sub r4, r4, #1
    cmp r4, r1, asr #12
    add r12, r3, r5
    ldr r2, [r2]
    bne @L_0202ce64
    tst r2, #0xc0000000
    beq @L_0202ce28
    tst r2, #0x40000000
    andne r4, lr, #1
    addne lr, r4, lr, lsr #1
    andeq r4, lr, #3
    addeq lr, r4, lr, lsr #2
@L_0202ce28:
    ldr r3, [r3, #8]
    tst r3, #2
    movne r3, #0
    bne @L_0202cedc
    tst r2, #0x20000000
    addne r1, r12, lr, lsl #2
    movne r2, lr, lsl #2
    ldrnesh r1, [r1, #2]
    ldrnesh r2, [r12, r2]
    addeq r1, r12, lr, lsl #3
    ldreq r2, [r1]
    ldreq r1, [r1, #4]
    str r2, [r0]
    str r1, [r0, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0202ce64:
    tst r2, #0xc0000000
    beq @L_0202ced8
    ldr r4, =0x1fff0000
    tst r2, #0x40000000
    and r3, r2, r4
    mov r3, r3, lsr #0x10
    beq @L_0202cea8
    cmp lr, r3
    movhs lr, r3, lsr #1
    addhs r3, lr, #1
    bhs @L_0202cedc
    mov lr, lr, lsr #1
    add r3, lr, #1
    and r1, r1, r4, lsr #16
    mov r4, #2
    mov r5, #1
    b @L_0202ceec
@L_0202cea8:
    cmp lr, r3
    andhs r3, lr, #3
    addhs lr, r3, lr, lsr #2
    addhs r3, lr, #1
    bhs @L_0202cedc
    ldr r4, =0x3fff
    mov lr, lr, lsr #2
    add r3, lr, #1
    and r1, r1, r4
    mov r4, #4
    mov r5, #2
    b @L_0202ceec
@L_0202ced8:
    add r3, lr, #1
@L_0202cedc:
    ldr r5, =0xfff
    mov r4, #1
    and r1, r1, r5
    mov r5, #0
@L_0202ceec:
    tst r2, #0x20000000
    addeq r7, r12, lr, lsl #3
    ldmeqia r7, {r2, lr}
    addeq r6, r12, r3, lsl #3
    ldreq r7, [r12, r3, lsl #3]
    ldreq r3, [r6, #4]
    beq @L_0202cf28
    mov r2, lr, lsl #2
    add r7, r12, lr, lsl #2
    mov r6, r3, lsl #2
    add r3, r12, r3, lsl #2
    ldrsh lr, [r7, #2]
    ldrsh r2, [r12, r2]
    ldrsh r7, [r12, r6]
    ldrsh r3, [r3, #2]
@L_0202cf28:
    sub r12, r7, r2
    sub r3, r3, lr
    mul r6, r2, r4
    mul r2, r1, r12
    add r2, r6, r2, asr #12
    mov r6, r2, asr r5
    mul r4, lr, r4
    mul r2, r1, r3
    add r1, r4, r2, asr #12
    mov r1, r1, asr r5
    str r6, [r0]
    str r1, [r0, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void getRotData_(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x48
    ldr r9, [r2]
    mov r4, r3
    ldr r2, [r2, #4]
    mov r5, r0
    tst r9, #0xc0000000
    mov r3, r1, asr #0xc
    add r8, r4, r2
    ldr r7, [r4, #0xc]
    ldr r6, [r4, #0x10]
    beq @L_0202d2dc
    ldr r0, =0x1fff0000
    tst r9, #0x40000000
    and r0, r9, r0
    mov r1, r0, lsr #0x10
    beq @L_0202cfd4
    tst r3, #1
    beq @L_0202cfcc
    cmp r3, r1
    movhi r0, r1, lsr #1
    addhi r3, r0, #1
    bhi @L_0202d2dc
    mov r9, r3, lsr #1
    b @L_0202d188
@L_0202cfcc:
    mov r3, r3, lsr #1
    b @L_0202d2dc
@L_0202cfd4:
    ands r0, r3, #3
    beq @L_0202d180
    cmp r3, r1
    addhi r3, r0, r1, lsr #2
    bhi @L_0202d2dc
    tst r3, #1
    beq @L_0202d178
    tst r3, #2
    movne r9, r3, lsr #2
    addne r0, r9, #1
    moveq r0, r3, lsr #2
    addeq r9, r0, #1
    mov r0, r0, lsl #1
    ldrh r3, [r8, r0]
    mov r0, r5
    add r1, r4, r7
    add r2, r4, r6
    bl getRotDataByIdx_
    mov r1, r9, lsl #1
    ldrh r3, [r8, r1]
    orr r9, r0, #0
    add r0, sp, #0x24
    add r1, r4, r7
    add r2, r4, r6
    bl getRotDataByIdx_
    ldr r2, [r5]
    ldmib r5, {r1, r4}
    orr r9, r9, r0
    ldr r6, [sp, #0x24]
    add r2, r2, r2, lsl #1
    add r2, r6, r2
    str r2, [r5]
    ldr r6, [sp, #0x28]
    add r1, r1, r1, lsl #1
    add r1, r6, r1
    str r1, [r5, #4]
    ldr r6, [sp, #0x2c]
    add r0, r4, r4, lsl #1
    add r0, r6, r0
    str r0, [r5, #8]
    ldr r3, [r5, #0xc]
    ldr r4, [sp, #0x30]
    add r0, r3, r3, lsl #1
    add r0, r4, r0
    str r0, [r5, #0xc]
    ldr r2, [r5, #0x10]
    ldr r3, [sp, #0x34]
    add r0, r2, r2, lsl #1
    add r0, r3, r0
    str r0, [r5, #0x10]
    ldr r1, [r5, #0x14]
    ldr r2, [sp, #0x38]
    add r0, r1, r1, lsl #1
    add r2, r2, r0
    mov r0, r5
    mov r1, r5
    str r2, [r5, #0x14]
    bl VEC_Normalize
    add r0, r5, #0xc
    mov r1, r0
    bl VEC_Normalize
    cmp r9, #0
    bne @L_0202d120
    ldr r0, [r5, #0x18]
    ldr r1, [sp, #0x3c]
    add r0, r0, r0, lsl #1
    add r0, r1, r0
    str r0, [r5, #0x18]
    ldr r0, [r5, #0x1c]
    ldr r1, [sp, #0x40]
    add r0, r0, r0, lsl #1
    add r0, r1, r0
    str r0, [r5, #0x1c]
    ldr r0, [r5, #0x20]
    ldr r1, [sp, #0x44]
    add r0, r0, r0, lsl #1
    add r2, r1, r0
    add r0, r5, #0x18
    mov r1, r0
    str r2, [r5, #0x20]
    bl VEC_Normalize
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0202d120:
    ldr r9, [r5, #0x14]
    ldr r7, [r5, #0x10]
    ldmib r5, {r0, r8}
    mul r4, r0, r9
    mul r3, r8, r7
    sub r3, r4, r3
    ldr r1, [r5, #0xc]
    mov r6, r3, asr #0xc
    ldr r2, [r5]
    mul r4, r8, r1
    mul r3, r2, r9
    sub r3, r4, r3
    mov r4, r3, asr #0xc
    mul r3, r2, r7
    mul r1, r0, r1
    sub r0, r3, r1
    mov r0, r0, asr #0xc
    add sp, sp, #0x48
    str r6, [r5, #0x18]
    str r4, [r5, #0x1c]
    str r0, [r5, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0202d178:
    mov r9, r3, lsr #2
    b @L_0202d188
@L_0202d180:
    mov r3, r3, lsr #2
    b @L_0202d2dc
@L_0202d188:
    mov r0, r9, lsl #1
    ldrh r3, [r8, r0]
    mov r0, r5
    add r1, r4, r7
    add r2, r4, r6
    bl getRotDataByIdx_
    add r1, r8, r9, lsl #1
    ldrh r3, [r1, #2]
    orr r8, r0, #0
    add r0, sp, #0
    add r1, r4, r7
    add r2, r4, r6
    bl getRotDataByIdx_
    ldr r3, [r5]
    ldr r1, [sp]
    ldr r2, [r5, #4]
    add r1, r3, r1
    str r1, [r5]
    ldr r1, [sp, #4]
    ldr r3, [r5, #8]
    add r1, r2, r1
    str r1, [r5, #4]
    ldr r1, [sp, #8]
    ldr r2, [r5, #0xc]
    add r1, r3, r1
    str r1, [r5, #8]
    ldr r1, [sp, #0xc]
    orr r8, r8, r0
    add r0, r2, r1
    str r0, [r5, #0xc]
    ldr r1, [r5, #0x10]
    ldr r0, [sp, #0x10]
    ldr r2, [r5, #0x14]
    add r0, r1, r0
    str r0, [r5, #0x10]
    ldr r1, [sp, #0x14]
    mov r0, r5
    add r2, r2, r1
    mov r1, r5
    str r2, [r5, #0x14]
    bl VEC_Normalize
    add r0, r5, #0xc
    mov r1, r0
    bl VEC_Normalize
    cmp r8, #0
    bne @L_0202d284
    ldr r2, [r5, #0x18]
    ldr r0, [sp, #0x18]
    ldr r1, [r5, #0x1c]
    add r0, r2, r0
    str r0, [r5, #0x18]
    ldr r0, [sp, #0x1c]
    ldr r2, [r5, #0x20]
    add r0, r1, r0
    str r0, [r5, #0x1c]
    ldr r1, [sp, #0x20]
    add r0, r5, #0x18
    add r2, r2, r1
    mov r1, r0
    str r2, [r5, #0x20]
    bl VEC_Normalize
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0202d284:
    ldr r9, [r5, #0x14]
    ldr r7, [r5, #0x10]
    ldmib r5, {r0, r8}
    mul r4, r0, r9
    mul r3, r8, r7
    sub r3, r4, r3
    ldr r1, [r5, #0xc]
    mov r6, r3, asr #0xc
    ldr r2, [r5]
    mul r4, r8, r1
    mul r3, r2, r9
    sub r3, r4, r3
    mov r4, r3, asr #0xc
    mul r3, r2, r7
    mul r1, r0, r1
    sub r0, r3, r1
    mov r0, r0, asr #0xc
    add sp, sp, #0x48
    str r6, [r5, #0x18]
    str r4, [r5, #0x1c]
    str r0, [r5, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0202d2dc:
    mov r0, r3, lsl #1
    ldrh r3, [r8, r0]
    mov r0, r5
    add r1, r4, r7
    add r2, r4, r6
    bl getRotDataByIdx_
    cmp r0, #0
    beq @L_0202d354
    ldr r9, [r5, #0x14]
    ldr r7, [r5, #0x10]
    ldmib r5, {r0, r8}
    mul r4, r0, r9
    mul r3, r8, r7
    sub r3, r4, r3
    ldr r1, [r5, #0xc]
    mov r6, r3, asr #0xc
    ldr r2, [r5]
    mul r4, r8, r1
    mul r3, r2, r9
    sub r3, r4, r3
    mov r4, r3, asr #0xc
    mul r3, r2, r7
    mul r1, r0, r1
    sub r0, r3, r1
    mov r0, r0, asr #0xc
    add sp, sp, #0x48
    str r6, [r5, #0x18]
    str r4, [r5, #0x1c]
    str r0, [r5, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0202d354:
    add r0, r5, #0x18
    mov r1, r0
    bl VEC_Normalize
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void getRotDataEx_(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    mov r9, r3
    ldrh r3, [r9, #4]
    ldr r4, [r2, #4]
    mov r10, r0
    sub r0, r3, #1
    cmp r0, r1, asr #12
    add r8, r9, r4
    mov r0, r1, asr #0xc
    ldr r4, [r9, #0xc]
    ldr r11, [r9, #0x10]
    ldr r3, [r2]
    bne @L_0202d45c
    tst r3, #0xc0000000
    beq @L_0202d3c0
    tst r3, #0x40000000
    andne r2, r0, #1
    addne r0, r2, r0, lsr #1
    andeq r2, r0, #3
    addeq r0, r2, r0, lsr #2
@L_0202d3c0:
    ldr r2, [r9, #8]
    tst r2, #2
    movne r5, #0
    bne @L_0202d4cc
    mov r0, r0, lsl #1
    ldrh r3, [r8, r0]
    mov r0, r10
    add r1, r9, r4
    add r2, r9, r11
    bl getRotDataByIdx_
    cmp r0, #0
    beq @L_0202d448
    ldr r8, [r10, #0x14]
    ldr r6, [r10, #0x10]
    ldmib r10, {r0, r7}
    mul r4, r0, r8
    mul r3, r7, r6
    sub r3, r4, r3
    ldr r1, [r10, #0xc]
    mov r5, r3, asr #0xc
    ldr r2, [r10]
    mul r4, r7, r1
    mul r3, r2, r8
    sub r3, r4, r3
    mov r4, r3, asr #0xc
    mul r3, r2, r6
    mul r1, r0, r1
    sub r0, r3, r1
    mov r0, r0, asr #0xc
    add sp, sp, #0x48
    str r5, [r10, #0x18]
    str r4, [r10, #0x1c]
    str r0, [r10, #0x20]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202d448:
    add r0, r10, #0x18
    mov r1, r0
    bl VEC_Normalize
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202d45c:
    tst r3, #0xc0000000
    beq @L_0202d4c8
    ldr r2, =0x1fff0000
    tst r3, #0x40000000
    and r3, r3, r2
    mov r3, r3, lsr #0x10
    beq @L_0202d49c
    cmp r0, r3
    movhs r0, r3, lsr #1
    addhs r5, r0, #1
    bhs @L_0202d4cc
    mov r0, r0, lsr #1
    add r5, r0, #1
    and r6, r1, r2, lsr #16
    mov r7, #2
    b @L_0202d4d8
@L_0202d49c:
    cmp r0, r3
    andhs r2, r0, #3
    addhs r0, r2, r0, lsr #2
    addhs r5, r0, #1
    bhs @L_0202d4cc
    ldr r2, =0x3fff
    mov r0, r0, lsr #2
    add r5, r0, #1
    and r6, r1, r2
    mov r7, #4
    b @L_0202d4d8
@L_0202d4c8:
    add r5, r0, #1
@L_0202d4cc:
    ldr r2, =0xfff
    mov r7, #1
    and r6, r1, r2
@L_0202d4d8:
    mov r0, r0, lsl #1
    ldrh r3, [r8, r0]
    add r0, sp, #0x24
    add r1, r9, r4
    add r2, r9, r11
    bl getRotDataByIdx_
    mov r1, r5, lsl #1
    ldrh r3, [r8, r1]
    orr r5, r0, #0
    add r0, sp, #0
    add r1, r9, r4
    add r2, r9, r11
    bl getRotDataByIdx_
    ldr r3, [sp, #0x24]
    ldr r1, [sp]
    mul r2, r3, r7
    sub r1, r1, r3
    mul r1, r6, r1
    add r1, r2, r1, asr #12
    str r1, [r10]
    ldr r3, [sp, #0x28]
    ldr r1, [sp, #4]
    mul r2, r3, r7
    sub r1, r1, r3
    mul r1, r6, r1
    add r1, r2, r1, asr #12
    str r1, [r10, #4]
    ldr r3, [sp, #0x2c]
    ldr r1, [sp, #8]
    mul r2, r3, r7
    sub r1, r1, r3
    mul r1, r6, r1
    add r1, r2, r1, asr #12
    str r1, [r10, #8]
    ldr r3, [sp, #0x30]
    ldr r1, [sp, #0xc]
    mul r2, r3, r7
    sub r1, r1, r3
    mul r1, r6, r1
    add r1, r2, r1, asr #12
    str r1, [r10, #0xc]
    ldr r2, [sp, #0x34]
    ldr r1, [sp, #0x10]
    orr r5, r5, r0
    sub r0, r1, r2
    mul r1, r2, r7
    mul r0, r6, r0
    add r0, r1, r0, asr #12
    str r0, [r10, #0x10]
    ldr r2, [sp, #0x38]
    ldr r0, [sp, #0x14]
    mul r1, r2, r7
    sub r0, r0, r2
    mul r0, r6, r0
    add r2, r1, r0, asr #12
    mov r0, r10
    mov r1, r10
    str r2, [r10, #0x14]
    bl VEC_Normalize
    add r0, r10, #0xc
    mov r1, r0
    bl VEC_Normalize
    cmp r5, #0
    bne @L_0202d640
    ldr r2, [sp, #0x3c]
    ldr r0, [sp, #0x18]
    mul r1, r2, r7
    sub r0, r0, r2
    mul r0, r6, r0
    add r0, r1, r0, asr #12
    str r0, [r10, #0x18]
    ldr r2, [sp, #0x40]
    ldr r0, [sp, #0x1c]
    mul r1, r2, r7
    sub r0, r0, r2
    mul r0, r6, r0
    add r0, r1, r0, asr #12
    str r0, [r10, #0x1c]
    ldr r2, [sp, #0x44]
    ldr r0, [sp, #0x20]
    mul r1, r2, r7
    sub r0, r0, r2
    mul r0, r6, r0
    add r2, r1, r0, asr #12
    add r0, r10, #0x18
    mov r1, r0
    str r2, [r10, #0x20]
    bl VEC_Normalize
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202d640:
    ldr r8, [r10, #0x14]
    ldr r6, [r10, #0x10]
    ldmib r10, {r0, r7}
    mul r4, r0, r8
    mul r3, r7, r6
    sub r3, r4, r3
    ldr r1, [r10, #0xc]
    mov r5, r3, asr #0xc
    ldr r2, [r10]
    mul r4, r7, r1
    mul r3, r2, r8
    sub r3, r4, r3
    mov r4, r3, asr #0xc
    mul r3, r2, r6
    mul r1, r0, r1
    sub r0, r3, r1
    mov r0, r0, asr #0xc
    str r5, [r10, #0x18]
    str r4, [r10, #0x1c]
    str r0, [r10, #0x20]
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void getRotDataByIdx_(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    tst r3, #0x8000
    beq @L_0202d75c
    ldr r2, =0x7fff
    mov r4, #0
    and r2, r3, r2
    add r3, r2, r2, lsl #1
    mov r2, r3, lsl #1
    ldrsh r2, [r1, r2]
    add lr, r1, r3, lsl #1
    str r4, [r0, #0x20]
    tst r2, #0x10
    subne r6, r4, #0x1000
    and r1, r2, #0xf
    ldr r5, =data_020a48f1
    str r4, [r0, #0x1c]
    str r4, [r0, #0x18]
    str r4, [r0, #0x14]
    str r4, [r0, #0x10]
    str r4, [r0, #0xc]
    str r4, [r0, #8]
    str r4, [r0, #4]
    str r4, [r0]
    ldr r4, =data_020a48f0
    moveq r6, #0x1000
    ldrb r12, [r4, r1, lsl #2]
    ldrsh r4, [lr]
    ldrsh r3, [lr, #2]
    str r6, [r0, r1, lsl #2]
    tst r4, #0x20
    ldrsh r2, [lr, #4]
    ldrb r5, [r5, r1, lsl #2]
    str r3, [r0, r12, lsl #2]
    ldrsh r4, [lr]
    str r2, [r0, r5, lsl #2]
    ldr r5, =data_020a48f2
    rsbne r2, r2, #0
    ldrb r5, [r5, r1, lsl #2]
    tst r4, #0x40
    rsbne r3, r3, #0
    str r2, [r0, r5, lsl #2]
    ldr r2, =data_020a48f3
    ldrb r1, [r2, r1, lsl #2]
    str r3, [r0, r1, lsl #2]
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_0202d75c:
    ldr r1, =0x7fff
    and r1, r3, r1
    add r1, r1, r1, lsl #2
    add r5, r2, r1, lsl #1
    ldrsh r3, [r5, #8]
    mov r1, r1, lsl #1
    ldrsh r2, [r2, r1]
    and r4, r3, #7
    mov r12, r4, lsl #0x10
    ldrsh r1, [r5, #2]
    ldrsh lr, [r5, #4]
    ldrsh r4, [r5, #6]
    and r5, r2, #7
    orr r5, r5, r12, asr #13
    mov r12, r5, lsl #0x10
    and r5, r1, #7
    orr r5, r5, r12, asr #13
    mov r12, r5, lsl #0x10
    and r5, lr, #7
    orr r12, r5, r12, asr #13
    mov r5, lr, asr #3
    mov lr, r4, asr #3
    mov r3, r3, asr #3
    mov r2, r2, asr #3
    mov r12, r12, lsl #0x10
    and r4, r4, #7
    orr r4, r4, r12, asr #13
    mov r12, r4, lsl #0x10
    mov r12, r12, asr #0x10
    mov r12, r12, lsl #0x13
    mov r1, r1, asr #3
    str r3, [r0, #0x10]
    str r2, [r0]
    stmib r0, {r1, r5}
    mov r12, r12, asr #0x13
    str lr, [r0, #0xc]
    str r12, [r0, #0x14]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

asm void GetMatColAnmValue_(void)
{
    tst r1, #0x20000000
    movne r0, r1, lsl #0x10
    movne r0, r0, lsr #0x10
    bxne lr
    mov r3, r1, lsl #0x10
    tst r1, #0xc0000000
    add r0, r0, r3, lsr #16
    moveq r1, r2, lsl #1
    ldreqh r0, [r0, r1]
    bxeq lr
    ldr r3, =0x1fff0000
    tst r1, #0x40000000
    and r1, r1, r3
    mov r3, r1, lsr #0x10
    beq @L_0202d878
    tst r2, #1
    beq @L_0202d86c
    cmp r2, r3
    bichi r1, r3, #1
    addhi r0, r0, r1
    ldrhih r0, [r0, #2]
    bxhi lr
    mov r1, r2, lsr #1
    b @L_0202d91c
@L_0202d86c:
    bic r1, r2, #1
    ldrh r0, [r0, r1]
    bx lr
@L_0202d878:
    ands r1, r2, #3
    beq @L_0202d90c
    cmp r2, r3
    movhi r2, r3, lsr #2
    movhi r1, r1, lsl #1
    addhi r0, r0, r2, lsl #1
    ldrhih r0, [r1, r0]
    bxhi lr
    tst r2, #1
    beq @L_0202d904
    tst r2, #2
    movne r3, r2, lsr #2
    addne r1, r3, #1
    moveq r1, r2, lsr #2
    mov r2, r1, lsl #1
    addeq r3, r1, #1
    mov r1, r3, lsl #1
    ldrh r2, [r0, r2]
    ldrh r12, [r0, r1]
    ldr r0, =0x7c1f
    and r1, r2, #0x3e0
    and r3, r2, r0
    add r2, r1, r1, lsl #1
    and r1, r12, #0x3e0
    add r1, r2, r1
    add r3, r3, r3, lsl #1
    and r2, r12, r0
    add r2, r3, r2
    mov r1, r1, lsr #2
    and r2, r0, r2, lsr #2
    and r0, r1, #0x3e0
    orr r0, r2, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bx lr
@L_0202d904:
    mov r1, r2, lsr #2
    b @L_0202d91c
@L_0202d90c:
    mov r1, r2, lsr #2
    mov r1, r1, lsl #1
    ldrh r0, [r0, r1]
    bx lr
@L_0202d91c:
    mov r2, r1, lsl #1
    add r1, r0, r1, lsl #1
    ldrh r3, [r0, r2]
    ldrh r12, [r1, #2]
    ldr r0, =0x7c1f
    and r2, r3, #0x3e0
    and r1, r12, #0x3e0
    add r1, r2, r1
    mov r1, r1, lsr #1
    and r3, r3, r0
    and r2, r12, r0
    add r2, r3, r2
    and r2, r0, r2, lsr #1
    and r0, r1, #0x3e0
    orr r0, r2, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bx lr
}
