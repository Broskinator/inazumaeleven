#include "ov074/Unk_ov074_0216ffa0.hpp"

extern "C" void func_ov074_0216ffa0(u8 *arg0, s32 arg1);
extern "C" void func_ov074_0216ffbc(void);
extern "C" void func_ov074_02170074(void);
extern "C" void func_ov074_021700c8(void);
extern "C" s32 func_ov074_02170158(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov074_02170190(...);
extern "C" void func_ov074_021701f4(void);
extern "C" void func_ov074_021702b0(void);
extern "C" void func_ov074_021703ac(void);
extern "C" void func_ov074_02170548(void);
extern "C" void func_ov074_0217084c(void);
extern "C" s32 func_ov074_0217086c(u8 *arg0);
extern "C" void func_ov074_0217088c(void);
extern "C" s32 func_ov074_021708d4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov074_02170910(void);
extern "C" void func_ov074_02170960(void);
extern "C" void func_ov074_021709c0(void);
extern "C" void func_ov074_02170a24(void);
extern "C" void func_ov074_02170a74(void);
extern "C" void func_ov074_02170c58(void);
extern "C" void func_ov074_02170ce4(void);
extern "C" void func_ov074_02170f90(void);
extern "C" s32 func_ov074_02170f94(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov074_02170fe8(u8 *arg0);
extern "C" s32 func_ov074_02170ffc(u8 *arg0);
extern "C" s32 func_ov074_02171010(u8 *arg0);
extern "C" s32 func_ov074_02171024(s32 arg0);
extern "C" void func_ov074_02171038(void);

extern "C" char data_020c4638[];
extern "C" char data_020c46a8[];
extern "C" char data_020c47b4[];
extern "C" char data_020c9660[];
extern "C" char data_020cb0e4[];
extern "C" char data_ov074_0217103c[];
extern "C" char data_ov074_0217104e[];
extern "C" char data_ov074_0217105c[];
extern "C" char data_ov074_02171180[];
extern "C" char data_ov074_021711f0[];
extern "C" char data_ov074_02171214[];
extern "C" void DC_FlushRange(void);
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003a68(void);
extern "C" void func_02003b48(void);
extern "C" void func_0200846c(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_02132568(void);
extern "C" void func_ov015_02132984(void);
extern "C" s32 func_ov015_02132a04(...);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_021330b4(void);
extern "C" void func_ov015_02133efc(void);
extern "C" void func_ov015_021340c0(void);
extern "C" void func_ov015_02134118(void);
extern "C" s32 func_ov015_02134198(...);
extern "C" s32 func_ov015_02134208(...);
extern "C" void func_ov015_02135440(void);
extern "C" s32 func_ov015_02135e10(...);
extern "C" void func_ov015_0213b364(void);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" void func_ov015_0213b6ac(void);
extern "C" void func_ov015_0213b870(void);
extern "C" void func_ov015_0213c33c(void);
extern "C" void strcpy(void);

extern "C" void func_ov074_0216ffa0(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0) = (s32)data_ov074_02171180;
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0 + 0xE0) = 0;
}

extern "C" asm void func_ov074_0216ffbc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #8]
    cmp r0, #3
    movne r0, #1
    ldmneia sp!, {r4, pc}
    ldrb r0, [r1]
    cmp r0, #0
    ldreqsh r2, [r4, #0xe]
    ldreqsh r0, [r1, #2]
    cmpeq r2, r0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb r0, [r1]
    add lr, r1, #4
    add r12, r4, #0x10
    strb r0, [r4, #0xc]
    ldrb r0, [r1, #1]
    mov r3, #0x10
    strb r0, [r4, #0xd]
    ldrsh r0, [r1, #2]
    strh r0, [r4, #0xe]
@L_02170014:
    ldrb r2, [lr]
    ldrb r0, [lr, #1]
    add lr, lr, #2
    subs r3, r3, #1
    strb r0, [r12, #1]
    strb r2, [r12], #2
    bne @L_02170014
    add lr, r1, #0x24
    add r12, r4, #0x30
    mov r3, #0x10
@L_0217003c:
    ldrb r2, [lr]
    ldrb r0, [lr, #1]
    add lr, lr, #2
    subs r3, r3, #1
    strb r0, [r12, #1]
    strb r2, [r12], #2
    bne @L_0217003c
    ldrsh r1, [r1, #0x44]
    mov r0, r4
    strh r1, [r4, #0x50]
    bl func_ov074_02170190
    mov r0, #1
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov074_02170074(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [r0, #0x84]
    cmp r6, #0
    ldrne r1, =data_ov074_0217103c
    ldrne r7, =data_ov074_0217105c
    ldrne r1, [r1, #0x20]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0x84
    mov r4, #0xc
@L_0217009c:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_0217009c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov074_021700c8(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    mov r5, r0
    mov r4, #0
    mov r1, r4
    add r0, r5, #0x84
    mov r2, #0x54
    bl MI_CpuFill8
    ldr r0, =data_ov074_021711f0
    add r1, r5, #0x84
    bl func_ov015_02133efc
    mov r2, r4
@L_021700f8:
    add r0, r5, r4
    add r4, r4, #1
    strb r2, [r0, #0xd8]
    cmp r4, #7
    blt @L_021700f8
    ldr r3, =data_020c47b4
    ldr r1, =data_ov074_02171214
    ldr r0, [r3]
    cmp r0, #0
    addeq sp, sp, #0x14
    ldmeqia sp!, {r4, r5, pc}
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r5, #0xe0
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, pc}
}

extern "C" s32 func_ov074_02170158(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    func_ov015_02134198((arg0 + 0x84), 7, arg2, arg3);
    r4 = 0xC;
    r5 = (arg0 + 0x84);
    r6 = 0;
    do {
        s32 v1 = func_ov015_02134208(((r6 * r4) + r5));
        arg0 = v1;
        r6 = (r6 + 1);
    } while (r6 < 7);
    return arg0;
}

extern "C" asm s32 func_ov074_02170190(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r8, #0
    ldr r7, =data_020c47b4
    mov r10, r0
    mov r6, r8
    mov r5, r8
    mov r4, #0xc
@L_021701ac:
    mla r9, r8, r4, r10
    ldr r1, [r9, #0x54]
    cmp r1, #0
    beq @L_021701c8
    mov r0, r7
    bl _ZN8GameHeap4FreeEPv
    str r6, [r9, #0x54]
@L_021701c8:
    ldr r1, [r9, #0x58]
    cmp r1, #0
    beq @L_021701e0
    mov r0, r7
    bl _ZN8GameHeap4FreeEPv
    str r5, [r9, #0x58]
@L_021701e0:
    add r8, r8, #1
    cmp r8, #4
    blt @L_021701ac
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov074_021701f4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldr r0, [r4]
    mul r5, r2, r3
    strh r2, [r4, #8]
    strh r3, [r4, #0xa]
    cmp r0, #0
    bne @L_0217022c
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #1
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4]
@L_0217022c:
    ldr r0, [r4, #4]
    cmp r0, #0
    bne @L_02170250
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #5
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #4]
@L_02170250:
    ldr r2, [r4]
    cmp r2, #0
    ldrne r0, [r4, #4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    mov r1, #0
    ble @L_02170288
@L_02170270:
    add r0, r1, #1
    mov r0, r0, lsl #0x10
    strh r1, [r2], #2
    cmp r5, r0, lsr #16
    mov r1, r0, lsr #0x10
    bgt @L_02170270
@L_02170288:
    mov r5, r5, lsl #5
    ldr r0, [r4, #4]
    mov r2, r5
    mov r1, #0
    bl MI_CpuFill8
    ldr r0, [r4, #4]
    mov r1, r5
    bl DC_FlushRange
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov074_021702b0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    add r5, r0, #0x54
    mov r4, #0xc
    mla r4, r3, r4, r5
    mov r5, r2
    mov r6, r1
    ldr r2, [sp, #0x34]
    ldr r3, [sp, #0x38]
    mov r1, r4
    bl func_ov074_021701f4
    ldr r1, [r4, #4]
    cmp r1, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r6, #0
    beq @L_0217034c
    mov r0, #3
    str r0, [sp]
    str r0, [sp, #4]
    mov r3, #1
    str r3, [sp, #8]
    mov r2, #0
    str r2, [sp, #0xc]
    ldr r0, [sp, #0x3c]
    ldr r2, [sp, #0x40]
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x30]
    str r2, [sp, #0x14]
    str r0, [sp, #0x18]
    str r3, [sp, #0x1c]
    ldrh r2, [r4, #8]
    ldrh r3, [r4, #0xa]
    mov r0, r5
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl func_ov015_021330b4
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, pc}
@L_0217034c:
    mov r2, #3
    str r2, [sp]
    ldr r0, [sp, #0x30]
    mov r3, #0
    stmib sp, {r0, r1}
    ldrh r1, [r4, #8]
    ldr r0, =data_020c46a8
    ldr r2, [sp, #0x40]
    mov r1, r1, lsl #3
    str r1, [sp, #0xc]
    ldrh r4, [r4, #0xa]
    ldr r1, [sp, #0x3c]
    mov r4, r4, lsl #3
    str r4, [sp, #0x10]
    str r3, [sp, #0x14]
    str r3, [sp, #0x18]
    ldr r0, [r0]
    mov r3, r5
    ldr r4, [r0]
    ldr r4, [r4, #8]
    blx r4
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov074_021703ac(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    ldr r5, [sp, #0x54]
    mov r4, #0xc
    mla r0, r5, r4, r0
    ldr r4, [r0, #0x84]
    ldr r0, [sp, #0x58]
    ldr r8, [sp, #0x4c]
    ldr r7, [sp, #0x50]
    mov r10, r1
    str r2, [sp, #0x20]
    mov r9, r3
    cmp r4, #0
    str r0, [sp, #0x58]
    addeq sp, sp, #0x24
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x48]
    mov r5, #0
    cmp r9, r0
    movgt r9, r0
    ldr r0, [r4, #0xc]
    add r6, r4, r0
    ldr r0, [sp, #0x20]
    mov r0, r0, lsl #0x18
    mov r4, r0, asr #0x18
    ldr r0, [sp, #0x58]
    and r11, r0, #0xff
@L_02170418:
    mov r0, #1
    str r0, [sp]
    ldr r1, =0x66666667
    str r0, [sp, #4]
    smull r2, r0, r1, r9
    mov r1, r9, lsr #0x1f
    add r0, r1, r0, asr #2
    mov r1, #0xa
    smull r0, r2, r1, r0
    sub r0, r9, r0
    mov r1, #6
    mul r1, r0, r1
    add r0, r6, r1, lsl #1
    ldr r1, =0x66666667
    mov r3, r9
    smull r2, r9, r1, r3
    mov r1, r3, lsr #0x1f
    add r9, r1, r9, asr #2
    mov r1, r10, lsl #0x18
    mov r1, r1, asr #0x18
    str r1, [sp, #8]
    str r4, [sp, #0xc]
    mov r1, #2
    str r1, [sp, #0x10]
    mov r1, #3
    str r1, [sp, #0x14]
    str r11, [sp, #0x18]
    str r0, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, #1
    mov r2, r7
    mov r3, #0
    bl func_ov015_0213b6ac
    sub r0, r10, #2
    mov r0, r0, lsl #0x10
    cmp r9, #0
    mov r10, r0, asr #0x10
    add r5, r5, #1
    bgt @L_02170418
    cmp r5, r8
    addgt sp, sp, #0x24
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x20]
    add r9, r6, #0x78
    mov r0, r0, lsl #0x18
    mov r6, r0, asr #0x18
    ldr r0, [sp, #0x58]
    mov r11, #1
    and r4, r0, #0xff
@L_021704dc:
    str r11, [sp]
    mov r0, r10, lsl #0x18
    str r11, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r6, [sp, #0xc]
    mov r0, #2
    str r0, [sp, #0x10]
    mov r0, #3
    str r0, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r1, r11
    mov r2, r7
    mov r3, #0
    str r9, [sp, #0x1c]
    bl func_ov015_0213b6ac
    sub r0, r10, #2
    mov r0, r0, lsl #0x10
    add r5, r5, #1
    mov r10, r0, asr #0x10
    cmp r5, r8
    ble @L_021704dc
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov074_02170548(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    mov r1, #1
    mov r5, r0
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, #0
    mov r4, #2
    mov r6, r1
    bl func_ov015_0213b870
    mov r0, r5
    bl func_ov074_02170ffc
    cmp r0, #0
    ldrne r12, [r5, #0x9c]
    bne @L_02170598
    mov r0, r5
    bl func_ov074_02171010
    cmp r0, #0
    ldrne r12, [r5, #0xa8]
    ldreq r12, [r5, #0x90]
@L_02170598:
    cmp r12, #0
    beq @L_021705e4
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r3, #0
    str r3, [sp, #8]
    str r3, [sp, #0xc]
    mov r0, #0x20
    str r0, [sp, #0x10]
    mov r0, #0x18
    str r0, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r2, [r12, #0xc]
    ldr r0, =data_020c9660
    add r12, r12, r2
    mov r2, #2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021705e4:
    ldr r0, =data_020c4638
    ldrb r0, [r0]
    cmp r0, #0
    ldreq lr, [r5, #0xc0]
    ldrne lr, [r5, #0xcc]
    cmp lr, #0
    beq @L_02170644
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r3, #0
    str r3, [sp, #8]
    str r3, [sp, #0xc]
    mov r0, #0x20
    str r0, [sp, #0x10]
    mov r0, #3
    str r0, [sp, #0x14]
    mov r2, #2
    str r2, [sp, #0x18]
    ldr r12, [lr, #0xc]
    ldr r0, =data_020c9660
    add r12, lr, r12
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170644:
    mov r0, r5
    bl func_ov074_02170fe8
    cmp r0, #0
    ldrne r12, [r5, #0x54]
    cmpne r12, #0
    beq @L_021706b4
    ldrh r3, [r5, #0x5c]
    mov r1, #1
    mov r2, #5
    rsb r0, r3, #0x20
    add r0, r0, r0, lsr #31
    str r1, [sp]
    mov r0, r0, lsl #0x17
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r2, [sp, #0xc]
    and r0, r3, #0xff
    str r0, [sp, #0x10]
    ldrh r2, [r5, #0x5e]
    mov r3, #0
    ldr r0, =data_020c9660
    and r2, r2, #0xff
    str r2, [sp, #0x14]
    str r3, [sp, #0x18]
    mov r2, r1
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021706b4:
    mov r0, r5
    bl func_ov074_02170fe8
    cmp r0, #0
    ldrne lr, [r5, #0x60]
    cmpne lr, #0
    beq @L_02170710
    mov r1, #1
    str r1, [sp]
    stmib sp, {r1, r4}
    mov r0, #0x12
    str r0, [sp, #0xc]
    ldrh r2, [r5, #0x68]
    mov r3, #0
    ldr r0, =data_020c9660
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r12, [r5, #0x6a]
    mov r2, r1
    and r12, r12, #0xff
    str r12, [sp, #0x14]
    str r3, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170710:
    mov r0, r5
    bl func_ov074_02170fe8
    cmp r0, #0
    beq @L_02170778
    mov r0, r5
    ldr r1, [r0]
    ldr r1, [r1, #0x6c]
    blx r1
    ldr r2, =0x3e7
    mov r1, #3
    str r2, [sp]
    stmib sp, {r1, r6}
    mov r1, #4
    str r1, [sp, #0xc]
    str r1, [sp, #0x10]
    ldrsh r1, [r5, #0xe]
    ldr r2, =0xffe0
    mov r1, r1, lsl #1
    ldrh r3, [r0, r1]
    mov r0, r5
    mov r1, #0x16
    and r2, r3, r2
    mov r2, r2, lsl #0xb
    mov r3, r2, lsr #0x10
    mov r2, #9
    bl func_ov074_021703ac
@L_02170778:
    mov r0, r5
    bl func_ov074_02171010
    cmp r0, #0
    ldrne lr, [r5, #0x6c]
    cmpne lr, #0
    beq @L_021707d4
    mov r1, #1
    str r1, [sp]
    stmib sp, {r1, r4}
    mov r0, #0xe
    str r0, [sp, #0xc]
    ldrh r3, [r5, #0x74]
    mov r2, #0
    ldr r0, =data_020c9660
    and r3, r3, #0xff
    str r3, [sp, #0x10]
    ldrh r12, [r5, #0x76]
    mov r3, r2
    and r12, r12, #0xff
    str r12, [sp, #0x14]
    str r2, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021707d4:
    mov r0, r5
    bl func_ov074_02171010
    cmp r0, #0
    ldrne r12, [r5, #0x78]
    cmpne r12, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, #1
    str r1, [sp]
    stmib sp, {r1, r4}
    mov r0, #0x14
    str r0, [sp, #0xc]
    ldrh r3, [r5, #0x80]
    mov r2, #0
    ldr r0, =data_020c9660
    and r3, r3, #0xff
    str r3, [sp, #0x10]
    ldrh r4, [r5, #0x82]
    mov r3, r2
    and r4, r4, #0xff
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov074_0217084c(void)
{
    ldr r0, =data_020c4638
    ldr r2, =data_020cb0e4
    ldrb r1, [r0]
    mov r0, #0x54
    mla r0, r1, r0, r2
    bx lr
}

extern "C" s32 func_ov074_0217086c(u8 *arg0)
{
    s32 v0;
    u8 *t0;
    s16 t1;
    s32 t2;
    t0 = *(u8 * *)(arg0 + 0x4);
    t1 = *(s16 *)(arg0 + 0x50);
    t2 = *(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x40);
    v0 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x40))(t0, t1, t2);
    return v0;
}

extern "C" asm void func_ov074_0217088c(void)
{
    stmdb sp!, {r3, lr}
    mov r3, #0xc
    mul r3, r1, r3
    add r1, r0, #0x54
    ldr r0, [r1, r3]
    add r1, r1, r3
    cmp r0, #0
    beq @L_021708cc
    ldrh r12, [r1, #8]
    ldrh r1, [r1, #0xa]
    add r2, r2, #1
    mov r3, #0
    mul r1, r12, r1
    mov r1, r1, lsl #1
    bl func_ov015_02132984
    mov r2, r0
@L_021708cc:
    mov r0, r2
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_ov074_021708d4(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    s32 t0;
    if (*(u8 *)(((u8 *)(arg0 + 0xD8)) + arg1) != 0)
        return arg2;
    *(u8 *)(((u8 *)(arg0 + 0xD8)) + arg1) = 1;
    t0 = *(s32 *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x84);
    v0 = func_ov015_02132a04(t0, (arg2 + 1), arg3, arg3);
    return v0;
}

extern "C" asm void func_ov074_02170910(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x54
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_02170958
    ldrh r3, [r5, #8]
    ldrh r2, [r5, #0xa]
    mov r1, r4
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl func_02003a68
    ldrh r1, [r5, #8]
    ldrh r0, [r5, #0xa]
    mul r0, r1, r0
    add r4, r4, r0, lsl #5
@L_02170958:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov074_02170960(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r12, #0xc
    mul r4, r1, r12
    add r5, r0, #0x84
    ldr r6, [r5, r4]
    ldr r7, [sp, #0x20]
    mov r9, r2
    mov r8, r3
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r2, [r8]
    mov r3, r9
    bl func_ov074_021708d4
    str r0, [r8]
    ldr r1, [r5, r4]
    ldr r2, [r7]
    mov r0, #0
    bl func_ov015_02132b7c
    str r0, [r7]
    mov r0, r6
    mov r2, r9
    mov r1, #1
    bl func_ov015_021322b0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov074_021709c0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r12, #0xc
    mul r5, r1, r12
    add r6, r0, #0x84
    ldr r7, [r6, r5]
    ldr r8, [sp, #0x20]
    mov r9, r2
    mov r4, r3
    cmp r7, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r2, [r4]
    mov r3, r9
    bl func_ov074_021708d4
    str r0, [r4]
    mov r4, #1
    ldr r1, [r6, r5]
    ldr r2, [r8]
    mov r0, r4
    bl func_ov015_02132b7c
    str r0, [r8]
    mov r0, r7
    mov r1, r4
    mov r2, r9
    bl func_ov015_021322b0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov074_02170a24(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x54
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_02170a6c
    ldrh r3, [r5, #8]
    ldrh r2, [r5, #0xa]
    mov r1, r4
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl func_02003b48
    ldrh r1, [r5, #8]
    ldrh r0, [r5, #0xa]
    mul r0, r1, r0
    add r4, r4, r0, lsl #5
@L_02170a6c:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov074_02170a74(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r5, #0
    mov r6, #0x20
    mov r7, r0
    str r5, [sp, #0x10]
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    str r6, [sp, #4]
    add r4, sp, #8
    bl func_ov074_02170ffc
    cmp r0, #0
    beq @L_02170ab8
    add r3, sp, #0x10
    mov r0, r7
    mov r1, #2
    b @L_02170ad4
@L_02170ab8:
    mov r0, r7
    bl func_ov074_02171010
    cmp r0, #0
    add r3, sp, #0x10
    beq @L_02170adc
    mov r0, r7
    mov r1, #3
@L_02170ad4:
    mov r2, #1
    b @L_02170ae8
@L_02170adc:
    mov r1, #1
    mov r0, r7
    mov r2, r1
@L_02170ae8:
    str r4, [sp]
    bl func_ov074_02170960
    ldr r0, =data_020c4638
    ldr r1, =0x14a0
    ldrb r0, [r0]
    mov r2, #0xa4
    str r2, [sp, #0x10]
    cmp r0, #0
    str r1, [sp, #8]
    add r3, sp, #0x10
    mov r2, #2
    mov r0, r7
    bne @L_02170b24
    mov r1, #5
    b @L_02170b28
@L_02170b24:
    mov r1, #6
@L_02170b28:
    str r4, [sp]
    bl func_ov074_02170960
    mov r0, r7
    bl func_ov074_02170fe8
    cmp r0, #0
    beq @L_02170b6c
    mov r4, #0
    ldr r2, [sp, #0xc]
    mov r0, r7
    mov r1, r4
    bl func_ov074_0217088c
    str r0, [sp, #0xc]
    ldr r2, [sp, #4]
    mov r0, r7
    mov r1, r4
    bl func_ov074_02170910
    str r0, [sp, #4]
@L_02170b6c:
    mov r0, r7
    bl func_ov074_02170fe8
    cmp r0, #0
    beq @L_02170ba8
    mov r4, #1
    ldr r2, [sp, #0xc]
    mov r0, r7
    mov r1, r4
    bl func_ov074_0217088c
    str r0, [sp, #0xc]
    ldr r2, [sp, #4]
    mov r0, r7
    mov r1, r4
    bl func_ov074_02170910
    str r0, [sp, #4]
@L_02170ba8:
    mov r0, r7
    bl func_ov074_02170fe8
    cmp r0, #0
    beq @L_02170bd4
    mov r1, #4
    add r4, sp, #4
    add r3, sp, #0xc
    mov r0, r7
    mov r2, r1
    str r4, [sp]
    bl func_ov074_021709c0
@L_02170bd4:
    mov r0, r7
    bl func_ov074_02171010
    cmp r0, #0
    beq @L_02170c10
    mov r4, #2
    mov r0, r7
    mov r1, r4
    mov r2, #0
    bl func_ov074_0217088c
    mov r5, r0
    mov r0, r7
    mov r1, r4
    mov r2, #0x20
    bl func_ov074_02170a24
    mov r6, r0
@L_02170c10:
    mov r0, r7
    bl func_ov074_02171010
    cmp r0, #0
    beq @L_02170c44
    mov r4, #3
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_ov074_0217088c
    mov r0, r7
    mov r1, r4
    mov r2, r6
    bl func_ov074_02170a24
@L_02170c44:
    bl func_ov015_02132240
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov074_02170c58(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #4]
    mov r5, #1
    ldr r2, [r0]
    mov r1, r5
    ldr r2, [r2, #0x28]
    blx r2
    mov r0, #6
    bl func_ov015_02135440
    mov r4, #0
    mov r1, r4
    add r0, r6, #0x54
    mov r2, #0x30
    bl MI_CpuFill8
    add r0, r6, #0x84
    mov r1, r4
    mov r2, #0x54
    bl MI_CpuFill8
    strb r4, [r6, #0xc]
    strb r4, [r6, #0xd]
    strh r4, [r6, #0xe]
    strb r4, [r6, #0x10]
    strb r4, [r6, #0x30]
    strh r4, [r6, #0x50]
    ldr r0, =data_020c9660
    mov r1, r5
    bl func_ov015_0213b364
    mov r0, r6
    bl func_ov074_021700c8
    mov r0, r6
    bl func_ov074_02170074
    str r5, [r6, #8]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov074_02170ce4(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x34
    mov r7, r0
    ldr r0, [r7, #8]
    mov r5, #1
    cmp r0, #1
    beq @L_02170d14
    cmp r0, #2
    beq @L_02170ee8
    cmp r0, #3
    beq @L_02170f18
    b @L_02170f20
@L_02170d14:
    add r0, r7, #0x84
    mov r1, #7
    bl func_ov015_02134118
    cmp r0, #0
    beq @L_02170f20
    mov r0, r7
    bl func_ov074_02170fe8
    cmp r0, #0
    beq @L_02170de0
    str r5, [sp]
    mov r0, #0x18
    mov r4, #0
    str r0, [sp, #4]
    mov r0, #3
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    mov r2, #4
    str r2, [sp, #0x10]
    mov r0, r7
    mov r1, r4
    mov r3, r4
    add r2, r7, #0x10
    bl func_ov074_021702b0
    mov r5, r4
    ldr r6, [r7, #0xe0]
    mov r0, #0x51
    b @L_02170d98
@L_02170d80:
    ldrb r1, [r6, r3]
    ldrsh r2, [r7, #0x50]
    add r3, r6, r3
    add r5, r5, #1
    cmp r2, r1
    addeq r4, r3, #1
@L_02170d98:
    mul r3, r5, r0
    ldrb r1, [r6, r3]
    cmp r1, #0xff
    beq @L_02170db0
    cmp r4, #0
    beq @L_02170d80
@L_02170db0:
    mov r3, #1
    str r3, [sp]
    mov r0, #0x1c
    str r0, [sp, #4]
    mov r0, #9
    str r0, [sp, #8]
    mov r1, #0
    mov r0, r7
    mov r2, r4
    str r1, [sp, #0xc]
    mov r4, #4
    b @L_02170ed8
@L_02170de0:
    mov r0, r7
    bl func_ov074_02171010
    cmp r0, #0
    beq @L_02170ee0
    mov r0, r7
    ldr r1, [r0]
    ldr r1, [r1, #0x6c]
    blx r1
    add r4, sp, #0x14
    mov r6, r0
    ldr r1, =data_ov074_0217104e
    mov r0, r4
    bl strcpy
    ldrsh r0, [r7, #0xe]
    mov r0, r0, lsl #1
    ldrh r0, [r6, r0]
    and r0, r0, #0x1000
    mov r0, r0, asr #0xc
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq @L_02170e40
    mov r0, r4
    add r1, r7, #0x10
    bl strcpy
@L_02170e40:
    str r5, [sp]
    mov r0, #0x1c
    str r0, [sp, #4]
    mov r0, #3
    add r4, sp, #0x14
    str r0, [sp, #8]
    mov r1, #0
    mov r0, r7
    mov r2, r4
    str r1, [sp, #0xc]
    mov r12, #4
    mov r3, #2
    str r12, [sp, #0x10]
    bl func_ov074_021702b0
    ldr r1, =data_ov074_0217104e
    mov r0, r4
    bl strcpy
    ldrsh r0, [r7, #0xe]
    mov r0, r0, lsl #1
    ldrh r0, [r6, r0]
    and r0, r0, #0x800
    mov r0, r0, asr #0xb
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq @L_02170eb0
    mov r0, r4
    add r1, r7, #0x30
    bl strcpy
@L_02170eb0:
    str r5, [sp]
    mov r0, #0x1c
    str r0, [sp, #4]
    mov r3, #3
    str r3, [sp, #8]
    mov r1, #0
    add r2, sp, #0x14
    mov r0, r7
    str r1, [sp, #0xc]
    mov r4, #7
@L_02170ed8:
    str r4, [sp, #0x10]
    bl func_ov074_021702b0
@L_02170ee0:
    mov r0, #2
    str r0, [r7, #8]
@L_02170ee8:
    bl func_0200846c
    mov r0, r7
    bl func_ov074_02170a74
    mov r0, r7
    bl func_ov074_02170548
    mov r0, #6
    bl func_ov015_02132568
    mov r2, #3
    ldr r0, =data_020c9660
    mov r1, #1
    str r2, [r7, #8]
    bl func_ov015_0213c33c
@L_02170f18:
    mov r0, r7
    bl func_ov074_0217086c
@L_02170f20:
    mov r0, r7
    bl func_ov074_02170ffc
    cmp r0, #0
    beq @L_02170f4c
    ldr r1, =0x4001000
    add sp, sp, #0x34
    ldr r0, [r1]
    bic r0, r0, #0x1f00
    orr r0, r0, #0x100
    str r0, [r1]
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_02170f4c:
    mov r0, r7
    bl func_ov074_02171010
    ldr r1, =0x4001000
    cmp r0, #0
    ldrne r0, [r1]
    bicne r0, r0, #0x1f00
    orrne r0, r0, #0x500
    strne r0, [r1]
    ldreq r0, [r1]
    biceq r0, r0, #0x1f00
    orreq r0, r0, #0x300
    streq r0, [r1]
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" void func_ov074_02170f90(void)
{
}

extern "C" s32 func_ov074_02170f94(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v5;
    s32 t0;
    u8 *t1;
    func_ov074_02170158((s32)arg0, arg1, arg2, arg3);
    func_ov074_02170190((s32)arg0);
    t0 = *(s32 *)(arg0 + 0xE0);
    _ZN8GameHeap4FreeEPv((s32)((u8 *)&data_020c47b4), t0);
    func_ov015_0213b3fc((s32)((u8 *)&data_020c9660), 1);
    func_ov015_02135e10();
    t1 = *(u8 * *)(arg0 + 0x4);
    v5 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC))(t1, 1);
    return v5;
}

extern "C" s32 func_ov074_02170fe8(u8 *arg0)
{
    return (*(u8 *)(arg0 + 0xD) == 1 ? 1 : 0);
}

extern "C" s32 func_ov074_02170ffc(u8 *arg0)
{
    return (*(u8 *)(arg0 + 0xD) == 0 ? 1 : 0);
}

extern "C" s32 func_ov074_02171010(u8 *arg0)
{
    return (*(u8 *)(arg0 + 0xD) == 2 ? 1 : 0);
}

extern "C" s32 func_ov074_02171024(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov074_02171038(void)
{
}
