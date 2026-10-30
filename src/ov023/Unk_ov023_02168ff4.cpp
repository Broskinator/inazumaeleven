#include "ov023/Unk_ov023_02168ff4.hpp"

extern "C" void func_ov023_02168ff4(void);
extern "C" void func_ov023_0216932c(void);
extern "C" void func_ov023_021698e8(void);
extern "C" void func_ov023_02169a90(void);
extern "C" void func_ov023_02169c60(void);
extern "C" void func_ov023_02169d4c(void);
extern "C" void func_ov023_02169dc8(void);
extern "C" s32 func_ov023_02169ec8(s32 arg0);
extern "C" s32 func_ov023_02169ef0(s32 arg0);

extern "C" char data_020c47a4[];
extern "C" char data_020c47b4[];
extern "C" char data_020c4814[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c5e40[];
extern "C" char data_020c9660[];
extern "C" char data_020cac1c[];
extern "C" void G2_GetBG1ScrPtr(void);
extern "C" void G2_GetBG2ScrPtr(void);
extern "C" void G2_GetBG3ScrPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void STD_CopyString(void);
extern "C" void STD_GetStringLength(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1ecEv(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" s32 _ZN8TextFontD1Ev(...);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003bb8(void);
extern "C" void func_02009380(void);
extern "C" void func_02016d0c(void);
extern "C" s32 func_0209e258(...);
extern "C" void func_0209e5cc(void);
extern "C" void func_ov015_0213257c(void);
extern "C" void func_ov015_02132c08(void);
extern "C" void func_ov015_02133e24(void);
extern "C" void func_ov015_02133e50(void);
extern "C" void func_ov015_02133e8c(void);
extern "C" void func_ov015_02134ccc(void);
extern "C" void func_ov015_021353a4(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213b478(void);
extern "C" void func_ov015_0213b540(void);
extern "C" void func_ov015_0213b990(void);
extern "C" void func_ov015_0213ba04(void);
extern "C" void func_ov015_0213be3c(void);
extern "C" void func_ov015_0213be90(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);
extern "C" void func_ov015_0213c4c0(void);
extern "C" void func_ov015_0213c4fc(void);
extern "C" void func_ov015_0213c730(void);
extern "C" void func_ov023_02165d60(void);
extern "C" void func_ov023_02165e18(void);
extern "C" void func_ov023_02165ea8(void);
extern "C" void func_ov023_02165ebc(void);
extern "C" void func_ov023_02165ee8(void);
extern "C" void func_ov023_02165f10(void);
extern "C" void func_ov023_021663a8(void);
extern "C" void func_ov023_02166684(void);
extern "C" void func_ov023_021666f4(void);
extern "C" void func_ov023_02166734(void);
extern "C" void func_ov023_021667d4(void);
extern "C" void func_ov023_0216686c(void);
extern "C" void func_ov023_021668cc(void);
extern "C" void func_ov023_02166a20(void);
extern "C" void func_ov023_02166c64(void);
extern "C" void func_ov023_02166e8c(void);
extern "C" void func_ov023_021670c0(void);
extern "C" void func_ov023_0216714c(void);
extern "C" void func_ov023_02167178(void);
extern "C" void func_ov023_0216720c(void);
extern "C" void func_ov023_02167724(void);
extern "C" void func_ov023_021679c0(void);
extern "C" void func_ov023_02167d04(void);
extern "C" void func_ov023_021680cc(void);

extern "C" asm void func_ov023_02168ff4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    movs r10, r1
    mov r9, r0
    movne r0, #0xc
    moveq r0, #5
    ldr r1, [r9, #0x258]
    mov r0, r0, lsl #0x10
    cmp r1, #0
    mov r8, r0, asr #0x10
    beq @L_02169100
    ldr r0, [r1, #0xc]
    mov r4, #0
    add r7, r1, r0
    mov r5, #0xa
    mov r0, #0x50
    mov r6, #0x13
    mov r11, #4
    strh r0, [sp, #0x20]
    mov r0, #0x20
    strh r0, [sp, #0x22]
    strh r8, [sp, #0x14]
    strh r6, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strb r4, [sp, #0x24]
    str r7, [sp, #0x28]
    mov r0, #2
    str r0, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, r5
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    cmp r10, #0
    bne @L_02169100
    mov r0, #0x11
    strh r0, [sp, #0x14]
    mov r0, #0x50
    add r1, r7, #0x50
    strh r0, [sp, #0x20]
    mov r0, #0x20
    strh r0, [sp, #0x22]
    str r1, [sp, #0x28]
    strh r6, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strb r4, [sp, #0x24]
    mov r0, #2
    str r0, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, #0xd
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
@L_02169100:
    ldr r1, [r9, #0x264]
    cmp r1, #0
    beq @L_02169210
    ldr r0, [r1, #0xc]
    mov r4, #0
    add r7, r1, r0
    mov r0, #0x50
    mov r6, #0x13
    mov r5, #0xa
    mov r11, #4
    strh r0, [sp, #0x20]
    mov r0, #0x20
    strh r0, [sp, #0x22]
    strh r8, [sp, #0x14]
    strh r6, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strb r4, [sp, #0x24]
    str r7, [sp, #0x28]
    mov r0, #2
    str r0, [sp]
    add r1, sp, #0x14
    stmib sp, {r1, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, #0xb
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r2, #0xb
    mov r1, r4
    bl func_ov015_0213b990
    cmp r10, #0
    bne @L_02169210
    mov r0, #0x11
    strh r0, [sp, #0x14]
    mov r0, #0x50
    add r1, r7, #0x50
    strh r0, [sp, #0x20]
    mov r0, #0x20
    strh r6, [sp, #0x16]
    strh r0, [sp, #0x22]
    str r1, [sp, #0x28]
    mov r6, #0xe
    strh r5, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strb r4, [sp, #0x24]
    mov r0, #2
    str r0, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, r6
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, r6
    bl func_ov015_0213b990
@L_02169210:
    ldr r1, [r9, #0x270]
    cmp r1, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    mov r4, #0
    add r9, r1, r0
    mov r7, #0x13
    mov r6, #0xa
    mov r5, #4
    mov r11, #0x50
    mov r0, #0x20
    strh r8, [sp, #0x14]
    strh r0, [sp, #0x22]
    strh r7, [sp, #0x16]
    strh r6, [sp, #0x18]
    strh r5, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r11, [sp, #0x20]
    strb r4, [sp, #0x24]
    str r9, [sp, #0x28]
    mov r8, #2
    str r8, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, #0xc
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r2, #0xc
    mov r1, r4
    bl func_ov015_0213b990
    cmp r10, #0
    addne sp, sp, #0x2c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0x11
    add r1, r9, #0x50
    strh r0, [sp, #0x14]
    mov r0, #0x20
    strh r7, [sp, #0x16]
    strh r0, [sp, #0x22]
    str r1, [sp, #0x28]
    mov r7, #0xf
    strh r6, [sp, #0x18]
    strh r5, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r11, [sp, #0x20]
    strb r4, [sp, #0x24]
    str r8, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, r7
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, r7
    bl func_ov015_0213b990
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov023_0216932c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r7, r0
    ldr r0, [r7, #0x34]
    ldr r9, =data_020c9660
    cmp r0, #4
    ldreqb r0, [r7, #0x40]
    mov r6, r1
    mov r10, #0xa
    mov r8, #0
    cmpeq r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r5, r8
    ldr r0, =data_020c9660
    mov r1, r5
    bl func_ov015_0213be90
    cmp r0, #0
    ldreq r1, [r7, #0x38]
    ldreq r0, [r7, #0x3c]
    cmpeq r1, r0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c4814
    cmp r1, #0
    ldrh r0, [r0]
    orr r0, r0, r6
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
    bne @L_02169660
    ldr r1, [r7, #0x70]
    mov r0, r7
    bl func_ov023_021666f4
    mov r8, r0
    tst r4, #0x80
    ldr r9, [r7, #0x70]
    beq @L_0216942c
    sub r0, r5, #1
    cmp r9, r0
    cmpne r8, #0
    beq @L_02169400
    ldrb r1, [r8, #0x11]
    mov r0, r7
    add r2, r7, #0x6c
    bl func_ov023_02166734
    ldrb r1, [r8, #0x11]
    mov r0, r7
    bl func_ov023_021667d4
    cmp r0, #5
    beq @L_021693f8
    cmp r0, #6
    moveq r0, #0xd
    streq r0, [r7, #0x6c]
    b @L_02169410
@L_021693f8:
    str r10, [r7, #0x6c]
    b @L_02169410
@L_02169400:
    mov r0, r7
    add r2, r7, #0x6c
    mov r1, #0
    bl func_ov023_02166734
@L_02169410:
    ldr r0, [r7, #0x70]
    cmp r9, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216942c:
    tst r4, #0x40
    beq @L_021694ac
    sub r0, r5, #1
    cmp r9, r0
    cmpne r8, #0
    beq @L_02169480
    ldrb r1, [r8, #0x10]
    mov r0, r7
    add r2, r7, #0x6c
    bl func_ov023_02166734
    ldrb r1, [r8, #0x10]
    mov r0, r7
    bl func_ov023_021667d4
    cmp r0, #5
    beq @L_02169478
    cmp r0, #6
    moveq r0, #0xd
    streq r0, [r7, #0x6c]
    b @L_02169490
@L_02169478:
    str r10, [r7, #0x6c]
    b @L_02169490
@L_02169480:
    mov r0, r7
    add r2, r7, #0x6c
    mov r1, #0
    bl func_ov023_02166734
@L_02169490:
    ldr r0, [r7, #0x70]
    cmp r9, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021694ac:
    tst r4, #0x20
    beq @L_0216952c
    sub r0, r5, #1
    cmp r9, r0
    cmpne r8, #0
    beq @L_02169500
    ldrb r1, [r8, #0x13]
    mov r0, r7
    add r2, r7, #0x6c
    bl func_ov023_02166734
    ldrb r1, [r8, #0x13]
    mov r0, r7
    bl func_ov023_021667d4
    cmp r0, #5
    beq @L_021694f8
    cmp r0, #6
    moveq r0, #0xd
    streq r0, [r7, #0x6c]
    b @L_02169510
@L_021694f8:
    str r10, [r7, #0x6c]
    b @L_02169510
@L_02169500:
    mov r0, r7
    add r2, r7, #0x6c
    mov r1, #0
    bl func_ov023_02166734
@L_02169510:
    ldr r0, [r7, #0x70]
    cmp r9, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216952c:
    tst r4, #0x10
    beq @L_021695ac
    sub r0, r5, #1
    cmp r9, r0
    cmpne r8, #0
    beq @L_02169580
    ldrb r1, [r8, #0x12]
    mov r0, r7
    add r2, r7, #0x6c
    bl func_ov023_02166734
    ldrb r1, [r8, #0x12]
    mov r0, r7
    bl func_ov023_021667d4
    cmp r0, #5
    beq @L_02169578
    cmp r0, #6
    moveq r0, #0xd
    streq r0, [r7, #0x6c]
    b @L_02169590
@L_02169578:
    str r10, [r7, #0x6c]
    b @L_02169590
@L_02169580:
    mov r0, r7
    add r2, r7, #0x6c
    mov r1, #0
    bl func_ov023_02166734
@L_02169590:
    ldr r0, [r7, #0x70]
    cmp r9, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021695ac:
    tst r6, #1
    beq @L_021695f8
    ldr r0, [r7, #0x6c]
    cmp r0, #1
    beq @L_021695d4
    cmp r0, #0xa
    beq @L_021695e0
    cmp r0, #0xd
    beq @L_021695ec
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021695d4:
    mov r0, r7
    bl func_ov023_02166a20
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021695e0:
    mov r0, r7
    bl func_ov023_02167178
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021695ec:
    mov r0, r7
    bl func_ov023_0216720c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021695f8:
    tst r6, #2
    beq @L_02169628
    mov r0, r7
    mov r1, #4
    bl func_ov023_0216686c
    str r0, [r7, #0x70]
    mov r0, r7
    bl func_ov023_02166a20
    mov r0, r9, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [r7, #0x70]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169628:
    tst r6, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r7
    mov r1, #5
    bl func_ov023_0216686c
    mov r1, r0
    mov r0, r7
    add r2, r7, #0x6c
    bl func_ov023_02166734
    str r10, [r7, #0x6c]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169660:
    sub r0, r1, #2
    cmp r0, #1
    bhi @L_02169888
    tst r6, #1
    sub r4, r5, #1
    beq @L_021696d8
    ldr r0, [r7, #0x4c]
    cmp r0, #0
    beq @L_02169690
    cmp r0, #1
    beq @L_021696a4
    b @L_021696b8
@L_02169690:
    ldr r0, =data_020c5e40
    mov r1, #6
    mov r5, #0x25
    mov r4, #1
    b @L_021696b4
@L_021696a4:
    ldr r0, =data_020c5e40
    mov r1, #4
    mov r5, #0x27
    mov r4, #2
@L_021696b4:
    bl _ZN12SoundManager9PlaySoundEi
@L_021696b8:
    cmp r4, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r0, r7, r4
    ldrb r1, [r0, #0x2f4]
    ldr r0, =data_020c9660
    bl func_ov015_0213be3c
    str r5, [r7, #0x7c]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021696d8:
    tst r6, #0x20
    beq @L_021697b0
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r7, #0x4c]
    mov r2, #1
    cmp r0, #0
    addge r0, r0, #1
    movge r1, r0, lsr #0x1f
    rsbge r0, r1, r0, lsl #31
    strlt r5, [r7, #0x4c]
    addge r0, r1, r0, ror #31
    strge r0, [r7, #0x4c]
    ldr r1, [r7, #0x4c]
    ldr r0, =data_020c47a4
    add r1, r1, #1
    add r1, r7, r1
    ldrb r1, [r1, #0x2f4]
    bl func_ov015_0213c730
    ldr r0, [r7, #0x4c]
    mov r2, #0x24
    cmp r0, #0
    mov r0, r9
    mov r1, r8
    bne @L_02169778
    bl func_ov015_0213ba04
    mov r0, r9
    mov r1, r8
    mov r2, #0x25
    bl func_ov015_0213b990
    mov r0, r9
    mov r1, r8
    mov r2, #0x26
    bl func_ov015_0213b990
    mov r0, r9
    mov r1, r8
    mov r2, #0x27
    bl func_ov015_0213b990
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169778:
    bl func_ov015_0213b990
    mov r0, r9
    mov r1, r8
    mov r2, #0x25
    bl func_ov015_0213b990
    mov r0, r9
    mov r1, r8
    mov r2, #0x26
    bl func_ov015_0213ba04
    mov r0, r9
    mov r1, r8
    mov r2, #0x27
    bl func_ov015_0213b990
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021697b0:
    tst r6, #0x10
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r7, #0x4c]
    mov r2, #1
    cmp r0, #0
    movlt r0, #1
    addge r0, r0, #1
    movge r1, r0, lsr #0x1f
    rsbge r0, r1, r0, lsl #31
    addge r0, r1, r0, ror #31
    mov r1, r0
    add r1, r1, #1
    str r0, [r7, #0x4c]
    add r1, r7, r1
    ldrb r1, [r1, #0x2f4]
    ldr r0, =data_020c47a4
    bl func_ov015_0213c730
    ldr r0, [r7, #0x4c]
    mov r2, #0x24
    cmp r0, #0
    mov r0, r9
    mov r1, r8
    bne @L_02169850
    bl func_ov015_0213ba04
    mov r0, r9
    mov r1, r8
    mov r2, #0x25
    bl func_ov015_0213b990
    mov r0, r9
    mov r1, r8
    mov r2, #0x26
    bl func_ov015_0213b990
    mov r0, r9
    mov r1, r8
    mov r2, #0x27
    bl func_ov015_0213b990
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169850:
    bl func_ov015_0213b990
    mov r0, r9
    mov r1, r8
    mov r2, #0x25
    bl func_ov015_0213b990
    mov r0, r9
    mov r1, r8
    mov r2, #0x26
    bl func_ov015_0213ba04
    mov r0, r9
    mov r1, r8
    mov r2, #0x27
    bl func_ov015_0213b990
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169888:
    tst r6, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r7
    mov r1, #3
    str r5, [r7, #0x3c]
    bl func_ov023_02166684
    mov r0, r7
    mov r1, #5
    bl func_ov023_0216686c
    mov r1, r0
    mov r0, r7
    add r2, r7, #0x6c
    bl func_ov023_02166734
    ldr r0, =data_020c5e40
    mov r1, #4
    str r10, [r7, #0x6c]
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r7
    bl func_ov023_02167d04
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov023_021698e8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r0, [r5, #0x34]
    mov r4, r1
    cmp r0, #4
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213be90
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldrh r0, [r4, #4]
    cmp r0, #1
    bne @L_02169990
    ldrh r0, [r4, #6]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldrb r0, [r5, #0x40]
    cmp r0, #0
    bne @L_02169968
    mov r0, #1
    strb r0, [r5, #0x40]
    ldrh r1, [r4]
    ldrh r2, [r4, #2]
    mov r0, r5
    add r3, r5, #0x54
    bl func_ov023_021668cc
    ldr r0, [r5, #0x54]
    cmp r0, #0
    beq @L_02169968
    mov r0, r5
    bl func_ov023_021670c0
@L_02169968:
    ldrh r1, [r4]
    mov r0, r5
    add r3, r5, #0x60
    str r1, [r5, #0x44]
    ldrh r2, [r4, #2]
    str r2, [r5, #0x48]
    bl func_ov023_021668cc
    mov r0, r5
    bl func_ov023_02166c64
    ldmia sp!, {r4, r5, r6, pc}
@L_02169990:
    ldrb r0, [r5, #0x40]
    cmp r0, #0
    ldrne r0, [r5, #0x54]
    cmpne r0, #0
    beq @L_021699d0
    ldr r1, [r5, #0x44]
    ldr r2, [r5, #0x48]
    mov r0, r5
    add r3, r5, #0x60
    bl func_ov023_021668cc
    ldr r1, [r5, #0x54]
    ldr r0, [r5, #0x60]
    cmp r1, r0
    bne @L_021699d0
    mov r0, r5
    bl func_ov023_02166e8c
@L_021699d0:
    ldr r0, [r5, #0x38]
    sub r0, r0, #2
    cmp r0, #1
    bhi @L_02169a68
    ldr r0, [r5, #0x4c]
    mov r4, #0
    cmp r0, #0
    mov r2, #0x24
    bne @L_02169a28
    ldr r6, =data_020c9660
    mov r1, r4
    mov r0, r6
    bl func_ov015_0213ba04
    mov r0, r6
    mov r1, r4
    mov r2, #0x25
    bl func_ov015_0213b990
    mov r0, r6
    mov r1, r4
    mov r2, #0x26
    bl func_ov015_0213b990
    b @L_02169a58
@L_02169a28:
    ldr r6, =data_020c9660
    mov r1, r4
    mov r0, r6
    bl func_ov015_0213b990
    mov r0, r6
    mov r1, r4
    mov r2, #0x25
    bl func_ov015_0213b990
    mov r0, r6
    mov r1, r4
    mov r2, #0x26
    bl func_ov015_0213ba04
@L_02169a58:
    mov r0, r6
    mov r1, r4
    mov r2, #0x27
    bl func_ov015_0213b990
@L_02169a68:
    mov r0, #0
    str r0, [r5, #0x60]
    str r0, [r5, #0x64]
    strh r0, [r5, #0x68]
    str r0, [r5, #0x54]
    str r0, [r5, #0x58]
    strh r0, [r5, #0x5c]
    strb r0, [r5, #0x40]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov023_02169a90(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r3, #0
    mov r4, r0
    sub r2, r3, #1
    mov r1, #1
    ldr r0, =data_020c4ab4
    str r3, [r4, #0x34]
    str r3, [r4, #0x38]
    str r3, [r4, #0x3c]
    strb r3, [r4, #0x40]
    str r2, [r4, #0x44]
    str r2, [r4, #0x48]
    str r3, [r4, #0x78]
    strb r3, [r4, #0x84]
    str r3, [r4, #0x88]
    strb r3, [r4, #0x178]
    strb r3, [r4, #0x179]
    strb r3, [r4, #0x17a]
    str r3, [r4, #0x17c]
    str r3, [r4, #0x54]
    str r3, [r4, #0x58]
    strh r3, [r4, #0x5c]
    str r3, [r4, #0x60]
    str r3, [r4, #0x64]
    strh r3, [r4, #0x68]
    str r3, [r4, #0x6c]
    str r3, [r4, #0x70]
    strh r3, [r4, #0x74]
    str r3, [r4, #0x7c]
    str r3, [r4, #0x4c]
    str r1, [r4, #0x50]
    mov r1, #3
    str r1, [r0, #4]
    ldr r0, [r4, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e1ecEv
    cmp r0, #0x1a
    bne @L_02169b2c
    mov r0, r4
    bl func_ov023_0216714c
@L_02169b2c:
    mov r7, #0
    mov r5, #3
    mov r1, r7
    mov r2, r5
    add r0, r4, #0x2f4
    bl MI_CpuFill8
    ldr r0, =data_020c47a4
    mov r1, r5
    bl func_ov015_0213c4c0
    mov r6, #1
    mov r1, r6
    add r0, r4, #0x2f8
    bl func_ov015_02133e24
    add r0, r4, #0x2f8
    mov r1, #0x16
    mov r2, #6
    bl func_ov015_02133e50
    mov r0, r4
    mov r1, r7
    bl func_ov023_02166684
    mov r5, #0x70
    add r0, r4, #0x94
    mov r1, r7
    mov r2, r5
    bl func_02009380
    mov r2, r5
    add r0, r4, #0x104
    mov r1, r7
    bl func_02009380
    ldr r1, =data_020cac1c
    add r0, r4, #0x94
    bl STD_CopyString
    add r0, r4, #0x104
    add r1, r4, #0x94
    mov r2, #0xc
    bl func_02016d0c
    ldr r5, =data_020c47b4
    mov r1, #0x2580
    mov r0, r5
    mov r2, r7
    mov r3, r6
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #0x8c]
    mov r2, r7
    mov r3, r6
    mov r0, r5
    mov r1, #0x258
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #0x90]
    add r0, r4, #0x104
    bl STD_GetStringLength
    mov r6, #0
    ldr r7, =data_020c9660
    str r0, [r4, #0x174]
    cmp r0, #0xb
    movgt r0, #0xb
    strgt r0, [r4, #0x174]
    mov r0, r7
    mov r1, r6
    bl func_ov015_0213b364
    bl G2_GetBG3ScrPtr
    mov r5, r0
    bl G2_GetBG1ScrPtr
    mov r3, r0
    mov r2, r5
    mov r1, r6
    mov r0, r7
    str r6, [sp]
    bl func_ov015_0213b478
    mov r0, r4
    bl func_ov023_02165d60
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov023_02169c60(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r1, [r4, #0x34]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02169c90
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02169cc0
    b @L_02169d10
    b @L_02169d10
@L_02169c90:
    bl func_ov023_02165ea8
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r4
    bl func_ov023_02165e18
    mov r0, r4
    add r2, r4, #0x6c
    mov r1, #0
    bl func_ov023_02166734
    mov r0, #2
    str r0, [r4, #0x34]
    ldmia sp!, {r4, r5, r6, pc}
@L_02169cc0:
    ldr r6, =data_020c9660
    mov r5, #0
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b3fc
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b364
    mov r0, r4
    bl func_ov023_021680cc
    mov r0, r4
    bl func_ov023_02167724
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213bfcc
    mov r0, #6
    bl func_ov015_0213257c
    mov r0, #4
    str r0, [r4, #0x34]
    ldmia sp!, {r4, r5, r6, pc}
@L_02169d10:
    ldr r0, [r4, #0x17c]
    add r0, r0, #1
    str r0, [r4, #0x17c]
    cmp r0, #0x3c
    movge r0, #0
    strge r0, [r4, #0x17c]
    mov r0, r4
    bl func_ov023_02167d04
    mov r0, r4
    bl func_ov023_021679c0
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov023_02169d4c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x34]
    cmp r1, #2
    beq @L_02169d70
    cmp r1, #4
    cmpne r1, #5
    beq @L_02169d80
    ldmia sp!, {r4, pc}
@L_02169d70:
    bl func_ov023_02165f10
    mov r0, #3
    str r0, [r4, #0x34]
    ldmia sp!, {r4, pc}
@L_02169d80:
    ldrb r0, [r4, #0x84]
    cmp r0, #1
    bne @L_02169dac
    ldr r0, [r4, #0x8c]
    cmp r0, #0
    beq @L_02169dac
    ldr r1, [r4, #0x88]
    mov r3, #0
    mov r2, #0x2580
    strb r3, [r4, #0x84]
    bl func_02003bb8
@L_02169dac:
    mov r0, r4
    bl func_ov023_021663a8
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov023_02169dc8(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r4, r0
    add r0, r4, #0x2c
    bl func_0209e5cc
    bl G2_GetBG3ScrPtr
    mov r6, r0
    bl G2_GetBG1ScrPtr
    mov r5, r0
    bl G2_GetBG2ScrPtr
    mov r2, r6
    mov r3, r5
    str r0, [sp]
    ldr r6, =data_020c9660
    mov r5, #0
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b478
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b3fc
    ldr r0, =data_020c47a4
    bl func_ov015_0213c4fc
    ldr r1, [r4, #0x8c]
    cmp r1, #0
    beq @L_02169e3c
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    str r5, [r4, #0x8c]
@L_02169e3c:
    ldr r1, [r4, #0x90]
    cmp r1, #0
    beq @L_02169e58
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r4, #0x90]
@L_02169e58:
    mov r0, r4
    bl func_ov023_02165ebc
    mov r0, r4
    bl func_ov023_02165ee8
    mov r5, #0x10
    mov r1, r5
    mov r0, #1
    bl func_ov015_02132c08
    mov r1, r5
    mov r0, #2
    bl func_ov015_02132c08
    mov r1, r5
    mov r0, #3
    bl func_ov015_02132c08
    ldrb r0, [r4, #0x17a]
    cmp r0, #0
    beq @L_02169ea8
    bl func_ov015_021353a4
    mov r0, #4
    bl func_ov015_02134ccc
@L_02169ea8:
    add r0, r4, #0x2f8
    mov r1, #1
    bl func_ov015_02133e8c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" s32 func_ov023_02169ec8(s32 arg0)
{
    func_0209e258((arg0 + 0x2C));
    _ZN8TextFontD1Ev((arg0 + 8));
    _ZdlPv(arg0);
    return arg0;
}

extern "C" s32 func_ov023_02169ef0(s32 arg0)
{
    func_0209e258((arg0 + 0x2C));
    _ZN8TextFontD1Ev((arg0 + 8));
    return arg0;
}
