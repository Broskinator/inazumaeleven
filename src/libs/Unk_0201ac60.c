// (asm for now)

void func_0201ac60(void);
void strtod(void);
void atof(void);
void func_0201bc10(void);
void strtol(void);
void atoi(void);
void func_0201c058(void);

extern char data_020a4600[];
extern char data_020a45f8[];
extern char data_020a44f8[];
extern char data_020a4478[];
extern char data_020ab0c4[];
void _fsub(void);
void _f2d(void);
void func_02017c04(void);
void _dsub(void);
extern char data_020ab0cc[];
void func_0201cecc(void);
void _dneq(void);
void _dls(void);
void _dgr(void);
void func_0201a704(void);
void fabs(void);
extern char data_020bf3e4[];
void _u32_div_f(void);

asm void func_0201ac60(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xa8
    ldr r5, [sp, #0xd0]
    mov r4, #0
    str r5, [sp, #0xd0]
    str r0, [sp]
    add r7, sp, #0x80
    mov r9, r1
    mov r8, r2
    str r3, [sp, #4]
    mov r5, r4
    str r4, [sp, #0x2c]
    mov r6, #1
    mov r0, #4
@L_0201ac98:
    strh r4, [r7]
    strh r4, [r7, #2]
    strh r4, [r7, #4]
    strh r4, [r7, #6]
    add r7, r7, #8
    subs r0, r0, #1
    bne @L_0201ac98
    mov r0, #0
    str r0, [sp, #0x28]
    strh r4, [r7]
    strh r4, [r7, #2]
    ldr r2, [sp, #0x28]
    ldr r1, [sp, #0xd0]
    strh r4, [r7, #4]
    str r2, [r1]
    mov r1, r2
    mov r0, r8
    str r1, [sp, #0x24]
    str r1, [sp, #0x20]
    str r1, [sp, #0x1c]
    str r1, [sp, #0x18]
    str r1, [sp, #0x10]
    str r1, [sp, #0xc]
    str r1, [sp, #8]
    add r5, r5, #1
    blx r9
    mov r1, r0
    ldr r11, =data_020a4600
    add r0, sp, #0x4d
    mov r7, #4
@L_0201ad10:
    ldrb r3, [r11]
    ldrb r2, [r11, #1]
    add r11, r11, #2
    subs r7, r7, #1
    strb r2, [r0, #1]
    strb r3, [r0], #2
    bne @L_0201ad10
    ldrb r3, [r11]
    ldr r2, =data_020a45f8
    strb r3, [r0]
    ldrb r3, [r2, #1]
    ldrb r0, [r2, #2]
    ldrb r7, [r2]
    strb r3, [sp, #0x31]
    strb r0, [sp, #0x32]
    ldrb r3, [r2, #3]
    ldrb r0, [r2, #4]
    strb r7, [sp, #0x30]
    strb r3, [sp, #0x33]
    strb r0, [sp, #0x34]
    b @L_0201b6f4
@L_0201ad64:
    cmp r6, #0x100
    bgt @L_0201addc
    bge @L_0201b390
    cmp r6, #0x20
    bgt @L_0201adc0
    bge @L_0201b2b4
    cmp r6, #8
    bgt @L_0201adb4
    cmp r6, #0
    addge pc, pc, r6, lsl #2
    b @L_0201b6f4
    b @L_0201b6f4
    b @L_0201ae20
    b @L_0201b194
    b @L_0201b6f4
    b @L_0201b218
    b @L_0201b6f4
    b @L_0201b6f4
    b @L_0201b6f4
    b @L_0201b228
@L_0201adb4:
    cmp r6, #0x10
    beq @L_0201b28c
    b @L_0201b6f4
@L_0201adc0:
    cmp r6, #0x40
    bgt @L_0201add0
    beq @L_0201b318
    b @L_0201b6f4
@L_0201add0:
    cmp r6, #0x80
    beq @L_0201b33c
    b @L_0201b6f4
@L_0201addc:
    cmp r6, #0x2000
    bgt @L_0201ae04
    bge @L_0201b000
    cmp r6, #0x200
    bgt @L_0201adf8
    beq @L_0201b3c8
    b @L_0201b6f4
@L_0201adf8:
    cmp r6, #0x400
    beq @L_0201b3d8
    b @L_0201b6f4
@L_0201ae04:
    cmp r6, #0x4000
    bgt @L_0201ae14
    beq @L_0201af20
    b @L_0201b6f4
@L_0201ae14:
    cmp r6, #0x8000
    beq @L_0201b418
    b @L_0201b6f4
@L_0201ae20:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #0x100
    cmp r0, #0
    beq @L_0201ae64
    mov r1, #0
    mov r0, r8
    mov r2, r1
    blx r9
    mov r1, r0
    ldr r0, [sp, #0x2c]
    add r0, r0, #1
    str r0, [sp, #0x2c]
    b @L_0201b6f4
@L_0201ae64:
    cmp r1, #0x80
    movhs r0, r1
    ldrlo r0, =data_020a4478
    ldrlob r0, [r0, r1]
    cmp r0, #0x49
    bgt @L_0201aea0
    bge @L_0201aed8
    cmp r0, #0x2d
    bgt @L_0201af18
    cmp r0, #0x2b
    blt @L_0201af18
    beq @L_0201aeb4
    cmp r0, #0x2d
    beq @L_0201aeac
    b @L_0201af18
@L_0201aea0:
    cmp r0, #0x4e
    beq @L_0201aef8
    b @L_0201af18
@L_0201aeac:
    mov r0, #1
    str r0, [sp, #0x28]
@L_0201aeb4:
    mov r1, #0
    mov r0, r8
    mov r2, r1
    add r5, r5, #1
    blx r9
    mov r1, r0
    mov r0, #1
    str r0, [sp, #0x18]
    b @L_0201b6f4
@L_0201aed8:
    add r5, r5, #1
    mov r0, r8
    mov r1, #0
    mov r2, r1
    blx r9
    mov r1, r0
    mov r6, #0x4000
    b @L_0201b6f4
@L_0201aef8:
    add r5, r5, #1
    mov r0, r8
    mov r1, #0
    mov r2, r1
    blx r9
    mov r1, r0
    mov r6, #0x2000
    b @L_0201b6f4
@L_0201af18:
    mov r6, #2
    b @L_0201b6f4
@L_0201af20:
    mov r6, #1
    add r11, sp, #0x4d
    add r7, sp, #0x76
    mov r3, #4
@L_0201af30:
    ldrb r2, [r11]
    ldrb r0, [r11, #1]
    add r11, r11, #2
    subs r3, r3, #1
    strb r0, [r7, #1]
    strb r2, [r7], #2
    bne @L_0201af30
    ldrb r0, [r11]
    add r11, sp, #0x76
    strb r0, [r7]
    ldr r7, =data_020a4478
    b @L_0201af7c
@L_0201af60:
    mov r1, #0
    mov r0, r8
    mov r2, r1
    add r6, r6, #1
    add r5, r5, #1
    blx r9
    mov r1, r0
@L_0201af7c:
    cmp r6, #8
    bge @L_0201af9c
    mov r2, r1
    cmp r1, #0x80
    ldrlob r2, [r7, r1]
    ldrb r0, [r11, r6]
    cmp r0, r2
    beq @L_0201af60
@L_0201af9c:
    cmp r6, #3
    beq @L_0201afac
    cmp r6, #8
    bne @L_0201aff8
@L_0201afac:
    ldr r0, [sp, #0x28]
    cmp r0, #0
    beq @L_0201afcc
    ldr r1, =data_020ab0c4
    mov r0, #0
    ldr r1, [r1]
    bl _fsub
    b @L_0201afd4
@L_0201afcc:
    ldr r0, =data_020ab0c4
    ldr r0, [r0]
@L_0201afd4:
    bl _f2d
    ldr r2, [sp, #0x2c]
    add r3, r2, r6
    ldr r2, [sp, #0x18]
    add r3, r2, r3
    ldr r2, [sp, #4]
    add sp, sp, #0xa8
    str r3, [r2]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201aff8:
    mov r6, #0x1000
    b @L_0201b6f4
@L_0201b000:
    ldrb r3, [sp, #0x30]
    ldrb r0, [sp, #0x32]
    ldrb r2, [sp, #0x31]
    strb r3, [sp, #0x40]
    strb r0, [sp, #0x42]
    ldrb r3, [sp, #0x33]
    ldrb r0, [sp, #0x34]
    strb r2, [sp, #0x41]
    mov r6, #1
    strb r0, [sp, #0x44]
    mov r7, #0
    add r2, sp, #0x56
    strb r3, [sp, #0x43]
    mov r0, #8
@L_0201b038:
    strb r7, [r2]
    strb r7, [r2, #1]
    strb r7, [r2, #2]
    strb r7, [r2, #3]
    add r2, r2, #4
    subs r0, r0, #1
    bne @L_0201b038
    ldr r11, =data_020a4478
    b @L_0201b078
@L_0201b05c:
    mov r1, #0
    mov r0, r8
    mov r2, r1
    add r6, r6, #1
    add r5, r5, #1
    blx r9
    mov r1, r0
@L_0201b078:
    cmp r6, #4
    bge @L_0201b09c
    add r0, sp, #0x40
    mov r2, r1
    cmp r1, #0x80
    ldrlob r2, [r11, r1]
    ldrb r0, [r0, r6]
    cmp r0, r2
    beq @L_0201b05c
@L_0201b09c:
    sub r0, r6, #3
    cmp r0, #1
    bhi @L_0201b190
    cmp r6, #4
    bne @L_0201b134
    ldr r11, =data_020a44f8
    b @L_0201b0dc
@L_0201b0b8:
    add r0, sp, #0x56
    strb r1, [r0, r7]
    mov r1, #0
    mov r0, r8
    mov r2, r1
    add r7, r7, #1
    add r5, r5, #1
    blx r9
    mov r1, r0
@L_0201b0dc:
    cmp r7, #0x20
    bge @L_0201b124
    cmp r1, #0x80
    movhs r0, #0
    movlo r0, r1, lsl #1
    ldrloh r0, [r11, r0]
    andlo r0, r0, #8
    cmp r0, #0
    bne @L_0201b0b8
    cmp r1, #0x80
    movhs r0, #0
    movlo r0, r1, lsl #1
    ldrloh r0, [r11, r0]
    andlo r0, r0, #1
    cmp r0, #0
    bne @L_0201b0b8
    cmp r1, #0x2e
    beq @L_0201b0b8
@L_0201b124:
    cmp r1, #0x29
    movne r6, #0x1000
    bne @L_0201b6f4
    add r7, r7, #1
@L_0201b134:
    ldr r1, [sp, #0x28]
    add r0, sp, #0x56
    mov r4, #0
    strb r4, [r0, r7]
    cmp r1, #0
    beq @L_0201b168
    bl func_02017c04
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r4
    bl _dsub
    b @L_0201b16c
@L_0201b168:
    bl func_02017c04
@L_0201b16c:
    ldr r2, [sp, #0x2c]
    add r2, r2, r6
    add r3, r7, r2
    ldr r2, [sp, #0x18]
    add r3, r2, r3
    ldr r2, [sp, #4]
    add sp, sp, #0xa8
    str r3, [r2]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201b190:
    b @L_0201aff8
@L_0201b194:
    cmp r1, #0x2e
    bne @L_0201b1a4
    mov r6, #0x10
    b @L_0201b6dc
@L_0201b1a4:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #8
    cmp r0, #0
    moveq r6, #0x1000
    beq @L_0201b6f4
    cmp r1, #0x30
    bne @L_0201b210
    add r5, r5, #1
    mov r0, r8
    mov r1, #0
    mov r2, r1
    blx r9
    cmp r0, #0
    mov r1, r0
    blt @L_0201b1fc
    cmp r0, #0x80
    ldrlt r2, =data_020a4478
    ldrltb r0, [r2, r0]
@L_0201b1fc:
    cmp r0, #0x58
    moveq r6, #0x8000
    moveq r4, #1
    movne r6, #4
    b @L_0201b6f4
@L_0201b210:
    mov r6, #8
    b @L_0201b6f4
@L_0201b218:
    cmp r1, #0x30
    movne r6, #8
    bne @L_0201b6f4
    b @L_0201b6dc
@L_0201b228:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #8
    cmp r0, #0
    bne @L_0201b25c
    cmp r1, #0x2e
    movne r6, #0x40
    bne @L_0201b6f4
    mov r6, #0x20
    b @L_0201b6dc
@L_0201b25c:
    ldrb r2, [sp, #0x84]
    cmp r2, #0x14
    ldrhs r0, [sp, #0x1c]
    addhs r0, r0, #1
    strhs r0, [sp, #0x1c]
    bhs @L_0201b288
    add r0, r2, #1
    strb r0, [sp, #0x84]
    add r0, sp, #0x80
    add r0, r0, r2
    strb r1, [r0, #5]
@L_0201b288:
    b @L_0201b6dc
@L_0201b28c:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #8
    cmp r0, #0
    moveq r6, #0x1000
    movne r6, #0x20
    b @L_0201b6f4
@L_0201b2b4:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #8
    cmp r0, #0
    moveq r6, #0x40
    beq @L_0201b6f4
    ldrb r3, [sp, #0x84]
    cmp r3, #0x14
    bhs @L_0201b314
    cmp r1, #0x30
    cmpeq r3, #0
    beq @L_0201b308
    ldrb r2, [sp, #0x84]
    add r0, sp, #0x80
    add r0, r0, r3
    add r2, r2, #1
    strb r2, [sp, #0x84]
    strb r1, [r0, #5]
@L_0201b308:
    ldr r0, [sp, #0x1c]
    sub r0, r0, #1
    str r0, [sp, #0x1c]
@L_0201b314:
    b @L_0201b6dc
@L_0201b318:
    cmp r1, #0x80
    movhs r0, r1
    ldrlo r0, =data_020a4478
    ldrlob r0, [r0, r1]
    cmp r0, #0x45
    movne r6, #0x800
    bne @L_0201b6f4
    mov r6, #0x80
    b @L_0201b6dc
@L_0201b33c:
    cmp r1, #0x2b
    bne @L_0201b360
    add r5, r5, #1
    mov r0, r8
    mov r1, #0
    mov r2, r1
    blx r9
    mov r1, r0
    b @L_0201b388
@L_0201b360:
    cmp r1, #0x2d
    bne @L_0201b388
    mov r1, #0
    mov r0, r8
    mov r2, r1
    add r5, r5, #1
    blx r9
    mov r1, r0
    mov r0, #1
    str r0, [sp, #0x24]
@L_0201b388:
    mov r6, #0x100
    b @L_0201b6f4
@L_0201b390:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #8
    cmp r0, #0
    moveq r6, #0x1000
    beq @L_0201b6f4
    cmp r1, #0x30
    movne r6, #0x400
    bne @L_0201b6f4
    mov r6, #0x200
    b @L_0201b6dc
@L_0201b3c8:
    cmp r1, #0x30
    movne r6, #0x400
    bne @L_0201b6f4
    b @L_0201b6dc
@L_0201b3d8:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #8
    cmp r0, #0
    moveq r6, #0x800
    beq @L_0201b6f4
    ldr r0, [sp, #0x20]
    sub r2, r1, #0x30
    mov r1, #0xa
    mla r0, r1, r0, r2
    str r0, [sp, #0x20]
    cmp r0, #0x134
    b @L_0201b6d0
@L_0201b418:
    cmp r4, #0x20
    bgt @L_0201b468
    bge @L_0201b614
    cmp r4, #8
    bgt @L_0201b45c
    cmp r4, #0
    addge pc, pc, r4, lsl #2
    b @L_0201b6f4
    b @L_0201b6f4
    b @L_0201b48c
    b @L_0201b4d0
    b @L_0201b6f4
    b @L_0201b4e0
    b @L_0201b6f4
    b @L_0201b6f4
    b @L_0201b6f4
    b @L_0201b594
@L_0201b45c:
    cmp r4, #0x10
    beq @L_0201b5f0
    b @L_0201b6f4
@L_0201b468:
    cmp r4, #0x80
    bgt @L_0201b480
    bge @L_0201b67c
    cmp r4, #0x40
    beq @L_0201b644
    b @L_0201b6f4
@L_0201b480:
    cmp r4, #0x100
    beq @L_0201b68c
    b @L_0201b6f4
@L_0201b48c:
    mov r1, #0
    add r0, sp, #0x45
    str r0, [sp, #0x14]
    str r1, [sp, #8]
    strb r1, [r0]
    strb r1, [r0, #1]
    strb r1, [r0, #2]
    strb r1, [r0, #3]
    strb r1, [r0, #4]
    strb r1, [r0, #5]
    strb r1, [r0, #6]
    strb r1, [r0, #7]
    mov r10, r1
    mov r4, #2
    add r5, r5, #1
    mov r0, r8
    b @L_0201b6e8
@L_0201b4d0:
    cmp r1, #0x30
    movne r4, #4
    bne @L_0201b6f4
    b @L_0201b6dc
@L_0201b4e0:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #0x400
    cmp r0, #0
    bne @L_0201b514
    cmp r1, #0x2e
    movne r4, #0x10
    bne @L_0201b6f4
    mov r4, #8
    b @L_0201b6dc
@L_0201b514:
    ldr r2, [sp, #8]
    mov r0, #0xe
    cmp r2, r0
    bhs @L_0201b590
    mov r0, r2
    add r0, r0, #1
    str r0, [sp, #8]
    ldr r0, [sp, #0x14]
    add r2, r10, r10, lsr #31
    cmp r1, #0
    ldrb r0, [r0, r2, asr #1]
    blt @L_0201b550
    cmp r1, #0x80
    ldrlt r2, =data_020a4478
    ldrltb r1, [r2, r1]
@L_0201b550:
    cmp r1, #0x41
    subge r1, r1, #0x37
    sublt r1, r1, #0x30
    mov r2, r10, lsr #0x1f
    and r3, r1, #0xff
    rsb r1, r2, r10, lsl #31
    adds r1, r2, r1, ror #31
    moveq r1, r3, lsl #4
    add r2, r10, r10, lsr #31
    orrne r0, r0, r3
    andeq r1, r1, #0xff
    orreq r0, r0, r1
    ldr r1, [sp, #0x14]
    add r10, r10, #1
    strb r0, [r1, r2, asr #1]
    b @L_0201b6dc
@L_0201b590:
    b @L_0201b6dc
@L_0201b594:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #0x400
    cmp r0, #0
    moveq r4, #0x10
    beq @L_0201b6f4
    ldr r2, [sp, #8]
    mov r0, #0xe
    cmp r2, r0
    bhs @L_0201b5ec
    ldr r0, [sp, #0x14]
    add r2, r10, r10, lsr #31
    cmp r1, #0
    ldrb r0, [r0, r2, asr #1]
    blt @L_0201b5e8
    cmp r1, #0x80
    ldrlt r2, =data_020a4478
    ldrltb r1, [r2, r1]
@L_0201b5e8:
    b @L_0201b550
@L_0201b5ec:
    b @L_0201b6dc
@L_0201b5f0:
    cmp r1, #0x80
    movhs r0, r1
    ldrlo r0, =data_020a4478
    ldrlob r0, [r0, r1]
    cmp r0, #0x50
    movne r6, #0x800
    bne @L_0201b6f4
    mov r4, #0x20
    b @L_0201b6dc
@L_0201b614:
    cmp r1, #0x2d
    moveq r0, #1
    streq r0, [sp, #0xc]
    beq @L_0201b63c
    cmp r1, #0x2b
    beq @L_0201b63c
    mov r0, r8
    mov r2, #1
    blx r9
    sub r5, r5, #1
@L_0201b63c:
    mov r4, #0x40
    b @L_0201b6dc
@L_0201b644:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #8
    cmp r0, #0
    moveq r6, #0x1000
    beq @L_0201b6f4
    cmp r1, #0x30
    movne r4, #0x100
    bne @L_0201b6f4
    mov r4, #0x80
    b @L_0201b6dc
@L_0201b67c:
    cmp r1, #0x30
    movne r4, #0x100
    bne @L_0201b6f4
    b @L_0201b6dc
@L_0201b68c:
    cmp r1, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r2, r1, lsl #1
    ldrloh r0, [r0, r2]
    andlo r0, r0, #8
    cmp r0, #0
    moveq r6, #0x800
    beq @L_0201b6f4
    ldr r0, [sp, #0x10]
    sub r2, r1, #0x30
    mov r1, #0xa
    mla r0, r1, r0, r2
    str r0, [sp, #0x10]
    ldr r1, =0x7fff
    ldr r0, [sp, #0x20]
    cmp r0, r1
@L_0201b6d0:
    ldrgt r0, [sp, #0xd0]
    movgt r1, #1
    strgt r1, [r0]
@L_0201b6dc:
    add r5, r5, #1
    mov r0, r8
    mov r1, #0
@L_0201b6e8:
    mov r2, r1
    blx r9
    mov r1, r0
@L_0201b6f4:
    ldr r0, [sp]
    cmp r5, r0
    bgt @L_0201b710
    cmn r1, #1
    beq @L_0201b710
    tst r6, #0x1800
    beq @L_0201ad64
@L_0201b710:
    cmp r6, #0x8000
    beq @L_0201b72c
    ldr r0, =0xe2c
    tst r6, r0
    moveq r0, #1
    movne r0, #0
    b @L_0201b750
@L_0201b72c:
    sub r0, r5, #1
    cmp r0, #2
    ble @L_0201b744
    ldr r0, =0x18e
    tst r4, r0
    bne @L_0201b74c
@L_0201b744:
    mov r0, #1
    b @L_0201b750
@L_0201b74c:
    mov r0, #0
@L_0201b750:
    cmp r0, #0
    ldrne r0, [sp, #4]
    movne r2, #0
    ldreq r0, [sp, #0x2c]
    subeq r2, r5, #1
    addeq r2, r2, r0
    ldreq r0, [sp, #4]
    str r2, [r0]
    mov r0, r8
    mov r2, #1
    blx r9
    cmp r4, #0
    bne @L_0201b968
    ldr r0, [sp, #0x24]
    ldrb r2, [sp, #0x84]
    cmp r0, #0
    ldrne r0, [sp, #0x20]
    mov r4, #0
    rsbne r0, r0, #0
    strne r0, [sp, #0x20]
    add r0, sp, #0x85
    add r1, r0, r2
    b @L_0201b7b8
@L_0201b7ac:
    ldr r0, [sp, #0x1c]
    add r0, r0, #1
    str r0, [sp, #0x1c]
@L_0201b7b8:
    cmp r2, #0
    sub r2, r2, #1
    beq @L_0201b7d0
    ldrb r0, [r1, #-1]!
    cmp r0, #0x30
    beq @L_0201b7ac
@L_0201b7d0:
    add r0, r2, #1
    ands r3, r0, #0xff
    strb r0, [sp, #0x84]
    addeq r1, r3, #1
    streqb r1, [sp, #0x84]
    addeq r0, sp, #0x85
    moveq r1, #0x30
    streqb r1, [r0, r3]
    mov r1, #0x134
    ldr r0, [sp, #0x20]
    rsb r1, r1, #0
    mov r2, #1
    cmp r0, r1
    blt @L_0201b810
    cmp r0, #0x134
    ble @L_0201b844
@L_0201b810:
    ldr r0, [sp, #0xd0]
    ldr r0, [r0]
    cmp r0, #0
    ldreqb r0, [sp, #0x85]
    cmpeq r0, #0x30
    ldreqb r0, [sp, #0x86]
    cmpeq r0, #0
    moveq r0, #0
    addeq sp, sp, #0xa8
    moveq r1, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0xd0]
    str r2, [r0]
@L_0201b844:
    ldr r0, [sp, #0xd0]
    ldr r1, [sp, #0x20]
    ldr r0, [r0]
    cmp r0, #0
    ldr r0, [sp, #0x1c]
    add r1, r1, r0
    beq @L_0201b8ac
    ldr r0, [sp, #0x24]
    cmp r0, #0
    movne r0, #0
    addne sp, sp, #0xa8
    movne r1, r0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x28]
    cmp r0, #0
    ldreq r1, =data_020ab0cc
    addeq sp, sp, #0xa8
    ldmeqia r1, {r0, r1}
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_020ab0cc
    mov r0, #0
    ldmia r1, {r2, r3}
    mov r1, r0
    bl _dsub
    add sp, sp, #0xa8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201b8ac:
    add r0, sp, #0x80
    strh r1, [sp, #0x82]
    bl func_0201cecc
    mov r8, r0
    mov r9, r1
    mov r0, r4
    mov r1, r4
    mov r2, r8
    mov r3, r9
    bl _dneq
    beq @L_0201b8fc
    mov r2, r4
    mov r0, r8
    mov r1, r9
    mov r3, #0x100000
    mov r4, #1
    bl _dls
    ldrlo r0, [sp, #0xd0]
    strlo r4, [r0]
    blo @L_0201b924
@L_0201b8fc:
    ldr r3, =0x7fefffff
    mov r0, r8
    mov r1, r9
    mvn r2, #0
    mov r4, #1
    bl _dgr
    ldrhi r0, [sp, #0xd0]
    ldrhi r1, =data_020ab0cc
    strhi r4, [r0]
    ldmhiia r1, {r8, r9}
@L_0201b924:
    ldr r0, [sp, #0x28]
    cmp r0, #0
    beq @L_0201b958
    ldr r0, =0xe2c
    tst r6, r0
    beq @L_0201b958
    mov r0, #0
    mov r1, r0
    mov r2, r8
    mov r3, r9
    bl _dsub
    mov r8, r0
    mov r9, r1
@L_0201b958:
    add sp, sp, #0xa8
    mov r0, r8
    mov r1, r9
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0201b968:
    ldr r0, [sp, #0xc]
    add r4, sp, #0x38
    cmp r0, #0
    ldrne r0, [sp, #0x10]
    ldrb r3, [sp, #0x45]
    rsbne r0, r0, #0
    strne r0, [sp, #0x10]
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #8]
    mov r2, #0
    add r0, r1, r0, lsl #2
    str r0, [sp, #0x10]
    mov r1, #0x80
    b @L_0201b9b0
@L_0201b9a0:
    ldr r0, [sp, #0x10]
    add r2, r2, #1
    sub r0, r0, #1
    str r0, [sp, #0x10]
@L_0201b9b0:
    cmp r2, #4
    bhs @L_0201b9c0
    tst r3, r1, asr r2
    beq @L_0201b9a0
@L_0201b9c0:
    ldr r0, [sp, #0x10]
    adds r5, r2, #1
    sub r0, r0, #1
    str r0, [sp, #0x10]
    beq @L_0201ba18
    add r0, sp, #0x4c
    add r3, sp, #0x45
    str r0, [sp, #0x14]
    mov r1, #0
    cmp r0, r3
    blo @L_0201ba18
    rsb r6, r5, #8
@L_0201b9f0:
    ldr r0, [sp, #0x14]
    ldrb r0, [r0]
    orr r2, r1, r0, lsl r5
    mov r1, r0, asr r6
    ldr r0, [sp, #0x14]
    and r1, r1, #0xff
    strb r2, [r0], #-1
    str r0, [sp, #0x14]
    cmp r0, r3
    bhs @L_0201b9f0
@L_0201ba18:
    mov r2, #0
    strb r2, [r4]
    strb r2, [r4, #1]
    strb r2, [r4, #2]
    strb r2, [r4, #3]
    strb r2, [r4, #4]
    strb r2, [r4, #5]
    strb r2, [r4, #6]
    strb r2, [r4, #7]
    mov r3, #0xc
    mov r0, #0xff
    add r1, sp, #0x45
@L_0201ba48:
    add r5, r2, #8
    cmp r5, #0x34
    rsbhi r6, r2, #0x34
    ldrb r5, [r1, r2, lsr #3]
    movhi r6, r0, lsl r6
    andhi r6, r6, #0xff
    andhi r5, r5, r6
    and r9, r3, #7
    mov r6, r5, asr r9
    and r7, r6, #0xff
    ldrb r8, [r4, r3, lsr #3]
    rsb r6, r9, #8
    mov r5, r5, lsl r6
    orr r7, r8, r7
    strb r7, [r4, r3, lsr #3]
    add r3, r3, #8
    add r2, r2, #8
    ldrb r6, [r4, r3, lsr #3]
    and r5, r5, #0xff
    cmp r2, #0x34
    orr r5, r6, r5
    strb r5, [r4, r3, lsr #3]
    blo @L_0201ba48
    ldr r0, [sp, #0x20]
    mov r1, #0x800
    add r0, r0, #0xff
    add r2, r0, #0x300
    ldr r0, [sp, #0x10]
    rsb r1, r1, #0
    add r0, r0, r2
    tst r0, r1
    ldrne r2, [sp, #0xd0]
    mov r3, #1
    movne r0, #0
    addne sp, sp, #0xa8
    movne r1, r0
    strne r3, [r2]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r0, lsl #0x15
    mov r1, r0, lsr #0x19
    and r2, r1, #0xff
    mov r0, r0, lsr #0x11
    ldrb r3, [r4]
    ldrb r1, [r4, #1]
    and r0, r0, #0xff
    orr r2, r3, r2
    orr r0, r1, r0
    strb r0, [r4, #1]
    ldr r0, [sp, #0x28]
    strb r2, [r4]
    cmp r0, #0
    andne r0, r2, #0xff
    orrne r0, r0, #0x80
    strneb r0, [r4]
    mov r3, #0
@L_0201bb24:
    rsb r1, r3, #7
    ldrb r2, [r4, r3]
    ldrb r0, [r4, r1]
    strb r0, [r4, r3]
    add r3, r3, #1
    strb r2, [r4, r1]
    cmp r3, #4
    blt @L_0201bb24
    ldmia r4, {r0, r1}
    add sp, sp, #0xa8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void strtod(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r7, r0
    mov r0, #0
    mov r6, r1
    str r0, [sp, #8]
    add r12, sp, #0xc
    str r7, [sp, #4]
    ldr r1, =func_0201a704
    add r2, sp, #4
    add r3, sp, #0x10
    sub r0, r0, #0x80000001
    str r12, [sp]
    bl func_0201ac60
    mov r5, r1
    mov r4, r0
    cmp r6, #0
    ldrne r0, [sp, #0x10]
    mov r1, r5
    addne r0, r7, r0
    strne r0, [r6]
    mov r0, r4
    bl fabs
    ldr r0, [sp, #0xc]
    cmp r0, #0
    ldrne r0, =data_020bf3e4
    movne r1, #0x22
    strne r1, [r0]
    mov r0, r4
    mov r1, r5
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void atof(void)
{
    ldr r12, =strtod
    mov r1, #0
    bx r12
}

asm void func_0201bc10(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r4, [sp, #0x38]
    movs r9, r0
    ldr r0, [sp, #0x34]
    str r4, [sp, #0x38]
    mov r4, #0
    str r0, [sp, #0x34]
    ldr r0, [sp, #0x38]
    str r1, [sp]
    str r4, [r0]
    mov r0, r4
    str r0, [sp, #4]
    ldr r0, [sp, #0x34]
    mov r1, r4
    str r1, [r0]
    ldr r0, [sp, #0x30]
    str r4, [sp, #8]
    mov r8, r2
    mov r7, r3
    mov r5, r4
    mov r10, r4
    str r0, [sp, #0x30]
    mov r4, #1
    bmi @L_0201bc90
    cmp r9, #1
    beq @L_0201bc90
    cmp r9, #0x24
    bgt @L_0201bc90
    ldr r0, [sp]
    cmp r0, #1
    bge @L_0201bc98
@L_0201bc90:
    mov r4, #0x40
    b @L_0201bcb4
@L_0201bc98:
    ldr r1, [sp, #8]
    mov r0, r7
    mov r3, r1
    mov r2, r1
    add r5, r3, #1
    blx r8
    mov r6, r0
@L_0201bcb4:
    cmp r9, #0
    beq @L_0201bccc
    mov r1, r9
    mvn r0, #0
    bl _u32_div_f
    str r0, [sp, #4]
@L_0201bccc:
    mvn r11, #0
    b @L_0201bf1c
@L_0201bcd4:
    cmp r4, #8
    bgt @L_0201bd0c
    cmp r4, #0
    addge pc, pc, r4, lsl #2
    b @L_0201bf1c
    b @L_0201bf1c
    b @L_0201bd18
    b @L_0201bdb4
    b @L_0201bf1c
    b @L_0201bddc
    b @L_0201bf1c
    b @L_0201bf1c
    b @L_0201bf1c
    b @L_0201be04
@L_0201bd0c:
    cmp r4, #0x10
    beq @L_0201be04
    b @L_0201bf1c
@L_0201bd18:
    cmp r6, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r1, r6, lsl #1
    ldrloh r0, [r0, r1]
    andlo r0, r0, #0x100
    cmp r0, #0
    beq @L_0201bd5c
    mov r1, #0
    mov r0, r7
    mov r2, r1
    blx r8
    mov r6, r0
    ldr r0, [sp, #8]
    add r0, r0, #1
    str r0, [sp, #8]
    b @L_0201bf1c
@L_0201bd5c:
    cmp r6, #0x2b
    bne @L_0201bd80
    mov r1, #0
    mov r0, r7
    mov r2, r1
    add r5, r5, #1
    blx r8
    mov r6, r0
    b @L_0201bdac
@L_0201bd80:
    cmp r6, #0x2d
    bne @L_0201bdac
    mov r1, #0
    mov r0, r7
    mov r2, r1
    add r5, r5, #1
    blx r8
    mov r6, r0
    ldr r0, [sp, #0x34]
    mov r1, #1
    str r1, [r0]
@L_0201bdac:
    mov r4, #2
    b @L_0201bf1c
@L_0201bdb4:
    cmp r9, #0
    beq @L_0201bdc4
    cmp r9, #0x10
    bne @L_0201bdd4
@L_0201bdc4:
    cmp r6, #0x30
    bne @L_0201bdd4
    mov r4, #4
    b @L_0201bf04
@L_0201bdd4:
    mov r4, #8
    b @L_0201bf1c
@L_0201bddc:
    cmp r6, #0x58
    cmpne r6, #0x78
    bne @L_0201bdf4
    mov r9, #0x10
    mov r4, #8
    b @L_0201bf04
@L_0201bdf4:
    cmp r9, #0
    moveq r9, #8
    mov r4, #0x10
    b @L_0201bf1c
@L_0201be04:
    ldr r0, [sp, #4]
    cmp r9, #0
    moveq r9, #0xa
    cmp r0, #0
    bne @L_0201be28
    mov r0, r11
    mov r1, r9
    bl _u32_div_f
    str r0, [sp, #4]
@L_0201be28:
    cmp r6, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r1, r6, lsl #1
    ldrloh r0, [r0, r1]
    andlo r0, r0, #8
    cmp r0, #0
    beq @L_0201be68
    sub r6, r6, #0x30
    cmp r6, r9
    blt @L_0201becc
    cmp r4, #0x10
    moveq r4, #0x20
    movne r4, #0x40
    add r6, r6, #0x30
    b @L_0201bf1c
@L_0201be68:
    cmp r6, #0x80
    movhs r0, #0
    ldrlo r0, =data_020a44f8
    movlo r1, r6, lsl #1
    ldrloh r0, [r0, r1]
    andlo r0, r0, #1
    cmp r0, #0
    beq @L_0201bea4
    cmp r6, #0x80
    movhs r0, r6
    ldrlo r0, =data_020a4478
    ldrlob r0, [r0, r6]
    sub r0, r0, #0x37
    cmp r0, r9
    blt @L_0201beb4
@L_0201bea4:
    cmp r4, #0x10
    moveq r4, #0x20
    movne r4, #0x40
    b @L_0201bf1c
@L_0201beb4:
    cmp r6, #0
    blt @L_0201bec8
    cmp r6, #0x80
    ldrlt r0, =data_020a4478
    ldrltb r6, [r0, r6]
@L_0201bec8:
    sub r6, r6, #0x37
@L_0201becc:
    ldr r0, [sp, #4]
    mov r4, #0x10
    cmp r10, r0
    ldrhi r0, [sp, #0x38]
    movhi r1, #1
    strhi r1, [r0]
    mul r0, r10, r9
    mov r10, r0
    sub r0, r11, r0
    cmp r6, r0
    ldrhi r0, [sp, #0x38]
    movhi r1, #1
    strhi r1, [r0]
    add r10, r10, r6
@L_0201bf04:
    mov r1, #0
    mov r0, r7
    mov r2, r1
    add r5, r5, #1
    blx r8
    mov r6, r0
@L_0201bf1c:
    ldr r0, [sp]
    cmp r5, r0
    bgt @L_0201bf38
    cmp r6, r11
    beq @L_0201bf38
    tst r4, #0x60
    beq @L_0201bcd4
@L_0201bf38:
    tst r4, #0x34
    ldreq r0, [sp, #0x30]
    moveq r10, #0
    streq r10, [r0]
    ldrne r0, [sp, #8]
    subne r1, r5, #1
    addne r1, r1, r0
    ldrne r0, [sp, #0x30]
    mov r2, #1
    strne r1, [r0]
    mov r0, r7
    mov r1, r6
    blx r8
    mov r0, r10
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void strtol(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    mov r5, r0
    mov lr, #0
    mov r0, r2
    mov r4, r1
    add r2, sp, #0x1c
    str r5, [sp, #0xc]
    str lr, [sp, #0x10]
    str r2, [sp]
    add r1, sp, #0x18
    str r1, [sp, #4]
    add r12, sp, #0x14
    ldr r2, =func_0201a704
    add r3, sp, #0xc
    sub r1, lr, #0x80000001
    str r12, [sp, #8]
    bl func_0201bc10
    cmp r4, #0
    ldrne r1, [sp, #0x1c]
    addne r1, r5, r1
    strne r1, [r4]
    ldr r1, [sp, #0x14]
    cmp r1, #0
    bne @L_0201c008
    ldr r1, [sp, #0x18]
    cmp r1, #0
    bne @L_0201bff8
    cmn r0, #0x80000001
    bhi @L_0201c008
@L_0201bff8:
    cmp r1, #0
    beq @L_0201c02c
    cmp r0, #0x80000000
    bls @L_0201c02c
@L_0201c008:
    ldr r0, [sp, #0x18]
    ldr r1, =data_020bf3e4
    mov r2, #0x22
    cmp r0, #0
    movne r0, #0x80000000
    str r2, [r1]
    add sp, sp, #0x20
    mvneq r0, #0x80000000
    ldmia sp!, {r3, r4, r5, pc}
@L_0201c02c:
    cmp r1, #0
    rsbne r0, r0, #0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, pc}
}

asm void atoi(void)
{
    ldr r12, =strtol
    mov r1, #0
    mov r2, #0xa
    bx r12
}

asm void func_0201c058(void)
{
    cmp r0, #0
    beq @L_0201c070
    ldr r3, [r0, #4]
    mov r2, r3, lsl #0x16
    movs r2, r2, lsr #0x1d
    bne @L_0201c078
@L_0201c070:
    mov r0, #0
    bx lr
@L_0201c078:
    mov r2, r3, lsl #0x14
    movs r2, r2, lsr #0x1e
    beq @L_0201c098
    cmp r2, #1
    beq @L_0201c0bc
    cmp r2, #2
    moveq r1, #1
    b @L_0201c0c0
@L_0201c098:
    cmp r1, #0
    bicgt r2, r3, #0xc00
    orrgt r2, r2, #0x800
    strgt r2, [r0, #4]
    bgt @L_0201c0c0
    biclt r2, r3, #0xc00
    orrlt r2, r2, #0x400
    strlt r2, [r0, #4]
    b @L_0201c0c0
@L_0201c0bc:
    mvn r1, #0
@L_0201c0c0:
    mov r0, r1
    bx lr
}
