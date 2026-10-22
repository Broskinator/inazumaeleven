#include "system/System.hpp"

extern "C" char data_020aad64[];
extern "C" char data_020ac064[];
extern "C" char data_020ac084[];
extern "C" char data_020ac0cc[];
extern "C" char data_020ac0e4[];
extern "C" char data_020ac100[];
extern "C" char data_020ac120[];
extern "C" char data_020ac140[];
extern "C" char data_020ac15c[];
extern "C" char data_020ac17c[];
extern "C" char data_020ac19c[];
extern "C" char data_020ac1bc[];
extern "C" char data_020ac1d8[];
extern "C" char data_020ac1f4[];
extern "C" char data_020ac210[];
extern "C" char data_020ac22c[];
extern "C" char data_020af61c[];
extern "C" char data_020af7d0[];
extern "C" char data_020afa08[];
extern "C" char data_020afd20[];
extern "C" char data_020c4638[];
extern "C" char data_020c4654[];
extern "C" char data_020c4658[];
extern "C" char data_020c465c[];
extern "C" char data_020c4664[];
extern "C" char data_020c469c[];
extern "C" char data_020c46a4[];
extern "C" char data_020c46ac[];
extern "C" char data_020c46bc[];
extern "C" char data_020c46e4[];
extern "C" char data_020c47b4[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4ac0[];
extern "C" char data_020c4ae1[];
extern "C" char data_020c4c70[];
extern "C" char data_020c4f60[];
extern "C" char data_020c5320[];
extern "C" char data_020c5e40[];
extern "C" char data_020c6364[];
extern "C" char data_020e88a0[];
extern "C" char data_027e0000[];
extern "C" void DC_FlushAll(void);
extern "C" void FS_LoadOverlay(void);
extern "C" void G2x_ChangeBlendBrightness_(void);
extern "C" void G3X_InitMtxStack(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void NNS_G3dInit(void);
extern "C" void OS_AllocFromArenaLo(void);
extern "C" void OS_EnableIrqMask(void);
extern "C" void OS_InitTick(void);
extern "C" void OS_SetCurrentHeap(void);
extern "C" void OS_SetIrqFunction(void);
extern "C" void OS_Sleep(void);
extern "C" void _ZN10ConfigFile4LoadEPKc(void);
extern "C" void _ZN10ConfigFile5ClearEv(void);
extern "C" void _ZN10ConfigFile5ResetEv(void);
extern "C" void _ZN10ConfigFile6GetIntEPKc(void);
extern "C" void _ZN11FileManager4InitEiP8GameHeap(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN11FileManager6WakeUpEv(void);
extern "C" void _ZN11MoviePlayer10InitSystemEP8GameHeap(void);
extern "C" void _ZN11SaveManager4InitEv(void);
extern "C" void _ZN12SoundManager13AreBanksReadyEv(void);
extern "C" void _ZN12SoundManager4InitEP8GameHeap(void);
extern "C" void _ZN12SoundManager6IsIdleEv(void);
extern "C" void _ZN12SoundManager8SetSceneEiii(void);
extern "C" void _ZN12TextFont2bppC1Ev(void);
extern "C" void _ZN8GameHeap4InitEiPvS0_(void);
extern "C" void _ZN8TextFont16SetUseGlyphWidthEh(void);
extern "C" void _ZN8TextFont7SetFontEPvmh(void);
extern "C" void _ZN8TextFontC1Ev(void);
extern "C" void _Znwm(void);
extern "C" void func_01ff9dc4(void);
extern "C" void func_01ff9e1c(void);
extern "C" void func_01ffb7b8(void);
extern "C" void func_01ffd9a0(void);
extern "C" void func_020023fc(void);
extern "C" void func_02002400(void);
extern "C" void func_02002570(void);
extern "C" void func_020025b8(void);
extern "C" void func_02004ab4(void);
extern "C" void func_02004f4c(void);
extern "C" void func_02005c5c(void);
extern "C" void func_020065d0(void);
extern "C" void func_02006dd8(void);
extern "C" void func_02006f90(void);
extern "C" void func_02006fa4(void);
extern "C" void func_0200713c(void);
extern "C" void func_02007150(void);
extern "C" void func_0200745c(void);
extern "C" void func_02007504(void);
extern "C" void func_02007be4(void);
extern "C" void func_0200846c(void);
extern "C" void func_0200878c(void);
extern "C" void func_0200e794(void);
extern "C" void func_0200eab0(void);
extern "C" void func_0200eb24(void);
extern "C" void func_0200ebb8(void);
extern "C" void func_0201025c(void);
extern "C" void func_020285a4(void);
extern "C" void func_0206f7a4(void);
extern "C" void func_020858fc(void);
extern "C" void func_02085934(void);
extern "C" void func_02087144(void);
extern "C" void func_0208720c(void);
extern "C" void func_0208868c(void);
extern "C" void func_02088a38(void);
extern "C" void func_02089024(void);
extern "C" void func_02089214(void);
extern "C" void func_0208a718(void);
extern "C" void func_0208ad68(void);
extern "C" void func_0208c178(void);
extern "C" void func_0208c1f4(void);
extern "C" void func_0208d2f0(void);
extern "C" void func_0208d9e8(void);
extern "C" void func_02090320(void);
extern "C" void func_02091c64(void);
extern "C" void func_02095d70(void);
extern "C" void func_020977d0(void);
extern "C" void func_02098bac(void);
extern "C" void func_02099140(void);
extern "C" void func_0209d1d4(void);
extern "C" void func_0209d638(void);
extern "C" void func_ov015_02130920(void);
extern "C" void func_ov015_02131818(void);
extern "C" void func_ov015_0213238c(void);
extern "C" void func_ov015_02133efc(void);
extern "C" void func_ov015_02136584(void);
extern "C" void func_ov015_02136594(void);
extern "C" void func_ov015_0213cc18(void);
extern "C" void func_ov015_0213db54(void);
extern "C" void func_ov015_0214799c(void);
extern "C" void func_ov015_02148258(void);
extern "C" void func_ov015_02161618(void);
extern "C" void gGameState(void);

asm void System::func_0203f8ec()
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020c4638
    ldr r0, [r0, #0x30]
    cmp r0, #0
    beq @L_0203f904
    bl func_02099140
@L_0203f904:
    ldr r0, =data_020c5320
    bl func_0209d1d4
    ldr r0, =data_020c6364
    bl _ZN11FileManager6WakeUpEv
    ldr r0, =data_027e0000
    add r0, r0, #0x3000
    ldr r1, [r0, #0xff8]
    orr r1, r1, #1
    str r1, [r0, #0xff8]
    ldmia sp!, {r3, pc}
}

asm void System::func_0203f93c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    cmp r7, #0x100000
    movhi r7, #0x100000
    bl func_020065d0
    mov r4, r0
    mov r0, #0
    bl func_02006f90
    and r1, r4, #0xf
    mov r6, r0
    cmp r1, #2
    beq @L_0203f974
    cmp r1, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203f974:
    mov r5, #2
    mov r0, r5
    bl func_02006f90
    mov r4, r0
    mov r0, r5
    bl func_02006fa4
    cmp r0, r4
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    add r1, r6, r7
    bl func_02007150
    add r1, r6, r7
    mov r0, #0
    bl func_0200713c
    add r0, r6, r7
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void System::func_0203f9b8()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    mov r0, r6
    bl func_02006fa4
    mov r5, r0
    mov r0, #0x100000
    bl func_0203f93c
    mov r4, r0
    mov r0, r6
    mov r1, r5
    sub r2, r4, r5
    bl MIi_CpuClearFast
    mov r1, r5
    mov r2, r4
    mov r0, r6
    mov r3, #2
    bl func_0200745c
    mov r1, r0
    mov r0, r6
    bl func_02007150
    mov r0, r6
    mov r1, #0x3c000
    mov r2, #0x20
    bl OS_AllocFromArenaLo
    mov r1, r0
    mov r0, r6
    add r2, r1, #0x3c000
    bl func_02007504
    mov r4, r0
    mov r0, r6
    mov r1, r4
    bl OS_SetCurrentHeap
    ldr r0, =data_020c4638
    str r4, [r0, #0x54]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void System::func_0203fa48()
{
    stmdb sp!, {r4, lr}
    bl func_02006dd8
    bl OS_InitTick
    bl func_02007be4
    bl func_02005c5c
    mvn r0, #0
    bl func_0200e794
    bl func_0201025c
    bl func_0203f9b8
    bl func_020023fc
    mov r1, #3
    ldr r0, =data_020aad64
    str r1, [r0]
    bl func_02002400
    bl func_020025b8
    ldr r2, =0x4001000
    mov r4, #0
    ldr r1, [r2]
    mov r0, r4
    bic r1, r1, #0x10000
    str r1, [r2]
    ldr r1, =0xf
    bl FS_LoadOverlay
    mov r0, r4
    ldr r1, =0x57
    bl FS_LoadOverlay
    bl func_0209d638
    ldmia sp!, {r4, pc}
}

asm void System::func_0203fac8()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, #0
    mov r0, r5
    bl func_02006fa4
    ldr r4, =data_020c4638
    str r0, [r4, #0x4c]
    mov r0, r5
    bl func_02006f90
    str r0, [r4, #0x60]
    ldr r1, [r4, #0x4c]
    add r1, r1, #0xe000
    add r1, r1, #0x200000
    str r1, [r4, #0x78]
    cmp r1, r0
    strls r0, [r4, #0x58]
    bls @L_0203fb0c
    bl func_0200878c
@L_0203fb0c:
    ldr r4, =data_020c4638
    mov r6, #0
    ldr r1, [r4, #0x4c]
    ldr r2, [r4, #0x58]
    mov r0, r6
    sub r2, r2, r1
    str r2, [r4, #0x48]
    bl MIi_CpuClearFast
    bl DC_FlushAll
    ldr r5, =data_020c47b4
    ldr r2, [r4, #0x4c]
    ldr r3, [r4, #0x58]
    mov r0, r5
    mov r1, r6
    bl _ZN8GameHeap4InitEiPvS0_
    mov r0, r6
    ldr r1, [r4, #0x58]
    add r1, r1, #0x1f
    bic r1, r1, #0x1f
    bl func_02007150
    ldr r0, =data_020c6364
    mov r1, #0x40
    str r0, [r4, #0x17c]
    mov r2, r5
    bl _ZN11FileManager4InitEiP8GameHeap
    mov r1, r5
    ldr r0, =data_020c4f60
    bl _ZN11MoviePlayer10InitSystemEP8GameHeap
    ldmia sp!, {r4, r5, r6, pc}
}

asm void System::func_0203fb90()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r8, =0x1ff
    mov r0, r8
    bl func_02004ab4
    mov r7, #0
    mov r0, r7
    mov r1, #0x6800000
    mov r2, #0xa4000
    bl MIi_CpuClearFast
    bl func_02004f4c
    mov r6, #0xc0
    mov r4, #0x400
    mov r0, r6
    mov r1, #0x7000000
    mov r2, r4
    bl MIi_CpuClearFast
    mov r0, r7
    mov r5, #0x5000000
    mov r1, r5
    mov r2, r4
    bl MIi_CpuClearFast
    mov r0, r6
    sub r1, r4, #0xf9000000
    mov r2, r4
    bl MIi_CpuClearFast
    mov r0, r7
    mov r2, r4
    add r4, r5, #0x400
    mov r1, r4
    bl MIi_CpuClearFast
    add r0, r8, #0x7e00
    strh r0, [r5]
    strh r0, [r4]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void System::func_0203fc1c()
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =0x4000208
    mov r4, #1
    ldrh r0, [r5]
    ldr r1, =func_0203f8ec
    mov r2, #0
    mov r0, r4
    strh r2, [r5]
    bl OS_SetIrqFunction
    mov r0, r4
    bl OS_EnableIrqMask
    mov r0, #0x40000
    bl OS_EnableIrqMask
    ldrh r0, [r5]
    mov r0, r4
    strh r4, [r5]
    bl func_02002570
    bl func_0200846c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void System::func_0203fc70()
{
    bx lr
}

asm void System::func_0203fc74()
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020c46e4
    mov r0, r4
    bl _ZN10ConfigFile5ResetEv
    mov r0, r4
    bl _ZN10ConfigFile5ClearEv
    ldr r1, =data_020ac0cc
    mov r0, r4
    bl _ZN10ConfigFile4LoadEPKc
    ldmia sp!, {r4, pc}
}

asm void System::func_0203fca4()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r0, #0x48
    ldr r4, =data_020c4638
    bl _Znwm
    cmp r0, #0
    ldrne r1, =data_020af61c
    strne r1, [r0]
    str r0, [r4, #0x44]
    mov r0, #0x3c
    bl _Znwm
    str r0, [r4, #0x30]
    mov r0, #0x2c
    bl _Znwm
    cmp r0, #0
    beq @L_0203fce4
    bl func_ov015_02148258
@L_0203fce4:
    str r0, [r4, #0x14]
    ldr r0, =0x5e4
    bl _Znwm
    str r0, [r4, #0x98]
    mov r0, #0x94
    bl _Znwm
    movs r5, r0
    beq @L_0203fd10
    ldr r1, =data_020ac084
    str r1, [r5]
    bl func_02089024
@L_0203fd10:
    mov r0, #0x20
    str r5, [r4, #0x18]
    bl _Znwm
    cmp r0, #0
    beq @L_0203fd28
    bl func_0208c178
@L_0203fd28:
    str r0, [r4, #0x28]
    mov r0, #0x1c
    bl _Znwm
    movs r5, r0
    beq @L_0203fd50
    bl func_02088a38
    ldr r1, =data_020af7d0
    mov r0, r5
    str r1, [r5]
    bl func_0208a718
@L_0203fd50:
    mov r0, #0x20
    str r5, [r4, #0x3c]
    bl _Znwm
    movs r5, r0
    beq @L_0203fd78
    bl func_02088a38
    ldr r1, =data_020afa08
    mov r0, r5
    str r1, [r5]
    bl func_0208d2f0
@L_0203fd78:
    mov r0, #0x1bc
    str r5, [r4, #0x40]
    bl _Znwm
    cmp r0, #0
    beq @L_0203fd90
    bl func_ov015_02136584
@L_0203fd90:
    str r0, [r4, #0x10]
    mov r0, #0x2c
    bl _Znwm
    movs r5, r0
    beq @L_0203fda8
    bl func_020977d0
@L_0203fda8:
    mov r0, #0x48
    str r5, [r4, #0x9c]
    bl _Znwm
    movs r5, r0
    beq @L_0203fdcc
    ldr r1, =data_020afd20
    add r0, r5, #4
    str r1, [r5]
    bl func_020977d0
@L_0203fdcc:
    mov r0, #0x350
    str r5, [r4, #0x5c]
    bl _Znwm
    cmp r0, #0
    beq @L_0203fde4
    bl func_02090320
@L_0203fde4:
    str r0, [r4, #0x38]
    ldr r0, =0x18fc
    bl _Znwm
    cmp r0, #0
    beq @L_0203fdfc
    bl func_020858fc
@L_0203fdfc:
    str r0, [r4, #0x94]
    mov r0, #0xa0
    bl _Znwm
    cmp r0, #0
    beq @L_0203fe14
    bl func_02087144
@L_0203fe14:
    str r0, [r4, #0x90]
    ldr r0, =0xf3c
    bl _Znwm
    cmp r0, #0
    ldrne r1, =data_020ac064
    strne r1, [r0]
    str r0, [r4, #0x8c]
    ldr r0, =0x424
    bl _Znwm
    cmp r0, #0
    beq @L_0203fe44
    bl func_ov015_02161618
@L_0203fe44:
    str r0, [r4, #0x80]
    mov r0, #0x138
    bl _Znwm
    cmp r0, #0
    beq @L_0203fe5c
    bl func_ov015_0213db54
@L_0203fe5c:
    str r0, [r4, #0x50]
    ldr r0, [r4, #0x44]
    bl func_0208868c
    mov r5, #0x100
    mov r2, #0x80
    ldr r0, [r4, #0x30]
    mov r1, r5
    mov r3, r2
    bl func_02098bac
    ldr r0, [r4, #0x14]
    mov r1, r5
    bl func_ov015_0214799c
    ldr r0, [r4, #0x98]
    bl func_ov015_0213cc18
    mov r5, #8
    ldr r0, [r4, #0x18]
    mov r1, r5
    bl func_02089214
    ldr r0, [r4, #0x40]
    mov r1, #0x20
    bl func_0208d9e8
    ldr r0, [r4, #0x28]
    mov r1, r5
    bl func_0208c1f4
    ldr r0, [r4, #0x3c]
    mov r1, #0x10
    bl func_0208ad68
    ldr r0, [r4, #0x10]
    bl func_ov015_02136594
    ldr r0, [r4, #0x9c]
    mov r1, #0xc0
    mov r2, #0xa0
    bl func_02091c64
    mov r1, #0x60
    ldr r0, [r4, #0x5c]
    mov r2, r1
    bl func_02095d70
    ldr r0, [r4, #0x94]
    bl func_02085934
    ldr r0, [r4, #0x90]
    bl func_0208720c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void System::func_0203ff30()
{
    stmdb sp!, {r4, lr}
    bl NNS_G3dInit
    bl func_020285a4
    bl G3X_InitMtxStack
    ldr r3, =0x4000304
    mov r4, #0
    ldrh r2, [r3]
    mov r1, r4
    sub r0, r3, #0x2b4
    bic r2, r2, #0x8000
    strh r2, [r3]
    bl G2x_ChangeBlendBrightness_
    ldr r0, =0x4001050
    mov r1, r4
    bl G2x_ChangeBlendBrightness_
    ldmia sp!, {r4, pc}
}

asm void System::func_0203ff78()
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    bl func_0200eab0
    add r4, sp, #0
    mov r0, r4
    bl func_0200eb24
    cmp r0, #0
    bne @L_0203ffa4
    bl func_0200878c
    add sp, sp, #8
    ldmia sp!, {r4, pc}
@L_0203ffa4:
    mov r0, r4
    bl func_0200ebb8
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

asm void System::func_0203ffb4()
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020e88a0
    mov r0, r4
    bl func_01ff9dc4
    mov r0, r4
    bl func_01ff9e1c
    ldmia sp!, {r4, pc}
}

asm void System::func_0203ffd4()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    ldr r4, =data_020e88a0
    mov r5, #1
    mov r0, r4
    bl func_01ffd9a0
    mov r0, r4
    bl func_01ffb7b8
    mov r0, r4
    bl func_0206f7a4
    ldr r4, =data_020c4638
    mov r6, #0
    str r6, [r4, #0x6c]
    ldr r0, [r4, #0x17c]
    ldr r1, =data_020ac0e4
    cmp r0, #0
    beq @L_02040038
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    ldr r2, =data_020c46a4
    ldr r3, =data_020c47b4
    str r5, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_02040038:
    str r6, [r4, #0x24]
    str r6, [r4, #0x74]
    str r6, [r4, #0x64]
    str r6, [r4, #0x2c]
    str r6, [r4, #0x1c]
    ldr r0, [r4, #0x17c]
    ldr r1, =data_020ac100
    cmp r0, #0
    beq @L_0204007c
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    ldr r2, =data_020c465c
    ldr r3, =data_020c47b4
    str r5, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_0204007c:
    ldr r0, [r4, #0x17c]
    ldr r1, =data_020ac120
    cmp r0, #0
    beq @L_020400ac
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    ldr r2, =data_020c46ac
    ldr r3, =data_020c47b4
    str r5, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020400ac:
    ldr r0, [r4, #0x17c]
    ldr r1, =data_020ac140
    cmp r0, #0
    beq @L_020400dc
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    ldr r2, =data_020c469c
    ldr r3, =data_020c47b4
    str r5, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020400dc:
    ldr r0, [r4, #0x17c]
    ldr r1, =data_020ac15c
    cmp r0, #0
    beq @L_0204010c
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    ldr r2, =data_020c4664
    ldr r3, =data_020c47b4
    str r5, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_0204010c:
    ldr r0, [r4, #0x17c]
    ldr r1, =data_020ac17c
    cmp r0, #0
    beq @L_0204013c
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    ldr r2, =data_020c4654
    ldr r3, =data_020c47b4
    str r5, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_0204013c:
    ldr r0, [r4, #0x17c]
    ldr r1, =data_020ac19c
    cmp r0, #0
    addeq sp, sp, #0x14
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r5, [sp, #0xc]
    ldr r2, =data_020c46bc
    ldr r3, =data_020c47b4
    str r5, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void System::func_020401bc()
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r6, =gGameState
    mov r5, #0
    ldr r2, =0x128c
    mov r0, r6
    mov r1, r5
    mov r4, r5
    bl MI_CpuFill8
    mov r2, #1
    ldr r0, =data_020c4638
    strb r2, [r6, #0x4f3]
    sub r1, r2, #2
    strb r1, [r6, #0x4d8]
    strh r5, [r0, #0xa]
    strb r5, [r0]
    strb r5, [r0, #2]
    strb r5, [r0, #3]
    strb r5, [r0, #4]
    strb r5, [r0, #1]
    strh r2, [r0, #6]
    ldr r0, =data_020c4658
    b @L_02040220
@L_02040214:
    mov r1, r5, lsl #1
    strh r4, [r0, r1]
    add r5, r5, #1
@L_02040220:
    cmp r5, #2
    blt @L_02040214
    ldr r0, =data_020c4ab4
    mov r5, #0
    str r5, [r0]
    str r5, [r0, #8]
    strb r5, [r0, #0x14]
    ldr r1, =data_020c4638
    mov r2, #1
    strh r2, [r1, #8]
    ldr r3, =data_020c4ac0
    ldr r1, =data_020c4ae1
    mov r0, #0x19
    b @L_02040268
@L_02040258:
    mul r2, r5, r0
    str r4, [r3, r5, lsl #2]
    strb r4, [r1, r2]
    add r5, r5, #1
@L_02040268:
    cmp r5, #2
    blt @L_02040258
    ldr r0, =data_020c4ab4
    mov r1, #1
    str r4, [r0, #4]
    strb r4, [r0, #0x60]
    strb r4, [r0, #0x61]
    strb r4, [r0, #0x62]
    strb r4, [r0, #0x5f]
    strb r4, [r0, #0x63]
    str r4, [r0, #0x64]
    strb r4, [r0, #0x68]
    strh r4, [r0, #0x6c]
    strb r4, [r0, #0x75]
    strb r4, [r0, #0x76]
    strb r4, [r0, #0x77]
    strb r4, [r0, #0x78]
    strb r4, [r0, #0x79]
    strb r4, [r0, #0x69]
    strb r4, [r0, #0x6a]
    strb r1, [r0, #0x6e]
    strb r1, [r0, #0x6f]
    strb r4, [r0, #0x70]
    strb r4, [r0, #0x71]
    strb r4, [r0, #0x72]
    strb r4, [r0, #0x73]
    strb r4, [r0, #0x74]
    strh r4, [r0, #0x7c]
    strh r4, [r0, #0x7a]
    strb r4, [r0, #0x7e]
    strb r4, [r0, #0x9e]
    strb r4, [r0, #0xbe]
    strb r4, [r0, #0xbf]
    strb r4, [r0, #0xc0]
    ldrb r1, [r0, #0xc1]
    bic r1, r1, #7
    and r1, r1, #0xff
    bic r1, r1, #0x38
    and r1, r1, #0xff
    bic r1, r1, #0x40
    strb r1, [r0, #0xc1]
    str r4, [r0, #0xc4]
    strb r4, [r0, #0xc8]
    bl func_ov015_02130920
    bl func_ov015_0213238c
    ldr r0, =data_020c4c70
    bl _ZN11SaveManager4InitEv
    ldr r1, =data_020c4638
    str r0, [r1, #0x88]
    mov r0, r4
    bl func_ov015_02131818
    ldmia sp!, {r4, r5, r6, pc}
}

asm void System::func_02040358()
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x30
    ldr r0, =data_020ac1bc
    add r1, sp, #0
    bl func_ov015_02133efc
    ldr r0, =data_020ac1d8
    add r1, sp, #0xc
    bl func_ov015_02133efc
    ldr r0, =data_020ac1f4
    add r1, sp, #0x18
    bl func_ov015_02133efc
    ldr r0, =data_020ac210
    add r1, sp, #0x24
    bl func_ov015_02133efc
    mov r0, #0x24
    bl _Znwm
    cmp r0, #0
    beq @L_020403a4
    bl _ZN8TextFontC1Ev
@L_020403a4:
    ldr r1, =data_020c4638
    str r0, [r1, #0x7c]
    mov r0, #0x24
    bl _Znwm
    cmp r0, #0
    beq @L_020403c0
    bl _ZN8TextFontC1Ev
@L_020403c0:
    ldr r1, =data_020c4638
    str r0, [r1, #0x68]
    mov r0, #0x24
    bl _Znwm
    cmp r0, #0
    beq @L_020403dc
    bl _ZN8TextFontC1Ev
@L_020403dc:
    ldr r1, =data_020c4638
    str r0, [r1, #0x70]
    mov r0, #0x24
    bl _Znwm
    cmp r0, #0
    beq @L_020403f8
    bl _ZN12TextFont2bppC1Ev
@L_020403f8:
    ldr r4, =data_020c4638
    mov r5, #0
    str r0, [r4, #0x34]
    ldr r0, [r4, #0x7c]
    ldr r1, [sp]
    mov r2, r5
    mov r3, r5
    bl _ZN8TextFont7SetFontEPvmh
    ldr r0, [r4, #0x68]
    ldr r1, [sp, #0xc]
    mov r2, r5
    mov r3, r5
    bl _ZN8TextFont7SetFontEPvmh
    ldr r0, [r4, #0x70]
    ldr r1, [sp, #0x18]
    mov r2, r5
    mov r3, r5
    bl _ZN8TextFont7SetFontEPvmh
    ldr r0, [r4, #0x34]
    ldr r1, [sp, #0x24]
    mov r2, r5
    mov r3, r5
    bl _ZN8TextFont7SetFontEPvmh
    ldr r0, [r4, #0x7c]
    mov r5, #1
    mov r1, r5
    bl _ZN8TextFont16SetUseGlyphWidthEh
    ldr r0, [r4, #0x68]
    mov r1, r5
    bl _ZN8TextFont16SetUseGlyphWidthEh
    ldr r0, [r4, #0x70]
    mov r1, r5
    bl _ZN8TextFont16SetUseGlyphWidthEh
    mov r1, r5
    ldr r0, [r4, #0x34]
    bl _ZN8TextFont16SetUseGlyphWidthEh
    ldr r0, =data_020c46e4
    ldr r1, =data_020ac22c
    bl _ZN10ConfigFile6GetIntEPKc
    strh r0, [r4, #0xc]
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, pc}
}

asm void System::func_020404bc()
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =data_020c5e40
    ldr r1, =data_020c47b4
    mov r0, r5
    bl _ZN12SoundManager4InitEP8GameHeap
    mov r2, #0
    mov r0, r5
    mov r3, r2
    mov r1, #2
    bl _ZN12SoundManager8SetSceneEiii
    mov r0, r5
    bl _ZN12SoundManager6IsIdleEv
    cmp r0, #0
    bne @L_02040510
    mov r4, #0x14
@L_020404f8:
    mov r0, r4
    bl OS_Sleep
    mov r0, r5
    bl _ZN12SoundManager6IsIdleEv
    cmp r0, #0
    beq @L_020404f8
@L_02040510:
    ldr r5, =data_020c5e40
    mov r0, r5
    bl _ZN12SoundManager13AreBanksReadyEv
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r4, #0x14
@L_02040528:
    mov r0, r4
    bl OS_Sleep
    mov r0, r5
    bl _ZN12SoundManager13AreBanksReadyEv
    cmp r0, #0
    beq @L_02040528
    ldmia sp!, {r3, r4, r5, pc}
}
