#include "game/Unk_0209a3b0.hpp"

extern "C" char gAllocator[];

extern "C" void func_0209a3b0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3);
extern "C" void func_0209a420(u8 *arg0);
extern "C" void func_0209a450(u8 *obj);
extern "C" void func_0209a45c(s32 arg0);
extern "C" void func_0209a4d8(void);
extern "C" void func_0209a638(void);
extern "C" void func_0209a798(void);
extern "C" void func_0209a97c(void);
extern "C" void func_0209a9f0(void);
extern "C" s32 func_0209aa5c(u8 *arg0);
extern "C" s32 func_0209aac0(u8 *arg0);
extern "C" void func_0209ab34(void);
extern "C" void func_0209ab38(void);
extern "C" void func_0209ac24(u8 *obj, s32 value);
extern "C" void func_0209ac30(u8 *obj, s32 a, s32 b);
extern "C" void func_0209ac40(void);
extern "C" s32 func_0209ac44(u8 *obj);
extern "C" s32 func_0209ac50(u8 *obj);
extern "C" void func_0209ac5c(u8 *obj, s32 value);
extern "C" s32 func_0209ac68(u8 *obj);
extern "C" void func_0209ac74(u8 *obj, s32 value);
extern "C" s32 func_0209ac80(u8 *obj);
extern "C" void func_0209ac8c(void);
extern "C" void func_0209ae70(void);
extern "C" u8 *func_0209b034(u8 *obj);
extern "C" void func_0209b040(s32 arg0);
extern "C" void func_0209b06c(u8 *arg0, s32 arg1, s32 arg2);
extern "C" u8 *func_0209b0a4(u8 *obj);
extern "C" u8 *func_0209b0b0(u8 *obj, s32 *value);
extern "C" void func_0209b0c8(u8 *obj, s32 value);
extern "C" s32 func_0209b0d4(u8 *obj);
extern "C" void func_0209b0e0(u8 *obj, s32 value);
extern "C" void func_0209b0ec(void);
extern "C" s32 func_0209b16c(s32 arg0);
extern "C" void func_0209b194(u8 *arg0, s32 arg1);
extern "C" s32 func_0209b1cc(u8 *obj);
extern "C" void func_0209b1d4(u8 *obj, s32 value);
extern "C" s32 func_0209b1dc(u8 *obj);
extern "C" void func_0209b1e4(u8 *obj, u8 value);
extern "C" s32 func_0209b1ec(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_0209b230(u8 *arg0, s32 arg1);
extern "C" void func_0209b288(u8 *obj, s32 a, s32 b);
extern "C" s32 func_0209b298(s32 arg0, u8 *arg1, u8 *arg2);
extern "C" void func_0209b2bc(void);
extern "C" s32 func_0209b3bc(s32 arg0, s32 arg1);
extern "C" u8 *func_0209b3f8(u8 *obj);
extern "C" void func_0209b404(void);
extern "C" u32 func_0209b428(u8 *obj, int bit);
extern "C" void func_0209b438(u8 *obj, u16 a, u16 b);
extern "C" s32 func_0209b448(u8 *arg0, u8 *arg1, u8 *arg2);
extern "C" void func_0209b4a0(u8 *obj, BOOL on);
extern "C" s32 func_0209b4bc(u8 *arg0);
extern "C" void func_0209b4e4(u8 *obj, BOOL on);
extern "C" s32 func_0209b500(u8 *arg0);
extern "C" s32 func_0209b528(u8 *obj);
extern "C" void func_0209b534(u8 *obj, s32 value);
extern "C" void func_0209b540(u8 *obj, u8 value);
extern "C" u8 func_0209b548(u8 *obj);
extern "C" void func_0209b550(void);
extern "C" u8 *func_0209b5fc(u8 *obj);
extern "C" void func_0209b608(void);

extern "C" char data_020afe30[];
extern "C" char data_020afe44[];
extern "C" char data_020afe48[];
extern "C" char data_020afe4c[];
extern "C" char data_020afe6c[];
extern "C" char gConfig[];
extern "C" char gAudioPlayer[];
extern "C" char data_020e88a0[];
extern "C" char data_020fc724[];
extern "C" char data_020fc724_b[];
extern "C" s32 DC_FlushRange(...);
extern "C" void GX_BeginLoadTex(void);
extern "C" void GX_BeginLoadTexPltt(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" s32 STD_CopyString(...);
extern "C" void _ZN10ConfigFile6GetIntEPKc(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN12SoundManager13func_0203a4d4EiPKci(void);
extern "C" void _ZN11MatchEngine13func_0206cfc8Ei(void);
extern "C" s32 _ZN8GameHeap5AllocEiii(...);
extern "C" void GX_LoadTex(void);
extern "C" void GX_EndLoadTex(void);
extern "C" void GX_LoadTexPltt(void);
extern "C" void GX_EndLoadTexPltt(void);
extern "C" void Random_RandB(void);

extern "C" void func_0209a3b0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3)
{
    s32 x = arg0 >> 3;
    s32 n = 0;
    while (x > 1) {
        x >>= 1;
        n++;
    }
    if (arg0 & ~(8 << n))
        n++;
    *arg2 = n;
    x = arg1 >> 3;
    n = 0;
    while (x > 1) {
        x >>= 1;
        n++;
    }
    if (arg1 & ~(8 << n))
        n++;
    *arg3 = n;
}

extern "C" void func_0209a420(u8 *arg0)
{
    s32 v0 = _ZN8GameHeap5AllocEiii((s32)gAllocator, 0x8000, 0, 1);
    *(s32 *)(arg0 + 0x1C) = v0;
    *(s32 *)(arg0 + 0x20) = 0;
}

extern "C" void func_0209a450(u8 *obj)
{
    *(s32 *)(obj + 0x20) = 0;
}

extern "C" void func_0209a45c(s32 arg0)
{
    s32 z = 0;
    s32 s;
    s32 *p = (s32 *)data_020fc724;
    s32 r;
    ((s32 (*)(...))MIi_CpuClearFast)(z, p, 0x24);
    *(s32 *)((u8 *)data_020fc724_b + 4) = arg0;
    if (arg0 <= 0)
        return;
    s = arg0 * 0x1C;
    r = ((s32 (*)(...))_ZN8GameHeap5AllocEiii)(gAllocator, s, z, 1);
    *p = r;
    if (r != 0)
        ((s32 (*)(...))MIi_CpuClearFast)(z, r, s);
    ((s32 (*)(...))func_0209a420)(p);
}

extern "C" asm void func_0209a4d8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r4, =data_020fc724
    mov r8, #0
    ldr r4, [r4]
    ldr r12, =data_020fc724_b
    cmp r4, #0
    moveq r0, r8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r1, #0
    cmpne r2, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r5, [r12, #8]
    ldrh r4, [r12, #0xa]
    ldr lr, [r12, #4]
    add r6, r2, #3
    add r2, r5, r4
    cmp r2, lr
    bic r2, r6, #3
    movge r0, r8
    ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r3, r3, #3
    bics r3, r3, #3
    beq @L_0209a558
    cmp r3, r2
    bhs @L_0209a558
    ldr r4, [r12, #0x1c]
    cmp r1, r4
    blo @L_0209a55c
    sub r4, r1, r4
    cmp r4, #0x8000
    bhs @L_0209a55c
@L_0209a558:
    mov r3, r2
@L_0209a55c:
    ldr r5, [r12, #0xc]
    cmp r5, #0
    beq @L_0209a598
@L_0209a568:
    ldr r4, [r5, #4]
    cmp r4, r1
    ldreq r4, [r5]
    cmpeq r4, r0
    ldreq r4, [r5, #8]
    cmpeq r4, r2
    streq r8, [r5, #0x14]
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r5, [r5, #0xc]
    cmp r5, #0
    bne @L_0209a568
@L_0209a598:
    mov r4, #0
    mov r9, r4
    cmp lr, #0
    ble @L_0209a5d0
    ldr r10, [r12]
    mov r5, #0x1c
@L_0209a5b0:
    mla r7, r9, r5, r10
    ldr r6, [r7, #4]
    cmp r6, #0
    moveq r4, r7
    beq @L_0209a5d0
    add r9, r9, #1
    cmp r9, lr
    blt @L_0209a5b0
@L_0209a5d0:
    cmp r4, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    stmia r4, {r0, r1, r2}
    str r8, [r4, #0xc]
    str r3, [r4, #0x10]
    ldr r1, [sp, #0x20]
    str r8, [r4, #0x14]
    cmp r1, #0
    str r1, [r4, #0x18]
    movne r0, #1
    strneb r0, [r1]
    ldr r0, [r12, #0xc]
    cmp r0, #0
    ldr r0, [r12, #0x10]
    streq r4, [r12, #0xc]
    cmp r0, #0
    strne r4, [r0, #0xc]
    ldrh r1, [r12, #8]
    str r4, [r12, #0x10]
    mov r0, #1
    add r1, r1, #1
    strh r1, [r12, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0209a638(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r4, =data_020fc724
    mov r8, #0
    ldr r4, [r4]
    ldr r12, =data_020fc724_b
    cmp r4, #0
    moveq r0, r8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r1, #0
    cmpne r2, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r5, [r12, #8]
    ldrh r4, [r12, #0xa]
    ldr lr, [r12, #4]
    add r6, r2, #3
    add r2, r5, r4
    cmp r2, lr
    bic r2, r6, #3
    movge r0, r8
    ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r3, r3, #3
    bics r3, r3, #3
    beq @L_0209a6b8
    cmp r3, r2
    bhs @L_0209a6b8
    ldr r4, [r12, #0x1c]
    cmp r1, r4
    blo @L_0209a6bc
    sub r4, r1, r4
    cmp r4, #0x8000
    bhs @L_0209a6bc
@L_0209a6b8:
    mov r3, r2
@L_0209a6bc:
    ldr r5, [r12, #0x14]
    cmp r5, #0
    beq @L_0209a6f8
@L_0209a6c8:
    ldr r4, [r5, #4]
    cmp r4, r1
    ldreq r4, [r5]
    cmpeq r4, r0
    ldreq r4, [r5, #8]
    cmpeq r4, r2
    streq r8, [r5, #0x14]
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r5, [r5, #0xc]
    cmp r5, #0
    bne @L_0209a6c8
@L_0209a6f8:
    mov r4, #0
    mov r9, r4
    cmp lr, #0
    ble @L_0209a730
    ldr r10, [r12]
    mov r5, #0x1c
@L_0209a710:
    mla r7, r9, r5, r10
    ldr r6, [r7, #4]
    cmp r6, #0
    moveq r4, r7
    beq @L_0209a730
    add r9, r9, #1
    cmp r9, lr
    blt @L_0209a710
@L_0209a730:
    cmp r4, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    stmia r4, {r0, r1, r2}
    str r8, [r4, #0xc]
    str r3, [r4, #0x10]
    ldr r1, [sp, #0x20]
    str r8, [r4, #0x14]
    cmp r1, #0
    str r1, [r4, #0x18]
    movne r0, #1
    strneb r0, [r1]
    ldr r0, [r12, #0x14]
    cmp r0, #0
    ldr r0, [r12, #0x18]
    streq r4, [r12, #0x14]
    cmp r0, #0
    strne r4, [r0, #0xc]
    ldrh r1, [r12, #0xa]
    str r4, [r12, #0x18]
    mov r0, #1
    add r1, r1, #1
    strh r1, [r12, #0xa]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0209a798(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r0, =data_020fc724
    mov r4, #0
    ldr r0, [r0]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_020fc724_b
    mov r5, r4
    ldr r8, [r0, #0xc]
    str r5, [sp, #4]
    mov r6, r5
    str r5, [sp]
    mov r7, r5
    mov r11, r5
    cmp r8, #0
    beq @L_0209a888
    bl GX_BeginLoadTex
    cmp r8, #0
    beq @L_0209a884
@L_0209a7ec:
    ldr r1, [r8, #0x14]
    ldr r10, [r8, #0x10]
    ldr r2, [r8, #8]
    add r0, r1, r10
    cmp r0, r2
    subhi r10, r2, r1
    ldmia r8, {r3, r12}
    add r0, r12, r1
    add r1, r3, r1
    mov r2, r10
    ldr r9, [r8, #0xc]
    bl GX_LoadTex
    ldr r0, [r8, #0x14]
    add r1, r0, r10
    str r1, [r8, #0x14]
    ldr r0, [r8, #8]
    cmp r1, r0
    blo @L_0209a850
    ldr r0, [r8, #0x18]
    cmp r0, #0
    strneb r4, [r0]
    str r4, [r8, #4]
    str r4, [r8, #8]
    str r4, [r8]
    b @L_0209a878
@L_0209a850:
    ldr r0, [sp, #4]
    cmp r0, #0
    add r0, r11, #1
    streq r8, [sp, #4]
    cmp r5, #0
    strne r8, [r5, #0xc]
    mov r0, r0, lsl #0x10
    mov r5, r8
    str r4, [r8, #0xc]
    mov r11, r0, lsr #0x10
@L_0209a878:
    mov r8, r9
    cmp r9, #0
    bne @L_0209a7ec
@L_0209a884:
    bl GX_EndLoadTex
@L_0209a888:
    ldr r0, =data_020fc724_b
    ldr r8, [r0, #0x14]
    cmp r8, #0
    beq @L_0209a940
    bl GX_BeginLoadTexPltt
    cmp r8, #0
    beq @L_0209a93c
@L_0209a8a4:
    ldr r1, [r8, #0x14]
    ldr r10, [r8, #0x10]
    ldr r2, [r8, #8]
    add r0, r1, r10
    cmp r0, r2
    subhi r10, r2, r1
    ldmia r8, {r3, r12}
    add r0, r12, r1
    add r1, r3, r1
    mov r2, r10
    ldr r9, [r8, #0xc]
    bl GX_LoadTexPltt
    ldr r0, [r8, #0x14]
    add r1, r0, r10
    str r1, [r8, #0x14]
    ldr r0, [r8, #8]
    cmp r1, r0
    blo @L_0209a908
    ldr r0, [r8, #0x18]
    cmp r0, #0
    strneb r4, [r0]
    str r4, [r8, #4]
    str r4, [r8, #8]
    str r4, [r8]
    b @L_0209a930
@L_0209a908:
    ldr r0, [sp]
    cmp r0, #0
    add r0, r7, #1
    streq r8, [sp]
    cmp r6, #0
    strne r8, [r6, #0xc]
    mov r0, r0, lsl #0x10
    mov r6, r8
    str r4, [r8, #0xc]
    mov r7, r0, lsr #0x10
@L_0209a930:
    mov r8, r9
    cmp r9, #0
    bne @L_0209a8a4
@L_0209a93c:
    bl GX_EndLoadTexPltt
@L_0209a940:
    ldr r0, =data_020fc724_b
    ldr r2, [sp, #4]
    mov r1, r0
    str r2, [r1, #0xc]
    ldr r2, [sp]
    str r5, [r1, #0x10]
    str r2, [r1, #0x14]
    str r6, [r1, #0x18]
    strh r11, [r1, #8]
    strh r7, [r1, #0xa]
    bl func_0209a450
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0209a97c(void)
{
    ldr r0, =data_020fc724
    ldr r3, =data_020fc724_b
    ldr r0, [r0]
    cmp r0, #0
    mov r0, #0
    bxeq lr
    ldr r12, [r3, #0xc]
    cmp r12, #0
    beq @L_0209a9bc
@L_0209a9a0:
    ldr r2, [r12, #8]
    ldr r1, [r12, #0x14]
    ldr r12, [r12, #0xc]
    sub r1, r2, r1
    cmp r12, #0
    add r0, r0, r1
    bne @L_0209a9a0
@L_0209a9bc:
    ldr r3, [r3, #0x14]
    cmp r3, #0
    bxeq lr
@L_0209a9c8:
    ldr r2, [r3, #8]
    ldr r1, [r3, #0x14]
    ldr r3, [r3, #0xc]
    sub r1, r2, r1
    cmp r3, #0
    add r0, r0, r1
    bne @L_0209a9c8
    bx lr
}

extern "C" void func_0209a9f0(void)
{
    u8 *p0 = (u8 *)&data_020fc724_b;
    if (*(s32 *)(((u8 *)&data_020fc724)) == 0)
        return;
    s32 t0 = *(s32 *)(p0);
    s32 t1 = (*(s32 *)(p0 + 0x4) * 0x1C);
    *(s32 *)(p0 + 0xC) = 0;
    *(s32 *)(p0 + 0x10) = 0;
    *(s32 *)(p0 + 0x14) = 0;
    *(s32 *)(p0 + 0x18) = 0;
    *(u16 *)(p0 + 0x8) = 0;
    *(u16 *)(p0 + 0xA) = 0;
    MIi_CpuClearFast(0, t0, t1);
    s32 t2 = *(s32 *)(p0);
    DC_FlushRange(t2, t1);
    func_0209a450((u8 *)p0);
}

extern "C" s32 func_0209aa5c(u8 *arg0)
{
    u8 *r12;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    r12 = (u8 *)((u8 *)&data_020fc724_b);
    if (*(s32 *)(((u8 *)&data_020fc724) + 0x1C) == 0) {
        return 0;
    } else {
        t1 = ((*(s32 *)(arg0) + 0x1F) & -0x20);
        *(s32 *)(arg0) = t1;
        if (t1 > (0x8000 - *(s32 *)(r12 + 0x20)))
            return 0;
        t2 = (*(s32 *)(r12 + 0x1C) + *(s32 *)(r12 + 0x20));
        t3 = (*(s32 *)(r12 + 0x20) + t1);
        t4 = *(s32 *)(r12 + 0x1C);
        t5 = *(s32 *)(r12 + 0x20);
        *(s32 *)(r12 + 0x20) = t3;
        MIi_CpuClearFast(0, t2, t1, t3);
        return (t4 + t5);
    }
}

extern "C" s32 func_0209aac0(u8 *arg0)
{
    *(s32 *)(arg0 + 0x5B50) = 0;
    *(s32 *)(arg0 + 0x5B54) = 0;
    *(u8 *)(arg0 + 0x588) = 0;
    *(u8 *)(arg0 + 0x5A8) = 0;
    *(s32 *)(arg0 + 0x5B74) = 0;
    *(s32 *)(arg0 + 0x5B78) = (0 - 1);
    *(s32 *)(arg0 + 0x5B34) = 0;
    *(s32 *)(arg0 + 0x5B38) = 0;
    MI_CpuFill8((s32)((arg0 + 0x64) + 0x400), 0, 0x124);
    MI_CpuFill8((s32)arg0, 0, (0x124 + 0x340));
    *(u8 *)(arg0 + 0x52B) = 1;
    *(s32 *)(arg0 + 0x5C1C) = 0;
    return (s32)arg0;
}

extern "C" void func_0209ab34(void)
{
}

extern "C" asm void func_0209ab38(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    add r3, r6, #0x5000
    ldr r2, =0x93c
    mov r1, r5
    str r5, [r3, #0xb50]
    str r5, [r3, #0xb54]
    bl MI_CpuFill8
    add r2, r6, #0x5000
    mov r4, #1
    sub r12, r4, #2
    mov r3, #0x64
    mov r0, r6
    mov r1, #0x17
    strb r5, [r6, #0x588]
    strb r5, [r6, #0x5a8]
    strb r4, [r6, #0x623]
    str r5, [r2, #0xb74]
    str r12, [r2, #0xb78]
    str r5, [r2, #0xb34]
    str r5, [r2, #0xb38]
    str r5, [r2, #0xb3c]
    str r5, [r6, #0x614]
    strb r5, [r6, #0x619]
    str r5, [r6, #0x61c]
    str r12, [r2, #0xbfc]
    str r12, [r2, #0xc00]
    strb r5, [r2, #0xc55]
    strb r3, [r2, #0xc54]
    str r12, [r6, #0x644]
    bl func_0209ac74
    mov r2, #0xe000
    ldr r0, =gConfig
    ldr r1, =data_020afe30
    str r2, [r6, #0x5cc]
    bl _ZN10ConfigFile6GetIntEPKc
    str r0, [r6, #0x5d0]
    strb r4, [r6, #0x52b]
    add r0, r6, #0x5000
    strb r5, [r0, #0xc05]
    ldr r6, =gAudioPlayer
    mov r1, r5
    mov r0, r6
    ldr r2, =data_020afe44
    mov r3, r5
    bl _ZN12SoundManager13func_0203a4d4EiPKci
    mov r0, r6
    mov r1, r4
    mov r3, r5
    ldr r2, =data_020afe48
    bl _ZN12SoundManager13func_0203a4d4EiPKci
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_0209ac24(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x5B38) = value;
}

extern "C" void func_0209ac30(u8 *obj, s32 a, s32 b)
{
    *(s32 *)(obj + 0x5B50) = a;
    *(s32 *)(obj + 0x5B54) = b;
}

extern "C" void func_0209ac40(void)
{
}

extern "C" s32 func_0209ac44(u8 *obj)
{
    return *(s32 *)(obj + 0x5B50);
}

extern "C" s32 func_0209ac50(u8 *obj)
{
    return *(s32 *)(obj + 0x5B54);
}

extern "C" void func_0209ac5c(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x5B34) = value;
}

extern "C" s32 func_0209ac68(u8 *obj)
{
    return *(s32 *)(obj + 0x5B34);
}

extern "C" void func_0209ac74(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x5B30) = value;
}

extern "C" s32 func_0209ac80(u8 *obj)
{
    return *(s32 *)(obj + 0x5B30);
}

extern "C" asm void func_0209ac8c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    mov lr, r1
    mov r3, #0
    mov r0, #0x38
@L_0209aca0:
    mla r1, r3, r0, r4
    add r1, r1, #0x4000
    ldr r2, [r1, #0xcbc]
    add r1, r4, r3
    add r3, r3, #1
    strb r2, [r1, #0x5d4]
    cmp r3, #0x40
    blt @L_0209aca0
    mov r7, r4
    mov r6, lr
    mov r5, #0x46
@L_0209accc:
    ldmia r7!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    subs r5, r5, #1
    bne @L_0209accc
    ldr r2, [r7]
    add r0, r4, #0x64
    add r1, lr, #0x64
    str r2, [r6]
    add r7, r0, #0x400
    add r6, r1, #0x400
    mov r5, #0x12
@L_0209acf8:
    ldmia r7!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    subs r5, r5, #1
    bne @L_0209acf8
    ldr r2, [r7]
    add r0, r4, #0x188
    add r1, lr, #0x188
    str r2, [r6]
    add r5, r0, #0x400
    add r3, r1, #0x400
    mov r2, #0x10
@L_0209ad24:
    ldrb r1, [r5]
    ldrb r0, [r5, #1]
    add r5, r5, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0209ad24
    add r0, r4, #0x1a8
    add r1, lr, #0x1a8
    add r5, r0, #0x400
    add r3, r1, #0x400
    mov r2, #0x10
@L_0209ad54:
    ldrb r1, [r5]
    ldrb r0, [r5, #1]
    add r5, r5, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0209ad54
    ldr r1, [r4, #0x5c8]
    add r0, r4, #0x1d4
    str r1, [lr, #0x5c8]
    ldr r2, [r4, #0x5cc]
    add r1, lr, #0x1d4
    str r2, [lr, #0x5cc]
    ldr r2, [r4, #0x5d0]
    add r5, r0, #0x400
    str r2, [lr, #0x5d0]
    add r3, r1, #0x400
    mov r2, #0x20
@L_0209ad9c:
    ldrb r1, [r5]
    ldrb r0, [r5, #1]
    add r5, r5, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0209ad9c
    ldr r0, [r4, #0x614]
    add r1, r4, #0x224
    str r0, [lr, #0x614]
    ldrb r0, [r4, #0x618]
    add r2, lr, #0x224
    add r3, r4, #0x248
    strb r0, [lr, #0x618]
    ldrb r6, [r4, #0x619]
    add r0, r4, #0x600
    add r12, r1, #0x400
    strb r6, [lr, #0x619]
    ldr r6, [r4, #0x61c]
    add r8, r2, #0x400
    str r6, [lr, #0x61c]
    ldrsb r1, [r0, #0x20]
    add r5, lr, #0x248
    add r6, r5, #0x400
    strb r1, [lr, #0x620]
    ldrb r1, [r4, #0x621]
    add r7, r3, #0x400
    mov r5, #0xbc
    strb r1, [lr, #0x621]
    ldrb r1, [r4, #0x622]
    strb r1, [lr, #0x622]
    ldrsb r0, [r0, #0x23]
    strb r0, [lr, #0x623]
    ldmia r12!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    ldmia r12, {r0, r1, r2, r3}
    stmia r8, {r0, r1, r2, r3}
    ldr r0, [r4, #0x644]
    str r0, [lr, #0x644]
@L_0209ae38:
    ldrh r1, [r7]
    ldrh r0, [r7, #2]
    add r7, r7, #4
    subs r5, r5, #1
    strh r0, [r6, #2]
    strh r1, [r6], #4
    bne @L_0209ae38
    add r0, r4, #0x900
    ldrsh r2, [r0, #0x38]
    add r1, lr, #0x900
    strh r2, [r1, #0x38]
    ldrsh r0, [r0, #0x3a]
    strh r0, [r1, #0x3a]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0209ae70(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r1
    ldrb r1, [r4, #0x622]
    mov r5, r0
    bl func_0209b550
    mov r8, r4
    mov r7, r5
    mov r6, #0x46
@L_0209ae90:
    ldmia r8!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    subs r6, r6, #1
    bne @L_0209ae90
    ldr r2, [r8]
    add r0, r4, #0x64
    add r1, r5, #0x64
    str r2, [r7]
    add r8, r0, #0x400
    add r7, r1, #0x400
    mov r6, #0x12
@L_0209aebc:
    ldmia r8!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    subs r6, r6, #1
    bne @L_0209aebc
    ldr r2, [r8]
    add r0, r4, #0x188
    add r1, r5, #0x188
    str r2, [r7]
    add r6, r0, #0x400
    add r3, r1, #0x400
    mov r2, #0x10
@L_0209aee8:
    ldrb r1, [r6]
    ldrb r0, [r6, #1]
    add r6, r6, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0209aee8
    add r0, r4, #0x1a8
    add r1, r5, #0x1a8
    add r6, r0, #0x400
    add r3, r1, #0x400
    mov r2, #0x10
@L_0209af18:
    ldrb r1, [r6]
    ldrb r0, [r6, #1]
    add r6, r6, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0209af18
    ldr r1, [r4, #0x5c8]
    add r0, r4, #0x1d4
    str r1, [r5, #0x5c8]
    ldr r2, [r4, #0x5cc]
    add r1, r5, #0x1d4
    str r2, [r5, #0x5cc]
    ldr r2, [r4, #0x5d0]
    add r6, r0, #0x400
    str r2, [r5, #0x5d0]
    add r3, r1, #0x400
    mov r2, #0x20
@L_0209af60:
    ldrb r1, [r6]
    ldrb r0, [r6, #1]
    add r6, r6, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0209af60
    ldr r0, [r4, #0x614]
    add r1, r4, #0x224
    str r0, [r5, #0x614]
    ldrb r0, [r4, #0x618]
    add r2, r5, #0x224
    add r3, r4, #0x248
    strb r0, [r5, #0x618]
    ldrb r6, [r4, #0x619]
    add r0, r4, #0x600
    add r12, r1, #0x400
    strb r6, [r5, #0x619]
    ldr r6, [r4, #0x61c]
    add r8, r2, #0x400
    str r6, [r5, #0x61c]
    ldrsb r1, [r0, #0x20]
    add lr, r5, #0x248
    add r6, lr, #0x400
    strb r1, [r5, #0x620]
    ldrb r1, [r4, #0x621]
    add r7, r3, #0x400
    mov lr, #0xbc
    strb r1, [r5, #0x621]
    ldrb r1, [r4, #0x622]
    strb r1, [r5, #0x622]
    ldrsb r0, [r0, #0x23]
    strb r0, [r5, #0x623]
    ldmia r12!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    ldmia r12, {r0, r1, r2, r3}
    stmia r8, {r0, r1, r2, r3}
    ldr r0, [r4, #0x644]
    str r0, [r5, #0x644]
@L_0209affc:
    ldrh r1, [r7]
    ldrh r0, [r7, #2]
    add r7, r7, #4
    subs lr, lr, #1
    strh r0, [r6, #2]
    strh r1, [r6], #4
    bne @L_0209affc
    add r0, r4, #0x900
    ldrsh r2, [r0, #0x38]
    add r1, r5, #0x900
    strh r2, [r1, #0x38]
    ldrsh r0, [r0, #0x3a]
    strh r0, [r1, #0x3a]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" u8 *func_0209b034(u8 *obj)
{
    return obj + 0x93C;
}

extern "C" void func_0209b040(s32 arg0)
{
    s32 r1;
    s32 r12;
    r1 = 0x38;
    r12 = 0;
    do {
        *(s32 *)(((u8 *)(((r12 * r1) + arg0) + 0x4000)) + 0xCBC) = *(u8 *)(((u8 *)(arg0 + r12)) + 0x5D4);
        r12 = (r12 + 1);
    } while (r12 < 0x40);
    return;
}

extern "C" void func_0209b06c(u8 *arg0, s32 arg1, s32 arg2)
{
    *(s32 *)(arg0 + 0x5C8) = arg2;
    STD_CopyString(((arg0 + 0x1A8) + 0x400), ((arg0 + 0x188) + 0x400), arg2, (arg0 + 0x188));
    STD_CopyString(((arg0 + 0x188) + 0x400), arg1);
}

extern "C" u8 *func_0209b0a4(u8 *obj)
{
    return obj + 0x588;
}

extern "C" u8 *func_0209b0b0(u8 *obj, s32 *value)
{
    if (value != NULL) {
        *value = *(s32 *)(obj + 0x5C8);
    }
    return obj + 0x5A8;
}

extern "C" void func_0209b0c8(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x5B78) = value;
}

extern "C" s32 func_0209b0d4(u8 *obj)
{
    return *(s32 *)(obj + 0x5B78);
}

extern "C" void func_0209b0e0(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x5B74) = value;
}

extern "C" asm void func_0209b0ec(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r0
    add r0, r6, #0x9e
    add r12, r6, #0x5000
    mvn r7, #0
    add r0, r0, #0x5b00
    mov r5, r2
    mov r4, r3
    strb r7, [r12, #0xbbe]
    bl STD_CopyString
    ldr r0, =0x477d1a9
    add r1, r6, #0x5000
    umull r8, r7, r4, r0
    mov lr, r4, asr #0x1f
    mov r12, #0
    ldr r4, [sp, #0x18]
    ldr r3, [sp, #0x1c]
    ldr r2, [sp, #0x20]
    mla r7, lr, r0, r7
    adds r0, r8, #0x80000000
    adc r7, r7, #0
    strb r12, [r1, #0xb9d]
    add r0, r6, #0x5b00
    ldrsb r0, [r0, #0x9d]
    strb r5, [r1, #0xbbf]
    str r7, [r1, #0xbf0]
    strb r0, [r1, #0xb9c]
    str r4, [r1, #0xbc0]
    str r3, [r1, #0xbc4]
    str r2, [r1, #0xbc8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_0209b16c(s32 arg0)
{
    if (*(s8 *)(((u8 *)(arg0 + 0x5B00)) + 0xBE) == 0) {
        arg0 = 0;
    } else {
        *(u8 *)(((u8 *)(arg0 + 0x5000)) + 0xBBE) = 0;
        arg0 = ((arg0 + 0x37C) + 0x5800);
    }
    return arg0;
}

extern "C" void func_0209b194(u8 *arg0, s32 arg1)
{
    *(u32 *)(arg0 + 0x5CC) = (u16)((arg1 * 0xB60B60B60BLL + 0x80000000000LL) >> 44);
}

extern "C" s32 func_0209b1cc(u8 *obj)
{
    return *(s32 *)(obj + 0x5CC);
}

extern "C" void func_0209b1d4(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x5D0) = value;
}

extern "C" s32 func_0209b1dc(u8 *obj)
{
    return *(s32 *)(obj + 0x5D0);
}

extern "C" void func_0209b1e4(u8 *obj, u8 value)
{
    obj[0x623] = value;
}

extern "C" s32 func_0209b1ec(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r12;
    s32 lr;
    lr = 0;
    do {
        r12 = (u8 *)(arg0 + (lr << 3));
        if ((arg1 == *(s32 *)(r12 + 0x624) || *(s32 *)(r12 + 0x628) == 0)) {
            *(s32 *)(((u8 *)(arg0 + (lr << 3))) + 0x624) = arg1;
            *(s32 *)(((u8 *)(arg0 + (lr << 3))) + 0x628) = arg2;
            return 1;
        } else {
            lr = (lr + 1);
        }
    } while (lr < 4);
    return 0;
}

extern "C" s32 func_0209b230(u8 *arg0, s32 arg1)
{
    s32 r2;
    u8 *r3;
    s32 r12;
    if (*(s8 *)(arg0 + 0x623) == 0) {
        return 0;
    } else {
        r12 = 0;
        do {
            r3 = (u8 *)(arg0 + (r12 << 3));
            r2 = *(s32 *)(((u8 *)(arg0 + (r12 << 3))) + 0x628);
            if (r2 != 0) {
                *(s32 *)(r3 + 0x628) = (r2 - arg1);
                if ((r2 - arg1) <= 0) {
                    *(s32 *)(r3 + 0x628) = 0;
                    return *(s32 *)(r3 + 0x624);
                }
            }
            r12 = (r12 + 1);
        } while (r12 < 4);
        return 0;
    }
}

extern "C" void func_0209b288(u8 *obj, s32 a, s32 b)
{
    *(s32 *)(obj + 0x5BF4) = a;
    *(s32 *)(obj + 0x5BF8) = b;
}

extern "C" s32 func_0209b298(s32 arg0, u8 *arg1, u8 *arg2)
{
    s32 t0;
    s32 t1;
    if ((s32)arg1 != 0) {
        t0 = *(s32 *)(((u8 *)(arg0 + 0x5000)) + 0xBF4);
        *(s32 *)(arg1) = t0;
    }
    if ((s32)arg2 != 0) {
        t1 = *(s32 *)(((u8 *)(arg0 + 0x5000)) + 0xBF8);
        *(s32 *)(arg2) = t1;
        arg0 = t1;
    }
    return arg0;
}

extern "C" asm void func_0209b2bc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, #0
    mov r12, r5
    mov r3, r5
@L_0209b2cc:
    add lr, r0, r3, lsl #2
    ldrb r4, [lr, #0x648]
    cmp r4, #0
    beq @L_0209b31c
    cmp r1, r4
    bne @L_0209b2f4
    add lr, lr, #0x600
    ldrh r4, [lr, #0x4a]
    cmp r2, r4
    ldmeqia sp!, {r3, r4, r5, pc}
@L_0209b2f4:
    add r4, r0, r3, lsl #2
    ldrb r4, [r4, #0x649]
    tst r4, #0x20
    beq @L_0209b310
    cmp r5, #0
    moveq r12, r3
    add r5, r5, #1
@L_0209b310:
    add r3, r3, #1
    cmp r3, #0xbc
    blt @L_0209b2cc
@L_0209b31c:
    cmp r1, #6
    bgt @L_0209b370
    cmp r5, #0x14
    blt @L_0209b370
    cmp r12, #0xbb
    bge @L_0209b36c
@L_0209b334:
    add r4, r0, r12, lsl #2
    ldrb lr, [r4, #0x64c]
    add r3, r4, #0x600
    strb lr, [r4, #0x648]
    ldrb lr, [r4, #0x64d]
    strb lr, [r4, #0x649]
    ldrh lr, [r3, #0x4e]
    strh lr, [r3, #0x4a]
    ldrb r3, [r4, #0x648]
    cmp r3, #0
    beq @L_0209b36c
    add r12, r12, #1
    cmp r12, #0xbb
    blt @L_0209b334
@L_0209b36c:
    mov r3, r12
@L_0209b370:
    add lr, r0, r3, lsl #2
    strb r1, [lr, #0x648]
    mov r12, #1
    strb r12, [lr, #0x649]
    add r12, lr, #0x600
    strh r2, [r12, #0x4a]
    cmp r1, #0xa
    addlt r2, r0, #0x49
    addlt r12, r2, #0x600
    ldrltb r2, [r12, r3, lsl #2]
    orrlt r2, r2, #0x10
    strltb r2, [r12, r3, lsl #2]
    cmp r1, #6
    addle r0, r0, #0x49
    addle r1, r0, #0x600
    ldrleb r0, [r1, r3, lsl #2]
    orrle r0, r0, #0x20
    strleb r0, [r1, r3, lsl #2]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_0209b3bc(s32 arg0, s32 arg1)
{
    s32 r3;
    s32 t0;
    r3 = 0;
    do {
        if (arg1 == *(u8 *)(((u8 *)(arg0 + (r3 << 2))) + 0x648)) {
            t0 = (*(u8 *)(((u8 *)((arg0 + 0x49) + 0x600)) + (r3 << 2)) | 2);
            *(u8 *)(((u8 *)((arg0 + 0x49) + 0x600)) + (r3 << 2)) = t0;
            return t0;
        } else {
            r3 = (r3 + 1);
        }
    } while (r3 < 0xBC);
    return arg0;
}

extern "C" u8 *func_0209b3f8(u8 *obj)
{
    return obj + 0x648;
}

extern "C" asm void func_0209b404(void)
{
    cmp r1, #0
    ldrne r1, [r0, #0x644]
    mov r3, #1
    orrne r1, r1, r3, lsl r2
    mvneq r1, r3, lsl r2
    ldreq r2, [r0, #0x644]
    andeq r1, r2, r1
    str r1, [r0, #0x644]
    bx lr
}

extern "C" u32 func_0209b428(u8 *obj, int bit)
{
    return *(u32 *)(obj + 0x644) & (1 << bit);
}

extern "C" void func_0209b438(u8 *obj, u16 a, u16 b)
{
    *(u16 *)(obj + 0x938) = a;
    *(u16 *)(obj + 0x93A) = b;
}

extern "C" s32 func_0209b448(u8 *arg0, u8 *arg1, u8 *arg2)
{
    s32 r0;
    s32 r3;
    if (*(s16 *)(arg0 + 0x938) <= 0) {
        *(u16 *)(arg0 + 0x938) = 0xE0;
    }
    r3 = *(s16 *)(arg0 + 0x938);
    if (r3 > 0xE0) {
        r3 = 0xE0;
    } else {
        if (r3 < 1) {
            r3 = 1;
        }
    }
    *(u16 *)(arg1) = r3;
    r0 = *(s16 *)(arg0 + 0x93A);
    if (r0 > 0xA0) {
        r0 = 0xA0;
    } else {
        if (r0 < 1) {
            r0 = 1;
        }
    }
    *(u16 *)(arg2) = r0;
    return r0;
}

extern "C" void func_0209b4a0(u8 *obj, BOOL on)
{
    if (on) {
        *(s8 *)(obj + 0x620) |= 1;
    } else {
        *(s8 *)(obj + 0x620) &= ~1;
    }
}

extern "C" s32 func_0209b4bc(u8 *arg0)
{
    if (*(u8 *)(arg0 + 0x621) == 0) {
        return 0;
    } else {
        if ((*(s8 *)(((u8 *)(arg0 + 0x600)) + 0x20) & 1) != 0) {
            arg0 = (u8 *)1;
        } else {
            arg0 = (u8 *)0;
        }
        return (s32)arg0;
    }
}

extern "C" void func_0209b4e4(u8 *obj, BOOL on)
{
    if (on) {
        *(s8 *)(obj + 0x620) |= 2;
    } else {
        *(s8 *)(obj + 0x620) &= ~2;
    }
}

extern "C" s32 func_0209b500(u8 *arg0)
{
    if (*(u8 *)(arg0 + 0x621) == 0) {
        return 0;
    } else {
        if ((*(s8 *)(((u8 *)(arg0 + 0x600)) + 0x20) & 2) != 0) {
            arg0 = (u8 *)1;
        } else {
            arg0 = (u8 *)0;
        }
        return (s32)arg0;
    }
}

extern "C" s32 func_0209b528(u8 *obj)
{
    return *(s32 *)(obj + 0x5C1C);
}

extern "C" void func_0209b534(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x5C1C) = value;
}

extern "C" void func_0209b540(u8 *obj, u8 value)
{
    obj[0x621] = value;
}

extern "C" u8 func_0209b548(u8 *obj)
{
    return obj[0x621];
}

extern "C" asm void func_0209b550(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    mov r5, r0
    ldrb r0, [r5, #0x622]
    mov r4, r1
    ldr r1, =data_020afe4c
    cmp r0, r4
    beq @L_0209b5c8
    ldr r3, =gAllocator
    add r2, r5, #0xc30
    ldr r0, [r3]
    add r2, r2, #0x5000
    cmp r0, #0
    str r2, [sp, #0x14]
    moveq r0, #0
    beq @L_0209b5c0
    sub r12, r4, #1
    mov r2, #0x24
    mul lr, r12, r2
    str lr, [sp]
    str r2, [sp, #4]
    mov r2, #0
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x14
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_0209b5c0:
    cmp r0, #0
    moveq r4, #0
@L_0209b5c8:
    ldrb r0, [r5, #0x621]
    mov r1, #1
    strb r4, [r5, #0x622]
    cmp r0, #0
    addeq r0, r5, #0x5c00
    ldreqh r0, [r0, #0x30]
    streqb r0, [r5, #0x621]
    add r0, r5, #0x5000
    str r1, [r0, #0xc1c]
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" u8 *func_0209b5fc(u8 *obj)
{
    return obj + 0x5C30;
}

extern "C" asm void func_0209b608(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x5c
    add r2, r0, #0xc30
    cmp r1, #0
    ldrneb r0, [r0, #0x622]
    add r6, r2, #0x5000
    mov r5, #0
    ldr r7, =data_020afe6c
    cmpne r0, r1
    beq @L_0209b680
    ldr r3, =gAllocator
    add r2, sp, #0x38
    ldr r0, [r3]
    str r2, [sp, #0x14]
    cmp r0, #0
    moveq r0, r5
    beq @L_0209b678
    sub r2, r1, #1
    mov r1, #0x24
    mul r4, r2, r1
    str r4, [sp]
    stmib sp, {r1, r5}
    mov r4, #1
    str r4, [sp, #0xc]
    add r2, sp, #0x14
    mov r1, r7
    str r4, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_0209b678:
    cmp r0, #0
    addne r6, sp, #0x38
@L_0209b680:
    mov r1, #0
    add r0, sp, #0x18
@L_0209b688:
    str r1, [r0, r1, lsl #2]
    add r1, r1, #1
    cmp r1, #8
    blt @L_0209b688
    mov r7, #0
    add r4, sp, #0x18
@L_0209b6a0:
    mov r0, r5
    mov r2, r7
    cmp r7, #8
    bge @L_0209b6cc
@L_0209b6b0:
    ldr r1, [r4, r2, lsl #2]
    add r2, r2, #1
    add r1, r6, r1, lsl #2
    ldrh r1, [r1, #6]
    cmp r2, #8
    add r0, r0, r1
    blt @L_0209b6b0
@L_0209b6cc:
    cmp r0, #0
    beq @L_0209b724
    bl Random_RandB
    mov r2, r7
    cmp r7, #7
    bge @L_0209b708
@L_0209b6e4:
    ldr r1, [r4, r2, lsl #2]
    add r1, r6, r1, lsl #2
    ldrh r1, [r1, #6]
    sub r0, r0, r1
    cmp r0, #0
    ble @L_0209b708
    add r2, r2, #1
    cmp r2, #7
    blt @L_0209b6e4
@L_0209b708:
    ldr r1, [r4, r7, lsl #2]
    ldr r0, [r4, r2, lsl #2]
    str r0, [r4, r7, lsl #2]
    add r7, r7, #1
    str r1, [r4, r2, lsl #2]
    cmp r7, #7
    blt @L_0209b6a0
@L_0209b724:
    ldr r9, =data_020e88a0
    mov r7, #0
    add r4, sp, #0x18
@L_0209b730:
    ldr r0, [r4, r7, lsl #2]
    add r0, r6, r0, lsl #2
    ldrh r8, [r0, #4]
    cmp r8, #0
    beq @L_0209b75c
    mov r0, r9
    mov r1, r8
    bl _ZN11MatchEngine13func_0206cfc8Ei
    cmp r0, #0
    bne @L_0209b768
    mov r8, r5
@L_0209b75c:
    add r7, r7, #1
    cmp r7, #7
    blt @L_0209b730
@L_0209b768:
    cmp r8, #0
    bne @L_0209b798
    mov r2, #0
    add r1, sp, #0x18
@L_0209b778:
    ldr r0, [r1, r2, lsl #2]
    add r0, r6, r0, lsl #2
    ldrh r8, [r0, #4]
    cmp r8, #0
    bne @L_0209b798
    add r2, r2, #1
    cmp r2, #7
    blt @L_0209b778
@L_0209b798:
    mov r0, r8
    add sp, sp, #0x5c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}
