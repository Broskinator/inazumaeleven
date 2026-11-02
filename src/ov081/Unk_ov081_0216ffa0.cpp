#include "ov081/Unk_ov081_0216ffa0.hpp"

extern "C" void func_ov081_0216ffa0(u8 *arg0, s32 arg1);
extern "C" void func_ov081_0216ffbc(void);
extern "C" s32 func_ov081_02170124(u8 *arg0, s32 arg1);
extern "C" void func_ov081_02170134(void);
extern "C" s32 func_ov081_02170138(u8 *arg0);
extern "C" s32 func_ov081_0217018c(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov081_021701c4(void);
extern "C" void func_ov081_02170218(void);
extern "C" s32 func_ov081_0217021c(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_ov081_02170264(void);
extern "C" s32 func_ov081_02170330(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov081_02170368(...);
extern "C" s32 func_ov081_02170424(u8 *arg0, s32 arg1);
extern "C" void func_ov081_021704ac(void);
extern "C" void func_ov081_021704f8(void);
extern "C" void func_ov081_021705f0(void);
extern "C" void func_ov081_021705f4(void);
extern "C" void func_ov081_021706d0(void);
extern "C" s32 func_ov081_021706d4(...);
extern "C" s32 func_ov081_02170744(...);
extern "C" s32 func_ov081_02170790(u8 *arg0);
extern "C" void func_ov081_02170870(void);
extern "C" void func_ov081_02170888(void);
extern "C" void func_ov081_021708d0(void);
extern "C" void func_ov081_02170920(void);
extern "C" void func_ov081_02170988(void);
extern "C" s32 func_ov081_021709d8(...);
extern "C" s32 func_ov081_02170a3c(s32 arg0, s32 arg1);
extern "C" void func_ov081_02170a98(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_ov081_02170ab4(void);
extern "C" void func_ov081_02170c08(void);
extern "C" void func_ov081_02170c90(void);
extern "C" void func_ov081_02170dbc(void);
extern "C" s32 func_ov081_02170e00(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov081_02170e9c(s32 arg0);
extern "C" void func_ov081_02170eb0(void);

extern "C" char data_020c47b4[];
extern "C" char data_020c9660[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_020e88a0[];
extern "C" char data_ov081_02170eb4[];
extern "C" char data_ov081_02170eb4_b[];
extern "C" char data_ov081_02170f80[];
extern "C" char data_ov081_02170fec[];
extern "C" char data_ov081_02171004[];
extern "C" char data_ov081_0217101c[];
extern "C" char data_ov081_02171034[];
extern "C" char data_ov081_02171050[];
extern "C" char data_ov081_0217105c[];
extern "C" char data_ov081_0217107c[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" s32 _ZN17UnkClass_020621b413func_020739ccEi(...);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003608(void);
extern "C" void func_02003988(void);
extern "C" void func_02003a68(void);
extern "C" void func_02003b48(void);
extern "C" void func_0209d668(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_02132568(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132a04(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" s32 func_ov015_021330b4(...);
extern "C" s32 func_ov015_02133f94(...);
extern "C" s32 func_ov015_02134024(...);
extern "C" void func_ov015_021340c0(void);
extern "C" void func_ov015_02134118(void);
extern "C" s32 func_ov015_02134198(...);
extern "C" s32 func_ov015_02134208(...);
extern "C" void func_ov015_02135440(void);
extern "C" s32 func_ov015_02135e10(...);
extern "C" void func_ov015_0213b364(void);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" s32 func_ov015_0213b6ac(...);
extern "C" s32 func_ov015_0213b7f8(...);
extern "C" s32 func_ov015_0213b870(...);
extern "C" s32 func_ov015_0213bfcc(...);
extern "C" void func_ov015_0213c33c(void);
extern "C" s32 sprintf(...);

extern "C" void func_ov081_0216ffa0(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0) = (s32)data_ov081_02170f80;
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0 + 0x14) = 0;
}

extern "C" asm void func_ov081_0216ffbc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r5, r0
    cmp r1, #0
    bne @L_0216fff0
    bl func_ov081_02170790
    mov r0, r5
    bl func_ov081_02170870
    mov r4, #1
    ldr r0, =data_020c9660
    mov r1, r4
    bl func_ov015_0213c33c
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216fff0:
    ldr r0, [r5, #8]
    cmp r0, #0
    cmpne r0, #1
    beq @L_0217000c
    sub r0, r0, #3
    cmp r0, #2
    bhi @L_02170014
@L_0217000c:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02170014:
    ldrh r0, [r1]
    add r6, r1, #5
    add r4, r5, #0x1d
    strh r0, [r5, #0x18]
    ldrb r0, [r1, #2]
    mov r3, #0x80
    strb r0, [r5, #0x1a]
    ldrb r0, [r1, #3]
    strb r0, [r5, #0x1b]
    ldrb r0, [r1, #4]
    strb r0, [r5, #0x1c]
@L_02170040:
    ldrb r2, [r6]
    ldrb r0, [r6, #1]
    add r6, r6, #2
    subs r3, r3, #1
    strb r0, [r4, #1]
    strb r2, [r4], #2
    bne @L_02170040
    ldr r0, [r1, #0x108]
    mov r4, #0
    str r0, [r5, #0x120]
    ldr r0, [r1, #0x10c]
    ldr r9, =data_020c47b4
    str r0, [r5, #0x124]
    mov r8, r4
    mov r7, r4
    mov r6, #0xc
@L_02170080:
    mla r10, r4, r6, r5
    ldr r1, [r10, #0x128]
    cmp r1, #0
    beq @L_0217009c
    mov r0, r9
    bl _ZN8GameHeap4FreeEPv
    str r8, [r10, #0x128]
@L_0217009c:
    ldr r1, [r10, #0x12c]
    cmp r1, #0
    beq @L_021700b4
    mov r0, r9
    bl _ZN8GameHeap4FreeEPv
    str r7, [r10, #0x12c]
@L_021700b4:
    add r4, r4, #1
    cmp r4, #2
    blt @L_02170080
    ldrb r0, [r5, #0x1b]
    cmp r0, #0
    beq @L_021700d8
    ldrb r0, [r5, #0x1c]
    cmp r0, #0
    beq @L_021700f4
@L_021700d8:
    mov r0, r5
    bl func_ov081_02170790
    mov r0, r5
    bl func_ov081_02170870
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213c33c
@L_021700f4:
    mov r0, r5
    bl func_ov081_02170330
    mov r4, #1
    mov r0, r5
    mov r1, r4
    bl func_ov081_02170264
    mov r0, #4
    bl func_ov015_02132568
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov081_02170124(u8 *arg0, s32 arg1)
{
    if (arg1 >= 0)
        *(s32 *)(arg0 + 0x14) = arg1;
    return *(s32 *)(arg0 + 0x14);
}

extern "C" void func_ov081_02170134(void)
{
}

extern "C" s32 func_ov081_02170138(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0x17C), 0, 0x24);
    func_ov015_02133f94((s32)data_ov081_02170fec, (arg0 + 0x17C));
    func_ov015_02133f94((s32)data_ov081_02171004, (arg0 + 0x188));
    func_ov015_02133f94((s32)data_ov081_0217101c, (arg0 + 0x194));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" s32 func_ov081_0217018c(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    func_ov015_02134198((arg0 + 0x17C), 3, arg2, arg3);
    r4 = 0xC;
    r5 = (arg0 + 0x17C);
    r6 = 0;
    do {
        s32 v1 = func_ov015_02134208(((r6 * r4) + r5));
        arg0 = v1;
        r6 = (r6 + 1);
    } while (r6 < 3);
    return arg0;
}

extern "C" asm void func_ov081_021701c4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [r0, #0x14c]
    cmp r6, #0
    ldrne r1, =data_ov081_02170eb4
    ldrne r7, =data_ov081_02170eb4_b
    ldrne r1, [r1]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0x140
    mov r4, #0xc
@L_021701ec:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_021701ec
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov081_02170218(void)
{
}

extern "C" s32 func_ov081_0217021c(s32 arg0, s32 arg1, s32 arg2)
{
    s32 local[20];
    s32 v1;
    sprintf((s32)((u8 *)local), (s32)data_ov081_02171034, arg1, arg1);
    v1 = func_ov015_02133f94((s32)((u8 *)local), ((arg2 * 0xC) + (arg0 + 0x140)));
    return v1;
}

extern "C" asm void func_ov081_02170264(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    str r1, [r4, #0xc]
    cmp r1, #1
    beq @L_02170284
    cmp r1, #2
    beq @L_02170308
    b @L_02170314
@L_02170284:
    mov r7, #0
    mov r1, r7
    add r0, r4, #0x140
    mov r2, #0x3c
    bl MI_CpuFill8
    ldr r5, =data_020d2d20
    mov r6, #0x800
    mov r0, r7
    mov r1, r5
    mov r2, r6
    bl MIi_CpuClearFast
    mov r0, r5
    mov r1, r6
    bl DC_FlushRange
    ldr r5, =data_020d2520
    mov r0, r7
    mov r1, r5
    mov r2, r6
    bl MIi_CpuClearFast
    mov r0, r5
    mov r1, r6
    bl DC_FlushRange
    mov r2, r7
    mov r0, r4
    ldr r1, =data_ov081_02171050
    bl func_ov081_0217021c
    mov r0, r4
    ldr r1, [r4, #0x124]
    bl func_ov081_02170a3c
    ldr r0, =data_ov081_0217105c
    add r1, r4, #0x14c
    bl func_ov015_02133f94
    b @L_0217030c
@L_02170308:
    bl func_ov081_02170218
@L_0217030c:
    mov r0, #1
    strb r0, [r4, #0x10]
@L_02170314:
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov081_02170330(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    func_ov015_02134198((arg0 + 0x140), 5, arg2, arg3);
    r4 = 0xC;
    r5 = (arg0 + 0x140);
    r6 = 0;
    do {
        s32 v1 = func_ov015_02134208(((r6 * r4) + r5));
        arg0 = v1;
        r6 = (r6 + 1);
    } while (r6 < 5);
    return arg0;
}

extern "C" asm s32 func_ov081_02170368(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldr r0, [r4]
    mul r5, r2, r3
    strh r2, [r4, #8]
    strh r3, [r4, #0xa]
    cmp r0, #0
    bne @L_021703a0
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #1
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4]
@L_021703a0:
    ldr r0, [r4, #4]
    cmp r0, #0
    bne @L_021703c4
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #5
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #4]
@L_021703c4:
    ldr r2, [r4]
    cmp r2, #0
    ldrne r0, [r4, #4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    mov r1, #0
    ble @L_021703fc
@L_021703e4:
    add r0, r1, #1
    mov r0, r0, lsl #0x10
    strh r1, [r2], #2
    cmp r5, r0, lsr #16
    mov r1, r0, lsr #0x10
    bgt @L_021703e4
@L_021703fc:
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

extern "C" s32 func_ov081_02170424(u8 *arg0, s32 arg1)
{
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    v0 = func_ov081_02170368(arg0, ((arg1 * 0xC) + (arg0 + 0x128)), 0x20, 7);
    if (*(s32 *)(((u8 *)((arg1 * 0xC) + (arg0 + 0x128))) + 0x4) == 0)
        return v0;
    t0 = *(s32 *)(arg0 + 0x170);
    t1 = *(s32 *)(((u8 *)((arg1 * 0xC) + (arg0 + 0x128))) + 0x4);
    t2 = (*(u16 *)(((u8 *)((arg1 * 0xC) + (arg0 + 0x128))) + 0x8) << 3);
    t3 = (*(u16 *)(((u8 *)((arg1 * 0xC) + (arg0 + 0x128))) + 0xA) << 3);
    v1 = func_ov015_021330b4(t0, t1, t2, t3, 3, 3, 1, 1, 0, 6, 1, 1);
    return v1;
}

extern "C" asm void func_ov081_021704ac(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, #1
    mov r6, r0
    mov r5, r1
    strb r4, [r6, #0x10]
    tst r4, #0xff
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, #0
    mov r0, r4
    strb r1, [r6, #0x10]
    bl func_ov015_02130b14
    cmp r5, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r5, #2
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r4
    bl func_ov081_02170424
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov081_021704f8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r5, [sp, #0x50]
    mov r4, #0xc
    mla r0, r5, r4, r0
    ldr r4, [r0, #0x140]
    mov r9, r3
    ldr r8, [sp, #0x4c]
    ldr r3, [sp, #0x54]
    cmp r4, #0
    mov r10, r1
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x48]
    ldr r1, [r4, #0xc]
    cmp r9, r0
    movgt r9, r0
    sub r0, r10, #1
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    mov r0, r2, lsl #0x18
    add r7, r4, r1
    ldr r11, =0x66666667
    mov r5, r0, asr #0x18
    and r4, r3, #0xff
    mov r6, #1
@L_02170560:
    smull r1, r2, r11, r9
    mov r0, r9, lsr #0x1f
    add r2, r0, r2, asr #2
    mov r0, #0xa
    smull r1, r2, r0, r2
    sub r2, r9, r1
    add r0, r7, r2, lsl #2
    mov r2, r9
    smull r1, r9, r11, r2
    mov r1, r2, lsr #0x1f
    str r6, [sp]
    add r9, r1, r9, asr #2
    mov r1, r10, lsl #0x18
    str r6, [sp, #4]
    mov r1, r1, asr #0x18
    str r1, [sp, #8]
    str r5, [sp, #0xc]
    str r6, [sp, #0x10]
    mov r1, #2
    str r1, [sp, #0x14]
    str r4, [sp, #0x18]
    str r0, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, r8
    mov r3, #0
    bl func_ov015_0213b6ac
    sub r0, r10, #1
    mov r0, r0, lsl #0x10
    cmp r9, #0
    mov r10, r0, asr #0x10
    bgt @L_02170560
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov081_021705f0(void)
{
}

extern "C" asm void func_ov081_021705f4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r12, [r4, #0x128]
    add lr, r4, #0x128
    cmp r12, #0
    beq @L_0217065c
    mov r0, #3
    mov r1, #1
    stmia sp, {r0, r1}
    mov r0, #8
    str r0, [sp, #8]
    mov r0, #7
    str r0, [sp, #0xc]
    ldrh r2, [lr, #8]
    mov r3, #0
    ldr r0, =data_020c9660
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh lr, [lr, #0xa]
    mov r2, r1
    and lr, lr, #0xff
    str lr, [sp, #0x14]
    str r3, [sp, #0x18]
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0217065c:
    mov r5, #0x15
    bl func_0209d668
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02170690
    b @L_02170690
    b @L_02170690
    b @L_02170690
    b @L_02170690
    b @L_02170684
@L_02170684:
    add r0, r5, #2
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
@L_02170690:
    ldr r1, =0x98967f
    mov r0, #0
    str r1, [sp]
    str r0, [sp, #4]
    mov r0, #3
    str r0, [sp, #8]
    str r0, [sp, #0xc]
    ldr r3, [r4, #0x120]
    mov r0, r4
    mov r1, r5
    mov r2, #0xa
    bl func_ov081_021704f8
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov081_021706d0(void)
{
}

extern "C" asm s32 func_ov081_021706d4(...)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    ldr lr, [r0, #0x134]
    add r4, r0, #0x134
    cmp lr, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r0, #4
    str r0, [sp]
    mov r2, #0
    mov r1, #1
    stmib sp, {r1, r2}
    mov r0, #0x11
    str r0, [sp, #0xc]
    ldrh r12, [r4, #8]
    ldr r0, =data_020c9660
    mov r3, r2
    and r12, r12, #0xff
    str r12, [sp, #0x10]
    ldrh r12, [r4, #0xa]
    and r12, r12, #0xff
    str r12, [sp, #0x14]
    str r2, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 func_ov081_02170744(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, #1
    mov r6, r0
    mov r0, r5
    mov r1, #0
    bl func_ov015_02130b14
    movs r4, r0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r5
    mov r2, r5
    bl func_ov081_021705f0
    mov r0, r6
    mov r1, r4
    bl func_ov081_021705f4
    mov r0, r6
    mov r1, r4
    bl func_ov081_021706d0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov081_02170790(u8 *arg0)
{
    u8 *r2;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 v6;
    func_ov015_0213b870((s32)data_020c9660, 1, 1, 0);
    func_ov015_0213b7f8((s32)data_020c9660, 1, 2, 0);
    func_ov015_0213b7f8((s32)data_020c9660, 1, 3, 0);
    func_ov015_0213b7f8((s32)data_020c9660, 1, 4, 0);
    r2 = (u8 *)*(s32 *)(arg0 + 0x158);
    r4 = 2;
    r5 = 0;
    r6 = 1;
    r7 = (s32)data_020c9660;
    r8 = (s32)arg0;
    if ((s32)r2 != 0) {
        func_ov015_0213b6ac(r7, r6, r6, r5, r6, r6, 7, 6, 0x12, 8, r4, (r2 + *(s32 *)(r2 + 0xC)));
    }
    func_ov081_02170744(r8);
    v6 = func_ov081_021706d4(r8);
    return v6;
}

extern "C" void func_ov081_02170870(void)
{
    func_ov015_0213bfcc((s32)data_020c9660, 1);
}

extern "C" asm void func_ov081_02170888(void)
{
    stmdb sp!, {r3, lr}
    mov r3, #0xc
    mul r3, r1, r3
    add r1, r0, #0x128
    ldr r0, [r1, r3]
    add r1, r1, r3
    cmp r0, #0
    beq @L_021708c8
    ldrh r12, [r1, #8]
    ldrh r1, [r1, #0xa]
    add r2, r2, #1
    mov r3, #0
    mul r1, r12, r1
    mov r1, r1, lsl #1
    bl func_ov015_02132984
    mov r2, r0
@L_021708c8:
    mov r0, r2
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov081_021708d0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x128
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_02170918
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
@L_02170918:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov081_02170920(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0xc
    mul r7, r1, r4
    add r6, r0, #0x140
    ldr r8, [r6, r7]
    ldr r9, [sp, #0x20]
    mov r4, r2
    mov r5, r3
    cmp r8, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r5]
    mov r0, r8
    add r1, r1, #1
    bl func_ov015_02132a04
    str r0, [r5]
    mov r5, #1
    ldr r1, [r6, r7]
    ldr r2, [r9]
    mov r0, r5
    bl func_ov015_02132b7c
    str r0, [r9]
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl func_ov015_021322b0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov081_02170988(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x128
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_021709d0
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
@L_021709d0:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov081_021709d8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r12, #0xc
    mul r5, r1, r12
    add r4, r0, #0x140
    ldr r6, [r4, r5]
    ldr r7, [sp, #0x20]
    mov r9, r2
    mov r8, r3
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r8]
    mov r0, r6
    add r1, r1, #1
    bl func_ov015_02132a04
    str r0, [r8]
    ldr r1, [r4, r5]
    ldr r2, [r7]
    mov r0, #2
    bl func_ov015_02132b7c
    str r0, [r7]
    mov r0, r6
    mov r2, r9
    mov r1, #1
    bl func_ov015_021322b0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_ov081_02170a3c(s32 arg0, s32 arg1)
{
    s32 v0;
    s32 v1;
    s32 t0;
    if (arg1 == 0)
        return arg0;
    v0 = _ZN17UnkClass_020621b413func_020739ccEi((s32)data_020e88a0, arg1);
    if (v0 == 0)
        return v0;
    t0 = (*(u16 *)(((u8 *)v0) + 0x16) << 5);
    v1 = func_ov015_02134024((s32)data_ov081_0217107c, (arg0 + 0x170), t0, 0xA0, 0);
    return v1;
}

extern "C" void func_ov081_02170a98(s32 arg0, s32 arg1, s32 arg2)
{
    func_ov081_021709d8(arg0, 3, 3, arg1, arg2);
}

extern "C" asm void func_ov081_02170ab4(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r7, [r4, #0x140]
    cmp r7, #0
    beq @L_02170b24
    ldr r0, [r7, #0xc]
    mov r6, #0
    mov r5, #1
    ldr r1, [r7, #0x10]
    mov r2, r6
    mov r3, r5
    add r0, r7, r0
    bl func_ov015_02132984
    mov r0, r7
    mov r1, r5
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r7, #0x14]
    ldr r2, [r7, #0x18]
    mov r1, r6
    add r0, r7, r0
    bl func_02003988
    ldr r0, [r7, #0xc]
    ldr r2, [r7, #0x10]
    add r0, r7, r0
    mov r1, r6
    bl func_02003608
@L_02170b24:
    bl G2S_GetBG1CharPtr
    mov r5, #0x20
    mov r6, #0
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r5
    bl DC_FlushRange
    str r6, [sp, #0x10]
    str r5, [sp, #8]
    bl G2S_GetBG2CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r5
    bl DC_FlushRange
    ldr r2, [sp, #0x10]
    mov r0, r4
    mov r1, r6
    str r5, [sp, #4]
    str r6, [sp, #0xc]
    bl func_ov081_02170888
    str r0, [sp, #0x10]
    ldr r2, [sp, #8]
    mov r1, r6
    mov r0, r4
    bl func_ov081_021708d0
    str r0, [sp, #8]
    add r1, sp, #8
    str r1, [sp]
    mov r1, #2
    mov r0, r4
    mov r2, r1
    add r3, sp, #0x10
    bl func_ov081_02170920
    mov r5, #1
    ldr r2, [sp, #0xc]
    mov r0, r4
    mov r1, r5
    bl func_ov081_02170888
    str r0, [sp, #0xc]
    ldr r2, [sp, #4]
    mov r1, r5
    mov r0, r4
    bl func_ov081_02170988
    str r0, [sp, #4]
    mov r0, r4
    add r1, sp, #0xc
    add r2, sp, #4
    bl func_ov081_02170a98
    bl func_ov015_02132240
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov081_02170c08(void)
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
    add r0, r6, #0x128
    mov r2, #0x18
    bl MI_CpuFill8
    add r0, r6, #0x140
    mov r1, r4
    mov r2, #0x3c
    bl MI_CpuFill8
    strb r4, [r6, #0x10]
    strh r4, [r6, #0x18]
    strb r4, [r6, #0x1a]
    strb r4, [r6, #0x1b]
    strb r4, [r6, #0x1c]
    strb r4, [r6, #0x1d]
    str r4, [r6, #0x120]
    str r4, [r6, #0x124]
    mov r0, r6
    bl func_ov081_02170138
    mov r1, r5
    ldr r0, =data_020c9660
    bl func_ov015_0213b364
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov081_02170c90(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #8
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_02170ccc
    ldmia sp!, {r3, r4, r5, pc}
    b @L_02170cf0
    b @L_02170d50
    ldmia sp!, {r3, r4, r5, pc}
    b @L_02170d70
    b @L_02170d7c
    b @L_02170da8
@L_02170ccc:
    add r0, r4, #0x17c
    mov r1, #3
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r4
    mov r1, #1
    bl func_ov081_02170264
    ldmia sp!, {r3, r4, r5, pc}
@L_02170cf0:
    ldr r1, [r4, #0xc]
    bl func_ov081_021704ac
    mov r5, #5
    mov r1, r5
    add r0, r4, #0x140
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02170d28
    cmp r0, #2
    beq @L_02170d38
    ldmia sp!, {r3, r4, r5, pc}
@L_02170d28:
    mov r0, r4
    mov r1, #2
    bl func_ov081_02170264
    ldmia sp!, {r3, r4, r5, pc}
@L_02170d38:
    mov r0, r4
    bl func_ov081_021701c4
    mov r0, r4
    bl func_ov081_02170134
    str r5, [r4, #8]
    ldmia sp!, {r3, r4, r5, pc}
@L_02170d50:
    bl func_ov081_02170790
    mov r1, #6
    ldr r0, [r4, #4]
    str r1, [r4, #8]
    ldr r2, [r0]
    mov r1, #1
    ldr r2, [r2, #0x40]
    blx r2
@L_02170d70:
    mov r0, r4
    bl func_ov081_02170870
    ldmia sp!, {r3, r4, r5, pc}
@L_02170d7c:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r4
    bl func_ov081_02170330
    mov r0, r4
    mov r1, #1
    bl func_ov081_02170264
    ldmia sp!, {r3, r4, r5, pc}
@L_02170da8:
    bl func_ov081_02170330
    mov r0, r4
    mov r1, #1
    bl func_ov081_02170264
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov081_02170dbc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    beq @L_02170ddc
    cmp r1, #6
    beq @L_02170dec
    ldmia sp!, {r4, pc}
@L_02170ddc:
    bl func_ov081_02170ab4
    mov r0, #4
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170dec:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov081_02170e00(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    u8 *r10;
    s32 v6;
    u8 *t0;
    func_ov081_02170330(arg0, arg1, arg2, arg3);
    ((s32 (*)(...))func_ov081_0217018c)(arg0);
    r4 = (u8 *)arg0;
    r9 = 0;
    r8 = (s32)((u8 *)&data_020c47b4);
    r7 = 0;
    r6 = 0;
    r5 = 0xC;
    do {
        r10 = (u8 *)((r9 * r5) + r4);
        arg1 = *(s32 *)(((u8 *)((r9 * r5) + r4)) + 0x128);
        if (arg1 != 0) {
            _ZN8GameHeap4FreeEPv(r8, arg1);
            *(s32 *)(r10 + 0x128) = r7;
        }
        arg1 = *(s32 *)(r10 + 0x12C);
        if (arg1 != 0) {
            _ZN8GameHeap4FreeEPv(r8, arg1);
            *(s32 *)(r10 + 0x12C) = r6;
        }
        r9 = (r9 + 1);
    } while (r9 < 2);
    func_ov015_0213b3fc((s32)((u8 *)&data_020c9660), 1);
    func_ov015_02135e10();
    t0 = *(u8 * *)(r4 + 0x4);
    v6 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(r4 + 0x4)) + 0xC))(t0, 1);
    return v6;
}

extern "C" s32 func_ov081_02170e9c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov081_02170eb0(void)
{
}
