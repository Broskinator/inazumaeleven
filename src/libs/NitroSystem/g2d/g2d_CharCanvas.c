// (asm for now)

extern char data_020a486c[];
void MIi_CpuClearFast(void);
void func_02027898(void);
void func_02025f40(void);
void NNS_G2dFontFindGlyphIndex(void);
void NNS_G2dFontGetCharWidthsFromIndex(void);
extern char data_020a4834[];
extern char data_020a484c[];
extern char data_020a4840[];
void func_02025d8c(void);
void func_02025eac(void);

asm void OBJSizeToShape(void)
{
    ldrb r3, [r0, #1]
    ldr r2, =data_020a486c
    ldrb r1, [r0]
    add r0, r2, r3, lsl #4
    ldr r0, [r0, r1, lsl #2]
    bx lr
}

asm void func_02026044(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    cmp r3, #8
    ldreq r4, [sp, #0x10]
    mov r12, r0
    ldr r0, [sp, #0x14]
    cmpeq r4, #8
    bne @L_02026074
    ldr r2, [sp, #0x18]
    mov r1, r12
    mov r2, r2, lsl #3
    bl MIi_CpuClearFast
    ldmia sp!, {r3, r4, r5, pc}
@L_02026074:
    ldr r4, [sp, #0x18]
    cmp r4, #4
    bne @L_020260d4
    mov r5, r1, lsl #2
    add r4, r5, r3, lsl #2
    mvn r3, #0
    rsb r4, r4, #0x20
    mov r3, r3, lsr r5
    add r1, r4, r1, lsl #2
    mov r3, r3, lsl r1
    ldr r1, [sp, #0x10]
    add r2, r12, r2, lsl #2
    add r5, r2, r1, lsl #2
    and r1, r0, r3, lsr r4
    mvn r3, r3, lsr r4
    cmp r2, r5
    ldmhsia sp!, {r3, r4, r5, pc}
@L_020260b8:
    ldr r0, [r2]
    and r0, r0, r3
    orr r0, r1, r0
    str r0, [r2], #4
    cmp r2, r5
    blo @L_020260b8
    ldmia sp!, {r3, r4, r5, pc}
@L_020260d4:
    mov r1, r1, lsl #3
    add r3, r1, r3, lsl #3
    rsb r3, r3, #0x40
    mvn r4, #0
    cmp r3, #0x20
    mov r5, r4, lsr r1
    subhs lr, r3, #0x20
    addhs r4, r1, lr
    movhs r4, r5, lsl r4
    movhs r5, r4, lsr lr
    mvn lr, #0
    movlo r5, r5, lsl r1
    cmp r1, #0x20
    mov r4, lr, lsl r3
    subhs lr, r1, #0x20
    addhs r1, lr, r3
    movhs r1, r4, lsr r1
    movhs r3, r1, lsl lr
    movlo r3, r4, lsr r3
    add r4, r12, r2, lsl #3
    ldr r1, [sp, #0x10]
    and r2, r0, r3
    add r12, r4, r1, lsl #3
    and r1, r0, r5
    mvn r5, r5
    mvn r3, r3
    cmp r4, r12
    ldmhsia sp!, {r3, r4, r5, pc}
@L_02026144:
    ldr r0, [r4]
    and r0, r0, r5
    orr r0, r1, r0
    str r0, [r4]
    ldr r0, [r4, #4]
    and r0, r0, r3
    orr r0, r2, r0
    str r0, [r4, #4]
    add r4, r4, #8
    cmp r4, r12
    blo @L_02026144
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02026174(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    ldr r5, [r0, #8]
    ldr r4, [r0, #0xc]
    cmp r5, #0
    strge r5, [sp]
    movlt r1, #0
    strlt r1, [sp]
    ldr r1, [r0, #0x10]
    mov r2, r4
    add r10, r5, r1
    ldr r1, [r0, #0x14]
    cmp r4, #0
    movlt r2, #0
    cmp r10, #8
    add r3, r4, r1
    movge r10, #8
    cmp r3, #8
    movge r3, #8
    cmp r4, #0
    movgt r4, #0
    cmp r5, #0
    ldr r7, [r0, #0x20]
    movgt r5, #0
    rsb r1, r4, #0
    mul r6, r10, r7
    ldr r8, [r0, #0x1c]
    rsb r4, r5, #0
    mul r9, r8, r4
    ldr r4, [r0, #0x18]
    mov r10, r6
    str r4, [sp, #0x10]
    ldr r4, [sp]
    cmp r7, #4
    mul r5, r4, r7
    ldr r4, [sp, #0x10]
    str r5, [sp]
    mla r4, r1, r4, r9
    ldr r1, [r0, #4]
    str r1, [sp, #0x14]
    ldr r1, [r0]
    bne @L_020262e0
    ldr r7, [r0, #0x24]
    add r0, r1, r2, lsl #2
    str r0, [sp, #0xc]
    add r0, r1, r3, lsl #2
    ldr r1, [sp, #0xc]
    str r0, [sp, #8]
    cmp r1, r0
    addhs sp, sp, #0x28
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r11, #0xf
    add r5, sp, #0x20
@L_02026248:
    ldr r0, [sp, #0xc]
    mov r1, r4, lsr #0x1f
    ldr r9, [r0]
    ldr r0, [sp, #0x14]
    rsb r2, r1, r4, lsl #29
    add r0, r0, r4, lsr #3
    str r0, [sp, #0x20]
    mov r0, #0
    strb r0, [sp, #0x24]
    strb r0, [sp, #0x25]
    mov r0, r5
    add r1, r1, r2, ror #29
    bl func_02027898
    ldr r6, [sp]
    mov r0, r6
    cmp r0, r10
    bhs @L_020262b8
@L_0202628c:
    mov r0, r5
    mov r1, r8
    bl func_02027898
    cmp r0, #0
    mvnne r1, r11, lsl r6
    addne r0, r7, r0
    andne r1, r9, r1
    orrne r9, r1, r0, lsl r6
    add r6, r6, #4
    cmp r6, r10
    blo @L_0202628c
@L_020262b8:
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #8]
    str r9, [r1], #4
    cmp r1, r0
    ldr r0, [sp, #0x10]
    str r1, [sp, #0xc]
    add r4, r4, r0
    blo @L_02026248
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020262e0:
    ldr r5, [r0, #0x24]
    add r0, r1, r3, lsl #3
    add r11, r1, r2, lsl #3
    str r0, [sp, #4]
    cmp r11, r0
    addhs sp, sp, #0x28
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020262fc:
    mov r1, r4, lsr #0x1f
    rsb r0, r1, r4, lsl #29
    add r1, r1, r0, ror #29
    ldmia r11, {r6, r7}
    mov r0, #0
    strb r0, [sp, #0x1c]
    strb r0, [sp, #0x1d]
    ldr r0, [sp, #0x14]
    add r0, r0, r4, lsr #3
    str r0, [sp, #0x18]
    add r0, sp, #0x18
    bl func_02027898
    ldr r9, [sp]
    mov r0, r9
    cmp r0, r10
    bhs @L_02026384
@L_0202633c:
    add r0, sp, #0x18
    mov r1, r8
    bl func_02027898
    cmp r0, #0
    beq @L_02026378
    add r1, r5, r0
    cmp r9, #0x20
    mov r0, #0xff
    mvnlo r0, r0, lsl r9
    andlo r0, r6, r0
    subhs r2, r9, #0x20
    orrlo r6, r0, r1, lsl r9
    mvnhs r0, r0, lsl r2
    andhs r0, r7, r0
    orrhs r7, r0, r1, lsl r2
@L_02026378:
    add r9, r9, #8
    cmp r9, r10
    blo @L_0202633c
@L_02026384:
    ldr r0, [sp, #4]
    str r7, [r11, #4]
    str r6, [r11], #8
    cmp r11, r0
    ldr r0, [sp, #0x10]
    add r4, r4, r0
    blo @L_020262fc
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_020263a8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r4, [sp, #0x54]
    ldrb r6, [r0, #0xc]
    str r4, [sp, #0x54]
    ldr r4, [r4]
    ldr r5, [r1]
    mov r7, r6, lsl #6
    ldrb r4, [r4, #1]
    mov r6, r7, asr #2
    add r6, r7, r6, lsr #29
    cmp r4, #0
    ldr r5, [r5, #8]
    mov r10, r2
    mov r9, r3
    mov r8, r6, asr #3
    addeq sp, sp, #0x2c
    ldmib r0, {r11, r12}
    ldr lr, [r0]
    ldrb r2, [r5, #1]
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    adds r7, r10, r4
    addmi sp, sp, #0x2c
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    adds r3, r9, r2
    addmi sp, sp, #0x2c
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    cmp r10, #0
    movgt r5, r10, lsr #3
    mov r6, #0
    cmp r9, #0
    add r7, r7, #7
    movgt r6, r9, lsr #3
    cmp r11, r7, lsr #3
    mov r7, r7, lsr #3
    add r3, r3, #7
    movls r7, r11
    mov r11, r3, lsr #3
    cmp r12, r3, lsr #3
    movls r11, r12
    subs r3, r7, r5
    addmi sp, sp, #0x2c
    sub r12, r11, r6
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r12, #0
    addlt sp, sp, #0x2c
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r7, [r0, #0x10]
    cmp r10, #0
    mla r6, r7, r6, r5
    sub r5, r7, r3
    mla r7, r8, r6, lr
    ldr r6, [sp, #0x54]
    mul r11, r8, r5
    ldr r6, [r6, #4]
    ldr r5, [sp, #0x50]
    str r4, [sp, #0x14]
    sub r5, r5, #1
    andge r10, r10, #7
    str r6, [sp, #8]
    cmp r9, #0
    ldr r1, [r1]
    str r5, [sp, #0x28]
    str r2, [sp, #0x18]
    ldr r2, [r1, #8]
    ldrb r4, [r0, #0xc]
    ldrb r0, [r2, #6]
    andge r9, r9, #7
    sub r2, r9, r12, lsl #3
    str r0, [sp, #0x20]
    str r4, [sp, #0x24]
    ldr r1, [r1, #8]
    str r2, [sp]
    ldrb r1, [r1]
    cmp r9, r2
    sub r6, r10, r3, lsl #3
    smulbb r0, r0, r1
    str r0, [sp, #0x1c]
    addle sp, sp, #0x2c
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r4, sp, #4
@L_020264f0:
    mov r5, r10
    str r9, [sp, #0x10]
    cmp r10, r6
    ble @L_02026520
@L_02026500:
    mov r0, r4
    str r7, [sp, #4]
    str r5, [sp, #0xc]
    bl func_02026174
    sub r5, r5, #8
    cmp r5, r6
    add r7, r7, r8
    bgt @L_02026500
@L_02026520:
    ldr r0, [sp]
    sub r9, r9, #8
    cmp r9, r0
    add r7, r7, r11
    bgt @L_020264f0
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202653c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    ldr r4, [sp, #0x74]
    ldrb r6, [r0, #0xc]
    ldr r7, [r1]
    ldr r5, [r4]
    ldr r7, [r7, #8]
    mov r8, r6, lsl #6
    ldrb r6, [r5, #1]
    mov r5, r8, asr #2
    add r5, r8, r5, lsr #29
    ldrb r7, [r7, #1]
    str r2, [sp, #8]
    str r3, [sp, #0xc]
    cmp r6, #0
    mov r9, r5, asr #3
    addeq sp, sp, #0x4c
    ldmib r0, {r2, r3}
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, [sp, #8]
    adds r5, r5, r6
    addmi sp, sp, #0x4c
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r8, [sp, #0xc]
    adds r8, r8, r7
    addmi sp, sp, #0x4c
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r10, [sp, #8]
    add r5, r5, #7
    cmp r10, #0
    movle r10, #0
    strle r10, [sp, #0x10]
    movgt r10, r10, lsr #3
    strgt r10, [sp, #0x10]
    ldr r10, [sp, #0xc]
    cmp r10, #0
    movle r10, #0
    movgt r10, r10, lsr #3
    cmp r2, r5, lsr #3
    mov r5, r5, lsr #3
    movls r5, r2
    add r2, r8, #7
    cmp r3, r2, lsr #3
    mov r8, r2, lsr #3
    ldr r2, [sp, #0x10]
    movls r8, r3
    subs r3, r5, r2
    sub r5, r8, r10
    addmi sp, sp, #0x4c
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0
    addlt sp, sp, #0x4c
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [sp, #8]
    ldr r8, [r4, #4]
    cmp r2, #0
    andge r2, r2, #7
    strge r2, [sp, #8]
    ldr r2, [sp, #0xc]
    str r6, [sp, #0x34]
    cmp r2, #0
    andge r2, r2, #7
    strge r2, [sp, #0xc]
    ldr r2, [sp, #0x70]
    str r7, [sp, #0x38]
    sub r4, r2, #1
    str r4, [sp, #0x48]
    ldr r2, [r1]
    str r8, [sp, #0x28]
    ldr r1, [r2, #8]
    ldr r4, [sp, #0xc]
    ldrb r1, [r1, #6]
    ldrb r7, [r0, #0xc]
    sub r4, r4, r5, lsl #3
    str r1, [sp, #0x40]
    str r7, [sp, #0x44]
    ldr r2, [r2, #8]
    ldr r6, [r0, #0x10]
    ldrb r5, [r2]
    str r4, [sp, #0x1c]
    mov r7, r6, lsl #0x18
    smulbb r1, r1, r5
    str r1, [sp, #0x3c]
    ldr r1, [sp, #8]
    ldr r4, [sp, #0xc]
    ldr r2, [sp, #0x1c]
    sub r5, r1, r3, lsl #3
    ldr r1, [r0, #4]
    ldr r11, [r0]
    ldr r0, [r0, #8]
    mov r6, r6, lsl #0x10
    mov r8, r7, lsr #0x18
    cmp r4, r2
    mov r7, r6, lsr #0x18
    str r1, [sp, #0x14]
    str r0, [sp, #0x18]
    addle sp, sp, #0x4c
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020266c4:
    ldr r0, [sp, #0xc]
    ldr r6, [sp, #0x10]
    str r0, [sp, #0x30]
    ldr r0, [sp, #8]
    cmp r0, r5
    mov r4, r0
    ble @L_02026720
@L_020266e0:
    ldr r2, [sp, #0x14]
    str r8, [sp]
    ldr r3, [sp, #0x18]
    mov r0, r6
    mov r1, r10
    str r7, [sp, #4]
    bl func_02025f40
    mla r1, r0, r9, r11
    add r0, sp, #0x24
    str r4, [sp, #0x2c]
    str r1, [sp, #0x24]
    bl func_02026174
    sub r4, r4, #8
    add r6, r6, #1
    cmp r4, r5
    bgt @L_020266e0
@L_02026720:
    ldr r0, [sp, #0xc]
    add r10, r10, #1
    sub r1, r0, #8
    ldr r0, [sp, #0x1c]
    str r1, [sp, #0xc]
    cmp r1, r0
    bgt @L_020266c4
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void ClearContinuous(void)
{
    stmdb sp!, {r3, lr}
    mov r3, r0
    ldrb r2, [r3, #0xc]
    ldr r12, [r3, #4]
    cmp r2, #4
    orreq r0, r1, r1, lsl #4
    orreq r0, r0, r0, lsl #8
    orrne r0, r1, r1, lsl #8
    orr r1, r0, r0, lsl #16
    ldr r0, [r3, #8]
    mov r2, r2, lsl #6
    mul lr, r12, r0
    mov r0, r2, asr #2
    add r0, r2, r0, lsr #29
    mov r2, r0, asr #3
    mov r0, r1
    mul r2, lr, r2
    ldr r1, [r3]
    bl MIi_CpuClearFast
    ldmia sp!, {r3, pc}
}

asm void ClearLine(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    ldrb r2, [r7, #0xc]
    mov r6, r1
    ldr r9, [r7]
    cmp r2, #4
    orreq r0, r6, r6, lsl #4
    orreq r0, r0, r0, lsl #8
    orrne r0, r6, r6, lsl #8
    mov r1, r2, lsl #6
    orr r6, r0, r0, lsl #16
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r3, r0, asr #3
    ldr r2, [r7, #0x10]
    ldr r1, [r7, #4]
    ldr r0, [r7, #8]
    mul r5, r3, r2
    mul r4, r3, r1
    mov r8, #0
    cmp r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_020267ec:
    mov r0, r6
    mov r1, r9
    mov r2, r4
    bl MIi_CpuClearFast
    ldr r0, [r7, #8]
    add r8, r8, #1
    cmp r8, r0
    add r9, r9, r5
    blt @L_020267ec
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02026814(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    ldr r4, [sp, #0x58]
    mov r9, r2
    ldrb r11, [r0, #0xc]
    mov r10, r1
    add r1, r9, r4
    str r1, [sp, #0x28]
    ldr r2, [sp, #0x5c]
    mov r1, r3
    add r1, r1, r2
    cmp r11, #4
    str r1, [sp, #0x24]
    orreq r1, r10, r10, lsl #4
    orreq r1, r1, r1, lsl #8
    orrne r1, r10, r10, lsl #8
    str r3, [sp, #0xc]
    orr r10, r1, r1, lsl #16
    ldr r1, [sp, #0xc]
    mov r6, r11, lsl #6
    bic r1, r1, #7
    mov r4, r6, asr #2
    mov r2, r1, asr #2
    str r1, [sp, #0x2c]
    add r1, r1, r2, lsr #29
    ldr r2, [r0, #0x10]
    mov r3, r1, asr #3
    mul r1, r3, r2
    bic r3, r9, #7
    mov r5, r3, asr #2
    add r4, r6, r4, lsr #29
    str r3, [sp, #0x18]
    add r5, r3, r5, lsr #29
    mov r3, r4, asr #3
    str r3, [sp, #0x14]
    add r4, r1, r5, asr #3
    ldr r3, [sp, #0x24]
    ldr r5, [r0]
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x28]
    mla r4, r1, r4, r5
    add r3, r3, #7
    bic r1, r3, #7
    str r1, [sp, #0x20]
    ldr r1, [sp, #0x14]
    add r0, r0, #7
    mul r1, r2, r1
    str r1, [sp, #0x10]
    ldr r2, [sp, #0x2c]
    ldr r1, [sp, #0x20]
    str r4, [sp, #0x1c]
    cmp r2, r1
    bic r6, r0, #7
    addge sp, sp, #0x30
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020268f0:
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0xc]
    ldr r7, [sp, #0x1c]
    cmp r1, r0
    movlt r1, r0
    ldrlt r0, [sp, #0x2c]
    sublt r8, r1, r0
    ldr r1, [sp, #0x24]
    ldr r0, [sp, #0x2c]
    movge r8, #0
    sub r0, r1, r0
    cmp r0, #8
    movgt r0, #8
    sub r5, r0, r8
    ldr r0, [sp, #0x18]
    cmp r0, r6
    mov r4, r0
    bge @L_0202697c
@L_02026938:
    ldr r0, [sp, #0x28]
    sub r1, r9, r4
    sub r0, r0, r4
    cmp r4, r9
    movge r1, #0
    cmp r0, #8
    movgt r0, #8
    sub r3, r0, r1
    mov r0, r7
    mov r2, r8
    stmia sp, {r5, r10, r11}
    bl func_02026044
    ldr r0, [sp, #0x14]
    add r4, r4, #8
    add r7, r7, r0
    cmp r4, r6
    blt @L_02026938
@L_0202697c:
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x10]
    add r0, r1, r0
    str r0, [sp, #0x1c]
    ldr r0, [sp, #0x2c]
    add r1, r0, #8
    ldr r0, [sp, #0x20]
    str r1, [sp, #0x2c]
    cmp r1, r0
    blt @L_020268f0
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_020269ac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    ldrb r4, [r0, #0xc]
    mov r10, r2
    mov r11, r1
    str r4, [sp, #0x10]
    ldr r1, [sp, #0x10]
    ldr r4, [sp, #0x70]
    cmp r1, #4
    add r1, r10, r4
    str r1, [sp, #0x3c]
    ldr r2, [sp, #0x74]
    mov r1, r3
    add r1, r1, r2
    bic r2, r10, #7
    str r1, [sp, #0x38]
    str r3, [sp, #0xc]
    str r2, [sp, #0x28]
    ldr r2, [sp, #0xc]
    orreq r1, r11, r11, lsl #4
    bic r2, r2, #7
    str r2, [sp, #0x40]
    ldr r2, [sp, #0x10]
    orreq r1, r1, r1, lsl #8
    mov r5, r2, lsl #6
    ldr r2, [sp, #0x38]
    mov r3, r5, asr #2
    add r6, r2, #7
    ldr r2, [sp, #0x28]
    add r3, r5, r3, lsr #29
    mov r4, r2, asr #2
    ldr r2, [sp, #0x40]
    orrne r1, r11, r11, lsl #8
    mov r5, r2, asr #2
    bic r2, r6, #7
    str r2, [sp, #0x34]
    mov r2, r3, asr #3
    str r2, [sp, #0x14]
    ldr r2, [sp, #0x28]
    orr r11, r1, r1, lsl #16
    add r2, r2, r4, lsr #29
    mov r2, r2, asr #3
    str r2, [sp, #0x2c]
    ldr r2, [sp, #0x40]
    ldr r3, [sp, #0x40]
    add r2, r2, r5, lsr #29
    mov r8, r2, asr #3
    ldr r2, [sp, #0x34]
    ldr r1, [r0, #0x10]
    cmp r3, r2
    ldr r2, [sp, #0x3c]
    add r2, r2, #7
    bic r7, r2, #7
    ldr r2, [r0, #4]
    str r2, [sp, #0x18]
    ldr r2, [r0, #8]
    ldr r0, [r0]
    str r2, [sp, #0x1c]
    str r0, [sp, #0x30]
    mov r0, r1, lsl #0x18
    mov r0, r0, lsr #0x18
    str r0, [sp, #0x20]
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x18
    str r0, [sp, #0x24]
    addge sp, sp, #0x48
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02026ab8:
    ldr r1, [sp, #0x40]
    ldr r0, [sp, #0xc]
    ldr r6, [sp, #0x2c]
    cmp r1, r0
    movlt r1, r0
    ldrlt r0, [sp, #0x40]
    sublt r9, r1, r0
    ldr r1, [sp, #0x38]
    ldr r0, [sp, #0x40]
    movge r9, #0
    sub r0, r1, r0
    cmp r0, #8
    movgt r0, #8
    sub r5, r0, r9
    ldr r0, [sp, #0x28]
    cmp r0, r7
    mov r4, r0
    bge @L_02026b74
@L_02026b00:
    ldr r0, [sp, #0x20]
    ldr r2, [sp, #0x18]
    str r0, [sp]
    ldr r0, [sp, #0x24]
    ldr r3, [sp, #0x1c]
    str r0, [sp, #4]
    mov r0, r6
    mov r1, r8
    bl func_02025f40
    ldr r2, [sp, #0x3c]
    sub r1, r10, r4
    cmp r4, r10
    sub r2, r2, r4
    movge r1, #0
    cmp r2, #8
    movgt r2, #8
    stmia sp, {r5, r11}
    sub r3, r2, r1
    ldr r2, [sp, #0x10]
    ldr r12, [sp, #0x14]
    str r2, [sp, #8]
    ldr r2, [sp, #0x30]
    mla r0, r12, r0, r2
    mov r2, r9
    bl func_02026044
    add r4, r4, #8
    add r6, r6, #1
    cmp r4, r7
    blt @L_02026b00
@L_02026b74:
    ldr r0, [sp, #0x40]
    add r8, r8, #1
    add r1, r0, #8
    ldr r0, [sp, #0x34]
    str r1, [sp, #0x40]
    cmp r1, r0
    blt @L_02026ab8
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02026b98(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, [sp, #8]
    str r3, [r0, #8]
    strb r4, [r0, #0xc]
    ldr lr, [sp, #0xc]
    stmia r0, {r1, r2}
    ldr r12, [sp, #0x10]
    str lr, [r0, #0x14]
    str r12, [r0, #0x10]
    ldmia sp!, {r4, pc}
}

asm void func_02026bc0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r7, r1
    ldrh r1, [sp, #0x2c]
    mov r8, r0
    mov r0, r7
    mov r6, r2
    mov r5, r3
    bl NNS_G2dFontFindGlyphIndex
    ldr r1, =0xffff
    mov r4, r0
    cmp r4, r1
    ldreq r0, [r7]
    ldreqh r4, [r0, #2]
    mov r0, r7
    mov r1, r4
    bl NNS_G2dFontGetCharWidthsFromIndex
    ldr r3, [r7]
    str r0, [sp, #8]
    ldr r2, [r3, #8]
    ldrh r1, [r2, #2]
    add r2, r2, #8
    mla r1, r4, r1, r2
    str r1, [sp, #0xc]
    ldr r3, [r3, #8]
    ldrb r1, [r3, #7]
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    b @L_02026c9c
    b @L_02026c54
    b @L_02026c60
    b @L_02026c60
    b @L_02026c74
    b @L_02026c74
    b @L_02026c8c
    b @L_02026c8c
    b @L_02026c54
@L_02026c54:
    ldrsb r0, [r0]
    add r6, r6, r0
    b @L_02026c9c
@L_02026c60:
    ldrb r1, [r3]
    ldrsb r0, [r0]
    sub r6, r6, r1
    add r5, r5, r0
    b @L_02026c9c
@L_02026c74:
    ldrsb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r0, [r3, #1]
    add r1, r2, r1
    sub r6, r6, r1
    b @L_02026c98
@L_02026c8c:
    ldrsb r1, [r0]
    ldrb r0, [r3, #1]
    add r0, r1, r0
@L_02026c98:
    sub r5, r5, r0
@L_02026c9c:
    ldr r0, [sp, #0x28]
    add r1, sp, #8
    str r0, [sp]
    str r1, [sp, #4]
    ldr r0, [r8, #0x14]
    mov r1, r7
    ldr r4, [r0]
    mov r0, r8
    mov r2, r6
    mov r3, r5
    blx r4
    ldr r0, [sp, #8]
    ldrsb r0, [r0, #2]
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void NNS_G2dCharCanvasInitForBG(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0xc
    ldr lr, [sp, #0x10]
    ldr r12, =data_020a4834
    str lr, [sp]
    str r12, [sp, #4]
    str r2, [sp, #8]
    bl func_02026b98
    add sp, sp, #0xc
    ldmia sp!, {pc}
}

asm void func_02026d08(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    cmp r2, #8
    movlt r4, r2
    movge r6, #3
    clzlt r4, r4
    rsblt r6, r4, #0x1f
    cmp r3, #8
    movlt r4, r3
    movge r5, #3
    clzlt r4, r4
    rsblt r5, r4, #0x1f
    ldr r4, =data_020a484c
    ldr lr, [sp, #0x20]
    add r5, r4, r5, lsl #3
    add r4, r5, r6, lsl #1
    ldrb r4, [r4, #1]
    ldr r12, [sp, #0xc]
    ldrb r5, [r5, r6, lsl #1]
    bic r6, r12, #0xff
    ldr r12, =data_020a4840
    str lr, [sp]
    orr r5, r6, r5
    bic lr, r5, #0xff00
    mov r4, r4, lsl #0x18
    str r12, [sp, #4]
    orr r4, lr, r4, lsr #16
    str r4, [sp, #8]
    bl func_02026b98
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02026d8c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r5, [sp, #0x24]
    ldr lr, [sp, #0x20]
    cmp r5, #0x20
    ldr r12, [sp, #0x28]
    bgt @L_02026dc8
    mla r4, r5, lr, r3
    ldr lr, [sp, #0x2c]
    mov r3, r5
    add r0, r0, r4, lsl #1
    stmia sp, {r12, lr}
    bl NNS_G2dMapScrToChar256x16Pltt
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02026dc8:
    add r6, lr, r2
    ldr r4, [sp, #0x2c]
    cmp lr, r6
    add r5, r3, r1
    addge sp, sp, #8
    mov r1, r4, lsl #0x1c
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
@L_02026de4:
    mov r2, lr
    cmp lr, #0x20
    addge r2, lr, #0x20
    mov r7, r3
    cmp r3, r5
    add r8, r0, r2, lsl #6
    bge @L_02026e28
@L_02026e00:
    mov r2, r7
    cmp r7, #0x20
    addge r2, r7, #0x3e0
    orr r4, r12, r1, lsr #16
    mov r2, r2, lsl #1
    add r7, r7, #1
    strh r4, [r8, r2]
    cmp r7, r5
    add r12, r12, #1
    blt @L_02026e00
@L_02026e28:
    add lr, lr, #1
    cmp lr, r6
    blt @L_02026de4
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void NNS_G2dMapScrToChar256x16Pltt(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, [sp, #0x1c]
    ldr r8, [sp, #0x18]
    mov r6, #0
    cmp r2, #0
    mov r12, r4, lsl #0x1c
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    mov r4, r6
@L_02026e5c:
    mov r7, r0
    mov r5, r4
    cmp r1, #0
    ble @L_02026e84
@L_02026e6c:
    orr lr, r8, r12, lsr #16
    add r5, r5, #1
    cmp r5, r1
    add r8, r8, #1
    strh lr, [r7], #2
    blt @L_02026e6c
@L_02026e84:
    add r6, r6, #1
    cmp r6, r2
    add r0, r0, r3, lsl #1
    blt @L_02026e5c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02026e98(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r3, r0, lsr #3
    mov r5, r1, lsr #3
    mul lr, r3, r5
    and r4, r0, #2
    and r2, r0, #1
    add r2, r2, r4, lsr #1
    and r0, r0, #4
    mov r12, r2, lsl #1
    add lr, lr, #0
    add r12, r12, r0, lsr #2
    mla r12, r5, r12, lr
    and r4, r1, #2
    and lr, r1, #1
    add r4, lr, r4, lsr #1
    and lr, r1, #4
    mov r1, r4, lsl #1
    add r1, r1, lr, lsr #2
    mla r12, r3, r1, r12
    add r1, r2, r0, lsr #2
    add r0, r4, lr, lsr #2
    mla r0, r1, r0, r12
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02026ef4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r6, r0
    mov r0, r1
    cmp r0, #8
    ldr r0, [sp, #0x60]
    str r1, [sp, #0x10]
    str r0, [sp, #0x60]
    str r2, [sp, #0x14]
    ldrlt r0, [sp, #0x10]
    str r3, [sp, #0x38]
    ldr r11, [sp, #0x64]
    ldr r5, [sp, #0x68]
    ldr r4, [sp, #0x6c]
    movge r2, #3
    clzlt r0, r0
    rsblt r2, r0, #0x1f
    ldr r0, [sp, #0x14]
    cmp r0, #8
    ldrlt r0, [sp, #0x14]
    movge r1, #3
    clzlt r0, r0
    rsblt r1, r0, #0x1f
    ldr r0, =data_020a484c
    mvn r3, #0
    add r1, r0, r1, lsl #3
    add r0, r1, r2, lsl #1
    ldrb r1, [r1, r2, lsl #1]
    ldr r2, [sp, #0x10]
    cmp r11, #0
    str r1, [sp, #0x34]
    ldrb r1, [r0, #1]
    str r1, [sp, #0x30]
    ldr r1, [sp, #0x34]
    and r1, r2, r3, lsl r1
    str r1, [sp, #0x2c]
    ldr r2, [sp, #0x14]
    ldr r1, [sp, #0x30]
    and r1, r2, r3, lsl r1
    str r1, [sp, #0x28]
    moveq r1, #1
    streq r1, [sp, #0x18]
    movne r1, #2
    strne r1, [sp, #0x18]
    mov r1, #0
    str r1, [sp, #0x24]
    bl OBJSizeToShape
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x34]
    mov r9, r2, asr r1
    ldr r2, [sp, #0x14]
    ldr r1, [sp, #0x30]
    mov r1, r2, asr r1
    str r1, [sp, #0x20]
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x34]
    mov r2, r2, lsl r1
    ldr r1, [sp, #0x30]
    mov r8, r2, lsl r1
    ldr r1, [sp, #0x24]
    b @L_02027078
@L_02026fe8:
    ldr r2, [sp, #0x1c]
    ldr r1, [sp, #0x30]
    mov r10, #0
    mov r2, r2, lsl r1
    ldr r1, [sp, #0x60]
    add r1, r1, r2, lsl #3
    mov r2, #0x400
    and r12, r1, #0xff
    rsb r2, r2, #0
    b @L_02027068
@L_02027010:
    ldr r1, [sp, #0x34]
    ldr lr, [r6]
    mov r3, r10, lsl r1
    ldr r1, [sp, #0x38]
    add r10, r10, #1
    add r1, r1, r3, lsl #3
    mov r7, r1, lsl #0x17
    ldr r1, =0xfe00ff00
    ldrh r3, [r6, #4]
    and r1, lr, r1
    orr r1, r1, r12
    orr r7, r1, r7, lsr #7
    ldr r1, =0x3fff3fff
    and r3, r3, r2
    orr r3, r3, r5
    and r1, r7, r1
    orr r1, r1, r0
    bic r1, r1, #0x2000
    orr r1, r1, r11, lsl #13
    strh r3, [r6, #4]
    add r5, r5, r8, asr r4
    str r1, [r6], #8
@L_02027068:
    cmp r10, r9
    blt @L_02027010
    ldr r1, [sp, #0x1c]
    add r1, r1, #1
@L_02027078:
    str r1, [sp, #0x1c]
    ldr r2, [sp, #0x1c]
    ldr r1, [sp, #0x20]
    cmp r2, r1
    blt @L_02026fe8
    ldr r0, [sp, #0x24]
    mla r0, r9, r1, r0
    str r0, [sp, #0x24]
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0x10]
    cmp r1, r0
    bhs @L_02027104
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x10]
    stmia sp, {r0, r11}
    ldr r0, [sp, #0x2c]
    ldr r2, [sp, #0x2c]
    sub r7, r1, r0
    ldr r1, [sp, #0x38]
    str r5, [sp, #8]
    add r3, r1, r2, lsl #3
    ldr r2, [sp, #0x28]
    mov r0, r6
    mov r1, r7
    str r4, [sp, #0xc]
    bl func_02026ef4
    ldr r1, [sp, #0x18]
    add r6, r6, r0, lsl #3
    mul r2, r1, r7
    ldr r1, [sp, #0x28]
    mul r2, r1, r2
    ldr r1, [sp, #0x24]
    add r5, r5, r2, lsr r4
    add r0, r1, r0
    str r0, [sp, #0x24]
@L_02027104:
    ldr r1, [sp, #0x28]
    ldr r0, [sp, #0x14]
    cmp r1, r0
    bhs @L_02027170
    ldr r1, [sp, #0x60]
    ldr r0, [sp, #0x28]
    ldr r3, [sp, #0x38]
    add r0, r1, r0, lsl #3
    stmia sp, {r0, r11}
    str r5, [sp, #8]
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x28]
    str r4, [sp, #0xc]
    sub r7, r1, r0
    ldr r1, [sp, #0x2c]
    mov r0, r6
    mov r2, r7
    bl func_02026ef4
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x2c]
    add r6, r6, r0, lsl #3
    mul r1, r2, r1
    mul r1, r7, r1
    add r5, r5, r1, lsr r4
    ldr r1, [sp, #0x24]
    add r0, r1, r0
    str r0, [sp, #0x24]
@L_02027170:
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0x10]
    cmp r1, r0
    ldrlo r1, [sp, #0x28]
    ldrlo r0, [sp, #0x14]
    cmplo r1, r0
    bhs @L_020271dc
    ldr r1, [sp, #0x60]
    ldr r0, [sp, #0x28]
    ldr r2, [sp, #0x10]
    add r0, r1, r0, lsl #3
    stmia sp, {r0, r11}
    str r5, [sp, #8]
    ldr r1, [sp, #0x2c]
    ldr r3, [sp, #0x14]
    sub r1, r2, r1
    ldr r2, [sp, #0x28]
    ldr r5, [sp, #0x2c]
    sub r2, r3, r2
    ldr r3, [sp, #0x38]
    mov r0, r6
    add r3, r3, r5, lsl #3
    str r4, [sp, #0xc]
    bl func_02026ef4
    ldr r1, [sp, #0x24]
    add r0, r1, r0
    str r0, [sp, #0x24]
@L_020271dc:
    ldr r0, [sp, #0x24]
    add sp, sp, #0x3c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_020271f4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    ldr r0, [sp, #0x38]
    ldr r4, [r10, #4]
    str r0, [sp, #0xc]
    ldr r5, [r4, #4]
    add r0, sp, #0xc
    mov r9, r1
    mov r8, r2
    str r3, [sp, #8]
    ldrsb r7, [sp, #0x41]
    ldr r11, [r10, #8]
    blx r5
    cmp r0, #0
    beq @L_0202727c
    ldrsb r6, [sp, #0x40]
@L_02027238:
    cmp r0, #0xa
    beq @L_0202727c
    ldr r1, [sp, #8]
    mov r2, r9
    str r1, [sp]
    str r0, [sp, #4]
    ldr r0, [r10]
    mov r1, r4
    mov r3, r8
    bl func_02026bc0
    add r0, r11, r0
    mla r9, r0, r6, r9
    mla r8, r0, r7, r8
    add r0, sp, #0xc
    blx r5
    cmp r0, #0
    bne @L_02027238
@L_0202727c:
    ldr r1, [sp, #0x3c]
    cmp r1, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r0, #0xa
    ldreq r1, [sp, #0xc]
    ldr r0, [sp, #0x3c]
    movne r1, #0
    str r1, [r0]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_020272a8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r0
    ldr r0, [r10, #4]
    ldr r4, [sp, #0x60]
    ldr r0, [r0]
    ldrsb r7, [sp, #0x65]
    ldrsb r0, [r0, #1]
    ldr r5, [r10, #0xc]
    ldrsb r8, [sp, #0x64]
    add r5, r5, r0
    rsb r0, r7, #0
    mul r0, r5, r0
    str r0, [sp, #0x1c]
    mul r0, r5, r8
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x58]
    str r1, [sp, #0xc]
    str r2, [sp, #0x10]
    mov r9, r3
    str r4, [sp, #0x2c]
    cmp r4, #0
    str r0, [sp, #0x58]
    mov r4, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [sp, #0x5c]
    add r1, r9, #1
    and r0, r2, #0x800
    str r0, [sp, #0x14]
    add r0, r1, r1, lsr #31
    str r0, [sp, #0x28]
    ldrb r0, [sp, #0x64]
    and r11, r2, #0x400
    str r0, [sp, #0x20]
    ldrb r0, [sp, #0x65]
    str r0, [sp, #0x24]
@L_0202733c:
    ldr r0, [sp, #0x14]
    ldr r1, [sp, #0x1c]
    cmp r0, #0
    ldr r0, [sp, #0xc]
    mla r5, r4, r1, r0
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x10]
    mla r6, r4, r1, r0
    beq @L_02027378
    ldr r2, [sp, #0x2c]
    mov r3, #0
    ldmib r10, {r0, r1}
    bl func_02025d8c
    sub r0, r9, r0
    b @L_020273a4
@L_02027378:
    cmp r11, #0
    beq @L_020273ac
    ldr r2, [sp, #0x2c]
    mov r3, #0
    ldmib r10, {r0, r1}
    bl func_02025d8c
    add r0, r0, #1
    add r0, r0, r0, lsr #31
    mov r1, r0, asr #1
    ldr r0, [sp, #0x28]
    rsb r0, r1, r0, asr #1
@L_020273a4:
    mla r5, r0, r8, r5
    mla r6, r0, r7, r6
@L_020273ac:
    ldr r3, [sp, #0x2c]
    mov r1, r5
    str r3, [sp]
    add r3, sp, #0x2c
    str r3, [sp, #4]
    ldr r3, [sp, #0x20]
    mov r2, r6
    strb r3, [sp, #8]
    ldr r3, [sp, #0x24]
    mov r0, r10
    strb r3, [sp, #9]
    ldr r3, [sp, #0x58]
    bl func_020271f4
    ldr r0, [sp, #0x2c]
    add r4, r4, #1
    cmp r0, #0
    bne @L_0202733c
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_020273f8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x28
    mov r8, r0
    ldr r4, [sp, #0x44]
    mov r5, r3
    str r4, [sp]
    ldr r3, [r8, #0xc]
    add r0, sp, #0x18
    mov r7, r1
    mov r6, r2
    ldmib r8, {r1, r2}
    ldr r4, [sp, #0x40]
    bl func_02025eac
    ldr r2, [sp, #0x18]
    ldr r0, [sp, #0x1c]
    str r2, [sp, #0x10]
    str r0, [sp, #0x14]
    str r2, [sp, #0x20]
    str r0, [sp, #0x24]
    tst r4, #0x10
    beq @L_02027470
    add r0, r2, #1
    rsb r0, r0, #0
    add r0, r0, r0, lsr #31
    ldrsb r1, [sp, #0x48]
    mov r2, r0, asr #1
    ldrsb r0, [sp, #0x49]
    mla r7, r2, r1, r7
    mla r6, r2, r0, r6
    b @L_02027488
@L_02027470:
    tst r4, #0x20
    ldrnesb r1, [sp, #0x48]
    rsbne r2, r2, #0
    ldrnesb r0, [sp, #0x49]
    mlane r7, r2, r1, r7
    mlane r6, r2, r0, r6
@L_02027488:
    tst r4, #2
    beq @L_020274bc
    ldr r0, [sp, #0x24]
    ldrsb r2, [sp, #0x49]
    add r0, r0, #1
    rsb r0, r0, #0
    add r0, r0, r0, lsr #31
    ldrsb r1, [sp, #0x48]
    mov r3, r0, asr #1
    rsb r0, r2, #0
    mla r7, r3, r0, r7
    mla r6, r3, r1, r6
    b @L_020274e0
@L_020274bc:
    tst r4, #4
    beq @L_020274e0
    ldrsb r1, [sp, #0x49]
    ldr r2, [sp, #0x24]
    ldrsb r0, [sp, #0x48]
    rsb r2, r2, #0
    rsb r1, r1, #0
    mla r7, r2, r1, r7
    mla r6, r2, r0, r6
@L_020274e0:
    str r5, [sp]
    ldr r1, [sp, #0x44]
    str r4, [sp, #4]
    ldrb r0, [sp, #0x48]
    str r1, [sp, #8]
    ldrb r4, [sp, #0x49]
    strb r0, [sp, #0xc]
    ldr r3, [sp, #0x20]
    mov r0, r8
    mov r1, r7
    mov r2, r6
    strb r4, [sp, #0xd]
    bl func_020272a8
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
