#include "game/UnkClass_02060294.hpp"
#include "game/Unk_0205dee0.hpp"
#include "system/GameHeap.hpp"

extern GameHeap data_020c47b4;

extern "C" void _ZN12Unk_0205dee013func_0205f958Ev(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_0205f97cEv(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_0205f994El(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_0205f9a8Ev(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_0205fed0Ev(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_0205ff20Ev(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_0205ff58Ev(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_02060104Ev(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_02060164Ev(void);     // (for the asm functions)
extern "C" void _ZN12Unk_0205dee013func_02060214Ev(void);     // (for the asm functions)
extern "C" void func_ov015_02149628(void);
extern "C" char data_020a71bc[];
extern "C" char data_020ae9a4[];
extern "C" char data_020ae9cc[];
extern "C" char data_020aea6c[];
extern "C" char data_020aea80[];
extern "C" char data_020aea94[];
extern "C" char data_020aeaa8[];
extern "C" char data_020c48a0[];
extern "C" char data_020c5e40[];
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void STD_ConcatenateString(void);
extern "C" void STD_CopyString(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN11FileManager7ReleaseEPv(void);
extern "C" void _ZN12SceneManager13func_0203e30cEv(void);
extern "C" void _ZN12SoundManager13func_0203b3c8Ei(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1f4Ev(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _Znwm(void);
extern "C" void __cxa_vec_cleanup(void);
extern "C" void __cxa_vec_ctor(void);
extern "C" void func_02017cdc(void);
extern "C" void func_ov015_02149218(void);
extern "C" void func_ov015_0214922c(void);
extern "C" void func_ov015_02149240(void);
extern "C" void func_ov015_0214927c(void);
extern "C" void func_ov015_02149294(void);
extern "C" void func_ov015_021493f8(void);
extern "C" void func_ov015_021495c0(void);
extern "C" void func_ov015_02149614(void);
extern "C" void func_ov015_0214963c(void);
extern "C" void func_ov015_021496b4(void);
extern "C" void func_ov015_021496bc(void);
extern "C" void func_ov015_021496c4(void);
extern "C" void func_ov015_021496cc(void);

asm UnkClass_02060294 * UnkClass_02060294::func_02060294()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r12, =_ZN12Unk_0205dee013func_0205f97cEv
    ldr r3, =_ZN12Unk_0205dee013func_0205f958Ev
    mov r1, #0x11
    mov r2, #0x22c
    mov r4, r0
    str r12, [sp]
    bl __cxa_vec_ctor
    mov r2, #0
    mov r1, r2
@L_020602c0:
    add r0, r4, r2, lsl #2
    add r0, r0, #0x2000
    add r2, r2, #1
    str r1, [r0, #0x4f4]
    cmp r2, #8
    blt @L_020602c0
    mov r0, r4
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void UnkClass_02060294::func_020602ec()
{
    stmdb sp!, {r4, lr}
    ldr r3, =_ZN12Unk_0205dee013func_0205f97cEv
    mov r1, #0x11
    mov r2, #0x22c
    mov r4, r0
    bl __cxa_vec_cleanup
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02060294::func_02060310()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r1, #0
    add r0, r4, #0x2000
    str r1, [r0, #0x51c]
    mov r6, r1
@L_02060328:
    add r0, r4, r1, lsl #2
    add r0, r0, #0x2000
    str r6, [r0, #0x644]
    add r1, r1, #1
    str r6, [r0, #0x65c]
    cmp r1, #6
    blt @L_02060328
    mov r5, #0x22c
@L_02060348:
    mla r0, r6, r5, r4
    mov r1, r4
    bl _ZN12Unk_0205dee013func_0205f994El
    add r6, r6, #1
    cmp r6, #0x11
    blt @L_02060348
    mov r6, #0
    mov r5, #0x388
@L_02060368:
    mov r0, r5
    bl _Znwm
    cmp r0, #0
    beq @L_0206037c
    bl func_ov015_02149218
@L_0206037c:
    add r1, r4, r6, lsl #2
    add r2, r1, #0x2000
    mov r1, r4
    str r0, [r2, #0x4f4]
    bl func_ov015_0214922c
    add r6, r6, #1
    cmp r6, #9
    blt @L_02060368
    add r0, r4, #0x274
    mov r5, #0
    mov r1, r5
    add r0, r0, #0x2800
    mov r2, #4
    bl MI_CpuFill8
    add r0, r4, #0x278
    mov r1, r5
    add r0, r0, #0x2800
    mov r2, #0x4c
    bl MI_CpuFill8
    add r2, r4, #0x2000
    mov r0, r4
    mov r1, r5
    strb r5, [r2, #0xac4]
    bl func_02060634
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02060294::func_020603e0()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    add r0, r6, #0x274
    mov r4, #0
    mov r1, r4
    add r0, r0, #0x2400
    mov r2, #0x400
    bl MI_CpuFill8
    add r0, r6, #0x520
    mov r1, r4
    add r0, r0, #0x2000
    mov r2, #0x11
    bl MI_CpuFill8
    add r0, r6, #0x134
    mov r1, r4
    add r0, r0, #0x2400
    mov r2, #0x110
    bl MI_CpuFill8
    mov r5, #1
    mov r4, #0x22c
@L_02060430:
    mla r0, r5, r4, r6
    bl _ZN12Unk_0205dee013func_0205fed0Ev
    add r5, r5, #1
    cmp r5, #9
    blt @L_02060430
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02060294::func_02060448()
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, =data_020c47b4
    mov r2, #2
    mov r3, #1
    mov r5, r1
    bl _ZN8GameHeap5AllocEiii
    movs r4, r0
    beq @L_02060474
    mov r2, r5
    mov r1, #0
    bl MI_CpuFill8
@L_02060474:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

void UnkClass_02060294::func_02060480(void *ptr)
{
    data_020c47b4.Free(ptr);
}

asm void UnkClass_02060294::func_02060494(void *dst)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    add r0, r4, #0x274
    mov r5, r1
    add r0, r0, #0x2400
    mov r2, #0x400
    bl MI_CpuCopy8
    add r0, r4, #0x274
    add r1, r5, #0x288
    add r0, r0, #0x2800
    add r1, r1, #0x2400
    mov r2, #4
    bl MI_CpuCopy8
    add r7, r5, #0x400
    mov r8, #0
    mov r5, #0x22c
    mov r6, #0x208
@L_020604d8:
    mla r0, r8, r5, r4
    mla r1, r8, r6, r7
    bl _ZN12Unk_0205dee013func_02060104Ev
    add r8, r8, #1
    cmp r8, #0x11
    blt @L_020604d8
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02060294::func_020604f8(void *src)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x54
    mov r6, r0
    mov r5, r1
    add r1, r6, #0x274
    mov r0, r5
    add r1, r1, #0x2400
    mov r2, #0x400
    bl MI_CpuCopy8
    add r0, r5, #0x288
    add r1, r6, #0x274
    add r0, r0, #0x2400
    add r1, r1, #0x2800
    mov r2, #4
    bl MI_CpuCopy8
    mov r4, #0
    add r10, r5, #0x400
    mov r11, #0x2000
    add r9, sp, #8
    mov r8, r4
@L_02060548:
    cmp r4, #0x10
    bge @L_02060590
    mov r0, #0x22c
    mul r7, r4, r0
    add r0, r6, r7
    bl _ZN12Unk_0205dee013func_0205fed0Ev
    mov r1, #0x208
    mul r3, r4, r1
    add r1, r5, r3
    ldr r2, [r1, #0x400]
    add r1, r10, r3
    add r2, r6, r2, lsl #2
    add r3, r2, #0x2000
    ldr r2, [r3, #0x644]
    ldr r3, [r3, #0x65c]
    add r0, r6, r7
    bl _ZN12Unk_0205dee013func_02060164Ev
    b @L_0206060c
@L_02060590:
    mov r0, r9
    mov r1, r8
    sub r7, r4, #0x10
    mov r2, #0x4c
    bl MI_CpuFill8
    add r2, r6, r7, lsl #2
    add r2, r2, #0x2000
    ldr r3, [r2, #0xa74]
    mov r0, r6
    mov r1, r7
    mov r2, r9
    bl func_02061358
    movs r7, r0
    beq @L_0206060c
    mov r0, #0x208
    mla r2, r4, r0, r5
    str r4, [r7, #0x18]
    ldr r1, [r2, #0x400]
    mov r0, #0x22c
    add r3, r6, r1, lsl #2
    add r3, r3, #0x2000
    ldr r12, [r3, #0x65c]
    mla r0, r4, r0, r6
    str r12, [sp]
    str r8, [sp, #4]
    ldr r2, [r2, #0x404]
    ldr r3, [r3, #0x644]
    bl _ZN12Unk_0205dee013func_0205f9a8Ev
    cmp r0, #0
    strne r11, [r7, #0x1c]
    strne r8, [r7, #0xc]
@L_0206060c:
    add r4, r4, #1
    cmp r4, #0x11
    blt @L_02060548
    mov r0, #1
    add sp, sp, #0x54
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

u8 *UnkClass_02060294::func_02060624(int i)
{
    return &((u8 *)this + 0x2674)[i * 4];
}

asm void UnkClass_02060294::func_02060634()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x94
    movs r5, r1
    mov r9, r0
    mov r7, #1
    beq @L_0206073c
    add r0, r9, r5, lsl #2
    add r0, r0, #0x2000
    ldr r0, [r0, #0x644]
    cmp r0, #0
    addne sp, sp, #0x94
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r4, sp, #0x54
    ldr r1, =data_020aea6c
    mov r0, r4
    bl STD_CopyString
    ldr r1, =data_020ae9cc
    mov r0, r4
    ldr r1, [r1, r5, lsl #2]
    bl STD_ConcatenateString
    ldr r3, =data_020c47b4
    ldr r0, [r3]
    cmp r0, #0
    beq @L_020606c0
    mov r6, #0
    str r6, [sp]
    str r6, [sp, #4]
    add r1, r9, #0x244
    add r2, r1, #0x2400
    str r6, [sp, #8]
    str r7, [sp, #0xc]
    mov r1, r4
    add r2, r2, r5, lsl #2
    str r7, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020606c0:
    add r0, r9, r5, lsl #2
    add r0, r0, #0x2000
    ldr r0, [r0, #0x65c]
    cmp r0, #0
    bne @L_0206073c
    ldr r4, =data_020ae9a4
    ldr r0, [r4, r5, lsl #2]
    cmp r0, #0
    beq @L_0206073c
    add r6, sp, #0x14
    ldr r1, =data_020aea80
    mov r0, r6
    bl STD_CopyString
    ldr r1, [r4, r5, lsl #2]
    mov r0, r6
    bl STD_ConcatenateString
    ldr r3, =data_020c47b4
    ldr r0, [r3]
    cmp r0, #0
    beq @L_0206073c
    mov r4, #0
    str r4, [sp]
    str r4, [sp, #4]
    add r1, r9, #0x25c
    add r2, r1, #0x2400
    str r4, [sp, #8]
    str r7, [sp, #0xc]
    mov r1, r6
    add r2, r2, r5, lsl #2
    str r7, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_0206073c:
    ldr r5, =data_020c47b4
    ldr r11, =data_020ae9a4
    mov r8, #1
    add r6, sp, #0x54
    add r4, sp, #0x14
@L_02060750:
    add r0, r9, r8, lsl #2
    add r10, r0, #0x244
    add r0, r0, #0x2000
    ldr r0, [r0, #0x644]
    cmp r0, #0
    bne @L_02060828
    ldr r1, =data_020aea94
    mov r0, r6
    bl STD_CopyString
    ldr r1, =data_020ae9cc
    mov r0, r6
    ldr r1, [r1, r8, lsl #2]
    bl STD_ConcatenateString
    ldr r0, [r5]
    cmp r0, #0
    beq @L_020607b8
    mov r1, #0
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r7, [sp, #0xc]
    add r2, r10, #0x2400
    mov r1, r6
    mov r3, r5
    str r7, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020607b8:
    add r0, r9, r8, lsl #2
    add r10, r0, #0x25c
    add r0, r0, #0x2000
    ldr r0, [r0, #0x65c]
    cmp r0, #0
    bne @L_02060828
    ldr r0, [r11, r8, lsl #2]
    cmp r0, #0
    beq @L_02060828
    ldr r1, =data_020aeaa8
    mov r0, r4
    bl STD_CopyString
    ldr r1, [r11, r8, lsl #2]
    mov r0, r4
    bl STD_ConcatenateString
    ldr r0, [r5]
    cmp r0, #0
    beq @L_02060828
    mov r1, #0
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r7, [sp, #0xc]
    add r2, r10, #0x2400
    mov r1, r4
    mov r3, r5
    str r7, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_02060828:
    add r8, r8, #1
    cmp r8, #4
    ble @L_02060750
    add sp, sp, #0x94
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

u8 *UnkClass_02060294::func_02060858(int i)
{
    return (u8 *)this + i * 0x22C;
}

asm void UnkClass_02060294::func_02060864(int a, int b, int c, int d)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r10, r0
    mov r9, r2
    add r0, r10, r9, lsl #2
    mov r4, r1
    add r1, r0, #0x2000
    mov r0, #0x22c
    ldr r2, [r1, #0x65c]
    mla r0, r4, r0, r10
    str r2, [sp]
    mov r5, #0
    mov r8, r3
    str r5, [sp, #4]
    ldr r3, [r1, #0x644]
    mov r1, r9
    mov r2, r8
    ldr r7, [sp, #0x30]
    bl _ZN12Unk_0205dee013func_0205f9a8Ev
    cmp r0, #0
    addne sp, sp, #8
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, #0
    addeq sp, sp, #8
    subeq r0, r5, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, r10, r9, lsl #2
    add r0, r1, #0x25c
    add r1, r1, #0x244
    add r4, r4, r7
    add r5, r0, #0x2400
    add r6, r1, #0x2400
    mov r11, #0
    b @L_02060924
@L_020608f0:
    mov r0, #0x22c
    ldr r1, [r5]
    mla r0, r4, r0, r10
    stmia sp, {r1, r11}
    ldr r3, [r6]
    mov r1, r9
    mov r2, r8
    bl _ZN12Unk_0205dee013func_0205f9a8Ev
    cmp r0, #0
    addne sp, sp, #8
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r4, r4, r7
@L_02060924:
    cmp r4, #0x11
    blo @L_020608f0
    mvn r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02060294::func_02060938(int a, int b, int c, int d)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r4, [sp, #0x20]
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    cmp r4, #0
    mov r4, #0
    bne @L_02060998
    mov r3, r4
    add r2, r8, #1
@L_02060964:
    add r0, r9, r3, lsl #4
    add r0, r0, #0x2000
    ldr r1, [r0, #0x534]
    cmp r2, r1
    bne @L_0206098c
    ldr r0, [r0, #0x53c]
    cmp r6, r0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0206098c:
    add r3, r3, #1
    cmp r3, #0x11
    blt @L_02060964
@L_02060998:
    mov r5, #0
    mov r10, #0x22c
@L_020609a0:
    mla r0, r5, r10, r9
    mov r1, r7
    mov r2, r6
    bl _ZN12Unk_0205dee013func_0205ff20Ev
    cmp r0, #0
    beq @L_020609f0
    mov r6, #0
    add r2, r5, #1
@L_020609c0:
    add r3, r9, r6
    add r0, r3, #0x2500
    ldrsb r1, [r0, #0x20]
    add r0, r3, #0x520
    add r0, r0, #0x2000
    cmp r2, r1
    add r6, r6, #1
    streqb r4, [r0]
    cmp r6, #0x11
    blt @L_020609c0
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020609f0:
    add r5, r5, #1
    cmp r5, #0x11
    blt @L_020609a0
    mov r2, #0
@L_02060a00:
    add r0, r9, r2, lsl #4
    add r0, r0, #0x2000
    ldr r1, [r0, #0x534]
    cmp r1, #0
    bne @L_02060a34
    add r1, r8, #1
    str r1, [r0, #0x534]
    str r7, [r0, #0x538]
    ldr r1, [sp, #0x20]
    str r6, [r0, #0x53c]
    str r1, [r0, #0x540]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02060a34:
    add r2, r2, #1
    cmp r2, #0x11
    blt @L_02060a00
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02060294::func_02060a48()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    cmp r1, #0
    bge @L_02060a88
    mov r5, #0
    mov r4, #0x22c
@L_02060a60:
    mla r0, r5, r4, r6
    bl _ZN12Unk_0205dee013func_0205ff58Ev
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    add r5, r5, #1
    cmp r5, #0x11
    blt @L_02060a60
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_02060a88:
    mov r0, #0x22c
    mla r0, r1, r0, r6
    bl _ZN12Unk_0205dee013func_0205ff58Ev
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02060294::func_02060a98()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    mov r6, r0
    mov r8, r1
    mov r0, #0x22c
    mla r0, r8, r0, r6
    mov r5, r2
    mov r2, #0
    mov r7, #5
    mov r4, r3
    mov r1, r7
    mov r3, r2
    stmia sp, {r2, r5}
    bl _ZN12Unk_0205dee013func_0205f9a8Ev
    cmp r0, #0
    addne sp, sp, #8
    movne r0, r8
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r4, #0
    addeq sp, sp, #8
    subeq r0, r7, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r10, r8, r4
    mov r8, r7
    mov r9, #0
    mov r7, #0x22c
    b @L_02060b34
@L_02060b04:
    mla r0, r10, r7, r6
    str r9, [sp]
    mov r1, r8
    mov r2, r9
    mov r3, r9
    str r5, [sp, #4]
    bl _ZN12Unk_0205dee013func_0205f9a8Ev
    cmp r0, #0
    addne sp, sp, #8
    movne r0, r10
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r10, r10, r4
@L_02060b34:
    cmp r10, #0x11
    blo @L_02060b04
    mvn r0, #0
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

s32 UnkClass_02060294::func_02060b48(int i)
{
    return *(s32 *)(func_02060858(i) + 0x28);
}

BOOL UnkClass_02060294::func_02060b58(int i)
{
    ((Unk_0205dee0 *)((u8 *)this + i * 0x22C))->func_0205fed0();
    return TRUE;
}

asm void UnkClass_02060294::func_02060b70()
{
    stmdb sp!, {r3, lr}
    add r2, r1, #1
    mov r2, r2, lsl #0x18
    mov r12, #0
    mov r3, r2, asr #0x18
@L_02060b84:
    add r2, r0, r12
    add r2, r2, #0x2500
    ldrsb r2, [r2, #0x20]
    cmp r3, r2
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
    add r12, r12, #1
    cmp r12, #0x11
    blt @L_02060b84
    mov lr, #0
@L_02060bac:
    add r12, r0, lr
    add r2, r12, #0x2500
    ldrsb r3, [r2, #0x20]
    add r2, r12, #0x520
    add r2, r2, #0x2000
    cmp r3, #0
    addeq r0, r1, #1
    streqb r0, [r2]
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
    add lr, lr, #1
    cmp lr, #0x11
    blt @L_02060bac
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02060294::func_02060be8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r2
    mov r6, r0
    mov r5, r1
    mov r2, #0
@L_02060bfc:
    add r0, r6, r2, lsl #4
    add r0, r0, #0x2000
    ldr r1, [r0, #0x534]
    cmp r1, #0
    beq @L_02060c30
    ldr r1, [r0, #0x538]
    cmp r5, r1
    ldreq r1, [r0, #0x53c]
    cmpeq r4, r1
    moveq r1, #0
    streq r1, [r0, #0x534]
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_02060c30:
    add r2, r2, #1
    cmp r2, #0x11
    blt @L_02060bfc
    mov r8, #0
    mov r7, #0x22c
@L_02060c44:
    mla r0, r8, r7, r6
    mov r1, r5
    mov r2, r4
    bl _ZN12Unk_0205dee013func_0205ff20Ev
    cmp r0, #0
    beq @L_02060c6c
    mov r0, r6
    mov r1, r8
    bl func_02060b70
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02060c6c:
    add r8, r8, #1
    cmp r8, #0x11
    blt @L_02060c44
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02060294::func_02060c80()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, =data_020c47b4
    mov r5, r0
    mov r4, #1
    mvn r7, #0
@L_02060c94:
    add r0, r5, r4, lsl #2
    add r0, r0, #0x2000
    ldr r1, [r0, #0x644]
    cmp r1, #0
    beq @L_02060cf4
    ldr r0, [r6]
    cmp r0, #0
    moveq r0, r7
    beq @L_02060cbc
    bl _ZN11FileManager7ReleaseEPv
@L_02060cbc:
    cmp r0, #0
    bgt @L_02060d00
    add r0, r5, r4, lsl #2
    add r0, r0, #0x2000
    ldr r1, [r0, #0x65c]
    cmp r1, #0
    beq @L_02060cf4
    ldr r0, [r6]
    cmp r0, #0
    moveq r0, r7
    beq @L_02060cec
    bl _ZN11FileManager7ReleaseEPv
@L_02060cec:
    cmp r0, #0
    bgt @L_02060d00
@L_02060cf4:
    add r4, r4, #1
    cmp r4, #6
    blt @L_02060c94
@L_02060d00:
    mov r0, #1
    cmp r4, #6
    movne r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02060294::func_02060d14()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r5, #0
    mov r4, #0x22c
@L_02060d24:
    add r0, r7, r5
    add r0, r0, #0x2500
    ldrsb r0, [r0, #0x20]
    cmp r0, #0
    beq @L_02060d44
    sub r1, r0, #1
    mla r0, r1, r4, r7
    bl _ZN12Unk_0205dee013func_0205fed0Ev
@L_02060d44:
    add r5, r5, #1
    cmp r5, #0x11
    blt @L_02060d24
    add r0, r7, #0x520
    mov r5, #0
    mov r1, r5
    add r0, r0, #0x2000
    mov r2, #0x11
    bl MI_CpuFill8
    mov r6, r5
    mov r4, #1
@L_02060d70:
    add r0, r7, r6, lsl #4
    add r1, r0, #0x2000
    ldr r12, [r1, #0x534]
    cmp r12, #0
    beq @L_02060db4
    ldr r2, [r1, #0x540]
    mov r0, r7
    str r2, [sp]
    ldr r2, [r1, #0x538]
    ldr r3, [r1, #0x53c]
    sub r1, r12, #1
    bl func_02060864
    add r0, r7, r6, lsl #4
    add r0, r0, #0x2000
    ldr r0, [r0, #0x534]
    sub r0, r0, #1
    orr r5, r5, r4, lsl r0
@L_02060db4:
    add r6, r6, #1
    cmp r6, #0x11
    blt @L_02060d70
    add r0, r7, #0x134
    add r0, r0, #0x2400
    mov r1, #0
    mov r2, #0x110
    bl MI_CpuFill8
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02060294::func_02060ddc()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    cmp r1, #0
    addge r0, r5, r1, lsl #2
    addge r0, r0, #0x2000
    mov r4, r2
    ldrge r0, [r0, #0x4f4]
    ldmgeia sp!, {r4, r5, r6, pc}
    cmp r4, #0x10
    bge @L_02060e40
    mov r6, #0
@L_02060e08:
    add r0, r5, r6, lsl #2
    add r0, r0, #0x2000
    ldr r0, [r0, #0x4f4]
    mov r1, r4
    bl func_ov015_02149240
    cmp r0, #0
    addne r0, r5, r6, lsl #2
    addne r0, r0, #0x2000
    ldrne r0, [r0, #0x4f4]
    ldmneia sp!, {r4, r5, r6, pc}
    add r6, r6, #1
    cmp r6, #8
    blt @L_02060e08
    b @L_02060e78
@L_02060e40:
    mov r6, #8
@L_02060e44:
    add r0, r5, r6, lsl #2
    add r0, r0, #0x2000
    ldr r0, [r0, #0x4f4]
    mov r1, r4
    bl func_ov015_02149240
    cmp r0, #0
    addne r0, r5, r6, lsl #2
    addne r0, r0, #0x2000
    ldrne r0, [r0, #0x4f4]
    ldmneia sp!, {r4, r5, r6, pc}
    add r6, r6, #1
    cmp r6, #9
    blt @L_02060e44
@L_02060e78:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02060294::func_02060e80()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r8, r1
    mvn r1, #0
    ldr r5, [sp, #0x20]
    mov r9, r0
    mov r7, r2
    mov r6, r3
    bl func_02060ddc
    movs r4, r0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #0x22c
    mul r10, r7, r0
@L_02060eb4:
    mov r1, r8
    mov r2, r6
    add r0, r9, r10
    bl _ZN12Unk_0205dee013func_02060214Ev
    movs r8, r0
    beq @L_02060ee4
    mov r0, r4
    mov r1, r8
    mov r2, r5
    bl func_ov015_02149294
    cmp r0, #0
    beq @L_02060eb4
@L_02060ee4:
    cmp r4, #0
    beq @L_02060ef4
    mov r0, r4
    bl func_ov015_0214927c
@L_02060ef4:
    mov r0, r8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02060294::func_02060efc()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    add r12, r7, #0x2000
    ldr r4, [r12, #0x51c]
    mov r6, r1
    cmp r4, #0
    mov r5, r3
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mvn r1, #0
    bl func_02060ddc
    movs r4, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r3, [sp, #0x18]
    mov r1, r6
    mov r2, r5
    bl func_ov015_021493f8
    add r0, r7, #0x2000
    str r4, [r0, #0x51c]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02060294::func_02060f54()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x14
    mov r4, r0
    add r0, r4, #0x2000
    mov r6, #0
    str r6, [r0, #0xac8]
    b @L_020611d8
@L_02060f70:
    add r1, r4, #0x2000
    ldr r7, [r1, #0xac8]
    mov r5, #0x4c
    mla r0, r7, r5, r4
    add r0, r0, #0x2000
    ldr r2, [r0, #0xa88]
    cmp r2, #0
    bne @L_020610a8
    ldr r0, [r0, #0xa90]
    cmp r0, #0
    ldrne r0, [r1, #0x4f0]
    cmpne r0, #0
    ldrne r1, [r1, #0x4ec]
    cmpne r1, #0
    beq @L_020611c8
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    cmp r0, #0x83
    bne @L_020611c8
    ldr r0, =data_020a71bc
    ldr r5, =data_020c48a0
    add r3, sp, #8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r5]
    ldrsh r0, [r5, #4]
    str r1, [sp, #8]
    bl func_02017cdc
    ldrsh r1, [r5, #6]
    rsb r1, r1, #0x100
    cmp r1, r0
    bne @L_020611c8
    ldr r1, [sp, #8]
    ldr r0, [sp, #0xc]
    cmp r1, r0
    beq @L_02061008
    ldr r0, [sp, #0x10]
    cmp r1, r0
    bne @L_020611c8
@L_02061008:
    mov r8, #0x4c
    mla r0, r7, r8, r4
    add r0, r0, #0x2000
    ldr r1, [r0, #0xa90]
    mov r0, r4
    bl func_02060a48
    cmp r0, #0
    beq @L_020611c8
    mla r0, r7, r8, r4
    add r5, sp, #4
    str r6, [sp, #4]
    str r5, [sp]
    add r0, r0, #0x2000
    ldr r1, [r0, #0xa84]
    ldr r2, [r0, #0xa90]
    ldr r3, [r0, #0xa94]
    mov r0, r4
    bl func_02060e80
    mla r1, r7, r8, r4
    add r1, r1, #0x2000
    str r0, [r1, #0xa84]
    cmp r0, #0
    bne @L_02061074
    ldr r1, [r1, #0xa90]
    mov r0, r4
    bl func_02060b58
    b @L_020611c8
@L_02061074:
    ldr r2, [r1, #0xa90]
    mov r0, r4
    sub r1, r6, #1
    bl func_02060ddc
    mla r1, r7, r8, r4
    add r2, r1, #0x2000
    str r0, [r2, #0xa88]
    add r1, r4, #0x2000
    ldr r1, [r1, #0x4ec]
    ldr r2, [r2, #0xa84]
    mov r3, r5
    bl func_ov015_021493f8
    b @L_020611c8
@L_020610a8:
    bl _ZN12SceneManager13func_0203e30cEv
    cmp r0, #3
    bne @L_020611c8
    mla r0, r7, r5, r4
    add r0, r0, #0x2000
    ldr r0, [r0, #0xa88]
    bl func_ov015_0214963c
    cmp r0, #0
    bne @L_020611c8
    add r0, r4, r7, lsl #2
    add r1, r0, #0x2000
    ldr r0, [r1, #0xa74]
    cmp r0, #0
    beq @L_020611c8
    add r0, r4, #0x274
    add r2, r0, #0x2800
    ldr r0, [r2, r7, lsl #2]
    subs r0, r0, #1
    str r0, [r2, r7, lsl #2]
    bne @L_02061144
    mla r0, r7, r5, r4
    add r0, r0, #0x2000
    ldr r0, [r0, #0xa88]
    bl func_ov015_021495c0
    mla r0, r7, r5, r4
    add r0, r0, #0x2000
    ldr r0, [r0, #0xa88]
    bl func_ov015_0214927c
    mla r0, r7, r5, r4
    add r0, r0, #0x2000
    ldr r1, [r0, #0xa90]
    mov r0, r4
    bl func_02060b58
    add r0, r4, #0x278
    add r0, r0, #0x2800
    mla r1, r7, r5, r0
    mov r0, r4
    bl func_02061400
    b @L_020611c8
@L_02061144:
    ldr r0, [r1, #0xa74]
    cmp r0, #0
    sublt r0, r5, #0x4d
    mov r5, #0x4c
    strlt r0, [r1, #0xa74]
    mla r0, r7, r5, r4
    add r0, r0, #0x2000
    ldr r0, [r0, #0xa88]
    bl func_ov015_021496bc
    mla r1, r7, r5, r4
    add r1, r1, #0x2000
    mov r8, r0
    ldr r0, [r1, #0xa88]
    bl func_ov015_021496b4
    mla r1, r7, r5, r4
    mov r9, r0
    add r0, r1, #0x2000
    ldr r0, [r0, #0xa88]
    mov r1, r9
    bl func_ov015_021496c4
    mla r0, r7, r5, r4
    add r0, r0, #0x2000
    ldr r0, [r0, #0xa88]
    mov r1, #1
    bl func_ov015_021496cc
    mov r0, #0
    b @L_020611c0
@L_020611b0:
    strb r6, [r9, #0xb]
    strb r6, [r9, #0xa]
    add r9, r9, #0x4c
    add r0, r0, #1
@L_020611c0:
    cmp r0, r8
    blt @L_020611b0
@L_020611c8:
    add r0, r4, #0x2000
    ldr r1, [r0, #0xac8]
    add r1, r1, #1
    str r1, [r0, #0xac8]
@L_020611d8:
    add r0, r4, #0x2000
    ldr r1, [r0, #0xac8]
    cmp r1, #1
    blt @L_02060f70
    ldr r0, [r0, #0x51c]
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    bl func_ov015_0214963c
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_02060294::func_02061210()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #0x2000
    ldr r0, [r0, #0x51c]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r4, #0
@L_0206122c:
    add r0, r5, r4, lsl #2
    add r0, r0, #0x2000
    ldr r0, [r0, #0x4f4]
    bl func_ov015_021495c0
    add r4, r4, #1
    cmp r4, #8
    blt @L_0206122c
    add r0, r5, #0x2000
    mov r1, #0
    str r1, [r0, #0x51c]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02060294::func_02061258()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x2000
    ldr r0, [r0, #0x51c]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov015_02149614
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02060294::func_02061274()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x2000
    ldr r0, [r0, #0x51c]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov015_02149628
    ldr r0, =data_020c5e40
    mov r1, #0x64
    bl _ZN12SoundManager13func_0203b3c8Ei
    ldmia sp!, {r3, pc}
}

void UnkClass_02060294::func_020612a0(s32 value)
{
    *(s32 *)&data[0x24F0] = value;
}

void UnkClass_02060294::func_020612ac(s32 value)
{
    *(s32 *)&data[0x24EC] = value;
}

asm void UnkClass_02060294::func_020612b8()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0x4c
    mul r4, r1, r2
    mov r5, r0
    add r0, r5, r4
    add r0, r0, #0x2000
    ldr r0, [r0, #0xa88]
    cmp r0, #0
    beq @L_02061304
    bl func_ov015_021495c0
    add r0, r5, r4
    add r0, r0, #0x2000
    ldr r0, [r0, #0xa88]
    bl func_ov015_0214927c
    add r0, r5, r4
    add r0, r0, #0x2000
    ldr r1, [r0, #0xa90]
    mov r0, r5
    bl func_02060b58
@L_02061304:
    add r0, r5, #0x278
    add r1, r0, #0x2800
    mov r0, r5
    add r1, r1, r4
    bl func_02061400
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02060294::func_0206131c()
{
    cmp r1, #0
    mov r3, #0
    blt @L_02061350
    cmp r1, #1
    bge @L_02061350
    add r3, r0, #0x278
    add r12, r3, #0x2800
    mov r3, #0x4c
    add r0, r0, r1, lsl #2
    add r0, r0, #0x2000
    ldr r0, [r0, #0xa74]
    mla r3, r1, r3, r12
    str r0, [r2]
@L_02061350:
    mov r0, r3
    bx lr
}

asm void UnkClass_02060294::func_02061358()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r6, r1
    mov r7, r0
    mov r5, r2
    mov r4, r3
    mov r12, #0
    bmi @L_020613f8
    cmp r6, #1
    bge @L_020613f8
    bl func_020612b8
    mov r0, #0x4c
    mul r1, r6, r0
    add r0, r7, #0x278
    add r2, r0, #0x2800
    ldr r0, [r5]
    add r12, r2, r1
    str r0, [r2, r1]
    ldr r1, [r5, #4]
    add r0, r7, r6, lsl #2
    str r1, [r12, #4]
    ldrsb r1, [r5, #8]
    add lr, r5, #0xc
    add r7, r12, #0xc
    strb r1, [r12, #8]
    ldrsb r1, [r5, #9]
    add r6, r0, #0x2000
    strb r1, [r12, #9]
    ldrsb r0, [r5, #0xa]
    strb r0, [r12, #0xa]
    ldrsb r0, [r5, #0xb]
    strb r0, [r12, #0xb]
    ldmia lr!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    ldmia lr!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    ldmia lr!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    ldmia lr, {r0, r1, r2, r3}
    stmia r7, {r0, r1, r2, r3}
    str r4, [r6, #0xa74]
@L_020613f8:
    mov r0, r12
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02060294::func_02061400()
{
    stmdb sp!, {r3, lr}
    add r2, r0, #0x278
    add r3, r2, #0x2800
    mov lr, #0
    mov r2, #0x4c
@L_02061414:
    mla r12, lr, r2, r3
    cmp r12, r1
    bne @L_02061440
    add r1, r0, lr, lsl #2
    add r3, r1, #0x2000
    mov r1, #0
    mov r0, r12
    mov r2, #0x4c
    str r1, [r3, #0xa74]
    bl MI_CpuFill8
    ldmia sp!, {r3, pc}
@L_02061440:
    add lr, lr, #1
    cmp lr, #1
    blt @L_02061414
    ldmia sp!, {r3, pc}
}

s32 UnkClass_02060294::func_02061450()
{
    return *(s32 *)&data[0x2AC8];
}

void UnkClass_02060294::func_0206145c()
{
    data[0x2AC4] = 0;
}

void UnkClass_02060294::func_0206146c(int bit)
{
    data[0x2AC4] |= (u8)(1 << bit);
}

u8 UnkClass_02060294::func_0206148c()
{
    return data[0x2AC4];
}
