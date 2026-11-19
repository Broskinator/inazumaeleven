#include "ov028/Unk_ov028_02165d60.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_ov028_02165d60(u8 *arg0);
extern "C" void func_ov028_02165eac(void);
extern "C" void func_ov028_02165fa8(void);
extern "C" void func_ov028_02166120(u8 *arg0);
extern "C" s32 func_ov028_0216614c(u8 *arg0);
extern "C" void func_ov028_0216623c(void);
extern "C" s32 func_ov028_02166240(u8 *arg0);
extern "C" void func_ov028_021662c4(u8 *arg0);
extern "C" void func_ov028_02166328(u8 *arg0);
extern "C" void func_ov028_0216638c(u8 *arg0);
extern "C" void func_ov028_021663e4(u8 *arg0);
extern "C" void func_ov028_0216643c(u8 *arg0);
extern "C" void func_ov028_0216648c(u8 *arg0);
extern "C" void func_ov028_021664dc(void);
extern "C" void func_ov028_0216660c(void);
extern "C" void func_ov028_02166624(void);
extern "C" void func_ov028_021666e0(void);
extern "C" void func_ov028_02166800(void);
extern "C" void func_ov028_021668f4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov028_0216691c(void *arg0, s32 arg1);
extern "C" void func_ov028_02166984(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov028_02166a18(u8 *arg0);
extern "C" void func_ov028_02166bc4(void);
extern "C" s32 func_ov028_02166bc8(...);
extern "C" void func_ov028_02166c38(u8 *arg0, u8 arg1);
extern "C" s32 func_ov028_02166c48(...);
extern "C" void func_ov028_02167420(void);
extern "C" void func_ov028_0216754c(void);
extern "C" s32 func_ov028_021679d0(...);
extern "C" void func_ov028_02167a30(void);
extern "C" s32 func_ov028_02167b0c(u8 *arg0);
extern "C" void func_ov028_02167b60(s32 arg0, s32 arg1);
extern "C" void func_ov028_02167b90(s32 arg0, s32 arg1);
extern "C" void func_ov028_02167bc4(s32 arg0, s32 arg1);
extern "C" void func_ov028_02167bec(s32 arg0, s32 arg1);
extern "C" s32 func_ov028_02167c14(u8 *arg0);
extern "C" s32 func_ov028_02167d08(...);
extern "C" s32 func_ov028_02167e30(...);
extern "C" s32 func_ov028_02167f74(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov028_02167fcc(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_ov028_02168024(s32 arg0);
extern "C" void func_ov028_0216806c(u8 *arg0);
extern "C" s32 func_ov028_02168110(...);
extern "C" void func_ov028_021681c4(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8);
extern "C" s32 func_ov028_02168288(s32 arg0);
extern "C" s32 func_ov028_02168434(...);
extern "C" s32 func_ov028_021684e8(u8 *arg0);
extern "C" s32 func_ov028_02168554(...);
extern "C" s32 func_ov028_021685f4(...);
extern "C" s32 func_ov028_021686f4(u8 *arg0);
extern "C" s32 func_ov028_02168728(u8 *arg0);
extern "C" void func_ov028_02168798(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov028_021687cc(...);

extern "C" char g3DSpriteCtrl[];
extern "C" char gFont12Manager[];
extern "C" char gSprAnimCtrl[];
extern "C" char gSprButtonCtrl[];
extern "C" char g2DGChar[];
extern "C" char g2DAdventureLogic[];
extern "C" char g3DPlaneCtrl[];
extern "C" char gKeysRepeated[];
extern "C" char gDeltaTime[];
extern "C" char data_020c4ab4[];
extern "C" char gAudioPlayer[];
extern "C" char data_020e88a0[];
extern "C" char data_ov028_0216b844[];
extern "C" char data_ov028_0216b87c[];
extern "C" char data_ov028_0216bb9c[];
extern "C" char data_ov028_0216bbb4[];
extern "C" char data_ov028_0216bbd4[];
extern "C" char data_ov028_0216bbec[];
extern "C" char data_ov028_0216bc04[];
extern "C" char data_ov028_0216bc1c[];
extern "C" char data_ov028_0216bc34[];
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" s32 _ZN13ScreenManager12SetNextSceneEii(...);
extern "C" s32 _ZN13ScreenManager8PopSceneEi(...);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" void _ZN11MatchEngine13func_0206f70cEt(void);
extern "C" void _ZN11MatchEngine13func_02076818Ev(void);
extern "C" void _ZN11MatchEngine13func_02078844Ev(void);
extern "C" void _ZN11MatchEngine13func_02078aacEiPtihi(void);
extern "C" void _ZN11MatchEngine13func_02078f14EP11MatchPlayer(void);
extern "C" void _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii(void);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12ResetSpacingEv(void);
extern "C" void _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii(void);
extern "C" s32 _Znam(...);
extern "C" void func_01ffbbb0(void);
extern "C" s32 _ffltu(...);
extern "C" s32 _ffix(...);
extern "C" s32 _fadd(...);
extern "C" s32 _fsub(...);
extern "C" void func_020255e4(void);
extern "C" void func_020802a0(void);
extern "C" void func_02080ce0(void);
extern "C" void func_02080cf0(void);
extern "C" void func_02080d00(void);
extern "C" void func_02080d10(void);
extern "C" void func_02080d20(void);
extern "C" void func_02080d30(void);
extern "C" void func_02080d40(void);
extern "C" void func_02080d50(void);
extern "C" void func_020812f4(void);
extern "C" void func_020812fc(void);
extern "C" void func_020823a0(void);
extern "C" void func_02084cac(void);
extern "C" void func_02084cf0(void);
extern "C" void func_02085bb4(void);
extern "C" void func_0208720c(void);
extern "C" void func_02087284(void);
extern "C" void func_020872a4(void);
extern "C" void func_02087b68(void);
extern "C" s32 func_02087be0(...);
extern "C" void func_0208803c(void);
extern "C" void func_02088530(void);
extern "C" s32 func_02088580(...);
extern "C" void func_020885b0(void);
extern "C" void C3DPlaneCtrl_GetTexWidth(void);
extern "C" void C3DPlaneCtrl_GetTexHeight(void);
extern "C" s32 C3DPlaneCtrl_Acquire(...);
extern "C" void C3DPlaneCtrl_Release(void);
extern "C" void C3DPlaneCtrl_Create(void);
extern "C" void C3DPlaneCtrl_Destroy(void);
extern "C" s32 C3DPlaneCtrl_SetTex(...);
extern "C" s32 C3DPlaneCtrl_SetDepth(...);
extern "C" s32 C3DPlaneCtrl_SetPos(...);
extern "C" void C3DPlaneCtrl_SetTexWH(void);
extern "C" void C3DPlaneCtrl_SetTexST(void);
extern "C" s32 C3DPlaneCtrl_SetFlag(...);
extern "C" s32 C3DPlaneCtrl_SetGraphicIdx(...);
extern "C" s32 C3DPlaneCtrl_SetColorMask(...);
extern "C" s32 func_02095ea4(...);
extern "C" void C3DSprFile_TryFinalize(void);
extern "C" void C3DSprFile_Release(void);
extern "C" void C3DSprFile_IsInVram(void);
extern "C" void C3DSprFile_LoadToVram(void);
extern "C" void C3DSprFile_UploadTex(void);
extern "C" void C3DSprFile_AllocTexBuffer(void);
extern "C" void C3DSprFile_CreateTex16(void);
extern "C" void func_0209a3b0(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" s32 func_ov015_02130b14(...);
extern "C" void func_ov015_0213192c(void);
extern "C" void func_ov015_021319bc(void);
extern "C" s32 Graphics_FadeScreensBlack(...);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" s32 Archive_TryFinalize(...);
extern "C" void Archive_Close(void);
extern "C" void Archive_Deallocate(void);
extern "C" s32 func_ov015_02135ea0(...);
extern "C" s32 func_ov015_02135ef4(...);
extern "C" void func_ov015_02136080(void);
extern "C" s32 func_ov015_02136134(...);
extern "C" s32 func_ov015_021362b8(...);
extern "C" s32 func_ov015_02136330(...);
extern "C" void func_ov015_021363e8(void);
extern "C" s32 func_ov015_021616a4(...);
extern "C" void func_ov015_021616dc(void);
extern "C" s32 func_ov015_02161710(...);
extern "C" s32 func_ov015_02161760(...);
extern "C" void func_ov015_02161d00(void);
extern "C" void func_ov015_02161d24(void);
extern "C" void func_ov015_02161dd4(void);
extern "C" s32 func_ov015_02161f84(...);
extern "C" void func_ov015_02161fdc(void);
extern "C" void func_ov015_02162260(void);
extern "C" s32 func_ov015_021624f0(...);
extern "C" void func_ov015_02162750(void);
extern "C" void func_ov015_021629ac(void);
extern "C" s32 func_ov015_021629c8(...);
extern "C" void func_ov015_021629d0(void);
extern "C" void func_ov015_02162f70(void);
extern "C" void func_ov015_02163040(void);
extern "C" s32 func_ov028_02168e14(...);
extern "C" void func_ov028_02169510(void);
extern "C" s32 func_ov028_02169658(...);
extern "C" void func_ov028_02169710(void);
extern "C" s32 func_ov028_021697cc(...);
extern "C" s32 func_ov028_02169838(...);
extern "C" s32 func_ov028_0216984c(...);
extern "C" s32 func_ov028_021698bc(...);
extern "C" s32 func_ov028_02169aa4(...);
extern "C" s32 func_ov028_02169bb0(...);
extern "C" s32 func_ov028_02169c54(...);
extern "C" s32 func_ov028_02169d1c(...);
extern "C" s32 func_ov028_02169de8(...);
extern "C" s32 func_ov028_02169e14(...);
extern "C" s32 func_ov028_02169f8c(...);
extern "C" void func_ov028_0216a000(void);
extern "C" s32 func_ov028_0216a114(...);
extern "C" void func_ov028_0216a178(void);
extern "C" s32 func_ov028_0216a1ac(...);
extern "C" s32 func_ov028_0216a2f0(...);
extern "C" s32 func_ov028_0216a308(...);
extern "C" s32 func_ov028_0216a448(...);
extern "C" void func_ov028_0216a534(void);
extern "C" s32 func_ov028_0216a56c(...);
extern "C" s32 func_ov028_0216a588(...);
extern "C" s32 func_ov028_0216a614(...);
extern "C" s32 func_ov028_0216a6b8(...);
extern "C" s32 func_ov028_0216a75c(...);
extern "C" s32 func_ov028_0216a7a4(...);
extern "C" void func_ov028_0216a914(void);
extern "C" s32 func_ov028_0216a99c(...);
extern "C" s32 func_ov028_0216aae8(...);
extern "C" s32 func_ov028_0216ac38(...);
extern "C" s32 func_ov028_0216aeb0(...);
extern "C" void func_ov028_0216b1f0(void);

extern "C" s32 func_ov028_02165d60(u8 *arg0)
{
    s32 v16;
    s32 v18;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t4;
    s32 t5;
    t0 = ((u32)(*(s32 *)(((u8 *)0x4000000)) & 0x1F00) >> 8);
    *(s32 *)(arg0 + 0x30) = t0;
    t1 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    func_ov015_02161f84(t1, t0);
    t2 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    func_ov015_021616a4(t2);
    ((VCall *)arg0)->f17();
    MI_CpuFill8((s32)(arg0 + 8), 0, 0x20);
    *(s32 *)(arg0 + 0x28) = 0;
    *(u8 *)(arg0 + 0x2C) = 0;
    *(u8 *)(arg0 + 0x2D) = 0;
    *(s32 *)(arg0 + 0x34) = 0;
    *(s32 *)(arg0 + 0x38) = 0;
    *(s32 *)(arg0 + 0x8) = 1;
    *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x61C) = 0;
    func_ov028_021679d0((s32)arg0);
    *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x170) = 0;
    *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x174) = 0;
    func_ov028_02167b60((s32)arg0, 0);
    func_ov028_02167b60((s32)arg0, 1);
    func_ov028_02167b90((s32)arg0, 0);
    func_ov028_02167b90((s32)arg0, 1);
    func_ov028_02168024((s32)arg0);
    func_ov028_02169de8((s32)arg0);
    func_ov028_0216a56c((s32)arg0);
    func_ov028_021697cc((s32)arg0);
    func_ov028_0216a2f0((s32)arg0);
    func_ov028_0216a75c((s32)arg0);
    MI_CpuFill8((s32)((arg0 + 0x130) + 0x3000), 0, 8);
    *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x688) = 0;
    t4 = (*(s32 *)(((u8 *)&data_020e88a0) + 0xC24) << 2);
    v16 = _Znam(t4);
    *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x128) = v16;
    t5 = (*(s32 *)(((u8 *)&data_020e88a0) + 0xC24) << 2);
    MI_CpuFill8(v16, 0, t5);
    v18 = func_ov028_02166c48((s32)arg0);
    return v18;
}

extern "C" asm void func_ov028_02165eac(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldr r1, =g2DAdventureLogic
    mov r6, r0
    mov r4, #0
    ldr r0, [r1]
    mov r1, r4
    bl func_02085bb4
    mov r5, r0
    bl func_02084cf0
    add r3, sp, #0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, #0x4000000
    ldr r0, [r1]
    ldr r2, [r6, #0x30]
    bic r0, r0, #0x1f00
    orr r2, r0, r2, lsl #8
    ldr r0, =gSprButtonCtrl
    str r2, [r1]
    ldr r0, [r0]
    bl func_ov015_02161fdc
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_021616dc
    mov r0, r6
    bl func_ov028_02169510
    mov r0, r6
    bl func_ov028_0216806c
    mov r0, r6
    mov r1, r4
    bl func_ov028_02167bc4
    mov r7, #1
    mov r0, r6
    mov r1, r7
    bl func_ov028_02167bc4
    mov r0, r6
    mov r1, r4
    bl func_ov028_02167bec
    mov r1, r7
    mov r0, r6
    bl func_ov028_02167bec
    mov r0, r6
    mov r1, #2
    bl func_ov028_02167a30
    mov r0, r6
    bl func_ov028_0216b1f0
    add r0, r6, #0x3000
    ldr r0, [r0, #0x128]
    cmp r0, #0
    beq @L_02165f84
    bl func_020255e4
    add r0, r6, #0x3000
    str r4, [r0, #0x128]
@L_02165f84:
    add r1, sp, #0
    mov r0, r5
    ldmia r1, {r1, r2, r3}
    bl func_02084cac
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov028_02165fa8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldrb r0, [r5, #0x2c]
    mov r4, r1
    cmp r0, #6
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r5, #0x3000
    ldr r1, [r0, #0x5d8]
    cmp r1, #0
    ldreq r1, [r0, #0x5f4]
    cmpeq r1, #0
    ldreq r1, [r0, #0x63c]
    cmpeq r1, #0
    ldreq r1, [r0, #0x684]
    cmpeq r1, #0
    ldreq r0, [r0, #0x648]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =gKeysRepeated
    ldr r6, =gSprButtonCtrl
    ldrh r1, [r0]
    ldr r0, [r6]
    orr r1, r1, r4
    mov r1, r1, lsl #0x10
    mov r7, r1, lsr #0x10
    bl func_ov015_021629ac
    cmp r0, #1
    bne @L_0216604c
    ldr r0, [r6]
    add r0, r0, #0xf00
    ldrh r4, [r0, #0x38]
    cmp r4, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0
    mov r7, r4
    strh r1, [r0, #0x38]
@L_0216604c:
    tst r4, #1
    beq @L_02166060
    mov r0, r5
    bl func_ov028_02166120
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166060:
    tst r4, #2
    beq @L_02166074
    mov r0, r5
    bl func_ov028_0216614c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166074:
    tst r4, #0x800
    beq @L_02166088
    mov r0, r5
    bl func_ov028_0216623c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166088:
    tst r4, #0x400
    beq @L_0216609c
    mov r0, r5
    bl func_ov028_02166240
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0216609c:
    tst r4, #0x200
    beq @L_021660b0
    mov r0, r5
    bl func_ov028_021662c4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021660b0:
    tst r4, #0x100
    beq @L_021660c4
    mov r0, r5
    bl func_ov028_02166328
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021660c4:
    tst r4, #0x20
    beq @L_021660d8
    mov r0, r5
    bl func_ov028_0216638c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021660d8:
    tst r4, #0x10
    beq @L_021660ec
    mov r0, r5
    bl func_ov028_021663e4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021660ec:
    tst r7, #0x40
    beq @L_02166100
    mov r0, r5
    bl func_ov028_0216643c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166100:
    tst r7, #0x80
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    bl func_ov028_0216648c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov028_02166120(u8 *arg0)
{
    s32 r1;
    r1 = *(u8 *)(arg0 + 0x2D);
    switch (r1) {
        default:
            return;
        case 0:
            func_ov028_0216ac38((s32)arg0, r1);
            return;
        case 1:
            func_ov028_0216aeb0((s32)arg0, r1);
            return;
    }
}

extern "C" s32 func_ov028_0216614c(u8 *arg0)
{
    s32 r1;
    s32 r2;
    s32 r3;
    s32 v7;
    s32 t0;
    s32 t1;
    s32 t2;
    r1 = *(u8 *)(arg0 + 0x2D);
    switch (r1) {
        case 0:
            func_ov028_02168798(arg0, 0, 0);
            break;
        case 1:
            r2 = *(s32 *)(arg0 + 0x3614);
            if (r2 != 0) {
                r2 = *(s32 *)(arg0 + 0x3618);
                switch (r2) {
                    case 0:
                        r3 = *(s32 *)(arg0 + 0x3638);
                        r2 = *(s32 *)(arg0 + 0x3620);
                        if (r3 == r2)
                            break;
                        *(s32 *)(arg0 + 0x3620) = r3;
                        func_ov028_02169f8c((s32)arg0, (s32)(arg0 + 0x3000), r2, r3);
                        func_ov028_02169658((s32)arg0);
                        func_ov028_021687cc((s32)arg0);
                        break;
                    case 1:
                        r2 = *(s32 *)(arg0 + 0x364C);
                        if (r2 == *(s32 *)(arg0 + 0x3644))
                            break;
                        *(s32 *)(arg0 + 0x3644) = r2;
                        *(s32 *)(arg0 + 0x3648) = 1;
                        break;
                }
                t0 = *(s32 *)(arg0 + 0x3614);
                t1 = *(s32 *)(arg0 + 0x3618);
                func_ov028_02169aa4((s32)arg0, t0, t1);
                t2 = *(s32 *)(arg0 + 0x3618);
                *(s32 *)(arg0 + 0x3614) = 0;
                *(s32 *)(arg0 + 0x361C) = t2;
                r2 = 0;
            }
            ((s32 (*)(...))func_ov028_02166c38)((s32)arg0, 0, r2);
            break;
    }
    ((s32 (*)(...))func_ov028_0216660c)((s32)arg0, 10);
    v7 = _ZN12SoundManager9PlaySoundEi((u8 *)((u8 *)&gAudioPlayer), 4);
    return v7;
}

extern "C" void func_ov028_0216623c(void)
{
}

extern "C" s32 func_ov028_02166240(u8 *arg0)
{
    s32 r0;
    s32 r1;
    s32 r2;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 t0;
    t0 = *(s32 *)(((u8 *)&gSprButtonCtrl));
    v0 = func_ov015_021629c8(t0, (s32)((u8 *)&gSprButtonCtrl));
    r0 = v0;
    r1 = *(s32 *)(arg0 + 0x28);
    r2 = (v0 - 8);
    if ((r1 == r2 && r0 != 8)) {
        if (r0 != 9)
            return r0;
    }
    v1 = func_ov028_02169d1c((s32)arg0, r1, r2);
    if (v1 == 0) {
        v2 = _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 9);
        return v2;
    } else {
        r0 = *(u8 *)(arg0 + 0x2D);
        if (r0 != 0) {
            if (r0 != 1)
                return r0;
        }
        *(s32 *)(arg0 + 0x363C) = 1;
        v3 = _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 1, (s32)(arg0 + 0x3000));
        return v3;
    }
}

extern "C" void func_ov028_021662c4(u8 *arg0)
{
    if (*(u8 *)(arg0 + 0x2D) > 1)
        return;
    *(s32 *)(arg0 + 0x3644) = (*(s32 *)(arg0 + 0x3644) + 0xC) % 0xD;
    *(s32 *)(arg0 + 0x3648) = 1;
    ((void (*)(u8 *, s32))func_ov028_0216660c)(arg0, 6);
    ((void (*)(void *, s32))_ZN12SoundManager9PlaySoundEi)(gAudioPlayer, 1);
}

extern "C" void func_ov028_02166328(u8 *arg0)
{
    if (*(u8 *)(arg0 + 0x2D) > 1)
        return;
    *(s32 *)(arg0 + 0x3644) = (*(s32 *)(arg0 + 0x3644) + 1) % 0xD;
    *(s32 *)(arg0 + 0x3648) = 1;
    ((void (*)(u8 *, s32))func_ov028_0216660c)(arg0, 7);
    ((void (*)(void *, s32))_ZN12SoundManager9PlaySoundEi)(gAudioPlayer, 1);
}

extern "C" void func_ov028_0216638c(u8 *arg0)
{
    s32 t0;
    s32 t1;
    if ((u32)*(u8 *)(arg0 + 0x2D) > (u32)1)
        return;
    t0 = (*(s32 *)(arg0 + 0x361C) ^ 1);
    *(s32 *)(arg0 + 0x361C) = t0;
    t1 = (*(s32 *)(arg0 + 0x361C) * 0x88);
    func_ov028_021698bc((s32)arg0, t1, 0x20, 0x10, 0, 7);
    return;
}

extern "C" void func_ov028_021663e4(u8 *arg0)
{
    s32 t0;
    s32 t1;
    if ((u32)*(u8 *)(arg0 + 0x2D) > (u32)1)
        return;
    t0 = (*(s32 *)(arg0 + 0x361C) ^ 1);
    *(s32 *)(arg0 + 0x361C) = t0;
    t1 = (*(s32 *)(arg0 + 0x361C) * 0x88);
    func_ov028_021698bc((s32)arg0, t1, 0x20, 0x10, 0, 7);
    return;
}

extern "C" void func_ov028_0216643c(u8 *arg0)
{
    s32 t0;
    if ((*(u8 *)(arg0 + 0x2D) != 0 && *(u8 *)(arg0 + 0x2D) != 1))
        return;
    t0 = (*(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x61C) * 0x88);
    func_ov028_021698bc((s32)arg0, t0, 0x20, 0x10, -1, 7);
    return;
}

extern "C" void func_ov028_0216648c(u8 *arg0)
{
    s32 t0;
    if ((*(u8 *)(arg0 + 0x2D) != 0 && *(u8 *)(arg0 + 0x2D) != 1))
        return;
    t0 = (*(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x61C) * 0x88);
    func_ov028_021698bc((s32)arg0, t0, 0x20, 0x10, 1, 7);
    return;
}

extern "C" asm void func_ov028_021664dc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, =g3DPlaneCtrl
    mov r10, r0
    ldr r0, [r4]
    mov r11, #2
    mov r9, r1
    mov r5, #1
    mov r8, r2
    mov r1, r11
    mov r2, r5
    mov r7, r3
    mov r6, #0
    bl C3DPlaneCtrl_Create
    add r1, r10, r9, lsl #2
    add r2, r10, r8, lsl #2
    add r1, r1, #0x3000
    str r0, [r1, #0x1d4]
    add r1, r2, #0x3000
    ldr r1, [r1, #0x178]
    mov r8, r0
    and r3, r1, #0xff
    ldr r0, [r4]
    mov r1, r8
    mov r2, r5
    bl C3DPlaneCtrl_SetTex
    str r6, [sp]
    ldr r0, [r4]
    mov r3, r7
    mov r1, r8
    mov r2, r5
    bl C3DPlaneCtrl_SetGraphicIdx
    ldr r0, [sp, #0x34]
    ldr r3, [sp, #0x30]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    mov r3, r3, lsl #0x10
    ldr r0, [r4]
    mov r1, r8
    mov r2, r5
    mov r3, r3, asr #0x10
    bl C3DPlaneCtrl_SetPos
    ldr r3, [sp, #0x3c]
    ldr r0, [r4]
    mov r3, r3, lsl #0x10
    mov r1, r8
    mov r2, r5
    mov r3, r3, lsr #0x10
    bl C3DPlaneCtrl_SetDepth
    str r5, [sp]
    ldr r0, [r4]
    mov r3, r11
    mov r1, r8
    mov r2, r5
    bl C3DPlaneCtrl_SetFlag
    ldr r2, [sp, #0x38]
    str r5, [sp]
    mov r0, #0x190
    str r0, [sp, #4]
    ldr r0, =gSprButtonCtrl
    mov r2, r2, lsl #0x10
    ldr r0, [r0]
    mov r3, r8
    mov r1, r5
    mov r2, r2, lsr #0x10
    bl func_ov015_02163040
    cmp r0, #0
    strneb r6, [r0, #0x10]
    strneb r6, [r0, #0xf]
    strneh r6, [r0, #0xc]
    strneb r6, [r0, #0x11]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov028_0216660c(void)
{
    func_ov015_021624f0(*(s32 *)(gSprButtonCtrl));
}

extern "C" asm void func_ov028_02166624(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r4, [sp, #0x20]
    ldr r5, =gSprButtonCtrl
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
    ldr r0, =g3DPlaneCtrl
    str r5, [sp]
    add r1, r1, #0x3000
    mov r8, #1
    ldr r0, [r0]
    ldr r1, [r1, #0x1d4]
    mov r2, r8
    mov r3, r7
    bl C3DPlaneCtrl_SetGraphicIdx
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

extern "C" asm void func_ov028_021666e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    ldrb r0, [r5, #0x2c]
    mov r4, r1
    cmp r0, #6
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =gSprAnimCtrl
    ldr r0, [r0]
    bl func_ov015_02161760
    cmp r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r5, #0x3000
    ldr r1, [r0, #0x5d8]
    cmp r1, #0
    ldreq r1, [r0, #0x5f4]
    cmpeq r1, #0
    ldreq r1, [r0, #0x63c]
    cmpeq r1, #0
    ldreq r1, [r0, #0x684]
    cmpeq r1, #0
    ldreq r0, [r0, #0x648]
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r6, =gSprButtonCtrl
    mov r7, #1
    ldr r0, [r6]
    mov r1, r4
    mov r2, r7
    bl func_ov015_02162750
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    b @L_02166778
    b @L_021667a8
    b @L_021667c0
    b @L_021667dc
    b @L_02166790
@L_02166778:
    ldr r0, [r6]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r5
    bl func_ov028_02166800
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166790:
    ldr r0, [r6]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r5
    bl func_ov028_021668f4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021667a8:
    ldr r0, [r6]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r5
    bl func_ov028_0216691c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021667c0:
    ldr r0, [r6]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r5
    mov r2, #0
    bl func_ov028_02166984
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021667dc:
    ldr r0, [r6]
    bl func_ov015_021629c8
    mov r1, r0
    mov r0, r5
    mov r2, r7
    bl func_ov028_02166984
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov028_02166800(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    add r2, r8, #0x3000
    mov r7, r1
    ldr r6, [r2, #0x5d0]
    cmp r7, #5
    sub r4, r7, #0xc
    sub r5, r7, #0x15
    addls pc, pc, r7, lsl #2
    b @L_02166854
    b @L_02166854
    b @L_02166848
    b @L_02166848
    b @L_02166848
    b @L_02166848
    b @L_02166840
@L_02166840:
    bl func_ov028_0216a178
    b @L_02166854
@L_02166848:
    mov r3, #0
    str r3, [r2, #0x628]
    bl func_ov028_0216a000
@L_02166854:
    cmp r7, #0xc
    blt @L_021668a4
    cmp r7, #0x14
    bgt @L_021668a4
    cmp r4, r6
    addeq r0, r8, #0x3000
    ldreq r0, [r0, #0x61c]
    cmpeq r0, #0
    bne @L_02166884
    mov r0, r8
    bl func_ov028_02166120
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166884:
    mov r4, #0
    mov r0, r8
    mov r1, r7
    mov r2, r4
    bl func_ov028_02169aa4
    add r0, r8, #0x3000
    str r4, [r0, #0x61c]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021668a4:
    cmp r7, #0x15
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r7, #0x1d
    ldmgtia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r5, r6
    addeq r0, r8, #0x3000
    ldreq r0, [r0, #0x61c]
    cmpeq r0, #1
    bne @L_021668d4
    mov r0, r8
    bl func_ov028_02166120
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021668d4:
    mov r4, #1
    mov r0, r8
    mov r1, r7
    mov r2, r4
    bl func_ov028_02169aa4
    add r0, r8, #0x3000
    str r4, [r0, #0x61c]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov028_021668f4(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if ((arg1 != 2 && arg1 != 3)) {
        if (arg1 != 5)
            return;
        func_ov028_0216a1ac();
        return;
    }
    func_ov028_0216a114();
    return;
}

extern "C" void func_ov028_0216691c(void *arg0, s32 arg1)
{
    switch (arg1) {
    case 10:
        ((s32 (*)(...))func_ov028_0216614c)(arg0);
        break;
    case 11:
        ((s32 (*)(...))func_ov028_02166120)(arg0);
        break;
    case 8:
    case 9:
        ((s32 (*)(...))func_ov028_02166240)(arg0);
        break;
    case 6:
        ((s32 (*)(...))func_ov028_021662c4)(arg0);
        break;
    case 7:
        ((s32 (*)(...))func_ov028_02166328)(arg0);
        break;
    }
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov028_02166984(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 q;
    s16 p[2];
    q = 0;
    ((s32 (*)(...))func_ov015_021629d0)(*((s32 *)gSprButtonCtrl), p);
    ((s32 (*)(...))func_ov015_02162260)(*((s32 *)gSprButtonCtrl), p[0], p[1], &q, 0);
    if (arg2 == 0) {
        if ((arg0[0x2D] == 0 || arg0[0x2D] == 1) && arg1 == 5)
            ((s32 (*)(...))func_ov028_0216a1ac)(arg0);
    } else {
        *(s32 *)(arg0 + 0x3688) = 0;
    }
}
#pragma pop

extern "C" s32 func_ov028_02166a18(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 v10;
    s32 v12;
    s32 v14;
    s32 v23;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    r4 = arg0;
    r1 = *(u8 *)(arg0 + 0x2C);
    switch (r1) {
        case 0:
            ((s32 (*)(...))func_ov028_02167b0c)((s32)arg0, r1);
            break;
        case 1:
            ((s32 (*)(...))func_ov028_02167c14)((s32)arg0, r1);
            break;
        case 2:
            func_ov028_02168110((s32)arg0, r1);
            break;
        case 3:
            func_ov028_02168434((s32)arg0, r1);
            break;
        case 4:
            ((s32 (*)(...))func_ov028_021684e8)((s32)arg0, r1);
            break;
        case 5:
            func_ov028_021685f4((s32)arg0, r1);
            break;
        case 7:
            ((s32 (*)(...))func_ov028_021686f4)((s32)arg0, r1);
            break;
        case 8:
            ((s32 (*)(...))func_ov028_02168728)((s32)arg0, r1);
            break;
    }
    func_ov028_02166bc8((s32)r4);
    t0 = *(s32 *)(((u8 *)&gSprAnimCtrl));
    t1 = *(s32 *)(((u8 *)&gDeltaTime));
    func_ov015_02161710(t0, t1);
    arg0 = (u8 *)(*(s32 *)(((u8 *)&gDeltaTime)) << 0xC);
    if (*(s32 *)(((u8 *)&gDeltaTime)) != 0) {
        v10 = _ffltu((s32)arg0);
        _fadd(0x3F000000, v10);
    } else {
        v12 = _ffltu((s32)arg0);
        _fsub(v12, 0x3F000000);
    }
    v14 = _ffix();
    t2 = *(s32 *)(((u8 *)&g3DSpriteCtrl));
    func_02095ea4(t2, v14, (s32)((u8 *)&g3DSpriteCtrl));
    if (*(u8 *)(r4 + 0x2C) == 6) {
        t3 = *(s32 *)(((u8 *)&g2DGChar));
        func_02087be0(t3);
    }
    if (*(s32 *)(r4 + 0x3684) != 0) {
        func_ov028_02167d08((s32)r4);
    }
    if (*(s32 *)(r4 + 0x3648) != 0) {
        func_ov028_02167e30((s32)r4);
    }
    if (*(s32 *)(r4 + 0x35D8) != 0) {
        func_ov028_02169bb0((s32)r4);
    }
    if (*(s32 *)(r4 + 0x35F4) != 0) {
        func_ov028_02169c54((s32)r4);
    }
    if (*(s32 *)(r4 + 0x363C) != 0) {
        func_ov028_0216a614((s32)r4);
    }
    if (*(s32 *)(r4 + 0x3650) != 0) {
        func_ov028_0216a99c((s32)r4);
    }
    if (*(s32 *)(r4 + 0x3668) == 0)
        return *(s32 *)(r4 + 0x3668);
    v23 = func_ov028_0216aae8((s32)r4);
    return v23;
}

extern "C" void func_ov028_02166bc4(void)
{
}

extern "C" asm s32 func_ov028_02166bc8(...)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    ldr r1, =data_ov028_0216b844
    mov r4, r0
    ldr r12, [r1]
    ldr r3, [r1, #4]
    ldr r1, [r4, #0x28]
    add r2, sp, #0
    str r12, [sp]
    str r3, [sp, #4]
    ldr r1, [r2, r1, lsl #2]
    str r1, [r4, #8]
    bl func_ov028_02169d1c
    strh r0, [r4, #0xc]
    ldrh r0, [r4, #0xc]
    cmp r0, #0
    moveq r0, #1
    moveq r1, #0
    streqb r0, [r4, #0x15]
    streq r1, [r4, #8]
    ldr r0, [r4, #4]
    add r1, r4, #8
    ldr r2, [r0]
    ldr r2, [r2, #0x3c]
    blx r2
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov028_02166c38(u8 *arg0, u8 arg1)
{
    *(u8 *)(arg0 + 0x2D) = arg1;
    *(u8 *)(arg0 + 0x2C) = 5;
}

extern "C" asm s32 func_ov028_02166c48(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xe8
    mov r5, #0
    add r9, sp, #0x18
    mov r6, r0
    mov r0, r9
    mov r1, r5
    mov r2, #0xd0
    bl MI_CpuFill8
    add r0, sp, #0x10
    mov r1, r5
    mov r2, #8
    bl MI_CpuFill8
    mov r4, #0x5c0
    add r0, r6, #0x3c
    mov r1, r5
    mov r2, r4
    bl MI_CpuFill8
    add r0, r6, #0x1fc
    mov r2, r4
    add r0, r0, #0x400
    mov r1, r5
    bl MI_CpuFill8
    add r0, r6, #0x3bc
    ldr r2, =0x2560
    add r0, r0, #0x800
    mov r1, r5
    bl MI_CpuFill8
    add r0, r6, #0x3000
    ldr r11, =data_020e88a0
    strb r5, [r0, #0x11c]
    str r5, [r0, #0x120]
    str r5, [r0, #0x12c]
    mov r1, r5
    mov r0, r11
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r4, r0
    bl func_ov015_021319bc
    bl func_ov015_0213192c
    mov r2, r0
    ldrh r1, [r4, #0x22]
    mov r0, r11
    mov r3, r5
    bl func_01ffbbb0
    add r0, r6, #0x12c
    add r1, r6, #0x11c
    mov r10, r5
    add r8, r0, #0x3000
    add r7, r1, #0x3000
    add r4, r6, #0x3000
@L_02166d10:
    mov r0, r10
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02166dbc
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, #1
    moveq r1, #0
    cmp r1, #1
    bne @L_02166dbc
    ldrb r2, [r4, #0x11c]
    ldrh r1, [r0, #0x42]
    mov r0, r11
    mov r2, r2, lsl #1
    strh r1, [r9, r2]
    bl _ZN11MatchEngine13func_0206f70cEt
    ldr r2, [r4, #0x128]
    ldr r1, [r4, #0x12c]
    str r0, [r2, r1, lsl #2]
    ldr r1, [r4, #0x128]
    ldr r0, [r4, #0x12c]
    ldr r0, [r1, r0, lsl #2]
    cmp r0, #0
    beq @L_02166dac
    ldrb r1, [r4, #0x11c]
    mov r0, r11
    mov r2, #0
    mov r1, r1, lsl #1
    ldrh r1, [r9, r1]
    bl func_020823a0
    ldrb r0, [r4, #0x11c]
    ldr r2, [r4, #0x128]
    ldr r1, [r4, #0x12c]
    mov r0, r0, lsl #1
    ldr r1, [r2, r1, lsl #2]
    strh r1, [r9, r0]
    ldr r0, [r8]
    add r0, r0, #1
    str r0, [r8]
@L_02166dac:
    ldrb r0, [r7]
    add r5, r5, #1
    add r0, r0, #1
    strb r0, [r7]
@L_02166dbc:
    add r10, r10, #1
    cmp r10, #0x10
    blt @L_02166d10
    add r0, r6, #0x12c
    add r1, r6, #0x11c
    mov r11, #0
    mov r10, #0x20
    add r8, r0, #0x3000
    add r7, r1, #0x3000
    add r4, r6, #0x3000
    add r9, sp, #0x18
@L_02166de8:
    mov r0, r10
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02166e90
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, #1
    moveq r1, r11
    cmp r1, #1
    bne @L_02166e90
    ldrb r2, [r4, #0x11c]
    ldrh r1, [r0, #0x42]
    ldr r0, =data_020e88a0
    mov r2, r2, lsl #1
    strh r1, [r9, r2]
    bl _ZN11MatchEngine13func_0206f70cEt
    ldr r2, [r4, #0x128]
    ldr r1, [r4, #0x12c]
    str r0, [r2, r1, lsl #2]
    ldr r1, [r4, #0x128]
    ldr r0, [r4, #0x12c]
    ldr r0, [r1, r0, lsl #2]
    cmp r0, #0
    beq @L_02166e84
    ldrb r1, [r4, #0x11c]
    ldr r0, =data_020e88a0
    mov r2, r11
    mov r1, r1, lsl #1
    ldrh r1, [r9, r1]
    bl func_020823a0
    ldrb r0, [r4, #0x11c]
    ldr r2, [r4, #0x128]
    ldr r1, [r4, #0x12c]
    mov r0, r0, lsl #1
    ldr r1, [r2, r1, lsl #2]
    strh r1, [r9, r0]
    ldr r0, [r8]
    add r0, r0, #1
    str r0, [r8]
@L_02166e84:
    ldrb r0, [r7]
    add r0, r0, #1
    strb r0, [r7]
@L_02166e90:
    add r10, r10, #1
    cmp r10, #0x84
    blt @L_02166de8
    add r11, sp, #0x18
    mov r0, r6
    mov r1, r11
    mov r9, #1
    bl func_ov028_02167420
    cmp r5, #0
    mov r7, #0
    ble @L_02167070
    add r0, r6, #0x1fc
    add r8, r0, #0x400
@L_02166ec4:
    mov r0, r7, lsl #1
    ldrh r0, [r11, r0]
    mov r1, #0
    bl func_ov015_02130b14
    movs r4, r0
    beq @L_02167064
    ldrh r0, [r4, #0xf0]
    tst r0, #1
    movne r0, r9
    moveq r0, #0
    cmp r0, #1
    bne @L_02167064
    mov r0, #0x5c
    mul r10, r7, r0
    add r0, r4, #0x20
    add r1, r8, r10
    mov r2, #0x10
    bl MI_CpuCopy8
    ldr r0, =data_020e88a0
    add r10, r6, r10
    mov r1, r4
    mov r2, #0x25
    mov r3, #0
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    str r0, [r10, #0x60c]
    mov r0, r7, lsl #1
    ldrh r1, [r11, r0]
    add r3, r10, #0x600
    ldr r2, =0xfff
    strh r1, [r3, #0x10]
    ldrh r12, [r4, #0x42]
    ldr r0, =data_020e88a0
    mov r1, r4
    and r2, r12, r2
    strh r2, [r3, #0x12]
    bl _ZN11MatchEngine13func_02078f14EP11MatchPlayer
    add r1, r10, #0x600
    strh r0, [r1, #0x14]
    mov r0, r4
    bl func_020802a0
    add r1, r10, #0x600
    strh r0, [r1, #0x16]
    mov r0, r4
    bl func_020812f4
    str r0, [r10, #0x618]
    mov r0, r4
    bl func_020812fc
    str r0, [r10, #0x61c]
    ldrh r0, [r4, #0xf0]
    tst r0, #0x400
    movne r0, r9
    moveq r0, #0
    strb r0, [r10, #0x625]
    strb r9, [r10, #0x626]
    mov r0, #0
    str r0, [r10, #0x620]
    mov r0, r4
    bl func_02080ce0
    cmp r0, #0
    ldrne r0, [r10, #0x620]
    orrne r0, r0, #0x20
    strne r0, [r10, #0x620]
    mov r0, r4
    bl func_02080cf0
    cmp r0, #0
    ldrne r0, [r10, #0x620]
    orrne r0, r0, #0x40
    strne r0, [r10, #0x620]
    mov r0, r4
    bl func_02080d00
    cmp r0, #0
    ldrne r0, [r10, #0x620]
    orrne r0, r0, #0x80
    strne r0, [r10, #0x620]
    mov r0, r4
    bl func_02080d10
    cmp r0, #0
    ldrne r0, [r10, #0x620]
    orrne r0, r0, #0x100
    strne r0, [r10, #0x620]
    mov r0, r4
    bl func_02080d20
    cmp r0, #0
    ldrne r0, [r10, #0x620]
    orrne r0, r0, #0x200
    strne r0, [r10, #0x620]
    mov r0, r4
    bl func_02080d30
    cmp r0, #0
    ldrne r0, [r10, #0x620]
    orrne r0, r0, #0x400
    strne r0, [r10, #0x620]
    mov r0, r4
    bl func_02080d40
    cmp r0, #0
    ldrne r0, [r10, #0x620]
    orrne r0, r0, #0x800
    strne r0, [r10, #0x620]
    mov r0, r4
    bl func_02080d50
    cmp r0, #0
    ldrne r0, [r10, #0x620]
    orrne r0, r0, #0x1000
    strne r0, [r10, #0x620]
@L_02167064:
    add r7, r7, #1
    cmp r7, r5
    blt @L_02166ec4
@L_02167070:
    cmp r5, #0x10
    mov r7, #0x5c
    ldr r8, =data_020e88a0
    mov r11, #1
    mov r9, #0
    cmplt r5, #0x10
    bge @L_021670a0
@L_0216708c:
    mla r0, r5, r7, r6
    add r5, r5, #1
    str r9, [r0, #0x618]
    cmp r5, #0x10
    blt @L_0216708c
@L_021670a0:
    add r0, r6, #0x3000
    str r0, [sp, #0xc]
    ldrb r0, [r0, #0x11c]
    mov r5, #0
    cmp r0, #0
    ble @L_02167368
    add r0, r6, #0x3bc
    add r0, r0, #0x800
    add r1, r6, #0xe7
    str r0, [sp, #4]
    add r0, r1, #0xb00
    str r0, [sp, #8]
@L_021670d0:
    mov r1, r5, lsl #1
    add r0, sp, #0x18
    ldrh r0, [r0, r1]
    mov r1, r9
    bl func_ov015_02130b14
    movs r4, r0
    beq @L_02167354
    ldrh r0, [r4, #0xf0]
    tst r0, #1
    movne r0, r11
    moveq r0, r9
    cmp r0, #1
    bne @L_02167354
    mul r10, r5, r7
    ldr r1, [sp, #4]
    add r0, r4, #0x20
    add r1, r1, r10
    mov r2, #0x10
    bl MI_CpuCopy8
    add r10, r6, r10
    mov r0, r8
    mov r1, r4
    mov r2, #0x25
    mov r3, r9
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    str r0, [r10, #0xbcc]
    mov r1, r5, lsl #1
    add r0, sp, #0x18
    ldrh r1, [r0, r1]
    add r3, r10, #0xb00
    ldr r2, =0xfff
    strh r1, [r3, #0xd0]
    ldrh r12, [r4, #0x42]
    mov r0, r8
    mov r1, r4
    and r2, r12, r2
    strh r2, [r3, #0xd2]
    bl _ZN11MatchEngine13func_02078f14EP11MatchPlayer
    add r1, r10, #0xb00
    strh r0, [r1, #0xd4]
    mov r0, r4
    bl func_020802a0
    add r1, r10, #0xb00
    strh r0, [r1, #0xd6]
    mov r0, r4
    bl func_020812f4
    str r0, [r10, #0xbd8]
    mov r0, r4
    bl func_020812fc
    str r0, [r10, #0xbdc]
    ldrh r0, [r4, #0xf0]
    tst r0, #0x400
    movne r0, r11
    moveq r0, r9
    strb r0, [r10, #0xbe5]
    strb r11, [r10, #0xbe6]
    str r9, [r10, #0xbe0]
    mov r0, r4
    bl func_02080ce0
    cmp r0, #0
    ldrne r0, [r10, #0xbe0]
    orrne r0, r0, #0x20
    strne r0, [r10, #0xbe0]
    mov r0, r4
    bl func_02080cf0
    cmp r0, #0
    ldrne r0, [r10, #0xbe0]
    orrne r0, r0, #0x40
    strne r0, [r10, #0xbe0]
    mov r0, r4
    bl func_02080d00
    cmp r0, #0
    ldrne r0, [r10, #0xbe0]
    orrne r0, r0, #0x80
    strne r0, [r10, #0xbe0]
    mov r0, r4
    bl func_02080d10
    cmp r0, #0
    ldrne r0, [r10, #0xbe0]
    orrne r0, r0, #0x100
    strne r0, [r10, #0xbe0]
    mov r0, r4
    bl func_02080d20
    cmp r0, #0
    ldrne r0, [r10, #0xbe0]
    orrne r0, r0, #0x200
    strne r0, [r10, #0xbe0]
    mov r0, r4
    bl func_02080d30
    cmp r0, #0
    ldrne r0, [r10, #0xbe0]
    orrne r0, r0, #0x400
    strne r0, [r10, #0xbe0]
    mov r0, r4
    bl func_02080d40
    cmp r0, #0
    ldrne r0, [r10, #0xbe0]
    orrne r0, r0, #0x800
    strne r0, [r10, #0xbe0]
    mov r0, r4
    bl func_02080d50
    cmp r0, #0
    ldrne r0, [r10, #0xbe0]
    ldr r1, [sp, #8]
    orrne r0, r0, #0x1000
    strne r0, [r10, #0xbe0]
    mul r10, r5, r7
    add r0, r4, #0x20
    add r1, r1, r10
    mov r2, #0x20
    bl MI_CpuCopy8
    add r10, r6, r10
    mov r0, r8
    mov r1, r4
    mov r2, #0x1e
    mov r3, r9
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    add r1, r10, #0xc00
    strh r0, [r1, #8]
    mov r0, r8
    mov r1, r4
    mov r2, #0x1f
    mov r3, r9
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    add r1, r10, #0xc00
    strh r0, [r1, #0xa]
    mov r0, r8
    mov r1, r4
    mov r2, #0x21
    mov r3, r9
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    add r1, r10, #0xc00
    strh r0, [r1, #0xc]
    mov r0, r8
    mov r1, r4
    mov r2, #0x20
    mov r3, r9
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    add r1, r10, #0xc00
    strh r0, [r1, #0xe]
    mov r0, r8
    mov r1, r4
    mov r2, #0x22
    mov r3, r9
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    add r1, r10, #0xc00
    strh r0, [r1, #0x10]
    mov r0, r8
    mov r1, r4
    mov r2, #0x24
    mov r3, r9
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    add r2, r10, #0xc00
    strh r0, [r2, #0x12]
    mov r1, r4
    mov r0, r8
    mov r2, #0x23
    mov r3, r9
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    add r1, r10, #0xc00
    strh r0, [r1, #0x14]
@L_02167354:
    ldr r0, [sp, #0xc]
    add r5, r5, #1
    ldrb r0, [r0, #0x11c]
    cmp r5, r0
    blt @L_021670d0
@L_02167368:
    mov r7, #0
    add r5, sp, #0x10
    ldr r0, =data_020e88a0
    mov r1, r7
    mov r2, r5
    mov r3, #4
    str r7, [sp]
    mov r8, #0x5c
    mov r9, #1
    mov r4, r7
    bl _ZN11MatchEngine13func_02078844Ev
@L_02167394:
    mov r2, r4
    cmp r0, #0
    ble @L_021673d0
    mla r10, r7, r8, r6
    add r1, r10, #0x600
    ldrh r3, [r1, #0x10]
@L_021673ac:
    mov r1, r2, lsl #1
    ldrh r1, [r5, r1]
    cmp r3, r1
    streqb r9, [r10, #0x624]
    streqb r9, [r10, #0xbe4]
    beq @L_021673d0
    add r2, r2, #1
    cmp r2, r0
    blt @L_021673ac
@L_021673d0:
    add r7, r7, #1
    cmp r7, #0x10
    blt @L_02167394
    add r1, r6, #0x3000
    add r2, r6, #0x1fc
    str r0, [r1, #0x120]
    add r0, r2, #0x400
    add r1, r6, #0x3c
    mov r2, #0x5c0
    bl MI_CpuCopy8
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_02076818Ev
    mov r1, r0
    mov r0, r6
    bl func_ov028_0216754c
    add sp, sp, #0xe8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov028_02167420(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x100
    mov r10, #0xd0
    add r5, sp, #0x30
    mov r9, r0
    mov r7, #0
    mov r8, r1
    mov r0, r5
    mov r1, r7
    mov r2, r10
    bl MI_CpuFill8
    add r4, sp, #8
    mov r1, r7
    mov r0, r4
    mov r2, #8
    bl MI_CpuFill8
    add r6, sp, #0x10
    mov r1, r7
    mov r0, r6
    mov r2, #0x20
    bl MI_CpuFill8
    mov r2, r10
    mov r0, r8
    mov r1, r5
    bl MI_CpuCopy8
    ldr r10, =data_020e88a0
    str r7, [sp]
    mov r1, r7
    mov r0, r10
    mov r2, r4
    mov r3, #4
    bl _ZN11MatchEngine13func_02078844Ev
    mov r2, r6
    str r7, [sp]
    mov r6, r0
    mov r0, r10
    mov r1, r7
    mov r3, #0x10
    str r7, [sp, #4]
    bl _ZN11MatchEngine13func_02078aacEiPtihi
    mov r2, r6
    mov r0, #1
    mov r1, r7
@L_021674cc:
    mov r3, r1
    mov r12, r1
    cmp r6, #0
    ble @L_02167504
    mov r10, r7, lsl #1
    ldrh lr, [r5, r10]
@L_021674e4:
    mov r10, r12, lsl #1
    ldrh r10, [r4, r10]
    cmp lr, r10
    moveq r3, r0
    beq @L_02167504
    add r12, r12, #1
    cmp r12, r6
    blt @L_021674e4
@L_02167504:
    cmp r3, #0
    moveq r3, r7, lsl #1
    ldreqh r12, [r5, r3]
    moveq r3, r2, lsl #1
    add r7, r7, #1
    addeq r2, r2, #1
    streqh r12, [r8, r3]
    cmp r7, #0x10
    blt @L_021674cc
    add r3, r9, #0x3000
    add r0, sp, #8
    mov r1, r8
    mov r2, r6, lsl #1
    str r6, [r3, #0x120]
    bl MI_CpuCopy8
    add sp, sp, #0x100
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov028_0216754c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x64
    mov r9, r0
    add r0, r9, #0x3000
    ldrb r0, [r0, #0x11c]
    movs r5, r1
    mov r4, #0x5c
    str r0, [sp]
    addeq sp, sp, #0x64
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r8, #0
    add r0, sp, #8
    mov r1, r8
    mov r2, r4
    bl MI_CpuFill8
    cmp r5, #1
    bne @L_0216764c
    ldr r0, [sp]
    cmp r0, #0
    addle sp, sp, #0x64
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021675a0:
    ldr r0, [sp]
    mov r7, #0
    sub r11, r0, #1
    cmp r11, #0
    ble @L_02167634
    add r0, r9, #0x3bc
    add r6, r0, #0x800
    add r5, sp, #8
@L_021675c0:
    mul r10, r7, r4
    add r0, r9, r10
    ldrb r3, [r0, #0xbe8]
    ldrb r2, [r0, #0xc44]
    ldrb r1, [r0, #0xbea]
    ldrb r0, [r0, #0xc46]
    cmp r3, r2
    ble @L_021675e4
    b @L_021675f0
@L_021675e4:
    bne @L_02167628
    cmp r1, r0
    ble @L_02167628
@L_021675f0:
    add r0, r6, r10
    mov r1, r5
    mov r2, r4
    bl MI_CpuCopy8
    add r0, r7, #1
    add r1, r6, r10
    mul r10, r0, r4
    add r0, r6, r10
    mov r2, r4
    bl MI_CpuCopy8
    add r1, r6, r10
    mov r0, r5
    mov r2, r4
    bl MI_CpuCopy8
@L_02167628:
    add r7, r7, #1
    cmp r7, r11
    blt @L_021675c0
@L_02167634:
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_021675a0
    add sp, sp, #0x64
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216764c:
    cmp r5, #2
    bne @L_02167754
    ldr r0, [sp]
    cmp r0, #0
    addle sp, sp, #0x64
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02167664:
    ldr r0, [sp]
    mov r6, #0
    sub r0, r0, #1
    str r0, [sp, #4]
    cmp r0, #0
    ble @L_0216773c
    add r0, r9, #0x3bc
    add r10, r0, #0x800
    add r7, sp, #8
@L_02167688:
    mul r5, r6, r4
    add r11, r9, r5
    add r0, r11, #0xb00
    ldrsb r2, [r0, #0xbc]
    ldrsb r0, [r0, #0xbe]
    ldrb r1, [r11, #0xbbd]
    mov r2, r2, lsl #0x18
    mov r0, r0, lsl #0x18
    orr r3, r1, r2, lsr #16
    add r1, r11, #0xc00
    ldrsb r2, [r1, #0x18]
    ldrsb r12, [r1, #0x1a]
    ldrb r1, [r11, #0xc19]
    mov r2, r2, lsl #0x18
    mov r12, r12, lsl #0x18
    orr r2, r1, r2, lsr #16
    cmp r3, r2
    ldrb r1, [r11, #0xbbf]
    ldrb r11, [r11, #0xc1b]
    orr r1, r1, r0, lsr #16
    orr r0, r11, r12, lsr #16
    ble @L_021676e4
    b @L_021676f4
@L_021676e4:
    cmp r3, r2
    bne @L_0216772c
    cmp r1, r0
    ble @L_0216772c
@L_021676f4:
    add r0, r10, r5
    mov r1, r7
    mov r2, r4
    bl MI_CpuCopy8
    add r0, r6, #1
    add r1, r10, r5
    mul r5, r0, r4
    add r0, r10, r5
    mov r2, r4
    bl MI_CpuCopy8
    add r1, r10, r5
    mov r0, r7
    mov r2, r4
    bl MI_CpuCopy8
@L_0216772c:
    ldr r0, [sp, #4]
    add r6, r6, #1
    cmp r6, r0
    blt @L_02167688
@L_0216773c:
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_02167664
    add sp, sp, #0x64
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02167754:
    ldr r0, [sp]
    mov r0, r0, lsl #2
    bl _Znam
    mov r7, r0
    cmp r5, #0xa
    addls pc, pc, r5, lsl #2
    b @L_02167914
    b @L_02167914
    b @L_02167914
    b @L_02167914
    b @L_0216779c
    b @L_021677c8
    b @L_021677f8
    b @L_02167828
    b @L_02167858
    b @L_02167888
    b @L_021678b8
    b @L_021678e8
@L_0216779c:
    ldr r0, [sp]
    cmp r0, #0
    ble @L_02167914
@L_021677a8:
    mla r0, r8, r4, r9
    ldr r0, [r0, #0xbcc]
    str r0, [r7, r8, lsl #2]
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_021677a8
    b @L_02167914
@L_021677c8:
    ldr r0, [sp]
    cmp r0, #0
    ble @L_02167914
@L_021677d4:
    mla r0, r8, r4, r9
    add r0, r0, #0xc00
    ldrh r0, [r0, #8]
    str r0, [r7, r8, lsl #2]
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_021677d4
    b @L_02167914
@L_021677f8:
    ldr r0, [sp]
    cmp r0, #0
    ble @L_02167914
@L_02167804:
    mla r0, r8, r4, r9
    add r0, r0, #0xc00
    ldrh r0, [r0, #0xa]
    str r0, [r7, r8, lsl #2]
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_02167804
    b @L_02167914
@L_02167828:
    ldr r0, [sp]
    cmp r0, #0
    ble @L_02167914
@L_02167834:
    mla r0, r8, r4, r9
    add r0, r0, #0xc00
    ldrh r0, [r0, #0xc]
    str r0, [r7, r8, lsl #2]
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_02167834
    b @L_02167914
@L_02167858:
    ldr r0, [sp]
    cmp r0, #0
    ble @L_02167914
@L_02167864:
    mla r0, r8, r4, r9
    add r0, r0, #0xc00
    ldrh r0, [r0, #0xe]
    str r0, [r7, r8, lsl #2]
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_02167864
    b @L_02167914
@L_02167888:
    ldr r0, [sp]
    cmp r0, #0
    ble @L_02167914
@L_02167894:
    mla r0, r8, r4, r9
    add r0, r0, #0xc00
    ldrh r0, [r0, #0x10]
    str r0, [r7, r8, lsl #2]
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_02167894
    b @L_02167914
@L_021678b8:
    ldr r0, [sp]
    cmp r0, #0
    ble @L_02167914
@L_021678c4:
    mla r0, r8, r4, r9
    add r0, r0, #0xc00
    ldrh r0, [r0, #0x12]
    str r0, [r7, r8, lsl #2]
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_021678c4
    b @L_02167914
@L_021678e8:
    ldr r0, [sp]
    cmp r0, #0
    ble @L_02167914
@L_021678f4:
    mla r0, r8, r4, r9
    add r0, r0, #0xc00
    ldrh r0, [r0, #0x14]
    str r0, [r7, r8, lsl #2]
    ldr r0, [sp]
    add r8, r8, #1
    cmp r8, r0
    blt @L_021678f4
@L_02167914:
    ldr r0, [sp]
    mov r11, #0
    cmp r0, #0
    ble @L_021679c0
    add r0, r9, #0x3bc
    add r5, r0, #0x800
    ldr r0, [sp]
    add r10, sp, #8
    sub r6, r0, #1
@L_02167938:
    mov r8, #0
    cmp r6, #0
    ble @L_021679b0
@L_02167944:
    add r0, r7, r8, lsl #2
    ldr r1, [r0]
    ldr r0, [r0, #4]
    cmp r1, r0
    bge @L_021679a4
    mul r9, r8, r4
    mov r1, r10
    mov r2, r4
    add r0, r5, r9
    bl MI_CpuCopy8
    add r0, r8, #1
    add r1, r5, r9
    mul r9, r0, r4
    add r0, r5, r9
    mov r2, r4
    bl MI_CpuCopy8
    add r1, r5, r9
    mov r0, r10
    mov r2, r4
    bl MI_CpuCopy8
    add r1, r7, r8, lsl #2
    ldr r2, [r7, r8, lsl #2]
    ldr r0, [r1, #4]
    stmia r1, {r0, r2}
@L_021679a4:
    add r8, r8, #1
    cmp r8, r6
    blt @L_02167944
@L_021679b0:
    ldr r0, [sp]
    add r11, r11, #1
    cmp r11, r0
    blt @L_02167938
@L_021679c0:
    mov r0, r7
    bl func_020255e4
    add sp, sp, #0x64
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov028_021679d0(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    add r0, r0, #0x138
    add r0, r0, #0x3000
    mov r1, #0
    mov r2, #0x18
    bl MI_CpuFill8
    ldr r4, =g2DGChar
    ldr r0, [r4]
    bl func_0208720c
    mov r2, #2
    mov r0, #0x4000
    stmia sp, {r0, r2}
    mov r0, #0x6400
    str r0, [sp, #8]
    ldr r0, [r4]
    mov r3, r2
    mov r1, #0x94000
    bl func_020872a4
    ldr r0, [r4]
    bl func_02088530
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_ov028_02167a30(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, r1
    mov r10, r0
    cmp r4, #2
    blo @L_02167abc
    ldr r4, =g2DGChar
    mov r9, #0
    ldr r0, [r4]
    bl func_02087284
    ldr r0, [r4]
    bl func_020885b0
    mov r4, #0xc
    add r0, r10, #0x138
    add r8, r0, #0x3000
    mov r11, #1
    mov r7, r9
    mov r5, r4
    mov r6, r4
    b @L_02167ab0
@L_02167a7c:
    mla r0, r9, r4, r8
    mov r1, r11
    bl Archive_Close
    mla r0, r9, r5, r8
    bl Archive_Deallocate
    mla r0, r9, r6, r10
    add r0, r0, #0x3000
    str r7, [r0, #0x138]
    str r7, [r0, #0x13c]
    strb r7, [r0, #0x140]
    strb r7, [r0, #0x141]
    strb r7, [r0, #0x142]
    add r9, r9, #1
@L_02167ab0:
    cmp r9, #2
    blt @L_02167a7c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02167abc:
    add r0, r10, #0x138
    add r0, r0, #0x3000
    mov r5, #0xc
    mla r0, r4, r5, r0
    mov r1, #1
    bl Archive_Close
    add r0, r10, #0x138
    add r0, r0, #0x3000
    mla r0, r4, r5, r0
    bl Archive_Deallocate
    mla r0, r4, r5, r10
    add r0, r0, #0x3000
    mov r1, #0
    str r1, [r0, #0x138]
    str r1, [r0, #0x13c]
    strb r1, [r0, #0x140]
    strb r1, [r0, #0x141]
    strb r1, [r0, #0x142]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov028_02167b0c(u8 *arg0)
{
    s32 v0 = func_02088580(*(s32 *)(g2DGChar), (s32)g2DGChar);
    if (v0 != 0)
        return v0;
    Archive_RequestNewRead((s32)data_ov028_0216bb9c, ((arg0 + 0x138) + 0x3000));
    Archive_RequestNewRead((s32)data_ov028_0216bbb4, ((arg0 + 0x144) + 0x3000));
    *(u8 *)(arg0 + 0x2C) = 1;
    return 1;
}

extern "C" void func_ov028_02167b60(s32 arg0, s32 arg1)
{
    MI_CpuFill8((((arg0 + 0x150) + 0x3000) + (arg1 << 3)), 0, 8);
    func_ov015_02135ea0((((arg0 + 0x150) + 0x3000) + (arg1 << 3)), 0x10);
}

extern "C" void func_ov028_02167b90(s32 arg0, s32 arg1)
{
    MI_CpuFill8((((arg0 + 0x160) + 0x3000) + (arg1 << 3)), 0, 8);
    func_ov015_02135ea0((((arg0 + 0x160) + 0x3000) + (arg1 << 3)), 8);
}

extern "C" void func_ov028_02167bc4(s32 arg0, s32 arg1)
{
    func_ov015_02136330((((arg0 + 0x150) + 0x3000) + (arg1 << 3)), -1);
    func_ov015_02135ef4((((arg0 + 0x150) + 0x3000) + (arg1 << 3)));
}

extern "C" void func_ov028_02167bec(s32 arg0, s32 arg1)
{
    func_ov015_02136330((((arg0 + 0x160) + 0x3000) + (arg1 << 3)), -1);
    func_ov015_02135ef4((((arg0 + 0x160) + 0x3000) + (arg1 << 3)));
}

extern "C" s32 func_ov028_02167c14(u8 *arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    s32 r11;
    s32 v0;
    s32 t0;
    u16 t1;
    s32 t2;
    s32 t3;
    u16 t4;
    s32 t5;
    v0 = Archive_TryFinalize((s32)((arg0 + 0x138) + 0x3000), 2);
    if (v0 != 1)
        return v0;
    r8 = 0;
    do {
        t0 = *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x138);
        t1 = *(u16 *)(((u8 *)(((r8 * 0x5C) + arg0) + 0x600)) + 0x12);
        t2 = (s32)(((arg0 + 0x150) + 0x3000) + (*(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x170) << 3));
        func_ov015_02136134(t0, (s32)data_ov028_0216bbd4, t1, t2, 0, 0, 1, 1);
        r4 = 0x5C;
        r5 = (s32)(arg0 + 0x3000);
        r6 = (s32)((arg0 + 0x150) + 0x3000);
        r7 = 1;
        r8 = (r8 + 1);
        r11 = (s32)data_ov028_0216bbd4;
    } while (r8 < 0x10);
    r9 = 0;
    do {
        t3 = *(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x138);
        t4 = *(u16 *)(((u8 *)(((r9 * 0x5C) + arg0) + 0xB00)) + 0xD2);
        t5 = (s32)(((arg0 + 0x160) + 0x3000) + (*(s32 *)(((u8 *)(arg0 + 0x3000)) + 0x174) << 3));
        func_ov015_02136134(t3, (s32)data_ov028_0216bbec, t4, t5, 0, 0, 1, 1);
        r4 = 0x5C;
        r5 = (s32)(arg0 + 0x3000);
        r6 = (s32)((arg0 + 0x160) + 0x3000);
        r7 = 1;
        r8 = 0;
        r9 = (r9 + 1);
        r11 = (s32)data_ov028_0216bbec;
    } while (r9 < 8);
    *(u8 *)(arg0 + 0x2C) = 2;
    return 2;
}

extern "C" asm s32 func_ov028_02167d08(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    add r2, r10, #0x3000
    ldr r1, [r2, #0x684]
    cmp r1, #1
    beq @L_02167d34
    cmp r1, #2
    beq @L_02167dbc
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02167d34:
    ldr r1, [r2, #0x170]
    eor r1, r1, #1
    str r1, [r2, #0x170]
    bl func_ov028_02167bc4
    add r0, r10, #0x3000
    ldr r1, [r0, #0x170]
    mov r0, r10
    bl func_ov028_02167b60
    mov r9, #0
    add r0, r10, #0x150
    ldr r11, =data_ov028_0216bc04
    add r6, r0, #0x3000
    add r5, r10, #0x3000
    mov r8, r9
    mov r7, #1
    mov r4, #0x5c
@L_02167d74:
    mla r0, r9, r4, r10
    str r8, [sp]
    str r8, [sp, #4]
    str r7, [sp, #8]
    str r7, [sp, #0xc]
    add r0, r0, #0x600
    ldr r3, [r5, #0x170]
    ldrh r2, [r0, #0x12]
    ldr r0, [r5, #0x138]
    mov r1, r11
    add r3, r6, r3, lsl #3
    bl func_ov015_02136134
    add r9, r9, #1
    cmp r9, #0x10
    blt @L_02167d74
    add r0, r10, #0x3000
    mov r1, #2
    str r1, [r0, #0x684]
@L_02167dbc:
    add r1, r10, #0x3000
    add r0, r10, #0x150
    ldr r1, [r1, #0x170]
    add r0, r0, #0x3000
    add r0, r0, r1, lsl #3
    bl func_ov015_021363e8
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r10, #0x3000
    ldr r1, [r0, #0x170]
    mov r0, r10
    eor r1, r1, #1
    bl func_ov028_02167bc4
    add r0, r10, #0x3000
    ldr r1, [r0, #0x170]
    mov r0, r10
    eor r1, r1, #1
    bl func_ov028_02167b60
    mov r0, r10
    bl func_ov028_02169658
    mov r0, r10
    bl func_ov028_021687cc
    add r0, r10, #0x3000
    mov r1, #0
    str r1, [r0, #0x684]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov028_02167e30(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    add r2, r10, #0x3000
    ldr r3, [r2, #0x644]
    ldr r1, [r2, #0x648]
    mov r9, r3, lsl #3
    cmp r1, #1
    add r8, r9, #8
    beq @L_02167e68
    cmp r1, #2
    beq @L_02167ef0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02167e68:
    ldr r1, [r2, #0x174]
    eor r1, r1, #1
    str r1, [r2, #0x174]
    bl func_ov028_02167bec
    add r0, r10, #0x3000
    ldr r1, [r0, #0x174]
    mov r0, r10
    bl func_ov028_02167b90
    cmp r9, r8
    bge @L_02167ee4
    add r0, r10, #0x160
    add r5, r0, #0x3000
    add r4, r10, #0x3000
    mov r7, #0
    mov r6, #1
    mov r11, #0x5c
@L_02167ea8:
    mla r0, r9, r11, r10
    str r7, [sp]
    str r7, [sp, #4]
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    add r0, r0, #0xb00
    ldr r3, [r4, #0x174]
    ldrh r2, [r0, #0xd2]
    ldr r0, [r4, #0x138]
    ldr r1, =data_ov028_0216bc1c
    add r3, r5, r3, lsl #3
    bl func_ov015_02136134
    add r9, r9, #1
    cmp r9, r8
    blt @L_02167ea8
@L_02167ee4:
    add r0, r10, #0x3000
    mov r1, #2
    str r1, [r0, #0x648]
@L_02167ef0:
    add r1, r10, #0x3000
    add r0, r10, #0x160
    ldr r1, [r1, #0x174]
    add r0, r0, #0x3000
    add r0, r0, r1, lsl #3
    bl func_ov015_021363e8
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r10, #0x3000
    ldr r1, [r0, #0x174]
    mov r0, r10
    eor r1, r1, #1
    bl func_ov028_02167bec
    add r0, r10, #0x3000
    ldr r1, [r0, #0x174]
    mov r0, r10
    eor r1, r1, #1
    bl func_ov028_02167bec
    mov r0, r10
    bl func_ov028_0216a534
    mov r0, r10
    bl func_ov028_0216a448
    mov r0, r10
    bl func_ov028_02169710
    mov r0, r10
    bl func_ov028_02168e14
    add r0, r10, #0x3000
    mov r1, #0
    str r1, [r0, #0x648]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov028_02167f74(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 t0;
    r5 = 0;
    v0 = func_ov015_02130b14(arg2, 0, arg2);
    r6 = (s32)arg0;
    arg0 = (u8 *)v0;
    if ((s32)arg0 != 0) {
        t0 = ((u16)(*(u16 *)(arg0 + 0x42) & 0xFFF));
        v1 = func_ov015_021362b8(t0, (((r6 + 0x150) + 0x3000) + (arg1 << 3)));
        r5 = (v1 & 0xFF);
    }
    return r5;
}

extern "C" s32 func_ov028_02167fcc(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 t0;
    r5 = 0;
    v0 = func_ov015_02130b14(arg2, 0, arg2);
    r6 = (s32)arg0;
    arg0 = (u8 *)v0;
    if ((s32)arg0 != 0) {
        t0 = ((u16)(*(u16 *)(arg0 + 0x42) & 0xFFF));
        v1 = func_ov015_021362b8(t0, (((r6 + 0x160) + 0x3000) + (arg1 << 3)));
        r5 = (v1 & 0xFF);
    }
    return r5;
}

extern "C" void func_ov028_02168024(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0x178) + 0x3000), 0, 0x5C);
    MI_CpuFill8(((arg0 + 0x1D4) + 0x3000), 0, 0x3C);
    C3DPlaneCtrl_Acquire(*(s32 *)(g3DPlaneCtrl));
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov028_0216806c(u8 *arg0)
{
    s32 i;
    for (i = 0; i < 0xf; i++) {
        if (((s32 *)(arg0 + 0x31d4))[i] != 0) {
            ((void (*)(s32, s32))C3DPlaneCtrl_Destroy)(*(s32 *)g3DPlaneCtrl, ((s32 *)(arg0 + 0x31d4))[i]);
            ((s32 *)(arg0 + 0x31d4))[i] = 0;
        }
    }
    for (i = 0; i < 0x17; i++) {
        if (((s32 *)(arg0 + 0x3178))[i] != 0) {
            ((void (*)(s32, s32))C3DSprFile_Release)(*(s32 *)g3DPlaneCtrl, ((s32 *)(arg0 + 0x3178))[i]);
            ((s32 *)(arg0 + 0x3178))[i] = 0;
        }
    }
    ((void (*)(s32))C3DPlaneCtrl_Release)(*(s32 *)g3DPlaneCtrl);
}
#pragma pop

extern "C" asm s32 func_ov028_02168110(...)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc4
    mov r4, r0
    add r1, r4, #0x3000
    add r0, r4, #0x150
    ldr r1, [r1, #0x170]
    add r0, r0, #0x3000
    add r0, r0, r1, lsl #3
    bl func_ov015_021363e8
    add r2, r4, #0x3000
    add r1, r4, #0x160
    ldr r2, [r2, #0x174]
    add r1, r1, #0x3000
    mov r5, r0
    add r0, r1, r2, lsl #3
    bl func_ov015_021363e8
    cmp r5, #0
    cmpeq r0, #0
    addne sp, sp, #0xc4
    ldmneia sp!, {r4, r5, pc}
    ldr r5, =data_ov028_0216b87c
    add lr, sp, #4
    mov r12, #0xc
@L_0216816c:
    ldmia r5!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs r12, r12, #1
    bne @L_0216816c
    mov r0, #0
    str r0, [sp]
    add r0, r4, #0x3000
    add r3, r4, #0x178
    ldr r1, [r0, #0x144]
    ldr r0, =data_ov028_0216bc34
    add r2, sp, #4
    add r3, r3, #0x3000
    bl func_ov015_02136080
    mov r0, r4
    mov r1, #1
    bl func_ov028_02167a30
    mov r0, #3
    strb r0, [r4, #0x2c]
    add sp, sp, #0xc4
    ldmia sp!, {r4, r5, pc}
}

extern "C" void func_ov028_021681c4(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8)
{
    s32 t0 = (*(s32 *)(arg2) + 1);
    *(s32 *)(arg2) = t0;
    s32 t1 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t2 = (*(s32 *)(((u8 *)((arg0 + (arg3 << 2)) + 0x3000)) + 0x178) & 0xFF);
    C3DPlaneCtrl_SetTex(t1, arg1, t0, t2);
    s32 t3 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t4 = *(s32 *)(arg2);
    C3DPlaneCtrl_SetGraphicIdx(t3, arg1, t4, arg4, 0);
    s32 t5 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t6 = *(s32 *)(arg2);
    C3DPlaneCtrl_SetPos(t5, arg1, t6, ((s16)arg5), ((s16)arg6));
    s32 t7 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t8 = *(s32 *)(arg2);
    C3DPlaneCtrl_SetDepth(t7, arg1, t8, ((u16)arg7));
    s32 t9 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    s32 t10 = *(s32 *)(arg2);
    C3DPlaneCtrl_SetFlag(t9, arg1, t10, 2, arg8);
}

#pragma push
#pragma optimization_level 2
extern "C" s32 func_ov028_02168288(s32 arg0)
{
    s32 r5;
    u8 *r6;
    s32 r7;
    s32 v9;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    s32 t9;
    s32 t10;
    s32 t11;
    s32 t12;
    s32 t13;
    s32 t14;
    s32 t15;
    s32 t16;
    s32 t17;
    s32 t18;
    s32 t19;
    r6 = (u8 *)arg0;
    r5 = 0;
    r7 = 0x4210;
    while (r5 < 0xF) {
        t0 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t1 = *(s32 *)(((u8 *)((r6 + (r5 << 2)) + 0x3000)) + 0x1D4);
        C3DPlaneCtrl_SetColorMask(t0, t1, r7);
        r5 = (r5 + 1);
    }
    r5 = 0;
    r7 = 0x4210;
    while (r5 < 0x10) {
        t2 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t3 = *(s32 *)(((u8 *)((r6 + (r5 << 3)) + 0x3000)) + 0x210);
        C3DPlaneCtrl_SetColorMask(t2, t3, r7);
        r5 = (r5 + 1);
    }
    r5 = 0;
    r7 = 0x4210;
    while (r5 < 0x78) {
        t4 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t5 = *(s32 *)(((u8 *)((r6 + (r5 << 3)) + 0x3000)) + 0x290);
        C3DPlaneCtrl_SetColorMask(t4, t5, r7);
        r5 = (r5 + 1);
    }
    t6 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    t7 = *(s32 *)(r6 + 0x3130);
    C3DPlaneCtrl_SetColorMask(t6, t7, 0x4210);
    t8 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    t9 = *(s32 *)(r6 + 0x3134);
    C3DPlaneCtrl_SetColorMask(t8, t9, 0x4210);
    arg0 = *(u8 *)(r6 + 0x2D);
    if ((arg0 != 0 && arg0 != 1)) {
        if (arg0 != 2)
            return arg0;
    }
    r5 = 0;
    r7 = 0x7FFF;
    while (r5 < 0xF) {
        t10 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t11 = *(s32 *)(((u8 *)((r6 + (r5 << 2)) + 0x3000)) + 0x1D4);
        C3DPlaneCtrl_SetColorMask(t10, t11, r7);
        r5 = (r5 + 1);
    }
    r5 = 0;
    r7 = 0x7FFF;
    while (r5 < 0x10) {
        t12 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t13 = *(s32 *)(((u8 *)((r6 + (r5 << 3)) + 0x3000)) + 0x210);
        C3DPlaneCtrl_SetColorMask(t12, t13, r7);
        r5 = (r5 + 1);
    }
    r5 = 0;
    r7 = 0x7FFF;
    while (r5 < 0x78) {
        t14 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
        t15 = *(s32 *)(((u8 *)((r6 + (r5 << 3)) + 0x3000)) + 0x290);
        C3DPlaneCtrl_SetColorMask(t14, t15, r7);
        r5 = (r5 + 1);
    }
    t16 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    t17 = *(s32 *)(r6 + 0x3130);
    C3DPlaneCtrl_SetColorMask(t16, t17, 0x7FFF);
    t18 = *(s32 *)(((u8 *)&g3DPlaneCtrl));
    t19 = *(s32 *)(r6 + 0x3134);
    v9 = C3DPlaneCtrl_SetColorMask(t18, t19, 0x7FFF);
    return v9;
}
#pragma pop

extern "C" asm s32 func_ov028_02168434(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    mov r5, r0
    mov r7, r4
    ldr r6, =g3DPlaneCtrl
    b @L_021684ac
@L_0216844c:
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0x178]
    cmp r1, #0
    beq @L_021684a8
    ldr r0, [r6]
    bl C3DSprFile_TryFinalize
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0x178]
    ldr r0, [r6]
    bl C3DSprFile_IsInVram
    cmp r0, #0
    bne @L_021684a8
    add r0, r5, r4, lsl #2
    add r0, r0, #0x3000
    ldr r1, [r0, #0x178]
    ldr r0, [r6]
    mov r2, r7
    mov r3, r7
    bl C3DSprFile_LoadToVram
@L_021684a8:
    add r4, r4, #1
@L_021684ac:
    cmp r4, #0x17
    blt @L_0216844c
    ldr r4, =g2DGChar
    ldr r0, [r4]
    bl func_02087b68
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r4]
    bl func_0208803c
    cmp r0, #0
    movle r0, #4
    strleb r0, [r5, #0x2c]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov028_021684e8(u8 *arg0)
{
    func_ov028_02168554(arg0);
    func_ov028_02169e14(arg0);
    func_ov028_0216984c(arg0);
    func_ov028_0216a308(arg0);
    func_ov028_0216a448(arg0);
    func_ov028_0216a588(arg0);
    func_ov028_0216a6b8(arg0);
    func_ov028_0216a7a4(arg0);
    func_ov028_021687cc(arg0);
    func_ov028_02168e14(arg0);
    func_ov028_02169838(arg0, 0);
    *(u8 *)(arg0 + 0x2C) = 5;
    return 5;
}

extern "C" asm s32 func_ov028_02168554(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    ldr r1, =g3DPlaneCtrl
    mov r7, r0
    mov r6, #1
    ldr r0, [r1]
    mov r2, r6
    mov r1, #2
    bl C3DPlaneCtrl_Create
    mov r4, #0
    mov r5, r0
    add r8, sp, #0x14
    str r4, [sp, #0x14]
    add r0, r7, #0x3000
    str r5, [r0, #0x1d4]
    str r4, [sp]
    str r4, [sp, #4]
    str r4, [sp, #8]
    mov r9, #0x1f4
    str r9, [sp, #0xc]
    mov r0, r7
    mov r1, r5
    mov r2, r8
    str r6, [sp, #0x10]
    mov r3, r4
    bl func_ov028_021681c4
    str r4, [sp]
    str r4, [sp, #4]
    sub r3, r9, #1
    str r4, [sp, #8]
    str r3, [sp, #0xc]
    mov r0, r7
    mov r1, r5
    mov r2, r8
    mov r3, #0x15
    str r6, [sp, #0x10]
    bl func_ov028_021681c4
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov028_021685f4(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =gSprAnimCtrl
    mov r4, r0
    ldr r0, [r1]
    bl func_ov015_02161760
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r4, #0x2d]
    cmp r0, #0
    beq @L_02168638
    cmp r0, #1
    beq @L_02168684
    cmp r0, #2
    addeq r0, r4, #0x3000
    moveq r1, #1
    streq r1, [r0, #0x668]
    b @L_021686cc
@L_02168638:
    mov r7, #0
    mov r6, #1
    mov r5, #0xa
    mov r0, r4
    mov r2, r7
    mov r3, r6
    mov r1, #0xc
    str r5, [sp]
    bl func_ov028_02166624
    mov r5, #0xb
    mov r0, r4
    mov r2, r7
    mov r3, r6
    mov r1, #0xd
    str r5, [sp]
    bl func_ov028_02166624
    mov r0, r4
    bl func_ov028_0216a914
    b @L_021686cc
@L_02168684:
    mov r5, #4
    add r1, r4, #0x3000
    mov r2, #1
    str r2, [r1, #0x650]
    mov r12, #0xb
    mov r0, r4
    mov r3, r5
    mov r1, #0xd
    mov r2, #3
    str r12, [sp]
    bl func_ov028_02166624
    mov r12, #0xa
    mov r0, r4
    mov r2, r5
    mov r1, #0xc
    mov r3, #5
    str r12, [sp]
    bl func_ov028_02166624
@L_021686cc:
    mov r0, r4
    bl func_ov028_02168288
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #6
    strb r0, [r4, #0x2c]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov028_021686f4(u8 *arg0)
{
    s32 v0 = func_ov015_02161760(*(s32 *)(gSprAnimCtrl), (s32)gSprAnimCtrl);
    if (v0 != 0)
        return v0;
    Graphics_FadeScreensBlack(6);
    *(u8 *)(arg0 + 0x2C) = 8;
    return 8;
}

extern "C" s32 func_ov028_02168728(u8 *arg0)
{
    s32 r1;
    s32 r2;
    s32 r4;
    s32 v0;
    s32 v2;
    s32 v4;
    s32 t1;
    s32 t2;
    v0 = ((VCall *)arg0)->f22();
    if (v0 != 0)
        return v0;
    r2 = *(s32 *)(arg0 + 0x34);
    r4 = *(s32 *)(arg0 + 0x38);
    r1 = 0;
    if ((r2 == r4 && r2 == 0)) {
        t1 = *(s32 *)(arg0 + 0x4);
        _ZN13ScreenManager8PopSceneEi(t1, r1);
        v2 = _ZN13ScreenManager8PopSceneEi(t1, 1);
        return v2;
    } else {
        t2 = *(s32 *)(arg0 + 0x4);
        _ZN13ScreenManager12SetNextSceneEii(t2, 0, r2);
        v4 = _ZN13ScreenManager12SetNextSceneEii(t2, 1, r4);
        return v4;
    }
}

extern "C" void func_ov028_02168798(u8 *arg0, s32 arg1, s32 arg2)
{
    if (*(u8 *)(data_020c4ab4 + 0x69) != 0) {
        if ((arg1 != 0 || arg2 != 0))
            return;
    }
    *(s32 *)(arg0 + 0x34) = arg1;
    *(s32 *)(arg0 + 0x38) = arg2;
    *(u8 *)(arg0 + 0x2C) = 7;
    return;
}

extern "C" asm s32 func_ov028_021687cc(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    mov r1, #0
    mov r3, r1
    mov r9, r0
    mov r4, #4
    add r0, sp, #0x48
    mov r2, r4
    str r3, [sp, #0x40]
    str r3, [sp, #0x3c]
    add r3, r9, #0x3000
    ldr r8, [r3, #0x620]
    mov r11, #0x5c
    bl MI_CpuFill8
    add r0, sp, #0x44
    mov r1, #0
    mov r2, r4
    bl MI_CpuFill8
    add r0, r9, #0x210
    mov r1, #0
    add r0, r0, #0x3000
    mov r2, #0x80
    bl MI_CpuFill8
    mov r0, #3
    str r0, [sp, #0x20]
    ldr r0, =0x1ef
    mov r7, r8
    sub r4, r0, #5
    add r0, r8, #8
    str r0, [sp, #0x24]
    add r0, r9, #0x3000
    str r0, [sp, #0x34]
    b @L_02168b6c
@L_02168850:
    mla r0, r7, r11, r9
    ldrb r0, [r0, #0x626]
    cmp r0, #1
    bne @L_02168b68
    mov r0, #0
    str r0, [sp, #0x40]
    ldr r0, =g3DPlaneCtrl
    mov r1, #7
    ldr r0, [r0]
    mov r2, #1
    bl C3DPlaneCtrl_Create
    mov r5, r0
    add r0, r9, r7, lsl #3
    add r0, r0, #0x3000
    str r5, [r0, #0x210]
    sub r0, r7, r8
    mov r0, r0, lsl #4
    add r1, r0, #0x20
    mla r0, r7, r11, r9
    ldrb r0, [r0, #0x624]
    mov r10, #0
    cmp r0, #1
    bne @L_021688dc
    mov r0, r10
    str r0, [sp]
    stmib sp, {r0, r1}
    ldr r0, =0x1ef
    mov r1, r5
    str r0, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    mov r0, r9
    add r2, sp, #0x40
    mov r3, #1
    bl func_ov028_021681c4
@L_021688dc:
    mla r0, r7, r11, r9
    add r0, r0, #0x600
    ldrh r0, [r0, #0x16]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02168924
    b @L_02168924
    b @L_02168908
    b @L_02168910
    b @L_02168918
    b @L_02168920
@L_02168908:
    mov r10, #3
    b @L_02168924
@L_02168910:
    mov r10, #2
    b @L_02168924
@L_02168918:
    mov r10, #1
    b @L_02168924
@L_02168920:
    mov r10, #0
@L_02168924:
    sub r0, r7, r8
    mov r0, r0, lsl #4
    add r6, r0, #0x20
    mla r0, r7, r11, r9
    add r0, r0, #0x600
    ldrh r0, [r0, #0x10]
    mov r3, #0xf
    mov r1, r5
    cmp r0, #1
    mla r0, r7, r11, r9
    add r0, r0, #0x600
    ldrh r0, [r0, #0x14]
    addeq r10, r10, #4
    add r2, sp, #0x40
    cmp r0, #0
    ldr r0, [sp, #0x20]
    str r10, [sp]
    stmib sp, {r0, r6}
    str r4, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    movne r3, #0xf
    mov r0, r9
    bl func_ov028_021681c4
    mla r2, r7, r11, r9
    ldr r1, [sp, #0x40]
    add r2, r2, #0x600
    add r1, r1, #1
    str r1, [sp, #0x40]
    ldr r1, [sp, #0x34]
    ldrh r2, [r2, #0x10]
    ldr r1, [r1, #0x170]
    mov r0, r9
    bl func_ov028_02167f74
    mov r3, r0
    sub r0, r7, r8
    mov r0, r0, lsl #4
    add r6, r0, #0x18
    ldr r0, =g3DPlaneCtrl
    ldr r2, [sp, #0x40]
    ldr r0, [r0]
    mov r1, r5
    bl C3DPlaneCtrl_SetTex
    mov r0, #0
    str r0, [sp]
    ldr r0, =g3DPlaneCtrl
    ldr r2, [sp, #0x40]
    ldr r0, [r0]
    mov r1, r5
    mov r3, #0
    bl C3DPlaneCtrl_SetGraphicIdx
    mov r0, r6, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, =g3DPlaneCtrl
    ldr r2, [sp, #0x40]
    ldr r0, [r0]
    mov r1, r5
    mov r3, #0xc
    bl C3DPlaneCtrl_SetPos
    ldr r0, =g3DPlaneCtrl
    ldr r2, [sp, #0x40]
    ldr r0, [r0]
    mov r1, r5
    mov r3, r4
    bl C3DPlaneCtrl_SetDepth
    mla r1, r7, r11, r9
    sub r0, r7, r8
    ldr r1, [r1, #0x620]
    mov r0, r0, lsl #4
    add r0, r0, #0x20
    tst r1, #0x400
    beq @L_02168a50
    mov r1, #0
    b @L_02168a7c
@L_02168a50:
    tst r1, #0x80
    beq @L_02168a60
    mov r1, #1
    b @L_02168a7c
@L_02168a60:
    tst r1, #0x20
    beq @L_02168a70
    mov r1, #2
    b @L_02168a7c
@L_02168a70:
    tst r1, #0x1000
    beq @L_02168aac
    mov r1, #3
@L_02168a7c:
    str r1, [sp]
    mov r1, #0x68
    str r1, [sp, #4]
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    mov r0, r9
    mov r1, r5
    add r2, sp, #0x40
    mov r3, #0x11
    bl func_ov028_021681c4
@L_02168aac:
    mla r0, r7, r11, r9
    ldr r1, [r0, #0x60c]
    ldr r3, =0x66666667
    sub r0, r7, r8
    smull r6, r2, r3, r1
    mov r3, r1, lsr #0x1f
    add r2, r3, r2, asr #2
    mov r3, #0xa
    smull r2, r6, r3, r2
    sub r2, r1, r2
    mov r0, r0, lsl #4
    str r2, [sp]
    mov r1, #0x70
    str r1, [sp, #4]
    add r0, r0, #0x28
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    mov r0, r9
    mov r1, r5
    add r2, sp, #0x40
    mov r3, #0x13
    bl func_ov028_021681c4
    mla r0, r7, r11, r9
    ldr r6, [r0, #0x60c]
    cmp r6, #0xa
    blt @L_02168b68
    ldr r0, =0x66666667
    mov r1, r5
    smull r2, r3, r0, r6
    mov r0, r6, lsr #0x1f
    add r3, r0, r3, asr #2
    str r3, [sp]
    mov r0, #0x68
    str r0, [sp, #4]
    sub r0, r7, r8
    mov r0, r0, lsl #4
    add r0, r0, #0x28
    str r0, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    mov r0, r9
    add r2, sp, #0x40
    mov r3, #0x13
    bl func_ov028_021681c4
@L_02168b68:
    add r7, r7, #1
@L_02168b6c:
    ldr r0, [sp, #0x24]
    cmp r7, r0
    blt @L_02168850
    ldr r4, =g3DPlaneCtrl
    mov r3, #0
    ldr r0, [r4]
    mov r1, #8
    mov r2, #1
    str r3, [sp, #0x40]
    bl C3DPlaneCtrl_Create
    mov r5, r0
    add r1, r9, #0x3000
    str r5, [r1, #0x130]
    add r2, sp, #0x48
    add r3, sp, #0x44
    mov r0, #0x40
    mov r1, #0xc
    bl func_0209a3b0
    add r0, r9, #0x1fc
    add r0, r0, #0x400
    str r0, [sp, #0x2c]
    add r0, r8, #8
    mov r7, r8
    str r0, [sp, #0x30]
    b @L_02168d8c
@L_02168bd0:
    mov r0, #0x5c
    mla r0, r7, r0, r9
    ldrb r0, [r0, #0x626]
    cmp r0, #1
    bne @L_02168d88
    ldr r2, [sp, #0x44]
    ldr r1, [sp, #0x48]
    ldr r0, [r4]
    bl C3DSprFile_CreateTex16
    mov r6, r0
    add r0, r9, r7, lsl #3
    add r0, r0, #0x3000
    str r6, [r0, #0x214]
    mov r2, #0
    ldr r0, [r4]
    mov r1, r6
    mov r3, r2
    bl C3DSprFile_LoadToVram
    mov r0, #0
    str r0, [sp, #0x38]
    ldr r0, [r4]
    mov r1, r6
    add r2, sp, #0x38
    add r3, sp, #0x3c
    bl C3DSprFile_AllocTexBuffer
    ldr r0, [r4]
    mov r1, r6
    ldr r10, [sp, #0x38]
    bl C3DPlaneCtrl_GetTexWidth
    str r0, [sp, #0x28]
    ldr r0, [r4]
    mov r1, r6
    bl C3DPlaneCtrl_GetTexHeight
    mov r11, r0
    ldr r0, =gFont12Manager
    mov r1, #1
    ldr r0, [r0]
    mov r2, r1
    bl _ZN8TextFont10SetSpacingEii
    str r11, [sp]
    mov r0, #0
    str r0, [sp, #4]
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    mov r0, #0
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    str r0, [sp, #0x1c]
    ldr r0, =gFont12Manager
    ldr r1, [sp, #0x2c]
    mov r2, #0x5c
    mla r1, r7, r2, r1
    ldr r0, [r0]
    ldr r3, [sp, #0x28]
    mov r2, r10
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
    ldr r0, =gFont12Manager
    ldr r0, [r0]
    bl _ZN8TextFont12ResetSpacingEv
    mov r2, r10
    ldr r3, [sp, #0x3c]
    ldr r0, [r4]
    mov r10, #0
    str r10, [sp]
    str r10, [sp, #4]
    mov r1, r6
    str r10, [sp, #8]
    bl C3DSprFile_UploadTex
    sub r0, r7, r8
    ldr r1, [sp, #0x40]
    mov r0, r0, lsl #4
    add r2, r1, #1
    and r3, r6, #0xff
    add r6, r0, #0x23
    ldr r0, [r4]
    mov r1, r5
    str r2, [sp, #0x40]
    bl C3DPlaneCtrl_SetTex
    mov r0, r10
    str r0, [sp]
    ldr r0, [r4]
    ldr r2, [sp, #0x40]
    mov r1, r5
    mov r3, r10
    bl C3DPlaneCtrl_SetTexST
    mov r0, r11, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [sp, #0x28]
    ldr r2, [sp, #0x40]
    mov r0, r0, lsl #0x10
    mov r3, r0, asr #0x10
    ldr r0, [r4]
    mov r1, r5
    bl C3DPlaneCtrl_SetTexWH
    mov r0, r6, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, [r4]
    ldr r2, [sp, #0x40]
    mov r1, r5
    mov r3, #0x2a
    bl C3DPlaneCtrl_SetPos
    ldr r0, [r4]
    ldr r2, [sp, #0x40]
    mov r1, r5
    mov r3, #0xc8
    bl C3DPlaneCtrl_SetDepth
@L_02168d88:
    add r7, r7, #1
@L_02168d8c:
    ldr r0, [sp, #0x30]
    cmp r7, r0
    blt @L_02168bd0
    mov r7, #0
    str r7, [sp, #0x20]
    mov r11, r7
    mov r8, #0xc
    mov r6, #0x20
    mov r9, #0x78
    mov r10, #0x10
    mov r5, #0x12c
    ldr r4, =gSprButtonCtrl
    b @L_02168df0
@L_02168dc0:
    stmia sp, {r6, r9, r10}
    str r5, [sp, #0xc]
    ldr r0, [r4]
    ldr r3, [sp, #0x20]
    mov r1, r11
    mov r2, r8
    bl func_ov015_02162f70
    add r0, r8, #1
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    add r6, r6, #0x10
    add r7, r7, #1
@L_02168df0:
    cmp r7, #8
    blt @L_02168dc0
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
