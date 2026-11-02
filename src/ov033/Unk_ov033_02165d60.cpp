#include "ov033/Unk_ov033_02165d60.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_ov033_02165d60(...);
extern "C" s32 func_ov033_02165e14(...);
extern "C" void func_ov033_02165ed4(void);
extern "C" s32 func_ov033_02165f64(...);
extern "C" s32 func_ov033_02165fec(...);
extern "C" s32 func_ov033_02166040(...);
extern "C" void func_ov033_021660ac(s32 arg0, s32 arg1);
extern "C" void func_ov033_021660e8(void);
extern "C" s32 func_ov033_02166138(s32 arg0, s32 arg1);
extern "C" s32 func_ov033_02166144(...);
extern "C" s32 func_ov033_02166224(...);
extern "C" s32 func_ov033_02166490(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, u16 arg12);
extern "C" void func_ov033_021665cc(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov033_02166670(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov033_021666f8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov033_0216678c(void);
extern "C" s32 func_ov033_0216682c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_ov033_02166914(void);
extern "C" s32 func_ov033_021669f8(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4);
extern "C" void func_ov033_02166a7c(u8 *arg0);
extern "C" s32 func_ov033_02166a98(...);
extern "C" void func_ov033_02166ad0(void);
extern "C" s32 func_ov033_02166afc(s32 arg0, s32 arg1);
extern "C" void func_ov033_02166b3c(u8 *arg0, s32 arg1);
extern "C" void func_ov033_02166b70(u8 *arg0, s32 arg1);
extern "C" void func_ov033_02166c14(void);
extern "C" s32 func_ov033_02166ca4(s32 arg0);
extern "C" s32 func_ov033_02166d50(u8 *arg0);
extern "C" void func_ov033_02166eec(void);
extern "C" s32 func_ov033_02166ef0(u8 *arg0);
extern "C" void func_ov033_02166f50(void);
extern "C" s32 func_ov033_02166f54(s32 arg0);

extern "C" char data_020c46b8[];
extern "C" char data_020c46c4[];
extern "C" char data_020c46d4[];
extern "C" char data_020c484c[];
extern "C" char data_020c5e40[];
extern "C" char data_020cb0e4[];
extern "C" char data_ov033_02166f68[];
extern "C" char data_ov033_02167078[];
extern "C" char data_ov033_02167120[];
extern "C" char data_ov033_0216718c[];
extern "C" char data_ov033_021671b0[];
extern "C" char data_ov033_021671b8[];
extern "C" char data_ov033_021671dc[];
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203df24Ev(...);
extern "C" s32 _ZN17UnkClass_0203dc7c13func_0203e0ccEi(...);
extern "C" s32 _ZdlPv(...);
extern "C" void _s32_div_f(void);
extern "C" s32 func_02091d54(...);
extern "C" s32 func_02091d64(...);
extern "C" s32 func_020920c4(...);
extern "C" void func_02092270(void);
extern "C" void func_02092544(void);
extern "C" s32 func_02093188(...);
extern "C" s32 func_02093368(...);
extern "C" s32 func_02093524(...);
extern "C" s32 func_020939c8(...);
extern "C" void func_02093bb0(void);
extern "C" void func_02097898(void);
extern "C" void func_02097aa0(void);
extern "C" void func_02097b3c(void);
extern "C" void func_02097c74(void);
extern "C" void func_02097ca8(void);
extern "C" void func_ov015_02133ba8(void);
extern "C" void func_ov015_02133efc(void);
extern "C" s32 func_ov015_02134118(...);
extern "C" void func_ov015_02134198(void);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02134b08(void);
extern "C" s32 func_ov015_021616a4(...);
extern "C" s32 func_ov015_021616dc(...);
extern "C" s32 func_ov015_02161710(...);
extern "C" s32 func_ov015_02161760(...);
extern "C" s32 func_ov015_02161c78(...);
extern "C" s32 func_ov015_02161d00(...);
extern "C" s32 func_ov015_02161d24(...);
extern "C" s32 func_ov015_02161dd4(...);
extern "C" s32 func_ov015_02161f84(...);
extern "C" s32 func_ov015_02161fdc(...);
extern "C" s32 func_ov015_02162140(...);
extern "C" void func_ov015_02162420(void);
extern "C" s32 func_ov015_021624f0(...);
extern "C" void func_ov015_02162750(void);
extern "C" s32 func_ov015_021629ac(...);
extern "C" void func_ov015_021629c8(void);
extern "C" s32 func_ov015_02162fb4(...);
extern "C" void sprintf(void);

extern "C" asm s32 func_ov033_02165d60(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    mov r4, r0
    add r1, r4, #0x35c
    ldr r0, =data_ov033_0216718c
    add r1, r1, #0x3800
    bl func_ov015_02133efc
    mov r10, #0
    add r5, r4, #8
    ldr r8, =data_ov033_021671b0
    ldr r11, =0xbdc
    add r9, sp, #0xc
    mov r7, #1
    add r6, sp, #0
    mov r4, r10
@L_02165d9c:
    mov r0, r9
    mov r1, r8
    mov r2, r10
    mov r3, r7
    bl func_ov015_02133ba8
    mov r0, r9
    mov r1, r6
    bl func_ov015_02133efc
    ldr r0, [sp]
    mla r1, r10, r11, r5
    mov r2, r11
    bl MI_CpuCopy8
    mov r0, r6
    mov r1, r7
    bl func_ov015_02134198
    mov r0, r6
    bl func_ov015_02134208
    str r4, [sp]
    str r4, [sp, #4]
    strb r4, [sp, #8]
    strb r4, [sp, #9]
    strb r4, [sp, #0xa]
    add r10, r10, #1
    cmp r10, #5
    blt @L_02165d9c
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov033_02165e14(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x21c
    ldr r1, =data_ov033_021671b8
    mov r10, r0
    add r0, sp, #0x1c
    bl sprintf
    mov r9, #0
    add r4, r10, #0x3000
    mov r6, r9
    mov r5, #1
    add r8, sp, #0x11c
    ldr r7, =data_ov033_02167078
    ldr r11, =data_020c46d4
    b @L_02165eb4
@L_02165e4c:
    ldr r2, [r7, r9, lsl #2]
    ldr r1, =data_ov033_021671dc
    mov r0, r8
    bl sprintf
    ldr r1, [r4, #0xb5c]
    mov r0, r8
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl func_ov015_02134b08
    cmp r0, #0
    beq @L_02165eb0
    ldr r3, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r11]
    mov r1, #5
    str r6, [sp]
    stmib sp, {r5, r6}
    str r2, [sp, #0xc]
    str r3, [sp, #0x10]
    add r2, sp, #0x1c
    mov r3, r6
    bl func_02097898
    add r1, r10, r9, lsl #2
    add r1, r1, #0x3000
    str r0, [r1, #0xb68]
@L_02165eb0:
    add r9, r9, #1
@L_02165eb4:
    cmp r9, #0xa
    blt @L_02165e4c
    add sp, sp, #0x21c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov033_02165ed4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    cmp r1, #1
    blo @L_02165f20
    add r0, r5, #0x35c
    add r4, r0, #0x3800
    mov r0, r4
    mov r1, #1
    bl func_ov015_02134198
    mov r0, r4
    bl func_ov015_02134208
    mov r1, #0
    add r0, r5, #0x3000
    str r1, [r0, #0xb5c]
    str r1, [r4, #4]
    strb r1, [r4, #8]
    strb r1, [r4, #9]
    strb r1, [r4, #0xa]
    ldmia sp!, {r4, r5, r6, pc}
@L_02165f20:
    mov r0, #0xc
    mul r4, r1, r0
    add r0, r5, #0x35c
    add r5, r0, #0x3800
    add r6, r5, r4
    mov r0, r6
    mov r1, #1
    bl func_ov015_02134198
    mov r0, r6
    bl func_ov015_02134208
    mov r0, #0
    str r0, [r5, r4]
    str r0, [r6, #4]
    strb r0, [r6, #8]
    strb r0, [r6, #9]
    strb r0, [r6, #0xa]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov033_02165f64(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mvn r1, #0
    mov r5, r0
    bl func_ov033_02165ed4
    add r0, r5, #0x3a8
    mov r4, #0
    add r7, r0, #0x3800
    mov r6, #0xa8
    b @L_02165f98
@L_02165f88:
    mla r1, r4, r6, r7
    mov r0, r5
    bl func_ov033_021660e8
    add r4, r4, #1
@L_02165f98:
    cmp r4, #1
    blt @L_02165f88
    mov r4, #0
    mov r7, r4
    ldr r6, =data_020c46d4
    b @L_02165fdc
@L_02165fb0:
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xb68]
    cmp r1, #0
    beq @L_02165fd8
    ldr r0, [r6]
    bl func_02097b3c
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    str r7, [r0, #0xb68]
@L_02165fd8:
    add r4, r4, #1
@L_02165fdc:
    cmp r4, #0xa
    blt @L_02165fb0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov033_02165fec(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    ldr r4, =data_020c46d4
    b @L_0216602c
@L_02166000:
    add r0, r6, r5, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xb68]
    cmp r1, #0
    beq @L_02166028
    ldr r0, [r4]
    bl func_02097aa0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
@L_02166028:
    add r5, r5, #1
@L_0216602c:
    cmp r5, #0xa
    blo @L_02166000
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov033_02166040(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    mov r5, r0
    mov r7, r4
    ldr r6, =data_020c46d4
    b @L_0216609c
@L_02166058:
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xb68]
    cmp r1, #0
    beq @L_02166098
    ldr r0, [r6]
    bl func_02097c74
    cmp r0, #0
    bne @L_02166098
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0xb68]
    ldr r0, [r6]
    mov r2, r7
    mov r3, r7
    bl func_02097ca8
@L_02166098:
    add r4, r4, #1
@L_0216609c:
    cmp r4, #0xa
    blo @L_02166058
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov033_021660ac(s32 arg0, s32 arg1)
{
    func_ov015_02162140(*(s32 *)(data_020c46c4), 1, (s32)data_020c46c4);
    if (arg1 != 0)
        return;
    func_ov033_02166224(arg0, ((arg0 + 0x3A8) + 0x3800));
}

extern "C" asm void func_ov033_021660e8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r5, #0
    ldr r4, =data_020c46d4
    b @L_02166118
@L_021660fc:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_02166114
    ldr r0, [r4]
    bl func_02092270
@L_02166114:
    add r5, r5, #1
@L_02166118:
    cmp r5, #0x20
    blt @L_021660fc
    mov r0, r6
    mov r1, #0
    mov r2, #0xa8
    bl MI_CpuFill8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov033_02166138(s32 arg0, s32 arg1)
{
    return (arg1 == 0 ? 0 : arg0);
}

extern "C" asm s32 func_ov033_02166144(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r5, r0
    add r1, r5, #0x3000
    ldr r1, [r1, #0xb58]
    bl func_ov033_02166138
    movs r4, r0
    ldmmiia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r5, #0x3a8
    add r1, r0, #0x3800
    mov r0, #0xa8
    mla r10, r4, r0, r1
    mov r8, #0
    ldr r7, =0x7fff
    ldr r6, =data_020c46d4
    b @L_021661a0
@L_02166180:
    add r0, r10, r8, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_0216619c
    ldr r0, [r6]
    mov r2, r7
    bl func_02093bb0
@L_0216619c:
    add r8, r8, #1
@L_021661a0:
    cmp r8, #0x20
    blt @L_02166180
    add r0, r5, #0x3a8
    sub r9, r4, #1
    add r4, r5, #0x3000
    add r7, r0, #0x3800
    ldr r6, =0x4210
    ldr r5, =data_020c46d4
    mov r11, #0xa8
    b @L_0216620c
@L_021661c8:
    mla r10, r9, r11, r7
    mov r8, #0
    b @L_02166200
@L_021661d4:
    add r0, r10, r8, lsl #2
    ldr r1, [r0, #0x20]
    cmp r1, #0
    ble @L_021661fc
    ldr r0, [r4, #0xba4]
    cmp r0, r1
    beq @L_021661fc
    ldr r0, [r5]
    mov r2, r6
    bl func_02093bb0
@L_021661fc:
    add r8, r8, #1
@L_02166200:
    cmp r8, #0x20
    blt @L_021661d4
    sub r9, r9, #1
@L_0216620c:
    cmp r9, #0
    bge @L_021661c8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov033_02166224(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x5c
    mov r4, #0
    mov r6, r0
    mov r5, r1
    str r4, [sp, #4]
    bl func_ov033_021660e8
    add r0, r6, #0x3000
    ldr r8, [r0, #0xb58]
    add r9, sp, #4
    mov r7, #0x3e8
    str r8, [r5, #0x1c]
    mov r0, r6
    mov r1, r5
    mov r2, r9
    mov r3, r4
    str r7, [r5, #0xa4]
    mov r8, #1
    str r8, [sp]
    bl func_ov033_021669f8
    mov r3, r7
    mov r1, r0
    add r0, r6, #0x3000
    ldr r7, =data_020c46d4
    str r1, [r0, #0xb94]
    ldr r0, [r7]
    mov r2, r8
    bl func_02093368
    add r2, r6, #0x3000
    ldr r3, [r2, #0xb68]
    ldr r1, [r2, #0xb94]
    ldr r0, [r7]
    mov r2, r8
    and r3, r3, #0xff
    bl func_02093188
    str r4, [sp]
    add r1, r6, #0x3000
    ldr r0, [r7]
    ldr r1, [r1, #0xb94]
    mov r2, r8
    mov r3, r4
    bl func_020939c8
    mov r8, #5
    mov r0, r6
    mov r1, r5
    mov r2, r9
    mov r3, r4
    str r8, [sp]
    bl func_ov033_021669f8
    mov r1, r0
    add r0, r6, #0x3000
    str r1, [r0, #0xb98]
    ldr r0, [r7]
    mov r2, #0xa
    bl func_02092544
    mov r0, #0x14
    str r0, [sp]
    mov r0, r6
    mov r1, r5
    mov r2, r9
    mov r3, r4
    bl func_ov033_021669f8
    mov r1, r0
    add r0, r6, #0x3000
    str r1, [r0, #0xb9c]
    mov r10, #0x32
    ldr r0, [r7]
    mov r2, r10
    bl func_02092544
    mov r2, r9
    mov r0, r6
    mov r1, r5
    mov r3, r4
    str r8, [sp]
    bl func_ov033_021669f8
    mov r1, r0
    add r0, r6, #0x3000
    str r1, [r0, #0xba0]
    ldr r0, [r7]
    mov r2, r10
    bl func_02092544
    b @L_02166460
@L_0216636c:
    ldr r1, =data_020cb0e4
    mov r0, #0x54
    mla r9, r4, r0, r1
    add r8, sp, #8
    mov r7, #5
@L_02166380:
    ldmia r9!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    subs r7, r7, #1
    bne @L_02166380
    ldr r0, [r9]
    mov r7, #0
    str r0, [r8]
    ldr r0, =0xbdc
    mov r1, r7
    mla r0, r4, r0, r6
    add r9, sp, #8
    ldr r2, =0xffe0
    mov r8, #0x5c
    b @L_021663e8
@L_021663b8:
    mla r3, r1, r8, r0
    ldrb r3, [r3, #8]
    cmp r3, #1
    bne @L_021663e4
    mov r3, r1, lsl #1
    ldrh r3, [r9, r3]
    and r3, r3, r2
    mov r3, r3, asr #5
    mov r3, r3, lsl #0x10
    movs r3, r3, lsr #0x10
    addne r7, r7, #1
@L_021663e4:
    add r1, r1, #1
@L_021663e8:
    cmp r1, #0x21
    blt @L_021663b8
    ldrb r0, [sp, #0x4a]
    mov r3, r4
    cmp r0, #0
    add r0, r6, #0x3000
    ldr r1, [r0, #0xb98]
    mov r0, r6
    beq @L_02166454
    add r2, r4, #1
    bl func_ov033_02166670
    mov r2, r4, lsl #2
    str r7, [sp]
    add r0, r6, #0x3000
    ldr r1, [r0, #0xb9c]
    mov r0, r6
    mov r3, r4
    add r2, r2, #1
    bl func_ov033_0216678c
    str r7, [sp]
    add r0, r6, #0x3000
    ldr r1, [r0, #0xba0]
    mov r0, r6
    mov r3, r4
    add r2, r4, #1
    bl func_ov033_0216682c
    b @L_0216645c
@L_02166454:
    add r2, r4, #1
    bl func_ov033_021666f8
@L_0216645c:
    add r4, r4, #1
@L_02166460:
    cmp r4, #2
    blt @L_0216636c
    add r2, sp, #4
    mov r0, r6
    mov r1, r5
    bl func_ov033_021665cc
    add sp, sp, #0x5c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov033_02166490(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, u16 arg12)
{
    s32 r8;
    s32 v3;
    s32 v9;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    t0 = *(s32 *)(((u8 *)&data_020c46d4));
    func_02093368(t0, arg1, arg2, arg12);
    t1 = *(s32 *)(((u8 *)&data_020c46d4));
    t2 = (*(s32 *)(((u8 *)((arg0 + (arg11 << 2)) + 0x3000)) + 0xB68) & 0xFF);
    func_02093188(t1, arg1, arg2, t2);
    t3 = *(s32 *)(((u8 *)&data_020c46d4));
    func_020939c8(t3, arg1, arg2, arg9, 0);
    t4 = *(s32 *)(((u8 *)&data_020c46c4));
    v3 = func_ov015_02162fb4(t4, arg3, arg4, arg1, 0x64);
    arg0 = v3;
    r8 = v3;
    if (r8 != 0) {
        func_ov015_02161c78(arg0, arg5, arg6, arg7, arg8);
        func_ov015_02161d00((r8 + 0x3A), 0, 1, 0);
        func_ov015_02161d24((r8 + 0x3A), 0, arg9, 0);
        func_ov015_02161d00((r8 + 0x3E), 0, 1, 0);
        func_ov015_02161d24((r8 + 0x3E), 0, arg10, 0);
    }
    t5 = *(s32 *)(((u8 *)&data_020c46d4));
    v9 = func_02093524(t5, arg1, arg2, ((s16)arg5), ((s16)arg6));
    return v9;
}

extern "C" void func_ov033_021665cc(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 t0 = *(s32 *)(((u8 *)&data_020c46c4));
    func_ov015_02162140(t0, 1, arg2, (s32)((u8 *)&data_020c46c4));
    s32 v1 = ((s32 (*)(...))func_ov033_021669f8)((s32)arg0, arg1, arg2, 0, 1);
    *(s32 *)(arg0 + 0x3BA4) = v1;
    s32 t1 = *(s32 *)(arg0 + 0x3BA4);
    ((s32 (*)(...))func_ov033_02166490)((s32)arg0, t1, 1, 1, 1, 0xD0, 0xA8, 0x30, 0x18, 0, 1, 1, 0x32);
}

extern "C" s32 func_ov033_02166670(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v2;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    if (arg3 < 0)
        return arg0;
    if (arg3 >= 5)
        return arg0;
    t0 = *(s32 *)(data_020c46d4);
    t1 = (*(s32 *)(((u8 *)((arg0 + ((arg3 + 3) << 2)) + 0x3000)) + 0xB68) & 0xFF);
    func_02093188(t0, arg1, arg2, t1);
    t2 = *(s32 *)(data_020c46d4);
    func_020939c8(t2, arg1, arg2, 0, 0);
    t3 = *(s32 *)(data_020c46d4);
    v2 = func_02093524(t3, arg1, arg2, 8, ((s16)((arg3 * 0x18) + 0x28)));
    return v2;
}

extern "C" s32 func_ov033_021666f8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v2;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    if (arg3 < 0)
        return (s32)arg0;
    if (arg3 >= 5)
        return (s32)arg0;
    t0 = *(s32 *)(((u8 *)&data_020c46d4));
    t1 = (*(s32 *)(arg0 + 0x3B8C) & 0xFF);
    func_02093188(t0, arg1, arg2, t1);
    t2 = *(s32 *)(((u8 *)&data_020c46d4));
    func_020939c8(t2, arg1, arg2, 0, 0);
    t3 = *(s32 *)(((u8 *)&data_020c46d4));
    v2 = func_02093524(t3, arg1, arg2, 0, ((s16)((arg3 * 0x18) + 0x28)));
    return v2;
}

extern "C" asm void func_ov033_0216678c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    cmp r3, #0
    mov r8, r0
    mov r7, r1
    mov r6, r2
    addlt sp, sp, #8
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r3, #5
    addge sp, sp, #8
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_ov033_02166f68
    ldr r12, [sp, #0x20]
    ldr r4, [r0, r3, lsl #2]
    mov r0, #0x18
    mul r0, r3, r0
    add r5, r0, #0x30
    mov r0, r5, lsl #0x10
    mov r0, r0, asr #0x10
    cmp r4, r12
    str r0, [sp]
    movlt r12, r4
    mov r0, r8
    mov r1, r7
    mov r2, r6
    mov r3, #0xa0
    str r12, [sp, #4]
    bl func_ov033_02166914
    mov r0, r5, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    mov r0, r8
    mov r1, r7
    add r2, r6, #2
    mov r3, #0xb8
    str r4, [sp, #4]
    bl func_ov033_02166914
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov033_0216682c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 r0;
    s32 v3;
    s32 v4;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    if (arg3 < 0)
        return (s32)arg0;
    if (arg3 >= 5)
        return (s32)arg0;
    t0 = *(s32 *)(((u8 *)&data_020c46d4));
    t1 = (*(s32 *)(arg0 + 0x3B70) & 0xFF);
    func_02093188(t0, arg1, arg2, t1);
    r0 = *(s32 *)(((u8 *)&data_ov033_02166f68) + (arg3 << 2));
    if (r0 <= arg4) {
        t2 = *(s32 *)(((u8 *)&data_020c46d4));
        func_020939c8(t2, arg1, arg2, 0, 0);
    } else {
        if (arg4 >= (r0 / 2)) {
            t3 = *(s32 *)(((u8 *)&data_020c46d4));
            func_020939c8(t3, arg1, arg2, 1, 0);
        } else {
            t4 = *(s32 *)(((u8 *)&data_020c46d4));
            v3 = func_02093524(t4, arg1, arg2, 0x100, 0xC0);
            return v3;
        }
    }
    t5 = *(s32 *)(((u8 *)&data_020c46d4));
    v4 = func_02093524(t5, arg1, arg2, 0xC8, ((s16)((arg3 * 0x18) + 0x28)));
    return v4;
}

extern "C" asm void func_ov033_02166914(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    add r0, r0, #0x3000
    mov r10, r1
    mov r9, r2
    mov r8, r3
    ldr r5, [sp, #0x34]
    ldrsh r11, [sp, #0x30]
    mov r6, #0xa
    str r0, [sp, #4]
    ldr r4, =data_020c46d4
    b @L_021669e0
@L_02166944:
    mov r0, r5
    mov r1, r6
    bl _s32_div_f
    mov r7, r0
    mul r0, r6, r7
    cmp r7, #0
    sub r5, r5, r0
    bgt @L_0216696c
    cmp r6, #1
    bne @L_021669bc
@L_0216696c:
    ldr r0, [sp, #4]
    mov r1, r10
    ldr r2, [r0, #0xb88]
    ldr r0, [r4]
    and r3, r2, #0xff
    mov r2, r9
    bl func_02093188
    mov r0, #0
    str r0, [sp]
    ldr r0, [r4]
    mov r3, r7
    mov r1, r10
    mov r2, r9
    bl func_020939c8
    str r11, [sp]
    ldr r0, [r4]
    mov r1, r10
    mov r2, r9
    mov r3, r8
    bl func_02093524
@L_021669bc:
    ldr r0, =0x66666667
    mov r2, r6
    smull r1, r6, r0, r2
    add r0, r8, #8
    mov r0, r0, lsl #0x10
    mov r1, r2, lsr #0x1f
    mov r8, r0, asr #0x10
    add r9, r9, #1
    add r6, r1, r6, asr #2
@L_021669e0:
    cmp r6, #0
    bgt @L_02166944
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov033_021669f8(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4)
{
    s32 v0;
    s32 t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    if (*(s32 *)(arg2) >= 0x20)
        return 0;
    if ((u32)arg3 >= (u32)1)
        return 0;
    t0 = *(s32 *)(data_020c46d4);
    v0 = func_020920c4(t0, arg4, 1, arg3);
    if (*(u8 *)(((u8 *)(arg1 + (arg3 << 1))) + 0xA1) == 0)
        *(u8 *)(((u8 *)(arg1 + (arg3 << 1))) + 0xA0) = *(s32 *)(arg2);
    t1 = (u8 *)(arg1 + (*(s32 *)(arg2) << 2));
    *(s32 *)(t1 + 0x20) = v0;
    t2 = (*(u8 *)(((u8 *)(arg1 + 0xA1)) + (arg3 << 1)) + 1);
    *(u8 *)(((u8 *)(arg1 + 0xA1)) + (arg3 << 1)) = t2;
    t3 = (*(s32 *)(arg2) + 1);
    *(s32 *)(arg2) = t3;
    return v0;
}

extern "C" void func_ov033_02166a7c(u8 *arg0)
{
    *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB54) = 6;
    _ZN17UnkClass_0203dc7c13func_0203df24Ev(*(s32 *)(arg0 + 0x4), (arg0 + 0x3000), 6);
}

extern "C" asm s32 func_ov033_02166a98(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r4, r1
    mov r5, r0
    bne @L_02166ab8
    ldr r0, =data_020c46c4
    mov r1, #0x64
    ldr r0, [r0]
    bl func_ov015_02162420
@L_02166ab8:
    add r0, r5, #0x3000
    mov r1, #4
    str r4, [r0, #0xb58]
    str r1, [r0, #0xb54]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov033_02166ad0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    cmp r4, #0
    ldmleia sp!, {r4, pc}
    ldr r0, =data_020c46c4
    mov r1, r4, lsl #0x10
    ldr r0, [r0]
    mov r1, r1, lsr #0x10
    bl func_ov015_02161dd4
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov033_02166afc(s32 arg0, s32 arg1)
{
    u8 *r4;
    s32 v0;
    s32 t0;
    u8 *t1;
    if (arg1 <= 0)
        return arg0;
    t0 = *(s32 *)(data_020c46c4);
    v0 = func_ov015_02161dd4(t0, ((u32)(arg1 << 0x10) >> 0x10));
    arg0 = v0;
    r4 = (u8 *)data_020c46c4;
    if (arg1 == 1) {
        t1 = (u8 *)(*(s32 *)(r4) + 0xF00);
        *(u16 *)(t1 + 0x38) = 2;
        arg0 = (s32)t1;
    }
    return arg0;
}

extern "C" void func_ov033_02166b3c(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    *(s32 *)(arg0) = (s32)data_ov033_02167120;
    *(s32 *)(arg0 + 0x4) = arg1;
    r2 = 0;
    r3 = 0;
    do {
        *(s32 *)(((u8 *)((arg0 + (r3 << 2)) + 0x3000)) + 0xB68) = r2;
        r3 = (r3 + 1);
    } while ((u32)r3 < (u32)10);
    return;
}

extern "C" void func_ov033_02166b70(u8 *arg0, s32 arg1)
{
    s32 r4;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    u8 *t2;
    u16 t3;
    s32 t4;
    t0 = *(s32 *)(((u8 *)&data_020c46b8));
    v0 = func_ov015_02161760(t0, arg1, (s32)((u8 *)&data_020c46b8));
    if (v0 != 0)
        return;
    t1 = *(s32 *)(((u8 *)&data_020c46c4));
    v1 = func_ov015_021629ac(t1);
    r4 = arg1;
    if (v1 != 0) {
        if (*(u16 *)(*(u8 * *)(((u8 *)&data_020c46c4)) + 0xF38) == 0)
            return;
        t2 = (u8 *)(*(u8 * *)(((u8 *)&data_020c46c4)) + 0xF00);
        t3 = *(u16 *)(*(u8 * *)(((u8 *)&data_020c46c4)) + 0xF38);
        *(u16 *)(t2 + 0x38) = 0;
        r4 = t3;
    }
    if (*(s32 *)(arg0 + 0x3B54) != 5)
        return;
    if (*(s32 *)(arg0 + 0x3B58) != 0)
        return;
    if ((r4 & 2) == 0)
        return;
    _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&data_020c5e40), 4);
    t4 = *(s32 *)(((u8 *)&data_020c46c4));
    func_ov015_021624f0(t4, 1);
    func_ov033_02166a7c(arg0);
    return;
}

extern "C" asm void func_ov033_02166c14(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =data_020c46b8
    mov r7, r0
    ldr r0, [r2]
    mov r6, r1
    mov r5, #0
    bl func_ov015_02161760
    cmp r0, #0
    addeq r0, r7, #0x3000
    ldreq r0, [r0, #0xb54]
    cmpeq r0, #5
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =data_020c46c4
    mov r1, r6
    ldr r0, [r4]
    mov r2, r5
    bl func_ov015_02162750
    cmp r0, #1
    beq @L_02166c6c
    cmp r0, #2
    beq @L_02166c84
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166c6c:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    bl func_ov033_02166ad0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166c84:
    ldr r0, [r4]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r7
    bl func_ov033_02166afc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov033_02166ca4(s32 arg0)
{
    s32 v6;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t4;
    t0 = ((u32)(*(s32 *)(((u8 *)0x4000000)) & 0x1F00) >> 8);
    *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xC50) = t0;
    t1 = *(s32 *)(((u8 *)&data_020c46c4));
    func_ov015_02161f84(t1, (s32)((u8 *)&data_020c46c4), t0);
    t2 = *(s32 *)(((u8 *)&data_020c46b8));
    func_ov015_021616a4(t2);
    ((VCall *)arg0)->f17();
    *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB54) = 0;
    MI_CpuFill8(((arg0 + 0x35C) + 0x3800), 0, 0xC);
    MI_CpuFill8(((arg0 + 0x368) + 0x3800), 0, 0x28);
    MI_CpuFill8(((arg0 + 0x3A8) + 0x3800), 0, 0xA8);
    t4 = *(s32 *)(((u8 *)&data_020c46d4));
    v6 = func_02091d54(t4);
    return v6;
}

extern "C" s32 func_ov033_02166d50(u8 *arg0)
{
    s32 v0;
    s32 v2;
    s32 v4;
    s32 v7;
    s32 v11;
    s32 v12;
    s32 v14;
    s32 v16;
    s32 t0;
    s32 t1;
    s32 t3;
    s32 t7;
    s32 t8;
    s32 t9;
    switch (*(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB54)) {
        case 0:
            v0 = func_ov015_02134118((s32)((arg0 + 0x35C) + 0x3800), 1);
            if (v0 == 0)
                break;
            func_ov033_02165d60((s32)arg0);
            *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB54) = 1;
        case 1:
            v2 = func_ov015_02134118((s32)((arg0 + 0x35C) + 0x3800), 1);
            if (v2 == 0)
                break;
            func_ov033_02165e14((s32)arg0);
            *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB54) = 2;
        case 2:
            v4 = func_ov033_02165fec((s32)arg0);
            if (v4 == 0)
                break;
            func_ov033_02166040((s32)arg0);
            *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB54) = 3;
        case 3:
            func_ov033_02166a98((s32)arg0, 0);
        case 4:
            t0 = *(s32 *)(((u8 *)&data_020c46b8));
            v7 = func_ov015_02161760(t0);
            if (v7 != 0)
                break;
            t1 = *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB58);
            func_ov033_021660ac((s32)arg0, t1);
            func_ov033_02166144((s32)arg0);
            ((VCall *)arg0)->f19();
            *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB54) = 5;
            break;
        case 6:
            t3 = *(s32 *)(((u8 *)&data_020c46b8));
            v11 = func_ov015_02161760(t3);
            if (v11 != 0)
                break;
            v12 = ((VCall *)arg0)->f22();
            if (v12 == 0)
                break;
            ((VCall *)arg0)->f20();
            *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0xB54) = 7;
        case 7:
            v14 = ((VCall *)arg0)->f22();
            if (v14 != 0)
                break;
            t7 = *(s32 *)(arg0 + 0x4);
            _ZN17UnkClass_0203dc7c13func_0203e0ccEi(t7, 0);
            break;
    }
    t8 = *(s32 *)(((u8 *)&data_020c46b8));
    t9 = *(s32 *)(((u8 *)&data_020c484c));
    v16 = func_ov015_02161710(t8, t9);
    return v16;
}

extern "C" void func_ov033_02166eec(void)
{
}

extern "C" s32 func_ov033_02166ef0(u8 *arg0)
{
    s32 v3;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    t0 = ((*(s32 *)(((u8 *)0x4000000)) & -0x1F01) | (*(s32 *)(arg0 + 0x3C50) << 8));
    t1 = *(s32 *)(arg0 + 0x3C50);
    *(s32 *)(((u8 *)0x4000000)) = t0;
    t2 = *(s32 *)(((u8 *)&data_020c46c4));
    func_ov015_02161fdc(t2, t0, 0x4000000, t1);
    t3 = *(s32 *)(((u8 *)&data_020c46b8));
    func_ov015_021616dc(t3);
    func_ov033_02165f64((s32)arg0);
    t4 = *(s32 *)(((u8 *)&data_020c46d4));
    v3 = func_02091d64(t4);
    return v3;
}

extern "C" void func_ov033_02166f50(void)
{
}

extern "C" s32 func_ov033_02166f54(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}
