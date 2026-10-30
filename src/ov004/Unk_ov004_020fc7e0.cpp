#include "ov004/Unk_ov004_020fc7e0.hpp"

extern "C" void func_ov004_020fc7e0(void);
extern "C" void func_ov004_020fc8e4(void);
extern "C" void func_ov004_020fc934(void);
extern "C" s32 func_ov004_020fca84(s32 arg0, s32 arg1);
extern "C" s32 func_ov004_020fcac8(s32 arg0, s32 arg1);
extern "C" s32 func_ov004_020fcb1c(s32 arg0);
extern "C" void func_ov004_020fcb30(void);
extern "C" void func_ov004_020fcb34(void);
extern "C" void func_ov004_020fcb64(u8 *arg0, u8 *arg1);
extern "C" s32 func_ov004_020fcbbc(u8 *arg0);
extern "C" void func_ov004_020fcbfc(void);
extern "C" void func_ov004_020fcc4c(void);
extern "C" s32 func_ov004_020fcc58(u8 *arg0);
extern "C" s32 func_ov004_020fcc7c(s32 arg0);
extern "C" void func_ov004_020fcc90(void);
extern "C" void func_ov004_020fcc9c(u8 *arg0, u8 *arg1);
extern "C" s32 func_ov004_020fccf0(u8 *arg0);
extern "C" s32 func_ov004_020fcd24(...);
extern "C" s32 func_ov004_020fcd6c(...);
extern "C" void func_ov004_020fcdcc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov004_020fcdfc(u8 *arg0);
extern "C" void func_ov004_020fce1c(void);
extern "C" void func_ov004_020fcf8c(void);
extern "C" s32 func_ov004_020fcfd0(void);
extern "C" void func_ov004_020fcfd8(s32 arg0);
extern "C" s32 func_ov004_020fcffc(s32 arg0);
extern "C" s32 func_ov004_020fd010(void);
extern "C" void func_ov004_020fd018(s32 arg0);
extern "C" void func_ov004_020fd034(void);
extern "C" void func_ov004_020fd078(void);
extern "C" s32 func_ov004_020fd088(...);
extern "C" void func_ov004_020fd0e4(s32 arg0);
extern "C" void func_ov004_020fd0fc(void);
extern "C" void func_ov004_020fd100(void);
extern "C" void func_ov004_020fd104(void);
extern "C" s32 func_ov004_020fd110(s32 arg0);
extern "C" void func_ov004_020fd124(void);
extern "C" void func_ov004_020fd128(void);

extern "C" char data_020c47b4[];
extern "C" char data_020c484c[];
extern "C" char data_020c4f60[];
extern "C" char data_020c5e40[];
extern "C" char data_020c9660[];
extern "C" char data_ov004_020fd39c[];
extern "C" char data_ov004_020fd430[];
extern "C" char data_ov004_020fd454[];
extern "C" char data_ov004_020fd510[];
extern "C" void GXS_BeginLoadBGExtPltt(void);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void OS_Sleep(void);
extern "C" s32 _ZN11MoviePlayer4StopEv(...);
extern "C" void _ZN12SceneManager13func_0203e2fcEl(void);
extern "C" void _ZN12SoundManager13AreBanksReadyEv(void);
extern "C" void _ZN12SoundManager6IsIdleEv(void);
extern "C" void _ZN12SoundManager8SetSceneEiii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e04cEii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e114Eii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e18cEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1bcEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1f4Ev(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e224Ev(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003598(void);
extern "C" void func_020037c8(void);
extern "C" void func_02003918(void);
extern "C" void func_02003b48(void);
extern "C" void func_02003c98(void);
extern "C" void func_02003d24(void);
extern "C" void func_02003d98(void);
extern "C" void func_02003df0(void);
extern "C" void func_02003e58(void);
extern "C" s32 func_02004d1c(...);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021324c4(void);
extern "C" s32 func_ov015_021338dc(...);
extern "C" void func_ov015_0213393c(void);
extern "C" void func_ov015_0213396c(void);
extern "C" void func_ov015_0213397c(void);
extern "C" s32 func_ov015_02133efc(...);
extern "C" s32 func_ov015_02134ccc(...);
extern "C" s32 func_ov015_021353a4(...);
extern "C" s32 func_ov015_02135440(...);
extern "C" s32 func_ov015_02135e10(...);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" void func_ov015_0213c33c(void);

extern "C" asm void func_ov004_020fc7e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, [r0]
    mov r1, #2
    ldr r2, [r2, #0xc]
    mov r4, r0
    blx r2
    mov r7, #0
    mov r0, r4
    mov r1, r7
    mov r2, r7
    str r7, [r4, #0x80]
    str r7, [r4, #0x84]
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    mov r6, #1
    mov r0, r4
    mov r1, r6
    mov r2, r7
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    mov r0, r4
    mov r1, r7
    mov r5, #0xa
    mov r2, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    mov r2, r5
    mov r0, r4
    mov r1, r6
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    strb r6, [r4, #0x88]
    strb r7, [r4, #0x89]
    bl func_ov015_021324c4
    ldr r6, =data_020c5e40
    mov r1, #4
    mov r0, r6
    mov r2, r7
    mov r3, r7
    bl _ZN12SoundManager8SetSceneEiii
    mov r0, r6
    bl _ZN12SoundManager6IsIdleEv
    cmp r0, #0
    bne @L_020fc89c
    mov r5, #0x14
@L_020fc884:
    mov r0, r5
    bl OS_Sleep
    mov r0, r6
    bl _ZN12SoundManager6IsIdleEv
    cmp r0, #0
    beq @L_020fc884
@L_020fc89c:
    ldr r6, =data_020c5e40
    mov r0, r6
    bl _ZN12SoundManager13AreBanksReadyEv
    cmp r0, #0
    bne @L_020fc8cc
    mov r5, #0x14
@L_020fc8b4:
    mov r0, r5
    bl OS_Sleep
    mov r0, r6
    bl _ZN12SoundManager13AreBanksReadyEv
    cmp r0, #0
    beq @L_020fc8b4
@L_020fc8cc:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x34]
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov004_020fc8e4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x80]
    cmp r0, #0
    beq @L_020fc904
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc904:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_020fc91c
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc91c:
    mov r0, r4
    ldr r2, [r0]
    mov r1, #2
    ldr r2, [r2, #0x28]
    blx r2
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov004_020fc934(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl _ZN17UnkClass_0203dc7c13func_0203e1bcEv
    mov r4, r0
    mov r0, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r4, r0
    bne @L_020fc960
    ldrb r0, [r5, #5]
    cmp r0, #0
    beq @L_020fc9e8
@L_020fc960:
    ldr r0, [r5, #0x80]
    cmp r0, #0
    beq @L_020fc980
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_020fc9e8
@L_020fc980:
    ldr r0, [r5, #0x80]
    cmp r0, #0
    beq @L_020fc998
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fc998:
    cmp r4, #1
    beq @L_020fc9b8
    cmp r4, #0xa
    addeq r0, r5, #0x8c
    streq r0, [r5, #0x80]
    movne r0, #0
    strne r0, [r5, #0x80]
    b @L_020fc9c0
@L_020fc9b8:
    add r0, r5, #0xc8
    str r0, [r5, #0x80]
@L_020fc9c0:
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    ldr r0, [r5, #0x80]
    cmp r0, #0
    beq @L_020fc9e8
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
@L_020fc9e8:
    mov r0, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e224Ev
    mov r4, r0
    mov r0, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    cmp r4, r0
    bne @L_020fca10
    ldrb r0, [r5, #5]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_020fca10:
    ldr r0, [r5, #0x84]
    cmp r0, #0
    beq @L_020fca30
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
@L_020fca30:
    ldr r0, [r5, #0x84]
    cmp r0, #0
    beq @L_020fca48
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_020fca48:
    cmp r4, #0xa
    addeq r0, r5, #0x110
    movne r0, #0
    str r0, [r5, #0x84]
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e114Eii
    ldr r0, [r5, #0x84]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r0]
    ldr r1, [r1, #0x10]
    blx r1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov004_020fca84(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 v1;
    s32 t0;
    t0 = (*(u16 *)(((u8 *)0x4000304)) | 0x8000);
    *(u16 *)(((u8 *)0x4000304)) = t0;
    r4 = arg1;
    if ((r4 == 0 || r4 == 2)) {
        func_ov015_02134ccc(5);
    }
    if ((u32)(r4 - 1) > (u32)1)
        return (r4 - 1);
    v1 = func_ov015_02135440(5);
    return v1;
}

extern "C" s32 func_ov004_020fcac8(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 t0;
    r4 = arg1;
    if ((r4 == 0 || r4 == 2)) {
        func_ov015_021353a4();
    }
    if ((u32)(r4 - 1) <= (u32)1) {
        func_ov015_02135e10();
    }
    if (r4 == 2) {
        MIi_CpuClearFast(0, 0x6800000, 0xA4000);
    }
    t0 = (*(u16 *)(((u8 *)0x4000304)) & -0x8001);
    *(u16 *)(((u8 *)0x4000304)) = t0;
    return t0;
}

extern "C" s32 func_ov004_020fcb1c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov004_020fcb30(void)
{
}

extern "C" asm void func_ov004_020fcb34(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0, #0x10]
    cmp r2, #0x1e
    ldrgeb r0, [r0, #0xc]
    cmpge r0, #0
    ldmneia sp!, {r3, pc}
    tst r1, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4f60
    bl _ZN11MoviePlayer4StopEv
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov004_020fcb64(u8 *arg0, u8 *arg1)
{
    u8 *r4;
    if (*(s32 *)(arg0 + 0x10) < 0x1E)
        return;
    r4 = arg0;
    if (*(u16 *)(arg1 + 0x4) == 1) {
        if (*(u16 *)(arg1 + 0x6) == 0)
            *(u8 *)(r4 + 0xC) = 1;
        return;
    } else {
        if (*(u8 *)(r4 + 0xC) != 0) {
            _ZN11MoviePlayer4StopEv((s32)data_020c4f60);
        }
        *(u8 *)(r4 + 0xC) = 0;
        return;
    }
}

extern "C" s32 func_ov004_020fcbbc(u8 *arg0)
{
    s32 v1;
    u8 *t0;
    s32 t1;
    t0 = (u8 *)*(s32 *)(arg0 + 0x4);
    *(s32 *)(arg0 + 0x8) = 1;
    *(u8 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
    t1 = *(s32 *)(*(u8 * *)(t0) + 0x28);
    ((s32 (*)(...))*(s32 *)(*(u8 * *)(t0) + 0x28))((s32)t0, 0, t1);
    v1 = func_ov015_021338dc((arg0 + 0x14), (s32)data_ov004_020fd39c);
    return v1;
}

extern "C" asm void func_ov004_020fcbfc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x10]
    ldr r0, [r4, #8]
    add r1, r1, #1
    str r1, [r4, #0x10]
    cmp r0, #1
    beq @L_020fcc24
    cmp r0, #2
    ldmneia sp!, {r4, pc}
@L_020fcc24:
    bl func_ov015_0213396c
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    add r0, r4, #0x14
    bl func_ov015_0213393c
    mov r1, #0
    mov r0, #1
    str r1, [r4, #8]
    bl _ZN12SceneManager13func_0203e2fcEl
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov004_020fcc4c(void)
{
    func_ov015_0213397c();
}

extern "C" s32 func_ov004_020fcc58(u8 *arg0)
{
    s32 v1;
    u8 *t0;
    s32 t1;
    func_02004d1c((s32)arg0);
    t0 = *(u8 * *)(arg0 + 0x4);
    t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC);
    v1 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC))(t0, 0, t1);
    return v1;
}

extern "C" s32 func_ov004_020fcc7c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" asm void func_ov004_020fcc90(void)
{
    ldr r1, [r0, #8]
    cmp r1, #4
    bx lr
}

extern "C" void func_ov004_020fcc9c(u8 *arg0, u8 *arg1)
{
    u16 t0;
    u16 t1;
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    if (*(u16 *)(arg1 + 0x4) == 1) {
        if (*(u16 *)(arg1 + 0x6) != 0)
            return;
        if (*(u8 *)(arg0 + 0x14) == 0)
            *(u8 *)(arg0 + 0x14) = 1;
        t0 = *(u16 *)(arg1);
        *(s32 *)(arg0 + 0x18) = t0;
        t1 = *(u16 *)(arg1 + 0x2);
        *(s32 *)(arg0 + 0x1C) = t1;
        return;
    } else {
        *(u8 *)(arg0 + 0x14) = 0;
        return;
    }
}

extern "C" s32 func_ov004_020fccf0(u8 *arg0)
{
    func_ov015_02133efc((s32)data_ov004_020fd430, (arg0 + 0x24));
    func_ov015_02133efc((s32)data_ov004_020fd454, (arg0 + 0x30));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" asm s32 func_ov004_020fcd24(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, #0
    ldr r6, =data_020c47b4
    mov r9, r0
    mov r5, r7
    mov r4, #0xc
@L_020fcd3c:
    mla r8, r7, r4, r9
    ldr r1, [r8, #0x24]
    cmp r1, #0
    beq @L_020fcd58
    mov r0, r6
    bl _ZN8GameHeap4FreeEPv
    str r5, [r8, #0x24]
@L_020fcd58:
    add r7, r7, #1
    cmp r7, #2
    blt @L_020fcd3c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov004_020fcd6c(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0xc
    mla r0, r1, r2, r0
    ldr r5, [r0, #0x24]
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0xc]
    mov r4, #0
    ldr r2, [r5, #0x10]
    mov r1, r4
    add r0, r5, r0
    bl func_02003598
    ldr r0, [r5, #0x14]
    ldr r2, [r5, #0x18]
    mov r1, r4
    add r0, r5, r0
    bl func_02003918
    bl func_02003c98
    ldmib r5, {r0, r2}
    mov r1, r4
    add r0, r5, r0
    bl func_02003d24
    bl func_02003d98
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov004_020fcdcc(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg1 = *(s32 *)(arg0 + 0xC);
    if (arg1 != 0) {
        if (arg1 != 1)
            return;
        func_ov004_020fcd6c((s32)arg0, 0);
        return;
    }
    func_ov004_020fcd6c((s32)arg0, 1);
    return;
}

extern "C" void func_ov004_020fcdfc(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0xC) = 0;
    *(u8 *)(arg0 + 0x14) = 0;
    *(u8 *)(arg0 + 0x20) = 0;
    func_ov004_020fccf0(arg0);
}

extern "C" asm void func_ov004_020fce1c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #6
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    dcd 0xe8bd8070
    dcd 0xea000004
    dcd 0xe8bd8070
    dcd 0xea000005
    dcd 0xea000017
    dcd 0xea00002d
    dcd 0xea00003d
    dcd 0xe3a00002
    dcd 0xe5840008
    dcd 0xe8bd8070
    dcd 0xe594100c
    dcd 0xe3510001
    dcd 0x1a000005
    dcd 0xe59f0110
    dcd 0xe59f1110
    dcd 0xebfcf931
    dcd 0xe3a00006
    dcd 0xeb00d5bf
    dcd 0xea000002
    dcd 0xe5901000
    dcd 0xe591104c
    dcd 0xe12fff31
    dcd 0xe3a02004
    dcd 0xe3a01000
    dcd 0xe3a00050
    dcd 0xe5842008
    dcd 0xe5c41020
    dcd 0xe5840010
    dcd 0xe8bd8070
    dcd 0xeb00d639
    dcd 0xe3500000
    dcd 0x059f00d0
    dcd 0x05941010
    dcd 0x05900000
    dcd 0x00410000
    dcd 0x05840010
    dcd 0xe5940010
    dcd 0xe3500000
    dcd 0xa8bd8070
    dcd 0xe594000c
    dcd 0xe3500001
    dcd 0x1a000004
    dcd 0xe3a00006
    dcd 0xeb00d5d0
    dcd 0xe3a0001e
    dcd 0xe5840010
    dcd 0xea000001
    dcd 0xe3a00008
    dcd 0xeb00d5ef
    dcd 0xe3a00005
    dcd 0xe5840008
    dcd 0xe8bd8070
    dcd 0xeb00d622
    dcd 0xe3500000
    dcd 0x18bd8070
    dcd 0xe594000c
    dcd 0xe3500001
    dcd 0x1a000005
    dcd 0xe5940010
    dcd 0xe2500001
    dcd 0xe5840010
    dcd 0x43a00006
    dcd 0x45840008
    dcd 0xe8bd8070
    dcd 0xe3a01001
    dcd 0xe3a00002
    dcd 0xe584100c
    dcd 0xe5840008
    dcd 0xe8bd8070
    dcd 0xe5940004
    dcd 0xe3a05000
    dcd 0xe5c05088
    dcd 0xe5946004
    dcd 0xe3a04001
    dcd 0xe1a00006
    dcd 0xe1a01005
    dcd 0xe1a02004
    dcd 0xebfd0437
    dcd 0xe1a00006
    dcd 0xe1a01004
    dcd 0xe1a02005
    dcd 0xebfd0433
    dcd 0xe8bd8070
    dcd data_020c5e40
    dcd 0x000083de
    dcd data_020c484c
}

extern "C" asm void func_ov004_020fcf8c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #2
    beq @L_020fcfac
    cmp r1, #4
    beq @L_020fcfbc
    ldmia sp!, {r4, pc}
@L_020fcfac:
    bl func_ov004_020fcdcc
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_020fcfbc:
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov004_020fcfd0(void)
{
    return 0;
}

extern "C" void func_ov004_020fcfd8(s32 arg0)
{
    func_ov015_0213b3fc((s32)data_020c9660, 0);
    func_ov004_020fcd24(arg0);
}

extern "C" s32 func_ov004_020fcffc(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" s32 func_ov004_020fd010(void)
{
    return 1;
}

extern "C" void func_ov004_020fd018(s32 arg0)
{
    func_ov015_02133efc((s32)data_ov004_020fd510, (arg0 + 8));
}

extern "C" asm void func_ov004_020fd034(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0xc
    mul r4, r1, r2
    mov r5, r0
    add r0, r5, r4
    ldr r1, [r0, #8]
    cmp r1, #0
    ldrneb r0, [r0, #0x11]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    add r0, r5, r4
    mov r1, #0
    str r1, [r0, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov004_020fd078(void)
{
    ldr r12, =func_ov004_020fd034
    mov r1, #0
    bx r12
}

extern "C" asm s32 func_ov004_020fd088(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, [r0, #8]
    cmp r5, #0
    beq @L_020fd0dc
    ldr r0, [r5, #0xc]
    mov r4, #0
    ldr r2, [r5, #0x10]
    mov r1, r4
    add r0, r5, r0
    bl func_020037c8
    ldr r0, [r5, #0x14]
    ldr r2, [r5, #0x18]
    mov r1, r4
    add r0, r5, r0
    bl func_02003b48
    bl GXS_BeginLoadBGExtPltt
    ldmib r5, {r0, r2}
    add r0, r5, r0
    mov r1, #0x4000
    bl func_02003df0
    bl func_02003e58
@L_020fd0dc:
    bl func_ov015_02132240
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov004_020fd0e4(s32 arg0)
{
    func_ov004_020fd018(arg0);
    func_ov004_020fd088(arg0);
}

extern "C" void func_ov004_020fd0fc(void)
{
}

extern "C" void func_ov004_020fd100(void)
{
}

extern "C" void func_ov004_020fd104(void)
{
    func_ov004_020fd078();
}

extern "C" s32 func_ov004_020fd110(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov004_020fd124(void)
{
}

extern "C" void func_ov004_020fd128(void)
{
}
