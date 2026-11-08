#include "ov045/Unk_ov045_02168e34.hpp"

extern "C" s32 func_ov045_02168e34(u8 *arg0);
extern "C" void func_ov045_02168ee0(s32 arg0, s32 arg1);
extern "C" void func_ov045_02168f00(void);
extern "C" void func_ov045_02168ffc(void);
extern "C" void func_ov045_0216910c(void);
extern "C" s32 func_ov045_02169454(...);
extern "C" s32 func_ov045_02169488(u8 *arg0);
extern "C" s32 func_ov045_021694b8(u8 *arg0);
extern "C" void func_ov045_021694ec(void);
extern "C" void func_ov045_02169660(void);
extern "C" s32 func_ov045_021697d4(u8 *arg0);
extern "C" s32 func_ov045_02169820(u8 *arg0);
extern "C" void func_ov045_02169890(u8 *arg0);
extern "C" void func_ov045_021698f4(u8 *arg0);
extern "C" void func_ov045_02169958(void);
extern "C" void func_ov045_02169ad0(void);
extern "C" void func_ov045_02169c6c(void);
extern "C" void func_ov045_02169d3c(void);
extern "C" void func_ov045_02169eec(void);
extern "C" void func_ov045_02169f04(void);
extern "C" void func_ov045_02169fc0(u8 *arg0);
extern "C" void func_ov045_0216a014(void);
extern "C" void func_ov045_0216a154(void);
extern "C" void func_ov045_0216a218(void);
extern "C" void func_ov045_0216a21c(void);
extern "C" void func_ov045_0216a284(void);
extern "C" s32 func_ov045_0216a288(s32 arg0);
extern "C" void func_ov045_0216a29c(void);

extern "C" char data_020c4642[];
extern "C" char data_020c46b8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c4814[];
extern "C" char data_020c5e40[];
extern "C" char data_ov045_0216a2a0[];
extern "C" char data_ov045_0216a2a4[];
extern "C" char data_ov045_0216a2a8[];
extern "C" char data_ov045_0216a2ac[];
extern "C" char data_ov045_0216a2b0[];
extern "C" char data_ov045_0216a2c0[];
extern "C" char data_ov045_0216a2cc[];
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" s32 _ZdlPv(...);
extern "C" void _s32_div_f(void);
extern "C" void func_020920c4(void);
extern "C" s32 func_02092270(...);
extern "C" void func_02093188(void);
extern "C" void func_02093368(void);
extern "C" void func_02093524(void);
extern "C" void func_0209386c(void);
extern "C" void func_02093928(void);
extern "C" void func_020939c8(void);
extern "C" s32 func_02097b3c(...);
extern "C" void func_ov015_02161760(void);
extern "C" void func_ov015_02161d00(void);
extern "C" void func_ov015_02161d24(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" s32 func_ov015_021620b8(...);
extern "C" s32 func_ov015_02162140(...);
extern "C" s32 func_ov015_021624f0(...);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" s32 func_ov015_021629c8(...);
extern "C" void func_ov015_02163040(void);
extern "C" void func_ov045_0216699c(void);
extern "C" s32 func_ov045_02166a40(...);
extern "C" void func_ov045_02166fcc(void);
extern "C" void func_ov045_02168464(void);

extern "C" s32 func_ov045_02168e34(u8 *arg0)
{
    s32 r1;
    s32 v4;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    r1 = *(s32 *)(arg0 + 0x3F50);
    if (r1 != 0) {
        t0 = *(s32 *)(((u8 *)&data_020c46d4));
        func_02092270(t0, r1);
        *(s32 *)(arg0 + 0x3F50) = 0;
    }
    r1 = *(s32 *)(arg0 + 0x4028);
    if (r1 != 0) {
        t1 = *(s32 *)(((u8 *)&data_020c46d4));
        func_02097b3c(t1, r1);
        *(s32 *)(arg0 + 0x4028) = 0;
    }
    r1 = *(s32 *)(arg0 + 0x3F54);
    if (r1 != 0) {
        t2 = *(s32 *)(((u8 *)&data_020c46d4));
        func_02092270(t2, r1);
        *(s32 *)(arg0 + 0x3F54) = 0;
        t3 = *(s32 *)(((u8 *)&data_020c46c4));
        func_ov015_021620b8(t3, 0xB, 0);
    }
    t4 = *(s32 *)(((u8 *)&data_020c46c4));
    v4 = func_ov015_02162140(t4, 5);
    return v4;
}

extern "C" void func_ov045_02168ee0(s32 arg0, s32 arg1)
{
    MI_CpuFill8(((arg1 * 0x24) + ((arg0 + 0x358) + 0x3C00)), 0, 0x24);
}

extern "C" asm void func_ov045_02168f00(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r4, #0x24
    mul r7, r1, r4
    add r1, r0, #0x358
    add r6, r1, #0x3c00
    ldr r1, [r6, r7]
    ldr r12, =data_ov045_0216a2a4
    mov r4, r1, lsr #0x1f
    rsb r1, r4, r1, lsl #29
    add r4, r4, r1, ror #29
    str r2, [r6, r7]
    add lr, r0, r7
    mov r10, r2, lsr #0x1f
    mov r5, r4, lsl #4
    rsb r4, r10, r2, lsl #29
    add r4, r10, r4, ror #29
    mov r4, r4, lsl #4
    add r8, r0, #0x35c
    ldr r1, =data_ov045_0216a2ac
    add r2, lr, #0x3000
    mov r6, #1
    str r6, [r2, #0xf74]
    add r6, r8, #0x3c00
    ldr r12, [r12]
    add r9, r0, #0xf60
    add r10, r0, #0x364
    str r12, [r6, r7]
    add r12, r5, #0x20
    add r5, r9, #0x3000
    ldr r8, [r1]
    cmp r3, #0
    add r0, r0, #0x368
    str r12, [r5, r7]
    add r1, r10, #0x3c00
    str r8, [r1, r7]
    add r4, r4, #0x20
    add r8, r0, #0x3c00
    str r4, [r8, r7]
    ldr r4, [r1, r7]
    ldr r0, [r6, r7]
    ldr r1, =0x55555556
    sub r4, r4, r0
    smull r0, r6, r1, r4
    add r6, r6, r4, lsr #31
    str r6, [r2, #0xf6c]
    ldr r4, [r8, r7]
    ldr r0, [r5, r7]
    addeq sp, sp, #0x10
    sub r3, r4, r0
    smull r0, r4, r1, r3
    add r4, r4, r3, lsr #31
    str r4, [r2, #0xf70]
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov045_02168ffc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r2, #0x24
    mul r4, r1, r2
    add r2, r0, #0x378
    add r7, r2, #0x3c00
    add r3, r0, r4
    add r12, r3, #0x3000
    add r2, r0, #0x3000
    ldr r6, [r7, r4]
    ldr r5, [r2, #0xf20]
    ldr r3, [r12, #0xf5c]
    ldr r2, [r12, #0xf60]
    add r6, r6, #1
    str r6, [r7, r4]
    ldr r8, [r12, #0xf6c]
    ldr r7, [r12, #0xf78]
    ldr r4, [r12, #0xf70]
    mla r6, r8, r7, r3
    mla r7, r4, r7, r2
    ldr lr, =data_ov045_0216a2a8
    cmp r8, #0
    ldr r4, [lr]
    ldr r2, [r12, #0xf64]
    bge @L_0216906c
    cmp r6, r2
    movlt r6, r2
    b @L_02169074
@L_0216906c:
    cmp r6, r2
    movgt r6, r2
@L_02169074:
    mov r2, #0x24
    mla r2, r1, r2, r0
    add r2, r2, #0x3000
    ldr r3, [r2, #0xf70]
    ldr r2, [r2, #0xf68]
    cmp r3, #0
    bge @L_0216909c
    cmp r7, r2
    movlt r7, r2
    b @L_021690a4
@L_0216909c:
    cmp r7, r2
    movgt r7, r2
@L_021690a4:
    mov r2, #0x24
    mla r2, r1, r2, r0
    add r1, r2, #0x3000
    ldr r2, [r1, #0xf64]
    cmp r6, r2
    ldreq r2, [r1, #0xf68]
    cmpeq r7, r2
    bne @L_021690d4
    mov r2, #0
    str r2, [r1, #0xf74]
    str r2, [r1, #0xf78]
    bl func_ov045_02169fc0
@L_021690d4:
    mov r0, r7, lsl #0x10
    mov r1, r0, asr #0x10
    ldr r0, =data_020c46d4
    str r1, [sp]
    mov r3, r6, lsl #0x10
    ldr r0, [r0]
    mov r1, r5
    mov r2, r4
    mov r3, r3, asr #0x10
    bl func_02093524
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov045_0216910c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r10, r0
    mov r9, r1
    mov r0, #0x24
    mla r1, r9, r0, r10
    add r0, r10, #0x3000
    add r4, r1, #0x3000
    ldr r8, [r0, #0xf20]
    ldr r7, [r0, #0xf40]
    ldr r3, [r0, #0xf44]
    ldr r0, =data_ov045_0216a2c0
    str r7, [sp, #0x24]
    ldr r6, [r4, #0xf58]
    add r5, sp, #0x14
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    rsb r0, r6, #4
    ldr r12, =data_ov045_0216a2cc
    add r7, sp, #4
    str r3, [sp, #0x28]
    str r0, [sp, #0x18]
    str r0, [sp, #0x1c]
    ldmia r12, {r0, r1, r2, r3}
    stmia r7, {r0, r1, r2, r3}
    ldr r1, [r4, #0xf64]
    ldr r0, [r4, #0xf68]
    mov r1, r1, lsl #0x10
    mov r0, r0, lsl #0x10
    add r11, r10, #0x3c8
    str r8, [sp, #0x20]
    add r8, r11, #0x3c00
    mov r3, r1, asr #0x10
    ldr r1, [r8, r9, lsl #3]
    mov r0, r0, asr #0x10
    add r7, r1, #1
    str r7, [r8, r9, lsl #3]
    str r0, [sp]
    ldr r4, =data_020c46d4
    add r11, sp, #0x20
    ldr r0, [r4]
    ldr r2, [r5, r9, lsl #2]
    ldr r1, [r11, r9, lsl #2]
    bl func_02093524
    cmp r7, #1
    mov r8, #0
    bne @L_02169258
    mov r0, r10
    mov r5, r8
    mov r4, #1
    bl func_ov045_02169454
    ldr r1, [r10, #0x10]
    cmp r1, #0
    cmpeq r0, #0
    moveq r5, r4
    beq @L_02169208
    ldr r0, [r10, #0x10]
    cmp r0, #1
    bne @L_02169208
    add r0, r10, #0x3000
    ldr r0, [r0, #0xf7c]
    cmp r0, #0
    movne r5, #1
@L_02169208:
    cmp r5, #0
    beq @L_02169424
    add r0, r10, #0x3000
    ldr r1, [r0, #0xf58]
    ldr r0, [r0, #0xe94]
    mov r2, #0x3c
    add r0, r1, r0, lsl #3
    mul r6, r0, r2
    add r3, r10, r6
    ldrh r5, [r3, #0x64]
    add r0, r10, #0x238
    add r1, r10, #0x40
    add r3, r10, #0x3e00
    add r0, r0, #0x3c00
    add r1, r1, r6
    strh r5, [r3, #0x80]
    bl MI_CpuCopy8
    add r0, r10, #0x3000
    str r4, [r0, #0xfe0]
    b @L_02169424
@L_02169258:
    cmp r7, #3
    mov r0, #1
    bge @L_021692a8
    ldr r0, [r10, #0x10]
    cmp r0, #0
    bne @L_02169288
@L_02169270:
    ldr r0, [r4]
    ldr r1, [r11, r9, lsl #2]
    ldr r2, [r5, r9, lsl #2]
    mov r3, #2
    bl func_02093928
    b @L_02169424
@L_02169288:
    str r8, [sp]
    add r3, sp, #4
    ldr r0, [r4]
    ldr r1, [r11, r9, lsl #2]
    ldr r2, [r5, r9, lsl #2]
    ldr r3, [r3, r6, lsl #3]
@L_021692a0:
    bl func_020939c8
    b @L_02169424
@L_021692a8:
    cmp r7, #6
    bge @L_021692f8
    ldr r1, [r10, #0x10]
    cmp r1, #0
    bne @L_021692d8
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [r11, r9, lsl #2]
    ldr r2, [r5, r9, lsl #2]
    mov r3, #2
    bl func_0209386c
    b @L_02169424
@L_021692d8:
    add r0, sp, #4
    str r8, [sp]
    add r3, r0, r6, lsl #3
    ldr r0, [r4]
    ldr r1, [r11, r9, lsl #2]
    ldr r2, [r5, r9, lsl #2]
    ldr r3, [r3, #4]
    b @L_021692a0
@L_021692f8:
    cmp r7, #9
    bge @L_02169314
    ldr r0, [r10, #0x10]
    cmp r0, #0
    bne @L_02169310
    b @L_02169270
@L_02169310:
    b @L_02169288
@L_02169314:
    bne @L_02169408
    ldr r0, [r10, #0x10]
    cmp r0, #0
    bne @L_02169374
    mov r0, r10
    bl func_ov045_02169454
    cmp r0, #0
    addne r1, r10, #0x3000
    ldrne r1, [r1, #0xe24]
    cmpne r0, r1
    bne @L_02169360
    add r0, r10, #0x3000
    ldr r1, [r0, #0xe24]
    mov r0, r10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r2, #0
    bl func_ov045_02168464
    b @L_02169424
@L_02169360:
    mov r8, #1
    mov r0, r10
    mov r1, r8
    bl func_ov045_02166a40
    b @L_02169424
@L_02169374:
    cmp r0, #1
    bne @L_021693cc
    add r0, r10, #0x3000
    ldr r0, [r0, #0xf7c]
    cmp r0, #0
    mov r0, r10
    bne @L_0216939c
    mov r1, r8
    bl func_ov045_02166a40
    b @L_02169420
@L_0216939c:
    bl func_ov045_02166fcc
    add r0, r10, #0x3000
    add r1, r10, #0x3e00
    ldr r0, [r0, #0xe24]
    ldrh r2, [r1, #0x80]
    mov r1, r0, lsl #0x10
    mov r0, r10
    mov r1, r1, lsr #0x10
    bl func_ov045_02168464
    mov r0, r10
    bl func_ov045_02166fcc
    b @L_02169424
@L_021693cc:
    cmp r0, #2
    bne @L_02169424
    add r0, r10, #0x3000
    ldr r0, [r0, #0xfa0]
    mov r1, r8
    cmp r0, #0
    mov r0, r10
    bne @L_021693f4
    bl func_ov045_02166a40
    b @L_02169404
@L_021693f4:
    mov r2, r8
    bl func_ov045_0216699c
    ldr r0, =data_020c4642
    strh r8, [r0]
@L_02169404:
    b @L_02169420
@L_02169408:
    cmp r7, #0x1e
    bne @L_02169424
    mov r0, r10
    mov r1, r8
    mov r2, r8
    bl func_ov045_0216699c
@L_02169420:
    mov r8, #1
@L_02169424:
    cmp r8, #0
    addne r0, r10, r9, lsl #3
    addne r0, r0, #0x3000
    movne r1, #0
    strne r1, [r0, #0xfc4]
    strne r1, [r0, #0xfc8]
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov045_02169454(...)
{
    add r1, r0, #0x3000
    ldr r2, [r1, #0xfdc]
    cmp r2, #0
    addne r0, r0, #0x3e00
    ldrneh r0, [r0, #0x5c]
    bxne lr
    ldr r3, [r1, #0xf58]
    ldr r2, [r1, #0xe94]
    mov r1, #0x3c
    add r2, r3, r2, lsl #3
    mla r0, r2, r1, r0
    ldrh r0, [r0, #0x64]
    bx lr
}

extern "C" s32 func_ov045_02169488(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x3FDC) != 0) {
        return *(s32 *)(arg0 + 0x3E6C);
    } else {
        return *(s32 *)(((u8 *)(((*(s32 *)(arg0 + 0x3F58) + (*(s32 *)(arg0 + 0x3E94) << 3)) * 0x3C) + arg0)) + 0x74);
    }
}

extern "C" s32 func_ov045_021694b8(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x3FDC) != 0) {
        return (s32)((arg0 + 0x238) + 0x3C00);
    } else {
        return (s32)(((*(s32 *)(arg0 + 0x3F58) + (*(s32 *)(arg0 + 0x3E94) << 3)) * 0x3C) + (arg0 + 0x40));
    }
}

extern "C" asm void func_ov045_021694ec(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =data_020c46b8
    mov r6, r0
    ldr r0, [r2]
    mov r5, r1
    mov r4, #0
    bl func_ov015_02161760
    cmp r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r6, #0xc]
    cmp r0, #6
    addeq r0, r6, #0x3000
    ldreq r1, [r0, #0xfe0]
    cmpeq r1, #0
    ldreq r0, [r0, #0xe8c]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0x24
    b @L_02169560
@L_02169538:
    mla r0, r4, r1, r6
    add r0, r0, #0x3000
    ldr r0, [r0, #0xf74]
    cmp r0, #0
    addeq r0, r6, r4, lsl #3
    addeq r0, r0, #0x3000
    ldreq r0, [r0, #0xfc4]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r4, r4, #1
@L_02169560:
    cmp r4, #3
    blt @L_02169538
    ldr r0, =data_020c4814
    ldr r4, =data_020c46c4
    ldrh r1, [r0]
    ldr r0, [r4]
    orr r1, r1, r5
    mov r1, r1, lsl #0x10
    mov r7, r1, lsr #0x10
    bl func_ov015_021629ac
    cmp r0, #1
    bne @L_021695b0
    ldr r0, [r4]
    add r0, r0, #0xf00
    ldrh r5, [r0, #0x38]
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0
    mov r7, r5
    strh r1, [r0, #0x38]
@L_021695b0:
    tst r5, #1
    beq @L_021695c4
    mov r0, r6
    bl func_ov045_02169660
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021695c4:
    tst r5, #2
    beq @L_021695d8
    mov r0, r6
    bl func_ov045_021697d4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021695d8:
    tst r5, #0x400
    beq @L_021695ec
    mov r0, r6
    bl func_ov045_02169820
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021695ec:
    tst r5, #0x200
    beq @L_02169600
    mov r0, r6
    bl func_ov045_02169890
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169600:
    tst r5, #0x100
    beq @L_02169614
    mov r0, r6
    bl func_ov045_021698f4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169614:
    tst r5, #0x20
    beq @L_02169628
    mov r0, r6
    bl func_ov045_02169958
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169628:
    tst r5, #0x10
    beq @L_0216963c
    mov r0, r6
    bl func_ov045_02169ad0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216963c:
    tst r7, #0xc0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r7
    bl func_ov045_02169c6c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov045_02169660(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #0x10]
    mov r5, #1
    cmp r1, #3
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0216968c
    b @L_02169740
    b @L_02169774
    b @L_021697a8
@L_0216968c:
    add r1, r4, #0x3000
    ldr r1, [r1, #0xfdc]
    cmp r1, #0
    bne @L_02169730
    bl func_ov045_02169488
    ldr r1, =0x14a0
    tst r0, r1
    beq @L_021696bc
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_021696bc:
    add r2, r4, #0x3000
    ldr r0, [r2, #0xe7c]
    cmp r0, #0
    beq @L_021696ec
    ldr r0, =data_020c5e40
    mov r1, r5
    str r5, [r2, #0xfc4]
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    mov r1, r5
    bl func_ov045_02169eec
    ldmia sp!, {r3, r4, r5, pc}
@L_021696ec:
    mov r0, r4
    bl func_ov045_02169454
    cmp r0, #0
    beq @L_02169720
    ldr r0, =data_020c5e40
    add r2, r4, #0x3000
    mov r1, r5
    str r5, [r2, #0xfc4]
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    mov r1, r5
    bl func_ov045_02169eec
    ldmia sp!, {r3, r4, r5, pc}
@L_02169720:
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_02169730:
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_02169740:
    add r0, r4, #0x3000
    ldr r2, [r0, #0xf7c]
    mov r1, r5
    str r1, [r0, #0xfcc]
    cmp r2, #0
    bne @L_02169768
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_02169768:
    ldr r0, =data_020c5e40
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_02169774:
    add r0, r4, #0x3000
    ldr r2, [r0, #0xfa0]
    mov r1, r5
    str r1, [r0, #0xfd4]
    cmp r2, #0
    bne @L_0216979c
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_0216979c:
    ldr r0, =data_020c5e40
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, pc}
@L_021697a8:
    mov r1, #0xb
    bl func_ov045_02169eec
    ldr r0, =data_020c5e40
    mov r1, r5
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r4
    mov r1, #0
    bl func_ov045_02166a40
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov045_021697d4(u8 *arg0)
{
    s32 v2;
    if (*(u8 *)(((u8 *)(arg0 + 0x3000)) + 0xE2C) != 0)
        return (s32)arg0;
    if (*(s32 *)(arg0 + 0x10) != 0)
        return (s32)arg0;
    ((s32 (*)(...))func_ov045_02169eec)((s32)arg0, 2);
    _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 4);
    v2 = func_ov045_02166a40((s32)arg0, 2);
    return v2;
}

extern "C" s32 func_ov045_02169820(u8 *arg0)
{
    u8 *r4;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 t0;
    s32 t1;
    t0 = *(s32 *)(data_020c46c4);
    v0 = func_ov015_021629c8(t0, (s32)data_020c46c4);
    if (*(s32 *)(arg0 + 0x34) == (v0 - 9))
        return (v0 - 9);
    t1 = *(s32 *)(arg0 + 0x34);
    v1 = func_ov045_02169454((s32)arg0, t1);
    r4 = arg0;
    if (v1 == 0) {
        v2 = _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 9);
        return v2;
    } else {
        if (*(s32 *)(r4 + 0x10) != 0)
            return *(s32 *)(r4 + 0x10);
        *(s32 *)(((u8 *)(r4 + 0x3000)) + 0xE8C) = 1;
        v3 = _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 1, (r4 + 0x3000));
        return v3;
    }
}

extern "C" void func_ov045_02169890(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x10) != 0)
        return;
    *(s32 *)(arg0 + 0x3E94) = (*(s32 *)(arg0 + 0x3E94) + 0xC) % 0xD;
    *(s32 *)(arg0 + 0x3FE0) = 1;
    ((void (*)(u8 *, s32))func_ov045_02169eec)(arg0, 3);
    ((void (*)(void *, s32))_ZN12SoundManager9PlaySoundEi)(data_020c5e40, 1);
}

extern "C" void func_ov045_021698f4(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x10) != 0)
        return;
    *(s32 *)(arg0 + 0x3E94) = (*(s32 *)(arg0 + 0x3E94) + 1) % 0xD;
    *(s32 *)(arg0 + 0x3FE0) = 1;
    ((void (*)(u8 *, s32))func_ov045_02169eec)(arg0, 4);
    ((void (*)(void *, s32))_ZN12SoundManager9PlaySoundEi)(data_020c5e40, 1);
}

extern "C" asm void func_ov045_02169958(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    ldr r0, [r4, #0x10]
    cmp r0, #0
    beq @L_02169980
    cmp r0, #1
    beq @L_021699f8
    cmp r0, #2
    beq @L_02169a60
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169980:
    add r0, r4, #0x3000
    ldr r1, [r0, #0xfdc]
    cmp r1, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r5, =data_020c46d4
    mov r7, #2
    ldr r1, [r0, #0xf20]
    ldr r0, [r5]
    mov r3, r7
    mov r2, #6
    bl func_02093928
    add r0, r4, #0x3000
    mov r6, #1
    ldr r1, [r0, #0xf3c]
    str r6, [r0, #0xfdc]
    str r6, [sp]
    ldr r0, [r5]
    mov r2, r6
    mov r3, r7
    bl func_0209386c
    mov r0, r4
    mov r1, r6
    mov r2, r7
    mov r3, r7
    str r6, [sp]
    bl func_ov045_02169f04
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021699f8:
    add r0, r4, #0x3000
    mov r3, #1
    mov r2, #0x38
    mov r1, #0x68
    ldr r5, [r0, #0xf40]
    str r1, [r0, #0xf8c]
    str r3, [r0, #0xf7c]
    str r2, [r0, #0xf88]
    mov r4, #3
    ldr r6, =data_020c46d4
    str r3, [sp]
    mov r7, #2
    ldr r0, [r6]
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_0209386c
    ldr r0, [r6]
    mov r1, r5
    mov r3, r7
    add r2, r4, #1
    bl func_02093928
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02169a60:
    add r0, r4, #0x3000
    ldr r5, [r0, #0xf44]
    mov r3, #1
    mov r2, #0x38
    mov r1, #0x68
    mov r4, #3
    mov r7, #2
    str r3, [r0, #0xfa0]
    str r2, [r0, #0xfac]
    str r1, [r0, #0xfb0]
    ldr r6, =data_020c46d4
    str r3, [sp]
    ldr r0, [r6]
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_0209386c
    ldr r0, [r6]
    mov r1, r5
    mov r3, r7
    add r2, r4, #1
    bl func_02093928
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov045_02169ad0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r4, r0
    ldr r0, [r4, #0x10]
    mov r5, #0
    cmp r0, #0
    beq @L_02169b04
    cmp r0, #1
    beq @L_02169b8c
    cmp r0, #2
    beq @L_02169bf8
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02169b04:
    add r0, r4, #0x3000
    ldr r1, [r0, #0xfdc]
    cmp r1, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r6, =data_020c46d4
    mov r8, #1
    mov r7, #2
    ldr r1, [r0, #0xf3c]
    ldr r0, [r6]
    mov r2, r8
    mov r3, r7
    bl func_02093928
    add r0, r4, #0x3000
    ldr r1, [r0, #0xf20]
    str r5, [r0, #0xfdc]
    str r8, [sp]
    ldr r0, [r6]
    mov r3, r7
    mov r2, #6
    bl func_0209386c
    mov r0, r4
    mov r1, r8
    mov r2, r5
    mov r3, r8
    str r8, [sp]
    bl func_ov045_02169f04
    mov r0, r4
    bl func_ov045_02169fc0
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02169b8c:
    add r0, r4, #0x3000
    mov r2, #0x98
    mov r1, #0x68
    str r5, [r0, #0xf7c]
    mov r7, #2
    ldr r6, [r0, #0xf40]
    str r1, [r0, #0xf8c]
    str r2, [r0, #0xf88]
    mov r0, #1
    mov r4, #4
    ldr r5, =data_020c46d4
    str r0, [sp]
    ldr r0, [r5]
    mov r1, r6
    mov r2, r4
    mov r3, r7
    bl func_0209386c
    ldr r0, [r5]
    mov r1, r6
    mov r3, r7
    sub r2, r4, #1
    bl func_02093928
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02169bf8:
    add r0, r4, #0x3000
    ldr r6, [r0, #0xf44]
    mov r2, #0x98
    mov r1, #0x68
    mov r4, #4
    mov r7, #2
    str r5, [r0, #0xfa0]
    str r2, [r0, #0xfac]
    str r1, [r0, #0xfb0]
    mov r0, #1
    ldr r5, =data_020c46d4
    str r0, [sp]
    ldr r0, [r5]
    mov r1, r6
    mov r2, r4
    mov r3, r7
    bl func_0209386c
    ldr r0, [r5]
    mov r1, r6
    mov r3, r7
    sub r2, r4, #1
    bl func_02093928
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov045_02169c6c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r6, r0
    ldr r5, [r6, #0x10]
    cmp r5, #0
    addeq r0, r6, #0x3000
    ldreq r0, [r0, #0xfdc]
    cmpeq r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, #0x24
    tst r1, #0x80
    mla r1, r5, r0, r6
    ldr r0, =data_ov045_0216a2b0
    mov r4, #0
    ldr r12, [r0]
    ldr r3, [r0, #4]
    add r0, r1, #0x3000
    add r2, sp, #4
    ldr r1, =data_ov045_0216a2a0
    movne r4, #1
    str r12, [sp, #4]
    str r3, [sp, #8]
    add r2, r2, r5, lsl #3
    ldr r7, [r0, #0xf58]
    ldr r0, [r2, r4, lsl #2]
    ldr r1, [r1]
    add r0, r7, r0
    bl _s32_div_f
    mov r8, r1
    cmp r5, #0
    bne @L_02169d18
    cmp r4, #0
    cmpeq r7, #0
    bne @L_02169d04
    mov r0, r6
    bl func_ov045_02169890
    b @L_02169d18
@L_02169d04:
    cmp r4, #1
    cmpeq r7, #7
    bne @L_02169d18
    mov r0, r6
    bl func_ov045_021698f4
@L_02169d18:
    mov r0, r6
    mov r1, r5
    mov r2, r8
    mov r3, #1
    bl func_ov045_02168f00
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov045_02169d3c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, =data_020c46d4
    mov r10, r0
    ldr r0, [r4]
    mov r9, r1
    mov r11, #1
    mov r8, r2
    mov r1, #2
    mov r2, r11
    mov r7, r3
    mov r5, #0
    mov r6, #0x64
    bl func_020920c4
    add r1, r10, r9, lsl #2
    add r2, r10, r8, lsl #2
    add r1, r1, #0x3000
    str r0, [r1, #0xf20]
    add r1, r2, #0x3000
    ldr r1, [r1, #0xeb8]
    mov r8, r0
    and r3, r1, #0xff
    ldr r0, [r4]
    mov r1, r8
    mov r2, r11
    bl func_02093188
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r8
    mov r2, r11
    mov r3, r7
    bl func_020939c8
    ldr r0, [sp, #0x34]
    ldr r3, [sp, #0x30]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    mov r3, r3, lsl #0x10
    ldr r0, [r4]
    mov r1, r8
    mov r2, r11
    mov r3, r3, asr #0x10
    bl func_02093524
    ldr r3, [sp, #0x3c]
    ldr r0, [r4]
    mov r3, r3, lsl #0x10
    mov r1, r8
    mov r2, r11
    mov r3, r3, lsr #0x10
    bl func_02093368
    str r11, [sp]
    ldr r0, [r4]
    mov r3, #2
    mov r2, r11
    mov r1, r8
    bl func_0209386c
    ldr r0, [sp, #0x38]
    ldr r1, [sp, #0x38]
    cmp r0, #6
    cmpne r0, #7
    cmpne r0, #0xb
    mov r2, r1, lsl #0x10
    mov r4, #1
    ldreq r6, =0x262
    ldr r0, =data_020c46c4
    stmia sp, {r4, r6}
    ldr r0, [r0]
    mov r1, r4
    mov r3, r8
    mov r2, r2, lsr #0x10
    bl func_ov015_02163040
    movs r6, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    ldrb r0, [sp, #0x40]
    strb r5, [r6, #0x10]
    strb r5, [r6, #0xf]
    strh r5, [r6, #0xc]
    cmp r0, #1
    addne sp, sp, #8
    strb r5, [r6, #0x11]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, r5
    mov r2, r4
    mov r3, r5
    add r0, r6, #0x3a
    bl func_ov015_02161d00
    mov r1, r5
    mov r2, r7
    mov r3, r5
    add r0, r6, #0x3a
    bl func_ov015_02161d24
    mov r1, r5
    mov r2, r4
    mov r3, r5
    add r0, r6, #0x3e
    bl func_ov015_02161d00
    add r0, r6, #0x3e
    add r2, r7, #1
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d24
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov045_02169eec(void)
{
    func_ov015_021624f0(*(s32 *)(data_020c46c4));
}

extern "C" asm void func_ov045_02169f04(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r4, [sp, #0x20]
    ldr r5, =data_020c46c4
    mov r9, r0
    ldr r0, [r5]
    mov r4, r4, lsl #0x10
    mov r8, r1
    mov r1, r4, lsr #0x10
    mov r7, r2
    mov r6, r3
    mov r5, #0
    bl func_ov015_02161dd4
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r1, r9, r8, lsl #2
    ldr r0, =data_020c46d4
    str r5, [sp]
    add r1, r1, #0x3000
    mov r8, #1
    ldr r0, [r0]
    ldr r1, [r1, #0xf20]
    mov r2, r8
    mov r3, r7
    bl func_020939c8
    mov r1, r5
    mov r2, r8
    mov r3, r5
    add r0, r4, #0x3a
    bl func_ov015_02161d00
    mov r1, r5
    mov r2, r7
    add r0, r4, #0x3a
    mov r3, r5
    bl func_ov015_02161d24
    mov r2, r8
    add r0, r4, #0x3e
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d00
    add r0, r4, #0x3e
    mov r2, r6
    mov r1, r5
    mov r3, r5
    bl func_ov015_02161d24
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_ov045_02169fc0(u8 *arg0)
{
    s32 a = *(s32 *)(arg0 + 0x3E20);
    s32 b = *(s32 *)(arg0 + 0x3F58) + *(s32 *)(arg0 + 0x3E94) * 8;
    if (a < 0x64)
        return;
    if (b >= 0x64)
        ((void (*)(u8 *, s32, s32, s32, s32))func_ov045_02169f04)(arg0, 1, 2, 2, 1);
    else
        ((void (*)(u8 *, s32, s32, s32, s32))func_ov045_02169f04)(arg0, 1, 0, 1, 1);
}

extern "C" asm void func_ov045_0216a014(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =data_020c46b8
    mov r6, r0
    ldr r0, [r2]
    mov r5, r1
    mov r4, #0
    bl func_ov015_02161760
    cmp r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r6, #0xc]
    cmp r0, #6
    addeq r0, r6, #0x3000
    ldreq r1, [r0, #0xfe0]
    cmpeq r1, #0
    ldreq r0, [r0, #0xe8c]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0x24
    b @L_0216a088
@L_0216a060:
    mla r0, r4, r1, r6
    add r0, r0, #0x3000
    ldr r0, [r0, #0xf74]
    cmp r0, #0
    addeq r0, r6, r4, lsl #3
    addeq r0, r0, #0x3000
    ldreq r0, [r0, #0xfc4]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r4, r4, #1
@L_0216a088:
    cmp r4, #3
    blt @L_0216a060
    ldr r4, =data_020c46c4
    mov r7, #1
    ldr r0, [r4]
    mov r1, r5
    mov r2, r7
    bl func_ov015_02162750
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    b @L_0216a0cc
    b @L_0216a0fc
    b @L_0216a114
    b @L_0216a130
    b @L_0216a0e4
@L_0216a0cc:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov045_0216a154
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a0e4:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov045_0216a218
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a0fc:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    bl func_ov045_0216a21c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a114:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    mov r2, #0
    bl func_ov045_0216a284
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a130:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r6
    mov r2, r7
    bl func_ov045_0216a284
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov045_0216a154(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r7, r1
    add r1, r4, #0x3000
    add r2, r4, #0x4000
    cmp r7, #5
    str r7, [r2, #0x2c]
    sub r5, r7, #0xc
    ldr r6, [r1, #0xf58]
    cmpne r7, #6
    beq @L_0216a18c
    cmp r7, #7
    beq @L_0216a198
    b @L_0216a19c
@L_0216a18c:
    mov r0, r4
    bl func_ov045_02169958
    b @L_0216a19c
@L_0216a198:
    bl func_ov045_02169ad0
@L_0216a19c:
    cmp r7, #0xc
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r7, #0x13
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r4, #0x3000
    ldr r0, [r0, #0xfdc]
    cmp r0, #0
    bne @L_0216a1e4
    cmp r6, r5
    mov r0, r4
    bne @L_0216a1d0
    bl func_ov045_02169660
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a1d0:
    mov r2, r5
    mov r1, #0
    mov r3, #1
    bl func_ov045_02168f00
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216a1e4:
    mov r0, r4
    bl func_ov045_02169ad0
    mov r0, r4
    mov r2, r5
    mov r1, #0
    mov r3, #1
    bl func_ov045_02168f00
    add r0, r4, #0x3000
    ldr r2, [r0, #0xf64]
    ldr r1, [r0, #0xf68]
    str r2, [r0, #0xf5c]
    str r1, [r0, #0xf60]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov045_0216a218(void)
{
}

extern "C" asm void func_ov045_0216a21c(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0xb
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    b @L_0216a25c
    b @L_0216a264
    b @L_0216a274
    b @L_0216a27c
    ldmia sp!, {r3, pc}
    b @L_0216a25c
    b @L_0216a25c
    ldmia sp!, {r3, pc}
    b @L_0216a26c
    b @L_0216a26c
    b @L_0216a25c
@L_0216a25c:
    bl func_ov045_02169660
    ldmia sp!, {r3, pc}
@L_0216a264:
    bl func_ov045_021697d4
    ldmia sp!, {r3, pc}
@L_0216a26c:
    bl func_ov045_02169820
    ldmia sp!, {r3, pc}
@L_0216a274:
    bl func_ov045_02169890
    ldmia sp!, {r3, pc}
@L_0216a27c:
    bl func_ov045_021698f4
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov045_0216a284(void)
{
}

extern "C" s32 func_ov045_0216a288(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov045_0216a29c(void)
{
}
