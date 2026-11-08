#include "ov036/Unk_ov036_02168e64.hpp"

extern "C" void func_ov036_02168e64(s32 arg0);
extern "C" void func_ov036_02168ea0(void);
extern "C" void func_ov036_02169090(void);
extern "C" void func_ov036_021691f4(u8 *arg0, s32 arg1);
extern "C" void func_ov036_02169208(void);
extern "C" void func_ov036_02169ad8(u8 *arg0, s32 arg1);
extern "C" void func_ov036_02169ba8(void);
extern "C" void func_ov036_02169cec(void);
extern "C" void func_ov036_02169f68(void);
extern "C" void func_ov036_02169f6c(void);
extern "C" s32 func_ov036_02169fe8(s32 arg0);
extern "C" void func_ov036_02169ffc(void);

extern "C" char data_020c46b8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c4814[];
extern "C" char data_020c484c[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4ac0[];
extern "C" char data_020c4ac8[];
extern "C" char data_020c4ae1[];
extern "C" char data_020c5e40[];
extern "C" char data_020d3d20[];
extern "C" char data_ov036_0216a260[];
extern "C" void MI_CpuFill8(void);
extern "C" void STD_GetStringLength(void);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e04cEii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e090Eii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e0ccEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1ecEv(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02016d0c(void);
extern "C" void _s32_div_f(void);
extern "C" void func_02091d54(void);
extern "C" void func_02091d64(void);
extern "C" void func_0209b7b0(void);
extern "C" void func_ov015_02132628(void);
extern "C" void func_ov015_02132c08(void);
extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_02135f24(void);
extern "C" void func_ov015_02135fe0(void);
extern "C" void func_ov015_02136018(void);
extern "C" void func_ov015_0213606c(void);
extern "C" void func_ov015_021616a4(void);
extern "C" void func_ov015_021616dc(void);
extern "C" void func_ov015_02161710(void);
extern "C" void func_ov015_02161760(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" void func_ov015_02161f84(void);
extern "C" void func_ov015_02161fdc(void);
extern "C" s32 func_ov015_021624f0(...);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" void func_ov015_021629c8(void);
extern "C" void func_ov015_021629d0(void);
extern "C" void func_ov036_02165d70(void);
extern "C" void func_ov036_02165d8c(void);
extern "C" void func_ov036_02165e2c(void);
extern "C" void func_ov036_02165f28(void);
extern "C" void func_ov036_02166038(void);
extern "C" void func_ov036_02166088(void);
extern "C" void func_ov036_02166d28(void);
extern "C" void func_ov036_02166e40(void);
extern "C" void func_ov036_02166fb8(void);
extern "C" void func_ov036_02167000(void);
extern "C" void func_ov036_02167a18(void);
extern "C" void func_ov036_021680d0(void);
extern "C" s32 func_ov036_021681d0(...);
extern "C" void func_ov036_021681e0(void);
extern "C" void func_ov036_021682d0(void);
extern "C" void func_ov036_02168330(void);
extern "C" void func_ov036_021688cc(void);
extern "C" void func_ov036_02168934(void);
extern "C" void func_ov036_02168aa0(void);
extern "C" void func_ov036_02168af8(void);
extern "C" void func_ov036_02168b5c(void);
extern "C" void func_ov036_02168cf4(void);

extern "C" void func_ov036_02168e64(s32 arg0)
{
    func_ov015_021624f0(*(s32 *)(data_020c46c4), 0xB);
    _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 4);
    func_ov036_021681d0(arg0, 0);
}

extern "C" asm void func_ov036_02168ea0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r1
    mov r6, r0
    mov r7, #0xa8
    cmp r4, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r8, =data_020c46c4
    mov r1, r4, lsl #0x10
    ldr r0, [r8]
    mov r1, r1, lsr #0x10
    bl func_ov015_02161dd4
    ldr r1, [r6, #0x18]
    mov r0, r6
    bl func_ov036_02166fb8
    movs r5, r0
    ldmmiia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r4, #1
    blt @L_02168f38
    cmp r4, #6
    bgt @L_02168f38
    mul r2, r5, r7
    ldr r0, [r8]
    mov r1, #1
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    add r0, r6, r2
    ldr r1, [r0, #0x148]
    add r3, r6, #0x13c
    sub r4, r4, #1
    add r0, r3, r2
    add r1, r4, r1
    bl func_ov015_02135f24
    add r0, r6, #0x13c
    mla r1, r5, r7, r0
    mov r0, r6
    mov r2, #8
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168f38:
    cmp r4, #0xa
    bne @L_02168fa8
    mov r4, #1
    mov r8, #0
    mov r0, r6
    mov r1, r4
    mov r2, r8
    bl func_ov036_02168af8
    ldr r0, =data_020c46c4
    str r8, [r6, #0x3dc]
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r4, [r0, #0x38]
    ldr r0, [r6, #0x18]
    cmp r0, #1
    bne @L_02168f8c
    add r0, r6, #0x13c
    mla r0, r5, r7, r0
    mov r1, r4
    bl func_ov015_02135f24
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168f8c:
    cmp r0, #2
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r6, #0x13c
    mla r0, r5, r7, r0
    mov r1, #4
    bl func_ov015_02135f24
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168fa8:
    cmp r4, #0xb
    bne @L_02168fe0
    mov r4, #1
    mov r0, r6
    mov r2, r4
    mov r1, #0
    bl func_ov036_02168af8
    ldr r0, =data_020c46c4
    str r4, [r6, #0x3dc]
    ldr r0, [r0]
    mov r1, #2
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02168fe0:
    cmp r4, #0xc
    bne @L_02169000
    ldr r0, =data_020c46c4
    mov r1, #2
    ldr r0, [r0]
    add r0, r0, #0xf00
    strh r1, [r0, #0x38]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02169000:
    cmp r4, #7
    bne @L_02169044
    add r0, r6, #0x13c
    mla r0, r5, r7, r0
    sub r1, r7, #0xa9
    bl func_ov015_0213606c
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r6, #0x13c
    mla r1, r5, r7, r0
    mov r0, r6
    mov r2, #0
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02169044:
    cmp r4, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r6, #0x13c
    mla r0, r5, r7, r0
    mov r1, #1
    bl func_ov015_0213606c
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r6, #0x13c
    mla r1, r5, r7, r0
    mov r0, r6
    mov r2, #0
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov036_02169090(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    cmp r1, #9
    mov r6, r0
    mov r5, r2
    mov r7, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r6, #0x18]
    bl func_ov036_02166fb8
    cmp r0, #0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    add r2, r6, #0x13c
    mov r1, #0xa8
    mla r4, r0, r1, r2
    ldr r0, =data_020c46c4
    add r1, sp, #4
    ldr r0, [r0]
    bl func_ov015_021629d0
    ldrsh r0, [r4, #0x9c]
    ldrsh r1, [sp, #6]
    strh r0, [sp, #4]
    ldrsh r0, [r4, #0xa6]
    sub r0, r1, r0, asr #1
    strh r0, [sp, #6]
    ldrsh r2, [sp, #6]
    ldrsh r1, [r4, #0x9e]
    cmp r2, r1
    strlth r1, [sp, #6]
    blt @L_0216911c
    ldrsh r0, [r4, #0xa2]
    add r0, r1, r0
    cmp r2, r0
    strgeh r0, [sp, #6]
@L_0216911c:
    cmp r5, #0
    bne @L_0216913c
    str r7, [sp]
    ldrsh r2, [sp, #4]
    ldrsh r3, [sp, #6]
    mov r0, r6
    mov r1, r4
    bl func_ov036_02168934
@L_0216913c:
    ldrsh r3, [sp, #6]
    ldrsh r2, [r4, #0x9e]
    ldr r1, [r4, #4]
    ldr r0, [r4, #8]
    sub r2, r3, r2
    sub r0, r1, r0
    add r1, r0, #1
    mul r0, r1, r2
    ldrsh r1, [r4, #0xa2]
    bl _s32_div_f
    ldr r3, [r4, #4]
    ldr r2, [r4, #8]
    mov r1, r0
    cmp r3, r2
    movlt r1, #0
    blt @L_02169194
    cmp r1, #0
    movlt r1, #0
    blt @L_02169194
    sub r0, r3, r2
    cmp r1, r0
    movge r1, r0
@L_02169194:
    ldr r0, [r4, #0xc]
    cmp r1, r0
    bne @L_021691c4
    cmp r5, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r4
    mov r2, #0
    bl func_ov036_02168aa0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021691c4:
    mov r0, r4
    bl func_ov015_02136018
    mov r0, r6
    mov r1, r4
    mov r2, #0
    bl func_ov036_021688cc
    mov r0, r6
    mov r1, r4
    bl func_ov036_02168330
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov036_021691f4(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x8) = arg1;
    *(s32 *)(arg0) = (s32)data_ov036_0216a260;
}

extern "C" asm void func_ov036_02169208(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r3, =data_020c4814
    ldr r2, =data_020c46b8
    ldrh r3, [r3]
    mov r8, r1
    mov r9, r0
    orr r0, r3, r8
    mov r1, r0, lsl #0x10
    ldr r0, [r2]
    ldr r4, =data_020c46c4
    mov r7, r1, lsr #0x10
    mov r5, #8
    mov r10, #1
    mov r6, #0
    bl func_ov015_02161760
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r4]
    bl func_ov015_021629ac
    cmp r0, #0
    beq @L_02169278
    ldr r0, [r4]
    add r0, r0, #0xf00
    ldrh r8, [r0, #0x38]
    cmp r8, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r7, r8
    strh r6, [r0, #0x38]
@L_02169278:
    ldr r0, [r9, #0x14]
    cmp r0, #5
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r9, #0x18]
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    b @L_021692b0
    b @L_02169440
    b @L_0216969c
    b @L_02169968
    b @L_02169968
    b @L_02169968
    b @L_02169968
@L_021692b0:
    tst r8, #1
    beq @L_02169378
    mov r0, r9
    add r1, r9, #0x13c
    bl func_ov036_021680d0
    ldr r0, [r9, #0x13c]
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    b @L_021692e4
    b @L_02169300
    b @L_0216931c
    b @L_02169350
@L_021692e4:
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #2
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169300:
    ldr r0, =data_020c5e40
    mov r1, r10
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, r10
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216931c:
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, #6
    bl func_ov015_02132628
    ldr r0, =data_020d3d20
    mov r1, #0x3d
    mov r2, #0
    bl func_0209b7b0
    mov r0, r9
    mov r1, #0x87
    bl func_ov036_021681d0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169350:
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r1, #0x34
    mov r2, #0
    bl func_0209b7b0
    mov r0, r9
    bl func_ov036_02168e64
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169378:
    tst r8, #2
    beq @L_021693a8
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r1, #0x34
    mov r2, #0
    bl func_0209b7b0
    mov r0, r9
    bl func_ov036_02168e64
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021693a8:
    tst r7, #0x40
    beq @L_021693f4
    ldr r0, =data_020c5e40
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    ldr r4, [r9, #0x13c]
    add r0, r9, #0x13c
    sub r1, r5, #9
    bl func_ov015_02135fe0
    cmp r4, #0
    mov r0, r9
    add r1, r9, #0x13c
    bne @L_021693e8
    mov r2, #0xa
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021693e8:
    mov r2, #0xe
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021693f4:
    tst r7, #0x80
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r4, [r9, #0x13c]
    add r0, r9, #0x13c
    mov r1, #1
    bl func_ov015_02135fe0
    cmp r4, #2
    mov r0, r9
    add r1, r9, #0x13c
    bne @L_02169434
    mov r2, #0xa
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169434:
    mov r2, #0xe
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169440:
    tst r8, #1
    beq @L_02169510
    mov r0, r9
    add r1, r9, #0x1e4
    bl func_ov036_021680d0
    ldr r0, [r9, #0x1e4]
    cmp r0, #0
    beq @L_0216946c
    cmp r0, #1
    beq @L_02169498
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216946c:
    ldr r0, =data_020d3d20
    mov r1, #0x3d
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0x5f
    bl func_ov036_021681d0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169498:
    ldr r0, [r9, #0x3dc]
    cmp r0, #0
    bne @L_021694e8
    add r0, r9, #0x120
    bl STD_GetStringLength
    cmp r0, #0
    bgt @L_021694c4
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021694c4:
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4]
    mov r1, #0xa
    bl func_ov015_021624f0
    mov r0, r9
    bl func_ov036_02168cf4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021694e8:
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4]
    mov r1, #0xb
    bl func_ov015_021624f0
    mov r0, r9
    mov r1, #0
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169510:
    tst r8, #2
    beq @L_02169534
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169534:
    tst r7, #0x40
    beq @L_021695b8
    ldr r0, =data_020c5e40
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    ldr r4, [r9, #0x1e4]
    add r0, r9, #0x1e4
    sub r1, r5, #9
    bl func_ov015_02135fe0
    cmp r4, #1
    ldrne r0, [r9, #0x1e4]
    cmpne r0, #1
    mov r0, r9
    bne @L_02169578
    add r1, r9, #0x1e4
    mov r2, #0
    b @L_02169580
@L_02169578:
    add r1, r9, #0x1e4
    mov r2, #0xc
@L_02169580:
    bl func_ov036_02167a18
    ldr r0, [r9, #0x1e4]
    cmp r0, #1
    bne @L_021695a4
    mov r0, r9
    mov r1, #1
    mov r2, #0
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021695a4:
    mov r1, #0
    mov r0, r9
    mov r2, r1
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021695b8:
    tst r7, #0x80
    beq @L_0216963c
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r4, [r9, #0x1e4]
    add r0, r9, #0x1e4
    mov r1, #1
    bl func_ov015_02135fe0
    cmp r4, #1
    ldrne r0, [r9, #0x1e4]
    cmpne r0, #1
    mov r0, r9
    bne @L_021695fc
    add r1, r9, #0x1e4
    mov r2, #0
    b @L_02169604
@L_021695fc:
    add r1, r9, #0x1e4
    mov r2, #0xe
@L_02169604:
    bl func_ov036_02167a18
    ldr r0, [r9, #0x1e4]
    cmp r0, #1
    bne @L_02169628
    mov r0, r9
    mov r1, #1
    mov r2, #0
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169628:
    mov r1, #0
    mov r0, r9
    mov r2, r1
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216963c:
    tst r7, #0x20
    bne @L_0216964c
    tst r7, #0x10
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216964c:
    ldr r0, [r9, #0x1e4]
    cmp r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r9, #0x3dc]
    add r0, r0, #1
    ands r0, r0, #1
    str r0, [r9, #0x3dc]
    mov r0, r9
    bne @L_0216968c
    mov r1, #1
    mov r2, #0
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216968c:
    mov r1, #0
    mov r2, #1
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216969c:
    tst r8, #1
    beq @L_021697dc
    mov r0, r9
    add r1, r9, #0x28c
    bl func_ov036_021680d0
    ldr r0, [r9, #0x28c]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    b @L_021696d4
    b @L_02169700
    b @L_0216972c
    b @L_02169758
    b @L_02169784
@L_021696d4:
    ldr r0, =data_020d3d20
    mov r1, #0x37
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #3
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169700:
    ldr r0, =data_020d3d20
    mov r1, #0x38
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #4
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216972c:
    ldr r0, =data_020d3d20
    mov r1, #0x39
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #5
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169758:
    ldr r0, =data_020d3d20
    mov r1, #0x3b
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #6
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169784:
    ldr r0, [r9, #0x3dc]
    cmp r0, #0
    bne @L_021697b4
    ldr r0, =data_020c5e40
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4]
    mov r1, #0xa
    bl func_ov015_021624f0
    mov r0, r9
    bl func_ov036_02168cf4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021697b4:
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r4]
    mov r1, #0xb
    bl func_ov015_021624f0
    mov r0, r9
    mov r1, #0
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021697dc:
    tst r8, #2
    beq @L_02169800
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #0
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169800:
    tst r7, #0x40
    beq @L_02169884
    ldr r0, =data_020c5e40
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    ldr r4, [r9, #0x28c]
    add r0, r9, #0x28c
    sub r1, r5, #9
    bl func_ov015_02135fe0
    cmp r4, #4
    ldrne r0, [r9, #0x28c]
    cmpne r0, #4
    mov r0, r9
    bne @L_02169844
    add r1, r9, #0x28c
    mov r2, #0
    b @L_0216984c
@L_02169844:
    add r1, r9, #0x28c
    mov r2, #0xe
@L_0216984c:
    bl func_ov036_02167a18
    ldr r0, [r9, #0x28c]
    cmp r0, #4
    bne @L_02169870
    mov r0, r9
    mov r1, #1
    mov r2, #0
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169870:
    mov r1, #0
    mov r0, r9
    mov r2, r1
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169884:
    tst r7, #0x80
    beq @L_02169908
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r4, [r9, #0x28c]
    add r0, r9, #0x28c
    mov r1, #1
    bl func_ov015_02135fe0
    cmp r4, #4
    ldrne r0, [r9, #0x28c]
    cmpne r0, #4
    mov r0, r9
    bne @L_021698c8
    add r1, r9, #0x28c
    mov r2, #0
    b @L_021698d0
@L_021698c8:
    add r1, r9, #0x28c
    mov r2, #0xc
@L_021698d0:
    bl func_ov036_02167a18
    ldr r0, [r9, #0x28c]
    cmp r0, #4
    bne @L_021698f4
    mov r0, r9
    mov r1, #1
    mov r2, #0
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021698f4:
    mov r1, #0
    mov r0, r9
    mov r2, r1
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169908:
    tst r7, #0x20
    bne @L_02169918
    tst r7, #0x10
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169918:
    ldr r0, [r9, #0x28c]
    cmp r0, #4
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r9, #0x3dc]
    add r0, r0, #1
    ands r0, r0, #1
    str r0, [r9, #0x3dc]
    mov r0, r9
    bne @L_02169958
    mov r1, #1
    mov r2, #0
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169958:
    mov r1, #0
    mov r2, #1
    bl func_ov036_02168af8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169968:
    tst r8, #1
    beq @L_02169a38
    mov r0, r9
    add r1, r9, #0x334
    bl func_ov036_021680d0
    ldr r0, [r9, #0x18]
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    b @L_021699fc
    b @L_021699fc
    b @L_021699fc
    b @L_021699fc
    b @L_021699a8
    b @L_021699c0
    b @L_021699d0
    b @L_021699e8
@L_021699a8:
    ldr r0, [r9, #0x334]
    add r1, r9, #0x9c
    mov r0, r0, lsl #2
    ldrh r0, [r1, r0]
    strb r0, [r9, #0x3e4]
    b @L_021699fc
@L_021699c0:
    ldr r0, [r9, #0x334]
    rsb r0, r0, #4
    strb r0, [r9, #0x3e5]
    b @L_021699fc
@L_021699d0:
    ldr r0, [r9, #0x334]
    cmp r0, #4
    streqb r6, [r9, #0x3e6]
    addne r0, r0, #1
    strneb r0, [r9, #0x3e6]
    b @L_021699fc
@L_021699e8:
    ldr r0, [r9, #0x334]
    cmp r0, #4
    streqb r6, [r9, #0x3e7]
    addne r0, r0, #1
    strneb r0, [r9, #0x3e7]
@L_021699fc:
    ldr r0, [r9, #0x338]
    ldr r1, [r9, #0x334]
    sub r0, r0, #1
    cmp r1, r0
    bne @L_02169a1c
    ldr r0, =data_020c5e40
    mov r1, #4
    b @L_02169a24
@L_02169a1c:
    ldr r0, =data_020c5e40
    mov r1, #1
@L_02169a24:
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #2
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169a38:
    tst r8, #2
    beq @L_02169a5c
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #2
    bl func_ov036_021681e0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169a5c:
    tst r7, #0x40
    beq @L_02169a90
    ldr r0, =data_020c5e40
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x334
    sub r1, r5, #9
    bl func_ov015_02135fe0
    mov r0, r9
    add r1, r9, #0x334
    mov r2, #0xa
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02169a90:
    tst r7, #0x80
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add r0, r9, #0x334
    mov r1, #1
    bl func_ov015_02135fe0
    mov r0, r9
    add r1, r9, #0x334
    mov r2, #0xa
    bl func_ov036_02167a18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_ov036_02169ad8(u8 *arg0, s32 arg1)
{
    s32 *zp;
    s32 z = 0;
    zp = &z;
    if (((s32 (*)(s32))func_ov015_02161760)(*(s32 *)data_020c46b8) != 0 || *(s32 *)(arg0 + 0x14) != 5)
        return;
    switch (((s32 (*)(s32, s32, s32))func_ov015_02162750)(*(s32 *)data_020c46c4, arg1, *zp)) {
    case 0:
        break;
    case 1:
        ((void (*)(u8 *, s32))func_ov036_02168b5c)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)data_020c46c4));
        break;
    case 2:
        ((void (*)(u8 *, s32))func_ov036_02168ea0)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)data_020c46c4));
        break;
    case 3:
        ((void (*)(u8 *, s32, s32))func_ov036_02169090)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)data_020c46c4), *zp);
        break;
    case 4:
        ((void (*)(u8 *, s32, s32))func_ov036_02169090)(arg0, ((s32 (*)(s32))func_ov015_021629c8)(*(s32 *)data_020c46c4), 1);
        break;
    }
}

extern "C" asm void func_ov036_02169ba8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r1, #0x4000000
    ldr r1, [r1]
    mov r4, r0
    and r0, r1, #0x1f00
    mov r1, r0, lsr #8
    ldr r0, =data_020c46c4
    str r1, [r4, #0x3e0]
    ldr r0, [r0]
    bl func_ov015_02161f84
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_021616a4
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x44]
    blx r1
    ldr r0, [r4, #8]
    bl _ZN17UnkClass_0203dc7c13func_0203e1ecEv
    str r0, [r4, #0xc]
    mov r7, #0
    str r7, [r4, #0x10]
    add r0, r4, #0x120
    mov r1, r7
    mov r2, #0x19
    bl MI_CpuFill8
    str r7, [r4, #0x14]
    str r7, [r4, #0x18]
    add r0, r4, #0x3e8
    mov r1, r7
    mov r2, #0x18
    bl MI_CpuFill8
    add r0, r4, #0x1c
    mov r1, r7
    mov r6, #0xc
    mov r2, r6
    bl MI_CpuFill8
    add r0, r4, #0x28
    mov r1, r7
    mov r2, #0x58
    bl MI_CpuFill8
    add r0, r4, #0x80
    mov r1, r7
    mov r5, #4
    mov r2, r5
    bl MI_CpuFill8
    mov r2, r6
    add r0, r4, #0x84
    mov r1, r7
    bl MI_CpuFill8
    add r0, r4, #0x94
    mov r1, r7
    mov r2, #8
    bl MI_CpuFill8
    mov r2, r5
    add r0, r4, #0x3e4
    mov r1, r7
    bl MI_CpuFill8
    str r7, [r4, #0x90]
    add r0, r4, #0x9c
    mov r1, r7
    mov r2, #0x80
    bl MI_CpuFill8
    str r7, [r4, #0x11c]
    add r0, r4, #0x13c
    mov r1, r7
    mov r2, #0x2a0
    bl MI_CpuFill8
    ldr r0, =data_020c46d4
    str r7, [r4, #0x3dc]
    ldr r0, [r0]
    bl func_02091d54
    ldr r0, =data_020d3d20
    mov r2, r7
    mov r1, #0x32
    bl func_0209b7b0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov036_02169cec(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldr r1, [r5, #0x14]
    mov r4, #0
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    b @L_02169f34
    b @L_02169d28
    b @L_02169d3c
    b @L_02169d74
    b @L_02169d94
    b @L_02169db8
    b @L_02169f34
    b @L_02169dfc
    b @L_02169e40
@L_02169d28:
    bl func_ov036_02165d70
    mov r0, r5
    bl func_ov036_02165d8c
    mov r0, #1
    str r0, [r5, #0x14]
@L_02169d3c:
    add r0, r5, #0x1c
    mov r1, #1
    bl func_ov015_02134118
    cmp r0, #0
    beq @L_02169f34
    mov r6, #2
    mov r1, r6
    add r0, r5, #0x3e8
    bl func_ov015_02134118
    cmp r0, #0
    beq @L_02169f34
    mov r0, r5
    bl func_ov036_02165e2c
    str r6, [r5, #0x14]
@L_02169d74:
    mov r0, r5
    bl func_ov036_02166038
    cmp r0, #0
    beq @L_02169f34
    mov r0, r5
    bl func_ov036_02166088
    mov r0, #3
    str r0, [r5, #0x14]
@L_02169d94:
    ldr r6, =data_020c4ab4
    mov r0, r5
    ldrb r1, [r6, #0x62]
    bl func_ov036_021681e0
    mov r0, r5
    strb r4, [r6, #0x62]
    bl func_ov036_021682d0
    mov r0, r5
    bl func_ov036_02166d28
@L_02169db8:
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_02169f34
    ldr r1, [r5, #0x18]
    mov r0, r5
    bl func_ov036_02166e40
    mov r0, r5
    bl func_ov036_02167000
    mov r0, r5
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #5
    str r0, [r5, #0x14]
    b @L_02169f34
@L_02169dfc:
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #0
    bne @L_02169f34
    mov r0, r5
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    beq @L_02169f34
    mov r0, r5
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r0, #7
    str r0, [r5, #0x14]
@L_02169e40:
    mov r0, r5
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_02169f34
    ldr r0, [r5, #0xc]
    cmp r0, #0x5f
    bne @L_02169ef8
    ldr r0, =data_020c4ab4
    mov r6, #0
    str r6, [r0, #8]
    strb r6, [r0, #0x14]
    ldr r3, =data_020c4ac0
    ldr r1, =data_020c4ae1
    mov r0, #0x19
    b @L_02169e94
@L_02169e84:
    mul r2, r6, r0
    str r4, [r3, r6, lsl #2]
    strb r4, [r1, r2]
    add r6, r6, #1
@L_02169e94:
    cmp r6, #2
    blt @L_02169e84
    ldr r6, =data_020c4ab4
    mov r0, #1
    str r0, [r6, #4]
    strb r0, [r6, #0x60]
    strb r4, [r6, #0x61]
    ldr r7, =data_020c4ac8
    strb r4, [r6, #0x62]
    strb r4, [r6, #0x5f]
    mov r0, r7
    add r1, r5, #0x120
    mov r2, #0x19
    strb r4, [r6, #0x63]
    bl func_02016d0c
    mov r0, r7
    bl STD_GetStringLength
    str r0, [r6, #8]
    ldr r0, [r5, #0x18]
    mov r1, r4
    strb r0, [r6, #0x62]
    ldr r0, [r5, #8]
    mov r2, #0x5f
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    b @L_02169f34
@L_02169ef8:
    cmp r0, #0x87
    bne @L_02169f28
    mov r4, #0x87
    ldr r0, [r5, #8]
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    ldr r0, [r5, #8]
    mov r2, r4
    mov r1, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    b @L_02169f34
@L_02169f28:
    ldr r0, [r5, #8]
    mov r1, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
@L_02169f34:
    ldr r0, =data_020c484c
    ldr r1, =data_020c46b8
    ldr r2, [r0]
    ldr r0, [r1]
    mov r1, r2, lsl #1
    bl func_ov015_02161710
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov036_02169f68(void)
{
}

extern "C" asm void func_ov036_02169f6c(void)
{
    stmdb sp!, {r4, lr}
    mov r2, #0x4000000
    mov r4, r0
    ldr r0, [r2]
    ldr r1, [r4, #0x3e0]
    bic r0, r0, #0x1f00
    orr r3, r0, r1, lsl #8
    mov r0, #2
    mov r1, #0x10
    str r3, [r2]
    bl func_ov015_02132c08
    ldr r0, =data_020d3d20
    mov r1, #0x35
    mov r2, #0
    bl func_0209b7b0
    ldr r0, =data_020c46c4
    ldr r0, [r0]
    bl func_ov015_02161fdc
    ldr r0, =data_020c46b8
    ldr r0, [r0]
    bl func_ov015_021616dc
    mov r0, r4
    bl func_ov036_02165f28
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02091d64
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov036_02169fe8(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov036_02169ffc(void)
{
}
