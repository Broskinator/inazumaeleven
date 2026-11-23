#include "ov029/Unk_ov029_0216c1f8.hpp"

extern "C" void func_ov029_0216c1f8(s32 arg0);
extern "C" s32 func_ov029_0216c23c(...);
extern "C" s32 func_ov029_0216c30c(...);
extern "C" s32 func_ov029_0216c3b0(...);
extern "C" s32 func_ov029_0216c4a8(...);
extern "C" s32 func_ov029_0216c534(...);
extern "C" void func_ov029_0216c640(void);
extern "C" s32 func_ov029_0216c7ac(s32 arg0);
extern "C" void func_ov029_0216c7d8(void);
extern "C" void func_ov029_0216c918(s32 arg0);
extern "C" void func_ov029_0216c958(void);
extern "C" s32 func_ov029_0216c9f0(s32 arg0, s32 arg1);
extern "C" void func_ov029_0216ca64(void);
extern "C" void func_ov029_0216cb18(s32 arg0);
extern "C" void func_ov029_0216cb8c(void);
extern "C" s32 func_ov029_0216cc54(u8 *arg0, s32 arg1);
extern "C" void func_ov029_0216ccd8(void);
extern "C" void func_ov029_0216ce14(void);
extern "C" s32 func_ov029_0216cf78(s32 arg0);
extern "C" void func_ov029_0216cf8c(void);

extern "C" char g2DGChar[];
extern "C" char g2DAdventureLogic[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gAudioPlayer[];
extern "C" char data_020e88a0[];
extern "C" char data_ov029_0216d084[];
extern "C" char data_ov029_0216d18c[];
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN11MatchEngine13func_0206dfa4Eii(void);
extern "C" void _ZN11MatchEngine13func_02076848Ev(void);
extern "C" void _ZN11MatchEngine13func_0207a5c0EiPv(void);
extern "C" void _ZN11MatchEngine13func_0207b28cEv(void);
extern "C" void _ZN11MatchEngine13func_0207b780Ev(void);
extern "C" void _ZN11MatchEngine13func_0207bdf8Eii(void);
extern "C" void _ZN11MatchEngine13func_0207bee8Eiii(void);
extern "C" void _ZN11MatchEngine13func_0207d244Eii(void);
extern "C" s32 _ZN11MatchEngine13func_02082f3cEii(...);
extern "C" void _ZN9EntryPool4SwapEii(void);
extern "C" s32 _ZdlPv(...);
extern "C" void _s32_div_f(void);
extern "C" void func_02081398(void);
extern "C" void func_02084e08(void);
extern "C" void func_02085228(void);
extern "C" void func_020859c0(void);
extern "C" void func_02085b4c(void);
extern "C" void func_02085ba4(void);
extern "C" void func_02085bfc(void);
extern "C" void func_02085d88(void);
extern "C" void func_02085e30(void);
extern "C" void func_02085ec0(void);
extern "C" void func_02086164(void);
extern "C" void func_0208620c(void);
extern "C" void func_020864f4(void);
extern "C" void func_020864fc(void);
extern "C" void func_02087464(void);
extern "C" void func_02087500(void);
extern "C" void func_020877e0(void);
extern "C" void func_020878ac(void);
extern "C" void func_020879e4(void);
extern "C" void C3DPlaneCtrl_Create(void);
extern "C" void func_0209342c(void);
extern "C" void C3DPlaneCtrl_SetPos(void);
extern "C" void C3DPlaneCtrl_SetFlag(void);
extern "C" s32 C3DPlaneCtrl_ClearFlag(...);
extern "C" void func_ov015_02130ae8(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void func_ov029_02166a78(void);
extern "C" void func_ov029_02166ba8(void);
extern "C" s32 func_ov029_021674a4(...);
extern "C" void func_ov029_02168154(void);
extern "C" void func_ov029_0216b024(void);
extern "C" void func_ov029_0216b0b8(void);
extern "C" s32 func_ov029_0216bb4c(...);
extern "C" s32 func_ov029_0216bb8c(...);
extern "C" void gEntryPool(void);

extern "C" void func_ov029_0216c1f8(s32 arg0)
{
    func_ov029_0216c23c(arg0);
    func_ov029_0216c30c(arg0);
    func_ov029_0216c3b0(arg0);
    func_ov029_0216c4a8(arg0);
    func_ov029_0216c534(arg0);
    _ZN11MatchEngine13func_02082f3cEii((s32)data_020e88a0, 0, 2);
}

extern "C" asm s32 func_ov029_0216c23c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r11, r0
    mov r10, #0
    add r0, r11, #0x8000
    str r0, [sp]
    mov r8, r10
    mov r6, #1
    ldr r5, =g2DAdventureLogic
    ldr r4, =g2DGChar
    b @L_0216c2ec
@L_0216c264:
    mov r0, #0x68
    mla r0, r10, r0, r11
    add r0, r0, #0x2d00
    ldrh r9, [r0, #0xc0]
    cmp r9, #0
    beq @L_0216c2e8
    ldr r0, =data_020e88a0
    mov r1, r8
    mov r2, r9
    bl _ZN11MatchEngine13func_0207bdf8Eii
    ldr r0, [r5]
    mov r1, r9
    mov r2, r8
    bl func_02085d88
    mov r7, r0
    ldr r0, [r5]
    mov r1, r7
    mov r2, r6
    bl func_0208620c
    ldr r0, [r5]
    mov r1, r7
    bl func_02085b4c
    ldr r0, [r4]
    mov r1, r9
    mov r2, r8
    bl func_02087464
    mov r1, r0
    ldr r0, [r4]
    mov r2, r6
    bl func_020877e0
    ldr r0, [r4]
    mov r1, r6
    bl func_020879e4
@L_0216c2e8:
    add r10, r10, #1
@L_0216c2ec:
    ldr r0, [sp]
    ldr r0, [r0, #0x8c4]
    cmp r10, r0
    blt @L_0216c264
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov029_0216c30c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x40
    ldr r8, =data_ov029_0216d18c
    add r7, sp, #0
    mov r5, r0
    mov r4, r7
    ldmia r8!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    ldmia r8!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    ldmia r8!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    add r6, r5, #0x8000
    ldmia r8, {r0, r1, r2, r3}
    stmia r7, {r0, r1, r2, r3}
    ldr r0, [r6, #0x8c8]
    mov r5, #0
    cmp r0, #0
    addle sp, sp, #0x40
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r9, =data_020e88a0
    mov r7, #1
    mov r8, r5
@L_0216c368:
    ldr r2, [r4, r5, lsl #2]
    mov r0, r9
    mov r1, r8
    bl _ZN11MatchEngine13func_0207d244Eii
    movs r2, r0
    beq @L_0216c390
    mov r0, r9
    mov r1, r8
    mov r3, r7
    bl _ZN11MatchEngine13func_0207bee8Eiii
@L_0216c390:
    ldr r0, [r6, #0x8c8]
    add r5, r5, #1
    cmp r5, r0
    blt @L_0216c368
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov029_0216c3b0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    add r0, r10, #0x8000
    ldr r1, [r0, #0x8c8]
    mov r7, #0
    mov r8, r7
    cmp r1, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, =gEntryPool
    mov r11, r7
@L_0216c3d8:
    mov r0, #0x68
    mla r0, r8, r0, r10
    ldrh r6, [r0, #0x40]
    cmp r6, #0
    beq @L_0216c48c
    mov r9, r11
    cmp r1, #0
    ble @L_0216c440
    add r4, r10, #0x8000
@L_0216c3fc:
    mov r0, r9
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0216c430
    ldrh r0, [r0, #0x42]
    cmp r6, r0
    bne @L_0216c430
    mov r0, r5
    mov r1, r9
    mov r2, r7
    bl _ZN9EntryPool4SwapEii
    add r7, r7, #1
    b @L_0216c440
@L_0216c430:
    ldr r0, [r4, #0x8c8]
    add r9, r9, #1
    cmp r9, r0
    blt @L_0216c3fc
@L_0216c440:
    cmp r9, #0x10
    blt @L_0216c48c
    mov r4, #0
@L_0216c44c:
    add r0, r4, #0x20
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0216c480
    ldrh r0, [r0, #0x42]
    cmp r6, r0
    bne @L_0216c480
    mov r0, r5
    mov r2, r7
    add r1, r4, #0x20
    bl _ZN9EntryPool4SwapEii
    add r7, r7, #1
    b @L_0216c48c
@L_0216c480:
    add r4, r4, #1
    cmp r4, #0x64
    blt @L_0216c44c
@L_0216c48c:
    add r0, r10, #0x8000
    ldr r1, [r0, #0x8c8]
    add r8, r8, #1
    cmp r8, r1
    blt @L_0216c3d8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov029_0216c4a8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    add r5, r10, #0x8000
    ldr r0, [r5, #0x8c8]
    mov r9, #0
    cmp r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r7, =data_020e88a0
    mov r11, #1
    mov r6, r9
    mov r4, #0x68
@L_0216c4d4:
    mla r0, r9, r4, r10
    ldrh r8, [r0, #0x40]
    cmp r8, #0
    beq @L_0216c51c
    ldr r3, [r0, #0x48]
    cmp r3, #0
    bne @L_0216c508
    bl func_ov015_021319bc
    mov r1, r0
    mov r0, r7
    mov r2, r11
    bl _ZN11MatchEngine13func_0206dfa4Eii
    mov r3, r0
@L_0216c508:
    mov r0, r7
    mov r1, r6
    mov r2, r8
    str r6, [sp]
    bl _ZN11MatchEngine13func_0207b28cEv
@L_0216c51c:
    ldr r0, [r5, #0x8c8]
    add r9, r9, #1
    cmp r9, r0
    blt @L_0216c4d4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov029_0216c534(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    ldr r0, =data_020e88a0
    mov r4, #0
    bl _ZN11MatchEngine13func_02076848Ev
    mov r7, r0
    cmp r7, #0
    ble @L_0216c560
    cmp r7, #5
    blt @L_0216c564
@L_0216c560:
    mov r7, #4
@L_0216c564:
    mov r2, #0
    mov r0, #0x68
@L_0216c56c:
    mla r1, r2, r0, r10
    ldrh r1, [r1, #0x40]
    add r2, r2, #1
    cmp r1, #0
    addne r4, r4, #1
    cmp r2, #0x10
    blt @L_0216c56c
    cmp r4, r7
    movlt r7, r4
    mov r8, #0
    cmp r7, #0
    mov r9, r8
    addle sp, sp, #0xc
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =data_020e88a0
    mov r11, r8
@L_0216c5ac:
    mov r0, #0x68
    mla r0, r9, r0, r10
    ldrh r5, [r0, #0x40]
    cmp r5, #0
    beq @L_0216c628
    ldr r6, [r0, #0x4c]
    cmp r6, #0
    bne @L_0216c5e4
    bl func_ov015_021319bc
    mov r1, r0
    mov r0, r4
    mov r2, #2
    bl _ZN11MatchEngine13func_0206dfa4Eii
    mov r6, r0
@L_0216c5e4:
    str r11, [sp]
    str r11, [sp, #4]
    mov r0, r4
    mov r1, r11
    mov r2, r5
    add r3, r8, #1
    str r6, [sp, #8]
    bl _ZN11MatchEngine13func_0207b780Ev
    mov r0, r5
    mov r1, r11
    bl func_ov015_02130b14
    mov r1, r6
    bl func_02081398
    mov r1, r5
    mov r0, r10
    bl func_ov029_0216c640
    add r8, r8, #1
@L_0216c628:
    cmp r8, r7
    add r9, r9, #1
    blt @L_0216c5ac
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov029_0216c640(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x98
    mov r10, r1
    mov r0, r10
    mov r1, #0
    bl func_ov015_02130b14
    cmp r0, #0
    mov r9, #0x32
    ldrneh r8, [r0, #0x6e]
    bne @L_0216c688
    ldr r0, =data_020e88a0
    add r2, sp, #0x38
    mov r1, r10
    bl _ZN11MatchEngine13func_0207a5c0EiPv
    cmp r0, #0
    addeq sp, sp, #0x98
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r8, [sp, #0x88]
@L_0216c688:
    ldr r4, =g2DAdventureLogic
    str r9, [sp]
    mov r7, #0
    ldr r0, [r4]
    mov r1, r10
    mov r2, r7
    mov r3, r8
    bl func_020859c0
    mov r6, r0
    ldr r0, [r4]
    mov r1, r6
    sub r2, r7, #1
    bl func_02086164
    ldr r0, [r4]
    mov r1, r6
    bl func_02085ba4
    mov r5, #1
    mov r1, r5
    bl func_02084e08
    ldr r0, [r4]
    bl func_020864f4
    mov r1, r6
    bl func_02085228
    mov r2, r0
    ldr r1, [r4]
    add r0, sp, #0x20
    bl func_020864fc
    ldr r3, [sp, #0x20]
    ldr r2, [sp, #0x24]
    ldr r1, [sp, #0x28]
    str r2, [sp, #0x30]
    str r7, [sp]
    stmib sp, {r2, r7}
    str r5, [sp, #0xc]
    str r5, [sp, #0x10]
    str r1, [sp, #0x34]
    ldr r1, [r4]
    add r0, sp, #0x14
    mov r2, r6
    str r3, [sp, #0x2c]
    bl func_02085ec0
    ldr r2, [sp, #0x34]
    ldr r0, [r4]
    mov r2, r2, lsl #0x10
    mov r1, r6
    mov r2, r2, lsr #0x10
    bl func_02085e30
    ldr r0, [r4]
    mov r1, r6
    bl func_02085bfc
    ldr r4, =g2DGChar
    str r9, [sp]
    mov r6, r0
    ldr r0, [r4]
    mov r1, r10
    mov r2, r8
    mov r3, r7
    bl func_020878ac
    str r8, [sp]
    stmib sp, {r7, r9}
    ldr r0, [r4]
    mov r1, r6
    mov r2, r10
    mov r3, r7
    bl func_02087500
    ldr r0, [r4]
    mov r1, r5
    bl func_020879e4
    add sp, sp, #0x98
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov029_0216c7ac(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0xBC0) + 0x8000), 0, 0x28);
    *(s32 *)(((u8 *)(arg0 + 0x8000)) + 0xBE8) = 0;
    return (arg0 + 0x8000);
}

extern "C" asm void func_ov029_0216c7d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r10, r0
    add r1, r10, #0x8000
    ldr r1, [r1, #0x9e4]
    cmp r1, #0
    addne sp, sp, #0x18
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r2, #7
    str r2, [sp, #0x14]
    mov r1, #0x60
    str r1, [sp]
    mov r1, #0xa8
    str r1, [sp, #4]
    mov r1, #0x34
    str r1, [sp, #8]
    add r1, r2, #0x1ec
    str r1, [sp, #0xc]
    mov r8, #0
    ldr r2, [sp, #0x14]
    mov r3, r8
    mov r1, #0x14
    bl func_ov029_02166a78
    ldr r0, =g3DPlaneCtrl
    mov r1, #4
    ldr r0, [r0]
    mov r2, #1
    bl C3DPlaneCtrl_Create
    mov r7, r0
    add r0, r10, #0x8000
    str r7, [r0, #0x9e4]
    str r8, [sp, #0x14]
    add r11, sp, #0x14
    str r8, [sp]
    mov r6, #8
    str r6, [sp, #4]
    mov r5, #0x20
    str r5, [sp, #8]
    mov r4, #0xaf
    str r4, [sp, #0xc]
    str r8, [sp, #0x10]
    mov r0, r10
    mov r1, r7
    mov r2, r11
    mov r3, #0x13
    bl func_ov029_02168154
    str r8, [sp]
    str r6, [sp, #4]
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r10
    mov r1, r7
    mov r2, r11
    mov r3, #0x12
    str r8, [sp, #0x10]
    bl func_ov029_02168154
    add r9, r8, #1
    str r9, [sp]
    str r6, [sp, #4]
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r10
    mov r1, r7
    mov r2, r11
    mov r3, #0x12
    str r8, [sp, #0x10]
    bl func_ov029_02168154
    add r0, r9, #1
    stmia sp, {r0, r6}
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r10
    mov r1, r7
    mov r2, r11
    mov r3, #0x12
    str r8, [sp, #0x10]
    bl func_ov029_02168154
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov029_0216c918(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0xBC0) + 0x8000), 0, 0x14);
    C3DPlaneCtrl_ClearFlag(*(s32 *)(g3DPlaneCtrl), *(s32 *)(((u8 *)(arg0 + 0x8000)) + 0x9E4), 1, 2);
}

extern "C" asm void func_ov029_0216c958(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #1
    mov r1, r4
    mov r5, r0
    bl func_ov029_0216c9f0
    cmp r0, #1
    bne @L_0216c9d0
    add r3, r5, #0x8000
    ldr r2, [r3, #0xadc]
    mov r1, #0x78
    mov r0, r2, asr #2
    add r0, r2, r0, lsr #29
    mov r0, r0, asr #3
    mul r12, r0, r1
    mov r1, r2, lsr #0x1f
    rsb r0, r1, r2, lsl #29
    add r0, r1, r0, ror #29
    mov r0, r0, lsl #4
    add lr, r12, #8
    add r12, r0, #0x20
    mov r0, r5
    mov r1, #5
    str r4, [r3, #0xbcc]
    str lr, [r3, #0xbc4]
    str r12, [r3, #0xbc8]
    str r2, [r3, #0xbc0]
    bl func_ov029_021674a4
    ldr r0, =gAudioPlayer
    mov r1, r4
    b @L_0216c9d8
@L_0216c9d0:
    ldr r0, =gAudioPlayer
    mov r1, #9
@L_0216c9d8:
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r5
    mov r1, #0x34
    bl func_ov029_02166ba8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov029_0216c9f0(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v3;
    v0 = func_ov029_0216bb4c(arg0, arg1);
    r4 = arg1;
    r5 = arg0;
    if (v0 == 0) {
        return 0;
    } else {
        v1 = func_ov029_0216bb8c(r5);
        r4 = arg1;
        if ((v1 & 0x400) != 0) {
            if (arg1 != 0) {
                func_ov029_021674a4(r5, 6);
            }
            return 0;
        } else {
            v3 = func_ov029_0216bb8c(r5);
            if ((v3 & 0x20) != 0) {
                return 0;
            } else {
                if (*(s32 *)(((u8 *)(r5 + 0x8000)) + 0xADC) != 0) {
                    arg0 = 1;
                } else {
                    arg0 = 0;
                }
                return arg0;
            }
        }
    }
}

extern "C" asm void func_ov029_0216ca64(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    add r2, r9, #0x8000
    ldr r0, [r2, #0xbd0]
    mov r4, #0xf
    ldr r8, [r2, #0xbc8]
    ldr r7, [r2, #0xbc4]
    mov r1, r4
    add r0, r0, #1
    ldr r5, [r2, #0x9e4]
    mov r6, #1
    bl _s32_div_f
    mov r3, r7, lsl #0x10
    add r0, r9, #0x8000
    str r1, [r0, #0xbd0]
    mov r2, r8, lsl #0x10
    mov r0, r2, asr #0x10
    ldr r7, =g3DPlaneCtrl
    str r0, [sp]
    ldr r0, [r7]
    mov r1, r5
    mov r2, r6
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    str r6, [sp]
    ldr r0, [r7]
    mov r1, r5
    mov r2, r6
    mov r3, #2
    bl C3DPlaneCtrl_SetFlag
    add r0, r9, #0x8000
    ldr r1, [r0, #0xbd0]
    add r0, r4, r4, lsr #31
    cmp r1, r0, asr #1
    rsbgt r0, r1, #0
    addgt r1, r0, r4
    add r3, r1, r1, lsl #1
    ldr r0, =g3DPlaneCtrl
    mov r1, r5
    ldr r0, [r0]
    mov r2, r6
    and r3, r3, #0xff
    bl func_0209342c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_ov029_0216cb18(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0x3D4) + 0x8800), 0, 0x14);
    C3DPlaneCtrl_ClearFlag(*(s32 *)(g3DPlaneCtrl), *(s32 *)(((u8 *)(arg0 + 0x8000)) + 0x9E4), 1, 2);
    C3DPlaneCtrl_ClearFlag(*(s32 *)(g3DPlaneCtrl), *(s32 *)(((u8 *)(arg0 + 0x8000)) + 0x9E4), 2, 2);
    C3DPlaneCtrl_ClearFlag(*(s32 *)(g3DPlaneCtrl), *(s32 *)(((u8 *)(arg0 + 0x8000)) + 0x9E4), 3, 2);
}

extern "C" asm void func_ov029_0216cb8c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    mov r4, #1
    mov r1, r4
    mov r5, r0
    bl func_ov029_0216cc54
    cmp r0, #1
    bne @L_0216cc2c
    ldr r0, =data_ov029_0216d084
    add r12, sp, #0
    ldmia r0, {r0, r1, r2, r3}
    stmia r12, {r0, r1, r2, r3}
    add r2, r5, #0x8000
    ldr r0, [r2, #0xadc]
    mov r3, #0x78
    mov r1, r0, asr #2
    add r1, r0, r1, lsr #29
    mov r1, r1, asr #3
    mul lr, r1, r3
    mov r3, r0, lsr #0x1f
    rsb r1, r3, r0, lsl #29
    add r1, r3, r1, ror #29
    mov r3, r1, lsl #4
    mov r1, r0, asr #1
    add lr, lr, #8
    add r3, r3, #0x20
    add r1, r0, r1, lsr #30
    str r0, [r2, #0xbd4]
    mov r0, r1, asr #2
    str r4, [r2, #0xbe0]
    str lr, [r2, #0xbd8]
    str r3, [r2, #0xbdc]
    ldr r3, [r12, r0, lsl #2]
    mov r0, r5
    mov r1, #7
    str r3, [r2, #0xbe8]
    bl func_ov029_021674a4
    ldr r0, =gAudioPlayer
    mov r1, r4
    b @L_0216cc34
@L_0216cc2c:
    ldr r0, =gAudioPlayer
    mov r1, #9
@L_0216cc34:
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r5
    mov r1, #0x34
    bl func_ov029_02166ba8
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov029_0216cc54(u8 *arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v3;
    v0 = func_ov029_0216bb4c((s32)arg0, arg1);
    r4 = arg1;
    r5 = (s32)arg0;
    if (v0 == 0) {
        return 0;
    } else {
        v1 = func_ov029_0216bb8c(r5);
        if ((v1 & 0x400) != 0) {
            if (r4 != 0) {
                func_ov029_021674a4(r5, 6);
            }
            return 0;
        } else {
            v3 = func_ov029_0216bb8c(r5);
            if ((v3 & 0x20) != 0) {
                return 0;
            } else {
                arg0 = (u8 *)(r5 + 0x8000);
                arg1 = *(s32 *)(((u8 *)(r5 + 0x8000)) + 0xADC);
                if (arg1 == 0) {
                    return 0;
                } else {
                    if (*(s32 *)(arg0 + 0xBC0) != arg1) {
                        arg0 = (u8 *)1;
                    } else {
                        arg0 = (u8 *)0;
                    }
                    return (s32)arg0;
                }
            }
        }
    }
}

extern "C" asm void func_ov029_0216ccd8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    add r2, r10, #0x8000
    ldr r0, [r2, #0xbe4]
    mov r4, #0xb
    add r8, r4, #1
    ldr r7, [r2, #0xbdc]
    add r0, r0, #1
    add r1, r8, #1
    ldr r6, [r2, #0xbd8]
    ldr r5, [r2, #0x9e4]
    mov r11, #0
    bl _s32_div_f
    mov r0, r7, lsl #0x10
    mov r9, r1
    mov r1, r0, asr #0x10
    mov r0, r6, lsl #0x10
    mov r3, r0, asr #0x10
    add r0, r10, #0x8000
    str r9, [r0, #0xbe4]
    str r1, [sp]
    ldr r6, =g3DPlaneCtrl
    mov r1, r5
    ldr r0, [r6]
    mov r2, #2
    bl C3DPlaneCtrl_SetPos
    cmp r9, #2
    bgt @L_0216cd68
    mov r0, #1
    str r0, [sp]
    mov r2, #2
    ldr r0, [r6]
    mov r1, r5
    mov r3, r2
    bl C3DPlaneCtrl_SetFlag
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216cd68:
    cmp r9, #5
    bgt @L_0216cd88
    mov r2, #2
    ldr r0, [r6]
    mov r1, r5
    mov r3, r2
    bl C3DPlaneCtrl_ClearFlag
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216cd88:
    cmp r9, #8
    bgt @L_0216cdb0
    mov r0, #1
    str r0, [sp]
    mov r2, #2
    ldr r0, [r6]
    mov r1, r5
    mov r3, r2
    bl C3DPlaneCtrl_SetFlag
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216cdb0:
    cmp r9, r4
    bgt @L_0216cdd0
    mov r2, #2
    ldr r0, [r6]
    mov r1, r5
    mov r3, r2
    bl C3DPlaneCtrl_ClearFlag
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216cdd0:
    cmp r9, r8
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl func_ov029_0216ce14
    mov r0, r10
    bl func_ov029_0216b024
    mov r0, r10
    bl func_ov029_0216b0b8
    mov r0, r10
    mov r1, r11
    bl func_ov029_021674a4
    mov r0, r10
    bl func_ov029_0216c918
    mov r0, r10
    bl func_ov029_0216cb18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov029_0216ce14(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x68
    mov r8, r0
    add r0, r8, #0x8000
    ldr r1, [r0, #0xbc0]
    mov r11, #0x68
    ldr r0, [r0, #0xbd4]
    mul r7, r1, r11
    mul r6, r0, r11
    add r5, r8, #0x52
    add r0, sp, #0
    mov r1, #0
    mov r2, r11
    ldrb r9, [r5, r7]
    ldrb r10, [r5, r6]
    bl MI_CpuFill8
    add r4, r8, #0x40
    add r0, r4, r7
    add r1, sp, #0
    mov r2, r11
    bl MI_CpuCopy8
    cmp r9, #1
    bne @L_0216cef4
    cmp r10, #1
    bne @L_0216cea4
    mov r5, r4
    mov r2, r11
    add r0, r5, r6
    add r1, r4, r7
    bl MI_CpuCopy8
    add r0, sp, #0
    mov r2, r11
    add r1, r5, r6
    bl MI_CpuCopy8
    add sp, sp, #0x68
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216cea4:
    add r9, r8, #0x4c
    add r8, r8, #0x40
    add r1, r4, r7
    mov r2, r11
    add r0, r8, r6
    ldr r4, [r9, r7]
    ldr r10, [r9, r6]
    bl MI_CpuCopy8
    add r0, sp, #0
    mov r2, r11
    add r1, r8, r6
    bl MI_CpuCopy8
    str r4, [r9, r7]
    mov r0, #1
    strb r0, [r5, r7]
    str r10, [r9, r6]
    mov r0, #0
    add sp, sp, #0x68
    strb r0, [r5, r6]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216cef4:
    cmp r10, #1
    bne @L_0216cf4c
    add r9, r8, #0x4c
    add r8, r8, #0x40
    add r1, r4, r7
    mov r2, r11
    add r0, r8, r6
    ldr r4, [r9, r7]
    ldr r10, [r9, r6]
    bl MI_CpuCopy8
    add r0, sp, #0
    mov r2, r11
    add r1, r8, r6
    bl MI_CpuCopy8
    str r4, [r9, r7]
    mov r0, #0
    strb r0, [r5, r7]
    str r10, [r9, r6]
    mov r0, #1
    add sp, sp, #0x68
    strb r0, [r5, r6]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216cf4c:
    mov r5, r4
    mov r2, r11
    add r0, r5, r6
    add r1, r4, r7
    bl MI_CpuCopy8
    add r0, sp, #0
    mov r2, r11
    add r1, r5, r6
    bl MI_CpuCopy8
    add sp, sp, #0x68
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov029_0216cf78(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov029_0216cf8c(void)
{
}
