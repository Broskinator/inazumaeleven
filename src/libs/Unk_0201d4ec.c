// (asm for now)

void func_0201d4ec(void);
void func_0201dc1c(void);
void func_0201eda4(void);
void func_0201f484(void);
void func_0201f79c(void);

extern char data_020bf408[];
void func_02023890(void);
extern char data_020bf3e4[];
void _dsub(void);
void func_02021adc(void);
void _dadd(void);
void _deq(void);
void _dflt(void);
void func_02022c90(void);
void fabs(void);
void _f2d(void);
extern char data_020ab0c8[];
extern char data_020a461c[];
extern char data_020a462c[];
extern char data_020a460c[];
void _dgr(void);
void _dleq(void);
void scalbn(void);
void _dfix(void);
extern char data_020a463c[];
extern char data_020a46bc[];
void func_02020610(void);
void _dgeq(void);
extern char data_020a47c4[];
extern char data_020a47d4[];

asm void func_0201d4ec(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r8, [sp, #0x54]
    mov r2, #0
    mov r6, r2
    cmp r8, #0x100000
    ldr r1, [sp, #0x50]
    bge @L_0201d5a4
    bic r0, r8, #0x80000000
    orrs r0, r0, r1
    bne @L_0201d540
    ldr r1, =data_020bf408
    mov r0, r2
    ldmia r1, {r2, r3}
    ldr r1, =0xc3500000
    bl func_02023890
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201d540:
    cmp r8, #0
    bge @L_0201d584
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    ldr r4, =data_020bf3e4
    mov r5, #0x21
    mov r2, r0
    mov r3, r1
    str r5, [r4]
    bl _dsub
    ldr r3, =data_020bf408
    ldmia r3, {r2, r3}
    bl func_02023890
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201d584:
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    ldr r3, =0x43500000
    sub r6, r2, #0x36
    bl func_02021adc
    mov r8, r1
    str r0, [sp, #0x50]
    str r8, [sp, #0x54]
@L_0201d5a4:
    ldr r3, =0x7ff00000
    cmp r8, r3
    blt @L_0201d5d4
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    mov r2, r0
    mov r3, r1
    bl _dadd
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201d5d4:
    ldr r4, =0xfffffc01
    ldr r0, =0x95f64
    add r1, r4, r8, asr #20
    and r8, r8, r4, lsr #12
    add r0, r8, r0
    and r5, r0, #0x100000
    sub r0, r3, #0x40000000
    add r6, r6, r1
    eor r0, r5, r0
    orr r1, r8, r0
    ldr r0, [sp, #0x50]
    mov r2, #0
    sub r3, r3, #0x40000000
    str r1, [sp, #0x54]
    add r6, r6, r5, asr #20
    bl _dsub
    add r2, r8, #2
    and r2, r2, r4, lsr #12
    mov r5, r0
    mov r9, r1
    cmp r2, #3
    bge @L_0201d7d0
    ldr r4, =data_020bf408
    ldmia r4, {r2, r3}
    bl _deq
    bne @L_0201d6bc
    cmp r6, #0
    addeq sp, sp, #0x2c
    ldmeqia r4, {r0, r1}
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
    mov r0, r6
    bl _dflt
    mov r5, r0
    mov r6, r1
    mov r0, #0
    ldr r1, =0x3fe62e42
    mov r2, r5
    mov r3, r6
    sub r0, r0, #0x1200000
    bl func_02021adc
    mov r4, r0
    mov r7, r1
    ldr r0, =0x35793c76
    ldr r1, =0x3dea39ef
    mov r2, r5
    mov r3, r6
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r7
    bl _dadd
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201d6bc:
    ldr r0, =0x55555555
    mov r2, r5
    mov r3, r9
    sub r1, r0, #0x15800000
    bl func_02021adc
    mov r2, r0
    ldr r7, =0x3fe00000
    mov r3, r1
    mov r0, #0
    mov r1, r7
    bl _dsub
    mov r4, r0
    mov r8, r1
    mov r0, r5
    mov r1, r9
    mov r2, r5
    mov r3, r9
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r8
    bl func_02021adc
    mov r4, r0
    mov r8, r1
    cmp r6, #0
    bne @L_0201d74c
    mov r0, r5
    mov r1, r9
    mov r2, r4
    mov r3, r8
    bl _dsub
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201d74c:
    mov r0, r6
    bl _dflt
    mov r6, r0
    mov r10, r1
    ldr r1, =0x3fe62e42
    mov r2, r6
    mov r3, r10
    sub r0, r7, #0x41000000
    bl func_02021adc
    mov r2, r6
    mov r6, r0
    mov r7, r1
    ldr r0, =0x35793c76
    ldr r1, =0x3dea39ef
    mov r3, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r8
    bl _dsub
    mov r2, r5
    mov r3, r9
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r7
    bl _dsub
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201d7d0:
    mov r0, #0
    mov r1, #0x40000000
    mov r2, r5
    mov r3, r9
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl func_02023890
    str r0, [sp, #0x18]
    str r1, [sp, #0x14]
    mov r0, r6
    bl _dflt
    str r0, [sp, #0x1c]
    mov r11, r1
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x14]
    mov r2, r0
    mov r3, r1
    bl func_02021adc
    ldr r3, =0xfff9eb86
    mov r2, r0
    add r7, r8, r3
    mov r3, r1
    str r0, [sp, #0x20]
    str r1, [sp, #0xc]
    bl func_02021adc
    mov r4, r0
    mov r10, r1
    ldr r0, =0xd078c69f
    ldr r1, =0x3fc39a09
    mov r2, r4
    mov r3, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x1d8e78af
    ldr r1, =0x3fcc71c5
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x9997fa04
    ldr r1, =0x3fd99999
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02021adc
    str r0, [sp, #0x24]
    str r1, [sp, #4]
    ldr r0, =0xdf3e5244
    ldr r1, =0x3fc2f112
    mov r2, r4
    mov r3, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x96cb03de
    ldr r1, =0x3fc74664
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x94229359
    ldr r1, =0x3fd24924
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x55555593
    ldr r1, =0x3fe55555
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0xc]
    bl func_02021adc
    ldr r4, =0x6b851
    ldr r2, [sp, #0x24]
    sub r4, r4, r8
    ldr r3, [sp, #4]
    orr r7, r7, r4
    bl _dadd
    cmp r7, #0
    mov r4, r0
    mov r7, r1
    ble @L_0201dab0
    mov r1, #0x40000000
    mov r0, #0
    mov r2, r5
    mov r3, r9
    sub r1, r1, #0x200000
    bl func_02021adc
    mov r2, r5
    mov r3, r9
    bl func_02021adc
    cmp r6, #0
    mov r6, r0
    mov r8, r1
    bne @L_0201d9f4
    mov r2, r4
    mov r3, r7
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x14]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r8
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl _dsub
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201d9f4:
    mov r0, #0
    ldr r1, =0x3fe62e42
    ldr r2, [sp, #0x1c]
    mov r3, r11
    sub r0, r0, #0x1200000
    bl func_02021adc
    mov r3, r7
    str r0, [sp, #0x28]
    mov r7, r1
    mov r2, r4
    mov r0, r6
    mov r1, r8
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x14]
    bl func_02021adc
    mov r4, r0
    mov r10, r1
    ldr r2, [sp, #0x1c]
    ldr r0, =0x35793c76
    ldr r1, =0x3dea39ef
    mov r3, r11
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r8
    bl _dsub
    mov r2, r5
    mov r3, r9
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x28]
    mov r1, r7
    bl _dsub
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201dab0:
    cmp r6, #0
    bne @L_0201db04
    mov r0, r5
    mov r1, r9
    mov r2, r4
    mov r3, r7
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x14]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl _dsub
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201db04:
    mov r0, #0
    ldr r1, =0x3fe62e42
    ldr r2, [sp, #0x1c]
    mov r3, r11
    sub r0, r0, #0x1200000
    bl func_02021adc
    mov r6, r0
    mov r8, r1
    mov r2, r4
    mov r3, r7
    mov r0, r5
    mov r1, r9
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x14]
    bl func_02021adc
    mov r4, r0
    mov r7, r1
    ldr r2, [sp, #0x1c]
    ldr r0, =0x35793c76
    ldr r1, =0x3dea39ef
    mov r3, r11
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r7
    bl _dsub
    mov r2, r5
    mov r3, r9
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r8
    bl _dsub
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_0201dc1c(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x78
    ldr r8, [sp, #0xac]
    ldr r6, [sp, #0xa4]
    ldr r0, [sp, #0xa8]
    bic r9, r8, #0x80000000
    orrs r1, r9, r0
    ldr r7, [sp, #0xa0]
    bic r4, r6, #0x80000000
    addeq sp, sp, #0x78
    moveq r0, #0
    ldreq r1, [pc, #0x564]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
    ldr r1, [pc, #0x558]
    cmp r4, r1
    bgt @L_0201dc8c
    bne @L_0201dc74
    cmp r7, #0
    bne @L_0201dc8c
@L_0201dc74:
    ldr r1, [pc, #0x540]
    cmp r9, r1
    bgt @L_0201dc8c
    bne @L_0201dcb0
    cmp r0, #0
    beq @L_0201dcb0
@L_0201dc8c:
    ldr r0, [sp, #0xa0]
    ldr r1, [sp, #0xa4]
    ldr r2, [sp, #0xa8]
    ldr r3, [sp, #0xac]
    bl _dadd
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201dcb0:
    cmp r6, #0
    mov r5, #0
    bge @L_0201dd10
    ldr r1, [pc, #0x4fc]
    cmp r9, r1
    movge r5, #2
    bge @L_0201dd10
    sub r1, r1, #0x3500000
    cmp r9, r1
    blt @L_0201dd10
    ldr r1, [pc, #0x4e4]
    add r1, r1, r9, asr #20
    cmp r1, #0x14
    ble @L_0201dcf8
    rsb r2, r1, #0x34
    mov r1, r0, lsr r2
    cmp r0, r1, lsl r2
    b @L_0201dd08
@L_0201dcf8:
    cmp r0, #0
    rsbeq r2, r1, #0x14
    moveq r1, r9, asr r2
    cmpeq r9, r1, lsl r2
@L_0201dd08:
    andeq r1, r1, #1
    rsbeq r5, r1, #2
@L_0201dd10:
    cmp r0, #0
    bne @L_0201de6c
    ldr r1, [pc, #0x49c]
    cmp r9, r1
    bne @L_0201ddc4
    add r0, r4, #0x100000
    add r0, r0, #0xc0000000
    orrs r0, r0, r7
    bne @L_0201dd58
    ldr r0, [sp, #0xa8]
    ldr r1, [sp, #0xac]
    mov r2, r0
    mov r3, r1
    bl _dsub
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201dd58:
    sub r0, r1, #0x40000000
    cmp r4, r0
    blt @L_0201dd88
    cmp r8, #0
    ldrge r0, [sp, #0xa8]
    ldrge r1, [sp, #0xac]
    movlt r0, #0
    add sp, sp, #0x78
    movlt r1, r0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201dd88:
    cmp r8, #0
    mov r0, #0
    addge sp, sp, #0x78
    movge r1, r0
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addge sp, sp, #0x10
    bxge lr
    ldr r2, [sp, #0xa8]
    ldr r3, [sp, #0xac]
    mov r1, r0
    bl _dsub
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201ddc4:
    sub r0, r1, #0x40000000
    cmp r9, r0
    bne @L_0201de10
    cmp r8, #0
    ldrge r0, [sp, #0xa0]
    ldrge r1, [sp, #0xa4]
    addge sp, sp, #0x78
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addge sp, sp, #0x10
    bxge lr
    ldr r2, [sp, #0xa0]
    ldr r3, [sp, #0xa4]
    sub r1, r1, #0x40000000
    mov r0, #0
    bl func_02023890
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201de10:
    cmp r8, #0x40000000
    bne @L_0201de3c
    ldr r0, [sp, #0xa0]
    ldr r1, [sp, #0xa4]
    mov r2, r0
    mov r3, r1
    bl func_02021adc
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201de3c:
    ldr r0, [pc, #0x384]
    cmp r8, r0
    bne @L_0201de6c
    cmp r6, #0
    blt @L_0201de6c
    ldr r0, [sp, #0xa0]
    ldr r1, [sp, #0xa4]
    bl func_02022c90
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201de6c:
    ldr r0, [sp, #0xa0]
    ldr r1, [sp, #0xa4]
    bl fabs
    str r0, [sp, #0x68]
    str r1, [sp, #0x6c]
    cmp r7, #0
    bne @L_0201df6c
    ldr r0, [pc, #0x32c]
    cmp r4, r0
    cmpne r4, #0
    beq @L_0201dea4
    sub r0, r0, #0x40000000
    cmp r4, r0
    bne @L_0201df6c
@L_0201dea4:
    ldr r2, [sp, #0x68]
    ldr r3, [sp, #0x6c]
    str r2, [sp, #0x70]
    str r3, [sp, #0x74]
    cmp r8, #0
    bge @L_0201ded0
    ldr r1, [pc, #0x2f4]
    mov r0, #0
    bl func_02023890
    str r0, [sp, #0x70]
    str r1, [sp, #0x74]
@L_0201ded0:
    cmp r6, #0
    bge @L_0201df54
    add r0, r4, #0x100000
    add r0, r0, #0xc0000000
    orrs r0, r0, r5
    bne @L_0201df30
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x74]
    mov r2, r0
    mov r3, r1
    bl _dsub
    mov r4, r0
    mov r5, r1
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x74]
    mov r2, r0
    mov r3, r1
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r5
    bl func_02023890
    b @L_0201df4c
@L_0201df30:
    cmp r5, #1
    bne @L_0201df54
    mov r0, #0
    ldr r2, [sp, #0x70]
    ldr r3, [sp, #0x74]
    mov r1, r0
    bl _dsub
@L_0201df4c:
    str r0, [sp, #0x70]
    str r1, [sp, #0x74]
@L_0201df54:
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x74]
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201df6c:
    mov r0, r6, asr #0x1f
    add r7, r0, #1
    orrs r0, r7, r5
    bne @L_0201dfa4
    ldr r0, [pc, #0x248]
    ldr r1, [pc, #0x248]
    ldr r0, [r0]
    mov r2, #0x21
    str r2, [r1]
    bl _f2d
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201dfa4:
    ldr r3, [pc, #0x228]
    cmp r9, r3
    ble @L_0201e29c
    add r0, r3, #0x2100000
    cmp r9, r0
    ble @L_0201e014
    ldr r1, [pc, #0x214]
    cmp r4, r1
    bgt @L_0201dfe8
    add r1, r1, #0x40000001
    mov r0, #0
    cmp r8, #0
    add sp, sp, #0x78
    movge r1, r0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201dfe8:
    add r0, r1, #1
    cmp r4, r0
    blt @L_0201e014
    add r1, r1, #0x40000001
    mov r0, #0
    cmp r8, #0
    add sp, sp, #0x78
    movle r1, r0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201e014:
    ldr r3, [pc, #0x1bc]
    cmp r4, r3
    bge @L_0201e040
    add r1, r3, #0x40000001
    mov r0, #0
    cmp r8, #0
    add sp, sp, #0x78
    movge r1, r0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201e040:
    add r0, r3, #1
    cmp r4, r0
    ble @L_0201e06c
    add r1, r3, #0x40000001
    mov r0, #0
    cmp r8, #0
    add sp, sp, #0x78
    movle r1, r0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201e06c:
    ldr r0, [sp, #0xa0]
    ldr r1, [sp, #0xa4]
    mov r2, #0
    add r3, r3, #1
    bl _dsub
    mov r2, r0
    mov r3, r1
    str r0, [sp, #0x48]
    str r1, [sp, #0x4c]
    bl func_02021adc
    mov r6, r0
    ldr r4, [pc, #0x13c]
    mov r8, r1
    ldr r2, [sp, #0x48]
    ldr r3, [sp, #0x4c]
    mov r0, #0
    mov r1, r4
    bl func_02021adc
    mov r2, r0
    ldr r0, [pc, #0x120]
    mov r3, r1
    sub r1, r0, #0x15800000
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x48]
    ldr r1, [sp, #0x4c]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    add r1, r4, #0x100000
    mov r0, #0
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r8
    bl func_02021adc
    mov r6, r0
    ldr r9, [pc, #0xd4]
    mov r10, r1
    ldr r2, [sp, #0x48]
    ldr r3, [sp, #0x4c]
    mov r0, #0x60000000
    mov r1, r9
    bl func_02021adc
    mov r8, r0
    mov r4, r1
    ldr r0, [pc, #0xb4]
    ldr r1, [pc, #0xb4]
    ldr r2, [sp, #0x48]
    ldr r3, [sp, #0x4c]
    bl func_02021adc
    mov r2, r6
    mov r6, r0
    mov r3, r10
    mov r10, r1
    ldr r0, [pc, #0x98]
    mov r1, r9
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r10
    bl _dsub
    mov r6, r0
    mov r9, r1
    mov r0, r8
    mov r1, r4
    mov r2, r6
    mov r3, r9
    bl _dadd
    mov r0, #0
    mov r2, r8
    mov r3, r4
    str r1, [sp, #0x54]
    str r0, [sp, #0x50]
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r9
    b @L_0201e7dc
    dcd 0x3ff00000
    dcd 0x7ff00000
    dcd 0x43400000
    dcd 0xfffffc01
    dcd 0x3fe00000
    dcd data_020ab0c8
    dcd data_020bf3e4
    dcd 0x41e00000
    dcd 0x3fefffff
    dcd 0x3fd00000
    dcd 0x55555555
    dcd 0x3ff71547
    dcd 0xf85ddf44
    dcd 0x3e54ae0b
    dcd 0x652b82fe
    dcd 0x0003988e
    dcd 0x000bb67a
    dcd data_020a461c
    dcd 0x4a454eef
    dcd 0x3fca7e28
    dcd 0x93c9db65
    dcd 0x3fcd864a
    dcd 0xa91d4101
    dcd 0x3fd17460
    dcd 0x518f264d
    dcd 0x3fd55555
    dcd 0xdb6fabff
    dcd 0x3fdb6db6
    dcd 0x33333303
    dcd 0x3fe33333
    dcd 0x3feec709
    dcd 0x145b01f5
    dcd 0xbe3e2fe0
    dcd 0xdc3a03fd
    dcd data_020a462c
    dcd data_020a460c
    dcd 0x40900000
    dcd 0x8800759c
    dcd 0x7e37e43c
    dcd 0x3c971547
    dcd 0x3f6f3400
    dcd 0xc2f8f359
    dcd 0x01a56e1f
    dcd 0x3fe62e43
    dcd 0xfefa39ef
    dcd 0x0ca86c39
    dcd 0xbe205c61
    dcd 0x72bea4d0
    dcd 0x3e663769
    dcd 0xc5d26bf1
    dcd 0xbebbbd41
    dcd 0xaf25de2c
    dcd 0x3f11566a
    dcd 0x16bebd93
    dcd 0xbf66c16c
    dcd 0x5555553e
    dcd 0x3fc55555
@L_0201e29c:
    cmp r4, #0x100000
    mov r6, #0
    bge @L_0201e2cc
    ldr r0, [sp, #0x68]
    ldr r1, [sp, #0x6c]
    mov r2, r6
    add r3, r3, #0x1600000
    bl func_02021adc
    mov r4, r1
    str r0, [sp, #0x68]
    str r4, [sp, #0x6c]
    sub r6, r6, #0x35
@L_0201e2cc:
    ldr r0, [pc, #-0x110]
    ldr r1, [pc, #-0xe4]
    and r2, r4, r0, lsr #12
    add r3, r0, r4, asr #20
    orr r9, r2, #0xff00000
    cmp r2, r1
    add r6, r6, r3
    orr r9, r9, #0x30000000
    movle r8, #0
    ble @L_0201e30c
    ldr r0, [pc, #-0x104]
    cmp r2, r0
    movlt r8, #1
    addge r6, r6, #1
    subge r9, r9, #0x100000
    movge r8, #0
@L_0201e30c:
    ldr r10, [pc, #-0x118]
    ldr r0, [sp, #0x68]
    add r1, r10, r8, lsl #3
    ldmia r1, {r2, r3}
    mov r1, r9
    str r9, [sp, #0x6c]
    bl _dsub
    add r2, r10, r8, lsl #3
    mov r11, r0
    ldr r3, [r2, #4]
    mov r4, r1
    ldr r0, [sp, #0x68]
    ldr r2, [r10, r8, lsl #3]
    mov r1, r9
    bl _dadd
    mov r3, r1
    mov r2, r0
    ldr r1, [pc, #-0x1a0]
    mov r0, #0
    bl func_02023890
    str r0, [sp, #0x20]
    str r1, [sp, #0x1c]
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x1c]
    mov r0, r11
    mov r1, r4
    bl func_02021adc
    mov r2, r9, asr #1
    orr r2, r2, #0x20000000
    add r3, r2, #0x80000
    mov r2, #0
    mov r9, r1
    add r1, r3, r8, lsl #18
    str r0, [sp, #0x24]
    mov r0, r2
    add r3, r10, r8, lsl #3
    str r2, [sp, #0x40]
    str r2, [sp, #0x38]
    str r9, [sp, #0x44]
    str r1, [sp, #0x3c]
    ldmia r3, {r2, r3}
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x68]
    ldr r1, [sp, #0x6c]
    bl _dsub
    str r0, [sp, #0x28]
    mov r10, r1
    ldr r0, [sp, #0x40]
    ldr r2, [sp, #0x38]
    ldr r3, [sp, #0x3c]
    mov r1, r9
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r11
    mov r1, r4
    bl _dsub
    mov r4, r0
    mov r3, r10
    mov r10, r1
    ldr r2, [sp, #0x28]
    ldr r0, [sp, #0x40]
    mov r1, r9
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x1c]
    bl func_02021adc
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x24]
    str r1, [sp, #0x14]
    mov r1, r9
    mov r2, r0
    mov r3, r9
    bl func_02021adc
    mov r4, r0
    mov r10, r1
    mov r2, r4
    mov r3, r10
    bl func_02021adc
    str r0, [sp, #0x30]
    mov r11, r1
    ldr r0, [pc, #-0x27c]
    ldr r1, [pc, #-0x27c]
    mov r2, r4
    mov r3, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x290]
    ldr r1, [pc, #-0x290]
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x2b0]
    ldr r1, [pc, #-0x2b0]
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x2d0]
    ldr r1, [pc, #-0x2d0]
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x2f0]
    ldr r1, [pc, #-0x2f0]
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x310]
    ldr r1, [pc, #-0x310]
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x30]
    mov r1, r11
    bl func_02021adc
    mov r4, r0
    mov r10, r1
    ldr r0, [sp, #0x40]
    ldr r2, [sp, #0x24]
    mov r1, r9
    mov r3, r9
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x2c]
    ldr r1, [sp, #0x14]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl _dadd
    mov r4, r0
    ldr r0, [sp, #0x40]
    mov r10, r1
    mov r1, r9
    mov r2, r0
    mov r3, r1
    bl func_02021adc
    str r1, [sp, #0xc]
    mov r11, r0
    ldr r1, [pc, #-0x408]
    ldr r3, [sp, #0xc]
    mov r0, #0
    add r1, r1, #0x180000
    mov r2, r11
    bl _dadd
    mov r2, r4
    mov r3, r10
    bl _dadd
    ldr r0, [pc, #-0x42c]
    str r1, [sp, #0x3c]
    add r3, r0, #0x180000
    mov r0, #0
    mov r2, r0
    str r0, [sp, #0x38]
    bl _dsub
    ldr r3, [sp, #0xc]
    mov r2, r11
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl _dsub
    str r0, [sp, #0x34]
    str r1, [sp, #4]
    ldr r0, [sp, #0x40]
    ldr r2, [sp, #0x38]
    ldr r3, [sp, #0x3c]
    mov r1, r9
    bl func_02021adc
    mov r4, r0
    mov r10, r1
    ldr r0, [sp, #0x2c]
    ldr r1, [sp, #0x14]
    ldr r2, [sp, #0x38]
    ldr r3, [sp, #0x3c]
    bl func_02021adc
    mov r3, r9
    mov r11, r0
    mov r9, r1
    ldr r2, [sp, #0x24]
    ldr r0, [sp, #0x34]
    ldr r1, [sp, #4]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r11
    mov r1, r9
    bl _dadd
    mov r9, r0
    mov r11, r1
    mov r0, r4
    mov r1, r10
    mov r2, r9
    mov r3, r11
    bl _dadd
    mov r0, #0
    mov r2, r4
    mov r3, r10
    str r1, [sp, #0x64]
    str r0, [sp, #0x60]
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r9
    mov r1, r11
    bl _dsub
    mov r9, r1
    mov r11, r0
    ldr r2, [sp, #0x60]
    ldr r1, [pc, #-0x4ac]
    ldr r3, [sp, #0x64]
    mov r0, #0xe0000000
    bl func_02021adc
    mov r4, r0
    mov r10, r1
    ldr r0, [pc, #-0x4c0]
    ldr r1, [pc, #-0x4c0]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x64]
    bl func_02021adc
    mov r2, r11
    mov r3, r9
    mov r11, r0
    mov r9, r1
    ldr r1, [pc, #-0x4e8]
    ldr r0, [pc, #-0x4e0]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r11
    mov r1, r9
    bl _dadd
    mov r2, r0
    ldr r0, [pc, #-0x4fc]
    mov r3, r1
    add r1, r0, r8, lsl #3
    ldmia r1, {r0, r1}
    bl _dadd
    mov r9, r0
    mov r0, r6
    mov r6, r1
    bl _dflt
    str r0, [sp, #0x48]
    str r1, [sp, #0x4c]
    mov r0, r4
    mov r1, r10
    mov r2, r9
    mov r3, r6
    bl _dadd
    ldr r11, [pc, #-0x538]
    add r2, r11, r8, lsl #3
    ldr r3, [r2, #4]
    ldr r2, [r11, r8, lsl #3]
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x48]
    ldr r1, [sp, #0x4c]
    bl _dadd
    mov r0, #0
    ldr r2, [sp, #0x48]
    ldr r3, [sp, #0x4c]
    str r1, [sp, #0x54]
    str r0, [sp, #0x50]
    bl _dsub
    add r3, r11, r8, lsl #3
    ldmia r3, {r2, r3}
    bl _dsub
    mov r2, r4
    mov r3, r10
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r9
    mov r1, r6
@L_0201e7dc:
    bl _dsub
    mov r4, r0
    mov r6, r1
    sub r0, r5, #1
    orrs r0, r7, r0
    ldr r1, [sp, #0xac]
    ldr r7, [pc, #-0x644]
    mov r2, #0
    ldr r0, [sp, #0xa8]
    mov r3, r1
    mov r8, #0
    subeq r7, r7, #0x80000000
    str r1, [sp, #0x5c]
    str r2, [sp, #0x58]
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    bl func_02021adc
    mov r5, r0
    mov r9, r1
    ldr r0, [sp, #0xa8]
    ldr r1, [sp, #0xac]
    mov r2, r4
    mov r3, r6
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl _dadd
    mov r5, r0
    mov r9, r1
    ldr r0, [sp, #0x58]
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x50]
    ldr r3, [sp, #0x54]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    str r2, [sp, #0x60]
    str r3, [sp, #0x64]
    bl _dadd
    mov r4, r1
    ldr r2, [pc, #-0x658]
    str r0, [sp, #0x70]
    str r4, [sp, #0x74]
    cmp r4, r2
    blt @L_0201e984
    add r1, r4, #0xf700000
    add r1, r1, #0xb0000000
    orrs r0, r1, r0
    beq @L_0201e8fc
    ldr r5, [pc, #-0x678]
    ldr r4, [pc, #-0x678]
    mov r0, r5
    mov r1, r4
    mov r2, r8
    mov r3, r7
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r4
    bl func_02021adc
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201e8fc:
    ldr r0, [pc, #-0x714]
    ldr r1, [pc, #-0x6b4]
    mov r2, r5
    mov r3, r9
    bl _dadd
    mov r6, r0
    mov r10, r1
    ldr r0, [sp, #0x70]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x64]
    mov r1, r4
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r10
    bl _dgr
    bls @L_0201ea48
    ldr r5, [pc, #-0x700]
    ldr r4, [pc, #-0x700]
    mov r0, r5
    mov r1, r4
    mov r2, r8
    mov r3, r7
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r4
    bl func_02021adc
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201e984:
    bic r3, r4, #0x80000000
    add r2, r2, #0xcc00
    cmp r3, r2
    blt @L_0201ea48
    ldr r2, [pc, #-0x744]
    add r2, r4, r2
    orrs r2, r2, r0
    beq @L_0201e9e4
    ldr r5, [pc, #-0x750]
    ldr r4, [pc, #-0x750]
    mov r0, r5
    mov r1, r4
    mov r2, r8
    mov r3, r7
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r4
    bl func_02021adc
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201e9e4:
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x64]
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl _dleq
    bhi @L_0201ea48
    ldr r5, [pc, #-0x7b4]
    ldr r4, [pc, #-0x7b4]
    mov r0, r5
    mov r1, r4
    mov r2, r8
    mov r3, r7
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r4
    bl func_02021adc
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201ea48:
    ldr r0, [pc, #-0x88c]
    bic r3, r4, #0x80000000
    ldr r1, [pc, #-0x890]
    add r2, r0, r3, asr #20
    cmp r3, r1
    mov r6, #0
    ble @L_0201eac4
    mov r1, #0x100000
    add r2, r2, #1
    add r2, r4, r1, asr r2
    bic r3, r2, #0x80000000
    add r0, r0, r3, asr #20
    sub r3, r1, #1
    mvn r3, r3, asr r0
    sub r1, r1, #1
    and r1, r2, r1
    and r2, r2, r3
    str r2, [sp, #0x4c]
    str r6, [sp, #0x48]
    orr r1, r1, #0x100000
    rsb r0, r0, #0x14
    mov r6, r1, asr r0
    cmp r4, #0
    ldr r0, [sp, #0x60]
    ldr r1, [sp, #0x64]
    ldr r2, [sp, #0x48]
    ldr r3, [sp, #0x4c]
    rsblt r6, r6, #0
    bl _dsub
    str r0, [sp, #0x60]
    str r1, [sp, #0x64]
@L_0201eac4:
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x64]
    mov r0, r5
    mov r1, r9
    bl _dadd
    mov r0, #0
    mov r3, r1
    ldr r11, [pc, #-0x884]
    mov r2, r0
    mov r1, r11
    str r3, [sp, #0x4c]
    str r2, [sp, #0x48]
    bl func_02021adc
    mov r4, r0
    mov r10, r1
    ldr r0, [sp, #0x48]
    ldr r1, [sp, #0x4c]
    ldr r2, [sp, #0x60]
    ldr r3, [sp, #0x64]
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x8d0]
    sub r1, r11, #1
    bl func_02021adc
    mov r5, r0
    mov r9, r1
    ldr r0, [pc, #-0x8e0]
    ldr r1, [pc, #-0x8e0]
    ldr r2, [sp, #0x48]
    ldr r3, [sp, #0x4c]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl _dadd
    mov r5, r0
    mov r9, r1
    mov r0, r4
    mov r1, r10
    mov r2, r5
    mov r3, r9
    bl _dadd
    mov r2, r4
    mov r3, r10
    str r0, [sp, #0x70]
    str r1, [sp, #0x74]
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl _dsub
    mov r5, r0
    mov r9, r1
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x74]
    mov r2, r0
    mov r3, r1
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x968]
    ldr r1, [pc, #-0x968]
    str r2, [sp, #0x48]
    str r3, [sp, #0x4c]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x97c]
    ldr r1, [pc, #-0x97c]
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x48]
    ldr r1, [sp, #0x4c]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x99c]
    ldr r1, [pc, #-0x99c]
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x48]
    ldr r1, [sp, #0x4c]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x9bc]
    ldr r1, [pc, #-0x9bc]
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x48]
    ldr r1, [sp, #0x4c]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [pc, #-0x9dc]
    ldr r1, [pc, #-0x9dc]
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x48]
    ldr r1, [sp, #0x4c]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x74]
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x74]
    str r2, [sp, #0x50]
    str r3, [sp, #0x54]
    bl func_02021adc
    mov r4, r0
    mov r10, r1
    mov r11, #0x40000000
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    mov r2, #0
    mov r3, r11
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl func_02023890
    mov r4, r0
    mov r10, r1
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x74]
    mov r2, r5
    mov r3, r9
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r10
    bl _dsub
    ldr r2, [sp, #0x70]
    ldr r3, [sp, #0x74]
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, #0
    sub r1, r11, #0x100000
    bl _dsub
    add r3, r1, r6, lsl #20
    mov r2, r3, asr #0x14
    str r0, [sp, #0x70]
    cmp r2, #0
    str r1, [sp, #0x74]
    addgt r0, sp, #0x70
    strgt r3, [r0, #4]
    bgt @L_0201ed80
    mov r2, r6
    bl scalbn
    str r0, [sp, #0x70]
    str r1, [sp, #0x74]
@L_0201ed80:
    ldr r2, [sp, #0x70]
    ldr r3, [sp, #0x74]
    mov r0, r8
    mov r1, r7
    bl func_02021adc
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_0201eda4(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x70
    ldr r7, [sp, #0x9c]
    ldr r4, =0x3fe921fb
    bic r6, r7, #0x80000000
    mov r10, r2
    cmp r6, r4
    ldr r8, =0x3dd0b461
    mov r5, #0
    bgt @L_0201edf8
    ldr r2, [sp, #0x98]
    ldr r3, [sp, #0x9c]
    mov r0, r5
    stmia r10, {r2, r3}
    add sp, sp, #0x70
    str r0, [r10, #8]
    str r0, [r10, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201edf8:
    ldr r0, =0x4002d97c
    cmp r6, r0
    bge @L_0201efbc
    cmp r7, #0
    ble @L_0201eed4
    ldr r0, [sp, #0x98]
    ldr r1, [sp, #0x9c]
    ldr r2, =0x54400000
    add r3, r4, #0x100000
    bl _dsub
    add r2, r4, #0x100000
    str r0, [sp, #0x50]
    str r1, [sp, #0x54]
    cmp r6, r2
    beq @L_0201ee6c
    ldr r4, =0x1a626331
    mov r3, r8
    mov r2, r4
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    stmia r10, {r2, r3}
    bl _dsub
    mov r2, r4
    mov r3, r8
    bl _dsub
    b @L_0201eeb8
@L_0201ee6c:
    ldr r2, =0x1a600000
    ldr r3, =0x3dd0b461
    bl _dsub
    ldr r5, =0x2e037073
    ldr r4, =0x3ba3198a
    mov r2, r5
    mov r3, r4
    str r0, [sp, #0x50]
    str r1, [sp, #0x54]
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    stmia r10, {r2, r3}
    bl _dsub
    mov r2, r5
    mov r3, r4
    bl _dsub
@L_0201eeb8:
    add sp, sp, #0x70
    str r0, [r10, #8]
    str r1, [r10, #0xc]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201eed4:
    ldr r2, [sp, #0x98]
    ldr r3, [sp, #0x9c]
    ldr r0, =0x54400000
    add r1, r4, #0x100000
    bl _dadd
    mov r2, r0
    mov r3, r1
    add r4, r4, #0x100000
    str r2, [sp, #0x50]
    str r3, [sp, #0x54]
    cmp r6, r4
    beq @L_0201ef44
    ldr r4, =0x1a626331
    mov r1, r8
    mov r0, r4
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    stmia r10, {r2, r3}
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r8
    bl _dadd
    b @L_0201efa0
@L_0201ef44:
    ldr r2, =0x1a600000
    ldr r3, =0x3dd0b461
    bl _dadd
    mov r2, r0
    ldr r5, =0x2e037073
    mov r3, r1
    ldr r4, =0x3ba3198a
    mov r0, r5
    mov r1, r4
    str r2, [sp, #0x50]
    str r3, [sp, #0x54]
    bl _dadd
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    stmia r10, {r2, r3}
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r4
    bl _dadd
@L_0201efa0:
    add sp, sp, #0x70
    str r0, [r10, #8]
    str r1, [r10, #0xc]
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201efbc:
    add r0, r4, #0x1500000
    cmp r6, r0
    bgt @L_0201f2b0
    ldr r0, [sp, #0x98]
    ldr r1, [sp, #0x9c]
    bl fabs
    str r1, [sp, #0x24]
    mov r9, r0
    ldr r0, =0x6dc9c883
    ldr r1, =0x3fe45f30
    ldr r3, [sp, #0x24]
    mov r2, r9
    bl func_02021adc
    mov r3, r1
    mov r2, r0
    ldr r1, =0x3fe00000
    mov r0, r5
    bl _dadd
    bl _dfix
    mov r5, r0
    bl _dflt
    mov r11, r0
    mov r8, r1
    ldr r0, =0x54400000
    add r1, r4, #0x100000
    mov r2, r11
    mov r3, r8
    bl func_02021adc
    mov r3, r1
    mov r2, r0
    ldr r1, [sp, #0x24]
    mov r0, r9
    bl _dsub
    mov r4, r0
    mov r9, r1
    ldr r0, =0x1a626331
    ldr r1, =0x3dd0b461
    mov r2, r11
    mov r3, r8
    bl func_02021adc
    str r0, [sp, #0x28]
    str r1, [sp, #0xc]
    cmp r5, #0x20
    bge @L_0201f084
    ldr r0, =data_020a463c
    sub r1, r5, #1
    ldr r0, [r0, r1, lsl #2]
    cmp r6, r0
    beq @L_0201f084
    b @L_0201f214
@L_0201f084:
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0xc]
    mov r0, r4
    mov r1, r9
    bl _dsub
    str r0, [r10]
    ldr r0, =0x7ff
    str r1, [r10, #4]
    and r0, r0, r1, asr #20
    rsb r0, r0, r6, asr #20
    cmp r0, #0x10
    ble @L_0201f22c
    ldr r0, =0x1a600000
    ldr r1, =0x3dd0b461
    mov r2, r11
    mov r3, r8
    str r4, [sp, #0x30]
    str r9, [sp, #0x34]
    bl func_02021adc
    str r0, [sp, #0x40]
    str r1, [sp, #0x1c]
    ldr r2, [sp, #0x40]
    ldr r3, [sp, #0x1c]
    mov r0, r4
    mov r1, r9
    bl _dsub
    mov r9, r1
    str r0, [sp, #0x44]
    mov r4, r0
    ldr r0, =0x2e037073
    ldr r1, =0x3ba3198a
    mov r2, r11
    mov r3, r8
    bl func_02021adc
    str r0, [sp, #0x48]
    str r1, [sp, #0x14]
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    ldr r2, [sp, #0x44]
    mov r3, r9
    bl _dsub
    ldr r2, [sp, #0x40]
    ldr r3, [sp, #0x1c]
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp, #0x48]
    ldr r1, [sp, #0x14]
    bl _dsub
    str r0, [sp, #0x28]
    str r1, [sp, #0xc]
    ldr r0, [sp, #0x44]
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0xc]
    mov r1, r9
    bl _dsub
    str r0, [r10]
    ldr r0, =0x7ff
    str r1, [r10, #4]
    and r0, r0, r1, asr #20
    rsb r0, r0, r6, asr #20
    cmp r0, #0x31
    ble @L_0201f22c
    ldr r1, =0x3ba3198a
    mov r2, r11
    mov r3, r8
    mov r0, #0x2e000000
    str r9, [sp, #0x3c]
    bl func_02021adc
    str r0, [sp, #0x4c]
    mov r6, r1
    ldr r0, [sp, #0x44]
    ldr r2, [sp, #0x4c]
    mov r1, r9
    mov r3, r6
    bl _dsub
    mov r4, r0
    mov r9, r1
    ldr r0, =0x252049c1
    ldr r1, =0x397b839a
    mov r2, r11
    mov r3, r8
    bl func_02021adc
    mov r11, r0
    mov r8, r1
    ldr r0, [sp, #0x44]
    ldr r1, [sp, #0x3c]
    mov r2, r4
    mov r3, r9
    bl _dsub
    ldr r2, [sp, #0x4c]
    mov r3, r6
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r11
    mov r1, r8
    bl _dsub
    str r0, [sp, #0x28]
    str r1, [sp, #0xc]
@L_0201f214:
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0xc]
    mov r0, r4
    mov r1, r9
    bl _dsub
    stmia r10, {r0, r1}
@L_0201f22c:
    mov r0, r4
    mov r1, r9
    ldmia r10, {r2, r3}
    mov r4, #0
    bl _dsub
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0xc]
    bl _dsub
    cmp r7, #0
    str r0, [r10, #8]
    addge sp, sp, #0x70
    str r1, [r10, #0xc]
    movge r0, r5
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addge sp, sp, #0x10
    bxge lr
    ldmia r10, {r2, r3}
    mov r0, r4
    mov r1, r4
    bl _dsub
    stmia r10, {r0, r1}
    ldr r2, [r10, #8]
    ldr r3, [r10, #0xc]
    mov r0, r4
    mov r1, r4
    bl _dsub
    str r0, [r10, #8]
    add sp, sp, #0x70
    str r1, [r10, #0xc]
    rsb r0, r5, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201f2b0:
    ldr r1, =0x7ff00000
    cmp r6, r1
    blt @L_0201f2f0
    ldr r0, [sp, #0x98]
    ldr r1, [sp, #0x9c]
    mov r2, r0
    mov r3, r1
    bl _dsub
    str r0, [r10, #8]
    str r1, [r10, #0xc]
    stmia r10, {r0, r1}
    add sp, sp, #0x70
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201f2f0:
    ldr r0, =0xfffffbea
    ldr r2, [sp, #0x98]
    add r8, r0, r6, asr #20
    sub r0, r6, r8, lsl #20
    str r2, [sp, #0x50]
    str r0, [sp, #0x54]
    mov r6, r5
    sub r9, r1, #0x3e800000
    add r4, sp, #0x58
@L_0201f314:
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    bl _dfix
    bl _dflt
    str r0, [r4, r6, lsl #3]
    add r0, r4, r6, lsl #3
    str r1, [r0, #4]
    mov r3, r1
    ldr r0, [sp, #0x50]
    ldr r1, [sp, #0x54]
    ldr r2, [r4, r6, lsl #3]
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r9
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    add r6, r6, #1
    str r2, [sp, #0x50]
    str r3, [sp, #0x54]
    cmp r6, #2
    blt @L_0201f314
    mov r0, r5
    mov r1, r5
    str r2, [sp, #0x68]
    str r3, [sp, #0x6c]
    mov r6, #0
    mov r4, #3
    bl _deq
    bne @L_0201f3b8
    add r5, sp, #0x58
@L_0201f398:
    sub r4, r4, #1
    add r0, r5, r4, lsl #3
    ldr r2, [r0, #-8]
    ldr r3, [r0, #-4]
    mov r0, r6
    mov r1, r6
    bl _deq
    beq @L_0201f398
@L_0201f3b8:
    mov r0, #2
    str r0, [sp]
    ldr r5, =data_020a46bc
    mov r3, r4
    add r0, sp, #0x58
    mov r1, r10
    mov r2, r8
    str r5, [sp, #4]
    mov r4, #0
    bl func_0201f79c
    cmp r7, #0
    mov r5, r0
    addge sp, sp, #0x70
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addge sp, sp, #0x10
    bxge lr
    ldmia r10, {r2, r3}
    mov r0, r4
    mov r1, r4
    bl _dsub
    stmia r10, {r0, r1}
    ldr r2, [r10, #8]
    ldr r3, [r10, #0xc]
    mov r0, r4
    mov r1, r4
    bl _dsub
    str r0, [r10, #8]
    str r1, [r10, #0xc]
    rsb r0, r5, #0
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_0201f484(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r0, [sp, #0x34]
    mov r10, r2
    bic r8, r0, #0x80000000
    mov r9, r3
    cmp r8, #0x3e400000
    mov r11, #0
    bge @L_0201f4d4
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    bl _dfix
    cmp r0, #0
    addeq sp, sp, #0xc
    moveq r0, r11
    ldreq r1, =0x3ff00000
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
@L_0201f4d4:
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    mov r2, r0
    mov r3, r1
    bl func_02021adc
    mov r4, r0
    mov r6, r1
    ldr r0, =0xbe8838d4
    ldr r1, =0xbda8fae9
    mov r2, r4
    mov r3, r6
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0xbdb4b1c4
    ldr r1, =0x3e21ee9e
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r6
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x809c52ad
    ldr r1, =0xbe927e4f
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r6
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x19cb1590
    ldr r1, =0x3efa01a0
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r6
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x16c15177
    ldr r1, =0xbf56c16c
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r6
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    ldr r0, =0x5555554c
    ldr r1, =0x3fa55555
    bl _dadd
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r6
    bl func_02021adc
    mov r5, r0
    ldr r0, =0x3fd33333
    mov r7, r1
    cmp r8, r0
    ldr r1, =0x3fe00000
    bge @L_0201f67c
    mov r0, #0
    mov r2, r4
    mov r3, r6
    bl func_02021adc
    mov r11, r0
    mov r8, r1
    mov r0, r4
    mov r1, r6
    mov r2, r5
    mov r3, r7
    bl func_02021adc
    mov r4, r0
    mov r5, r1
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    mov r2, r10
    mov r3, r9
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r5
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r11
    mov r1, r8
    bl _dsub
    mov r3, r1
    ldr r1, =0x3fe00000
    mov r2, r0
    mov r0, #0
    add r1, r1, #0x100000
    bl _dsub
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0201f67c:
    ldr r0, =0x3fe90000
    mov r2, r4
    cmp r8, r0
    subgt r12, r0, #0x170000
    strgt r11, [sp, #4]
    strgt r12, [sp, #8]
    suble r0, r8, #0x200000
    strle r0, [sp, #8]
    strle r11, [sp, #4]
    mov r0, r11
    mov r3, r6
    bl func_02021adc
    ldr r2, [sp, #4]
    ldr r3, [sp, #8]
    bl _dsub
    mov r8, r1
    ldr r1, =0x3fe00000
    str r0, [sp]
    ldr r2, [sp, #4]
    ldr r3, [sp, #8]
    mov r0, r11
    add r1, r1, #0x100000
    bl _dsub
    mov r2, r5
    mov r3, r7
    mov r5, r0
    mov r7, r1
    mov r0, r4
    mov r1, r6
    bl func_02021adc
    mov r4, r0
    mov r6, r1
    ldr r0, [sp, #0x30]
    ldr r1, [sp, #0x34]
    mov r2, r10
    mov r3, r9
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r6
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldr r0, [sp]
    mov r1, r8
    bl _dsub
    mov r2, r0
    mov r3, r1
    mov r0, r5
    mov r1, r7
    bl _dsub
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_0201f79c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x264
    ldr r6, [pc, #0xb80]
    sub r7, r2, #3
    smull r5, r4, r6, r7
    str r4, [sp, #0xc]
    mov r9, r0
    mov r4, r7, lsr #0x1f
    ldr r0, [sp, #0xc]
    ldr r7, [sp, #0x288]
    adds r0, r4, r0, asr #2
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x28c]
    ldr r6, [pc, #0xb58]
    str r0, [sp, #0x28c]
    ldr r0, [r6, r7, lsl #2]
    str r1, [sp]
    str r0, [sp, #0x24]
    movmi r0, #0
    strmi r0, [sp, #0xc]
    ldr r0, [sp, #0xc]
    sub r5, r3, #1
    add r1, r0, #1
    mov r0, #0x18
    mul r0, r1, r0
    sub r0, r2, r0
    str r0, [sp, #0x18]
    ldr r0, [sp, #0xc]
    mov r6, #0
    sub r7, r0, r5
    ldr r0, [sp, #0x24]
    adds r8, r5, r0
    bmi @L_0201f868
    cmp r8, #0
    blt @L_0201f868
    mov r10, r6
    add r4, sp, #0x174
@L_0201f830:
    cmp r7, #0
    movlt r0, r10
    movlt r1, r10
    blt @L_0201f84c
    ldr r0, [sp, #0x28c]
    ldr r0, [r0, r7, lsl #2]
    bl _dflt
@L_0201f84c:
    str r0, [r4, r6, lsl #3]
    add r0, r4, r6, lsl #3
    str r1, [r0, #4]
    add r6, r6, #1
    cmp r6, r8
    add r7, r7, #1
    ble @L_0201f830
@L_0201f868:
    ldr r0, [sp, #0x24]
    mov r10, #0
    cmp r0, #0
    blt @L_0201f8f4
    add r11, sp, #0x174
@L_0201f87c:
    mov r7, #0
    mov r4, r7
    mov r8, r7
    cmp r5, #0
    blt @L_0201f8d8
    add r6, r5, r10
@L_0201f894:
    add r0, r9, r7, lsl #3
    ldr r1, [r0, #4]
    sub r2, r6, r7
    add r3, r11, r2, lsl #3
    ldr r0, [r9, r7, lsl #3]
    ldmia r3, {r2, r3}
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r8
    bl _dadd
    add r7, r7, #1
    mov r4, r0
    mov r8, r1
    cmp r7, r5
    ble @L_0201f894
@L_0201f8d8:
    add r0, sp, #0x34
    add r0, r0, r10, lsl #3
    stmia r0, {r4, r8}
    ldr r0, [sp, #0x24]
    add r10, r10, #1
    cmp r10, r0
    ble @L_0201f87c
@L_0201f8f4:
    ldr r0, [sp, #0x24]
    str r0, [sp, #4]
    ldr r0, [sp, #0x18]
    rsb r0, r0, #0x18
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    rsb r0, r0, #0x17
    str r0, [sp, #0x10]
@L_0201f914:
    ldr r6, [sp, #4]
    add r1, sp, #0x34
    mov r0, r6
    add r2, r1, r0, lsl #3
    cmp r0, #0
    ldmia r2, {r4, r8}
    mov r7, #0
    cmpgt r0, #0
    ble @L_0201f9d0
    ldr r0, [pc, #0x9f4]
    sub r0, r0, #0xfd000000
    str r0, [sp, #0x28]
@L_0201f944:
    ldr r1, [pc, #0x9e8]
    mov r0, #0
    mov r2, r4
    mov r3, r8
    bl func_02021adc
    bl _dfix
    bl _dflt
    mov r10, r0
    mov r11, r1
    ldr r1, [sp, #0x28]
    mov r0, #0
    mov r2, r10
    mov r3, r11
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r4
    mov r1, r8
    bl _dsub
    bl _dfix
    add r2, sp, #0x214
    str r0, [r2, r7, lsl #2]
    add r2, sp, #0x34
    add r3, r2, r6, lsl #3
    ldr r2, [r3, #-8]
    ldr r3, [r3, #-4]
    mov r1, r11
    mov r0, r10
    bl _dadd
    sub r6, r6, #1
    mov r4, r0
    mov r8, r1
    add r7, r7, #1
    cmp r6, #0
    bgt @L_0201f944
@L_0201f9d0:
    ldr r2, [sp, #0x18]
    mov r0, r4
    mov r1, r8
    bl scalbn
    mov r6, r0
    mov r7, r1
    mov r10, #0
    mov r4, #0x3fc00000
    mov r0, r10
    mov r1, r4
    mov r2, r6
    mov r3, r7
    bl func_02021adc
    bl func_02020610
    mov r2, r0
    mov r3, r1
    mov r0, r10
    add r1, r4, #0x600000
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r7
    bl _dsub
    mov r6, r0
    mov r7, r1
    bl _dfix
    str r0, [sp, #0x20]
    bl _dflt
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r7
    bl _dsub
    ldr r2, [sp, #0x18]
    mov r6, r0
    cmp r2, #0
    mov r7, r1
    ble @L_0201faa4
    ldr r0, [sp, #4]
    add r1, sp, #0x214
    add r1, r1, r0, lsl #2
    ldr r3, [r1, #-4]
    ldr r0, [sp, #0x14]
    mov r2, r3, asr r0
    sub r2, r3, r2, lsl r0
    str r2, [r1, #-4]
    ldr r1, [sp, #0x20]
    add r0, r1, r3, asr r0
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x10]
    mov r10, r2, asr r0
    b @L_0201fad4
@L_0201faa4:
    cmp r2, #0
    bne @L_0201fac4
    ldr r0, [sp, #4]
    add r1, sp, #0x214
    add r0, r1, r0, lsl #2
    ldr r0, [r0, #-4]
    mov r10, r0, asr #0x17
    b @L_0201fad4
@L_0201fac4:
    add r3, r4, #0x200000
    mov r2, r10
    bl _dgeq
    movhs r10, #2
@L_0201fad4:
    cmp r10, #0
    ble @L_0201fbe8
    ldr r0, [sp, #4]
    mov r4, #0
    cmp r0, #0
    ldr r0, [sp, #0x20]
    mov r2, r4
    add r0, r0, #1
    str r0, [sp, #0x20]
    ble @L_0201fb40
    mov r0, #1
    add r1, sp, #0x214
    mvn r8, #0xff000000
@L_0201fb08:
    cmp r4, #0
    ldr r3, [r1, r2, lsl #2]
    bne @L_0201fb28
    cmp r3, #0
    rsbne r3, r3, #0x1000000
    strne r3, [r1, r2, lsl #2]
    movne r4, r0
    b @L_0201fb30
@L_0201fb28:
    sub r3, r8, r3
    str r3, [r1, r2, lsl #2]
@L_0201fb30:
    ldr r3, [sp, #4]
    add r2, r2, #1
    cmp r2, r3
    blt @L_0201fb08
@L_0201fb40:
    ldr r0, [sp, #0x18]
    cmp r0, #0
    ble @L_0201fb88
    cmp r0, #1
    beq @L_0201fb60
    cmp r0, #2
    beq @L_0201fb6c
    b @L_0201fb88
@L_0201fb60:
    add r2, sp, #0x214
    ldr r1, [pc, #0x7cc]
    b @L_0201fb74
@L_0201fb6c:
    ldr r1, [pc, #0x7c8]
    add r2, sp, #0x214
@L_0201fb74:
    ldr r0, [sp, #4]
    add r2, r2, r0, lsl #2
    ldr r0, [r2, #-4]
    and r0, r0, r1
    str r0, [r2, #-4]
@L_0201fb88:
    cmp r10, #2
    bne @L_0201fbe8
    mov r8, #0
    ldr r11, [pc, #0x7a4]
    mov r0, r8
    mov r1, r11
    mov r2, r6
    mov r3, r7
    bl _dsub
    cmp r4, #0
    mov r6, r0
    mov r7, r1
    beq @L_0201fbe8
    ldr r2, [sp, #0x18]
    mov r0, r8
    mov r1, r11
    bl scalbn
    mov r2, r0
    mov r3, r1
    mov r0, r6
    mov r1, r7
    bl _dsub
    mov r6, r0
    mov r7, r1
@L_0201fbe8:
    mov r4, #0
    mov r0, r4
    mov r1, r4
    mov r2, r6
    mov r3, r7
    bl _deq
    bne @L_0201fd64
    ldr r0, [sp, #4]
    sub r2, r0, #1
    ldr r0, [sp, #0x24]
    cmp r2, r0
    blt @L_0201fc34
    add r1, sp, #0x214
@L_0201fc1c:
    ldr r0, [r1, r2, lsl #2]
    sub r2, r2, #1
    orr r4, r4, r0
    ldr r0, [sp, #0x24]
    cmp r2, r0
    bge @L_0201fc1c
@L_0201fc34:
    cmp r4, #0
    bne @L_0201fd64
    ldr r0, [sp, #0x24]
    add r2, sp, #0x214
    sub r0, r0, #1
    ldr r1, [r2, r0, lsl #2]
    mov r0, #1
    str r0, [sp, #0x1c]
    cmp r1, #0
    bne @L_0201fc7c
@L_0201fc5c:
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x24]
    add r0, r0, #1
    str r0, [sp, #0x1c]
    sub r0, r1, r0
    ldr r0, [r2, r0, lsl #2]
    cmp r0, #0
    beq @L_0201fc5c
@L_0201fc7c:
    ldr r0, [sp, #4]
    add r10, r0, #1
    mov r1, r0
    ldr r0, [sp, #0x1c]
    add r0, r1, r0
    str r0, [sp, #8]
    cmp r10, r0
    bgt @L_0201fd50
    ldr r1, [sp, #0x28c]
    ldr r0, [sp, #0xc]
    add r11, sp, #0x174
    add r0, r1, r0, lsl #2
    str r0, [sp, #0x2c]
    add r0, r11, r5, lsl #3
    str r0, [sp, #0x30]
@L_0201fcb8:
    ldr r0, [sp, #0x2c]
    ldr r0, [r0, r10, lsl #2]
    bl _dflt
    mov r6, #0
    ldr r2, [sp, #0x30]
    cmp r5, #0
    str r0, [r2, r10, lsl #3]
    mov r0, r2
    add r0, r0, r10, lsl #3
    str r1, [r0, #4]
    mov r7, r6
    mov r8, r6
    blt @L_0201fd34
    add r4, r5, r10
@L_0201fcf0:
    add r0, r9, r6, lsl #3
    ldr r1, [r0, #4]
    sub r2, r4, r6
    add r3, r11, r2, lsl #3
    ldr r0, [r9, r6, lsl #3]
    ldmia r3, {r2, r3}
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r7
    mov r1, r8
    bl _dadd
    add r6, r6, #1
    mov r7, r0
    mov r8, r1
    cmp r6, r5
    ble @L_0201fcf0
@L_0201fd34:
    add r0, sp, #0x34
    add r0, r0, r10, lsl #3
    stmia r0, {r7, r8}
    ldr r0, [sp, #8]
    add r10, r10, #1
    cmp r10, r0
    ble @L_0201fcb8
@L_0201fd50:
    ldr r1, [sp, #4]
    ldr r0, [sp, #0x1c]
    add r0, r1, r0
    str r0, [sp, #4]
    b @L_0201f914
@L_0201fd64:
    mov r4, #0
    mov r0, r4
    mov r1, r4
    mov r2, r6
    mov r3, r7
    bl _deq
    bne @L_0201fdd0
    ldr r0, [sp, #4]
    add r2, sp, #0x214
    sub r0, r0, #1
    ldr r1, [r2, r0, lsl #2]
    str r0, [sp, #4]
    ldr r0, [sp, #0x18]
    cmp r1, #0
    sub r0, r0, #0x18
    str r0, [sp, #0x18]
    bne @L_0201fea0
@L_0201fda8:
    ldr r0, [sp, #4]
    sub r0, r0, #1
    ldr r1, [r2, r0, lsl #2]
    str r0, [sp, #4]
    ldr r0, [sp, #0x18]
    cmp r1, #0
    sub r0, r0, #0x18
    str r0, [sp, #0x18]
    beq @L_0201fda8
    b @L_0201fea0
@L_0201fdd0:
    ldr r2, [sp, #0x18]
    mov r0, r6
    mov r1, r7
    rsb r2, r2, #0
    bl scalbn
    ldr r6, [pc, #0x558]
    mov r2, r4
    mov r3, r6
    mov r7, r0
    mov r8, r1
    bl _dgeq
    blo @L_0201fe88
    mov r0, r4
    mov r2, r7
    mov r3, r8
    sub r1, r6, #0x3000000
    bl func_02021adc
    bl _dfix
    bl _dflt
    mov r5, r0
    mov r0, r4
    mov r4, r1
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r7
    mov r1, r8
    bl _dsub
    bl _dfix
    ldr r2, [sp, #0x18]
    mov r1, r4
    add r2, r2, #0x18
    str r2, [sp, #0x18]
    ldr r2, [sp, #4]
    add r4, sp, #0x214
    str r0, [r4, r2, lsl #2]
    add r2, r2, #1
    mov r0, r5
    str r2, [sp, #4]
    bl _dfix
    ldr r1, [sp, #4]
    str r0, [r4, r1, lsl #2]
    b @L_0201fea0
@L_0201fe88:
    mov r0, r7
    mov r1, r8
    bl _dfix
    ldr r1, [sp, #4]
    add r2, sp, #0x214
    str r0, [r2, r1, lsl #2]
@L_0201fea0:
    ldr r4, [pc, #0x498]
    ldr r2, [sp, #0x18]
    mov r1, r4
    mov r0, #0
    bl scalbn
    ldr r6, [sp, #4]
    mov r7, r0
    mov r8, r1
    movs r0, r6
    bmi @L_0201ff24
    sub r4, r4, #0x1800000
    add r9, sp, #0x214
    add r5, sp, #0x34
    mov r11, #0
@L_0201fed8:
    ldr r0, [r9, r6, lsl #2]
    bl _dflt
    mov r2, r0
    mov r3, r1
    mov r0, r7
    mov r1, r8
    bl func_02021adc
    str r0, [r5, r6, lsl #3]
    add r0, r5, r6, lsl #3
    str r1, [r0, #4]
    mov r0, r7
    mov r1, r8
    mov r2, r11
    mov r3, r4
    bl func_02021adc
    mov r7, r0
    mov r8, r1
    subs r6, r6, #1
    bpl @L_0201fed8
@L_0201ff24:
    ldr r11, [sp, #4]
    movs r0, r11
    bmi @L_0201ffb8
    ldr r5, [pc, #0x410]
@L_0201ff34:
    ldr r0, [sp, #4]
    mov r8, #0
    sub r6, r0, r11
    add r0, sp, #0x34
    mov r9, r8
    mov r7, r8
    add r4, r0, r11, lsl #3
    b @L_0201ff90
@L_0201ff54:
    add r0, r5, r7, lsl #3
    ldr r1, [r0, #4]
    ldr r0, [r5, r7, lsl #3]
    add r2, r4, r7, lsl #3
    ldr r3, [r2, #4]
    ldr r2, [r4, r7, lsl #3]
    bl func_02021adc
    mov r2, r0
    mov r3, r1
    mov r0, r8
    mov r1, r9
    bl _dadd
    mov r8, r0
    mov r9, r1
    add r7, r7, #1
@L_0201ff90:
    ldr r0, [sp, #0x24]
    cmp r7, r0
    bgt @L_0201ffa4
    cmp r7, r6
    ble @L_0201ff54
@L_0201ffa4:
    add r0, sp, #0xd4
    add r0, r0, r6, lsl #3
    stmia r0, {r8, r9}
    subs r11, r11, #1
    bpl @L_0201ff34
@L_0201ffb8:
    ldr r0, [sp, #0x288]
    add r4, sp, #0xd4
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_0202031c
    dcd 0xea000002
    dcd 0xea00001e
    dcd 0xea00001d
    dcd 0xea000059
    dcd 0xe59d0004
    dcd 0xe3a02000
    dcd 0xe1a03002
    dcd 0xe3500000
    dcd 0xba00000d
@L_0201fff0:
    ldr r0, [sp, #4]
    mov r1, r3
    add r5, r4, r0, lsl #3
    mov r0, r2
    ldr r2, [sp, #4]
    ldr r3, [r5, #4]
    ldr r2, [r4, r2, lsl #3]
    bl _dadd
    mov r2, r0
    ldr r0, [sp, #4]
    mov r3, r1
    subs r0, r0, #1
    str r0, [sp, #4]
    bpl @L_0201fff0
    cmp r10, #0
    beq @L_02020044
    mov r0, #0
    mov r1, r0
    bl _dsub
    mov r2, r0
    mov r3, r1
@L_02020044:
    ldr r0, [sp]
    stmia r0, {r2, r3}
    b @L_0202031c
    dcd 0xe59d7004
    dcd 0xe3a05000
    dcd 0xe1a06005
    dcd 0xe1b00007
    dcd 0x4a000008
@L_02020064:
    add r0, r4, r7, lsl #3
    ldmia r0, {r2, r3}
    mov r0, r5
    mov r1, r6
    bl _dadd
    mov r5, r0
    mov r6, r1
    subs r7, r7, #1
    bpl @L_02020064
    cmp r10, #0
    moveq r0, r5
    moveq r1, r6
    beq @L_020200ac
    mov r0, #0
    mov r1, r0
    mov r2, r5
    mov r3, r6
    bl _dsub
@L_020200ac:
    ldr r2, [sp]
    mov r3, r6
    str r0, [r2]
    mov r0, r2
    str r1, [r0, #4]
    mov r2, r5
    ldr r0, [sp, #0xd4]
    ldr r1, [sp, #0xd8]
    add r5, sp, #0xd4
    bl _dsub
    mov r2, r0
    ldr r0, [sp, #4]
    mov r3, r1
    cmp r0, #1
    mov r6, #1
    blt @L_02020118
@L_020200ec:
    add r4, r5, r6, lsl #3
    mov r0, r2
    mov r1, r3
    ldmia r4, {r2, r3}
    bl _dadd
    mov r2, r0
    ldr r0, [sp, #4]
    add r6, r6, #1
    mov r3, r1
    cmp r6, r0
    ble @L_020200ec
@L_02020118:
    cmp r10, #0
    beq @L_02020134
    mov r0, #0
    mov r1, r0
    bl _dsub
    mov r2, r0
    mov r3, r1
@L_02020134:
    ldr r0, [sp]
    str r2, [r0, #8]
    str r3, [r0, #0xc]
    b @L_0202031c
    dcd 0xe59d5004
    dcd 0xe1a00005
    dcd 0xe3500000
    dcd 0xda000017
@L_02020154:
    add r3, r4, r5, lsl #3
    ldr r0, [r3, #-8]
    ldr r1, [r3, #-4]
    ldmia r3, {r2, r3}
    bl _dadd
    mov r6, r0
    add r8, r4, r5, lsl #3
    mov r7, r1
    ldr r0, [r8, #-8]
    ldr r1, [r8, #-4]
    mov r2, r6
    mov r3, r7
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldmia r8, {r0, r1}
    bl _dadd
    stmia r8, {r0, r1}
    mov r0, r8
    str r6, [r0, #-8]
    sub r5, r5, #1
    str r7, [r0, #-4]
    cmp r5, #0
    bgt @L_02020154
    ldr r6, [sp, #4]
    add r5, sp, #0xd4
    mov r0, r6
    cmp r0, #1
    ble @L_02020228
@L_020201c8:
    add r3, r5, r6, lsl #3
    ldr r0, [r3, #-8]
    ldr r1, [r3, #-4]
    ldmia r3, {r2, r3}
    bl _dadd
    mov r4, r0
    add r8, r5, r6, lsl #3
    mov r7, r1
    ldr r0, [r8, #-8]
    ldr r1, [r8, #-4]
    mov r2, r4
    mov r3, r7
    bl _dsub
    mov r2, r0
    mov r3, r1
    ldmia r8, {r0, r1}
    bl _dadd
    stmia r8, {r0, r1}
    mov r0, r8
    str r4, [r0, #-8]
    sub r6, r6, #1
    str r7, [r0, #-4]
    cmp r6, #1
    bgt @L_020201c8
@L_02020228:
    ldr r0, [sp, #4]
    mov r6, #0
    mov r7, r6
    cmp r0, #2
    add r5, sp, #0xd4
    mov r4, r6
    blt @L_0202027c
@L_02020244:
    ldr r0, [sp, #4]
    add r1, r5, r0, lsl #3
    ldmia r1, {r2, r3}
    mov r0, r6
    mov r1, r7
    bl _dadd
    ldr r2, [sp, #4]
    mov r6, r0
    sub r2, r2, #1
    mov r0, r2
    str r2, [sp, #4]
    mov r7, r1
    cmp r0, #2
    bge @L_02020244
@L_0202027c:
    cmp r10, #0
    bne @L_020202b0
    ldr r4, [sp, #0xd4]
    ldr r5, [sp, #0xd8]
    ldr r0, [sp]
    ldr r2, [sp, #0xdc]
    stmia r0, {r4, r5}
    ldr r3, [sp, #0xe0]
    str r2, [r0, #8]
    str r3, [r0, #0xc]
    str r6, [r0, #0x10]
    str r7, [r0, #0x14]
    b @L_0202031c
@L_020202b0:
    ldr r2, [sp, #0xd4]
    ldr r3, [sp, #0xd8]
    mov r0, r4
    mov r1, r4
    bl _dsub
    ldr r2, [sp]
    ldr r3, [sp, #0xe0]
    str r0, [r2]
    mov r0, r2
    str r1, [r0, #4]
    ldr r2, [sp, #0xdc]
    mov r0, r4
    mov r1, r4
    bl _dsub
    ldr r2, [sp]
    mov r3, r7
    str r0, [r2, #8]
    mov r0, r2
    str r1, [r0, #0xc]
    mov r0, r4
    mov r1, r4
    mov r2, r6
    bl _dsub
    ldr r2, [sp]
    str r0, [r2, #0x10]
    mov r0, r2
    str r1, [r0, #0x14]
@L_0202031c:
    ldr r0, [sp, #0x20]
    and r0, r0, #7
    add sp, sp, #0x264
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0x2aaaaaab
    dcd data_020a47c4
    dcd 0x3e700000
    dcd 0x007fffff
    dcd 0x003fffff
    dcd 0x3ff00000
    dcd 0x41700000
    dcd data_020a47d4
}
