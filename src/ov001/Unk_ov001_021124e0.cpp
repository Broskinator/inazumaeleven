#include "ov001/Unk_ov001_021124e0.hpp"

extern "C" void func_ov001_021124e0(void);
extern "C" void func_ov001_0211292c(void);
extern "C" void func_ov001_02112a80(void);
extern "C" void func_ov001_02113184(void);
extern "C" void func_ov001_021131d0(void);
extern "C" void func_ov001_02113208(void);
extern "C" void func_ov001_021135bc(void);
extern "C" void func_ov001_02113630(void);
extern "C" void func_ov001_02113830(void);
extern "C" void func_ov001_02113c94(void);
extern "C" void func_ov001_02113e04(void);
extern "C" void func_ov001_02113f08(void);
extern "C" void func_ov001_0211490c(void);
extern "C" void func_ov001_0211506c(void);

extern "C" char data_020c4648[];
extern "C" char data_020c4920[];
extern "C" char data_020c492c[];
extern "C" char data_020c4938[];
extern "C" char data_020c4940[];
extern "C" char data_020c4948[];
extern "C" char data_020c4b80[];
extern "C" char data_020c4b84[];
extern "C" char data_020c5320[];
extern "C" char data_020e88a0[];
extern "C" char data_020fa060[];
extern "C" char data_020fa1a5[];
extern "C" char data_ov001_021298cc[];
extern "C" char data_ov001_0213063c[];
extern "C" char data_ov001_02130650[];
extern "C" char data_ov001_02130658[];
extern "C" char data_ov001_0213065c[];
extern "C" char data_ov001_02130668[];
extern "C" char data_ov001_02130670[];
extern "C" char data_ov001_02130678[];
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN17UnkClass_020621b413func_0206a9d0Eii(void);
extern "C" void _ZN17UnkClass_020621b413func_0206aa30Ei(void);
extern "C" void _ZN17UnkClass_020621b413func_0206ace8Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0206b050Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0206b1c4Ei(void);
extern "C" void _ZN17UnkClass_020621b413func_0206b2c8Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0206b4ccEi(void);
extern "C" void _ZN17UnkClass_020621b413func_0206bfa0Eh(void);
extern "C" void _ZN17UnkClass_020621b413func_0206bfa8Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0206bfb4Ei(void);
extern "C" void _ZN17UnkClass_020621b413func_0206bff4Ei(void);
extern "C" void _ZN17UnkClass_020621b413func_0206c004Eh(void);
extern "C" void _ZN17UnkClass_020621b413func_0206c864Em(void);
extern "C" void _ZN17UnkClass_020621b413func_0206c890Em(void);
extern "C" void _ZN17UnkClass_020621b413func_0206c8a4Em(void);
extern "C" void _ZN17UnkClass_020621b413func_0206c8b8El(void);
extern "C" void _ZN17UnkClass_020621b413func_0206c8c0El(void);
extern "C" void _ZN17UnkClass_020621b413func_02076168Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02079d2cEi(void);
extern "C" void func_02022484(void);
extern "C" void func_02022b2c(void);
extern "C" void func_0202300c(void);
extern "C" void func_0202323c(void);
extern "C" void func_02080b00(void);
extern "C" void func_02080b1c(void);
extern "C" void func_0209bf8c(void);
extern "C" void func_0209bf9c(void);
extern "C" void func_0209e0c0(void);
extern "C" void func_ov001_020ffb28(void);
extern "C" void func_ov001_0210006c(void);
extern "C" void func_ov001_02102d88(void);
extern "C" void func_ov001_021036d8(void);
extern "C" void func_ov001_02103950(void);
extern "C" void func_ov001_02103e00(void);
extern "C" void func_ov001_0210d3e0(void);
extern "C" void func_ov001_021106b0(void);
extern "C" void func_ov001_0211093c(void);
extern "C" void func_ov001_02128088(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_021313d4(void);
extern "C" void func_ov015_02131754(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void func_ov015_021319fc(void);
extern "C" void func_ov015_021435e4(void);
extern "C" void func_ov015_02143664(void);
extern "C" void func_ov015_021436c0(void);
extern "C" void func_ov015_02143750(void);
extern "C" void func_ov015_021443c0(void);
extern "C" void gGameState(void);

extern "C" asm void func_ov001_021124e0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r5, #0
    mov r9, r0
    mov r6, r1
    mov r0, r5
    mov r1, r5
    mov r8, r2
    ldr r4, =data_020c4920
    bl func_ov015_02131754
    ldrh r2, [r6, #0x1c]
    ldrb r6, [r0, #3]
    ldr r1, [r9, #0x64]
    mov r0, r2, asr #0xb
    and r7, r0, #0xf
    cmp r1, r7
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r7, #1
    bne @L_02112880
    cmp r6, #0x28
    mov r0, r9
    bne @L_0211253c
    mov r1, #0x28
    b @L_02112540
@L_0211253c:
    mov r1, #0x2a
@L_02112540:
    bl func_ov001_020ffb28
    ldr r1, [r8]
    ldr r0, =0x7ff
    and r0, r1, r0
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112574
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112580
@L_02112574:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112580:
    bl func_02022b2c
    str r0, [r4]
    ldr r1, [r8]
    ldr r0, =0x7ff
    and r0, r0, r1, lsr #11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_021125b8
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_021125c4
@L_021125b8:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_021125c4:
    bl func_02022b2c
    str r0, [r4, #4]
    ldr r1, [r8]
    ldr r0, =0x3ff
    and r0, r0, r1, lsr #22
    sub r0, r0, #0x200
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_021125fc
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112608
@L_021125fc:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112608:
    bl func_02022b2c
    str r0, [r4, #8]
    ldr r1, [r8, #4]
    ldr r0, =0x7ff
    and r0, r1, r0
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112640
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_0211264c
@L_02112640:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_0211264c:
    bl func_02022b2c
    str r0, [r4, #0x20]
    ldr r1, [r8, #4]
    ldr r0, =0x7ff
    and r0, r0, r1, lsr #11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112684
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112690
@L_02112684:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112690:
    bl func_02022b2c
    str r0, [r4, #0x24]
    mov r0, #0x400
    ldrsh r2, [r8, #8]
    rsb r0, r0, #0
    cmp r2, r0
    ldrnesh r1, [r8, #0xa]
    cmpne r1, r0
    moveq r0, #0x80000000
    streq r0, [r4, #0x18]
    streq r0, [r4, #0x1c]
    beq @L_0211272c
    cmp r2, #0
    mov r0, r2, lsl #0xc
    ble @L_021126e0
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_021126ec
@L_021126e0:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_021126ec:
    bl func_02022b2c
    str r0, [r4, #0x18]
    ldrsh r0, [r8, #0xa]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112718
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112724
@L_02112718:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112724:
    bl func_02022b2c
    str r0, [r4, #0x1c]
@L_0211272c:
    ldrsh r0, [r8, #0xc]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112750
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_0211275c
@L_02112750:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_0211275c:
    bl func_02022b2c
    str r0, [r4, #0x28]
    ldrsh r0, [r8, #0xe]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112788
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112794
@L_02112788:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112794:
    bl func_02022b2c
    str r0, [r4, #0x2c]
    ldrh r1, [r8, #0x10]
    mov r0, #0
    strh r1, [r4, #0x50]
    ldrb r1, [r8, #0x12]
    mov r1, r1, lsl #8
    strh r1, [r4, #0x52]
    ldrb r1, [r8, #0x13]
    strb r1, [r4, #0x5b]
    ldrh r1, [r8, #0x14]
    strh r1, [r4, #0x54]
    ldr r1, [r8, #4]
    mov r2, r1, lsr #0x16
    and r2, r2, #0x1f
    mov r1, r1, lsr #0x1b
    strb r2, [r4, #0x56]
    and r1, r1, #0x1f
    strb r1, [r4, #0x57]
    ldrh r5, [r8, #0x16]
    mov r1, r5, asr #0xc
    and r6, r1, #3
    and r3, r5, #0x3f
    mov r1, r5, asr #6
    and r2, r1, #0x3f
    mov r1, r5, asr #0xe
    strb r6, [r4, #0x58]
    sub r3, r3, #0x20
    str r3, [r4, #0x48]
    sub r2, r2, #0x20
    str r2, [r4, #0x4c]
    and r1, r1, #3
    strb r1, [r4, #0x5a]
    bl func_ov015_021319fc
    mov r5, r0
    ldr r0, =data_020c5320
    bl func_0209bf8c
    bl func_ov015_021319fc
    cmp r5, r0
    beq @L_02112874
    mov r0, r4
    bl func_ov015_021313d4
    ldr r0, =data_020c492c
    bl func_ov015_021313d4
    ldr r0, =data_020c4938
    bl func_ov015_021313d4
    ldr r0, =data_020c4940
    bl func_ov015_021313d4
    ldr r0, =data_020c4948
    bl func_ov015_021313d4
    ldrh r0, [r4, #0x52]
    add r0, r0, #0x8000
    strh r0, [r4, #0x52]
    ldrb r0, [r4, #0x5b]
    add r0, r0, #0x80
    strb r0, [r4, #0x5b]
@L_02112874:
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_0206b050Ev
    b @L_021128e4
@L_02112880:
    cmp r7, #2
    bne @L_021128e4
    ldr r10, =data_020e88a0
    mov r1, r5
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206b4ccEi
    mov r4, #0x10
    mov r1, r0
    mov r0, r8
    mov r2, r4
    bl MI_CpuCopy8
    mov r0, r10
    mov r1, #1
    bl _ZN17UnkClass_020621b413func_0206b4ccEi
    mov r1, r0
    mov r2, r4
    add r0, r8, #0x10
    bl MI_CpuCopy8
    cmp r6, #0x28
    mov r0, r9
    bne @L_021128dc
    mov r1, #0x29
    b @L_021128e0
@L_021128dc:
    mov r1, #0x2b
@L_021128e0:
    bl func_ov001_020ffb28
@L_021128e4:
    ldr r0, =data_020c4b80
    str r7, [r9, #0x64]
    ldrh r2, [r0, #0x20]
    mov r1, r7, lsl #0x1c
    bic r2, r2, #0x7800
    orr r1, r2, r1, lsr #17
    strh r1, [r0, #0x20]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov001_0211292c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r7, #0
    mov r10, r0
    mov r9, r1
    mov r11, #1
    mov r5, r7
@L_02112944:
    ldrh r0, [r9, #0x10]
    cmp r0, #0
    beq @L_02112a68
    mov r1, r5
    bl func_ov015_02130b14
    movs r6, r0
    beq @L_02112a68
    ldrsh r1, [r6, #0xf4]
    ldr r0, =data_020e88a0
    mov r2, r11
    bl _ZN17UnkClass_020621b413func_0206a9d0Eii
    movs r4, r0
    beq @L_02112a68
    mov r0, r10
    mov r1, r6
    mov r2, r4
    add r3, r9, #8
    str r11, [sp]
    bl func_ov001_021106b0
    mov r0, r10
    mov r1, r4
    add r2, r9, #0xc
    bl func_ov001_0211093c
    ldrsh r1, [r6, #0xf4]
    ldr r0, =data_020e88a0
    mov r2, r5
    bl _ZN17UnkClass_020621b413func_0206a9d0Eii
    mov r8, r0
    mov r0, r5
    bl func_ov015_021319fc
    mov r4, r0
    bl func_ov015_021319bc
    cmp r4, r0
    ldrh r0, [r9, #0x12]
    streqh r0, [r8, #0x18]
    ldreqh r0, [r9, #0x14]
    moveq r0, r0, asr #0xa
    andeq r0, r0, #7
    beq @L_02112a04
    add r0, r0, #0x8000
    strh r0, [r8, #0x18]
    ldrh r0, [r9, #0x14]
    mov r0, r0, asr #0xa
    and r0, r0, #7
    add r0, r0, #4
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #29
    add r0, r1, r0, ror #29
@L_02112a04:
    strb r0, [r8, #0x1a]
    ldrh r2, [r9, #0x14]
    ldr r1, =0x3ff
    mov r0, r6
    and r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02080b00
    ldrsh r1, [r9, #0x16]
    mov r0, r6
    bl func_02080b1c
    mov r0, #1
    str r0, [sp]
    mov r1, r6
    mov r0, r10
    mov r2, r8
    mov r3, r9
    bl func_ov001_021106b0
    mov r1, r8
    mov r0, r10
    add r2, r9, #4
    bl func_ov001_0211093c
    add r9, r9, #0x18
@L_02112a68:
    add r7, r7, #1
    cmp r7, #3
    blt @L_02112944
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov001_02112a80(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r1
    mov r8, r0
    mov r7, r2
    cmp r9, #1
    mov r5, #0
    ldr r4, =data_020e88a0
    ldr r6, =data_020c4920
    bne @L_02112f08
    mov r1, #0x46
    bl func_ov001_020ffb28
    ldr r1, [r7]
    ldr r0, =0x7ff
    and r0, r1, r0
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112adc
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112ae8
@L_02112adc:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112ae8:
    bl func_02022b2c
    str r0, [r6]
    ldr r1, [r7]
    ldr r0, =0x7ff
    and r0, r0, r1, lsr #11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112b20
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112b2c
@L_02112b20:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112b2c:
    bl func_02022b2c
    str r0, [r6, #4]
    ldr r1, [r7]
    ldr r0, =0x3ff
    and r0, r0, r1, lsr #22
    sub r0, r0, #0x200
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112b64
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112b70
@L_02112b64:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112b70:
    bl func_02022b2c
    str r0, [r6, #8]
    ldr r1, [r7, #4]
    ldr r0, =0x7ff
    and r0, r1, r0
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112ba8
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112bb4
@L_02112ba8:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112bb4:
    bl func_02022b2c
    str r0, [r6, #0x20]
    ldr r1, [r7, #4]
    ldr r0, =0x7ff
    and r0, r0, r1, lsr #11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112bec
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112bf8
@L_02112bec:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112bf8:
    bl func_02022b2c
    str r0, [r6, #0x24]
    mov r0, #0x400
    ldrsh r2, [r7, #8]
    rsb r0, r0, #0
    cmp r2, r0
    ldrnesh r1, [r7, #0xa]
    cmpne r1, r0
    moveq r0, #0x80000000
    streq r0, [r6, #0x18]
    streq r0, [r6, #0x1c]
    beq @L_02112c94
    cmp r2, #0
    mov r0, r2, lsl #0xc
    ble @L_02112c48
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112c54
@L_02112c48:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112c54:
    bl func_02022b2c
    str r0, [r6, #0x18]
    ldrsh r0, [r7, #0xa]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112c80
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112c8c
@L_02112c80:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112c8c:
    bl func_02022b2c
    str r0, [r6, #0x1c]
@L_02112c94:
    ldrsh r0, [r7, #0xc]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112cb8
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112cc4
@L_02112cb8:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112cc4:
    bl func_02022b2c
    str r0, [r6, #0x28]
    ldrsh r0, [r7, #0xe]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02112cf0
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02112cfc
@L_02112cf0:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02112cfc:
    bl func_02022b2c
    str r0, [r6, #0x2c]
    ldrh r1, [r7, #0x10]
    mov r0, #0
    strh r1, [r6, #0x50]
    ldrb r1, [r7, #0x12]
    mov r1, r1, lsl #8
    strh r1, [r6, #0x52]
    ldrb r1, [r7, #0x13]
    strb r1, [r6, #0x5b]
    ldrh r1, [r7, #0x14]
    strh r1, [r6, #0x54]
    ldr r1, [r7, #4]
    mov r2, r1, lsr #0x16
    and r2, r2, #0x1f
    mov r1, r1, lsr #0x1b
    strb r2, [r6, #0x56]
    and r1, r1, #0x1f
    strb r1, [r6, #0x57]
    ldrh r9, [r7, #0x16]
    mov r1, r9, asr #0xc
    and r12, r1, #3
    and r3, r9, #0x3f
    mov r1, r9, asr #6
    and r2, r1, #0x3f
    mov r1, r9, asr #0xe
    strb r12, [r6, #0x58]
    sub r3, r3, #0x20
    str r3, [r6, #0x48]
    sub r2, r2, #0x20
    str r2, [r6, #0x4c]
    and r1, r1, #3
    strb r1, [r6, #0x5a]
    bl func_ov015_021319fc
    mov r9, r0
    ldr r0, =data_020c5320
    bl func_0209bf8c
    bl func_ov015_021319fc
    cmp r9, r0
    beq @L_02112ddc
    mov r0, r6
    bl func_ov015_021313d4
    ldr r0, =data_020c492c
    bl func_ov015_021313d4
    ldr r0, =data_020c4938
    bl func_ov015_021313d4
    ldr r0, =data_020c4940
    bl func_ov015_021313d4
    ldr r0, =data_020c4948
    bl func_ov015_021313d4
    ldrh r0, [r6, #0x52]
    add r0, r0, #0x8000
    strh r0, [r6, #0x52]
    ldrb r0, [r6, #0x5b]
    add r0, r0, #0x80
    strb r0, [r6, #0x5b]
@L_02112ddc:
    mov r0, r4
    mov r1, r5
    bl _ZN17UnkClass_020621b413func_0206aa30Ei
    ldr r2, [r6]
    mov r1, #1
    str r2, [r0]
    ldr r2, [r6, #4]
    str r2, [r0, #4]
    ldr r2, [r6, #8]
    str r2, [r0, #8]
    ldr r2, [r6, #0x18]
    str r2, [r0, #0xc]
    ldr r2, [r6, #0x1c]
    str r2, [r0, #0x10]
    ldr r2, [r6, #0x30]
    str r2, [r0, #0x14]
    ldr r2, [r6, #0x38]
    str r2, [r0, #0x18]
    ldr r2, [r6, #0x48]
    strh r2, [r0, #0x1c]
    ldr r2, [r6, #0x4c]
    strh r2, [r0, #0x1e]
    ldrh r2, [r6, #0x52]
    strh r2, [r0, #0x20]
    ldrh r2, [r6, #0x54]
    strh r2, [r0, #0x22]
    ldrb r2, [r6, #0x5a]
    strb r2, [r0, #0x24]
    ldrb r2, [r6, #0x56]
    strb r2, [r0, #0x25]
    ldrb r2, [r6, #0x57]
    strb r2, [r0, #0x26]
    ldrb r2, [r6, #0x5b]
    strb r2, [r0, #0x27]
    ldrb r2, [r6, #0x58]
    strb r2, [r0, #0x28]
    ldrb r2, [r6, #0x59]
    strb r2, [r0, #0x29]
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206aa30Ei
    mov r4, r0
    mov r1, r4
    add r0, r7, #0x18
    mov r2, #0x2c
    bl MI_CpuCopy8
    mov r0, r5
    bl func_ov015_021319fc
    mov r5, r0
    ldr r0, =data_020c5320
    bl func_0209bf8c
    bl func_ov015_021319fc
    cmp r5, r0
    beq @L_02112ed8
    mov r0, r4
    bl func_ov015_021313d4
    add r0, r4, #0xc
    bl func_ov015_021313d4
    ldrh r0, [r4, #0x20]
    add r0, r0, #0x8000
    strh r0, [r4, #0x20]
    ldrb r0, [r4, #0x27]
    add r0, r0, #0x80
    strb r0, [r4, #0x27]
@L_02112ed8:
    ldrh r0, [r7, #0x4c]
    ldr r4, =data_020fa060
    mov r1, #0
    str r0, [r8, #0x4ac]
    ldr r2, [r7, #0x44]
    mov r0, r4
    bl func_0209e0c0
    ldr r2, [r7, #0x48]
    mov r0, r4
    mov r1, #1
    bl func_0209e0c0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02112f08:
    cmp r9, #2
    bne @L_0211306c
    ldrb r1, [r7, #6]
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206b1c4Ei
    ldrsb r1, [r7, #0xc]
    cmp r1, r0
    beq @L_02112f70
    ldrb r1, [r7, #6]
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206b2c8Ev
    movs r1, r0
    beq @L_02112f74
    ldrb r0, [r7, #0xb]
    cmp r0, #1
    bne @L_02112f74
    mov r0, r7
    mov r2, #0x10
    strb r5, [r7, #0xb]
    bl MI_CpuCopy8
    ldrb r1, [r7, #9]
    ldr r0, =gGameState
    strb r1, [r0, #0x86]
    ldrb r1, [r7, #0xa]
    strb r1, [r0, #0x87]
    b @L_02112f74
@L_02112f70:
    strb r5, [r7, #0xb]
@L_02112f74:
    ldr r0, [r8, #0x4ac]
    cmp r0, #0x12
    beq @L_02112fe4
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_02076168Ev
    movs r1, r0
    beq @L_02112f9c
    add r0, r7, #0x10
    mov r2, #0x18
    bl MI_CpuCopy8
@L_02112f9c:
    ldr r0, =data_020e88a0
    bl func_ov015_021435e4
    movs r5, r0
    beq @L_02112fe4
    mov r1, r5
    add r0, r7, #0x28
    mov r2, #0x18
    bl MI_CpuCopy8
    mov r0, #0
    bl func_ov015_021319fc
    mov r4, r0
    ldr r0, =data_020c5320
    bl func_0209bf8c
    bl func_ov015_021319fc
    cmp r4, r0
    beq @L_02112fe4
    mov r0, r5
    bl func_ov015_021313d4
@L_02112fe4:
    ldr r0, [r8, #0x4ac]
    cmp r0, #0x12
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =data_020e88a0
    bl func_ov015_021436c0
    ldrb r1, [r7, #0x40]
    strb r1, [r0, #0x1c]
    ldrsb r1, [r7, #0x41]
    strb r1, [r0, #0x1d]
    ldrsb r1, [r7, #0x47]
    strb r1, [r0, #0x23]
    ldrsh r1, [r7, #0x42]
    strh r1, [r0, #0x1e]
    ldrsh r1, [r7, #0x44]
    strh r1, [r0, #0x20]
    ldrb r1, [r7, #0x46]
    ldrb r2, [r0, #0x22]
    mov r1, r1, lsl #0x18
    mov r1, r1, lsr #0x1c
    bic r2, r2, #0xf0
    mov r1, r1, lsl #0x1c
    orr r2, r2, r1, lsr #24
    strb r2, [r0, #0x22]
    ldrb r1, [r7, #0x46]
    and r2, r2, #0xff
    bic r2, r2, #0xf
    mov r1, r1, lsl #0x1c
    mov r1, r1, lsr #0x1c
    and r1, r1, #0xf
    orr r1, r2, r1
    strb r1, [r0, #0x22]
    ldr r1, [r7, #0x48]
    str r1, [r0, #0x24]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0211306c:
    cmp r9, #3
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r9, #0xa
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, r7
    bl func_ov001_0211292c
    cmp r9, #0xa
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r8, #0x4ac]
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206c004Eh
    mov r0, r4
    mov r1, #6
    bl _ZN17UnkClass_020621b413func_0206bff4Ei
    ldr r0, [r8, #0x4ac]
    cmp r0, #1
    bne @L_021130c8
    mov r0, r8
    bl func_ov001_021036d8
    mov r0, r8
    mov r1, #0x47
    bl func_ov001_0210006c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021130c8:
    cmp r0, #0xd
    bne @L_02113110
    mov r0, r8
    bl func_ov001_02103e00
    mov r0, r8
    mov r1, #0x47
    bl func_ov001_0210006c
    mov r0, r4
    bl func_ov015_02143664
    movs r5, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl func_ov015_021443c0
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r4
    mov r1, r5
    bl func_ov001_02128088
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02113110:
    cmp r0, #0x12
    bne @L_02113148
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206ace8Ev
    cmp r0, #0
    beq @L_0211313c
    mov r0, r4
    bl func_ov015_02143750
    ldrsh r1, [r0, #0x1e]
    ldr r0, =data_ov001_02130668
    strh r1, [r0, #4]
@L_0211313c:
    mov r0, r8
    bl func_ov001_02103950
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02113148:
    mov r0, r8
    bl func_ov001_02102d88
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov001_02113184(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r1
    ldrh r2, [r5, #8]
    ldr r4, =data_020fa060
    mov r1, #0
    str r2, [r0, #0x430]
    ldrb r2, [r5, #0xa]
    str r2, [r0, #0x434]
    ldrb r2, [r5, #0xb]
    strb r2, [r0, #0x438]
    ldr r2, [r5]
    mov r0, r4
    bl func_0209e0c0
    ldr r2, [r5, #4]
    mov r0, r4
    mov r1, #1
    bl func_0209e0c0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov001_021131d0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldrb r1, [r4]
    mov r5, r0
    ldr r0, =data_020c5320
    strh r1, [r5, #0x4e]
    bl func_0209bf8c
    ldrb r1, [r4]
    cmp r1, r0
    moveq r0, #1
    movne r0, #0
    strb r0, [r5, #0x4c]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov001_02113208(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    ldr r1, [r5]
    ldr r0, =0x7ff
    ldr r4, =data_020c4920
    and r0, r1, r0
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02113244
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02113250
@L_02113244:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02113250:
    bl func_02022b2c
    str r0, [r4]
    ldr r1, [r5]
    ldr r0, =0x7ff
    and r0, r0, r1, lsr #11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02113288
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02113294
@L_02113288:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02113294:
    bl func_02022b2c
    str r0, [r4, #4]
    ldr r1, [r5]
    ldr r0, =0x3ff
    and r0, r0, r1, lsr #22
    sub r0, r0, #0x200
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_021132cc
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_021132d8
@L_021132cc:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_021132d8:
    bl func_02022b2c
    str r0, [r4, #8]
    ldr r1, [r5, #4]
    ldr r0, =0x7ff
    and r0, r1, r0
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02113310
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_0211331c
@L_02113310:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_0211331c:
    bl func_02022b2c
    str r0, [r4, #0x20]
    ldr r1, [r5, #4]
    ldr r0, =0x7ff
    and r0, r0, r1, lsr #11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02113354
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02113360
@L_02113354:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02113360:
    bl func_02022b2c
    str r0, [r4, #0x24]
    mov r0, #0x400
    ldrsh r2, [r5, #8]
    rsb r0, r0, #0
    cmp r2, r0
    ldrnesh r1, [r5, #0xa]
    cmpne r1, r0
    moveq r0, #0x80000000
    streq r0, [r4, #0x18]
    streq r0, [r4, #0x1c]
    beq @L_021133fc
    cmp r2, #0
    mov r0, r2, lsl #0xc
    ble @L_021133b0
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_021133bc
@L_021133b0:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_021133bc:
    bl func_02022b2c
    str r0, [r4, #0x18]
    ldrsh r0, [r5, #0xa]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_021133e8
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_021133f4
@L_021133e8:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_021133f4:
    bl func_02022b2c
    str r0, [r4, #0x1c]
@L_021133fc:
    ldrsh r0, [r5, #0xc]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02113420
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_0211342c
@L_02113420:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_0211342c:
    bl func_02022b2c
    str r0, [r4, #0x28]
    ldrsh r0, [r5, #0xe]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02113458
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02113464
@L_02113458:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02113464:
    bl func_02022b2c
    str r0, [r4, #0x2c]
    ldrh r1, [r5, #0x10]
    mov r0, #0
    strh r1, [r4, #0x50]
    ldrb r1, [r5, #0x12]
    mov r1, r1, lsl #8
    strh r1, [r4, #0x52]
    ldrb r1, [r5, #0x13]
    strb r1, [r4, #0x5b]
    ldrh r1, [r5, #0x14]
    strh r1, [r4, #0x54]
    ldr r1, [r5, #4]
    mov r2, r1, lsr #0x16
    and r2, r2, #0x1f
    mov r1, r1, lsr #0x1b
    strb r2, [r4, #0x56]
    and r1, r1, #0x1f
    strb r1, [r4, #0x57]
    ldrh r6, [r5, #0x16]
    mov r1, r6, asr #0xc
    and r12, r1, #3
    and r3, r6, #0x3f
    mov r1, r6, asr #6
    and r2, r1, #0x3f
    mov r1, r6, asr #0xe
    strb r12, [r4, #0x58]
    sub r3, r3, #0x20
    str r3, [r4, #0x48]
    sub r2, r2, #0x20
    str r2, [r4, #0x4c]
    and r1, r1, #3
    strb r1, [r4, #0x5a]
    bl func_ov015_021319fc
    mov r6, r0
    ldr r0, =data_020c5320
    bl func_0209bf8c
    bl func_ov015_021319fc
    cmp r6, r0
    beq @L_02113544
    mov r0, r4
    bl func_ov015_021313d4
    ldr r0, =data_020c492c
    bl func_ov015_021313d4
    ldr r0, =data_020c4938
    bl func_ov015_021313d4
    ldr r0, =data_020c4940
    bl func_ov015_021313d4
    ldr r0, =data_020c4948
    bl func_ov015_021313d4
    ldrh r0, [r4, #0x52]
    add r0, r0, #0x8000
    strh r0, [r4, #0x52]
    ldrb r0, [r4, #0x5b]
    add r0, r0, #0x80
    strb r0, [r4, #0x5b]
@L_02113544:
    ldr r4, =data_020e88a0
    ldrb r1, [r5, #0x19]
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206c890Em
    ldrb r1, [r5, #0x18]
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206c864Em
    ldrb r1, [r5, #0x1a]
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206c8a4Em
    ldrb r0, [r5, #0x19]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r4
    mov r1, #4
    bl _ZN17UnkClass_020621b413func_0206c8b8El
    ldr r1, =0x10008
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206c8c0El
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov001_021135bc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    bl func_ov015_021319bc
    cmp r0, #0
    ldrh r0, [r4, #0x1c]
    bne @L_02113600
    mov r0, r0, asr #0xa
    tst r0, #1
    ldrne r0, =data_ov001_02130678
    movne r1, #0
    strne r1, [r0, #8]
    strne r1, [r0, #0xc]
    ldreq r0, =data_ov001_02130678
    moveq r1, #0x80000000
    streq r1, [r0, #8]
    streq r1, [r0, #0xc]
    ldmia sp!, {r4, pc}
@L_02113600:
    mov r0, r0, asr #9
    tst r0, #1
    ldrne r0, =data_ov001_02130678
    movne r1, #0
    strne r1, [r0]
    strne r1, [r0, #4]
    ldreq r0, =data_ov001_02130678
    moveq r1, #0x80000000
    streq r1, [r0]
    streq r1, [r0, #4]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov001_02113630(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x20
    mov r6, r0
    ldrb r0, [r6, #0x1b]
    ldr r7, [pc, #0x1d4]
    add r5, sp, #0
    mov r0, r0, asr #4
    and r0, r0, #7
    cmp r0, #3
    ldrneb r0, [r6, #0x17]
    strneh r0, [r7]
    ldrneb r0, [r6, #0x18]
    strneh r0, [r7, #2]
    ldrb r0, [r6, #0x1b]
    mov r0, r0, asr #4
    and r0, r0, #7
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02113800
    dcd 0xea00005f
    dcd 0xea000017
    dcd 0xea000001
    dcd 0xea000026
    dcd 0xea00004b
    dcd 0xe1d700b0
    dcd 0xe3500000
    dcd 0x0a000006
    dcd 0xe1a01005
    dcd 0xe3a00000
    dcd 0xebffd84f
    dcd 0xe1d700b0
    dcd 0xe2400001
    dcd 0xe7950100
    dcd 0xe1c700b0
    dcd 0xe1d700b2
    dcd 0xe3500000
    dcd 0x0a00004e
    dcd 0xe1a01005
    dcd 0xe3a00001
    dcd 0xebffd845
    dcd 0xe1d700b2
    dcd 0xe2400001
    dcd 0xe7950100
    dcd 0xe1c700b2
    dcd 0xea000046
    dcd 0xe1d700b0
    dcd 0xe3500000
    dcd 0x0a000006
    dcd 0xe1a01005
    dcd 0xe3a00000
    dcd 0xebffdc7b
    dcd 0xe1d700b0
    dcd 0xe2400001
    dcd 0xe7950100
    dcd 0xe1c700b0
    dcd 0xe1d700b2
    dcd 0xe3500000
    dcd 0x0a000039
    dcd 0xe1a01005
    dcd 0xe3a00001
    dcd 0xebffdc71
    dcd 0xeaffffe9
    dcd 0xe59f00f0
    dcd 0xeb00c007
    dcd 0xe5d61017
    dcd 0xe1a04000
    dcd 0xe351006e
    dcd 0x1a00000b
    dcd 0xe5d42022
    dcd 0xe3a00000
    dcd 0xe1a01e02
    dcd 0xe1a01e21
    dcd 0xe3811002
    dcd 0xe20110ff
    dcd 0xe3c2200f
    dcd 0xe201100f
    dcd 0xe1821001
    dcd 0xe5c41022
    dcd 0xe1c700b4
    dcd 0xea000023
    dcd 0xe3510000
    dcd 0x03a00000
    dcd 0x01c700b4
    dcd 0x0a00001f
    dcd 0xe1a00005
    dcd 0xebffdda4
    dcd 0xe5d60017
    dcd 0xe2400001
    dcd 0xe7950100
    dcd 0xe1c700b4
    dcd 0xe5d41022
    dcd 0xe1a00e01
    dcd 0xe1a00e20
    dcd 0xe3c00002
    dcd 0xe20000ff
    dcd 0xe3c1100f
    dcd 0xe200000f
    dcd 0xe1810000
    dcd 0xe5c40022
    dcd 0xea00000f
    dcd 0xe1d700b0
    dcd 0xe3500064
    dcd 0x059f0054
    dcd 0x01c700b0
    dcd 0x0a000002
    dcd 0xe3500065
    dcd 0x059f0048
    dcd 0x01c700b0
    dcd 0xe1d700b2
    dcd 0xe3500064
    dcd 0x059f0034
    dcd 0x01c700b2
    dcd 0x0a000002
    dcd 0xe3500065
    dcd 0x059f0028
    dcd 0x01c700b2
@L_02113800:
    ldrb r1, [r6, #0x19]
    ldr r0, [pc, #0x20]
    str r1, [r0]
    ldrb r1, [r6, #0x1a]
    str r1, [r0, #4]
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    dcd data_ov001_02130668
    dcd data_020e88a0
    dcd 0x000001f6
    dcd 0x000001f9
    dcd data_ov001_02130670
}

extern "C" asm void func_ov001_02113830(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0
    mov r6, r0
    mov r0, r4
    mov r5, r1
    ldr r7, [pc, #0x434]
    bl func_ov015_02131754
    ldr r1, [pc, #0x430]
    ldrb r0, [r0, #2]
    ldrb r1, [r1, #2]
    cmp r1, r0
    beq @L_02113878
    mov r0, r4
    mov r1, r5
    bl func_ov015_02131754
    ldrb r0, [r0, #2]
    cmp r0, #0x36
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02113878:
    mov r9, #0
    mov r0, r9
    mov r1, r5
    bl func_ov015_02131754
    mov r8, r0
    mov r0, r9
    mov r1, r5
    bl func_ov015_02131754
    ldrb r4, [r0, #3]
    ldr r2, [r8, #4]
    ldr r1, [pc, #0x3e0]
    add r0, r8, #4
    str r2, [r1]
    ldr r2, [r8, #8]
    str r2, [r1, #4]
    ldrh r2, [r8, #0x20]
    mov r2, r2, asr #5
    and r2, r2, #0xf
    strb r2, [r1, #0x7e]
    bl func_ov001_02113630
    mov r0, r9
    mov r1, r5
    bl func_ov015_02131754
    ldr r1, [pc, #0x3a8]
    ldrb r0, [r0, #2]
    ldrb r1, [r1, #2]
    cmp r1, r0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6
    add r1, r8, #4
    bl func_ov001_021135bc
    ldrh r1, [r8, #0x20]
    ldr r5, [pc, #0x38c]
    mov r0, r5
    and r1, r1, #1
    bl _ZN17UnkClass_020621b413func_0206bfa0Eh
    ldrh r1, [r8, #0x20]
    mov r0, r5
    mov r1, r1, asr #1
    and r9, r1, #0xf
    bl _ZN17UnkClass_020621b413func_0206bfa8Ev
    cmp r0, r9
    beq @L_02113940
    ldrh r1, [r8, #0x20]
    mov r0, r5
    mov r1, r1, asr #1
    and r1, r1, #0xf
    bl _ZN17UnkClass_020621b413func_0206bfb4Ei
    mov r0, #1
    strb r0, [r6, #0x1d]
@L_02113940:
    ldr r1, [r7]
    ldr r0, [r8, #0xc]
    cmp r1, r0
    ldrb r0, [r8, #0x1f]
    movhs r1, #1
    movlo r1, #0
    and r0, r0, #0xf
    cmp r0, #9
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    dcd 0xe8bd83f8
    dcd 0xea000007
    dcd 0xea00000f
    dcd 0xea000018
    dcd 0xea000020
    dcd 0xea000028
    dcd 0xea00003a
    dcd 0xea000049
    dcd 0xea000059
    dcd 0xea000060
    dcd 0xe3510000
    dcd 0x18bd83f8
    dcd 0xe598300c
    dcd 0xe1a00006
    dcd 0xe2881004
    dcd 0xe2882028
    dcd 0xe5873000
    dcd 0xebfff70f
    dcd 0xe8bd83f8
    dcd 0xe3510000
    dcd 0x18bd83f8
    dcd 0xe598500c
    dcd 0xe1a00006
    dcd 0xe1a03004
    dcd 0xe2881004
    dcd 0xe2882028
    dcd 0xe5875000
    dcd 0xebfff86b
    dcd 0xe8bd83f8
    dcd 0xe3510000
    dcd 0x18bd83f8
    dcd 0xe598300c
    dcd 0xe1a00006
    dcd 0xe2881004
    dcd 0xe2882028
    dcd 0xe5873000
    dcd 0xebfff981
    dcd 0xe8bd83f8
    dcd 0xe3510000
    dcd 0x18bd83f8
    dcd 0xe598300c
    dcd 0xe1a00006
    dcd 0xe2881004
    dcd 0xe2882028
    dcd 0xe5873000
    dcd 0xebfffaaf
    dcd 0xe8bd83f8
    dcd 0xe3510000
    dcd 0x18bd83f8
    dcd 0xe598000c
    dcd 0xe2882028
    dcd 0xe5870000
    dcd 0xe1d812b0
    dcd 0xe1a00006
    dcd 0xe1a045c1
    dcd 0xe204500f
    dcd 0xe1a01005
    dcd 0xebfffc0b
    dcd 0xe5865064
    dcd 0xe59f0228
    dcd 0xe1a05e04
    dcd 0xe1d012b0
    dcd 0xe3c11b1e
    dcd 0xe18118a5
    dcd 0xe1c012b0
    dcd 0xe8bd83f8
    dcd 0xe3510000
    dcd 0x18bd83f8
    dcd 0xe598200c
    dcd 0xe1a00006
    dcd 0xe2881028
    dcd 0xe5872000
    dcd 0xebfffdbd
    dcd 0xe354001e
    dcd 0xe1a00006
    dcd 0x1a000002
    dcd 0xe3a0101f
    dcd 0xebffb021
    dcd 0xe8bd83f8
    dcd 0xe3a01021
    dcd 0xebffb01e
    dcd 0xe8bd83f8
    dcd 0xe3510000
    dcd 0x18bd83f8
    dcd 0xe598100c
    dcd 0xe1a00006
    dcd 0xe5871000
    dcd 0xe2881028
    dcd 0xebfffdc0
    dcd 0xe5d6004c
    dcd 0xe3500000
    dcd 0xe1a00006
    dcd 0x0a000002
    dcd 0xe3a01066
    dcd 0xebffb010
    dcd 0xe8bd83f8
    dcd 0xe3a01033
    dcd 0xebffb00d
    dcd 0xe8bd83f8
    dcd 0xe3510000
    dcd 0x18bd83f8
    dcd 0xe598200c
    dcd 0xe1a00006
    dcd 0xe2881028
    dcd 0xe5872000
    dcd 0xebfffdbd
    dcd 0xe8bd83f8
    dcd 0xe1a00006
    dcd 0xe2881028
    dcd 0xebfff466
    dcd 0xe3540023
    dcd 0xca00001d
    dcd 0xaa000038
    dcd 0xe354001f
    dcd 0xca000017
    dcd 0xaa00003e
    dcd 0xe3540013
    dcd 0x908ff104
    dcd 0xe8bd83f8
    dcd 0xe8bd83f8
    dcd 0xe8bd83f8
    dcd 0xe8bd83f8
    dcd 0xea00003a
    dcd 0xea00001e
    dcd 0xea000035
    dcd 0xe8bd83f8
    dcd 0xe8bd83f8
    dcd 0xe8bd83f8
    dcd 0xe8bd83f8
    dcd 0xe8bd83f8
    dcd 0xea00002f
    dcd 0xe8bd83f8
    dcd 0xea00002d
    dcd 0xe8bd83f8
    dcd 0xea00002b
    dcd 0xe8bd83f8
    dcd 0xea000029
    dcd 0xe8bd83f8
    dcd 0xea000027
    dcd 0xe3540021
    dcd 0x0a000025
    dcd 0xe8bd83f8
    dcd 0xe354003d
    dcd 0xca000003
    dcd 0xaa000018
    dcd 0xe354003c
    dcd 0x0a000016
    dcd 0xe8bd83f8
    dcd 0xe354003e
    dcd 0xca000001
    dcd 0x0a000026
    dcd 0xe8bd83f8
    dcd 0xe3540064
    dcd 0x0a00000f
    dcd 0xe8bd83f8
    dcd 0xe5960008
    dcd 0xe3500003
    dcd 0x1a000003
    dcd 0xe1a00006
    dcd 0xe5901000
    dcd 0xe591104c
    dcd 0xe12fff31
    dcd 0xe5960008
    dcd 0xe350000d
    dcd 0x1a000004
    dcd 0xe59f508c
    dcd 0xe5950000
    dcd 0xeb009b22
    dcd 0xe5950000
    dcd 0xeb009a3b
    dcd 0xe5960008
    dcd 0xe3500005
    dcd 0x08bd83f8
    dcd 0xe1a00006
    dcd 0xe1a01004
    dcd 0xebffafbf
    dcd 0xe598000c
    dcd 0xe5870000
    dcd 0xe8bd83f8
    dcd 0xe598000c
    dcd 0xe5870000
    dcd 0xe8bd83f8
    dcd 0xe5960008
    dcd 0xe1540000
    dcd 0x18bd83f8
    dcd 0xe1a00006
    dcd 0xebffb112
    dcd 0xe598000c
    dcd 0xe5870000
    dcd 0xe8bd83f8
    dcd 0xe1a00006
    dcd 0xe1a01004
    dcd 0xebffafae
    dcd 0xe1a00006
    dcd 0xebffb29b
    dcd 0xe598000c
    dcd 0xe5870000
    dcd 0xe8bd83f8
    dcd data_ov001_0213063c
    dcd data_020c4b80
    dcd gGameState
    dcd data_020e88a0
    dcd data_020c4648
}

extern "C" asm void func_ov001_02113c94(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r5, =data_020c5320
    mov r7, r0
    mov r0, r5
    mov r4, #0
    bl func_0209bf9c
    mov r6, r0
    mov r0, r5
    bl func_0209bf8c
    add r1, r7, #0xda
    mov r9, #1
    mov r7, r0
    mov r10, r9
    add r8, r1, #0x100
    mov r11, r9
    b @L_02113d40
@L_02113cd4:
    tst r6, r11, lsl r10
    cmpne r7, r10
    beq @L_02113d3c
    mov r0, r10
    mov r1, r4
    bl func_ov015_02131754
    ldr r1, =data_020c4b80
    ldrb r0, [r0, #2]
    ldrb r1, [r1, #2]
    cmp r1, r0
    bne @L_02113d3c
    mov r0, r10
    mov r1, r4
    bl func_ov015_02131754
    ldrb r0, [r0, #0x1f]
    and r0, r0, #0xf
    cmp r0, #0xa
    beq @L_02113d3c
    ldrb r0, [r5, #0x64]
    cmp r0, #0
    beq @L_02113d38
    mov r0, r8
    mov r1, r4
    mov r2, #0x2c
    bl MI_CpuFill8
@L_02113d38:
    mov r9, r4
@L_02113d3c:
    add r10, r10, #1
@L_02113d40:
    cmp r10, #4
    blt @L_02113cd4
    cmp r9, #0
    ldrne r0, =data_020c5320
    mov r7, #0
    ldrneb r0, [r0, #0x64]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #1
    mov r9, r7
    mov r11, r4
    ldr r5, =data_020e88a0
    b @L_02113dec
@L_02113d74:
    mov r0, r5
    mov r1, r9
    strb r7, [r8]
    bl _ZN17UnkClass_020621b413func_02079d2cEi
    cmp r0, #0
    beq @L_02113de4
    mov r10, r11
    b @L_02113ddc
@L_02113d94:
    tst r6, r4, lsl r10
    beq @L_02113dd8
    mov r0, r10
    mov r1, r7
    bl func_ov015_02131754
    add r0, r0, #0x28
    ldrb r1, [r8]
    ldrb r0, [r0, r9]
    cmp r1, #0
    streqb r4, [r8]
    streqb r0, [r8, #1]
    beq @L_02113dd8
    ldrb r1, [r8, #1]
    and r0, r0, #0xff
    cmp r1, r0
    strneb r7, [r8]
    bne @L_02113de4
@L_02113dd8:
    add r10, r10, #1
@L_02113ddc:
    cmp r10, #4
    blt @L_02113d94
@L_02113de4:
    add r9, r9, #1
    add r8, r8, #2
@L_02113dec:
    cmp r9, #0x16
    blt @L_02113d74
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov001_02113e04(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r1, =gGameState
    mov r5, r0
    ldrb r0, [r1, #0x1b]
    mov r4, #1
    cmp r0, #0
    ldr r0, =data_020c5320
    movne r4, #3
    bl func_0209bf9c
    add r1, r5, #0x400
    mov r2, #0
    mov r6, r0
    strh r2, [r1, #0x22]
    strh r2, [r1, #0x20]
    strh r2, [r1, #0x1e]
    b @L_02113ee8
@L_02113e44:
    mov r0, #1
    tst r6, r0, lsl r4
    beq @L_02113ee4
    ldr r2, =data_ov001_021298cc
    mov r0, r4
    mov r1, r5
    ldmia r2, {r2, r3}
    bl func_ov001_0210d3e0
    cmp r4, #0
    subne r3, r4, #1
    addne r0, r5, r3, lsl #1
    addne r8, r0, #0x400
    ldrneh r0, [r8, #0x1e]
    cmpne r0, #0
    beq @L_02113ee4
    ldr r1, =data_020c4b84
    ldr r0, =data_ov001_02130658
    mov lr, #0
    add r2, r1, #0x14
    ldrb r12, [r0, r4]
    mov r7, lr
    mov r0, #0x10
    mov r1, #1
    mov r9, #0xf
    b @L_02113ecc
@L_02113ea8:
    ldrh r10, [r8, #0x1e]
    tst r10, r1, lsl r12
    movne r10, r0, lsl r7
    andne r10, r10, #0xff
    sub r12, r12, #1
    orrne lr, lr, r10
    ands r12, r12, #0xff
    moveq r12, r9
    add r7, r7, #1
@L_02113ecc:
    cmp r7, #4
    blt @L_02113ea8
    ldrb r0, [r2, r3]
    and r0, r0, #0xf
    orr r0, r0, lr
    strb r0, [r2, r3]
@L_02113ee4:
    sub r4, r4, #1
@L_02113ee8:
    cmp r4, #0
    bge @L_02113e44
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov001_02113f08(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x64
    mov r4, r1
    mov r8, r2
    mov r5, r0
    ldr r6, [pc, #0x9b8]
    ldr r10, [pc, #0x9b8]
    mov r7, #0
    bl func_ov015_021319bc
    mov r9, r0
    mov r0, r4
    mov r1, r8
    bl func_ov015_02131754
    mov r8, r0
    cmp r4, #0
    beq @L_02113f74
    ldr r0, [pc, #0x994]
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    bne @L_02113f68
    cmp r9, #0
    moveq r9, #1
    movne r9, r7
    b @L_02113f74
@L_02113f68:
    mov r0, r4
    bl func_ov015_021319fc
    mov r9, r0
@L_02113f74:
    ldr r1, [pc, #0x96c]
    ldrb r0, [r8, #0x17]
    ldrb r1, [r1, r4]
    cmp r1, r0
    cmpne r0, #0
    addeq sp, sp, #0x64
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r8, #0x10]
    mov r0, r1, lsr #0x16
    and r0, r0, #0xff
    sub r0, r0, #0x80
    cmp r0, #0xf
    addls pc, pc, r0, lsl #2
    b @L_021148c8
    dcd 0xea000245
    dcd 0xea000016
    dcd 0xea000036
    dcd 0xea00000b
    dcd 0xea000087
    dcd 0xea0000e1
    dcd 0xea00010c
    dcd 0xea000115
    dcd 0xea000153
    dcd 0xea000161
    dcd 0xea00018b
    dcd 0xea0000b0
    dcd 0xea0001dd
    dcd 0xea0001ff
    dcd 0xea00020d
    dcd 0xea00021f
    dcd 0xe0850084
    dcd 0xe3a03000
    dcd 0xe1c036bc
    dcd 0xe3540000
    dcd 0x0a000231
    dcd 0xe1a00005
    dcd 0xe2441001
    dcd 0xe2882010
    dcd 0xea00001e
    dcd 0xe5950008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000001
    dcd 0xe350000f
    dcd 0x1a000224
    dcd 0xe5d80014
    dcd 0xeb0072aa
    dcd 0xe1b06000
    dcd 0x0a000220
    dcd 0xe59600ec
    dcd 0xe3500000
    dcd 0x0a000005
    dcd 0xe5c07084
    dcd 0xe59610ec
    dcd 0xe2470001
    dcd 0xe5c17085
    dcd 0xe59610ec
    dcd 0xe1c108b6
    dcd 0xe1d614b2
    dcd 0xe0850084
    dcd 0xe3540000
    dcd 0xe1c016bc
    dcd 0x0a000212
    dcd 0xe1a00005
    dcd 0xe2441001
    dcd 0xe2882010
    dcd 0xe3a03000
    dcd 0xebffe5d0
    dcd 0xea00020c
    dcd 0xe5950008
    dcd 0xe59f983c
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000001
    dcd 0xe350000f
    dcd 0x1a000202
    dcd 0xe5d80014
    dcd 0xeb007288
    dcd 0xe1b06000
    dcd 0x0a0001fe
    dcd 0xe0850084
    dcd 0xe1d614b2
    dcd 0xe1d006bc
    dcd 0xe1500001
    dcd 0x0a00000b
    dcd 0xe59600ec
    dcd 0xe3500000
    dcd 0x0a000005
    dcd 0xe5c07084
    dcd 0xe59610ec
    dcd 0xe2470001
    dcd 0xe5c17085
    dcd 0xe59610ec
    dcd 0xe1c108b6
    dcd 0xe1d614b2
    dcd 0xe0850084
    dcd 0xe1c016bc
    dcd 0xe5980010
    dcd 0xe00905a0
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc38d5
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3bb4
    dcd 0xea000002
    dcd 0xebfc38d0
    dcd 0xe3a0143f
    dcd 0xebfc3c3c
    dcd 0xe1a07000
    dcd 0xe5980010
    dcd 0xe0000009
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc38c6
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3ba5
    dcd 0xea000002
    dcd 0xebfc38c1
    dcd 0xe3a0143f
    dcd 0xebfc3c2d
    dcd 0xebfc3a68
    dcd 0xe1a09000
    dcd 0xe1a00007
    dcd 0xebfc3a65
    dcd 0xe1a02000
    dcd 0xe1a00006
    dcd 0xe1a01009
    dcd 0xebffe472
    dcd 0xe1a07000
    dcd 0xe59f0730
    dcd 0xe1a01006
    dcd 0xebfd3ba0
    dcd 0xe3540000
    dcd 0x13570000
    dcd 0x0a0001c1
    dcd 0xe59610ec
    dcd 0xe1a00005
    dcd 0xe5d13085
    dcd 0xe2441001
    dcd 0xe2882010
    dcd 0xe2433001
    dcd 0xe20330ff
    dcd 0xeaffff8a
    dcd 0xe5950008
    dcd 0xe3a06001
    dcd 0xe3500004
    dcd 0xe59fa6e8
    dcd 0x1a0001b4
    dcd 0xe001000a
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc389d
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3b7c
    dcd 0xea000002
    dcd 0xebfc3898
    dcd 0xe3a0143f
    dcd 0xebfc3c04
    dcd 0xebfc3a3f
    dcd 0xe5981010
    dcd 0xe00a15a1
    dcd 0xe2411b01
    dcd 0xe1a0a000
    dcd 0xe3510000
    dcd 0xe1a00601
    dcd 0xda000004
    dcd 0xebfc388d
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3b6c
    dcd 0xea000002
    dcd 0xebfc3888
    dcd 0xe3a0143f
    dcd 0xebfc3bf4
    dcd 0xebfc3a2f
    dcd 0xe5d81016
    dcd 0xe1a02000
    dcd 0xe3510013
    dcd 0x059f066c
    dcd 0xe1a0100a
    dcd 0x07c06009
    dcd 0x159f0660
    dcd 0x17c07009
    dcd 0xe1a00005
    dcd 0xebffca45
    dcd 0xe3540000
    dcd 0x0a00018a
    dcd 0xeaffff76
    dcd 0xe59f0638
    dcd 0xe59f6630
    dcd 0xebfd5f3e
    dcd 0xe3500000
    dcd 0x1a000184
    dcd 0xe5980010
    dcd 0xe0000006
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc386c
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3b4b
    dcd 0xea000002
    dcd 0xebfc3867
    dcd 0xe3a0143f
    dcd 0xebfc3bd3
    dcd 0xebfc3a0e
    dcd 0xe5981010
    dcd 0xe1a0a000
    dcd 0xe00615a1
    dcd 0xe2411b01
    dcd 0xe3510000
    dcd 0xe1a00601
    dcd 0xda000004
    dcd 0xebfc385c
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3b3b
    dcd 0xea000002
    dcd 0xebfc3857
    dcd 0xe3a0143f
    dcd 0xebfc3bc3
    dcd 0xebfc39fe
    dcd 0xe1a02000
    dcd 0xe1a00005
    dcd 0xe1a0100a
    dcd 0xebffd62a
    dcd 0xe3540000
    dcd 0x0a00015f
    dcd 0xeaffff4b
    dcd 0xe59f058c
    dcd 0xe59f6584
    dcd 0xebfd5f13
    dcd 0xe3500000
    dcd 0x1a000159
    dcd 0xe5980010
    dcd 0xe0000006
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3841
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3b20
    dcd 0xea000002
    dcd 0xebfc383c
    dcd 0xe3a0143f
    dcd 0xebfc3ba8
    dcd 0xebfc39e3
    dcd 0xe5981010
    dcd 0xe1a0a000
    dcd 0xe00615a1
    dcd 0xe2411b01
    dcd 0xe3510000
    dcd 0xe1a00601
    dcd 0xda000004
    dcd 0xebfc3831
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3b10
    dcd 0xea000002
    dcd 0xebfc382c
    dcd 0xe3a0143f
    dcd 0xebfc3b98
    dcd 0xebfc39d3
    dcd 0xe1a03000
    dcd 0xe1a00005
    dcd 0xe1a01009
    dcd 0xe1a0200a
    dcd 0xebffda2b
    dcd 0xe3540000
    dcd 0x0a000133
    dcd 0xeaffff1f
    dcd 0xe59f04dc
    dcd 0xebfd5ee8
    dcd 0xe3500000
    dcd 0x1a00012e
    dcd 0xe1a00005
    dcd 0xe1a01009
    dcd 0xebffda15
    dcd 0xe3540000
    dcd 0x0a000129
    dcd 0xeaffff15
    dcd 0xe5950008
    dcd 0xe3a0a001
    dcd 0xe3500004
    dcd 0x1a000124
    dcd 0xe59f04a4
    dcd 0xeb019db3
    dcd 0xe3500000
    dcd 0x0a000120
    dcd 0xe5d80016
    dcd 0xe3500013
    dcd 0x059f0498
    dcd 0x07c0a009
    dcd 0x159f0490
    dcd 0x17c07009
    dcd 0xe5980010
    dcd 0xe0000006
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3802
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3ae1
    dcd 0xea000002
    dcd 0xebfc37fd
    dcd 0xe3a0143f
    dcd 0xebfc3b69
    dcd 0xebfc39a4
    dcd 0xe5981010
    dcd 0xe1a0a000
    dcd 0xe00615a1
    dcd 0xe2411b01
    dcd 0xe3510000
    dcd 0xe1a00601
    dcd 0xda000004
    dcd 0xebfc37f2
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3ad1
    dcd 0xea000002
    dcd 0xebfc37ed
    dcd 0xe3a0143f
    dcd 0xebfc3b59
    dcd 0xebfc3994
    dcd 0xe1a07000
    dcd 0xe59f03fc
    dcd 0xe1a01004
    dcd 0xe1a0200a
    dcd 0xe1a03007
    dcd 0xeb00b225
    dcd 0xe3540000
    dcd 0x0a000000
    dcd 0xeafffedf
    dcd 0xe3a06000
    dcd 0xe1a00005
    dcd 0xe1a01009
    dcd 0xe1a0200a
    dcd 0xe1a03007
    dcd 0xe58d6000
    dcd 0xebffc8fc
    dcd 0xe5856044
    dcd 0xea0000e9
    dcd 0xe5950008
    dcd 0xe3500004
    dcd 0x1a0000e6
    dcd 0xe1a0000a
    dcd 0xebfd5e9c
    dcd 0xe3500000
    dcd 0x1a0000e2
    dcd 0xe5d80014
    dcd 0xeb007168
    dcd 0xe3500000
    dcd 0x0a0000de
    dcd 0xe1d01ff4
    dcd 0xe1a0000a
    dcd 0xebfd5dc5
    dcd 0xea0000da
    dcd 0xe5950008
    dcd 0xe350000b
    dcd 0x1a0000d7
    dcd 0xe1a00005
    dcd 0xe1a01004
    dcd 0xebffd914
    dcd 0xe3500000
    dcd 0x15d8a015
    dcd 0x135a0032
    dcd 0x135a0000
    dcd 0x0a000008
    dcd 0xe28d6044
    dcd 0xe1a00009
    dcd 0xe1a01006
    dcd 0xebffd8d4
    dcd 0xe24a0001
    dcd 0xe7962100
    dcd 0xe59f0348
    dcd 0xe1a01089
    dcd 0xe18020b1
    dcd 0xe3540000
    dcd 0x0a000005
    dcd 0xe1a00005
    dcd 0xe2441001
    dcd 0xe2882010
    dcd 0xe3a03000
    dcd 0xebffe482
    dcd 0xea000006
    dcd 0xe1c577b6
    dcd 0xe5d80015
    dcd 0xe3500032
    dcd 0x0a000002
    dcd 0xe1a00005
    dcd 0xe3a0100d
    dcd 0xebffabea
    dcd 0xe285001d
    dcd 0xe58d0000
    dcd 0xe5d81015
    dcd 0xe595200c
    dcd 0xe59f32f4
    dcd 0xe1a00004
    dcd 0xebffe34d
    dcd 0xea0000af
    dcd 0xe5950008
    dcd 0xe350000d
    dcd 0x13500011
    dcd 0x0a000001
    dcd 0xe3500013
    dcd 0x1a0000a9
    dcd 0xe5d8001f
    dcd 0xe1a00240
    dcd 0xe2000007
    dcd 0xe3500003
    dcd 0x1a00002b
    dcd 0xe59f02bc
    dcd 0xe5900000
    dcd 0xeb007129
    dcd 0xe3500000
    dcd 0x0a00003a
    dcd 0xebfdb165
    dcd 0xe1540000
    dcd 0x1a000037
    dcd 0xe5d86015
    dcd 0xe3560032
    dcd 0x0a000034
    dcd 0xe356006e
    dcd 0x1a00000b
    dcd 0xe59f0270
    dcd 0xeb00bc37
    dcd 0xe5d02022
    dcd 0xe1a01e02
    dcd 0xe1a01e21
    dcd 0xe3811002
    dcd 0xe20110ff
    dcd 0xe3c2200f
    dcd 0xe201100f
    dcd 0xe1821001
    dcd 0xe5c01022
    dcd 0xea000026
    dcd 0xe59f0240
    dcd 0xeb00bc2b
    dcd 0xe5d02022
    dcd 0xe28d9024
    dcd 0xe1a01e02
    dcd 0xe1a01e21
    dcd 0xe3c11002
    dcd 0xe20110ff
    dcd 0xe3c2200f
    dcd 0xe201100f
    dcd 0xe1821001
    dcd 0xe5c01022
    dcd 0xe1a00009
    dcd 0xebffd9d2
    dcd 0xe2460001
    dcd 0xe7991100
    dcd 0xe59f0210
    dcd 0xe1c010b4
    dcd 0xea000013
    dcd 0xe1a00005
    dcd 0xe1a01004
    dcd 0xebffd8b5
    dcd 0xe3500000
    dcd 0x15d8a015
    dcd 0x135a0032
    dcd 0x135a0000
    dcd 0x0a00000b
    dcd 0xe28d6004
    dcd 0xe1a00009
    dcd 0xe1a01006
    dcd 0xebffd434
    dcd 0xe24a0001
    dcd 0xe7962100
    dcd 0xe59f01cc
    dcd 0xe1a01089
    dcd 0xe18020b1
    dcd 0xe5d81016
    dcd 0xe0850009
    dcd 0xe5c0142e
    dcd 0xe3540000
    dcd 0x01c577b6
    dcd 0x0a000004
    dcd 0xe1a00005
    dcd 0xe2441001
    dcd 0xe2882010
    dcd 0xe3a03000
    dcd 0xebffe41f
    dcd 0xeaffffa3
    dcd 0xe5950008
    dcd 0xe350000f
    dcd 0x1a000058
    dcd 0xe1a00005
    dcd 0xe1a01004
    dcd 0xebffd895
    dcd 0xe3500000
    dcd 0x15d80015
    dcd 0x13500032
    dcd 0x0a000008
    dcd 0xe59f2174
    dcd 0xe3500064
    dcd 0x159f2170
    dcd 0xe59f015c
    dcd 0xe1a01089
    dcd 0xe18020b1
    dcd 0xe5d81016
    dcd 0xe59f0160
    dcd 0xe7801109
    dcd 0xe3540000
    dcd 0x0a000005
    dcd 0xe1a00005
    dcd 0xe2441001
    dcd 0xe2882010
    dcd 0xe3a03000
    dcd 0xebffe404
    dcd 0xea000006
    dcd 0xe1c577b6
    dcd 0xe5d80015
    dcd 0xe3500032
    dcd 0x0a000002
    dcd 0xe1a00005
    dcd 0xe3a01035
    dcd 0xebffab6c
    dcd 0xeaffff80
    dcd 0xe59f00f4
    dcd 0xebfd593e
    dcd 0xe3500000
    dcd 0x1a000034
    dcd 0xe1a00005
    dcd 0xebffb0d1
    dcd 0xe3500000
    dcd 0x0a000030
    dcd 0xe5952008
    dcd 0xe1a00005
    dcd 0xe3a0101e
    dcd 0xe5852430
    dcd 0xe5859434
    dcd 0xe5c54438
    dcd 0xea000010
    dcd 0xe5950008
    dcd 0xe3a01001
    dcd 0xe3500004
    dcd 0x1a000025
    dcd 0xe59f00d0
    dcd 0xe5d0005a
    dcd 0xe3500000
    dcd 0x11a00001
    dcd 0x03a00000
    dcd 0xe3500000
    dcd 0x1a00001e
    dcd 0xe3540000
    dcd 0x15c5704c
    dcd 0x05c5104c
    dcd 0xe1a00005
    dcd 0xe3a01032
    dcd 0xe1c544be
    dcd 0xebffacaf
    dcd 0xea000016
    dcd 0xe5950008
    dcd 0xe350003d
    dcd 0x0a000001
    dcd 0xe350003c
    dcd 0x1a000011
    dcd 0xe3540000
    dcd 0x01c577b6
    dcd 0x0a00000e
    dcd 0xe5d80015
    dcd 0xe3500015
    dcd 0x1a000002
    dcd 0xe1a00005
    dcd 0xe3a0103c
    dcd 0xeaffffef
    dcd 0xe3500016
    dcd 0x1a000002
    dcd 0xe1a00005
    dcd 0xe3a0103e
    dcd 0xeaffffea
    dcd 0xe3500017
    dcd 0x1a000001
    dcd 0xe59f0018
    dcd 0xebfd5daf
@L_021148c8:
    ldrb r1, [r8, #0x17]
    ldr r0, [pc, #0x14]
    strb r1, [r0, r4]
    add sp, sp, #0x64
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    dcd 0x000007ff
    dcd data_020e88a0
    dcd gGameState
    dcd data_ov001_02130658
    dcd data_020fa1a5
    dcd data_ov001_02130668
    dcd data_ov001_02130650
    dcd data_ov001_0213065c
    dcd 0x000001f6
    dcd 0x000001f9
    dcd data_ov001_02130670
    dcd data_020c4920
}

extern "C" asm void func_ov001_0211490c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r5, r1
    mov r7, r2
    mov r9, r0
    mov r0, r5
    mov r1, r7
    ldr r4, [pc, #0x724]
    bl func_ov015_02131754
    add r6, r0, #4
    bl func_ov015_021319bc
    mov r10, r0
    mov r0, r5
    mov r1, r7
    bl func_ov015_02131754
    ldr r1, [pc, #0x708]
    ldrb r0, [r0, #2]
    ldrb r1, [r1, #2]
    cmp r1, r0
    addne sp, sp, #0x10
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0
    bne @L_021149ac
    mov r0, r4
    bl func_0209bf8c
    mov r5, r0
    mov r0, r4
    bl func_0209bf8c
    sub r0, r0, #1
    add r0, r6, r0
    ldrb r1, [r0, #0x14]
    and r0, r1, #0xf0
    mov r0, r0, asr #4
    and r1, r1, #0xf
    and r0, r0, #0xff
    ands r11, r1, #0xff
    str r0, [sp, #4]
    bne @L_021149e8
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021149ac:
    ldrb r1, [r6, #0x13]
    add r0, r9, r5, lsl #7
    ldr r2, [r6, #0xc]
    add r1, r0, r1, lsl #3
    str r2, [r1, #0x208]
    ldrb r0, [r6, #0x10]
    add sp, sp, #0x10
    strb r0, [r1, #0x20c]
    ldrb r0, [r6, #0x11]
    strb r0, [r1, #0x20d]
    ldrb r0, [r6, #0x12]
    strb r0, [r1, #0x20e]
    ldrb r0, [r6, #0x13]
    strb r0, [r1, #0x20f]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021149e8:
    ldr r0, [pc, #0x66c]
    ldrb r0, [r0, r5]
    cmp r0, r11
    addeq sp, sp, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r8, #3
    b @L_0211503c
@L_02114a04:
    ldr r0, [sp, #4]
    mov r1, #1
    tst r0, r1, lsl r8
    beq @L_02115038
    mov r4, r11
    mov r2, #0
    mov r0, #0xf
    b @L_02114a34
@L_02114a24:
    sub r1, r4, #1
    ands r4, r1, #0xff
    moveq r4, r0
    add r2, r2, #1
@L_02114a34:
    cmp r2, r8
    blt @L_02114a24
    ldr r0, [pc, #0x610]
    bl func_0209bf8c
    add r1, r9, #0x208
    add r0, r1, r0, lsl #7
    ldr r1, [r0, r4, lsl #3]
    add r7, r0, r4, lsl #3
    mov r0, r1, lsr #0x16
    and r0, r0, #0xff
    sub r0, r0, #0x80
    cmp r0, #0xf
    addls pc, pc, r0, lsl #2
    b @L_02115028
    dcd 0xea00016d
    dcd 0xea000011
    dcd 0xea00002a
    dcd 0xea00000b
    dcd 0xea00007e
    dcd 0xea0000eb
    dcd 0xea000121
    dcd 0xea000128
    dcd 0xea000165
    dcd 0xea000158
    dcd 0xea000157
    dcd 0xea0000af
    dcd 0xea000155
    dcd 0xea000160
    dcd 0xea00015f
    dcd 0xea00015c
    dcd 0xe0890085
    dcd 0xe3a01000
    dcd 0xe1c016bc
    dcd 0xea00015a
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000001
    dcd 0xe350000f
    dcd 0x1a000151
    dcd 0xe5d70004
    dcd 0xeb006fff
    dcd 0xe3500000
    dcd 0x11d024b2
    dcd 0x10891085
    dcd 0x11c126bc
    dcd 0x159010ec
    dcd 0x13510000
    dcd 0x0a000148
    dcd 0xe3a03000
    dcd 0xe5c13084
    dcd 0xe59020ec
    dcd 0xe2431001
    dcd 0xe5c23085
    dcd 0xe59000ec
    dcd 0xe1c018b6
    dcd 0xea000140
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000001
    dcd 0xe350000f
    dcd 0x1a000137
    dcd 0xe5d70004
    dcd 0xeb006fe5
    dcd 0xe1b06000
    dcd 0x0a000133
    dcd 0xe0890085
    dcd 0xe1d614b2
    dcd 0xe1d006bc
    dcd 0xe1500001
    dcd 0x0a00000c
    dcd 0xe59600ec
    dcd 0xe3500000
    dcd 0x0a000006
    dcd 0xe3a02000
    dcd 0xe5c02084
    dcd 0xe59610ec
    dcd 0xe2420001
    dcd 0xe5c12085
    dcd 0xe59610ec
    dcd 0xe1c108b6
    dcd 0xe1d614b2
    dcd 0xe0890085
    dcd 0xe1c016bc
    dcd 0xe5971000
    dcd 0xe59f04b4
    dcd 0xe0010000
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3630
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc390f
    dcd 0xea000002
    dcd 0xebfc362b
    dcd 0xe3a0143f
    dcd 0xebfc3997
    dcd 0xebfc37d2
    dcd 0xe58d000c
    dcd 0xe5971000
    dcd 0xe59f0470
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc361f
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc38fe
    dcd 0xea000002
    dcd 0xebfc361a
    dcd 0xe3a0143f
    dcd 0xebfc3986
    dcd 0xebfc37c1
    dcd 0xe58d0008
    dcd 0xe3a00000
    dcd 0xeb007372
    dcd 0xe1a04000
    dcd 0xe59f0418
    dcd 0xebfe1cd3
    dcd 0xeb00736e
    dcd 0xe1540000
    dcd 0x0a000002
    dcd 0xe28d000c
    dcd 0xe28d1008
    dcd 0xeb0071d0
    dcd 0xe59610ec
    dcd 0xe5d10085
    dcd 0xe350000a
    dcd 0x23a00009
    dcd 0x25c10085
    dcd 0xe59d100c
    dcd 0xe59d2008
    dcd 0xe1a00006
    dcd 0xebffe1bd
    dcd 0xea0000ea
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1a0000e7
    dcd 0xe59f03d0
    dcd 0xe0010000
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc35f7
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc38d6
    dcd 0xea000002
    dcd 0xebfc35f2
    dcd 0xe3a0143f
    dcd 0xebfc395e
    dcd 0xebfc3799
    dcd 0xe58d000c
    dcd 0xe5971000
    dcd 0xe59f038c
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc35e6
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc38c5
    dcd 0xea000002
    dcd 0xebfc35e1
    dcd 0xe3a0143f
    dcd 0xebfc394d
    dcd 0xebfc3788
    dcd 0xe58d0008
    dcd 0xe3a00000
    dcd 0xeb007339
    dcd 0xe1a04000
    dcd 0xe59f0334
    dcd 0xebfe1c9a
    dcd 0xeb007335
    dcd 0xe1540000
    dcd 0x0a000002
    dcd 0xe28d000c
    dcd 0xe28d1008
    dcd 0xeb007197
    dcd 0xe3a04000
    dcd 0xe58d4000
    dcd 0xe59d200c
    dcd 0xe59d3008
    dcd 0xe1a00009
    dcd 0xe1a0100a
    dcd 0xebffc6ed
    dcd 0xe5894044
    dcd 0xea0000b2
    dcd 0xe59f0300
    dcd 0xe59f42f8
    dcd 0xebfd5c8f
    dcd 0xe3500000
    dcd 0x1a0000ad
    dcd 0xe5970000
    dcd 0xe0000004
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc35bd
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc389c
    dcd 0xea000002
    dcd 0xebfc35b8
    dcd 0xe3a0143f
    dcd 0xebfc3924
    dcd 0xebfc375f
    dcd 0xe58d000c
    dcd 0xe5971000
    dcd 0xe59f02a4
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc35ac
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc388b
    dcd 0xea000002
    dcd 0xebfc35a7
    dcd 0xe3a0143f
    dcd 0xebfc3913
    dcd 0xebfc374e
    dcd 0xe58d0008
    dcd 0xe3a00000
    dcd 0xeb0072ff
    dcd 0xe1a04000
    dcd 0xe59f024c
    dcd 0xebfe1c60
    dcd 0xeb0072fb
    dcd 0xe1540000
    dcd 0x0a000002
    dcd 0xe28d000c
    dcd 0xe28d1008
    dcd 0xeb00715d
    dcd 0xe59d100c
    dcd 0xe59d2008
    dcd 0xe1a00009
    dcd 0xebffd36e
    dcd 0xea00007c
    dcd 0xe59f0228
    dcd 0xe59f4220
    dcd 0xebfd5c59
    dcd 0xe3500000
    dcd 0x1a000077
    dcd 0xe5970000
    dcd 0xe0000004
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3587
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3866
    dcd 0xea000002
    dcd 0xebfc3582
    dcd 0xe3a0143f
    dcd 0xebfc38ee
    dcd 0xebfc3729
    dcd 0xe58d000c
    dcd 0xe5971000
    dcd 0xe59f01cc
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3576
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3855
    dcd 0xea000002
    dcd 0xebfc3571
    dcd 0xe3a0143f
    dcd 0xebfc38dd
    dcd 0xebfc3718
    dcd 0xe58d0008
    dcd 0xe3a00000
    dcd 0xeb0072c9
    dcd 0xe1a04000
    dcd 0xe59f0174
    dcd 0xebfe1c2a
    dcd 0xeb0072c5
    dcd 0xe1540000
    dcd 0x0a000002
    dcd 0xe28d000c
    dcd 0xe28d1008
    dcd 0xeb007127
    dcd 0xe59d200c
    dcd 0xe59d3008
    dcd 0xe1a00009
    dcd 0xe1a0100a
    dcd 0xebffd764
    dcd 0xea000045
    dcd 0xe59f014c
    dcd 0xebfd5c23
    dcd 0xe3500000
    dcd 0x1a000041
    dcd 0xe1a00009
    dcd 0xe1a0100a
    dcd 0xebffd750
    dcd 0xea00003d
    dcd 0xe5990008
    dcd 0xe59f4124
    dcd 0xe3500004
    dcd 0x1a000039
    dcd 0xe59f011c
    dcd 0xebfd5c17
    dcd 0xe3500000
    dcd 0x1a000035
    dcd 0xe5970000
    dcd 0xe0000004
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3545
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3824
    dcd 0xea000002
    dcd 0xebfc3540
    dcd 0xe3a0143f
    dcd 0xebfc38ac
    dcd 0xebfc36e7
    dcd 0xe58d000c
    dcd 0xe5971000
    dcd 0xe59f00c4
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3534
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3813
    dcd 0xea000002
    dcd 0xebfc352f
    dcd 0xe3a0143f
    dcd 0xebfc389b
    dcd 0xe3a04000
    dcd 0xebfc36d5
    dcd 0xe58d0008
    dcd 0xe1a00004
    dcd 0xeb007286
    dcd 0xe15a0000
    dcd 0x0a000002
    dcd 0xe28d000c
    dcd 0xe28d1008
    dcd 0xeb0070e8
    dcd 0xeaffff50
    dcd 0xe3a00000
    dcd 0xe1c907b6
    dcd 0xe289001d
    dcd 0xe58d0000
    dcd 0xe5d71005
    dcd 0xe599200c
    dcd 0xe59f3050
    dcd 0xe1a00005
    dcd 0xebffe0c7
    dcd 0xea000001
    dcd 0xe3a00000
    dcd 0xe1c907b6
@L_02115028:
    ldr r0, [r7]
    bic r0, r0, #0x3fc00000
    orr r0, r0, #0x20000000
    str r0, [r7]
@L_02115038:
    sub r8, r8, #1
@L_0211503c:
    cmp r8, #0
    bge @L_02114a04
    ldr r0, [pc, #0x10]
    strb r11, [r0, r5]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd data_020c5320
    dcd data_020c4b80
    dcd data_ov001_02130658
    dcd 0x000007ff
    dcd data_020e88a0
    dcd data_ov001_02130650
}

extern "C" asm void func_ov001_0211506c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r9, r0
    mov r4, r1
    mov r1, #3
    ldr r0, [pc, #0x920]
    str r1, [sp, #8]
    bl func_0209bf9c
    str r0, [sp, #0x10]
    mov r0, #0
    mov r1, r4
    bl func_ov015_02131754
    ldr r1, [pc, #0x908]
    ldrb r0, [r0, #2]
    ldrb r1, [r1, #2]
    cmp r1, r0
    addne sp, sp, #0x3c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0
    mov r1, r4
    bl func_ov015_02131754
    add r0, r0, #4
    str r0, [sp, #0xc]
    b @L_02115578
@L_021150cc:
    ldr r2, [sp, #0x10]
    ldr r0, [sp, #8]
    mov r1, #1
    tst r2, r1, lsl r0
    beq @L_0211556c
    ldr r0, [pc, #0x8c0]
    bl func_0209bf8c
    ldr r1, [sp, #8]
    cmp r1, r0
    beq @L_0211556c
    mov r0, r1
    sub r1, r0, #1
    ldr r0, [sp, #0xc]
    add r0, r0, r1
    ldrb r1, [r0, #0x14]
    ldr r0, [sp, #8]
    and r2, r1, #0xf0
    and r1, r1, #0xf
    str r1, [sp, #0x14]
    mov r1, r2, asr #4
    and r1, r1, #0xff
    str r1, [sp, #4]
    bl func_ov015_021319fc
    mov r11, r0
    ldr r2, [pc, #0x87c]
    ldr r0, [sp, #8]
    ldrb r1, [r2, r0]
    ldr r0, [sp, #0x14]
    cmp r1, r0
    beq @L_0211556c
    mov r1, r0
    ldr r0, [sp, #8]
    mov r8, #3
    strb r1, [r2, r0]
    mvn r0, #0
    str r0, [sp, #0x20]
    ldr r0, [sp, #8]
    add r1, r9, #0x208
    add r5, r9, r0, lsl #1
    add r0, r1, r0, lsl #7
    str r0, [sp, #0x18]
    add r0, r9, #0x1d
    str r0, [sp, #0x1c]
    ldr r0, [sp, #0x20]
    mov r10, #0xf
    add r0, r0, #0x800
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x20]
    add r0, r0, #0x800
    str r0, [sp, #0x28]
    ldr r0, [sp, #0x20]
    add r0, r0, #0x800
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0x20]
    add r0, r0, #0x800
    str r0, [sp, #0x30]
    b @L_02115564
@L_021151b0:
    ldr r1, [sp, #4]
    mov r0, #1
    tst r1, r0, lsl r8
    beq @L_02115560
    ldr r1, [sp, #0x14]
    mov r2, #0
    b @L_021151dc
@L_021151cc:
    sub r0, r1, #1
    ands r1, r0, #0xff
    moveq r1, r10
    add r2, r2, #1
@L_021151dc:
    cmp r2, r8
    blt @L_021151cc
    ldr r0, [sp, #0x18]
    add r7, r0, r1, lsl #3
    ldr r0, [r0, r1, lsl #3]
    mov r0, r0, lsr #0x16
    and r0, r0, #0xff
    sub r0, r0, #0x80
    cmp r0, #0xc
    addls pc, pc, r0, lsl #2
    b @L_02115550
    dcd 0xea0000d0
    dcd 0xea000015
    dcd 0xea00002d
    dcd 0xea000010
    dcd 0xea00007a
    dcd 0xea000079
    dcd 0xea0000c3
    dcd 0xea000077
    dcd 0xea0000c8
    dcd 0xea000002
    dcd 0xea000001
    dcd 0xea000073
    dcd 0xeaffffff
    dcd 0xe59d001c
    dcd 0xe59f376c
    dcd 0xe58d0000
    dcd 0xe5d71005
    dcd 0xe59d0008
    dcd 0xe599200c
    dcd 0xebffe038
    dcd 0xea0000bc
    dcd 0xe3a00000
    dcd 0xe1c506bc
    dcd 0xea0000b9
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000001
    dcd 0xe350000f
    dcd 0x1a0000b0
    dcd 0xe5d70004
    dcd 0xeb006e14
    dcd 0xe3500000
    dcd 0x11d014b2
    dcd 0x11c516bc
    dcd 0x159020ec
    dcd 0x13520000
    dcd 0x0a0000a8
    dcd 0xe3a01000
    dcd 0xe5c21084
    dcd 0xe59020ec
    dcd 0xe5c21085
    dcd 0xe59010ec
    dcd 0xe59d0020
    dcd 0xe1c108b6
    dcd 0xea0000a0
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000001
    dcd 0xe350000f
    dcd 0x1a000097
    dcd 0xe5d70004
    dcd 0xeb006dfb
    dcd 0xe1b06000
    dcd 0x0a000093
    dcd 0xe1d614b2
    dcd 0xe1d506bc
    dcd 0xe1500001
    dcd 0x0a00000b
    dcd 0xe59610ec
    dcd 0xe3510000
    dcd 0x0a000006
    dcd 0xe3a00000
    dcd 0xe5c10084
    dcd 0xe59610ec
    dcd 0xe5c10085
    dcd 0xe59610ec
    dcd 0xe59d0020
    dcd 0xe1c108b6
    dcd 0xe1d604b2
    dcd 0xe1c506bc
    dcd 0xe5971000
    dcd 0xe59d0024
    dcd 0xe0010000
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3448
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3727
    dcd 0xea000002
    dcd 0xebfc3443
    dcd 0xe3a0143f
    dcd 0xebfc37af
    dcd 0xebfc35ea
    dcd 0xe58d0038
    dcd 0xe5971000
    dcd 0xe59d0028
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3437
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3716
    dcd 0xea000002
    dcd 0xebfc3432
    dcd 0xe3a0143f
    dcd 0xebfc379e
    dcd 0xebfc35d9
    dcd 0xe58d0034
    dcd 0xe3a00000
    dcd 0xeb00718a
    dcd 0xe1a04000
    dcd 0xe59f05cc
    dcd 0xebfe1aeb
    dcd 0xeb007186
    dcd 0xe1540000
    dcd 0x0a000002
    dcd 0xe28d0038
    dcd 0xe28d1034
    dcd 0xeb006fe8
    dcd 0xe1a00006
    dcd 0xe59d1038
    dcd 0xe59d2034
    dcd 0xebffdfda
    dcd 0xea000051
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000001
    dcd 0xe350000f
    dcd 0x1a000048
    dcd 0xeb007162
    dcd 0xe15b0000
    dcd 0x1a000045
    dcd 0xe5971000
    dcd 0xe59d002c
    dcd 0xe0010000
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc340a
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc36e9
    dcd 0xea000002
    dcd 0xebfc3405
    dcd 0xe3a0143f
    dcd 0xebfc3771
    dcd 0xebfc35ac
    dcd 0xe58d0038
    dcd 0xe5971000
    dcd 0xe59d0030
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc33f9
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc36d8
    dcd 0xea000002
    dcd 0xebfc33f4
    dcd 0xe3a0143f
    dcd 0xebfc3760
    dcd 0xebfc359b
    dcd 0xe58d0034
    dcd 0xe3a00000
    dcd 0xeb00714c
    dcd 0xe1a04000
    dcd 0xe59f04d4
    dcd 0xebfe1aad
    dcd 0xeb007148
    dcd 0xe1540000
    dcd 0x0a000002
    dcd 0xe28d0038
    dcd 0xe28d1034
    dcd 0xeb006faa
    dcd 0xe5970000
    dcd 0xe3a01001
    dcd 0xe1a00b20
    dcd 0xe20000ff
    dcd 0xe2400080
    dcd 0xe350000b
    dcd 0x13500007
    dcd 0x13a01000
    dcd 0xe3510000
    dcd 0xe3a00001
    dcd 0x03a00000
    dcd 0xe58d0000
    dcd 0xe59d2038
    dcd 0xe59d3034
    dcd 0xe1a00009
    dcd 0xe1a0100b
    dcd 0xebffc4f6
    dcd 0xea000006
    dcd 0xe59f047c
    dcd 0xebfd5a9a
    dcd 0xe3500000
    dcd 0x1a000002
    dcd 0xe1a00009
    dcd 0xe1a0100b
    dcd 0xebffd5c7
@L_02115550:
    ldr r0, [r7]
    bic r0, r0, #0x3fc00000
    orr r0, r0, #0x20000000
    str r0, [r7]
@L_02115560:
    sub r8, r8, #1
@L_02115564:
    cmp r8, #0
    bge @L_021151b0
@L_0211556c:
    ldr r0, [sp, #8]
    sub r0, r0, #1
    str r0, [sp, #8]
@L_02115578:
    ldr r0, [sp, #8]
    cmp r0, #0
    bgt @L_021150cc
    ldr r1, [sp, #0xc]
    mov r0, #0
    ldrb r1, [r1, #0x13]
    str r1, [sp, #0x14]
    bl func_ov015_021319fc
    mov r4, r0
    ldr r2, [pc, #0x40c]
    mov r0, #0
    ldrb r1, [r2, r0]
    ldr r0, [sp, #0x14]
    cmp r1, r0
    addeq sp, sp, #0x3c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r0
    mov r0, #0
    strb r1, [r2, r0]
    ldr r0, [sp, #0xc]
    ldr r0, [r0, #0xc]
    mov r0, r0, lsr #0x16
    and r0, r0, #0xff
    sub r0, r0, #0x80
    cmp r0, #0xc
    addls pc, pc, r0, lsl #2
    b @L_021159a0
    dcd 0xea0000ed
    dcd 0xea00000f
    dcd 0xea00002f
    dcd 0xea000008
    dcd 0xea000090
    dcd 0xea00008f
    dcd 0xea0000df
    dcd 0xea00008d
    dcd 0xea0000e5
    dcd 0xea000081
    dcd 0xea000080
    dcd 0xea000089
    dcd 0xea00007e
    dcd 0xe3a00000
    dcd 0xe0891080
    dcd 0xe1c106bc
    dcd 0xe28dd03c
    dcd 0xe8bd8ff0
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000002
    dcd 0xe350000f
    dcd 0x128dd03c
    dcd 0x18bd8ff0
    dcd 0xe59d000c
    dcd 0xe5d00010
    dcd 0xeb006d21
    dcd 0xe3500000
    dcd 0x028dd03c
    dcd 0x08bd8ff0
    dcd 0xe1d024b2
    dcd 0xe3a01000
    dcd 0xe0891081
    dcd 0xe1c126bc
    dcd 0xe59020ec
    dcd 0xe3520000
    dcd 0x028dd03c
    dcd 0x08bd8ff0
    dcd 0xe3a01000
    dcd 0xe5c21084
    dcd 0xe59030ec
    dcd 0xe2412001
    dcd 0xe5c31085
    dcd 0xe59000ec
    dcd 0xe28dd03c
    dcd 0xe1c028b6
    dcd 0xe8bd8ff0
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000002
    dcd 0xe350000f
    dcd 0x128dd03c
    dcd 0x18bd8ff0
    dcd 0xe59d000c
    dcd 0xe5d00010
    dcd 0xeb006d00
    dcd 0xe1b06000
    dcd 0x028dd03c
    dcd 0x08bd8ff0
    dcd 0xe3a00000
    dcd 0xe0890080
    dcd 0xe1d614b2
    dcd 0xe1d006bc
    dcd 0xe1500001
    dcd 0x0a00000d
    dcd 0xe59610ec
    dcd 0xe3510000
    dcd 0x0a000006
    dcd 0xe3a00000
    dcd 0xe5c10084
    dcd 0xe59620ec
    dcd 0xe2401001
    dcd 0xe5c20085
    dcd 0xe59600ec
    dcd 0xe1c018b6
    dcd 0xe1d614b2
    dcd 0xe3a00000
    dcd 0xe0890080
    dcd 0xe1c016bc
    dcd 0xe59d000c
    dcd 0xe590100c
    dcd 0xe59f026c
    dcd 0xe0010000
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3347
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3626
    dcd 0xea000002
    dcd 0xebfc3342
    dcd 0xe3a0143f
    dcd 0xebfc36ae
    dcd 0xebfc34e9
    dcd 0xe58d0038
    dcd 0xe59d000c
    dcd 0xe590100c
    dcd 0xe59f0224
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc3335
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc3614
    dcd 0xea000002
    dcd 0xebfc3330
    dcd 0xe3a0143f
    dcd 0xebfc369c
    dcd 0xebfc34d7
    dcd 0xe58d0034
    dcd 0xe3a00000
    dcd 0xeb007088
    dcd 0xe1a04000
    dcd 0xe59f01c4
    dcd 0xebfe19e9
    dcd 0xeb007084
    dcd 0xe1540000
    dcd 0x0a000002
    dcd 0xe28d0038
    dcd 0xe28d1034
    dcd 0xeb006ee6
    dcd 0xe59d1038
    dcd 0xe59d2034
    dcd 0xe1a00006
    dcd 0xebffded8
    dcd 0xe28dd03c
    dcd 0xe8bd8ff0
    dcd 0xe289001d
    dcd 0xe58d0000
    dcd 0xe59d000c
    dcd 0xe599200c
    dcd 0xe5d01011
    dcd 0xe59f3184
    dcd 0xe3a00000
    dcd 0xebffdec1
    dcd 0xe28dd03c
    dcd 0xe8bd8ff0
    dcd 0xe5990008
    dcd 0xe3500004
    dcd 0x1350000b
    dcd 0x1350000d
    dcd 0x13500011
    dcd 0x13500013
    dcd 0x0a000002
    dcd 0xe350000f
    dcd 0x128dd03c
    dcd 0x18bd8ff0
    dcd 0xeb007054
    dcd 0xe1540000
    dcd 0x128dd03c
    dcd 0x18bd8ff0
    dcd 0xe59d000c
    dcd 0xe590100c
    dcd 0xe59f0138
    dcd 0xe0010000
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc32fa
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc35d9
    dcd 0xea000002
    dcd 0xebfc32f5
    dcd 0xe3a0143f
    dcd 0xebfc3661
    dcd 0xebfc349c
    dcd 0xe58d0038
    dcd 0xe59d000c
    dcd 0xe590100c
    dcd 0xe59f00f0
    dcd 0xe00005a1
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfc32e8
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfc35c7
    dcd 0xea000002
    dcd 0xebfc32e3
    dcd 0xe3a0143f
    dcd 0xebfc364f
    dcd 0xebfc348a
    dcd 0xe58d0034
    dcd 0xe3a00000
    dcd 0xeb00703b
    dcd 0xe1a05000
    dcd 0xe59f0090
    dcd 0xebfe199c
    dcd 0xeb007037
    dcd 0xe1550000
    dcd 0x0a000002
    dcd 0xe28d0038
    dcd 0xe28d1034
    dcd 0xeb006e99
    dcd 0xe59d000c
    dcd 0xe3a01001
    dcd 0xe590000c
    dcd 0xe1a00b20
    dcd 0xe20000ff
    dcd 0xe2400080
    dcd 0xe350000b
    dcd 0x13500007
    dcd 0x13a01000
    dcd 0xe3510000
    dcd 0xe3a00001
    dcd 0x03a00000
    dcd 0xe58d0000
    dcd 0xe59d2038
    dcd 0xe59d3034
    dcd 0xe1a00009
    dcd 0xe1a01004
    dcd 0xebffc3e4
    dcd 0xe28dd03c
    dcd 0xe8bd8ff0
    dcd 0xe59f0030
    dcd 0xebfd5987
    dcd 0xe3500000
    dcd 0x128dd03c
    dcd 0x18bd8ff0
    dcd 0xe1a00009
    dcd 0xe1a01004
    dcd 0xebffd4b3
@L_021159a0:
    add sp, sp, #0x3c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd data_020c5320
    dcd data_020c4b80
    dcd data_ov001_02130658
    dcd data_ov001_02130650
    dcd data_020e88a0
    dcd 0x000007ff
}
