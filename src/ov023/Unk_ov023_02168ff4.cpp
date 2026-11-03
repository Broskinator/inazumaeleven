#include "ov023/Unk_ov023_02168ff4.hpp"

extern "C" void func_ov023_02168ff4(void);
extern "C" void func_ov023_0216932c(void);
extern "C" void func_ov023_021698e8(void);
extern "C" s32 func_ov023_02169a90(u8 *arg0);
extern "C" void func_ov023_02169c60(void);
extern "C" s32 func_ov023_02169d4c(u8 *arg0);
extern "C" s32 func_ov023_02169dc8(u8 *arg0);
extern "C" s32 func_ov023_02169ec8(s32 arg0);
extern "C" s32 func_ov023_02169ef0(s32 arg0);

extern "C" char data_020c47a4[];
extern "C" char data_020c47b4[];
extern "C" char data_020c4814[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c5e40[];
extern "C" char data_020c9660[];
extern "C" char data_020cac1c[];
extern "C" s32 G2_GetBG1ScrPtr(...);
extern "C" s32 G2_GetBG2ScrPtr(...);
extern "C" s32 G2_GetBG3ScrPtr(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 STD_CopyString(...);
extern "C" s32 STD_GetStringLength(...);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e1ecEv(...);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" s32 _ZN8GameHeap5AllocEiii(...);
extern "C" s32 _ZN8TextFontD1Ev(...);
extern "C" s32 _ZdlPv(...);
extern "C" s32 func_02003bb8(...);
extern "C" s32 func_02009380(...);
extern "C" s32 func_02016d0c(...);
extern "C" s32 func_0209e258(...);
extern "C" s32 func_0209e5cc(...);
extern "C" void func_ov015_0213257c(void);
extern "C" s32 func_ov015_02132c08(...);
extern "C" s32 func_ov015_02133e24(...);
extern "C" s32 func_ov015_02133e50(...);
extern "C" s32 func_ov015_02133e8c(...);
extern "C" s32 func_ov015_02134ccc(...);
extern "C" s32 func_ov015_021353a4(...);
extern "C" s32 func_ov015_0213b364(...);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" s32 func_ov015_0213b478(...);
extern "C" void func_ov015_0213b540(void);
extern "C" void func_ov015_0213b990(void);
extern "C" void func_ov015_0213ba04(void);
extern "C" void func_ov015_0213be3c(void);
extern "C" void func_ov015_0213be90(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" s32 func_ov015_0213c33c(...);
extern "C" s32 func_ov015_0213c4c0(...);
extern "C" s32 func_ov015_0213c4fc(...);
extern "C" void func_ov015_0213c730(void);
extern "C" s32 func_ov023_02165d60(...);
extern "C" void func_ov023_02165e18(void);
extern "C" void func_ov023_02165ea8(void);
extern "C" s32 func_ov023_02165ebc(...);
extern "C" s32 func_ov023_02165ee8(...);
extern "C" s32 func_ov023_02165f10(...);
extern "C" s32 func_ov023_021663a8(...);
extern "C" s32 func_ov023_02166684(...);
extern "C" void func_ov023_021666f4(void);
extern "C" void func_ov023_02166734(void);
extern "C" void func_ov023_021667d4(void);
extern "C" void func_ov023_0216686c(void);
extern "C" void func_ov023_021668cc(void);
extern "C" void func_ov023_02166a20(void);
extern "C" void func_ov023_02166c64(void);
extern "C" void func_ov023_02166e8c(void);
extern "C" void func_ov023_021670c0(void);
extern "C" s32 func_ov023_0216714c(...);
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

extern "C" s32 func_ov023_02169a90(u8 *arg0)
{
    s32 v0;
    s32 v11;
    s32 v12;
    s32 v13;
    s32 v15;
    s32 v16;
    s32 v18;
    s32 t0;
    *(s32 *)(arg0 + 0x34) = 0;
    *(s32 *)(arg0 + 0x38) = 0;
    *(s32 *)(arg0 + 0x3C) = 0;
    *(u8 *)(arg0 + 0x40) = 0;
    *(s32 *)(arg0 + 0x44) = (0 - 1);
    *(s32 *)(arg0 + 0x48) = (0 - 1);
    *(s32 *)(arg0 + 0x78) = 0;
    *(u8 *)(arg0 + 0x84) = 0;
    *(s32 *)(arg0 + 0x88) = 0;
    *(u8 *)(arg0 + 0x178) = 0;
    *(u8 *)(arg0 + 0x179) = 0;
    *(u8 *)(arg0 + 0x17A) = 0;
    *(s32 *)(arg0 + 0x17C) = 0;
    *(s32 *)(arg0 + 0x54) = 0;
    *(s32 *)(arg0 + 0x58) = 0;
    *(u16 *)(arg0 + 0x5C) = 0;
    *(s32 *)(arg0 + 0x60) = 0;
    *(s32 *)(arg0 + 0x64) = 0;
    *(u16 *)(arg0 + 0x68) = 0;
    *(s32 *)(arg0 + 0x6C) = 0;
    *(s32 *)(arg0 + 0x70) = 0;
    *(u16 *)(arg0 + 0x74) = 0;
    *(s32 *)(arg0 + 0x7C) = 0;
    *(s32 *)(arg0 + 0x4C) = 0;
    *(s32 *)(arg0 + 0x50) = 1;
    *(s32 *)(data_020c4ab4 + 0x4) = 3;
    t0 = *(s32 *)(arg0 + 0x4);
    v0 = _ZN17UnkClass_0203dc7c13func_0203e1ecEv(t0, 3, (0 - 1), 0);
    if (v0 == 0x1A) {
        func_ov023_0216714c((s32)arg0);
    }
    MI_CpuFill8((s32)(arg0 + 0x2F4), 0, 3);
    func_ov015_0213c4c0((s32)data_020c47a4, 3);
    func_ov015_02133e24((s32)(arg0 + 0x2F8), 1);
    func_ov015_02133e50((s32)(arg0 + 0x2F8), 0x16, 6);
    func_ov023_02166684((s32)arg0, 0);
    func_02009380((s32)(arg0 + 0x94), 0, 0x70);
    func_02009380((s32)(arg0 + 0x104), 0, 0x70);
    STD_CopyString((s32)(arg0 + 0x94), (s32)data_020cac1c);
    func_02016d0c((s32)(arg0 + 0x104), (s32)(arg0 + 0x94), 0xC);
    v11 = _ZN8GameHeap5AllocEiii((s32)data_020c47b4, 0x2580, 0, 1);
    *(s32 *)(arg0 + 0x8C) = v11;
    v12 = _ZN8GameHeap5AllocEiii((s32)data_020c47b4, 0x258, 0, 1);
    *(s32 *)(arg0 + 0x90) = v12;
    v13 = STD_GetStringLength((s32)(arg0 + 0x104));
    *(s32 *)(arg0 + 0x174) = v13;
    if (v13 > 0xB) {
        *(s32 *)(arg0 + 0x174) = 0xB;
    }
    func_ov015_0213b364((s32)data_020c9660, 0);
    v15 = G2_GetBG3ScrPtr();
    v16 = G2_GetBG1ScrPtr();
    func_ov015_0213b478((s32)data_020c9660, 0, v15, v16, 0);
    v18 = func_ov023_02165d60((s32)arg0);
    return v18;
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

extern "C" s32 func_ov023_02169d4c(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 v3;
    s32 t0;
    r4 = arg0;
    r1 = *(s32 *)(arg0 + 0x34);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            func_ov023_02165f10((s32)arg0, r1);
            *(s32 *)(r4 + 0x34) = 3;
            return 3;
        case 4:
        case 5:
            if ((*(u8 *)(r4 + 0x84) == 1 && (arg0 = (u8 *)*(s32 *)(r4 + 0x8C), (s32)arg0 != 0))) {
                t0 = *(s32 *)(r4 + 0x88);
                *(u8 *)(r4 + 0x84) = 0;
                func_02003bb8((s32)arg0, t0, 0x2580, 0);
            }
            func_ov023_021663a8((s32)r4);
            v3 = func_ov015_0213c33c((u8 *)((u8 *)&data_020c9660), 0);
            return v3;
    }
}

extern "C" s32 func_ov023_02169dc8(u8 *arg0)
{
    s32 r1;
    s32 r5;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v16;
    func_0209e5cc((s32)(arg0 + 0x2C));
    v1 = G2_GetBG3ScrPtr();
    v2 = G2_GetBG1ScrPtr();
    v3 = G2_GetBG2ScrPtr();
    r5 = 0;
    func_ov015_0213b478((s32)((u8 *)&data_020c9660), 0, v1, v2, v3);
    func_ov015_0213b3fc((s32)((u8 *)&data_020c9660), 0);
    func_ov015_0213c4fc((s32)((u8 *)&data_020c47a4));
    r1 = *(s32 *)(arg0 + 0x8C);
    if (r1 != 0) {
        _ZN8GameHeap4FreeEPv((s32)((u8 *)&data_020c47b4), r1);
        *(s32 *)(arg0 + 0x8C) = r5;
    }
    r1 = *(s32 *)(arg0 + 0x90);
    if (r1 != 0) {
        _ZN8GameHeap4FreeEPv((s32)((u8 *)&data_020c47b4), r1);
        *(s32 *)(arg0 + 0x90) = 0;
    }
    func_ov023_02165ebc((s32)arg0);
    func_ov023_02165ee8((s32)arg0);
    func_ov015_02132c08(1, 0x10);
    func_ov015_02132c08(2, 0x10);
    func_ov015_02132c08(3, 0x10);
    if (*(u8 *)(arg0 + 0x17A) != 0) {
        func_ov015_021353a4();
        func_ov015_02134ccc(4);
    }
    v16 = func_ov015_02133e8c((s32)(arg0 + 0x2F8), 1);
    return v16;
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
