// (asm for now)

void OS_IrqHandler(void);
void OS_IrqHandler_ThreadSwitch(void);
void OSi_DoResetSystem(void);
void OSi_DoBoot(void);
void OSi_CpuClear32(void);
void OSi_ReloadRomData(void);
void OSi_ReadCardRom32(void);
void MIi_DmaSetParameters(void);
void func_01ff852c(void);
void func_01ff85cc(void);
void func_01ff876c(void);
void func_01ff8990(void);
void func_01ff8c54(void);
void func_01ff8ca4(void);
void func_01ff9490(void);
void func_01ff9630(void);
void func_01ff9684(void);
void func_01ff96bc(void);
void func_01ff9780(void);
void func_01ff995c(void);
void func_01ff99e0(void);
void func_01ff9afc(void);
void func_01ff9d78(void);
void func_01ff9dc4(void);
void func_01ff9e1c(void);
void func_01ff9ea4(void);
void func_01ffa3a4(void);
void func_01ffa3c4(void);
void func_01ffa838(void);
void func_01ffb040(void);
void func_01ffb2e0(void);
void func_01ffb37c(void);
void func_01ffb428(void);
void func_01ffb704(void);
void func_01ffb72c(void);
void func_01ffb73c(void);
void func_01ffb7b8(void);
void func_01ffb874(void);
void func_01ffb914(void);
void func_01ffb994(void);
void func_01ffba14(void);
void func_01ffba24(void);
void func_01ffba7c(void);
void func_01ffbbb0(void);
void func_01ffbc80(void);
void func_01ffbcc8(void);
void func_01ffbd18(void);
void func_01ffbdd8(void);
void func_01ffbe34(void);
void func_01ffc178(void);
void func_01ffc214(void);
void func_01ffc2e8(void);
void func_01ffc440(void);
void func_01ffc784(void);
void func_01ffca10(void);
void func_01ffcb50(void);
void func_01ffd8a8(void);
void func_01ffd924(void);
void func_01ffd9a0(void);
void func_01ffda2c(void);
void func_01ffdaa8(void);
void func_01ffdb38(void);
void func_01ffdbb0(void);
void func_01ffdc2c(void);
void func_01ffdcc4(void);
void func_01ffdcf8(void);
void func_01ffddd0(void);
void func_01ffde48(void);
void func_01ffdee0(void);
void func_01ffe1a4(void);
void func_01ffe1e4(void);
void func_01ffe204(void);
void func_01ffe22c(void);
void func_01ffe354(void);
void func_01ffe3e4(void);
void func_01ffe4b4(void);
void func_01ffe4c4(void);
void func_01ffe588(void);
void func_01ffe594(void);
void func_01ffe75c(void);
void func_01ffe898(void);
void func_01ffec70(void);
void func_01ffec94(void);
void func_01ffecec(void);
void func_01ffed20(void);
void func_01ffed54(void);
void func_01ffed6c(void);
void func_01ffede8(void);
void func_01ffee1c(void);
void func_01ffeee4(void);
void func_01ffef48(void);
void func_01ffef7c(void);
void func_01fff00c(void);
void func_01fff06c(void);
void func_01fff0ac(void);
void func_01fff0f4(void);
void func_01fff13c(void);
void func_01fff15c(void);
void func_01fff170(void);
void func_01fff184(void);
void func_01fff198(void);
void func_01fff1f4(void);
void func_01fff308(void);
void func_01fff37c(void);
void func_01fff3cc(void);

extern char OS_IRQTable[];
extern char data_027e0060[];
extern char OSi_ThreadInfo[];
void CP_SaveContext(void);
void CPi_RestoreContext(void);
void func_0200552c(void);
void OS_DisableInterrupts(void);
void OS_RestoreInterrupts(void);
void func_ov015_02143664(void);
void _ZN11MatchEngine13func_0206ace8Ev(void);
void func_02083e44(void);
void _ZN11MatchEngine13func_0206b4a8Ei(void);
void func_02083e7c(void);
void func_ov015_02130ae8(void);
void _ZN10MatchRules13func_0206ef4cEv(void);
void _ZN11MatchEngine13func_0206c834Ev(void);
void _ZN11MatchEngine13func_0206bfecEv(void);
extern char data_020c4920[];
void _ZN11MatchEngine13func_0206c858Ev(void);
void _ZN11MatchEngine13func_0206bfa8Ev(void);
void func_ov087_0217a538(void);
void _ZN11MatchEngine13func_0206bfb4Ei(void);
void _ZN11MatchEngine13func_0206bff4Ei(void);
void func_02083e54(void);
void _ZN11MatchEngine13func_0206bfa0Eh(void);
void func_ov087_0217ae40(void);
void func_ov015_02140ef8(void);
extern char data_020c4948[];
void func_ov087_02176efc(void);
void func_ov015_02142dfc(void);
void _ZN11MatchEngine13func_0206c820Ei(void);
void func_ov015_0213fc58(void);
void func_ov015_02131970(void);
void _ZN11MatchEngine13func_0206b47cEi(void);
void func_ov087_0217aba0(void);
void func_ov087_02174aec(void);
void func_02084788(void);
void _ZN11MatchEngine13func_020670ecEPll(void);
void _ZN11MatchEngine13func_0206c644Ev(void);
void func_ov001_021280bc(void);
extern char data_020c4de0[];
void _ZN11MatchEngine13func_0206dedcEv(void);
void func_ov015_02131948(void);
void func_ov015_02140da4(void);
void func_ov087_0217a640(void);
void func_02080b90(void);
void func_ov087_0217c274(void);
void func_ov015_021318a4(void);
void func_ov015_02140df0(void);
void func_ov015_02140dcc(void);
void func_ov015_02142e88(void);
void func_ov015_02142e38(void);
void func_ov015_02142ec8(void);
void gGameState(void);
void _ZN11MatchEngine13func_0206c00cEi(void);
void func_020841d8(void);
void func_ov015_021319fc(void);
void _ZN11MatchEngine13func_0206c018Ei(void);
void func_ov015_0213178c(void);
void func_ov087_0217cd20(void);
void func_ov087_0217a324(void);
void func_ov087_0217e540(void);
void func_ov015_02131854(void);
void func_ov015_02143548(void);
void _ZN11MatchEngine13func_0207903cEP11MatchPlayer(void);
void _ZN11MatchEngine13func_02063550EP11MatchPlayertihi(void);
void func_ov087_021748a4(void);
extern char g3DFieldSprite[];
void func_ov015_0213a75c(void);
void _ZN11MatchEngine13func_02078fa4EP11MatchPlayer(void);
void _ZN11MatchEngine13func_0206a54cEP11MatchPlayer(void);
void func_ov087_02174d74(void);
void func_ov015_02131704(void);
void func_ov087_0217a858(void);
void _ZN11MatchEngine13func_02078f8cEP11MatchPlayer(void);
void _ZN11MatchEngine13func_02068590Eii(void);
void func_020840b4(void);
void func_020840e0(void);
void func_ov015_02130e28(void);
void _ZN11MatchEngine13func_0207f38cEP11MatchPlayerhi(void);
void func_ov087_0217b90c(void);
void _ZN11MatchEngine13func_0206d4ecEv(void);
extern char data_020d9978[];
void _ZN11TreasureBox13func_02052600Ev(void);
void func_0209df60(void);
void func_02080b38(void);
void func_ov087_0217d0ac(void);
void func_02080aa0(void);
void func_020847b0(void);
void _ZN11MatchEngine13func_0206c7e0Ei(void);
void func_ov015_02142de8(void);
void func_ov015_02142e24(void);
extern char data_020c4ebc[];
void MI_CpuFill8(void);
extern char gConfig[];
extern char data_020aee4c[];
void _ZN10ConfigFile6GetIntEPKc(void);
extern char data_020aee5c[];
extern char data_020aee70[];
void _fflt(void);
void _fmul(void);
void _fgr(void);
void _fadd(void);
void _fsub(void);
void _ffix(void);
extern char data_020aee80[];
extern char data_020aee90[];
extern char data_020aeea4[];
extern char data_020aeec0[];
extern char gAllocator[];
void _ZN8GameHeap5AllocEiii(void);
void _Znwm(void);
void _ZN15DistanceTable3213func_02061fe4Ev(void);
void _ZN15DistanceTable324InitEv(void);
void _ZN15DistanceTable3212CalcDistanceEv(void);
extern char data_020caae0[];
void _ZN11MatchEngine13func_0206ce6cEt(void);
void _ZN11MatchEngine13func_0206cca4Eha(void);
extern char data_020aeedc[];
extern char data_020aeef4[];
extern char data_020aef08[];
extern char data_020c4980[];
void _ZN15MatchPlayerList13func_0208350cEP11MatchEngine(void);
extern char data_020c49e0[];
void _ZN11MatchEngine13func_0206e1d4Eih(void);
extern char data_020e88a0[];
void _ZN11MatchEngine13func_0206b464Eh(void);
void _ZN10MatchRules13func_0206ee98Ev(void);
void func_0208169c(void);
void _ZN11MatchEngine13func_0206deecEv(void);
void _ZN11MatchEngine13func_02078aacEiPtihi(void);
void func_ov015_02130b14(void);
void func_0208130c(void);
void OS_Terminate(void);
void _ZN11MatchEngine13func_0207d6b0EPh(void);
void func_020808c4(void);
void _ZN11MatchEngine13func_020739ccEi(void);
void _ZN11MatchEngine13func_02078f14EP11MatchPlayer(void);
void _ZN11MatchEngine13func_0207d6a8Ev(void);
void _ZN11MatchEngine11GetTeamInfoEi(void);
void func_ov087_02174240(void);
void _ZN11MatchEngine13func_0206ad1cEv(void);
void _ZN15DistanceTable3213func_02062178Ev(void);
void _ZN11MatchEngine13func_020705f8Eh(void);
void func_0208f628(void);
void MIi_CpuClear32(void);
void func_0209e020(void);
void func_ov015_02140fa4(void);
void _ZN11MatchEngine13func_020630a8Ev(void);
void _ZN11MatchEngine13func_020630fcEv(void);
void _ZN11MatchEngine13func_020630d8Ev(void);
void func_ov087_0217cd3c(void);
void _ZN11MatchEngine13func_0206c37cEv(void);
void _ZN11MatchEngine13func_0207c6b4Eiii(void);
void _ZN11MatchEngine13func_0207ac90Ei(void);
void _ZN10MatchRules13func_0206eef8Ev(void);
void Random_RandA(void);
void _ZN11MatchEngine13func_02070678Ei(void);
extern char data_020c475c[];
extern char data_020c4ab4[];
extern char data_020c4824[];
extern char data_020c4ee0[];
extern char data_020ac094[];
extern char data_020aeb64[];
extern char data_020c4808[];
void func_ov087_0217e3ec(void);
void _ZN11MatchEngine13func_0207efd8Ev(void);
void _ZN11MatchEngine13func_0206dad4Ei(void);
void _ZN11MatchEngine13func_0206daecEi(void);
void _ZN11MatchEngine13func_0207f07cEv(void);
void _ZN8GameHeap4FreeEPv(void);
void _ZN11MatchEngine13func_0207070cEv(void);
void _ZN11MatchEngine13func_0206d188Eii(void);
extern char data_020ca78c[];
extern char data_020cb918[];
void _ZN11TreasureBox13func_02051bd4Ev(void);
void func_0201a6f4(void);
void rand(void);
void OS_GetMacAddress(void);
extern char data_020cacc8[];
void func_02081740(void);
void _ZN10MatchRules13func_0206f014Ev(void);
void func_02080c64(void);
void func_02081398(void);
void func_ov015_0213192c(void);
void gEntryPool(void);
void func_ov015_021319b0(void);
void _ZN9EntryPool6RemoveEi(void);
void _ZN16MatchBallPhysics13func_020614c8EP9MatchAreal(void);
extern char data_020aef1c[];
void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern char data_020aef38[];
extern char data_020aef54[];
void func_ov015_02134040(void);
extern char data_020aef70[];
extern char data_020aef8c[];
extern char data_020aefa8[];
void Archive_PackHeaderGetOffsetAndSize(void);
extern char data_020aefc0[];
void _ZN11MatchEngine13func_0207e334Eiiii(void);
void func_ov087_02181cbc(void);
extern char data_020c6cac[];
void func_ov087_0218208c(void);
void func_ov087_021820a8(void);
void MI_CpuCopy8(void);
void _ZN11MatchEngine13func_0206707cEii(void);
void _ZN11MatchEngine13func_02067044Eii(void);
void _ZN11MatchEngine13func_02079ea0Eiii(void);
void _ZN11MatchEngine13func_020685a8Eiii(void);
void func_020804bc(void);
void func_020807d0(void);
void func_020812fc(void);
void _ZN11MatchEngine13func_0206e018Eiii(void);
void _ZN11MatchEngine13func_0206dfa4Eii(void);
void func_020813a8(void);
void func_02084aec(void);
void func_020812f4(void);
void _ZN11MatchEngine13func_0207c478EP11MatchPlayeriii(void);
void _ZN11MatchEngine13func_0206b4ccEi(void);
void func_ov087_02180ae0(void);
void _ZN11MatchEngine13func_0207a78cEv(void);
void _ZN11MatchEngine13func_0207af84Eii(void);
void _ZN11MatchEngine13func_0206f9e0Em(void);
void func_ov015_02131bd0(void);
void func_02080780(void);
void _ZN11MatchEngine13func_0207b780Ev(void);
void func_02081f7c(void);
void _ZN11MatchEngine13func_0207a820Ev(void);
extern char data_020aefd8[];
extern char data_020aeff0[];
void func_ov015_02131808(void);
extern char data_020cb6e0[];
void _ZN11MatchEngine13func_0206ccb8Ev(void);
void _ZN11MatchEngine13func_0206de44Ev(void);
void memset(void);
void func_02080328(void);
extern char data_020d3d20[];
void func_0209b5fc(void);
void Random_RandB(void);
void _ZN11MatchEngine13func_0206cd08EiPv(void);
void _ZN11MatchEngine13func_0206d970Ev(void);
void _s32_div_f(void);
void func_0209bb34(void);
extern char data_020ca760[];
void func_ov015_02131bb4(void);
void _ZN11MatchEngine13func_020765d4Eii(void);
void func_0209d8b8(void);
void _ZN11MatchEngine13func_0207f5d0EPcPKc(void);
void func_ov015_02130b94(void);
void STD_GetStringLength(void);
void func_02017278(void);
void STD_CopyLString(void);
extern char data_020af008[];
extern char data_020af024[];
extern char data_020af03c[];
extern char data_020c4828[];
extern char data_020af058[];
extern char data_020af074[];
extern char data_020af094[];
extern char data_020af0b0[];
extern char data_020af0cc[];
extern char data_020af0e8[];
extern char data_020af104[];
extern char data_020af120[];
void _ZN9EntryPool6CreateEi(void);
void _ZN11MatchEngine13func_0207a5c0EiPv(void);
extern char data_020cadf4[];
void _ZN11MatchEngine13func_0207aa94Ei(void);
void func_02081390(void);
void func_020813a0(void);
void _ZN11MatchEngine13func_02082d80Eii(void);
void _ZN11MatchEngine13func_0207793cEimmh(void);
void _ZN11MatchEngine13func_0207e5a4EPhii(void);
void func_020802cc(void);
void func_ov015_021319bc(void);
void func_020817f0(void);
void _ZN11MatchEngine13func_0207ef0cEP11MatchPlayer(void);
void _ZN11MatchEngine13func_0207a534Em(void);
void _ZN11MatchEngine13func_0206f4acEiPa(void);
void _ZN11MatchEngine13func_02079d2cEi(void);
void _ZN11MatchEngine13func_02079f98EP11MatchPlayeriS1_(void);
void func_ov087_02179e8c(void);
void func_ov087_02179c3c(void);
void func_ov087_0217d034(void);
void _ZN11MatchEngine13func_02067014EP11MatchPlayerii(void);
void func_02083e34(void);
void _ZN11MatchEngine13func_0206de54Ei(void);
void _ZN11MatchEngine13func_0206c148Ev(void);
void func_ov015_02142824(void);
void _ZN11MatchEngine13func_0206c064Ei(void);
void _ZN11MatchEngine13func_02068248Ev(void);
extern char data_020af140[];
extern char data_020af15c[];
void _ZN11MatchEngine13func_02074ac8EPh(void);
void func_02074ad0(void);
void func_02074b00(void);
void STD_CompareString(void);
void _ZN15DistanceTable3215DistanceBetweenEP7VecFx32S1_(void);
void _ZN15DistanceTable3222DistanceBetweenPlayersEP11MatchPlayerS1_(void);
void _ZN15DistanceTable3214ApproxDistanceEll(void);
void FX_Sqrt(void);
void _ZN11MatchEngine13func_02080288EP11MatchPlayer(void);
void func_02080b00(void);
void _ZN11MatchEngine13func_0207a394EP11MatchPlayer(void);
void _ZN11MatchEngine13func_0207a350EP11MatchPlayer(void);
void _ZN11MatchEngine13func_020787e8EP11MatchPlayer(void);
void func_02084870(void);
void _ZN11MatchEngine13func_02063038EP11MatchPlayer(void);
void _ZN11MatchEngine13func_020657a8EP11MatchPlayer(void);

asm void OS_IrqHandler(void)
{
    stmdb sp!, {lr}
    mov r12, #0x4000000
    add r12, r12, #0x210
    ldr r1, [r12, #-8]
    cmp r1, #0
    ldmeqia sp!, {pc}
    ldmia r12, {r1, r2}
    ands r1, r1, r2
    ldmeqia sp!, {pc}
    mov r3, #0x80000000
@L_01ff8028:
    clz r0, r1
    bics r1, r1, r3, lsr r0
    bne @L_01ff8028
    mov r1, r3, lsr r0
    str r1, [r12, #4]
    rsbs r0, r0, #0x1f
    ldr r1, =OS_IRQTable
    ldr r0, [r1, r0, lsl #2]
    ldr lr, =OS_IrqHandler_ThreadSwitch
    bx r0
}

asm void OS_IrqHandler_ThreadSwitch(void)
{
    ldr r12, =data_027e0060
    mov r3, #0
    ldr r12, [r12]
    mov r2, #1
    cmp r12, #0
    beq @L_01ff80a8
@L_01ff8070:
    str r2, [r12, #0x64]
    str r3, [r12, #0x78]
    str r3, [r12, #0x7c]
    ldr r0, [r12, #0x80]
    str r3, [r12, #0x80]
    mov r12, r0
    cmp r12, #0
    bne @L_01ff8070
    ldr r12, =data_027e0060
    str r3, [r12]
    str r3, [r12, #4]
    ldr r12, =OSi_ThreadInfo
    mov r1, #1
    strh r1, [r12]
@L_01ff80a8:
    ldr r12, =OSi_ThreadInfo
    ldrh r1, [r12]
    cmp r1, #0
    ldreq pc, [sp], #4
    mov r1, #0
    strh r1, [r12]
    mov r3, #0xd2
    msr cpsr_c, r3
    add r2, r12, #8
    ldr r1, [r2]
@L_01ff80d0:
    cmp r1, #0
    ldrneh r0, [r1, #0x64]
    cmpne r0, #1
    ldrne r1, [r1, #0x68]
    bne @L_01ff80d0
    cmp r1, #0
    bne @L_01ff80f8
@L_01ff80ec:
    mov r3, #0x92
    msr cpsr_c, r3
    ldr pc, [sp], #4
@L_01ff80f8:
    ldr r0, [r12, #4]
    cmp r1, r0
    beq @L_01ff80ec
    ldr r3, [r12, #0xc]
    cmp r3, #0
    beq @L_01ff8120
    stmdb sp!, {r0, r1, r12}
    mov lr, pc
    bx r3
    ldmia sp!, {r0, r1, r12}
@L_01ff8120:
    str r1, [r12, #4]
    mrs r2, spsr
    str r2, [r0, #0]!
    stmdb sp!, {r0, r1}
    add r0, r0, #0
    add r0, r0, #0x48
    ldr r1, =CP_SaveContext
    blx r1
    ldmia sp!, {r0, r1}
    ldmib sp!, {r2, r3}
    stmib r0!, {r2, r3}
    ldmib sp!, {r2, r3, r12, lr}
    stmib r0, {r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, sp, lr} ^
    add r0, r0, #0x34
    stmib r0!, {lr}
    mov r3, #0xd3
    msr cpsr_c, r3
    stmib r0!, {sp}
    stmdb sp!, {r1}
    add r0, r1, #0
    add r0, r0, #0x48
    ldr r1, =CPi_RestoreContext
    blx r1
    ldmia sp!, {r1}
    ldr sp, [r1, #0x44]
    mov r3, #0xd2
    msr cpsr_c, r3
    ldr r2, [r1, #0]!
    msr spsr_fc, r2
    ldr lr, [r1, #0x40]
    ldmib r1, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, sp, lr} ^
    mov r0, r0
    stmda sp!, {r0, r1, r2, r3, r12, lr}
    ldmia sp!, {pc}
}

asm void OSi_DoResetSystem(void)
{
    stmdb sp!, {r3, lr}
@L_01ff81bc:
    bl func_0200552c
    cmp r0, #0
    beq @L_01ff81bc
    ldr r1, =0x4000208
    mov r0, #0
    strh r0, [r1]
    bl OSi_ReloadRomData
    bl OSi_DoBoot
    ldmia sp!, {r3, pc}
}

asm void OSi_DoBoot(void)
{
    mov r12, #0x4000000
    str r12, [r12, #0x208]
    ldr r1, =OS_IRQTable
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    mov r0, #0
    str r0, [r1]
    ldr r1, =0x4000180
@L_01ff8204:
    ldrh r0, [r1]
    and r0, r0, #0xf
    cmp r0, #1
    bne @L_01ff8204
    mov r0, #0x100
    strh r0, [r1]
    mov r0, #0
    ldr r3, =0x2ffff9c
    ldr r4, [r3]
    ldr r1, =0x2fffd80
    mov r2, #0x80
    bl OSi_CpuClear32
    ldr r3, =0x2fffd9c
    str r4, [r3]
    ldr r1, =0x2ffff80
    mov r2, #0x18
    bl OSi_CpuClear32
    ldr r1, =0x2ffff98
    strh r0, [r1]
    ldr r1, =0x2ffff9c
    mov r2, #0x64
    bl OSi_CpuClear32
    ldr r1, =0x4000180
@L_01ff8260:
    ldrh r0, [r1]
    and r0, r0, #0xf
    cmp r0, #1
    beq @L_01ff8260
    mov r0, #0
    strh r0, [r1]
    ldr r3, =0x2fffe00
    ldr r12, [r3, #0x24]
    mov lr, r12
    ldr r11, =0x2ffff80
    ldmia r11, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10}
    mov r11, #0
    bx r12
}

asm void OSi_CpuClear32(void)
{
    add r12, r1, r2
@L_01ff82b8:
    cmp r1, r12
    stmltia r1!, {r0}
    blt @L_01ff82b8
    bx lr
}

asm void OSi_ReloadRomData(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r4, #0
    movne r0, #0
    ldreq r0, =0x2fffc2c
    ldreq r0, [r0]
    stmdb sp!, {r0}
    cmp r0, #0x8000
    ldrhs r1, =0x2fffe00
    movhs r2, #0x160
    blhs OSi_ReadCardRom32
    ldr r12, =0x2fffe00
    ldr r0, [r12, #0x20]
    ldr r1, [r12, #0x28]
    ldr r2, [r12, #0x2c]
    ldr r3, [sp]
    add r0, r0, r3
    subs r3, r0, #0x8000
    movlt r0, #0x8000
    sublt r1, r1, r3
    addlt r2, r2, r3
    cmp r2, #0
    blgt OSi_ReadCardRom32
    ldr r12, =0x2fffe00
    ldr r0, [r12, #0x30]
    ldr r1, [r12, #0x38]
    ldr r2, [r12, #0x3c]
    ldr r3, [sp]
    add r0, r0, r3
    cmp r2, #0
    blgt OSi_ReadCardRom32
    ldmia sp!, {r0}
    mov r1, #0
@L_01ff834c:
    mov r0, #0
@L_01ff8350:
    orr r2, r1, r0
    mcr p15, 0, r2, c7, c10, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt @L_01ff8350
    adds r1, r1, #0x40000000
    bne @L_01ff834c
    mov r0, #0
    mcr p15, 0, r0, c7, c6, 0
    mcr p15, 0, r0, c7, c5, 0
    mcr p15, 0, r0, c7, c10, 4
    ldmia sp!, {r4, pc}
}

asm void OSi_ReadCardRom32(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, =0x2fffe60
    ldr r3, =0x1ff
    ldr r5, [r4]
    and r4, r0, r3
    bic r3, r5, #0x7000000
    ldr r5, =0x40001a4
    orr r3, r3, #0xa1000000
    rsb r12, r4, #0
@L_01ff83ac:
    ldr r4, [r5]
    tst r4, #0x80000000
    bne @L_01ff83ac
    ldr r7, =0x40001a1
    mov r4, #0x80
    strb r4, [r7]
    cmp r12, r2
    add r0, r0, r12
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r4, =0x4100010
    mov r6, #0xb7
    mov r5, #0
@L_01ff83dc:
    strb r6, [r7, #7]
    mov lr, r0, lsr #0x18
    strb lr, [r7, #8]
    mov lr, r0, lsr #0x10
    strb lr, [r7, #9]
    mov lr, r0, lsr #8
    strb lr, [r7, #0xa]
    strb r0, [r7, #0xb]
    strb r5, [r7, #0xc]
    strb r5, [r7, #0xd]
    strb r5, [r7, #0xe]
    str r3, [r7, #3]
@L_01ff840c:
    ldr r8, [r7, #3]
    tst r8, #0x800000
    beq @L_01ff8430
    cmp r12, #0
    ldr lr, [r4]
    blt @L_01ff842c
    cmp r12, r2
    strlt lr, [r1, r12]
@L_01ff842c:
    add r12, r12, #4
@L_01ff8430:
    tst r8, #0x80000000
    bne @L_01ff840c
    cmp r12, r2
    add r0, r0, #0x200
    blt @L_01ff83dc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void MIi_DmaSetParameters(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r7, [sp, #0x20]
    mov r4, r0
    mov r9, r1
    mov r8, r2
    mov r6, r3
    ands r5, r7, #1
    bne @L_01ff8480
    bl OS_DisableInterrupts
@L_01ff8480:
    mov r1, #0xc
    mul r1, r4, r1
    add r1, r1, #0xb0
    tst r7, #0x10
    add r1, r1, #0x4000000
    beq @L_01ff84b0
    mov r2, r4, lsl #2
    add r3, r2, #0x4000000
    add r2, r2, #0xe0
    str r9, [r3, #0xe0]
    add r9, r2, #0x4000000
    b @L_01ff84c8
@L_01ff84b0:
    tst r7, #0x20
    movne r2, r4, lsl #2
    addne r3, r2, #0x4000000
    addne r2, r2, #0xe0
    strneh r9, [r3, #0xe0]
    addne r9, r2, #0x4000000
@L_01ff84c8:
    str r9, [r1]
    str r8, [r1, #4]
    str r6, [r1, #8]
    ands r6, r7, #2
    beq @L_01ff8504
    ldr r3, =0x40000b0
    tst r7, #4
    ldr r2, [r3]
    cmpeq r4, #0
    ldr r2, [r3]
    moveq r3, #0
    streq r3, [r1]
    ldreq r2, =0x81400001
    streq r3, [r1, #4]
    streq r2, [r1, #8]
@L_01ff8504:
    cmp r5, #0
    bne @L_01ff8510
    bl OS_RestoreInterrupts
@L_01ff8510:
    cmp r6, #0
    ldrne r1, =0x40000b0
    ldrne r0, [r1]
    ldrne r0, [r1]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ff852c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r2
    bl func_ov015_02143664
    mov r4, r0
    mov r0, r6
    bl _ZN11MatchEngine13func_0206ace8Ev
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl func_02083e44
    mov r1, r0
    mov r0, r6
    bl _ZN11MatchEngine13func_0206b4a8Ei
    cmp r0, #1
    bne @L_01ff8594
    mov r0, #1
    bl func_02083e7c
    ldr r2, [r0]
    ldr r1, [r0, #8]
    add r1, r2, r1
    mov r1, r1, asr #1
    str r1, [r4]
    ldr r0, [r0, #0xc]
    sub r0, r0, #1
    b @L_01ff85b8
@L_01ff8594:
    mov r0, #0
    bl func_02083e7c
    ldr r2, [r0]
    ldr r1, [r0, #8]
    add r1, r2, r1
    mov r1, r1, asr #1
    str r1, [r4]
    ldr r0, [r0, #4]
    add r0, r0, #1
@L_01ff85b8:
    str r0, [r4, #4]
    ldrb r0, [r4, #0x10]
    orr r0, r0, #0x10
    strb r0, [r4, #0x10]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_01ff85cc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #0x11800
    ldrsb r0, [r0, #0xa7]
    bl func_ov015_02130ae8
    movs r4, r0
    addeq r0, r5, #0x11000
    mvneq r1, #0
    streqb r1, [r0, #0x8a7]
    ldmeqia sp!, {r3, r4, r5, pc}
    add r0, r5, #0x22c
    bl _ZN10MatchRules13func_0206ef4cEv
    cmp r0, #0
    mov r0, r5
    bne @L_01ff8610
    bl _ZN11MatchEngine13func_0206c834Ev
    ldmia sp!, {r3, r4, r5, pc}
@L_01ff8610:
    bl _ZN11MatchEngine13func_0206bfecEv
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl _ZN11MatchEngine13func_0206ace8Ev
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c4920
    ldrb r0, [r0, #0x59]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_01ff8674
    mov r0, r5
    bl _ZN11MatchEngine13func_0206c858Ev
    cmp r0, #1
    beq @L_01ff8668
    mov r0, r5
    bl _ZN11MatchEngine13func_0206c858Ev
    cmp r0, #3
    bne @L_01ff8674
@L_01ff8668:
    mov r0, r5
    bl _ZN11MatchEngine13func_0206c834Ev
    ldmia sp!, {r3, r4, r5, pc}
@L_01ff8674:
    mov r0, r5
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    beq @L_01ff8698
    cmp r4, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl _ZN11MatchEngine13func_0206c834Ev
    ldmia sp!, {r3, r4, r5, pc}
@L_01ff8698:
    add r0, r5, #0x11000
    ldr r0, [r0, #0x8b0]
    cmp r0, #2
    ldreqb r0, [r4, #0xf2]
    addeq r0, r0, #1
    streqb r0, [r4, #0xf2]
    beq @L_01ff86c4
    cmp r0, #3
    ldreqb r0, [r4, #0xf2]
    addeq r0, r0, #2
    streqb r0, [r4, #0xf2]
@L_01ff86c4:
    ldrb r0, [r4, #0xf2]
    cmp r0, #2
    blo @L_01ff86dc
    mov r0, r5
    mov r1, r4
    bl func_ov087_0217a538
@L_01ff86dc:
    add r0, r5, #0x11000
    ldr r0, [r0, #0x8b4]
    cmp r0, #3
    bne @L_01ff86f8
    mov r0, r5
    mov r1, #4
    b @L_01ff8710
@L_01ff86f8:
    cmp r0, #2
    mov r0, r5
    bne @L_01ff870c
    mov r1, #2
    b @L_01ff8710
@L_01ff870c:
    mov r1, #3
@L_01ff8710:
    bl _ZN11MatchEngine13func_0206bfb4Ei
    mov r0, r5
    mov r1, #7
    bl _ZN11MatchEngine13func_0206bff4Ei
    mov r0, r4
    bl func_02083e54
    mov r1, r0
    mov r0, r5
    bl _ZN11MatchEngine13func_0206bfa0Eh
    mov r4, #4
    ldr r2, =0x10008
    mov r0, r5
    mov r1, r4
    str r4, [r5, #0xba8]
    str r2, [r5, #0xba4]
    bl func_ov087_0217ae40
    sub r1, r4, #5
    add r0, r5, #0x11000
    strb r1, [r0, #0x8a7]
    strb r1, [r0, #0x8a8]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ff876c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    ldr r4, =data_020c4920
    mov r6, r0
    ldr r0, [r4, #0x48]
    mov r8, #1
    bl func_ov015_02130ae8
    mov r7, #0
    mov r5, r0
    mov r0, r6
    strb r7, [sp, #5]
    strb r7, [sp, #4]
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r9, r8
    mov r0, r6
    mov r1, r4
    mov r2, r9
    bl func_ov015_02140ef8
    cmp r0, #0
    beq @L_01ff8974
    ldrb r0, [r4, #0x59]
    tst r0, #2
    moveq r9, r7
    cmp r9, #0
    bne @L_01ff87fc
    mov r9, #0
    ldr r1, =data_020c4948
    mov r0, r6
    mov r2, r4
    mov r3, r9
    bl func_ov087_02176efc
    cmp r0, #0
    bne @L_01ff8810
@L_01ff87fc:
    ldr r0, =data_020c4920
    mov r1, #1
    bl func_ov015_02142dfc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ff8810:
    ldrb r0, [r4, #0x59]
    mov r7, r9
    tst r0, #2
    movne r9, #1
    cmp r9, #0
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6
    bl _ZN11MatchEngine13func_0206bfa8Ev
    mov r1, r0
    mov r0, r6
    bl _ZN11MatchEngine13func_0206c820Ei
    cmp r0, #0
    bne @L_01ff8938
    add r12, sp, #5
    mov r0, r6
    mov r1, r4
    mov r2, r8
    mov r3, r7
    str r12, [sp]
    bl func_ov015_0213fc58
    cmp r0, #0
    beq @L_01ff88c8
    cmp r5, #0
    beq @L_01ff8884
    mov r0, r5
    bl func_ov015_02131970
    cmp r0, #1
    bne @L_01ff88a0
@L_01ff8884:
    mov r0, r6
    mov r1, #0
@L_01ff888c:
    bl _ZN11MatchEngine13func_0206b47cEi
    mov r1, r0
    mov r0, r6
    bl func_ov087_0217aba0
    b @L_01ff8938
@L_01ff88a0:
    mov r0, r6
    mov r1, r7
    bl _ZN11MatchEngine13func_0206b47cEi
    mov r3, r0
    mov r0, r6
    mov r1, r5
    mov r2, #0x11
    bl func_ov087_02174aec
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ff88c8:
    add r12, sp, #4
    mov r0, r6
    mov r1, r4
    mov r2, r7
    mov r3, r7
    str r12, [sp]
    bl func_ov015_0213fc58
    cmp r0, #0
    beq @L_01ff8938
    cmp r5, #0
    beq @L_01ff8904
    mov r0, r5
    bl func_ov015_02131970
    cmp r0, #0
    bne @L_01ff8910
@L_01ff8904:
    mov r0, r6
    mov r1, #1
    b @L_01ff888c
@L_01ff8910:
    mov r0, r6
    mov r1, r8
    bl _ZN11MatchEngine13func_0206b47cEi
    mov r3, r0
    mov r0, r6
    mov r1, r5
    mov r2, #0x11
    bl func_ov087_02174aec
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ff8938:
    ldrb r0, [sp, #5]
    cmp r0, #0
    ldreqb r0, [sp, #4]
    cmpeq r0, #0
    bne @L_01ff8960
    ldr r0, =data_020c4920
    mov r1, #1
    bl func_ov015_02142dfc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ff8960:
    ldr r0, =data_020c4920
    mov r1, #0
    bl func_ov015_02142dfc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ff8974:
    mov r0, r4
    mov r1, r7
    bl func_ov015_02142dfc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ff8990(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r0
    mov r1, #1
    ldr r4, =data_020c4920
    mov r6, #3
    mov r5, #7
    bl func_ov087_0217ae40
    mov r0, r10
    bl func_01ff9684
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfecEv
    cmp r0, #7
    bne @L_01ff89fc
    add r0, r10, #0x6c
    bl func_02084788
    cmp r0, #0
    ldrne r0, [r4, #0x28]
    add r1, r10, #0x6c
    strne r0, [r10, #0x6c]
    ldrne r0, [r4, #0x2c]
    mov r2, #0x1000
    strne r0, [r10, #0x70]
    mov r0, r10
    bl _ZN11MatchEngine13func_020670ecEPll
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ff89fc:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfecEv
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r9, [r4, #0x48]
    ldr r8, [r4, #0x2c]
    cmp r9, #0
    ldrlt r9, [r4, #0x4c]
    mov r0, r9
    bl func_ov015_02130ae8
    mov r7, r0
    mov r0, r10
    bl func_ov015_02143664
    cmp r0, #0
    beq @L_01ff8a40
    ldrsb r0, [r0, #0xc]
    bl func_ov015_02130ae8
@L_01ff8a40:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    bne @L_01ff8a98
    cmp r7, #0
    beq @L_01ff8a8c
    mov r0, r7
    bl func_02083e54
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfa0Eh
    mov r0, r10
    bl _ZN11MatchEngine13func_0206c644Ev
    cmp r0, #0
    beq @L_01ff8a98
    mov r0, r10
    mov r1, #2
    bl func_ov001_021280bc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ff8a8c:
    mov r0, r10
    mov r1, #0
    bl _ZN11MatchEngine13func_0206bfa0Eh
@L_01ff8a98:
    ldr r0, =data_020c4de0
    ldr r1, [r0, #0xe0]
    cmp r8, r1
    bgt @L_01ff8b54
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r7, #0
    beq @L_01ff8ae0
    mov r0, r9
    bl func_ov015_02131948
    cmp r0, #1
    beq @L_01ff8b14
@L_01ff8ae0:
    mov r0, r10
    mov r1, #6
    bl _ZN11MatchEngine13func_0206bfb4Ei
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0206bff4Ei
    ldrb r1, [r4, #0x56]
    mov r0, r10
    bl func_ov015_02140da4
    cmp r0, #0
    strne r6, [r10, #0xba8]
    strne r5, [r10, #0xba4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ff8b14:
    mov r0, r10
    mov r1, r5
    bl _ZN11MatchEngine13func_0206bfb4Ei
    mov r0, r10
    mov r1, #4
    bl _ZN11MatchEngine13func_0206bff4Ei
    ldrb r1, [r4, #0x57]
    mov r0, r10
    bl func_ov015_02140da4
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r4, #0x56]
    cmp r0, #0x10
    streq r6, [r10, #0xba8]
    streq r5, [r10, #0xba4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ff8b54:
    ldr r0, [r0, #0xe8]
    cmp r8, r0
    mov r0, r10
    blt @L_01ff8c0c
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r9, #0
    blt @L_01ff8b98
    mov r0, r9
    bl func_ov015_02131948
    cmp r0, #1
    bne @L_01ff8bcc
@L_01ff8b98:
    mov r0, r10
    mov r1, #6
    bl _ZN11MatchEngine13func_0206bfb4Ei
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0206bff4Ei
    ldrb r1, [r4, #0x56]
    mov r0, r10
    bl func_ov015_02140da4
    cmp r0, #0
    strne r6, [r10, #0xba8]
    strne r5, [r10, #0xba4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ff8bcc:
    mov r0, r10
    mov r1, r5
    bl _ZN11MatchEngine13func_0206bfb4Ei
    mov r0, r10
    mov r1, #4
    bl _ZN11MatchEngine13func_0206bff4Ei
    ldrb r1, [r4, #0x57]
    mov r0, r10
    bl func_ov015_02140da4
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r4, #0x56]
    cmp r0, #0x10
    streq r6, [r10, #0xba8]
    streq r5, [r10, #0xba4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ff8c0c:
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    mov r1, #5
    bl _ZN11MatchEngine13func_0206bfb4Ei
    mov r0, r10
    mov r1, #2
    bl _ZN11MatchEngine13func_0206bff4Ei
    ldrb r1, [r4, #0x56]
    mov r0, r10
    bl func_ov015_02140da4
    cmp r0, #0
    strne r6, [r10, #0xba8]
    strne r5, [r10, #0xba4]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_01ff8c54(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r3, [r1, #0x4c]
    ldrb r1, [r1, #0x5c]
    cmp r2, r3
    addne sp, sp, #8
    ldmneia sp!, {r3, pc}
    sub r1, r1, #1
    cmp r1, #6
    addhi sp, sp, #8
    ldmhiia sp!, {r3, pc}
    mov r12, #1
    mov r1, r2
    str r12, [sp]
    sub r2, r12, #2
    mov r3, #4
    str r12, [sp, #4]
    bl func_ov087_0217a640
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void func_01ff8ca4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    mov r4, #0
    str r2, [sp, #8]
    mov r9, r1
    mov r10, r0
    ldr r5, =data_020c4920
    str r3, [sp, #0xc]
    mov r1, r4
    str r1, [sp, #0x10]
    mov r0, r9
    ldr r5, [r5, #0x4c]
    str r4, [sp, #0x20]
    bl func_ov015_02130ae8
    movs r6, r0
    addeq sp, sp, #0x24
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r5
    bl func_ov015_02130ae8
    mov r11, r0
    mov r0, r10
    mov r1, r9
    bl func_01fff3cc
    cmp r0, #0
    beq @L_01ff8d1c
    mov r0, r6
    bl func_02080b90
    mov r1, r0
    mov r0, r10
    bl func_ov087_0217c274
@L_01ff8d1c:
    ldr r1, =data_020c4920
    mov r0, r10
    mov r2, r9
    bl func_01ff8c54
    mov r8, #0
    mov r4, r8
    mov r7, r8
    cmp r11, #0
    beq @L_01ff8d54
    mov r0, r11
    mov r1, r6
    bl func_ov015_021318a4
    cmp r0, #0
    movne r7, #1
@L_01ff8d54:
    cmp r7, #0
    beq @L_01ff8d74
    ldr r1, =data_020c4920
    mov r0, r10
    ldrb r1, [r1, #0x56]
    bl func_ov015_02140df0
    cmp r0, #0
    moveq r4, #1
@L_01ff8d74:
    cmp r4, #0
    beq @L_01ff8d94
    ldr r1, =data_020c4920
    mov r0, r10
    ldrb r1, [r1, #0x56]
    bl func_ov015_02140dcc
    cmp r0, #0
    moveq r8, #1
@L_01ff8d94:
    mov r2, #1
    cmp r8, #0
    moveq r2, #0
    add r0, r10, #0x11000
    strb r2, [r0, #0x8de]
    ldr r1, =data_020c4920
    mov r0, r10
    ldrb r1, [r1, #0x56]
    bl func_ov015_02140da4
    cmp r0, #0
    ldr r0, =data_020c4920
    mov r8, #1
    ldrb r0, [r0, #0x59]
    moveq r8, #0
    ldr r1, =data_020c4920
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    movne r0, #1
    strne r0, [sp, #0x1c]
    moveq r0, #0
    streq r0, [sp, #0x1c]
    ldr r0, =data_020c4920
    ldrb r0, [r0, #0x5d]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    movne r0, #1
    strne r0, [sp, #0x18]
    moveq r0, #0
    streq r0, [sp, #0x18]
    ldrb r1, [r1, #0x56]
    mov r0, r10
    bl func_ov015_02140df0
    cmp r0, #0
    movne r0, #1
    strne r0, [sp, #0x14]
    moveq r0, #0
    streq r0, [sp, #0x14]
    ldr r0, =data_020c4920
    ldrb r0, [r0, #0x5d]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_01ff8e70
    ldr r0, =data_020c4920
    ldrb r0, [r0, #0x5d]
    tst r0, #4
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_01ff8e78
@L_01ff8e70:
    mov r0, #1
    strb r0, [sp, #0x48]
@L_01ff8e78:
    ldr r4, =data_020c4920
    mov r1, r9
    mov r0, r4
    bl func_ov015_02142e88
    cmp r0, #0
    beq @L_01ff8e9c
    mov r0, r4
    mov r1, #1
    bl func_ov015_02142e38
@L_01ff8e9c:
    mov r0, r9, lsl #0x18
    mov r1, r0, asr #0x18
    ldr r0, =data_020c4920
    cmp r9, #0
    str r1, [r0, #0x48]
    mvnge r1, #0
    strge r1, [r0, #0x4c]
    ldr r4, =data_020c4920
    mov r0, #0x80000000
    str r0, [r4, #0x18]
    str r0, [r4, #0x1c]
    ldrb r1, [r4, #0x56]
    mov r7, #0
    mov r0, r4
    strb r1, [r4, #0x57]
    strb r7, [r4, #0x56]
    mov r1, r7
    bl func_ov015_02142ec8
    strb r7, [r4, #0x5a]
    strb r7, [r4, #0x5c]
    ldr r0, =gGameState
    strb r7, [r4, #0x5d]
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    bne @L_01ff8f5c
    mov r0, r6
    bl func_02083e54
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206c00cEi
    cmp r0, #0
    beq @L_01ff8f64
    bl func_020841d8
    b @L_01ff8f64
@L_01ff8f24:
    mov r0, r6
    bl func_02080b90
    mov r4, r0
    mov r0, r7
    bl func_ov015_021319fc
    cmp r4, r0
    beq @L_01ff8f58
    mov r0, r10
    mov r1, r7
    bl _ZN11MatchEngine13func_0206c018Ei
    cmp r0, #0
    beq @L_01ff8f58
    bl func_020841d8
@L_01ff8f58:
    add r7, r7, #1
@L_01ff8f5c:
    cmp r7, #5
    blt @L_01ff8f24
@L_01ff8f64:
    cmp r11, #0
    cmpne r6, #0
    beq @L_01ff9058
    ldrh r0, [r6, #0xf0]
    tst r0, #0x20
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_01ff9058
    bl func_ov015_0213178c
    cmp r0, #0
    bne @L_01ff9058
    ldr r0, [sp, #0x1c]
    cmp r0, #0
    cmpeq r8, #0
    ldreq r0, [sp, #0x14]
    cmpeq r0, #0
    ldreqb r0, [sp, #0x48]
    cmpeq r0, #0
    bne @L_01ff8fc0
    ldr r0, [sp, #0xc]
    cmp r0, #0
    bne @L_01ff8fe4
@L_01ff8fc0:
    mov r4, #0
    mov r0, r10
    mov r1, r4
    mov r2, r4
    bl func_ov087_0217cd20
    mov r2, r4
    mov r0, r10
    mov r1, #1
    b @L_01ff9054
@L_01ff8fe4:
    cmp r9, r5
    bne @L_01ff8ffc
    ldr r0, [sp, #0x18]
    cmp r0, #0
    beq @L_01ff9058
    b @L_01ff9030
@L_01ff8ffc:
    ldr r0, [sp, #0x18]
    cmp r0, #0
    bne @L_01ff9030
    mov r0, r11
    mov r1, r6
    bl func_ov015_021318a4
    cmp r0, #0
    beq @L_01ff9030
    mov r0, r10
    mov r1, #0
    mov r2, r6
    bl func_ov087_0217a324
    b @L_01ff9058
@L_01ff9030:
    mov r0, r10
    mov r1, #1
    mov r2, r6
    bl func_ov087_0217a324
    mov r0, r6
    bl func_02083e54
    mov r1, r0
    mov r0, r10
    mov r2, #0
@L_01ff9054:
    bl func_ov087_0217cd20
@L_01ff9058:
    cmp r11, #0
    cmpne r6, #0
    beq @L_01ff9114
    ldr r0, [sp, #0x1c]
    cmp r0, #0
    cmpeq r8, #0
    ldreq r0, [sp, #0x14]
    cmpeq r0, #0
    ldreqb r0, [sp, #0x48]
    cmpeq r0, #0
    bne @L_01ff9090
    ldr r0, [sp, #0xc]
    cmp r0, #0
    bne @L_01ff9094
@L_01ff9090:
    b @L_01ff9104
@L_01ff9094:
    cmp r9, r5
    beq @L_01ff9114
    ldr r0, [sp, #0x18]
    cmp r0, #0
    bne @L_01ff90f8
    mov r0, r11
    mov r1, r6
    bl func_ov015_021318a4
    cmp r0, #0
    beq @L_01ff90f8
    mov r0, r6
    bl func_02080b90
    add r0, r10, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x8d9]
    cmp r0, #0x80
    bhs @L_01ff9114
    mov r0, r6
    bl func_02080b90
    add r1, r10, #0xd9
    add r2, r1, #0x11800
    ldrb r1, [r2, r0]
    add r1, r1, #1
    strb r1, [r2, r0]
    b @L_01ff9114
@L_01ff90f8:
    mov r0, r10
    mov r1, r6
    bl func_ov087_0217e540
@L_01ff9104:
    add r0, r10, #0x11000
    mov r1, #0
    strb r1, [r0, #0x8d9]
    strb r1, [r0, #0x8da]
@L_01ff9114:
    ldr r0, [sp, #8]
    cmp r0, #0
    beq @L_01ff93d4
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    bne @L_01ff93d4
    cmp r8, #0
    beq @L_01ff91a4
    cmp r5, #0
    blt @L_01ff91a4
    mov r0, r10
    bl func_ov015_02143664
    ldrh r1, [r6, #0xf0]
    str r0, [sp, #0x20]
    tst r1, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_01ff918c
    mov r0, r5
    mov r1, r9
    bl func_ov015_02131854
    cmp r0, #0
    bne @L_01ff918c
    mov r0, r10
    ldr r1, [sp, #0x20]
    mov r2, #2
    mov r3, #0
    b @L_01ff919c
@L_01ff918c:
    ldr r1, [sp, #0x20]
    mov r0, r10
    mov r2, #0
    mov r3, #4
@L_01ff919c:
    bl func_ov015_02143548
    str r0, [sp, #0x20]
@L_01ff91a4:
    ldrh r0, [r6, #0xf0]
    tst r0, #0x40
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrh r0, [r6, #0xf0]
    beq @L_01ff926c
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_01ff9320
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0207903cEP11MatchPlayer
    cmp r0, #0
    beq @L_01ff9258
    mov r7, #0
    mov r0, r10
    mov r1, r6
    mov r3, r7
    str r7, [sp]
    mov r4, #1
    str r4, [sp, #4]
    mov r2, #0x3c
    bl _ZN11MatchEngine13func_02063550EP11MatchPlayertihi
    cmp r5, #0
    blt @L_01ff9258
    ldr r0, =data_020c4920
    mov r1, r5
    ldr r0, [r0, #0x48]
    bl func_ov015_02131854
    cmp r0, #0
    bne @L_01ff9258
    ldr r1, [r6, #0xe8]
    ldr r0, [r6, #0xec]
    ldrb r3, [r1, #0x1a]
    ldrh r2, [r0, #0x1c]
    mov r0, r10
    mov r1, r6
    stmia sp, {r7, r8}
    bl func_ov087_021748a4
    cmp r0, #0
    moveq r4, r7
    str r4, [sp, #0x10]
@L_01ff9258:
    ldr r0, [sp, #0x10]
    mov r2, #0
    cmp r0, #0
    bne @L_01ff9320
    b @L_01ff9300
@L_01ff926c:
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_01ff9320
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0207903cEP11MatchPlayer
    cmp r0, #0
    beq @L_01ff92f0
    cmp r5, #0
    ldr r0, =data_020c4920
    blt @L_01ff92f0
    ldr r0, [r0, #0x48]
    mov r1, r5
    bl func_ov015_02131854
    cmp r0, #0
    bne @L_01ff92f0
    ldr r1, [r6, #0xe8]
    ldr r0, [r6, #0xec]
    ldrb r3, [r1, #0x1a]
    ldrh r2, [r0, #0x1c]
    mov r0, #0
    str r0, [sp, #0x10]
    ldr r1, [sp, #0x10]
    mov r0, r10
    str r1, [sp]
    mov r1, r6
    str r8, [sp, #4]
    bl func_ov087_021748a4
    cmp r0, #0
    movne r0, #1
    strne r0, [sp, #0x10]
@L_01ff92f0:
    ldr r0, [sp, #0x10]
    mov r2, #0
    cmp r0, #0
    bne @L_01ff9320
@L_01ff9300:
    ldr r0, [r6, #0xe8]
    mov r1, r6
    ldrb r3, [r0, #0x1a]
    ldr r0, =g3DFieldSprite
    str r2, [sp]
    ldr r0, [r0]
    mov r2, #8
    bl func_ov015_0213a75c
@L_01ff9320:
    cmp r8, #0
    beq @L_01ff9384
    ldr r0, [sp, #0x10]
    cmp r0, #0
    bne @L_01ff9384
    ldr r0, [sp, #0x20]
    cmp r0, #0
    beq @L_01ff9384
    mov r0, r11
    mov r1, r6
    bl func_ov015_021318a4
    cmp r0, #0
    bne @L_01ff9384
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_02078fa4EP11MatchPlayer
    cmp r0, #0
    beq @L_01ff9384
    mov r0, r10
    mov r1, #0xd
    bl _ZN11MatchEngine13func_0206bff4Ei
    mov r1, #2
    mov r0, #7
    str r1, [r10, #0xba8]
    str r0, [r10, #0xba4]
@L_01ff9384:
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0206a54cEP11MatchPlayer
    cmp r0, #0
    beq @L_01ff93a4
    mov r0, r10
    mov r1, r6
    bl func_ov087_02174d74
@L_01ff93a4:
    ldrh r0, [r6, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_01ff93d4
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    bne @L_01ff93d4
    mov r0, #2
    bl func_ov015_02131704
@L_01ff93d4:
    mov r0, r9
    ldr r4, =data_020c4920
    mov r5, #1
    bl func_ov015_02130ae8
    mov r1, r0
    ldrb r3, [sp, #0x4c]
    ldr r2, [sp, #0xc]
    mov r0, r10
    bl func_ov087_0217a858
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #5
    addne sp, sp, #0x24
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r4, #0x59]
    tst r0, #2
    movne r0, r5
    moveq r0, #0
    cmp r0, #0
    addne sp, sp, #0x24
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r6, #0xe8]
    ldrb r0, [r0, #0x1d]
    cmp r0, #6
    addeq sp, sp, #0x24
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_020c4de0
    ldr r1, [r4]
    ldr r0, [r0, #0xd4]
    mov r3, #2
    cmp r1, r0
    ldr r0, =g3DFieldSprite
    str r5, [sp]
    ldr r0, [r0]
    movge r3, #6
    mov r1, r6
    mov r2, #6
    bl func_ov015_0213a75c
    mov r0, #0x1c000
    str r0, [r4, #0x30]
    str r0, [r4, #8]
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ff9490(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    cmp r2, #0
    ldr r4, =data_020c4920
    beq @L_01ff95ec
    ldr r2, [r6, #0xe8]
    ldr r0, [r4]
    ldr r1, [r2]
    mov r3, #1
    cmp r0, r1
    ldreq r1, [r2, #4]
    ldreq r0, [r4, #4]
    mov r5, #1
    cmpeq r0, r1
    moveq r3, #0
    cmp r3, #0
    mov r0, r7
    mov r1, r6
    moveq r5, #0
    bl _ZN11MatchEngine13func_02078f8cEP11MatchPlayer
    cmp r0, #0
    beq @L_01ff950c
    ldr r1, [r6, #0xe8]
    ldr r0, [r4, #4]
    ldr r1, [r1, #4]
    subs r0, r1, r0
    rsbmi r0, r0, #0
    cmp r0, #0x4b000
    movlt r5, #0
    b @L_01ff9540
@L_01ff950c:
    mov r0, r7
    mov r1, r6
    bl _ZN11MatchEngine13func_02078fa4EP11MatchPlayer
    cmp r0, #0
    beq @L_01ff9540
    mov r0, r6
    bl func_ov015_02131970
    mov r1, r0
    ldr r2, [r6, #0xe8]
    mov r0, r7
    bl _ZN11MatchEngine13func_02068590Eii
    cmp r0, #0
    movne r5, #0
@L_01ff9540:
    cmp r5, #0
    beq @L_01ff955c
    ldr r0, [r6, #0xe8]
    mov r1, r4
    bl func_020840b4
    mov r5, r0
    b @L_01ff95cc
@L_01ff955c:
    mov r0, r6
    bl func_ov015_02131970
    cmp r0, #1
    mov r5, #0x4000
    mov r0, r7
    mov r1, r6
    movne r5, #0xc000
    bl _ZN11MatchEngine13func_02078f8cEP11MatchPlayer
    cmp r0, #0
    beq @L_01ff95cc
    ldr r0, [r6, #0xe8]
    mov r1, r4
    bl func_020840b4
    mov r1, r0, lsl #0x10
    mov r0, r5
    mov r1, r1, lsr #0x10
    bl func_020840e0
    cmp r0, #0x1000
    addgt r0, r5, #0x1000
    movgt r0, r0, lsl #0x10
    movgt r5, r0, lsr #0x10
    bgt @L_01ff95cc
    mov r1, #0x1000
    rsb r1, r1, #0
    cmp r0, r1
    addlt r0, r5, #0xf000
    movlt r0, r0, lsl #0x10
    movlt r5, r0, lsr #0x10
@L_01ff95cc:
    ldr r1, [r6, #0xe8]
    mov r0, r5
    strh r5, [r1, #0x18]
    bl func_ov015_02130e28
    mov r1, r0
    mov r0, r6
    mov r2, #0
    bl _ZN11MatchEngine13func_0207f38cEP11MatchPlayerhi
@L_01ff95ec:
    ldr r0, [r6, #0xec]
    mov r2, #0
    str r2, [r0, #0x10]
    ldr r1, [r6, #0xec]
    ldr r0, =g3DFieldSprite
    str r2, [r1, #0x14]
    ldr r3, [r6, #0xec]
    mov r1, r6
    str r2, [r3, #0x18]
    ldr r3, [r6, #0xe8]
    ldrb r3, [r3, #0x1a]
    str r2, [sp]
    ldr r0, [r0]
    bl func_ov015_0213a75c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_01ff9630(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl _ZN11MatchEngine13func_0206bfecEv
    mov r4, r0
    mov r0, r5
    bl _ZN11MatchEngine13func_0206bfa8Ev
    mov r2, r0
    ldr r0, [r5, #0xb80]
    mov r1, r4
    ldr r3, [r0]
    ldr r3, [r3, #8]
    blx r3
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl func_ov087_0217b90c
    mov r0, r5
    bl _ZN11MatchEngine13func_0206d4ecEv
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ff9684(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl _ZN11MatchEngine13func_0206bfecEv
    mov r4, r0
    mov r0, r5
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #1
    bne @L_01ff96b4
    sub r0, r4, #8
    cmp r0, #4
    movls r0, #1
    ldmlsia sp!, {r3, r4, r5, pc}
@L_01ff96b4:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ff96bc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, =data_020d9978
    mov r4, r1
    bl _ZN11TreasureBox13func_02052600Ev
    ldr r1, =0x1019
    cmp r0, r1
    bne @L_01ff96f8
    ldr r0, =gGameState
    ldr r3, [r0, #0xa8]
    cmp r3, #0
    ldrne r2, [r0]
    movne r1, #0
    strne r2, [r3]
    strne r1, [r0, #0xa8]
@L_01ff96f8:
    add r0, r5, #0x11000
    ldrb r0, [r0, #0x910]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    beq @L_01ff9720
    cmp r4, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_01ff9720:
    add r0, r5, #0xb00
    ldr r2, =gGameState
    ldrh r1, [r0, #0x90]
    ldr r3, [r2]
    add r0, r5, #0x17c0
    add r3, r3, r1
    str r3, [r2]
    ldr r3, [r2, #4]
    add r0, r0, #0x10000
    add r3, r3, r1
    str r3, [r2, #4]
    bl func_0209df60
    add r0, r5, #0x11000
    ldrb r0, [r0, #0x911]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0xc20]
    cmp r0, #0
    subgt r0, r0, #1
    strgt r0, [r5, #0xc20]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ff9780(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r8, #0
    ldr r4, =0xfeff
    mov r10, r0
    mov r9, r1
    mov r11, r8
    mov r6, #1
    mov r5, r8
@L_01ff97a0:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_01ff9948
    ldrh r0, [r7, #0xf0]
    tst r0, #8
    movne r0, r6
    moveq r0, r11
    cmp r0, #0
    beq @L_01ff9948
    cmp r9, #0
    beq @L_01ff9810
    mov r0, r7
    bl func_02080b38
    cmp r0, #0
    beq @L_01ff9810
    ldr r2, [r7, #0xec]
    mov r0, r7
    ldrh r1, [r2, #0x1e]
    sub r1, r1, #1
    strh r1, [r2, #0x1e]
    bl func_02080b38
    cmp r0, #0
    bne @L_01ff9810
    mov r0, r10
    mov r1, r7
    mov r2, #0
    bl func_ov087_0217d0ac
@L_01ff9810:
    ldr r1, [r7, #0xe8]
    ldrh r0, [r1, #0x12]
    cmp r0, #0
    beq @L_01ff9850
    sub r0, r0, #1
    strh r0, [r1, #0x12]
    ldr r1, [r7, #0xe8]
    ldrh r0, [r1, #0x14]
    add r0, r0, #1
    strh r0, [r1, #0x14]
    ldr r1, [r7, #0xe8]
    ldrh r0, [r1, #0x12]
    cmp r0, #0
    streqb r5, [r1, #0x1c]
    streqh r5, [r1, #0x12]
    streqh r5, [r1, #0x14]
@L_01ff9850:
    ldr r1, [r7, #0xec]
    ldrsh r0, [r1, #0x24]
    cmp r0, #0
    ldrgtsh r0, [r1, #0x24]
    subgt r0, r0, #1
    strgth r0, [r1, #0x24]
    ldr r1, [r7, #0xec]
    ldrsh r0, [r1, #0x26]
    cmp r0, #0
    ldrgtsh r0, [r1, #0x26]
    subgt r0, r0, #1
    strgth r0, [r1, #0x26]
    bgt @L_01ff9898
    ldr r1, [r7, #0xe8]
    cmp r1, #0
    ldrneh r0, [r1, #0x16]
    andne r0, r0, r4
    strneh r0, [r1, #0x16]
@L_01ff9898:
    ldr r1, [r7, #0xec]
    ldrb r0, [r1, #0x30]
    cmp r0, #0
    ldrneb r0, [r1, #0x30]
    subne r0, r0, #1
    strneb r0, [r1, #0x30]
    mov r0, r7
    bl func_02080aa0
    cmp r0, #0
    ldrne r1, [r7, #0xec]
    ldrnesh r0, [r1, #0x22]
    subne r0, r0, #1
    strneh r0, [r1, #0x22]
    mov r0, r10
    mov r1, r7
    bl _ZN11MatchEngine13func_02078fa4EP11MatchPlayer
    cmp r0, #0
    beq @L_01ff9918
    mov r0, r7
    bl func_020847b0
    cmp r0, #0
    beq @L_01ff9918
    ldr r1, [r7, #0xec]
    mov r0, r10
    ldrh r1, [r1, #0x1c]
    bl _ZN11MatchEngine13func_0206c7e0Ei
    cmp r0, #0
    ldrne r1, [r7, #0xec]
    ldrneh r0, [r1, #0x2a]
    addne r0, r0, #1
    strneh r0, [r1, #0x2a]
    bne @L_01ff9948
@L_01ff9918:
    mov r0, r7
    bl func_020847b0
    cmp r0, #0
    beq @L_01ff9948
    mov r0, r10
    mov r1, r7
    bl func_01ffed54
    cmp r0, #0
    ldreq r1, [r7, #0xec]
    ldreqh r0, [r1, #0x2a]
    addeq r0, r0, #1
    streqh r0, [r1, #0x2a]
@L_01ff9948:
    add r8, r8, #1
    cmp r8, #0x20
    blt @L_01ff97a0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ff995c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r0, =data_020c4de0
    ldr r5, =data_020c4920
    ldr r2, [r0, #0xd4]
    mov r4, #1
    str r2, [r5]
    ldr r1, [r0, #0xd8]
    mov r6, #0
    str r1, [r5, #4]
    str r6, [r5, #0x30]
    strb r6, [r5, #0x56]
    mov r0, #0x80000000
    str r0, [r5, #0x18]
    str r0, [r5, #0x1c]
    str r2, [r5, #0xc]
    str r1, [r5, #0x10]
    ldr r2, [r5, #8]
    mov r0, r5
    mov r1, r4
    str r2, [r5, #0x14]
    bl func_ov015_02142de8
    mov r0, r5
    mov r1, r4
    bl func_ov015_02142e24
    str r6, [r5, #0x34]
    str r6, [r5, #0x38]
    str r6, [r5, #0x3c]
    str r6, [r5, #0x30]
    str r6, [r5, #0x40]
    strb r6, [r5, #0x5a]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_01ff99e0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r3, =data_020c4ebc
    cmp r1, #0
    ldmia r3, {r0, r12}
    blt @L_01ff9a18
    ldr r5, [r3, #8]
    ldr r4, =0x51eb851f
    sub r5, r5, r0
    mul r5, r1, r5
    smull r1, r6, r4, r5
    mov r1, r5, lsr #0x1f
    add r6, r1, r6, asr #5
    add r0, r0, r6
    b @L_01ff9a3c
@L_01ff9a18:
    ldr r4, [r3, #8]
    rsb r5, r1, #0
    sub r1, r4, r0
    mul r6, r5, r1
    ldr r4, =0x51eb851f
    mov r1, r6, lsr #0x1f
    smull lr, r5, r4, r6
    add r5, r1, r5, asr #5
    sub r0, r0, r5
@L_01ff9a3c:
    cmp r2, #0
    ldr r4, [r3, #0xc]
    ldr r1, [r3, #4]
    ldr r3, =0x51eb851f
    blt @L_01ff9a6c
    sub r1, r4, r1
    mul r4, r2, r1
    smull r1, r2, r3, r4
    mov r1, r4, lsr #0x1f
    add r2, r1, r2, asr #5
    add r12, r12, r2
    b @L_01ff9a88
@L_01ff9a6c:
    rsb r2, r2, #0
    sub r1, r4, r1
    mul r4, r2, r1
    mov r1, r4, lsr #0x1f
    smull r2, r4, r3, r4
    add r4, r1, r4, asr #5
    sub r12, r12, r4
@L_01ff9a88:
    ldr r5, =data_020c4920
    mov r6, #0
    stmia r5, {r0, r12}
    str r6, [r5, #0x30]
    strb r6, [r5, #0x56]
    mov r1, #0x80000000
    str r1, [r5, #0x18]
    str r1, [r5, #0x1c]
    str r0, [r5, #0xc]
    str r12, [r5, #0x10]
    mov r4, #1
    ldr r2, [r5, #8]
    mov r0, r5
    mov r1, r4
    str r2, [r5, #0x14]
    bl func_ov015_02142de8
    mov r0, r5
    mov r1, r4
    bl func_ov015_02142e24
    str r6, [r5, #0x34]
    str r6, [r5, #0x38]
    str r6, [r5, #0x3c]
    str r6, [r5, #0x30]
    str r6, [r5, #0x40]
    strb r6, [r5, #0x5a]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_01ff9afc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r5, =data_020c4de0
    ldr r6, [r5, #0xd4]
    cmp r6, #0
    ldreq r2, [r5, #0xd8]
    cmpeq r2, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsh r1, [r5, #0xa8]
    ldrsh r4, [r5, #0xaa]
    ldrsh r0, [r5, #0xb4]
    add r3, r1, r1, lsr #31
    mov r1, r3, asr #1
    mov lr, r1, lsl #0x10
    add r0, r0, lr, asr #16
    strh r0, [r5, #0xb4]
    add r12, r4, r4, lsr #31
    mov r0, r12, asr #1
    ldrsh r7, [r5, #0xb6]
    mov r4, r0, lsl #0x10
    add r6, r6, r1, lsl #12
    add r7, r7, r4, asr #16
    strh r7, [r5, #0xb6]
    ldrsh r7, [r5, #0xb8]
    add r2, r2, r0, lsl #12
    add r7, r7, lr, asr #16
    strh r7, [r5, #0xb8]
    ldrsh r7, [r5, #0xba]
    add r7, r7, r4, asr #16
    strh r7, [r5, #0xba]
    ldrsh r7, [r5, #0xbc]
    add r7, r7, lr, asr #16
    strh r7, [r5, #0xbc]
    ldrsh r7, [r5, #0xbe]
    add r7, r7, r4, asr #16
    strh r7, [r5, #0xbe]
    ldrsh r7, [r5, #0xc0]
    add r7, r7, lr, asr #16
    strh r7, [r5, #0xc0]
    ldrsh lr, [r5, #0xc2]
    add r4, lr, r4, asr #16
    strh r4, [r5, #0xc2]
    ldr r4, [r5, #0xcc]
    add r3, r4, r3, asr #1
    str r3, [r5, #0xcc]
    ldr r3, [r5, #0xd0]
    add r3, r3, r12, asr #1
    str r3, [r5, #0xd0]
    str r6, [r5, #0xd4]
    str r2, [r5, #0xd8]
    ldr r2, [r5, #0xdc]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0xdc]
    ldr r2, [r5, #0xe0]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0xe0]
    ldr r2, [r5, #0xe4]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0xe4]
    ldr r2, [r5, #0xe8]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0xe8]
    ldr r2, [r5, #0xec]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0xec]
    ldr r2, [r5, #0xf0]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0xf0]
    ldr r2, [r5, #0xf4]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0xf4]
    ldr r2, [r5, #0xf8]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0xf8]
    ldr r2, [r5, #0xfc]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0xfc]
    ldr r2, [r5, #0x100]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x100]
    ldr r2, [r5, #0x104]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x104]
    ldr r2, [r5, #0x108]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x108]
    ldr r2, [r5, #0x10c]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x10c]
    ldr r2, [r5, #0x110]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x110]
    ldr r2, [r5, #0x114]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x114]
    ldr r2, [r5, #0x118]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x118]
    ldr r2, [r5, #0x11c]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x11c]
    ldr r2, [r5, #0x120]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x120]
    ldr r2, [r5, #0x124]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x124]
    ldr r2, [r5, #0x128]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x128]
    ldr r2, [r5, #0x12c]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x12c]
    ldr r2, [r5, #0x130]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x130]
    ldr r2, [r5, #0x134]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x134]
    ldr r2, [r5, #0x138]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x138]
    ldr r2, [r5, #0x13c]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x13c]
    ldr r2, [r5, #0x140]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x140]
    ldr r2, [r5, #0x144]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x144]
    ldr r2, [r5, #0x148]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x148]
    ldr r2, [r5, #0x14c]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x14c]
    ldr r2, [r5, #0x150]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x150]
    ldr r2, [r5, #0x154]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x154]
    ldr r2, [r5, #0x158]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x158]
    ldr r2, [r5, #0x15c]
    add r2, r2, r1, lsl #12
    str r2, [r5, #0x15c]
    ldr r2, [r5, #0x160]
    add r2, r2, r0, lsl #12
    str r2, [r5, #0x160]
    ldr r2, [r5, #0x164]
    add r1, r2, r1, lsl #12
    str r1, [r5, #0x164]
    ldr r1, [r5, #0x168]
    add r0, r1, r0, lsl #12
    str r0, [r5, #0x168]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_01ff9d78(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r3, #3
    mov r12, #1
    mov r2, #0xb
@L_01ff9d8c:
    mla r5, r4, r2, r0
    add r1, r5, #0x11000
    mov lr, r12
    strb r12, [r1, #0x7a4]
@L_01ff9d9c:
    add r1, r5, lr
    add r1, r1, #0x11000
    add lr, lr, #1
    strb r3, [r1, #0x7a4]
    cmp lr, #0xb
    blt @L_01ff9d9c
    add r4, r4, #1
    cmp r4, #2
    blt @L_01ff9d8c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ff9dc4(void)
{
    mov r1, #0
    str r1, [r0, #0xbb4]
    str r1, [r0, #0xbb8]
    str r1, [r0, #0xbbc]
    str r1, [r0, #0xbc0]
    str r1, [r0, #0xbc4]
    str r1, [r0, #0xbc8]
    str r1, [r0, #0xbcc]
    str r1, [r0, #0xbd0]
    str r1, [r0, #0xbd4]
    str r1, [r0, #0xbd8]
    str r1, [r0, #0xbdc]
    str r1, [r0, #0xbe4]
    str r1, [r0, #0xbe8]
    str r1, [r0, #0xbec]
    str r1, [r0, #0xbf0]
    str r1, [r0, #0xbf4]
    str r1, [r0, #0xbf8]
    str r1, [r0, #0xbfc]
    str r1, [r0, #0xc00]
    str r1, [r0, #0xc04]
    bx lr
}

asm void func_01ff9e1c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    ldr r8, =0xffff
    add r3, r5, #0x11800
    strh r8, [r3, #0x7a]
    mov r4, #0
    add r12, r5, #0x11000
    strh r8, [r3, #0x7e]
    ldrh r7, [r3, #0x7a]
    ldrh r6, [r3, #0x7e]
    add r0, r5, #0x3c4
    mov lr, #1
    mov r1, r4
    add r0, r0, #0x11400
    mov r2, #8
    strh r7, [r3, #0x78]
    strh r6, [r3, #0x7c]
    strh r8, [r3, #0x80]
    strb r4, [r12, #0x894]
    strb r4, [r12, #0x8f4]
    strb r4, [r12, #0x8b9]
    strb lr, [r12, #0x8ba]
    strb r4, [r12, #0x8bd]
    strh r4, [r3, #0x84]
    strb r4, [r12, #0x899]
    strb r4, [r12, #0x8bb]
    strb r4, [r12, #0x8bc]
    bl MI_CpuFill8
    add r0, r5, #0x11000
    add r1, r5, #0xb00
    strb r4, [r0, #0x898]
    strh r4, [r1, #0xb0]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_01ff9ea4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    ldr r0, =gConfig
    ldr r1, =data_020aee4c
    mov r4, #1
    ldr r6, =gConfig
    mov r5, #0
    bl _ZN10ConfigFile6GetIntEPKc
    add r1, r7, #0xb00
    strh r0, [r1, #0x90]
    ldrh r0, [r1, #0x90]
    cmp r0, #0
    moveq r0, #0xc
    streqh r0, [r1, #0x90]
    ldr r1, =data_020aee5c
    mov r0, r6
    bl _ZN10ConfigFile6GetIntEPKc
    add r1, r7, #0xb00
    strh r0, [r1, #0x92]
    ldr r1, =data_020aee70
    mov r0, r6
    bl _ZN10ConfigFile6GetIntEPKc
    mov r6, r0
    cmp r6, #0
    ble @L_01ff9f10
    cmp r6, #0x1e
    ble @L_01ff9f14
@L_01ff9f10:
    mov r6, #0xe
@L_01ff9f14:
    mov r0, r6
    bl _fflt
    mov r8, #0x3d800000
    mov r1, r0
    mov r0, r8
    bl _fmul
    mov r1, #0
    bl _fgr
    mov r0, r6
    bls @L_01ff9f68
    bl _fflt
    mov r1, r0
    mov r0, r8
    bl _fmul
    mov r1, r0
    sub r0, r8, #0xf8000000
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_01ff9f8c
@L_01ff9f68:
    bl _fflt
    mov r1, r0
    mov r0, r8
    bl _fmul
    mov r1, r0
    sub r0, r8, #0xf8000000
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@L_01ff9f8c:
    bl _ffix
    add r1, r7, #0x11000
    str r0, [r1, #0x91c]
    ldr r0, =gConfig
    ldr r1, =data_020aee80
    bl _ZN10ConfigFile6GetIntEPKc
    mov r6, r0
    cmp r6, #0
    ble @L_01ff9fb8
    cmp r6, #0x1e
    ble @L_01ff9fbc
@L_01ff9fb8:
    mov r6, #7
@L_01ff9fbc:
    mov r0, r6
    bl _fflt
    ldr r8, =0x3c4ccccd
    mov r1, r0
    mov r0, r8
    bl _fmul
    mov r1, #0
    bl _fgr
    mov r0, r6
    bls @L_01ffa010
    bl _fflt
    mov r1, r0
    mov r0, r8
    bl _fmul
    mov r1, r0
    ldr r0, =0x45800000
    bl _fmul
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_01ffa034
@L_01ffa010:
    bl _fflt
    mov r1, r0
    mov r0, r8
    bl _fmul
    mov r1, r0
    ldr r0, =0x45800000
    bl _fmul
    mov r1, #0x3f000000
    bl _fsub
@L_01ffa034:
    bl _ffix
    add r1, r7, #0x11000
    str r0, [r1, #0x920]
    ldr r0, =gConfig
    ldr r1, =data_020aee90
    bl _ZN10ConfigFile6GetIntEPKc
    mov r6, r0
    cmp r6, #0
    ldr r0, =gConfig
    ldr r1, =data_020aeea4
    movle r6, #0x1000
    add r2, r7, #0x11000
    str r6, [r2, #0x924]
    bl _ZN10ConfigFile6GetIntEPKc
    mov r6, r0
    cmp r6, #0
    ldr r0, =gConfig
    ldr r1, =data_020aeec0
    movle r6, #0
    add r2, r7, #0x11000
    str r6, [r2, #0x928]
    bl _ZN10ConfigFile6GetIntEPKc
    mov r6, r0
    cmp r6, #0
    ldr r1, [r7, #0xbf0]
    movle r6, #0xff
    add r0, r7, #0x11000
    str r6, [r0, #0x92c]
    cmp r1, #0
    bne @L_01ffa0d4
    mov r6, #0x1900
    ldr r0, =gAllocator
    mov r1, r6
    mov r2, r5
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    mov r1, r5
    mov r2, r6
    str r0, [r7, #0xbf0]
    bl MI_CpuFill8
@L_01ffa0d4:
    mov r0, r7
    bl func_01ffd8a8
    mov r0, r7
    bl func_01ffda2c
    mov r0, r7
    bl func_01ffdaa8
    mov r0, r7
    bl func_01ffdcf8
    mov r0, r7
    bl func_01ffd924
    mov r0, r7
    bl func_01ffddd0
    mov r0, r7
    bl func_01ffdb38
    mov r0, r7
    mov r1, #1
    bl func_01ffba14
    add r0, r7, #0x34c
    mov r1, r5
    mov r2, #0x60
    bl MI_CpuFill8
    add r0, r7, #0x3ac
    mov r1, r5
    mov r2, #0x20
    bl MI_CpuFill8
    add r0, r7, #0x1fc
    mov r1, r5
    mov r2, #0x30
    bl MI_CpuFill8
    ldr r2, =0x4cc
    add r0, r7, #0x6b0
    mov r1, r5
    bl MI_CpuFill8
    add r0, r7, #0x11000
    ldr r0, [r0, #0x7bc]
    cmp r0, #0
    bne @L_01ffa184
    mov r0, #0x1c
    bl _Znwm
    cmp r0, #0
    beq @L_01ffa17c
    bl _ZN15DistanceTable3213func_02061fe4Ev
@L_01ffa17c:
    add r1, r7, #0x11000
    str r0, [r1, #0x7bc]
@L_01ffa184:
    add r0, r7, #0x11000
    ldr r0, [r0, #0x7bc]
    bl _ZN15DistanceTable324InitEv
    add r0, r7, #0x11000
    ldr r0, [r0, #0x7bc]
    bl _ZN15DistanceTable3212CalcDistanceEv
    ldr r0, [r7, #0xbcc]
    cmp r0, #0
    bne @L_01ffa1ec
    mov r6, #0
    ldr r0, =gAllocator
    mov r2, r6
    mov r1, #0x400
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r7, #0xbcc]
    b @L_01ffa1e4
@L_01ffa1c8:
    mov r1, r6, lsr #0x1f
    ldr r2, [r7, #0xbcc]
    rsb r0, r1, r6, lsl #27
    add r2, r2, r6, lsl #4
    add r0, r1, r0, ror #27
    strb r0, [r2, #0xc]
    add r6, r6, #1
@L_01ffa1e4:
    cmp r6, #0x40
    blt @L_01ffa1c8
@L_01ffa1ec:
    ldr r2, =data_020caae0
    mov r3, #2
    mov r0, r7
    mov r1, r4
    strh r3, [r2, #0xdc]
    bl _ZN11MatchEngine13func_0206ce6cEt
    ldr r3, =gGameState
    mov r0, r7
    mov r1, r5
    mov r2, r5
    strb r4, [r3, #0x4f0]
    bl _ZN11MatchEngine13func_0206cca4Eha
    add r2, r7, #0x11000
    ldr r0, =gConfig
    ldr r1, =data_020aeedc
    strb r5, [r2, #0x897]
    strb r5, [r2, #0x89c]
    bl _ZN10ConfigFile6GetIntEPKc
    cmp r0, #0
    movlt r0, r5
    cmp r0, #0x64
    movgt r0, #0x64
    add r1, r7, #0x11000
    strb r0, [r1, #0x896]
    ldr r0, =gConfig
    ldr r1, =data_020aeef4
    bl _ZN10ConfigFile6GetIntEPKc
    add r1, r7, #0x11800
    strh r0, [r1]
    ldrsh r0, [r1]
    add r2, r7, #0x11000
    mov r6, #0
    cmp r0, #0
    strlth r5, [r1]
    ldr r0, =gConfig
    ldr r1, =data_020aef08
    strb r6, [r2, #0x8b8]
    bl _ZN10ConfigFile6GetIntEPKc
    cmp r0, #0
    ldr r1, [r7, #0xbf4]
    movne r6, #1
    add r0, r7, #0x11000
    mov r3, #1
    strb r6, [r0, #0x8a4]
    strb r3, [r0, #0x89d]
    cmp r1, #0
    bne @L_01ffa2bc
    ldr r0, =gAllocator
    mov r1, #0x2100
    mov r2, #0
    bl _ZN8GameHeap5AllocEiii
    str r0, [r7, #0xbf4]
@L_01ffa2bc:
    ldr r6, =data_020c4980
    mov r1, r7
    mov r0, r6
    bl _ZN15MatchPlayerList13func_0208350cEP11MatchEngine
    ldr r0, =data_020c49e0
    mov r1, r7
    ldr r2, [r0]
    ldr r2, [r2, #0x38]
    blx r2
    mov r0, r7
    str r6, [r7, #0xb80]
    bl func_01ff9d78
    add r0, r7, #0x11000
    strb r5, [r0, #0x893]
    strb r5, [r0, #0x892]
    strb r4, [r0, #0x7db]
    strb r4, [r0, #0x7da]
    mov r0, r7
    mov r1, r5
    mov r2, r5
    bl _ZN11MatchEngine13func_0206e1d4Eih
    mov r1, r4
    mov r0, r7
    mov r2, r5
    bl _ZN11MatchEngine13func_0206e1d4Eih
    add r0, r7, #0x11000
    strb r5, [r0, #0x89e]
    ldr r0, =data_020e88a0
    mov r1, r5
    bl _ZN11MatchEngine13func_0206b464Eh
    add r0, r7, #0x22c
    bl _ZN10MatchRules13func_0206ee98Ev
    add r0, r7, #0x184
    add r0, r0, #0x400
    bl func_0208169c
    add r0, r7, #0x11000
    strb r5, [r0, #0x89f]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_01ffa3a4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r1, #0
    bl func_01ffa3c4
    mov r0, r4
    mov r1, #1
    bl func_01ffa3c4
    ldmia sp!, {r4, pc}
}

asm void func_01ffa3c4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x158
    mov r9, r0
    mov r5, r1
    bl _ZN11MatchEngine13func_0206deecEv
    add r4, sp, #0x50
    mov r7, #0
    mov r1, r5
    mov r0, r9
    mov r2, r4
    str r7, [sp]
    mov r5, #0x80
    mov r3, #0x84
    str r5, [sp, #4]
    bl _ZN11MatchEngine13func_02078aacEiPtihi
    mov r5, r7
    add r6, sp, #0x10
@L_01ffa408:
    mov r0, r5, lsl #1
    ldrh r0, [r4, r0]
    mov r1, #0
    bl func_ov015_02130b14
    movs r8, r0
    beq @L_01ffa448
    mov r1, #0
    bl func_0208130c
    cmp r0, #0
    beq @L_01ffa448
    mov r0, r8
    mov r1, #0
    bl func_0208130c
    cmp r0, #0xc
    strlt r8, [r6, r7, lsl #2]
    addlt r7, r7, #1
@L_01ffa448:
    add r5, r5, #1
    cmp r5, #0x84
    blt @L_01ffa408
    cmp r7, #0xb
    ble @L_01ffa460
    bl OS_Terminate
@L_01ffa460:
    cmp r7, #0xb
    addlt r1, sp, #0x10
    movlt r0, #0
    strlt r0, [r1, r7, lsl #2]
    cmp r7, #0
    mov r5, #0
    ble @L_01ffa498
    add r4, sp, #0x10
@L_01ffa480:
    ldr r1, [r4, r5, lsl #2]
    mov r0, r9
    bl _ZN11MatchEngine13func_0207d6b0EPh
    add r5, r5, #1
    cmp r5, r7
    blt @L_01ffa480
@L_01ffa498:
    mov r0, #0
    cmp r7, #0
    str r0, [sp, #0xc]
    addle sp, sp, #0x158
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffa4ac:
    ldr r0, [sp, #0xc]
    add r4, sp, #0x10
    ldr r8, [r4, r0, lsl #2]
    mov r0, #0
    str r0, [sp, #8]
    mov r10, #2
    mov r11, #4
@L_01ffa4c8:
    ldr r1, [sp, #8]
    mov r0, r8
    bl func_020808c4
    mov r5, r0
    cmp r5, #0
    ble @L_01ffa808
    mov r0, r9
    mov r1, r5
    bl _ZN11MatchEngine13func_020739ccEi
    ldrb r0, [r0]
    cmp r0, #9
    bne @L_01ffa808
    sub r0, r5, #0x33
    cmp r0, #0x18
    addls pc, pc, r0, lsl #2
    b @L_01ffa808
    dcd 0xea000017
    dcd 0xea00001b
    dcd 0xea000030
    dcd 0xea000041
    dcd 0xea000052
    dcd 0xea000063
    dcd 0xea000066
    dcd 0xea000069
    dcd 0xea00006c
    dcd 0xea00006f
    dcd 0xea000072
    dcd 0xea000075
    dcd 0xea000078
    dcd 0xea00007b
    dcd 0xea00007e
    dcd 0xea000081
    dcd 0xea000084
    dcd 0xea000087
    dcd 0xea00008a
    dcd 0xea00008e
    dcd 0xea000092
    dcd 0xea000096
    dcd 0xea00009a
    dcd 0xea00009e
    dcd 0xea0000a1
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02001
    dcd 0xeb020c4a
    dcd 0xea0000a1
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xeb01fa61
    dcd 0xe1a05000
    dcd 0xe3570000
    dcd 0xe3a06000
    dcd 0xda00009a
@L_01ffa59c:
    mov r0, r9
    ldr r1, [r4, r6, lsl #2]
    bl _ZN11MatchEngine13func_02078f14EP11MatchPlayer
    cmp r5, r0
    bne @L_01ffa5c0
    mov r0, r9
    ldr r1, [r4, r6, lsl #2]
    mov r2, r10
    bl _ZN11MatchEngine13func_0207d6a8Ev
@L_01ffa5c0:
    add r0, r6, #1
    mov r0, r0, lsl #0x10
    cmp r7, r0, asr #16
    mov r6, r0, asr #0x10
    bgt @L_01ffa59c
    b @L_01ffa808
    dcd 0xe3570000
    dcd 0xe3a05000
    dcd 0xda000088
@L_01ffa5e4:
    mov r0, r9
    ldr r1, [r4, r5, lsl #2]
    bl _ZN11MatchEngine13func_02078f14EP11MatchPlayer
    cmp r0, #4
    bne @L_01ffa608
    mov r0, r9
    ldr r1, [r4, r5, lsl #2]
    mov r2, r11
    bl _ZN11MatchEngine13func_0207d6a8Ev
@L_01ffa608:
    add r0, r5, #1
    mov r0, r0, lsl #0x10
    cmp r7, r0, asr #16
    mov r5, r0, asr #0x10
    bgt @L_01ffa5e4
    b @L_01ffa808
    dcd 0xe3570000
    dcd 0xe3a05000
    dcd 0xda000076
@L_01ffa62c:
    mov r0, r9
    ldr r1, [r4, r5, lsl #2]
    bl _ZN11MatchEngine13func_02078f14EP11MatchPlayer
    cmp r0, #3
    bne @L_01ffa650
    ldr r1, [r4, r5, lsl #2]
    mov r0, r9
    mov r2, #8
    bl _ZN11MatchEngine13func_0207d6a8Ev
@L_01ffa650:
    add r0, r5, #1
    mov r0, r0, lsl #0x10
    cmp r7, r0, asr #16
    mov r5, r0, asr #0x10
    bgt @L_01ffa62c
    b @L_01ffa808
    dcd 0xe3570000
    dcd 0xe3a05000
    dcd 0xda000064
@L_01ffa674:
    mov r0, r9
    ldr r1, [r4, r5, lsl #2]
    bl _ZN11MatchEngine13func_02078f14EP11MatchPlayer
    cmp r0, #2
    bne @L_01ffa698
    ldr r1, [r4, r5, lsl #2]
    mov r0, r9
    mov r2, #0x10
    bl _ZN11MatchEngine13func_0207d6a8Ev
@L_01ffa698:
    add r0, r5, #1
    mov r0, r0, lsl #0x10
    cmp r7, r0, asr #16
    mov r5, r0, asr #0x10
    bgt @L_01ffa674
    b @L_01ffa808
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02020
    dcd 0xeaffffad
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02040
    dcd 0xeaffffa9
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02080
    dcd 0xeaffffa5
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02c01
    dcd 0xeaffffa1
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02c02
    dcd 0xeaffff9d
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02b01
    dcd 0xeaffff99
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02b02
    dcd 0xeaffff95
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02a01
    dcd 0xeaffff91
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02a02
    dcd 0xeaffff8d
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02901
    dcd 0xeaffff89
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02902
    dcd 0xeaffff85
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02801
    dcd 0xeaffff81
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02802
    dcd 0xeaffff7d
    dcd 0xe1a00009
    dcd 0xe1a01004
    dcd 0xe1a02007
    dcd 0xe3a03701
    dcd 0xea00001b
    dcd 0xe1a00009
    dcd 0xe1a01004
    dcd 0xe1a02007
    dcd 0xe3a03702
    dcd 0xea000016
    dcd 0xe1a00009
    dcd 0xe1a01004
    dcd 0xe1a02007
    dcd 0xe3a03601
    dcd 0xea000011
    dcd 0xe1a00009
    dcd 0xe1a01004
    dcd 0xe1a02007
    dcd 0xe3a03602
    dcd 0xea00000c
    dcd 0xe1a00009
    dcd 0xe1a01004
    dcd 0xe1a02007
    dcd 0xe3a03501
    dcd 0xea000007
    dcd 0xe1a00009
    dcd 0xe1a01008
    dcd 0xe3a02502
    dcd 0xeaffff60
    dcd 0xe1a00009
    dcd 0xe1a01004
    dcd 0xe1a02007
    dcd 0xe3a03401
    dcd 0xeb020ba8
@L_01ffa808:
    ldr r0, [sp, #8]
    add r0, r0, #1
    str r0, [sp, #8]
    cmp r0, #6
    blt @L_01ffa4c8
    ldr r0, [sp, #0xc]
    add r0, r0, #1
    str r0, [sp, #0xc]
    cmp r0, r7
    blt @L_01ffa4ac
    add sp, sp, #0x158
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffa838(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r9, #0
    mov r1, r9
    mov r4, r0
    ldr r5, [pc, #0x7b4]
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r6, #1
    str r0, [sp, #0xc]
    mov r0, r4
    mov r1, r6
    bl _ZN11MatchEngine11GetTeamInfoEi
    add r1, r4, #0x11000
    add r2, r4, #0x11800
    ldrb r3, [r4, #0x208]
    str r0, [sp, #0x10]
    strb r6, [r1, #0x8f4]
    strb r9, [r1, #0x8b9]
    strb r9, [r1, #0x891]
    strb r9, [r1, #0x890]
    strh r9, [r2, #0x4a]
    strh r9, [r2, #0x48]
    str r9, [r4, #0xc20]
    cmp r3, #5
    addls pc, pc, r3, lsl #2
    b @L_01ffa8f8
    dcd 0xea000014
    dcd 0xea000003
    dcd 0xea000007
    dcd 0xea000008
    dcd 0xea00000c
    dcd 0xea00000d
    dcd 0xe1a00004
    dcd 0xe5c16903
    dcd 0xeb01d765
    dcd 0xe5c5907e
    dcd 0xea00000a
    dcd 0xe3a00003
    dcd 0xea000007
    dcd 0xe1a00004
    dcd 0xe5c16903
    dcd 0xeb01d75e
    dcd 0xe3a00006
    dcd 0xea000002
    dcd 0xe3a00009
    dcd 0xea000000
    dcd 0xe3a0000c
    dcd 0xe5c5007e
@L_01ffa8f8:
    mov r0, r4
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    add r0, r4, #0x11000
    ldr r2, [r0, #0x920]
    beq @L_01ffa94c
    ldr r1, [pc, #0x6f4]
    mov r0, r4
    bl func_01ffb704
    ldr r0, [pc, #0x6ec]
    ldr r1, [sp, #0xc]
    str r0, [r4, #0xb80]
    ldrh r2, [r1, #0x24]
    ldr r0, [sp, #0x10]
    ldrh r1, [r0, #0x24]
    ldr r0, [pc, #0x6d8]
    str r2, [sp, #4]
    strb r6, [r0, #0x70]
    str r1, [sp, #8]
    strb r9, [r0, #0x71]
    b @L_01ffa9b8
@L_01ffa94c:
    ldr r1, [pc, #0x6b8]
    mov r0, r4
    bl func_01ffb704
    ldr r0, [pc, #0x6b8]
    str r0, [r4, #0xb80]
    ldrb r0, [r5, #0x1a]
    cmp r0, #0
    bne @L_01ffa990
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    ldrh r2, [r1, #0x22]
    ldrh r1, [r0, #0x22]
    ldr r0, [pc, #0x690]
    str r2, [sp, #4]
    str r1, [sp, #8]
    strb r9, [r0, #0x71]
    b @L_01ffa9b0
@L_01ffa990:
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    ldrh r2, [r1, #0x3e]
    ldrh r1, [r0, #0x3e]
    ldr r0, [pc, #0x66c]
    str r2, [sp, #4]
    str r1, [sp, #8]
    strb r6, [r0, #0x71]
@L_01ffa9b0:
    ldr r0, [pc, #0x65c]
    strb r9, [r0, #0x70]
@L_01ffa9b8:
    add r0, r4, #0x200
    ldrh r0, [r0, #0x14]
    mov r10, #0
    mov r1, r10
    cmp r0, #0
    strne r0, [sp, #4]
    add r0, r4, #0x200
    ldrh r0, [r0, #0x16]
    cmp r0, #0
    strne r0, [sp, #8]
    mov r0, r4
    bl _ZN11MatchEngine13func_0206b4a8Ei
    mov r2, r0
    ldr r1, [sp, #4]
    mov r0, r4
    mov r3, r10
    bl func_01ffbbb0
    mov r0, r4
    mov r1, r6
    bl _ZN11MatchEngine13func_0206b4a8Ei
    mov r2, r0
    ldr r1, [sp, #8]
    mov r0, r4
    mov r3, r10
    bl func_01ffbbb0
    mov r0, r4
    mov r1, r10
    bl func_ov087_02174240
    mov r0, r4
    mov r1, r6
    bl func_ov087_02174240
    add r2, sp, #0xc
    b @L_01ffaa64
@L_01ffaa3c:
    ldr r1, [r2, r10, lsl #2]
    ldrh r0, [r1, #0x28]
    cmp r0, #0
    bne @L_01ffaa60
    add r0, r4, r10, lsl #1
    add r0, r0, #0x200
    ldrh r0, [r0, #2]
    cmp r0, #0
    strneh r0, [r1, #0x28]
@L_01ffaa60:
    add r10, r10, #1
@L_01ffaa64:
    cmp r10, #2
    blt @L_01ffaa3c
    ldr r0, [r4, #0xbf4]
    cmp r0, #0
    bne @L_01ffaa90
    ldr r0, [pc, #0x59c]
    mov r1, #0x2100
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #0xbf4]
@L_01ffaa90:
    add r0, r4, #0x384
    mov r1, r9
    add r0, r0, #0x800
    mov r2, #0xc
    bl MI_CpuFill8
    add r0, r4, #0x154
    mov r7, #0x18
    mov r1, r9
    mov r2, r7
    add r0, r0, #0x400
    bl MI_CpuFill8
    add r0, r4, #0x16c
    mov r1, r9
    mov r2, r7
    add r0, r0, #0x400
    bl MI_CpuFill8
    sub r0, r7, #0x19
    strb r0, [r4, #0xb8d]
    ldrb r0, [r5, #0x7e]
    cmp r0, #0xc
    mov r0, r4
    beq @L_01ffab0c
    mov r1, r6
    bl _ZN11MatchEngine13func_0206bfb4Ei
    ldrb r0, [r4, #0x230]
    cmp r0, #1
    mov r0, r4
    beq @L_01ffab04
    b @L_01ffab18
@L_01ffab04:
    mov r1, r6
    b @L_01ffab1c
@L_01ffab0c:
    mov r1, #8
    bl _ZN11MatchEngine13func_0206bfb4Ei
    mov r0, r4
@L_01ffab18:
    mov r1, r9
@L_01ffab1c:
    bl _ZN11MatchEngine13func_0206bfa0Eh
    mov r10, #0
    mov r0, r4
    mov r1, r10
    bl _ZN11MatchEngine13func_0206bff4Ei
    mov r11, #0x18
    sub r8, r10, #1
    add r0, r4, #0x2a4
    str r10, [r4, #0xb9c]
    str r10, [r4, #0xba0]
    strb r8, [r4, #0xb86]
    add r7, r0, #0x11400
    mov r5, r11
    mov r6, r11
    b @L_01ffab94
@L_01ffab58:
    mla r0, r10, r6, r7
    mov r1, r9
    mov r2, r11
    bl MI_CpuFill8
    mla r1, r10, r5, r4
    mov r2, r9
    b @L_01ffab88
@L_01ffab74:
    add r0, r1, r2
    add r0, r0, #0x11000
    strb r8, [r0, #0x6a8]
    strb r8, [r0, #0x6ab]
    add r2, r2, #1
@L_01ffab88:
    cmp r2, #3
    blt @L_01ffab74
    add r10, r10, #1
@L_01ffab94:
    cmp r10, #4
    blt @L_01ffab58
    mov r10, #0
    ldr r0, [pc, #0x478]
    str r10, [r4, #0xba8]
    str r10, [r4, #0xba4]
    sub r8, r10, #1
    str r8, [r0, #0x48]
    mov r1, r10
    str r8, [r0, #0x4c]
    bl func_ov015_02142dfc
    mov r0, r4
    bl func_01ff995c
    add r1, r4, #0x11000
    add r0, r4, #0x64
    strb r10, [r1, #0x8f3]
    bl func_020841d8
    mov r0, r4
    bl _ZN11MatchEngine13func_0206ad1cEv
    add r0, r4, #0x11000
    ldr r0, [r0, #0x7bc]
    bl _ZN15DistanceTable3213func_02062178Ev
    ldr r1, [pc, #0x430]
    add r0, r4, #0x8c
    strh r10, [r4, r1]
    add r1, r1, #2
    mov r5, #2
    strh r10, [r4, r1]
    add r0, r0, #0x11800
    mov r1, r10
    mov r2, r5
    bl MI_CpuFill8
    add r0, r4, #0x8e
    mov r2, r5
    add r0, r0, #0x11800
    mov r1, r10
    bl MI_CpuFill8
    add r0, r4, #0x244
    add r0, r0, #0x11400
    mov r1, r10
    mov r2, #0x60
    strb r10, [r4, #0xb87]
    bl MI_CpuFill8
    mov r0, r4
    mov r1, r10
    bl _ZN11MatchEngine13func_020705f8Eh
    add r0, r4, #0x304
    add r0, r0, #0x11400
    mov r1, r10
    mov r2, #0xa0
    strb r10, [r4, #0xb8b]
    bl MI_CpuFill8
    add r0, r4, #0x304
    mov r11, #0x28
    add r7, r0, #0x11400
    mov r6, #0xff
    mov r5, r11
    b @L_01ffacb4
@L_01ffac7c:
    mla r0, r10, r11, r7
    mov r1, r9
    mov r2, #0x28
    bl MI_CpuFill8
    mul r1, r10, r5
    add r0, r4, r1
    add r0, r0, #0x11000
    strb r8, [r0, #0x721]
    add r1, r7, r1
    strb r6, [r0, #0x720]
    ldrb r0, [r1, #0x22]
    add r10, r10, #1
    bic r0, r0, #0xf
    strb r0, [r1, #0x22]
@L_01ffacb4:
    cmp r10, #4
    blt @L_01ffac7c
    ldr r0, [pc, #0x364]
    ldr r5, [pc, #0x340]
    ldr r1, [r0]
    cmp r1, #0
    beq @L_01ffacf0
    ldr r3, [pc, #0x354]
    ldr r1, [r3, #0xe8]
    str r1, [sp]
    ldr r0, [r0]
    ldr r1, [r3, #0xdc]
    ldr r2, [r3, #0xe0]
    ldr r3, [r3, #0xe4]
    bl func_0208f628
@L_01ffacf0:
    mov r1, r9
    add r0, r4, #0x15c
    mov r2, #0x20
    bl MI_CpuFill8
    ldr r0, [r4, #0xbe8]
    cmp r0, #0
    bne @L_01ffad24
    ldr r0, [pc, #0x308]
    mov r2, r9
    mov r1, #0x200
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #0xbe8]
@L_01ffad24:
    mov r6, #0
    ldr r1, [r4, #0xbe8]
    mov r0, r6
    mov r2, #0x200
    bl MIi_CpuClear32
    add r1, r4, #0x11000
    sub r2, r6, #1
    add r0, r4, #0x11800
    str r6, [r4, #0xb94]
    str r6, [r4, #0xb98]
    strb r6, [r1, #0x8d9]
    strb r6, [r1, #0x8da]
    strh r6, [r0, #0x82]
    strb r6, [r1, #0x8a6]
    str r2, [r4, #0xc0c]
    str r2, [r4, #0xc08]
    str r2, [r4, #0xc14]
    str r2, [r4, #0xc10]
    str r2, [r4, #0xc1c]
    str r2, [r4, #0xc18]
    strb r6, [r1, #0x8db]
    strb r6, [r1, #0x8dc]
    strb r6, [r1, #0x8de]
    str r6, [r1, #0x8f8]
    add r7, r4, #0x9c
    b @L_01ffad98
@L_01ffad8c:
    add r0, r7, r6, lsl #3
    bl func_020841d8
    add r6, r6, #1
@L_01ffad98:
    cmp r6, #2
    blt @L_01ffad8c
    mov r6, #0
    b @L_01ffadbc
@L_01ffada8:
    mov r0, r4
    mov r1, r6
    bl _ZN11MatchEngine13func_0206c018Ei
    bl func_020841d8
    add r6, r6, #1
@L_01ffadbc:
    cmp r6, #5
    blt @L_01ffada8
    mov r0, r4
    bl _ZN11MatchEngine13func_0206c834Ev
    add r0, r4, #0x17c0
    mov r1, r9
    add r0, r0, #0x10000
    bl func_0209e020
    mov r0, r4
    bl func_ov015_02140fa4
    mov r0, r4
    bl _ZN11MatchEngine13func_020630a8Ev
    mov r0, r4
    bl _ZN11MatchEngine13func_020630fcEv
    mov r0, r4
    bl _ZN11MatchEngine13func_020630d8Ev
    mov r0, r4
    bl func_ov087_0217cd3c
    mov r0, r4
    bl _ZN11MatchEngine13func_0206c37cEv
    add r0, r4, #0x44
    add r0, r0, #0x11800
    mov r1, r9
    mov r2, #4
    bl MI_CpuFill8
    ldr r2, [pc, #0x208]
    ldr r1, [pc, #0x208]
    ldrh r3, [r2, #0x6c]
    ldr r0, [pc, #0x1f8]
    str r3, [r1, #0x28]
    ldrh r2, [r2, #0x6e]
    str r2, [r1, #0x2c]
    ldrh r2, [r0, #0xca]
    cmp r2, #0
    cmpne r2, #0xf4
    ldreq r1, [pc, #0x1e8]
    addeq r0, r4, #0x11000
    ldreq r1, [r1, #0x18]
    streq r1, [r0, #0x7ec]
    beq @L_01ffae90
    mov r0, #0x6000
    mul r1, r2, r0
    mov r0, #0x29
    umull r3, r2, r1, r0
    mla r2, r1, r9, r2
    mov r1, r1, asr #0x1f
    adds r3, r3, #0x800
    mla r2, r1, r0, r2
    adc r1, r2, r9
    mov r2, r3, lsr #0xc
    add r0, r4, #0x11000
    orr r2, r2, r1, lsl #20
    str r2, [r0, #0x7ec]
@L_01ffae90:
    add r0, r4, #0xbe
    mov r8, #0
    mov r7, #0xc
    mov r1, r8
    mov r2, r7
    add r0, r0, #0x11800
    mov r6, #1
    bl MI_CpuFill8
    add r0, r4, #0xca
    mov r1, r8
    mov r2, r7
    add r0, r0, #0x11800
    bl MI_CpuFill8
    ldrb r0, [r4, #0x218]
    add r7, r4, #0x11000
    mov r1, r9
    cmp r0, #0
    movne r8, r6
    mov r0, r4
    mov r2, r6
    mov r3, r6
    strb r8, [r7, #0x8d6]
    bl _ZN11MatchEngine13func_0207c6b4Eiii
    mov r0, r4
    mov r1, r6
    mov r2, r6
    mov r3, r6
    bl _ZN11MatchEngine13func_0207c6b4Eiii
    mov r0, r4
    mov r1, r9
    bl _ZN11MatchEngine13func_0207ac90Ei
    mov r1, r7
    strb r0, [r1, #0x892]
    mov r0, r4
    mov r1, r6
    bl _ZN11MatchEngine13func_0207ac90Ei
    mov r1, r7
    ldr r2, [pc, #0x110]
    str r9, [r4, #0xbac]
    strb r0, [r1, #0x893]
    ldrb r0, [r2]
    cmp r0, #0
    bne @L_01ffafbc
    add r0, r4, #0x22c
    bl _ZN10MatchRules13func_0206eef8Ev
    cmp r0, #0
    beq @L_01ffafbc
    mov r6, #0xe10
    mov r0, r6
    bl Random_RandA
    add r1, r4, #0x200
    ldrh r1, [r1, #0x34]
    mov r7, #0x1e
    mla r2, r1, r7, r0
    mov r0, r6
    str r2, [r5, #8]
    bl Random_RandA
    add r1, r4, #0x200
    ldrh r1, [r1, #0x34]
    mov r6, r6, lsr #1
    mla r2, r1, r7, r0
    mov r0, r6
    str r2, [r5, #0xc]
    bl Random_RandA
    add r1, r4, #0x200
    ldrh r1, [r1, #0x36]
    mla r2, r1, r7, r0
    mov r0, r6
    str r2, [r5, #0x10]
    bl Random_RandA
    add r1, r4, #0x200
    ldrh r1, [r1, #0x36]
    mla r0, r1, r7, r0
    str r0, [r5, #0x14]
    b @L_01ffafe4
@L_01ffafbc:
    add r0, r4, #0x200
    ldrh r2, [r0, #0x34]
    mov r1, #0x1e
    mul r3, r2, r1
    str r3, [r5, #8]
    str r3, [r5, #0xc]
    ldrh r0, [r0, #0x36]
    mul r1, r0, r1
    str r1, [r5, #0x10]
    str r1, [r5, #0x14]
@L_01ffafe4:
    mov r0, r4
    add r2, r4, #0x11000
    mov r1, #0
    strb r1, [r2, #0x910]
    strb r1, [r2, #0x911]
    strb r1, [r2, #0x912]
    bl _ZN11MatchEngine13func_02070678Ei
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd gGameState
    dcd data_020c475c
    dcd data_020c49e0
    dcd data_020c4ab4
    dcd data_020c4980
    dcd gAllocator
    dcd data_020c4920
    dcd 0x000117fc
    dcd data_020c4824
    dcd data_020c4de0
    dcd data_020c4ee0
    dcd data_020ac094
    dcd data_020aeb64
    dcd data_020c4808
}

asm void func_01ffb040(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    mov r5, #0
    mov r8, r0
    mov r1, r5
    mov r4, #1
    bl _ZN11MatchEngine11GetTeamInfoEi
    str r0, [sp]
    mov r0, r8
    mov r1, r4
    bl _ZN11MatchEngine11GetTeamInfoEi
    str r0, [sp, #4]
    add r1, r8, #0x11000
    mov r0, r8
    strb r5, [r1, #0x8b9]
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    beq @L_01ffb090
    mov r0, r8
    bl func_ov087_0217e3ec
@L_01ffb090:
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_0207efd8Ev
    add r0, r8, #0x11000
    ldrb r0, [r0, #0x8bd]
    cmp r0, #0
    bne @L_01ffb178
    mov r0, r8
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    mov r6, #0
    ldr r9, =0xfff
    beq @L_01ffb170
    b @L_01ffb108
@L_01ffb0c4:
    mov r0, r6
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_01ffb104
    ldrh r0, [r7, #0xf0]
    tst r0, #0x10
    movne r0, r4
    moveq r0, r5
    cmp r0, #0
    beq @L_01ffb104
    ldrh r1, [r7, #0x42]
    mov r0, r8
    and r1, r1, r9
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl _ZN11MatchEngine13func_0206dad4Ei
@L_01ffb104:
    add r6, r6, #1
@L_01ffb108:
    cmp r6, #0x20
    blt @L_01ffb0c4
    b @L_01ffb178
@L_01ffb114:
    mov r0, r6
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_01ffb16c
    ldrh r0, [r7, #0xf0]
    tst r0, #2
    movne r0, r4
    moveq r0, r5
    cmp r0, #0
    beq @L_01ffb16c
    ldrh r1, [r7, #0x42]
    mov r0, r8
    and r1, r1, r9
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl _ZN11MatchEngine13func_0206dad4Ei
    ldrh r1, [r7, #0x42]
    mov r0, r8
    and r1, r1, r9
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl _ZN11MatchEngine13func_0206daecEi
@L_01ffb16c:
    add r6, r6, #1
@L_01ffb170:
    cmp r6, #0x20
    blt @L_01ffb114
@L_01ffb178:
    mov r0, r8
    bl func_01ffb428
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_0207f07cEv
    mov r6, #0
    add r1, sp, #0
    b @L_01ffb1a4
@L_01ffb194:
    ldr r0, [r1, r6, lsl #2]
    add r6, r6, #1
    strh r5, [r0, #0x28]
    strh r5, [r0, #0x2a]
@L_01ffb1a4:
    cmp r6, #2
    blt @L_01ffb194
    mov r0, r8
    mov r1, r5
    mov r2, r5
    bl _ZN11MatchEngine13func_0206cca4Eha
    ldr r1, =gGameState
    add r0, r8, #0x22c
    strb r4, [r1, #0x4f0]
    bl _ZN10MatchRules13func_0206ee98Ev
    mov r0, r8
    bl func_01ff9d78
    mov r1, r5
    add r0, r8, #0x36c
    mov r2, #0x20
    bl MI_CpuFill8
    add r0, r8, #0x3bc
    mov r1, r5
    mov r2, #0x10
    bl MI_CpuFill8
    ldr r0, [sp, #4]
    mov r1, r5
    mov r2, #0x40
    bl MI_CpuFill8
    mov r0, r8
    mov r1, r4
    mov r2, r5
    bl _ZN11MatchEngine13func_0206e1d4Eih
    ldr r1, =data_020c4980
    mov r0, r8
    str r1, [r8, #0xb80]
    bl func_01ffdcc4
    ldr r1, [r8, #0xbe8]
    cmp r1, #0
    beq @L_01ffb23c
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    str r5, [r8, #0xbe8]
@L_01ffb23c:
    add r0, r8, #0x17c0
    add r0, r0, #0x10000
    add r6, r8, #0x11000
    add r3, r8, #0x11800
    mov r1, r5
    add r0, r0, #4
    mov r2, #8
    strb r5, [r6, #0x893]
    strb r5, [r6, #0x892]
    strb r4, [r6, #0x8ba]
    strb r5, [r6, #0x8bd]
    strh r5, [r3, #0x84]
    strb r5, [r6, #0x8f4]
    strb r5, [r6, #0x898]
    strb r5, [r6, #0x89e]
    strb r4, [r6, #0x7db]
    strb r4, [r6, #0x7da]
    bl MI_CpuFill8
    add r0, r8, #0x17c0
    add r0, r0, #0x10000
    mov r1, r5
    add r0, r0, #0x16
    mov r2, #2
    bl MI_CpuFill8
    mov r0, r8
    bl _ZN11MatchEngine13func_0207070cEv
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl _ZN11MatchEngine13func_0206d188Eii
    mov r0, r8
    mov r1, r4
    mov r2, r4
    bl _ZN11MatchEngine13func_0206d188Eii
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ffb2e0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
    ldr r0, =data_020ca78c
    ldr r2, =0x118c
    mov r1, r4
    bl MI_CpuFill8
    mov r2, #1
    ldr r3, =gGameState
    ldr r0, =data_020cb918
    mov r1, r4
    strb r2, [r3, #0x4f3]
    sub r12, r2, #2
    mov r2, #0x30
    strb r12, [r3, #0x4d8]
    bl MI_CpuFill8
    mov r1, r4
    add r0, r5, #0x34c
    mov r2, #0x60
    bl MI_CpuFill8
    mov r1, r4
    add r0, r5, #0x3ac
    mov r2, #0x20
    bl MI_CpuFill8
    add r0, r5, #0x22c
    bl _ZN10MatchRules13func_0206ee98Ev
    add r0, r5, #0x184
    add r0, r0, #0x400
    bl func_0208169c
    mov r0, r5
    bl func_01ffb37c
    ldr r0, =data_020d9978
    bl _ZN11TreasureBox13func_02051bd4Ev
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ffb37c(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x18
    ldr r4, =gGameState
    add r2, sp, #8
    ldr r0, [r4, #0x4c8]
    mov r1, #0
    str r1, [r2]
    str r1, [r2, #4]
    str r1, [r2, #8]
    str r1, [r2, #0xc]
    bl func_0201a6f4
    bl rand
    ldr r1, =0x2fffc3c
    str r0, [sp, #8]
    ldr r0, [r1]
    bl func_0201a6f4
    bl rand
    str r0, [sp, #0xc]
    add r0, sp, #0
    bl OS_GetMacAddress
    ldrb r1, [sp, #3]
    ldrb r0, [sp, #4]
    smulbb r0, r1, r0
    bl func_0201a6f4
    bl rand
    ldrb r2, [sp, #1]
    ldrb r1, [sp, #5]
    str r0, [sp, #0x10]
    smulbb r0, r2, r1
    bl func_0201a6f4
    bl rand
    ldr r1, [sp, #0x10]
    ldr r3, [sp, #8]
    ldr r2, [sp, #0xc]
    orr r1, r1, r0, lsl #16
    orr r2, r3, r2, lsl #16
    str r2, [r4, #0x534]
    str r0, [sp, #0x14]
    str r1, [r4, #0x538]
    add sp, sp, #0x18
    ldmia sp!, {r4, pc}
}

asm void func_01ffb428(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r1, =gGameState
    mov r10, r0
    ldrb r0, [r1, #0x1b]
    ldr r11, =data_020cacc8
    mov r7, #1
    mov r6, #0
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_ov015_0213178c
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_ov015_0213178c
    cmp r0, #0
    bne @L_01ffb4f0
    mov r8, r6
    add r5, r10, #0x11000
    ldr r4, =0xfff
    b @L_01ffb4e8
@L_01ffb474:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r9, r0
    beq @L_01ffb4e4
    ldrh r0, [r9, #0xf0]
    tst r0, #1
    movne r0, r7
    moveq r0, r6
    cmp r0, #0
    beq @L_01ffb4e4
    ldrh r0, [r9, #0xf0]
    tst r0, #0x10
    movne r0, r7
    moveq r0, r6
    cmp r0, #0
    beq @L_01ffb4e4
    mov r0, r9
    bl func_02080b90
    cmp r0, #1
    ldreqb r0, [r5, #0x8bd]
    cmpeq r0, #0
    bne @L_01ffb4e4
    ldrh r1, [r9, #0x42]
    mov r0, r11
    and r1, r1, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_02081740
@L_01ffb4e4:
    add r8, r8, #1
@L_01ffb4e8:
    cmp r8, #0x20
    blt @L_01ffb474
@L_01ffb4f0:
    add r0, r10, #0x22c
    mov r4, #1
    mov r6, #0
    bl _ZN10MatchRules13func_0206f014Ev
    cmp r0, #0
    beq @L_01ffb594
    mov r8, r6
    mov r0, r8
    bl func_ov015_02130ae8
    mov r9, r0
    ldr r5, =0xfb3f
    b @L_01ffb58c
@L_01ffb520:
    cmp r9, #0
    beq @L_01ffb584
    ldrh r0, [r9, #0xf0]
    tst r0, #1
    movne r0, r4
    moveq r0, r6
    cmp r0, #0
    beq @L_01ffb584
    mov r0, r9
    bl func_02080b90
    cmp r0, #1
    bne @L_01ffb584
    mov r0, r9
    mov r1, r6
    bl func_02080c64
    ldrh r2, [r9, #0x42]
    mov r0, r9
    mov r1, r6
    bic r2, r2, #0x8000
    strh r2, [r9, #0x42]
    ldrh r2, [r9, #0xf0]
    orr r2, r2, #0x20
    and r2, r2, r5
    strh r2, [r9, #0xf0]
    bl func_02081398
@L_01ffb584:
    add r8, r8, #1
    add r9, r9, #0xfc
@L_01ffb58c:
    cmp r8, #0x84
    blt @L_01ffb520
@L_01ffb594:
    mov r0, r10
    mov r5, #1
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    beq @L_01ffb5d8
    ldr r7, =data_020e88a0
    mov r1, r6
    mov r0, r7
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r4, r0
    mov r0, r6
    bl func_ov015_0213192c
    mov r2, r0
    ldrh r1, [r4, #0x22]
    mov r3, r6
    mov r0, r7
    bl func_01ffbbb0
@L_01ffb5d8:
    mov r0, r10
    mov r1, r5
    bl func_01ffba14
    mov r8, #0
    mov r0, r10
    mov r1, r8
    mov r2, r5
    mov r3, r5
    bl _ZN11MatchEngine13func_0207c6b4Eiii
    ldr r10, =0xfdff
    ldr r4, =gEntryPool
    add r7, r10, #0x100
    b @L_01ffb6dc
@L_01ffb60c:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r9, r0
    beq @L_01ffb6d8
    ldrh r0, [r9, #0xf0]
    tst r0, #0x20
    movne r0, r5
    moveq r0, r6
    cmp r0, #0
    beq @L_01ffb65c
    ldrh r0, [r9, #0xf0]
    tst r0, #0x40
    movne r0, r5
    moveq r0, r6
    cmp r0, #0
    bne @L_01ffb65c
    mov r0, r9
    bl func_ov015_021319b0
    cmp r0, #1
    bne @L_01ffb66c
@L_01ffb65c:
    mov r0, r4
    mov r1, r8
    bl _ZN9EntryPool6RemoveEi
    b @L_01ffb6d8
@L_01ffb66c:
    ldr r0, [r9, #0xe8]
    strb r6, [r0, #0x1e]
    ldr r0, [r9, #0xec]
    strh r6, [r0, #0x32]
    ldr r0, [r9, #0xec]
    strb r6, [r0, #0x88]
    strb r6, [r9, #0xe6]
    ldrh r0, [r9, #0xf0]
    tst r0, #0x200
    movne r0, r5
    moveq r0, r6
    cmp r0, #0
    ldrneh r0, [r9, #0xf0]
    andne r0, r0, r10
    strneh r0, [r9, #0xf0]
    ldrh r0, [r9, #0xf0]
    tst r0, #0x100
    movne r0, r5
    moveq r0, r6
    cmp r0, #0
    beq @L_01ffb6d8
    ldrh r0, [r9, #0xf0]
    orr r0, r0, #0x200
    strh r0, [r9, #0xf0]
    ldrh r0, [r9, #0xf0]
    and r0, r0, r7
    strh r0, [r9, #0xf0]
@L_01ffb6d8:
    add r8, r8, #1
@L_01ffb6dc:
    cmp r8, #0x20
    blt @L_01ffb60c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffb704(void)
{
    cmp r1, #0
    ldreq r1, =data_020c475c
    ldr r12, =_ZN16MatchBallPhysics13func_020614c8EP9MatchAreal
    str r1, [r0, #0xb7c]
    mov r0, r1
    ldr r1, =data_020c4de0
    bx r12
}

asm void func_01ffb72c(void)
{
    ldr r12, =_ZN11MatchEngine13func_0206bff4Ei
    mov r1, #0
    bx r12
}

asm void func_01ffb73c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    add r0, r0, #0xb00
    ldrsb r8, [r0, #0x8c]
    mov r9, #0
    mov r7, #1
    mov r6, r9
    mov r4, r9
    mov r5, r7
@L_01ffb75c:
    add r0, r8, #1
    and r8, r0, #0x1f
    mov r0, r8
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_01ffb7a0
    ldrh r0, [r0, #0xf0]
    tst r0, #2
    movne r1, r7
    moveq r1, r6
    cmp r1, #0
    beq @L_01ffb7a0
    tst r0, #8
    movne r0, r5
    moveq r0, r4
    cmp r0, #0
    bne @L_01ffb7ac
@L_01ffb7a0:
    add r9, r9, #1
    cmp r9, #0x20
    blt @L_01ffb75c
@L_01ffb7ac:
    mov r0, r8, lsl #0x18
    mov r0, r0, asr #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ffb7b8(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x18
    mov r2, #0
    mov r4, r0
    str r2, [sp, #0x14]
    ldr r1, [r4, #0xbf8]
    cmp r1, #0
    ldrne r0, [r4, #0xbfc]
    cmpne r0, #0
    addne sp, sp, #0x18
    movne r0, #1
    ldmneia sp!, {r4, pc}
    cmp r1, #0
    ldreq r0, [r4, #0xbfc]
    cmpeq r0, #0
    bne @L_01ffb860
    ldr r3, =gAllocator
    ldr r1, =data_020aef1c
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffb830
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x14
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffb830:
    cmp r0, #0x280
    addne sp, sp, #0x18
    movne r0, #0
    ldmneia sp!, {r4, pc}
    ldr r1, [sp, #0x14]
    mov r0, #1
    str r1, [r4, #0xbf8]
    ldr r1, [sp, #0x14]
    add sp, sp, #0x18
    add r1, r1, #0x200
    str r1, [r4, #0xbfc]
    ldmia sp!, {r4, pc}
@L_01ffb860:
    mov r0, #0
    add sp, sp, #0x18
    ldmia sp!, {r4, pc}
}

asm void func_01ffb874(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    ldr r2, =data_020c4de0
    mov r5, r0
    str r2, [sp, #0x14]
    add r0, r5, #0x11800
    ldrh r0, [r0, #0x80]
    mov r4, r1
    cmp r0, r4
    addeq sp, sp, #0x18
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r3, =gAllocator
    ldr r1, =data_020aef38
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffb8ec
    mov r0, #0x180
    mul r2, r4, r0
    str r2, [sp]
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r0, [r3]
    add r2, sp, #0x14
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffb8ec:
    cmp r0, #0
    moveq r0, #0
    addne r0, r5, #0x11800
    strneh r4, [r0, #0x80]
    movne r0, #1
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ffb914(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    cmp r2, #0
    mov r6, r0
    mov r5, r1
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    add r0, r6, #0x11800
    ldrh r0, [r0, #0x80]
    cmp r0, r5
    addeq sp, sp, #4
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, =data_020c4de0
    mov r3, #0x180
    str r0, [r2]
    mov r1, r2
    mul r2, r5, r3
    mov r4, #0
    ldr r0, =data_020aef54
    str r4, [sp]
    bl func_ov015_02134040
    cmp r0, #0
    moveq r0, r4
    addne r0, r6, #0x11800
    strneh r5, [r0, #0x80]
    movne r0, #1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_01ffb994(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x18
    cmp r2, #0
    str r2, [sp, #0x14]
    addeq sp, sp, #0x18
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r3, =gAllocator
    ldr lr, =data_020aef70
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffb9f8
    mov r2, #0x120
    mul r12, r1, r2
    str r12, [sp]
    str r2, [sp, #4]
    mov r1, #0
    str r1, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x14
    mov r1, lr
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffb9f8:
    cmp r0, #0
    moveq r0, #0
    movne r0, #1
    add sp, sp, #0x18
    ldmia sp!, {r3, pc}
}

asm void func_01ffba14(void)
{
    ldr r12, =func_01ffb994
    add r2, r0, #0x22c
    bx r12
}

asm void func_01ffba24(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    cmp r2, #0
    mov r4, r1
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, pc}
    add r0, r0, #0x22c
    str r0, [r2]
    mov r3, #0x120
    mov r1, r2
    mul r2, r4, r3
    mov r4, #0
    ldr r0, =data_020aef8c
    str r4, [sp]
    bl func_ov015_02134040
    cmp r0, #0
    movne r4, #1
    mov r0, r4
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void func_01ffba7c(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r0, #0
    mov r5, r1
    str r2, [sp, #0x18]
    str r0, [sp, #0x14]
    cmp r2, #0
    mov r4, r0
    addeq sp, sp, #0x24
    ldmeqia sp!, {r4, r5, pc}
    ldr r3, =gAllocator
    ldr r1, =data_020aefa8
    ldr lr, [r3]
    cmp lr, #0
    beq @L_01ffbadc
    str r0, [sp]
    str r0, [sp, #4]
    str r0, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x14
    mov r0, lr
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffbadc:
    str r0, [sp, #0x20]
    cmp r0, #0
    addeq sp, sp, #0x24
    moveq r0, #0
    ldmeqia sp!, {r4, r5, pc}
    ldr r0, [sp, #0x14]
    add r2, sp, #0x1c
    add r3, sp, #0x20
    mov r1, r5
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    bne @L_01ffbb24
    ldr r1, [sp, #0x14]
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    add sp, sp, #0x24
    mov r0, #0
    ldmia sp!, {r4, r5, pc}
@L_01ffbb24:
    ldr r3, =gAllocator
    ldr r12, [sp, #0x1c]
    ldr r0, [r3]
    ldr r1, =data_020aefc0
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffbb60
    ldr r2, =0x618
    str r12, [sp]
    stmib sp, {r2, r4}
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x18
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffbb60:
    ldr r1, =0x618
    str r0, [sp, #0x20]
    cmp r0, r1
    beq @L_01ffbb88
    ldr r1, [sp, #0x14]
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    add sp, sp, #0x24
    mov r0, #0
    ldmia sp!, {r4, r5, pc}
@L_01ffbb88:
    ldr r1, [sp, #0x14]
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    mov r0, #1
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, pc}
}

asm void func_01ffbbb0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x218
    sub sp, sp, #0x400
    movs r4, r3
    mov r7, r0
    movne r0, #0
    mov r5, r2
    strneb r0, [r4]
    add r0, r7, r5, lsl #1
    mov r6, r1
    add r1, r0, #0x11800
    ldrh r0, [r1, #0x78]
    cmp r6, r0
    addeq r0, r7, #0x11800
    ldreqh r2, [r0, #0x80]
    ldreqh r0, [r1, #0x7c]
    cmpeq r2, r0
    bne @L_01ffbc14
    mov r0, r7
    mov r1, r5
    bl func_01ffbdd8
    add sp, sp, #0x218
    add sp, sp, #0x400
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_01ffbc14:
    add r8, sp, #0
    mov r0, r7
    mov r1, r6
    mov r2, r8
    bl func_01ffba7c
    cmp r0, #0
    addeq sp, sp, #0x218
    addeq sp, sp, #0x400
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r7
    mov r1, r5
    mov r2, r8
    bl func_01ffbe34
    add r0, r7, r5, lsl #1
    add r1, r0, #0x11800
    strh r6, [r1, #0x78]
    add r0, r7, #0x11800
    ldrh r0, [r0, #0x80]
    cmp r4, #0
    strh r0, [r1, #0x7c]
    movne r0, #1
    strneb r0, [r4]
    mov r0, #1
    add sp, sp, #0x218
    add sp, sp, #0x400
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_01ffbc80(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldrh r2, [r1, #0xf0]
    tst r2, #0x80
    movne r2, #1
    moveq r2, #0
    cmp r2, #0
    ldmneia sp!, {r3, pc}
    ldrh r3, [r1, #0xf0]
    mov r12, #3
    mov r2, #1
    orr r3, r3, #0x80
    strh r3, [r1, #0xf0]
    mov r3, #0
    str r12, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    ldmia sp!, {r3, pc}
}

asm void func_01ffbcc8(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldrh r2, [r1, #0xf0]
    tst r2, #0x80
    movne r2, #1
    moveq r2, #0
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    ldrh r3, [r1, #0xf0]
    ldr r2, =0xff7f
    mov r12, #3
    and r2, r3, r2
    strh r2, [r1, #0xf0]
    mov r2, #1
    mov r3, #0
    str r12, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    ldmia sp!, {r3, pc}
}

asm void func_01ffbd18(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r1
    mov r3, #0xb
    mul r4, r8, r3
    movs r7, r2
    mov r6, r0
    add r5, r4, #0xb
    bne @L_01ffbd80
    bl func_ov087_02181cbc
    cmp r0, #0
    beq @L_01ffbd80
    cmp r4, r5
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
@L_01ffbd4c:
    add r2, r6, r4
    add r0, r2, #0x11000
    ldrb r1, [r0, #0x7a4]
    add r0, r2, #0x3a4
    add r2, r0, #0x11400
    cmp r1, #0
    movne r0, #1
    strneb r0, [r2]
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    add r4, r4, #1
    cmp r4, r5
    blt @L_01ffbd4c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_01ffbd80:
    cmp r7, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r6
    mov r1, r8
    bl func_ov087_02181cbc
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r4, r5
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
@L_01ffbda4:
    add r2, r6, r4
    add r0, r2, #0x11000
    ldrb r1, [r0, #0x7a4]
    add r0, r2, #0x3a4
    add r2, r0, #0x11400
    cmp r1, #1
    moveq r0, #3
    streqb r0, [r2]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r4, r4, #1
    cmp r4, r5
    blt @L_01ffbda4
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_01ffbdd8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r2, #0xb
    mul r6, r1, r2
    add r7, r6, #0xb
    cmp r6, r7
    mov r2, #0
    bge @L_01ffbe28
    ldr r5, =data_020c6cac
    mov lr, #1
    mov r3, #0x88
@L_01ffbe00:
    mul r4, r6, r3
    ldrb r4, [r5, r4]
    add r12, r0, r6
    add r12, r12, #0x11000
    cmp r4, #1
    add r6, r6, #1
    moveq r2, lr
    strb r4, [r12, #0x7a4]
    cmp r6, r7
    blt @L_01ffbe00
@L_01ffbe28:
    bl func_01ffbd18
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_01ffbe34(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r3, =data_020c4de0
    str r1, [sp]
    ldr r1, [r3, #0xdc]
    mov r10, r0
    str r1, [sp, #0x20]
    ldrsh r1, [r3, #0xac]
    str r2, [sp, #4]
    ldrsh r4, [r3, #0xae]
    str r1, [sp, #0x1c]
    bl func_ov087_0218208c
    str r0, [sp, #0x18]
    mov r0, r10
    bl func_ov087_021820a8
    mov r5, r0
    ldr r1, [sp]
    mov r0, r10
    bl _ZN11MatchEngine13func_0206b47cEi
    str r0, [sp, #0xc]
    ldr r0, [sp, #4]
    cmp r0, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp]
    mov r1, #0xb
    mul r1, r0, r1
    add r0, r1, #0xb
    str r0, [sp, #0x10]
    ldr r0, [sp, #4]
    str r1, [sp, #0x14]
    add r11, r0, #0x40
    mov r0, #0
    str r0, [sp, #8]
    b @L_01ffc06c
@L_01ffbec0:
    ldr r3, =data_020c6cac
    ldr r2, [sp, #0x14]
    mov r1, #0x88
    mla r1, r2, r1, r3
    mov r0, r11
    mov r2, #8
    bl MI_CpuCopy8
    ldr r0, [sp, #0x14]
    ldrb r1, [r11]
    add r0, r10, r0
    add r0, r0, #0x11000
    strb r1, [r0, #0x7a4]
    cmp r1, #1
    moveq r0, #1
    streq r0, [sp, #8]
    ldr r2, =data_020c6cac
    ldr r0, [sp, #0x14]
    mov r1, #0x88
    mla r1, r0, r1, r2
    add r0, r1, #8
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x14]
    mov r8, #0
    add r0, r10, r0
    add r0, r0, #0x11000
    str r0, [sp, #0x28]
    b @L_01ffc054
@L_01ffbf2c:
    ldr r0, [sp, #0x24]
    add r9, r0, r8, lsl #3
    add r0, r11, r8, lsl #3
    ldr r6, [r0, #0xc]
    ldr r0, [sp, #4]
    ldrb r0, [r0, #4]
    cmp r0, #1
    moveq r6, r6, lsl #1
    beq @L_01ffbf6c
    ldr r0, [sp, #0x28]
    ldrb r0, [r0, #0x7a4]
    cmp r0, #1
    bne @L_01ffbf6c
    ldr r0, =0xfae
    cmp r6, r0
    movgt r6, r0
@L_01ffbf6c:
    add r0, r11, r8, lsl #3
    ldr r2, [r0, #8]
    ldr r1, [sp, #0x1c]
    ldr r0, [sp, #0x20]
    cmp r6, #0x800
    mla r0, r1, r2, r0
    str r0, [r9]
    mov r0, r10
    bge @L_01ffbfcc
    mov r1, #1
    mov r2, #0
    bl _ZN11MatchEngine13func_0206707cEii
    mov r7, r0
    mov r0, r10
    mov r1, #1
    mov r2, #0
    bl _ZN11MatchEngine13func_02067044Eii
    cmp r7, r0
    subgt r1, r5, r7
    movgt r0, r1, asr #0xb
    addgt r0, r1, r0, lsr #20
    movgt r4, r0, asr #0xc
    mla r0, r6, r4, r7
    b @L_01ffc00c
@L_01ffbfcc:
    mov r1, #0
    mov r2, r1
    bl _ZN11MatchEngine13func_0206707cEii
    mov r1, #0
    mov r7, r0
    mov r0, r10
    mov r2, r1
    bl _ZN11MatchEngine13func_02067044Eii
    cmp r7, r0
    sublt r1, r7, r5
    movlt r0, r1, asr #0xb
    addlt r0, r1, r0, lsr #20
    rsb r6, r6, #0x1000
    movlt r4, r0, asr #0xc
    mul r0, r6, r4
    sub r0, r7, r0
@L_01ffc00c:
    str r0, [r9, #4]
    ldr r0, [sp, #4]
    ldrb r0, [r0, #4]
    cmp r0, #1
    beq @L_01ffc050
    ldr r0, [sp]
    cmp r0, #1
    bne @L_01ffc050
    ldr r1, [r9]
    ldr r0, [sp, #0x18]
    sub r1, r1, r0
    sub r0, r0, r1
    str r0, [r9]
    ldr r0, [r9, #4]
    sub r0, r0, r5
    sub r0, r5, r0
    str r0, [r9, #4]
@L_01ffc050:
    add r8, r8, #1
@L_01ffc054:
    cmp r8, #0xe
    blt @L_01ffbf2c
    ldr r0, [sp, #0x14]
    add r11, r11, #0x88
    add r0, r0, #1
    str r0, [sp, #0x14]
@L_01ffc06c:
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x10]
    cmp r1, r0
    blt @L_01ffbec0
    ldr r1, [sp]
    ldr r2, [sp, #8]
    mov r0, r10
    mov r5, #0
    bl func_01ffbd18
    ldr r0, [sp]
    mov r1, #0xb
    mul r7, r0, r1
    mov r0, r5
    str r0, [sp, #0x14]
    ldr r4, =0xfff7
    b @L_01ffc154
@L_01ffc0ac:
    ldr r2, [sp, #0x14]
    ldr r1, [sp, #0xc]
    mov r0, r10
    mov r3, r5
    add r2, r2, #1
    bl _ZN11MatchEngine13func_02079ea0Eiii
    movs r6, r0
    beq @L_01ffc144
    ldr r0, [sp, #0x14]
    cmp r0, #0xb
    bge @L_01ffc12c
    add r0, r10, r7
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x7a4]
    cmp r0, #0
    beq @L_01ffc12c
    ldrh r2, [r6, #0xf0]
    ldr r1, [sp, #0xc]
    mov r0, r10
    orr r8, r2, #8
    ldr r2, [sp, #0x14]
    mov r3, r5
    add r2, r2, #1
    strh r8, [r6, #0xf0]
    bl _ZN11MatchEngine13func_020685a8Eiii
    cmp r0, #0
    mov r0, r10
    mov r1, r6
    beq @L_01ffc128
    bl func_01ffbc80
    b @L_01ffc144
@L_01ffc128:
    b @L_01ffc140
@L_01ffc12c:
    ldrh r2, [r6, #0xf0]
    mov r0, r10
    mov r1, r6
    and r2, r2, r4
    strh r2, [r6, #0xf0]
@L_01ffc140:
    bl func_01ffbcc8
@L_01ffc144:
    ldr r0, [sp, #0x14]
    add r7, r7, #1
    add r0, r0, #1
    str r0, [sp, #0x14]
@L_01ffc154:
    ldr r0, [sp, #0x14]
    cmp r0, #0x10
    blt @L_01ffc0ac
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffc178(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, #0
    ldr r6, =gEntryPool
    mov r5, r0
    mov r4, r1
    mov r7, r9
    mov r8, #1
@L_01ffc194:
    mov r0, r9
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_01ffc1d4
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r8
    moveq r1, r7
    cmp r1, #0
    beq @L_01ffc1d4
    bl func_ov015_021319b0
    cmp r4, r0
    bne @L_01ffc1d4
    mov r0, r6
    mov r1, r9
    bl _ZN9EntryPool6RemoveEi
@L_01ffc1d4:
    add r9, r9, #1
    cmp r9, #0x20
    blt @L_01ffc194
    add r0, r5, #0x34c
    mov r6, #0
    mov r1, r6
    add r0, r0, r4, lsl #5
    mov r2, #0x20
    bl MI_CpuFill8
    add r0, r5, #0x3ac
    mov r1, r6
    add r0, r0, r4, lsl #4
    mov r2, #0x10
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ffc214(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    add r9, r1, #0x40
    mov r8, #0
    mov r10, r2
    mov r6, r8
    mov r5, r9
    str r9, [sp]
    mov r11, r9
    mov r4, #8
@L_01ffc23c:
    cmp r8, r10
    bge @L_01ffc2dc
    ldrb r0, [r9, #2]
    cmp r0, #0
    beq @L_01ffc2cc
    cmp r0, #0xc
    bhs @L_01ffc2cc
    ldrh r0, [r9]
    cmp r0, #0
    bne @L_01ffc27c
    cmp r8, #0
    ble @L_01ffc27c
    mov r0, r9
    mov r2, #8
    add r1, r11, r8, lsl #3
    b @L_01ffc2c4
@L_01ffc27c:
    cmp r8, #0
    ble @L_01ffc2c8
    mov r0, r9
    add r1, sp, #4
    mov r2, #8
    bl MI_CpuCopy8
    subs r7, r8, #1
    bmi @L_01ffc2b8
@L_01ffc29c:
    add r0, r7, #1
    add r1, r5, r0, lsl #3
    add r0, r5, r7, lsl #3
    mov r2, r4
    bl MI_CpuCopy8
    subs r7, r7, #1
    bpl @L_01ffc29c
@L_01ffc2b8:
    ldr r1, [sp]
    add r0, sp, #4
    mov r2, #8
@L_01ffc2c4:
    bl MI_CpuCopy8
@L_01ffc2c8:
    add r8, r8, #1
@L_01ffc2cc:
    add r6, r6, #1
    cmp r6, #0x20
    add r9, r9, #8
    blt @L_01ffc23c
@L_01ffc2dc:
    mov r0, r8
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffc2e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    movs r9, r1
    mov r8, r2
    mov r10, r0
    cmpne r8, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    ldr r0, =gAllocator
    mov r2, r5
    mov r1, r8, lsl #2
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    mov r6, r0
    mov r7, r6
    cmp r8, #0
    ble @L_01ffc37c
    ldr r4, =0x7fff
    mov r11, r5
@L_01ffc330:
    mov r0, r5, lsl #1
    ldrh r1, [r9, r0]
    mov r0, r4
    strh r1, [r7]
    bl Random_RandA
    strh r0, [r7, #2]
    mov r0, r5, lsl #1
    ldrh r1, [r9, r0]
    mov r2, r11
    add r0, r10, #0x34c
    bl func_020804bc
    cmp r0, #0
    ldrneh r0, [r7, #2]
    add r5, r5, #1
    orrne r0, r0, #0x8000
    strneh r0, [r7, #2]
    cmp r5, r8
    add r7, r7, #4
    blt @L_01ffc330
@L_01ffc37c:
    cmp r8, #0
    mov r0, #0
    ble @L_01ffc400
@L_01ffc388:
    add r3, r0, #1
    mov r4, r0
    cmp r3, r8
    bge @L_01ffc3bc
@L_01ffc398:
    add r2, r6, r4, lsl #2
    add r1, r6, r3, lsl #2
    ldrh r2, [r2, #2]
    ldrh r1, [r1, #2]
    cmp r2, r1
    movlo r4, r3
    add r3, r3, #1
    cmp r3, r8
    blt @L_01ffc398
@L_01ffc3bc:
    cmp r0, r4
    beq @L_01ffc3f4
    mov r10, r4, lsl #2
    add r5, r6, r4, lsl #2
    mov r3, r0, lsl #2
    ldrh r7, [r6, r10]
    ldrh r4, [r5, #2]
    ldrh r1, [r6, r3]
    add r2, r6, r0, lsl #2
    strh r1, [r6, r10]
    ldrh r1, [r2, #2]
    strh r1, [r5, #2]
    strh r7, [r6, r3]
    strh r4, [r2, #2]
@L_01ffc3f4:
    add r0, r0, #1
    cmp r0, r8
    blt @L_01ffc388
@L_01ffc400:
    mov r2, r6
    cmp r8, #0
    mov r3, #0
    ble @L_01ffc428
@L_01ffc410:
    ldrh r1, [r2], #4
    mov r0, r3, lsl #1
    add r3, r3, #1
    strh r1, [r9, r0]
    cmp r3, r8
    blt @L_01ffc410
@L_01ffc428:
    ldr r0, =gAllocator
    mov r1, r6
    bl _ZN8GameHeap4FreeEPv
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffc440(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    mov r4, r1
    mov r1, #1
    mov r10, r0
    bl _ZN11MatchEngine11GetTeamInfoEi
    add r11, sp, #8
    mov r8, #0
    mov r0, r11
    mov r1, r8
    mov r2, #0x40
    bl MI_CpuFill8
    mov r1, r4
    mov r0, r10
    mov r2, #4
    bl func_01ffc214
    mov r6, r0
    mov r0, r8
    mov r4, r8
    bl func_ov015_02130ae8
    ldr r5, =0xfff3
    mov r7, r0
    mov r9, r8
@L_01ffc49c:
    ldrh r0, [r7, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_01ffc574
    mov r0, r7
    bl func_02080b90
    cmp r0, #1
    beq @L_01ffc574
    ldrh r1, [r7, #0x42]
    add r0, r10, #0x3ac
    bl func_020807d0
    cmp r0, #0
    ldrh r1, [r7, #0xf0]
    beq @L_01ffc55c
    orr r1, r1, #0xe
    mov r0, r7
    strh r1, [r7, #0xf0]
    bl func_020812fc
    str r0, [sp, #4]
    cmp r0, #0
    bne @L_01ffc548
    ldrh r1, [r7, #0x42]
    add r0, r10, #0x34c
    add r2, sp, #4
    bl func_020804bc
    cmp r0, #0
    bne @L_01ffc528
    mov r0, r10
    mov r1, #0
    mov r2, #1
    mov r3, #2
    bl _ZN11MatchEngine13func_0206e018Eiii
    str r0, [sp, #4]
@L_01ffc528:
    ldr r0, [sp, #4]
    cmp r0, #0
    bne @L_01ffc548
    mov r0, r10
    mov r1, #0
    mov r2, #2
    bl _ZN11MatchEngine13func_0206dfa4Eii
    str r0, [sp, #4]
@L_01ffc548:
    mov r0, r7
    ldr r1, [sp, #4]
    bl func_02081398
    add r8, r8, #1
    b @L_01ffc574
@L_01ffc55c:
    and r1, r1, r5
    strh r1, [r7, #0xf0]
    ldrh r1, [r7, #0x42]
    mov r0, r4, lsl #1
    add r4, r4, #1
    strh r1, [r11, r0]
@L_01ffc574:
    add r9, r9, #1
    cmp r9, #0x84
    add r7, r7, #0xfc
    blt @L_01ffc49c
    mov r0, r10
    add r1, sp, #8
    mov r2, r4
    mov r7, #0
    bl func_01ffc2e8
    sub r8, r6, r8
    cmp r8, #0
    mov r5, r7
    ble @L_01ffc634
    add r11, sp, #4
@L_01ffc5ac:
    cmp r5, r4
    bge @L_01ffc634
    mov r1, r5, lsl #1
    add r0, sp, #8
    ldrh r0, [r0, r1]
    mov r1, r7
    bl func_ov015_02130b14
    mov r9, r0
    ldrh r1, [r9, #0xf0]
    orr r1, r1, #0xe
    strh r1, [r9, #0xf0]
    bl func_020812fc
    str r0, [sp, #4]
    cmp r0, #0
    bne @L_01ffc628
    ldrh r1, [r9, #0x42]
    mov r2, r11
    add r0, r10, #0x34c
    bl func_020804bc
    cmp r0, #0
    bne @L_01ffc618
    mov r0, r10
    mov r1, r7
    mov r2, #1
    mov r3, #2
    bl _ZN11MatchEngine13func_0206e018Eiii
    str r0, [sp, #4]
@L_01ffc618:
    ldr r1, [sp, #4]
    mov r0, r9
    mov r2, #2
    bl func_020813a8
@L_01ffc628:
    add r5, r5, #1
    cmp r5, r8
    blt @L_01ffc5ac
@L_01ffc634:
    sub r4, r4, r5
    cmp r4, #0
    mov r11, #0
    ble @L_01ffc654
    add r1, sp, #8
    mov r2, r4, lsl #1
    add r0, r1, r5, lsl #1
    bl func_02084aec
@L_01ffc654:
    mov r5, #0
    mov r9, r5
    cmp r6, #0
    ble @L_01ffc6f4
@L_01ffc664:
    cmp r9, r4
    bge @L_01ffc6f4
    mov r1, r9, lsl #1
    add r0, sp, #8
    ldrh r0, [r0, r1]
    mov r1, r11
    bl func_ov015_02130b14
    mov r8, r0
    mov r1, #1
    bl func_02080c64
    ldrh r1, [r8, #0x42]
    add r0, r5, #1
    cmp r5, #4
    orr r1, r1, #0x8000
    strh r1, [r8, #0x42]
    ldrh r1, [r8, #0xf0]
    orr r2, r1, #0x40
    ldr r1, =0xffdf
    and r1, r2, r1
    strh r1, [r8, #0xf0]
    str r0, [sp, #4]
    movgt r0, r11
    mov r7, r0
    mov r0, r8
    strgt r11, [sp, #4]
    bl func_020812f4
    mov r2, r0
    mov r1, r8
    mov r3, r7
    mov r0, r10
    str r7, [sp]
    bl _ZN11MatchEngine13func_0207c478EP11MatchPlayeriii
    add r9, r9, #1
    add r5, r5, #1
    cmp r9, r6
    blt @L_01ffc664
@L_01ffc6f4:
    cmp r9, r4
    add r7, sp, #8
    mov r5, #1
    mov r6, #0
    bge @L_01ffc758
@L_01ffc708:
    mov r0, r9, lsl #1
    ldrh r0, [r7, r0]
    mov r1, r6
    bl func_ov015_02130b14
    movs r1, r0
    beq @L_01ffc74c
    ldrh r0, [r1, #0xf0]
    tst r0, #1
    movne r0, r5
    moveq r0, r6
    cmp r0, #0
    beq @L_01ffc74c
    mov r0, r10
    mov r2, r6
    mov r3, r6
    str r6, [sp]
    bl _ZN11MatchEngine13func_0207c478EP11MatchPlayeriii
@L_01ffc74c:
    add r9, r9, #1
    cmp r9, r4
    blt @L_01ffc708
@L_01ffc758:
    mov r0, r10
    mov r1, #1
    bl _ZN11MatchEngine13func_0206b4ccEi
    mov r1, #0
    strh r1, [r0, #8]
    mov r0, r10
    bl func_ov087_02180ae0
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffc784(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r10, r0
    ldr r6, [r10, #0xbd8]
    mov r4, #0
    mov r5, r1
    str r4, [sp, #0x14]
    mov r1, r4
    mov r9, r2
    mov r11, r3
    str r1, [sp, #0x10]
    cmp r6, #0
    bne @L_01ffc7c4
    bl func_01ffed6c
    mov r0, #1
    str r0, [sp, #0x14]
@L_01ffc7c4:
    ldr r0, [r10, #0xbdc]
    cmp r0, #0
    bne @L_01ffc7e0
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a78cEv
    mov r0, #1
    str r0, [sp, #0x10]
@L_01ffc7e0:
    mov r0, #0
    str r0, [sp, #0x18]
    mov r6, r0
    ldrb r0, [sp, #0x50]
    add r5, r5, #0x40
    str r0, [sp, #0x1c]
    add r0, r10, #0x3ac
    add r0, r0, r9, lsl #4
    str r0, [sp, #0x20]
    ldr r0, =0x922
    sub r0, r0, #9
    str r0, [sp, #0x24]
    ldr r0, =0x922
    sub r0, r0, #1
    str r0, [sp, #0x28]
    b @L_01ffc9c4
@L_01ffc820:
    mov r0, r6, lsl #3
    ldrh r1, [r5, r0]
    cmp r1, #0
    beq @L_01ffc9c0
    ldr r0, [sp, #0x1c]
    cmp r0, #0
    beq @L_01ffc89c
    cmp r9, #1
    bne @L_01ffc89c
    ldr r0, [sp, #0x24]
    cmp r1, r0
    ldrne r0, [sp, #0x28]
    cmpne r1, r0
    bne @L_01ffc870
    ldr r2, =0x922
    mov r0, r10
    mov r1, r4
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    bne @L_01ffc9c0
@L_01ffc870:
    mov r0, r10
    mov r1, r6, lsl #3
    ldrh r1, [r5, r1]
    bl _ZN11MatchEngine13func_0206f9e0Em
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r10
    mov r1, r4
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    bne @L_01ffc9c0
@L_01ffc89c:
    add r1, r5, r6, lsl #3
    ldrb r0, [r1, #2]
    cmp r0, #0x10
    strhib r4, [r1, #2]
    mov r0, r10
    mov r1, r9
    bl func_01ffe1e4
    movs r8, r0
    bmi @L_01ffc9cc
    ldr r0, =gGameState
    mov r7, #1
    ldrb r0, [r0, #0x1a]
    cmp r9, #0
    movne r7, r4
    cmp r0, #0
    beq @L_01ffc8ec
    mov r0, r9
    bl func_ov015_02131bd0
    cmp r0, #0
    movne r7, r4
@L_01ffc8ec:
    add r0, r5, r6, lsl #3
    str r0, [sp]
    mov r2, r8
    ldrb r8, [r0, #4]
    mov r12, #1
    cmp r7, #0
    add r8, r11, r8
    str r8, [sp, #4]
    movne r12, r4
    str r7, [sp, #8]
    mov r1, r6, lsl #3
    str r12, [sp, #0xc]
    ldrh r1, [r5, r1]
    mov r0, r10
    mov r3, r9
    bl func_01ffe1a4
    movs r7, r0
    beq @L_01ffc9c0
    add r0, r5, r6, lsl #3
    ldrb r0, [r0, #2]
    subs r8, r0, #1
    bmi @L_01ffc980
    cmp r8, #4
    bge @L_01ffc980
    ldr r0, [sp, #0x20]
    mov r1, r8
    bl func_02080780
    cmp r0, #0
    bne @L_01ffc980
    str r4, [sp]
    str r4, [sp, #4]
    str r4, [sp, #8]
    mov r0, r10
    mov r1, r9
    mov r2, r7
    mov r3, r8
    bl _ZN11MatchEngine13func_0207b780Ev
@L_01ffc980:
    cmp r8, #0
    blt @L_01ffc998
    cmp r8, #0xb
    ldrlt r0, [sp, #0x18]
    addlt r0, r0, #1
    strlt r0, [sp, #0x18]
@L_01ffc998:
    mov r0, r10
    mov r1, r4
    mov r2, r7
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    bne @L_01ffc9c0
    mov r1, r7
    mov r0, r10
    mov r2, r11
    bl func_02081f7c
@L_01ffc9c0:
    add r6, r6, #1
@L_01ffc9c4:
    cmp r6, #0x20
    blt @L_01ffc820
@L_01ffc9cc:
    mov r0, r10
    bl func_ov087_02180ae0
    ldr r0, [sp, #0x14]
    cmp r0, #0
    beq @L_01ffc9e8
    mov r0, r10
    bl func_01ffede8
@L_01ffc9e8:
    ldr r0, [sp, #0x10]
    cmp r0, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a820Ev
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffca10(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x24
    mov r5, #0
    cmp r2, #0
    mov r6, r1
    str r2, [sp, #0x18]
    str r5, [sp, #0x14]
    mov r4, r5
    addeq sp, sp, #0x24
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, r2
    mov r1, r5
    mov r2, #0x140
    bl MI_CpuFill8
    ldr r3, =gAllocator
    ldr r1, =data_020aefd8
    ldr r0, [r3]
    cmp r0, #0
    beq @L_01ffca84
    str r5, [sp]
    str r5, [sp, #4]
    str r5, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x14
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
    mov r5, r0
@L_01ffca84:
    cmp r5, #0
    str r5, [sp, #0x20]
    addeq sp, sp, #0x24
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [sp, #0x14]
    add r2, sp, #0x1c
    add r3, sp, #0x20
    mov r1, r6
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    bne @L_01ffcacc
    ldr r1, [sp, #0x14]
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    add sp, sp, #0x24
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_01ffcacc:
    ldr r3, =gAllocator
    ldr r12, [sp, #0x20]
    ldr r0, [r3]
    ldr r2, [sp, #0x1c]
    cmp r0, #0
    ldr r1, =data_020aeff0
    moveq r0, #0
    beq @L_01ffcb08
    stmia sp, {r2, r12}
    str r4, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x18
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffcb08:
    str r0, [sp, #0x20]
    cmp r0, #0
    bne @L_01ffcb2c
    ldr r1, [sp, #0x14]
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    add sp, sp, #0x24
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_01ffcb2c:
    ldr r1, [sp, #0x14]
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    mov r0, #1
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_01ffcb50(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x248
    sub sp, sp, #0x400
    mov r4, #0
    str r4, [sp, #0x10]
    mov r10, r0
    str r1, [sp, #4]
    str r2, [sp, #8]
    str r3, [sp, #0xc]
    mov r4, r4
    bl func_ov015_02131808
    cmp r0, #0
    beq @L_01ffcb90
    ldr r0, [sp, #4]
    cmp r0, #1
    moveq r4, #1
@L_01ffcb90:
    cmp r4, #0
    ldrne r0, =data_020cb6e0
    ldr r1, [sp, #4]
    ldrne r0, [r0, #0x26c]
    cmpne r0, #0
    movne r0, #1
    strne r0, [sp, #0x10]
    mov r0, #0
    str r0, [sp, #0x30]
    ldr r2, [sp, #0x30]
    mov r0, r10
    str r2, [sp, #0x2c]
    ldr r2, [sp, #0x30]
    str r2, [sp, #0x28]
    ldr r2, [sp, #0x30]
    str r2, [sp, #0x24]
    bl func_01ffc178
    ldr r1, [sp, #4]
    mov r0, r10
    bl _ZN11MatchEngine11GetTeamInfoEi
    str r0, [sp, #0x34]
    ldr r0, [sp, #0xc]
    cmp r0, #0
    bgt @L_01ffcc10
    ldr r0, [sp, #4]
    cmp r0, #1
    movne r0, #1
    strne r0, [sp, #0xc]
    bne @L_01ffcc10
    mov r0, r10
    bl _ZN11MatchEngine13func_0206ccb8Ev
    str r0, [sp, #0xc]
@L_01ffcc10:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206de44Ev
    ldrb r0, [r0, #0xd]
    cmp r0, #0
    ldreq r0, =gGameState
    ldreqb r0, [r0, #0x1a]
    cmpeq r0, #0
    bne @L_01ffcc3c
    ldr r0, [sp, #4]
    cmp r0, #0
    bne @L_01ffcc44
@L_01ffcc3c:
    mov r0, #1
    str r0, [sp, #0x2c]
@L_01ffcc44:
    add r4, sp, #0x500
    add r4, r4, #8
    mov r9, #0
    mov r0, r4
    mov r1, r9
    mov r2, #0x140
    bl memset
    ldr r0, [sp, #0x10]
    cmp r0, #0
    beq @L_01ffcd48
    ldr r1, =data_020cb6e0
    ldr r0, =0x834
    ldr r3, [r1, #0x26c]
    ldrb r2, [r1, #0x282]
    add r3, r3, #8
    mov r1, r4
    mla r8, r2, r0, r3
    add r0, r8, #0x3d4
    add r0, r0, #0x400
    mov r2, #0x40
    bl MI_CpuCopy8
    add r6, sp, #0x500
    add r11, sp, #0x500
    add r5, r8, #0x14
    add r7, r8, #0xd4
    add r6, r6, #0x48
    add r11, r11, #0x4a
    mov r4, #0x70
    b @L_01ffcd34
@L_01ffccb8:
    add r0, r5, #0x800
    mov r1, r9
    bl func_02080328
    mov r3, #0
    b @L_01ffcce8
@L_01ffcccc:
    mul r2, r3, r4
    add r1, r8, r2
    ldrh r1, [r1, #0xd8]
    cmp r0, r1
    addeq r1, r7, r2
    beq @L_01ffccf4
    add r3, r3, #1
@L_01ffcce8:
    cmp r3, #0x10
    blt @L_01ffcccc
    mov r1, #0
@L_01ffccf4:
    cmp r1, #0
    beq @L_01ffcd30
    mov r2, r9, lsl #3
    strh r0, [r6, r2]
    add r0, r9, #1
    and r2, r0, #0xff
    add r0, sp, #0x500
    strb r2, [r11, r9, lsl #3]
    add r0, r0, #0x4b
    strb r2, [r0, r9, lsl #3]
    ldrb r0, [r1, #0x4a]
    sub r1, r0, #1
    add r0, sp, #0x500
    add r0, r0, #0x4c
    strb r1, [r0, r9, lsl #3]
@L_01ffcd30:
    add r9, r9, #1
@L_01ffcd34:
    cmp r9, #0x10
    blt @L_01ffccb8
    add r0, sp, #0x500
    add r0, r0, #8
    b @L_01ffd4c0
@L_01ffcd48:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    beq @L_01ffd494
    ldr r0, [sp, #4]
    cmp r0, #1
    bne @L_01ffd494
    ldr r0, =data_020d3d20
    bl func_0209b5fc
    mov r4, r0
    add r6, sp, #0x388
    mov r0, r9
    mov r1, r9
    mov r2, r9
    mov r3, r9
    mov r5, #0xc
@L_01ffcd88:
    stmia r6!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    subs r5, r5, #1
    bne @L_01ffcd88
    mov r7, #0
    add r0, sp, #0x50
    b @L_01ffcdac
@L_01ffcda4:
    str r7, [r0, r7, lsl #2]
    add r7, r7, #1
@L_01ffcdac:
    cmp r7, #8
    blt @L_01ffcda4
    mov r7, #0
    add r5, sp, #0x50
    mov r6, r7
    b @L_01ffce38
@L_01ffcdc4:
    mov r0, r6
    mov r8, r7
    b @L_01ffcde4
@L_01ffcdd0:
    ldr r1, [r5, r8, lsl #2]
    add r8, r8, #1
    add r1, r4, r1, lsl #2
    ldrh r1, [r1, #6]
    add r0, r0, r1
@L_01ffcde4:
    cmp r8, #8
    blt @L_01ffcdd0
    cmp r0, #0
    beq @L_01ffce40
    bl Random_RandB
    mov r8, r7
    b @L_01ffce1c
@L_01ffce00:
    ldr r1, [r5, r8, lsl #2]
    add r1, r4, r1, lsl #2
    ldrh r1, [r1, #6]
    sub r0, r0, r1
    cmp r0, #0
    ble @L_01ffce24
    add r8, r8, #1
@L_01ffce1c:
    cmp r8, #7
    blt @L_01ffce00
@L_01ffce24:
    ldr r1, [r5, r7, lsl #2]
    ldr r0, [r5, r8, lsl #2]
    str r0, [r5, r7, lsl #2]
    str r1, [r5, r8, lsl #2]
    add r7, r7, #1
@L_01ffce38:
    cmp r7, #7
    blt @L_01ffcdc4
@L_01ffce40:
    mov r6, #0
    add r5, sp, #0x50
    add r8, sp, #0x388
    mov r7, #0x30
    b @L_01ffce70
@L_01ffce54:
    mov r0, r10
    ldr r3, [r5, r6, lsl #2]
    add r1, r4, r3, lsl #2
    ldrh r1, [r1, #4]
    mla r2, r3, r7, r8
    bl _ZN11MatchEngine13func_0206cd08EiPv
    add r6, r6, #1
@L_01ffce70:
    cmp r6, #8
    blt @L_01ffce54
    mov r7, #0
    add r4, sp, #0x50
    add r3, sp, #0x388
    mov r1, #0x30
    b @L_01ffcea8
@L_01ffce8c:
    ldr r0, [r4, r7, lsl #2]
    mul r2, r0, r1
    ldrh r2, [r3, r2]
    ldr r0, [sp, #8]
    cmp r0, r2
    beq @L_01ffceb0
    add r7, r7, #1
@L_01ffcea8:
    cmp r7, #8
    blt @L_01ffce8c
@L_01ffceb0:
    cmp r7, #8
    mov r9, #0
    moveq r0, #1
    streq r0, [sp, #0x30]
    mov r3, #1
    str r3, [sp, #0x20]
    add r0, sp, #0x70
    mov r1, r9
    mov r2, #0x318
    str r9, [sp, #0x1c]
    str r9, [sp, #0x18]
    str r9, [sp, #0x14]
    bl memset
    add r0, sp, #0x48
    mov r7, r9
    strh r9, [r0]
    strh r9, [r0, #2]
    strh r9, [r0, #4]
@L_01ffcef8:
    ldr r0, [sp, #0x30]
    cmp r0, #0
    ldrne r1, [sp, #8]
    bne @L_01ffcf20
    add r1, sp, #0x50
    ldr r2, [r1, r7, lsl #2]
    mov r0, #0x30
    mul r0, r2, r0
    add r1, sp, #0x388
    ldrh r1, [r1, r0]
@L_01ffcf20:
    cmp r1, #0
    addeq r7, r7, #1
    beq @L_01ffd258
    add r4, sp, #0x500
    add r4, r4, #8
    mov r0, r10
    mov r2, r4
    bl func_01ffca10
    add r0, sp, #0x400
    add r0, r0, #0x48
    ldrh r1, [r0, #0xe0]
    ldr r0, [sp, #8]
    cmp r0, r1
    bne @L_01ffcf68
    ldr r1, [sp, #0x34]
    mov r0, r4
    mov r2, #0x40
    bl MI_CpuCopy8
@L_01ffcf68:
    ldr r0, =0x922
    ldr r5, =0xefff
    sub r0, r0, #9
    str r0, [sp, #0x38]
    sub r0, r5, #0x7000
    str r0, [sp, #0x40]
    ldr r0, =0x922
    mov r8, #0
    sub r0, r0, #1
    str r0, [sp, #0x3c]
    add r0, r10, #0x11800
    add r6, sp, #0x70
    mov r4, #6
    str r0, [sp, #0x44]
    b @L_01ffd24c
@L_01ffcfa4:
    add r0, sp, #0x500
    mov r2, r8, lsl #3
    add r0, r0, #0x48
    ldrh r1, [r0, r2]
    cmp r1, #0
    beq @L_01ffd248
    add r0, sp, #0x500
    add r0, r0, #0x4a
    ldrb r3, [r0, r2]
    mov r0, #6
    mul r0, r9, r0
    strh r1, [r6, r0]
    add r2, r6, r0
    strh r3, [r2, #4]
    mov r0, #0
    strh r0, [r2, #2]
    mov r0, r10
    bl _ZN11MatchEngine13func_0206f9e0Em
    mov r0, r0, lsl #0x10
    mov r11, r0, lsr #0x10
    mov r2, r11, lsl #0x10
    mov r0, r10
    mov r1, #0
    mov r2, r2, lsr #0x10
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    beq @L_01ffd01c
    ldr r0, [sp, #0x2c]
    cmp r0, #0
    beq @L_01ffd03c
@L_01ffd01c:
    mov r0, #6
    mla r2, r9, r0, r6
    ldr r0, [sp, #0x18]
    ldrh r1, [r2, #2]
    add r0, r0, #1
    str r0, [sp, #0x18]
    orr r0, r1, #0x8000
    strh r0, [r2, #2]
@L_01ffd03c:
    ldr r0, [sp, #0x2c]
    cmp r0, #0
    bne @L_01ffd09c
    ldr r0, [sp, #0x38]
    cmp r11, r0
    beq @L_01ffd060
    ldr r0, [sp, #0x3c]
    cmp r11, r0
    bne @L_01ffd09c
@L_01ffd060:
    ldr r2, =0x922
    mov r0, r10
    mov r1, #0
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    beq @L_01ffd09c
    mov r0, #6
    mla r0, r9, r0, r6
    ldr r1, [sp, #0x18]
    ldrh r2, [r0, #2]
    sub r1, r1, #1
    str r1, [sp, #0x18]
    ldr r1, [sp, #0x40]
    and r1, r2, r1
    strh r1, [r0, #2]
@L_01ffd09c:
    ldr r0, [sp, #0x44]
    ldrh r0, [r0, #0x84]
    cmp r0, #0
    beq @L_01ffd0f0
    cmp r11, r0
    bne @L_01ffd0f0
    mov r0, #6
    mul r0, r9, r0
    add r1, r6, r0
    ldrh r3, [r1, #2]
    mov r2, #0
    str r2, [sp, #0x20]
    mov r2, #1
    str r2, [sp, #0x14]
    orr r2, r3, #0x4000
    strh r2, [r1, #2]
    ldrh r2, [r1, #2]
    orr r2, r2, #0x800
    strh r2, [r1, #2]
    ldrh r0, [r6, r0]
    str r0, [sp, #0x24]
@L_01ffd0f0:
    mov r0, #6
    mla r0, r9, r0, r6
    ldrh r1, [r0, #4]
    cmp r1, #1
    ldreq r1, [sp, #0x44]
    ldreqh r1, [r1, #0x84]
    cmpeq r1, #0
    bne @L_01ffd198
    add r1, sp, #0x400
    add r1, r1, #0x48
    ldrh r2, [r1, #0xe0]
    ldr r1, [sp, #8]
    cmp r1, r2
    bne @L_01ffd170
    ldrh r0, [r0, #2]
    tst r0, #0x8000
    beq @L_01ffd170
    mov r2, #0
    b @L_01ffd150
@L_01ffd13c:
    mla r1, r2, r4, r6
    ldrh r0, [r1, #2]
    add r2, r2, #1
    and r0, r0, r5
    strh r0, [r1, #2]
@L_01ffd150:
    cmp r2, r9
    blt @L_01ffd13c
    mov r0, #6
    mla r1, r9, r0, r6
    ldrh r0, [r1, #2]
    orr r0, r0, #0x4000
    strh r0, [r1, #2]
    b @L_01ffd18c
@L_01ffd170:
    ldr r0, [sp, #0x20]
    cmp r0, #0
    movne r0, #6
    mlane r1, r9, r0, r6
    ldrneh r0, [r1, #2]
    addne r0, r0, #0x1000
    strneh r0, [r1, #2]
@L_01ffd18c:
    mov r0, #0
    str r0, [sp, #0x20]
    b @L_01ffd1ac
@L_01ffd198:
    mov r0, #6
    mla r1, r9, r0, r6
    ldrh r0, [r1, #2]
    orr r0, r0, #0x400
    strh r0, [r1, #2]
@L_01ffd1ac:
    add r0, sp, #0x400
    add r0, r0, #0x48
    ldrh r1, [r0, #0xe0]
    ldr r0, [sp, #8]
    cmp r0, r1
    bne @L_01ffd1ec
    mov r0, #6
    mla r1, r9, r0, r6
    ldrh r0, [r1, #2]
    orr r0, r0, #0x2000
    strh r0, [r1, #2]
    ldrh r0, [r1, #2]
    tst r0, #0x8000
    ldrne r0, [sp, #0x1c]
    addne r0, r0, #1
    strne r0, [sp, #0x1c]
@L_01ffd1ec:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206d970Ev
    cmp r0, #0
    beq @L_01ffd220
    mov r0, #0xf0
    bl Random_RandB
    add r0, r0, #0xf
    mov r1, r0, lsl #0x10
    mov r0, #6
    mla r2, r9, r0, r6
    ldrh r0, [r2, #2]
    add r0, r0, r1, lsr #16
    b @L_01ffd238
@L_01ffd220:
    mov r0, #6
    mla r2, r9, r0, r6
    ldrh r1, [r2, #2]
    rsb r0, r8, #0xff
    mov r0, r0, lsl #0x10
    add r0, r1, r0, lsr #16
@L_01ffd238:
    strh r0, [r2, #2]
    add r0, r9, #1
    mov r0, r0, lsl #0x10
    mov r9, r0, lsr #0x10
@L_01ffd248:
    add r8, r8, #1
@L_01ffd24c:
    cmp r8, #0x20
    blt @L_01ffcfa4
    add r7, r7, #1
@L_01ffd258:
    cmp r7, #8
    bge @L_01ffd26c
    ldr r0, [sp, #0x30]
    cmp r0, #0
    beq @L_01ffcef8
@L_01ffd26c:
    ldr r0, [sp, #0x14]
    cmp r0, #0
    bne @L_01ffd2e4
    add r0, r10, #0x11800
    ldrh r3, [r0, #0x84]
    cmp r3, #0
    beq @L_01ffd2e4
    mov r0, #6
    mul r2, r9, r0
    add r1, sp, #0x70
    strh r3, [r1, r2]
    mov r0, #0
    add r2, r1, r2
    strh r0, [r2, #4]
    ldrh r1, [r2, #2]
    ldr r0, [sp, #0x18]
    add r0, r0, #1
    str r0, [sp, #0x18]
    str r3, [sp, #0x24]
    orr r0, r1, #0x8000
    strh r0, [r2, #2]
    ldrh r1, [r2, #2]
    add r0, r9, #1
    mov r0, r0, lsl #0x10
    orr r1, r1, #0x4000
    strh r1, [r2, #2]
    mov r9, r0, lsr #0x10
    ldrh r0, [r2, #2]
    orr r0, r0, #0x800
    strh r0, [r2, #2]
@L_01ffd2e4:
    ldr r0, [sp, #0x18]
    cmp r0, #4
    bge @L_01ffd328
    mov r0, #1
    str r0, [sp, #0x2c]
    mov r7, #0
    add r3, sp, #0x70
    mov r0, #6
    ldr r1, =0x7fff
    b @L_01ffd320
@L_01ffd30c:
    mla r4, r7, r0, r3
    ldrh r2, [r4, #2]
    add r7, r7, #1
    and r2, r2, r1
    strh r2, [r4, #2]
@L_01ffd320:
    cmp r7, r9
    blt @L_01ffd30c
@L_01ffd328:
    ldr r0, [sp, #0x1c]
    ldr r1, [sp, #0x18]
    cmp r0, #4
    movlt r0, #1
    strlt r0, [sp, #0x28]
    mov r0, #0x64
    mul r0, r1, r0
    mov r1, r9
    bl _s32_div_f
    ldr r4, =data_020d3d20
    and r1, r0, #0xff
    mov r0, r4
    bl func_0209bb34
    ldr r0, [sp, #0x24]
    cmp r0, #0
    beq @L_01ffd374
    mov r0, r4
    mov r1, #0
    bl func_0209bb34
@L_01ffd374:
    mov r7, #0
    b @L_01ffd410
@L_01ffd37c:
    add r0, r7, #1
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    mov r0, #6
    mul r4, r7, r0
    add r3, sp, #0x70
    mov r5, r0
    add r2, r3, r4
    b @L_01ffd404
@L_01ffd3a0:
    ldrh r11, [r2, #2]
    mul r1, r8, r5
    add r0, r3, r1
    ldrh r6, [r0, #2]
    cmp r11, r6
    bhs @L_01ffd400
    ldrh r12, [r3, r1]
    ldrh r11, [r0, #2]
    ldrh r6, [r0, #4]
    strh r12, [sp, #0x48]
    strh r11, [sp, #0x4a]
    strh r6, [sp, #0x4c]
    ldrh r12, [r3, r4]
    ldrh r11, [sp, #0x48]
    ldrh r6, [sp, #0x4a]
    strh r12, [r3, r1]
    ldrh r12, [r2, #2]
    ldrh r1, [sp, #0x4c]
    strh r12, [r0, #2]
    ldrh r12, [r2, #4]
    strh r12, [r0, #4]
    strh r11, [r3, r4]
    strh r6, [r2, #2]
    strh r1, [r2, #4]
@L_01ffd400:
    add r8, r8, #1
@L_01ffd404:
    cmp r8, r9
    blt @L_01ffd3a0
    add r7, r7, #1
@L_01ffd410:
    sub r0, r9, #1
    cmp r7, r0
    blt @L_01ffd37c
    add r2, sp, #0x500
    add r1, sp, #0x500
    mov r7, #0
    add r5, sp, #0x70
    add r2, r2, #0x48
    add r1, r1, #0x4a
    mov r0, #6
    b @L_01ffd454
@L_01ffd43c:
    mul r3, r7, r0
    ldrh r4, [r5, r3]
    mov r3, r7, lsl #3
    add r7, r7, #1
    strh r4, [r2, r3]
    strb r7, [r1, r3]
@L_01ffd454:
    cmp r7, #4
    blt @L_01ffd43c
    add r0, sp, #0x500
    mov r7, #4
    mov r2, #0
    add r0, r0, #0x48
    b @L_01ffd47c
@L_01ffd470:
    mov r1, r7, lsl #3
    strh r2, [r0, r1]
    add r7, r7, #1
@L_01ffd47c:
    cmp r7, #0x10
    blt @L_01ffd470
    add r1, sp, #0x500
    add r1, r1, #8
    ldr r0, [sp, #0x34]
    b @L_01ffd4c4
@L_01ffd494:
    add r4, sp, #0x500
    add r4, r4, #8
    ldr r1, [sp, #8]
    mov r0, r10
    mov r2, r4
    bl func_01ffca10
    cmp r0, #0
    addeq sp, sp, #0x248
    addeq sp, sp, #0x400
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r4
@L_01ffd4c0:
    ldr r1, [sp, #0x34]
@L_01ffd4c4:
    mov r2, #0x40
    bl MI_CpuCopy8
    ldr r0, [sp, #0x34]
    ldr r1, =data_020ca760
    ldrh r3, [r0, #0x22]
    ldr r0, [sp, #4]
    mov r2, r0, lsl #1
    ldr r0, [sp, #0x34]
    strh r3, [r0, #0x3e]
    ldr r0, [sp, #8]
    strh r0, [r1, r2]
    ldr r0, [sp, #4]
    cmp r0, #0
    ldreq r1, =gGameState
    ldreqb r0, [r1, #0x1a]
    cmpeq r0, #0
    ldreq r0, [sp, #4]
    streqb r0, [r1, #0x88]
    add r0, r10, #0x22c
    bl _ZN10MatchRules13func_0206f014Ev
    cmp r0, #0
    beq @L_01ffd544
    ldr r0, [sp, #4]
    cmp r0, #1
    bne @L_01ffd544
    add r1, sp, #0x500
    add r1, r1, #8
    mov r0, r10
    bl func_01ffc440
    add sp, sp, #0x248
    add sp, sp, #0x400
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffd544:
    ldr r0, [sp, #4]
    bl func_ov015_02131bb4
    cmp r0, #0
    ldrne r0, [sp, #0x34]
    ldrneh r1, [r0, #0x30]
    cmpne r1, #0
    beq @L_01ffd56c
    mov r0, r10
    mov r2, #0x20
    bl _ZN11MatchEngine13func_020765d4Eii
@L_01ffd56c:
    ldr r0, [sp, #0x2c]
    mov r4, #1
    cmp r0, #0
    movne r4, #0
    add r1, sp, #0x500
    ldr r2, [sp, #4]
    ldr r3, [sp, #0xc]
    add r1, r1, #8
    mov r0, r10
    str r4, [sp]
    bl func_01ffc784
    ldr r0, [sp, #0x2c]
    cmp r0, #0
    beq @L_01ffd638
    mov r0, r10
    mov r4, #1
    mov r8, #0
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    beq @L_01ffd638
    mov r6, r8
    ldr r5, =0x15a
    b @L_01ffd630
@L_01ffd5c8:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_01ffd62c
    bl func_02080b90
    cmp r0, #1
    bne @L_01ffd62c
    mov r0, r7
    mov r1, r6
    bl func_0208130c
    cmp r0, #0
    beq @L_01ffd62c
    ldrh r2, [r7, #0x42]
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    beq @L_01ffd62c
    mov r0, r5
    bl func_0209d8b8
    mov r2, r0
    mov r1, r7
    mov r0, r10
    bl _ZN11MatchEngine13func_0207f5d0EPcPKc
    str r4, [sp, #0x28]
@L_01ffd62c:
    add r8, r8, #1
@L_01ffd630:
    cmp r8, #0x84
    blt @L_01ffd5c8
@L_01ffd638:
    ldr r0, [sp, #0x24]
    mov r7, #1
    cmp r0, #0
    mov r6, #0
    beq @L_01ffd6b0
    ldr r0, [sp, #4]
    cmp r0, #1
    bne @L_01ffd6b0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    beq @L_01ffd6b0
    ldr r0, [sp, #0x24]
    orr r0, r0, #0x8000
    bl func_ov015_02130b94
    movs r5, r0
    beq @L_01ffd6e4
    add r0, r5, #0x20
    bl STD_GetStringLength
    ldr r0, =0x15b
    bl func_0209d8b8
    mov r4, r0
    ldr r1, [sp, #4]
    mov r0, r10
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r2, r4
    add r3, r5, #0x20
    mov r1, #0x1f
    bl func_02017278
    b @L_01ffd6e4
@L_01ffd6b0:
    ldr r0, [sp, #0x28]
    cmp r0, #0
    beq @L_01ffd6e4
    add r0, r10, #0x11000
    ldrb r0, [r0, #0x8bd]
    cmp r0, #0
    bne @L_01ffd6e4
    mov r0, #0x15c
    bl func_0209d8b8
    mov r1, r0
    ldr r0, [sp, #0x34]
    mov r2, #0x1f
    bl STD_CopyLString
@L_01ffd6e4:
    ldr r1, [sp, #4]
    mov r0, r10
    bl _ZN11MatchEngine13func_0206b4ccEi
    ldr r1, [sp, #8]
    strh r1, [r0, #8]
    add r0, r10, #0x11000
    ldrb r0, [r0, #0x8bd]
    cmp r0, #0
    beq @L_01ffd798
    bl func_ov015_0213178c
    cmp r0, #0
    ldreq r0, [sp, #4]
    cmpeq r0, #1
    bne @L_01ffd798
    ldr r5, =0x15d
    mov r8, #0x10
    sub r4, r5, #0x5a
    b @L_01ffd790
@L_01ffd72c:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r9, r0
    beq @L_01ffd78c
    ldrh r0, [r9, #0xf0]
    tst r0, #1
    movne r0, r7
    moveq r0, r6
    cmp r0, #0
    beq @L_01ffd78c
    mov r0, r9
    bl func_02080b90
    cmp r0, #1
    bne @L_01ffd78c
    ldr r0, [sp, #8]
    cmp r0, r4
    cmpne r0, #0x104
    beq @L_01ffd78c
    mov r0, r5
    bl func_0209d8b8
    mov r2, r0
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_0207f5d0EPcPKc
@L_01ffd78c:
    add r8, r8, #1
@L_01ffd790:
    cmp r8, #0x20
    blt @L_01ffd72c
@L_01ffd798:
    ldr r0, [sp, #0x10]
    mov r5, #0
    cmp r0, #0
    addeq sp, sp, #0x248
    addeq sp, sp, #0x400
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_020cb6e0
    ldr r0, =0x834
    ldr r2, [r1, #0x26c]
    ldrb r1, [r1, #0x282]
    add r2, r2, #8
    mov r7, #0x10
    mla r6, r1, r0, r2
    add r11, r6, #0xd4
    mov r4, #0x70
    b @L_01ffd864
@L_01ffd7d8:
    mov r0, r7
    bl func_ov015_02130ae8
    movs r8, r0
    beq @L_01ffd860
    ldrh r2, [r8, #0x42]
    ldr r1, =0xfff
    mov r0, r5
    and r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r3, r1, lsr #0x10
    b @L_01ffd820
@L_01ffd804:
    mul r2, r0, r4
    add r1, r6, r2
    ldrh r1, [r1, #0xd8]
    cmp r3, r1
    addeq r0, r11, r2
    beq @L_01ffd82c
    add r0, r0, #1
@L_01ffd820:
    cmp r0, #0x10
    blt @L_01ffd804
    mov r0, r5
@L_01ffd82c:
    cmp r0, #0
    beq @L_01ffd860
    ldrb r9, [r8, #0xb6]
    add r1, r8, #0x60
    mov r2, #0x70
    bl MI_CpuCopy8
    strb r9, [r8, #0xb6]
    mov r1, r8
    mov r0, r10
    mov r2, #1
    mov r3, r5
    str r5, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
@L_01ffd860:
    add r7, r7, #1
@L_01ffd864:
    cmp r7, #0x20
    blt @L_01ffd7d8
    add sp, sp, #0x248
    add sp, sp, #0x400
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffd8a8(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov r2, r0
    ldr r0, [r2, #0xbb4]
    cmp r0, #0
    bne @L_01ffd910
    ldr r3, =gAllocator
    ldr r1, =data_020af008
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffd900
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    add r2, r2, #0x3b4
    str r12, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0x800
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffd900:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {pc}
@L_01ffd910:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

asm void func_01ffd924(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov r2, r0
    ldr r0, [r2, #0xbbc]
    cmp r0, #0
    bne @L_01ffd98c
    ldr r3, =gAllocator
    ldr r1, =data_020af024
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffd97c
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    add r2, r2, #0x3bc
    str r12, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0x800
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffd97c:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {pc}
@L_01ffd98c:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

asm void func_01ffd9a0(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov r2, r0
    ldr r0, [r2, #0xbec]
    cmp r0, #0
    bne @L_01ffda14
    ldr r3, =gAllocator
    ldr r1, =data_020af03c
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffd9f8
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    add r2, r2, #0x3ec
    str r12, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0x800
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffd9f8:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {pc}
    ldr r1, =data_020c4828
    mov r0, r0, lsr #1
    str r0, [r1]
@L_01ffda14:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

asm void func_01ffda2c(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov r2, r0
    ldr r0, [r2, #0xbb8]
    cmp r0, #0
    bne @L_01ffda94
    ldr r3, =gAllocator
    ldr r1, =data_020af058
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffda84
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    add r2, r2, #0x3b8
    str r12, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0x800
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffda84:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {pc}
@L_01ffda94:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

asm void func_01ffdaa8(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r1, [r4, #0xc2c]
    cmp r1, #0
    bne @L_01ffdb10
    ldr r3, =gAllocator
    ldr r1, =data_020af074
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffdb00
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    add r2, r4, #0x2c
    str r12, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0xc00
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffdb00:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r3, r4, pc}
@L_01ffdb10:
    ldr r1, =0xc7ce0c7d
    umull r1, r2, r0, r1
    mov r2, r2, lsr #5
    str r2, [r4, #0xc28]
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, pc}
}

asm void func_01ffdb38(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov lr, r0
    ldr r0, [lr, #0xc30]
    cmp r0, #0
    bne @L_01ffdb9c
    ldr r3, =gAllocator
    ldr r1, =data_020af094
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffdb8c
    mov r2, #0
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, lr, #0xc30
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffdb8c:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {pc}
@L_01ffdb9c:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

asm void func_01ffdbb0(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov r2, r0
    ldr r0, [r2, #0xbe4]
    cmp r0, #0
    bne @L_01ffdc18
    ldr r3, =gAllocator
    ldr r1, =data_020af0b0
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffdc08
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    add r2, r2, #0x3e4
    str r12, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0x800
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffdc08:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {pc}
@L_01ffdc18:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

asm void func_01ffdc2c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    ldr r0, [r9, #0xbe4]
    mov r8, r1
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r7, =gAllocator
    mov r6, #0x300
    mov r5, #0
    mov r4, #1
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl _ZN8GameHeap5AllocEiii
    str r0, [r9, #0xbe4]
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    str r0, [r8]
    ldr r0, =data_020af0cc
    mov r1, r8
    mov r2, r5
    mov r3, r6
    str r5, [sp]
    bl func_ov015_02134040
    cmp r0, #0
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r9, #0xbe4]
    mov r0, r7
    bl _ZN8GameHeap4FreeEPv
    mov r0, r5
    str r5, [r9, #0xbe4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ffdcc4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xbe4]
    cmp r1, #0
    moveq r0, #1
    ldmeqia sp!, {r4, pc}
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r4, #0xbe4]
    mov r0, #1
    ldmia sp!, {r4, pc}
}

asm void func_01ffdcf8(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    mov r5, r0
    ldr r0, [r5, #0xbc4]
    mov r4, #0
    cmp r0, #0
    bne @L_01ffdd60
    ldr r3, =gAllocator
    ldr r1, =data_020af0e8
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, r4
    beq @L_01ffdd50
    str r4, [sp]
    str r4, [sp, #4]
    add r2, r5, #0x3c4
    str r4, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0x800
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffdd50:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r4, r5, pc}
@L_01ffdd60:
    ldr r0, [r5, #0xbc8]
    cmp r0, #0
    bne @L_01ffddb8
    ldr r3, =gAllocator
    ldr r1, =data_020af104
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffdda8
    str r4, [sp]
    str r4, [sp, #4]
    add r2, r5, #0x3c8
    str r4, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0x800
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffdda8:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r4, r5, pc}
@L_01ffddb8:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, pc}
}

asm void func_01ffddd0(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov lr, r0
    ldr r0, [lr, #0xbd0]
    cmp r0, #0
    bne @L_01ffde34
    ldr r3, =gAllocator
    ldr r1, =data_020af120
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffde24
    mov r2, #0
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, lr, #0xbd0
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffde24:
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {pc}
@L_01ffde34:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

asm void func_01ffde48(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r6, r1
    mov r7, r0
    ldrneh r0, [r6, #4]
    mov r5, r2
    cmpne r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r5, #0x84
    movhs r0, #0
    ldmhsia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =gEntryPool
    mov r1, r5
    bl _ZN9EntryPool6CreateEi
    mov r4, r0
    mov r0, r6
    add r1, r4, #0x60
    mov r2, #0x70
    bl MI_CpuCopy8
    ldrh r1, [r6, #4]
    mov r0, r7
    mov r2, r4
    bl _ZN11MatchEngine13func_0207a5c0EiPv
    mov r0, r5, lsl #0x18
    mov r0, r0, asr #0x18
    mov r3, #0
    strh r0, [r4, #0xf4]
    orr r1, r3, #0x21
    strh r1, [r4, #0xf0]
    mov r1, r4
    mov r4, #1
    mov r0, r7
    mov r2, r4
    str r3, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_01ffdee0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r8, =0xfff
    mov r6, r1
    ldr r9, [sp, #0x28]
    ldr r11, =data_020cadf4
    mov r7, r0
    tst r6, r8
    mov r5, r2
    mov r4, r3
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0x84
    movhs r0, #0
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    subs r10, r9, #1
    bmi @L_01ffdf3c
    add r0, r7, #0x34c
    mov r1, r10
    add r0, r0, r4, lsl #5
    bl func_02080328
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffdf3c:
    mov r0, r7
    mov r1, r4
    bl _ZN11MatchEngine13func_0207aa94Ei
    cmp r4, #0
    bne @L_01ffdf58
    cmp r0, #0x64
    bge @L_01ffdf68
@L_01ffdf58:
    cmp r4, #1
    bne @L_01ffdf70
    cmp r0, #0x10
    blt @L_01ffdf70
@L_01ffdf68:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffdf70:
    ldr r0, =gEntryPool
    mov r1, r5
    bl _ZN9EntryPool6CreateEi
    mov r8, r0
    mov r1, #0
    add r0, r8, #0x60
    mov r2, #0x70
    bl MI_CpuFill8
    mov r0, r7
    mov r1, r6
    mov r2, r8
    bl _ZN11MatchEngine13func_0207a5c0EiPv
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r1, [r8, #0xf0]
    ldrb r0, [sp, #0x34]
    ldrb r2, [sp, #0x2c]
    and r1, r1, #0
    strh r1, [r8, #0xf0]
    ldrh r1, [r8, #0xf0]
    cmp r0, #0
    orr r0, r1, #1
    strh r0, [r8, #0xf0]
    ldrneh r0, [r8, #0xf0]
    mov r1, r9
    orrne r0, r0, #0x20
    strneh r0, [r8, #0xf0]
    ldrb r0, [sp, #0x38]
    cmp r0, #0
    ldrneh r0, [r8, #0xf0]
    orrne r0, r0, #0x40
    strneh r0, [r8, #0xf0]
    mov r0, r5, lsl #0x18
    mov r0, r0, asr #0x18
    strh r0, [r8, #0xf4]
    mov r0, r8
    strb r2, [r8, #0xb8]
    bl func_02081390
    mov r0, r8
    mov r1, r9
    bl func_02081398
    mov r0, r8
    mov r1, r9
    bl func_020813a0
    strh r6, [r8, #0x64]
    ldrb r2, [r8, #0x41]
    mov r0, r8
    mov r1, r4
    strb r2, [r8, #0xab]
    ldrh r2, [r8, #0x50]
    strh r2, [r8, #0x6e]
    bl func_02080c64
    ldr r0, =gGameState
    ldrb r1, [r0, #0x1a]
    cmp r1, #0
    beq @L_01ffe060
    ldrb r0, [r0, #0x98]
    cmp r0, #0
    beq @L_01ffe074
@L_01ffe060:
    ldrh r1, [r8, #0x42]
    and r0, r4, #1
    bic r1, r1, #0x8000
    orr r0, r1, r0, lsl #15
    b @L_01ffe080
@L_01ffe074:
    ldrh r0, [r8, #0x42]
    bic r0, r0, #0xf000
    orr r0, r0, #0x8000
@L_01ffe080:
    strh r0, [r8, #0x42]
    ldrh r6, [r8, #0x42]
    mov r0, r7
    mov r1, r4
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r9, r0
    mov r0, r7
    mov r1, r6
    mov r2, #1
    bl _ZN11MatchEngine13func_02082d80Eii
    cmp r0, #0
    ldrneh r2, [r9, #0x32]
    ldreqh r2, [r9, #0x30]
    cmp r9, #0
    ldrneh r0, [r9, #0x30]
    cmpne r0, #0
    beq @L_01ffe0d8
    mov r3, #0
    mov r0, r7
    mov r1, r6
    str r3, [sp]
    bl _ZN11MatchEngine13func_0207793cEimmh
@L_01ffe0d8:
    ldr r2, [sp, #0x30]
    mov r0, r7
    mov r1, r8
    mov r3, #0
    bl _ZN11MatchEngine13func_0207e5a4EPhii
    cmp r10, #0
    blt @L_01ffe108
    add r0, r7, #0x34c
    mov r1, r10
    mov r2, r6
    add r0, r0, r4, lsl #5
    bl func_020802cc
@L_01ffe108:
    bl func_ov015_0213178c
    cmp r0, #0
    bne @L_01ffe144
    bl func_ov015_021319bc
    cmp r4, r0
    bne @L_01ffe144
    ldr r0, =0x449
    cmp r6, r0
    bne @L_01ffe138
    mov r0, r11
    mov r1, #0x1e
    bl func_020817f0
@L_01ffe138:
    mov r0, r11
    mov r1, r6
    bl func_020817f0
@L_01ffe144:
    mov r0, r7
    mov r1, r8
    bl _ZN11MatchEngine13func_0207ef0cEP11MatchPlayer
    mov r0, r7
    mov r1, r6
    bl _ZN11MatchEngine13func_0207a534Em
    cmp r0, #0
    blt @L_01ffe188
    ldr r2, [r7, #0xbdc]
    cmp r2, #0
    beq @L_01ffe188
    mov r1, #0x50
    mla r2, r0, r1, r2
    mov r1, r5, lsl #0x10
    mov r0, r7
    mov r1, r1, lsr #0x10
    bl _ZN11MatchEngine13func_0206f4acEiPa
@L_01ffe188:
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffe1a4(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    ldr r6, [sp, #0x28]
    ldr r4, [sp, #0x2c]
    ldrb r5, [r6, #2]
    ldrb lr, [sp, #0x30]
    ldrb r12, [sp, #0x34]
    str r5, [sp]
    ldrb r5, [r6, #3]
    str r5, [sp, #4]
    str r4, [sp, #8]
    str lr, [sp, #0xc]
    str r12, [sp, #0x10]
    bl func_01ffdee0
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void func_01ffe1e4(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    bne @L_01ffe1f8
    bl func_01ffe204
    ldmia sp!, {r3, pc}
@L_01ffe1f8:
    mov r1, #0
    bl func_01ffe3e4
    ldmia sp!, {r3, pc}
}

asm void func_01ffe204(void)
{
    stmdb sp!, {r4, lr}
    mov r1, #0
    mov r4, r0
    bl func_01ffe22c
    cmp r0, #0
    ldmgeia sp!, {r4, pc}
    mov r0, r4
    mov r1, #1
    bl func_01ffe354
    ldmia sp!, {r4, pc}
}

asm void func_01ffe22c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0
    mov r5, r1
    mov r1, r4
    bl _ZN11MatchEngine13func_0207aa94Ei
    cmp r0, #0x64
    blt @L_01ffe2b0
    mov r8, #1
    mov r7, r4
    mov r5, r4
    mov r6, r8
@L_01ffe258:
    mov r0, r4
    bl func_ov015_02130ae8
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrh r0, [r0, #0xf0]
    tst r0, #1
    movne r1, r8
    moveq r1, r7
    cmp r1, #0
    bne @L_01ffe29c
    tst r0, #2
    movne r0, r6
    moveq r0, r5
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ffe29c:
    add r4, r4, #1
    cmp r4, #0x10
    blt @L_01ffe258
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ffe2b0:
    mov r9, #1
    mov r8, r4
    mov r6, r4
    mov r7, r9
@L_01ffe2c0:
    mov r0, r4
    bl func_ov015_02130ae8
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrh r0, [r0, #0xf0]
    tst r0, #1
    movne r1, r9
    moveq r1, r8
    cmp r1, #0
    bne @L_01ffe304
    tst r0, #2
    movne r0, r7
    moveq r0, r6
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ffe304:
    add r4, r4, #1
    cmp r4, #0x10
    blt @L_01ffe2c0
    cmp r5, #0
    beq @L_01ffe34c
    mov r4, #0
@L_01ffe31c:
    mov r0, r4
    bl func_ov015_02130ae8
    ldrh r0, [r0, #0xf0]
    tst r0, #2
    movne r0, r7
    moveq r0, r6
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r4, r4, #1
    cmp r4, #0x10
    blt @L_01ffe31c
@L_01ffe34c:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ffe354(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    cmp r1, #0
    beq @L_01ffe378
    mov r4, #0
    mov r1, r4
    bl _ZN11MatchEngine13func_0207aa94Ei
    cmp r0, #0x64
    subge r0, r4, #1
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
@L_01ffe378:
    mov r6, #0
    mov r7, #1
    mov r8, #0x20
    mov r4, r6
    mov r5, r7
@L_01ffe38c:
    mov r0, r8
    bl func_ov015_02130ae8
    cmp r0, #0
    moveq r0, r8
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrh r0, [r0, #0xf0]
    tst r0, #1
    movne r1, r7
    moveq r1, r6
    cmp r1, #0
    bne @L_01ffe3d0
    tst r0, #2
    movne r0, r5
    moveq r0, r4
    cmp r0, #0
    moveq r0, r8
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_01ffe3d0:
    add r8, r8, #1
    cmp r8, #0x84
    blt @L_01ffe38c
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_01ffe3e4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, #1
    mov r4, r1
    mov r1, r5
    bl _ZN11MatchEngine13func_0207aa94Ei
    cmp r0, #0x10
    subge r0, r5, #2
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r8, r5
    mov r7, #0
    mov r9, #0x10
    mov r5, r7
    mov r6, r8
@L_01ffe418:
    mov r0, r9
    bl func_ov015_02130ae8
    cmp r0, #0
    moveq r0, r9
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrh r0, [r0, #0xf0]
    tst r0, #1
    movne r1, r8
    moveq r1, r7
    cmp r1, #0
    bne @L_01ffe45c
    tst r0, #2
    movne r0, r6
    moveq r0, r5
    cmp r0, #0
    moveq r0, r9
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_01ffe45c:
    add r9, r9, #1
    cmp r9, #0x20
    blt @L_01ffe418
    cmp r4, #0
    beq @L_01ffe4ac
    mov r6, #0x10
    mov r4, #0
    mov r5, #1
@L_01ffe47c:
    mov r0, r6
    bl func_ov015_02130ae8
    ldrh r0, [r0, #0xf0]
    tst r0, #2
    movne r0, r5
    moveq r0, r4
    cmp r0, #0
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r6, r6, #1
    cmp r6, #0x20
    blt @L_01ffe47c
@L_01ffe4ac:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ffe4b4(void)
{
    cmp r1, #0
    rsbeq r2, r2, #0
    mov r0, r2
    bx lr
}

asm void func_01ffe4c4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r7, r1
    ldr r1, [r7, #0xe8]
    ldr r6, [sp, #0x30]
    ldr r4, [r1, #4]
    ldr r1, [r1]
    mov r8, r0
    str r1, [sp]
    str r4, [sp, #4]
    str r2, [sp, #8]
    str r3, [sp, #0xc]
    mov r5, #0x15
    add r10, sp, #0
    mov r9, #0
@L_01ffe500:
    mov r0, r8
    mov r1, r5
    bl _ZN11MatchEngine13func_02079d2cEi
    movs r4, r0
    beq @L_01ffe574
    mov r0, r8
    mov r1, r4
    mov r2, r6
    mov r3, r7
    bl _ZN11MatchEngine13func_02079f98EP11MatchPlayeriS1_
    cmp r0, #0
    bne @L_01ffe574
    ldrsh r1, [r4, #0xf4]
    ldrsh r0, [r7, #0xf4]
    cmp r1, r0
    beq @L_01ffe574
    ldr r0, [r4, #0xec]
    ldrh r0, [r0, #0x1e]
    cmp r0, #0x1e
    bhi @L_01ffe574
    mov r0, r8
    mov r1, r10
    mov r2, r4
    mov r3, r9
    bl func_ov087_02179e8c
    cmp r0, #0
    addne sp, sp, #0x10
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ffe574:
    subs r5, r5, #1
    bpl @L_01ffe500
    mov r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_01ffe588(void)
{
    mov r0, r0, asr #3
    add r0, r0, #0x20000
    bx lr
}

asm void func_01ffe594(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r9, r1
    mov r8, r2
    ldr r2, [r9, #0xe8]
    ldr r6, [sp, #0x38]
    mov r10, r0
    ldr r0, [r2]
    mov r5, #0x96000
    tst r6, #0x10
    movne r5, #0x78000
    subs r1, r0, r8
    ldr r0, [r2, #4]
    mov r7, r3
    rsbmi r1, r1, #0
    subs r2, r0, r7
    rsbmi r2, r2, #0
    mov r4, #0
    tst r6, #0x800
    bne @L_01ffe618
    cmp r2, r5
    cmple r1, r5
    addgt sp, sp, #0x10
    movgt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl func_01fff184
    mov r11, r0
    cmp r11, r5
    ble @L_01ffe624
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffe618:
    mov r0, r10
    bl func_01fff184
    mov r11, r0
@L_01ffe624:
    and r0, r6, #0xf
    cmp r0, #0xf
    moveq r4, #1
    beq @L_01ffe6a8
    tst r6, #8
    beq @L_01ffe664
    mov r0, r9
    bl func_02080b90
    mov r3, r0
    mov r0, r10
    mov r1, r8
    mov r2, r7
    bl func_ov087_02179c3c
    cmp r0, #0
    movne r4, #1
    bne @L_01ffe6a8
@L_01ffe664:
    tst r6, #4
    beq @L_01ffe688
    mov r0, r10
    mov r1, r9
    mov r2, r7
    bl func_01ffed20
    cmp r0, #0
    moveq r4, #1
    beq @L_01ffe6a8
@L_01ffe688:
    tst r6, #1
    beq @L_01ffe6a8
    mov r0, r10
    mov r1, r9
    mov r2, r7
    bl func_01ffed20
    cmp r0, #0
    movne r4, #1
@L_01ffe6a8:
    cmp r4, #0
    mov r4, #1
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    tst r6, #0x100
    bne @L_01ffe710
    add r0, sp, #0xc
    str r0, [sp]
    str r4, [sp, #4]
    sub r4, r4, #2
    ldrsh r1, [r9, #0xf4]
    mov r0, r10
    mov r2, r8
    mov r3, r7
    str r4, [sp, #8]
    bl func_ov087_0217d034
    cmp r0, #0
    blt @L_01ffe710
    mov r0, r11
    bl func_01ffe588
    ldr r1, [sp, #0xc]
    cmp r1, r0
    addlt sp, sp, #0x10
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffe710:
    tst r6, #0x200
    bne @L_01ffe744
    mov r4, #0x10000
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r7
    str r4, [sp]
    bl func_01ffe4c4
    cmp r0, #0
    addne sp, sp, #0x10
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffe744:
    ldr r0, [sp, #0x3c]
    cmp r0, #0
    strne r11, [r0]
    mov r0, #1
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffe75c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    mov r4, #0
    mov r8, r2
    mov r7, r3
    mov r9, r1
    mov r2, r4
    mov r3, r4
    mov r10, r0
    ldr r6, [sp, #0x28]
    bl _ZN11MatchEngine13func_02067014EP11MatchPlayerii
    ldrsh r2, [r9, #0xf4]
    ldrsh r1, [r8, #0xf4]
    mov r5, r0
    cmp r2, r1
    addeq sp, sp, #8
    moveq r0, r4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_02078fa4EP11MatchPlayer
    cmp r0, #0
    beq @L_01ffe7c8
    tst r6, #0x400
    addne sp, sp, #8
    movne r0, r4
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ffe7c8:
    mov r0, r8
    bl func_02080b38
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    tst r6, #0x80
    beq @L_01ffe81c
    ldr r0, [r8, #0xe8]
    ldr r0, [r0, #4]
    cmp r5, r0
    beq @L_01ffe810
    mov r0, r10
    mov r1, r8
    mov r2, r5
    bl func_01ffed20
    cmp r0, #0
    bne @L_01ffe81c
@L_01ffe810:
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ffe81c:
    tst r6, #0x100000
    beq @L_01ffe874
    mov r0, r9
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206b4a8Ei
    cmp r0, #0
    ldr r1, [r9, #0xe8]
    ldr r0, [r8, #0xe8]
    ldr r1, [r1, #4]
    ldr r0, [r0, #4]
    bne @L_01ffe864
    cmp r1, r0
    bge @L_01ffe874
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ffe864:
    cmp r1, r0
    addgt sp, sp, #8
    movgt r0, #0
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_01ffe874:
    ldr r4, [sp, #0x2c]
    str r6, [sp]
    mov r0, r10
    mov r1, r9
    ldmia r7, {r2, r3}
    str r4, [sp, #4]
    bl func_01ffe594
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void func_01ffe898(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    mov r10, r0
    str r1, [sp, #0xc]
    mov r0, r1
    ldr r1, [sp, #0x6c]
    str r2, [sp, #0x10]
    str r3, [sp, #0x14]
    ldr r5, [sp, #0x68]
    str r1, [sp, #0x6c]
    mov r4, #0
    bl func_02083e34
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206de54Ei
    cmp r0, #0
    addeq sp, sp, #0x40
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0xc]
    ldrh r0, [r0, #0xf0]
    tst r0, #0x40
    movne r4, #1
    cmp r4, #0
    beq @L_01ffe914
    mov r0, r10
    bl _ZN11MatchEngine13func_0206c148Ev
    cmp r0, #0
    addeq sp, sp, #0x40
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffe914:
    ldr r0, [sp, #0xc]
    bl func_ov015_021319b0
    mov r1, r0
    ldr r0, [r10, #0xb80]
    ldr r2, [r0]
    ldr r2, [r2, #0x34]
    blx r2
    cmp r0, #0
    addeq sp, sp, #0x40
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #3
    cmpne r0, #5
    addeq sp, sp, #0x40
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, sp, #0x38
    bl func_020841d8
    ldr r0, [sp, #0x6c]
    cmp r0, #0
    beq @L_01ffe974
    bl func_020841d8
@L_01ffe974:
    tst r5, #0x400
    bne @L_01ffe9ac
    ldr r0, [sp, #0xc]
    bl func_020847b0
    cmp r0, #0
    addeq sp, sp, #0x40
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0xc]
    bl func_02080b38
    cmp r0, #0
    addne sp, sp, #0x40
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffe9ac:
    ldr r1, =data_020c4de0
    ldr r0, [sp, #0xc]
    ldr r2, [r1, #0xec]
    ldr r1, [r1, #0xf4]
    add r3, r2, r1
    sub r1, r1, r2
    mov r4, r3, asr #1
    sub r8, r1, #0x2000
    bl func_02083e34
    mov r9, #0
    mov r1, r0
    mov r0, r10
    mov r2, r9
    bl _ZN11MatchEngine13func_0206707cEii
    mov r6, r0
    ldr r1, [sp, #0xc]
    mov r0, r10
    bl func_ov015_02142824
    tst r5, #6
    movne r9, #1
    str r0, [sp, #0x18]
    cmp r9, #0
    bne @L_01ffea28
    ldr r0, [sp, #0x14]
    subs r1, r6, r0
    ldr r0, [sp, #0x18]
    rsbmi r1, r1, #0
    cmp r1, r0
    addgt sp, sp, #0x40
    movgt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_01ffea28:
    ldr r1, [sp, #0xc]
    mov r0, r10
    mov r2, r6
    bl func_01ffed20
    cmp r0, #0
    addeq sp, sp, #0x40
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0xc]
    bl func_02083e54
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206c064Ei
    str r0, [sp, #0x20]
    cmp r0, #0
    ldrne r0, [r0, #0xe8]
    str r4, [sp, #0x1c]
    ldrne r0, [r0]
    mov r7, #0
    strne r0, [sp, #0x1c]
    mov r0, r8, asr #1
    add r0, r8, r0, lsr #30
    mov r0, r0, asr #2
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x14]
    sub r0, r0, r6
    str r0, [sp, #0x28]
    rsb r0, r0, #0
    str r0, [sp, #0x2c]
    and r0, r5, #0x200
    str r0, [sp, #0x30]
    and r0, r5, #0x800
    str r0, [sp, #0x34]
    b @L_01ffec30
@L_01ffeab0:
    ldr r0, [sp, #0x24]
    sub r1, r7, #2
    mla r5, r0, r1, r4
    cmp r9, #0
    bne @L_01ffeae4
    ldr r1, [sp, #0xc]
    ldr r2, [sp, #0x10]
    ldr r3, [sp, #0x14]
    mov r0, r10
    stmia sp, {r5, r6, r9}
    bl _ZN11MatchEngine13func_02068248Ev
    cmp r0, #0
    beq @L_01ffec2c
@L_01ffeae4:
    ldr r0, [sp, #0x10]
    subs r1, r0, r5
    ldr r0, [sp, #0x28]
    rsbmi r1, r1, #0
    cmp r0, #0
    ldrlt r2, [sp, #0x2c]
    movge r2, r0
    cmp r9, #0
    bne @L_01ffeb1c
    mov r0, r10
    bl func_01fff184
    ldr r1, [sp, #0x18]
    cmp r0, r1
    bgt @L_01ffec2c
@L_01ffeb1c:
    cmp r9, #0
    ldreq r0, [sp, #0x30]
    cmpeq r0, #0
    bne @L_01ffeb50
    mov r0, #0x10000
    str r0, [sp]
    ldr r1, [sp, #0xc]
    mov r0, r10
    mov r2, r5
    mov r3, r6
    bl func_01ffe4c4
    cmp r0, #0
    bne @L_01ffec2c
@L_01ffeb50:
    ldr r0, [sp, #0x6c]
    cmp r0, #0
    addeq sp, sp, #0x40
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #0x20]
    mov r0, r10
    bl func_01ffec94
    cmp r0, #0
    beq @L_01ffeb8c
    ldr r0, [sp, #0x34]
    cmp r0, #0
    bne @L_01ffeb8c
    cmp r9, #0
    beq @L_01ffebbc
@L_01ffeb8c:
    ldr r0, [sp, #0x1c]
    subs r8, r5, r4
    rsbmi r8, r8, #0
    cmp r0, r4
    cmplt r5, r4
    blt @L_01ffebb4
    ldr r0, [sp, #0x1c]
    cmp r0, r4
    cmpgt r5, r4
    ble @L_01ffebd0
@L_01ffebb4:
    add r8, r8, #1
    b @L_01ffebd0
@L_01ffebbc:
    ldr r0, [sp, #0x20]
    ldr r0, [r0, #0xe8]
    ldr r0, [r0]
    subs r8, r5, r0
    rsbmi r8, r8, #0
@L_01ffebd0:
    add r0, sp, #0x38
    bl func_02084788
    cmp r0, #0
    ldr r1, [sp, #0x20]
    mov r0, r10
    strne r5, [sp, #0x38]
    strne r6, [sp, #0x3c]
    movne r11, r8
    bl func_01ffec94
    cmp r0, #0
    beq @L_01ffec08
    ldr r0, [sp, #0x34]
    cmp r0, #0
    beq @L_01ffec1c
@L_01ffec08:
    cmp r8, r11
    strlt r5, [sp, #0x38]
    movlt r11, r8
    strlt r6, [sp, #0x3c]
    b @L_01ffec2c
@L_01ffec1c:
    cmp r8, r11
    strgt r5, [sp, #0x38]
    movgt r11, r8
    strgt r6, [sp, #0x3c]
@L_01ffec2c:
    add r7, r7, #1
@L_01ffec30:
    cmp r7, #5
    blt @L_01ffeab0
    ldr r0, [sp, #0x6c]
    cmp r0, #0
    ldrne r1, [sp, #0x38]
    strne r1, [r0]
    ldrne r1, [sp, #0x3c]
    strne r1, [r0, #4]
    add r0, sp, #0x38
    bl func_02084788
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_01ffec70(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r12, =data_020c4920
    stmia sp, {r2, r3}
    ldmia r12, {r2, r3}
    bl func_01ffe898
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void func_01ffec94(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r4, r1
    mov r5, r0
    beq @L_01ffece4
    mov r0, r4
    bl func_02080b38
    cmp r0, #0
    bne @L_01ffece4
    ldrh r0, [r4, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_01ffece4
    mov r0, r5
    mov r1, r4
    bl _ZN11MatchEngine13func_0207903cEP11MatchPlayer
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
@L_01ffece4:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ffecec(void)
{
    cmp r1, r2
    moveq r0, #0
    bxeq lr
    mov r0, #1
    cmp r3, #0
    movne r0, #0
    cmp r1, r2
    movlt r1, #1
    movge r1, #0
    teq r0, r1
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void func_01ffed20(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r3, [r1, #0xe8]
    mov r6, r0
    ldrsh r0, [r1, #0xf4]
    ldr r4, [r3, #4]
    mov r5, r2
    bl func_ov015_02131948
    mov r3, r0
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_01ffecec
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_01ffed54(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0, #0xb80]
    ldr r2, [r0]
    ldr r2, [r2, #0x30]
    blx r2
    ldmia sp!, {r3, pc}
}

asm void func_01ffed6c(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    mov r2, r0
    ldr r0, [r2, #0xbd8]
    cmp r0, #0
    addne sp, sp, #0x14
    movne r0, #1
    ldmneia sp!, {pc}
    ldr r3, =gAllocator
    ldr r1, =data_020af140
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffedcc
    mov r12, #0
    str r12, [sp]
    str r12, [sp, #4]
    add r2, r2, #0x3d8
    str r12, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r2, #0x800
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffedcc:
    cmp r0, #0x1880
    movne r0, #0
    moveq r0, #1
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

asm void func_01ffede8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xbd8]
    cmp r1, #0
    moveq r0, #1
    ldmeqia sp!, {r4, pc}
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r4, #0xbd8]
    mov r0, #1
    ldmia sp!, {r4, pc}
}

asm void func_01ffee1c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    mov r5, r0
    add r0, r5, #0x3cc
    movs r4, r1
    str r0, [sp, #0x14]
    beq @L_01ffee40
    cmp r4, #0x38
    blo @L_01ffee44
@L_01ffee40:
    mov r4, #1
@L_01ffee44:
    add r0, r5, #0x11000
    ldrb r0, [r0, #0x894]
    cmp r0, r4
    addeq sp, sp, #0x18
    addeq r0, r5, #0x3cc
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r5, #0xbd8]
    cmp r1, #0
    movne r0, #0x188
    addne sp, sp, #0x18
    mlane r0, r4, r0, r1
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r3, =gAllocator
    ldr r1, =data_020af15c
    ldr r0, [r3]
    cmp r0, #0
    moveq r0, #0
    beq @L_01ffeeb8
    mov r2, #0x188
    mul r12, r4, r2
    str r12, [sp]
    str r2, [sp, #4]
    mov r2, #0
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x14
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_01ffeeb8:
    cmp r0, #0
    addeq r1, r5, #0x11000
    moveq r0, #0
    streqb r0, [r1, #0x894]
    addne r0, r5, #0x11000
    strneb r4, [r0, #0x894]
    addne r0, r5, #0x3cc
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01ffeee4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, r0
    ldr r0, [r6, #0xc2c]
    mov r5, r1
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r6, #0xc28]
    mov r4, #0
    cmp r0, #0
    bls @L_01ffef40
    mov r7, #0x29
@L_01ffef14:
    mul r8, r4, r7
    ldr r9, [r6, #0xc2c]
    add r0, r9, r8
    bl _ZN11MatchEngine13func_02074ac8EPh
    cmp r5, r0
    addeq r0, r9, r8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r6, #0xc28]
    add r4, r4, #1
    cmp r4, r0
    blo @L_01ffef14
@L_01ffef40:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01ffef48(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl _ZN11MatchEngine13func_020739ccEi
    mov r0, r6
    mov r1, r5
    bl _ZN11MatchEngine13func_020739ccEi
    mov r1, r0
    mov r0, r6
    mov r2, r4
    bl func_01ffef7c
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_01ffef7c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r3, [r0, #0xc2c]
    mov r4, r2
    cmp r3, #0
    mov r5, #1
    ldrb r1, [r1, #0x10]
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_01ffeee4
    movs r6, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r7, #0
@L_01ffefbc:
    add r1, r7, #2
    mov r0, r6
    and r1, r1, #0xff
    bl func_02074ad0
    cmp r0, #0xff
    beq @L_01ffefdc
    cmp r4, r0
    bhs @L_01ffefe8
@L_01ffefdc:
    add r0, r7, #1
    and r5, r0, #0xff
    b @L_01ffeffc
@L_01ffefe8:
    add r0, r7, #1
    mov r0, r0, lsl #0x10
    mov r7, r0, asr #0x10
    cmp r7, #0x13
    blt @L_01ffefbc
@L_01ffeffc:
    cmp r7, #0x13
    moveq r5, #0x14
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_01fff00c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, r2
    mov r9, #0
    mov r7, r0
    mov r0, r5, lsl #0x10
    mov r6, r1
    mov r4, r9
    mov r8, r0, lsr #0x10
@L_01fff02c:
    mov r0, r6
    mov r1, r4
    bl func_020808c4
    cmp r5, r0
    bne @L_01fff058
    add r0, r6, r4
    ldrb r2, [r0, #0xa4]
    mov r0, r7
    mov r1, r8
    bl func_01ffef48
    mov r9, r0
@L_01fff058:
    add r4, r4, #1
    cmp r4, #6
    blt @L_01fff02c
    mov r0, r9
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_01fff06c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    bl func_01ffef7c
    movs r4, r0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r1, [r5, #0x10]
    mov r0, r6
    bl func_01ffeee4
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, r4
    bl func_02074b00
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_01fff0ac(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r5, #0
    mov r4, #0xc
@L_01fff0c0:
    ldr r0, [r8, #0xc30]
    mov r1, r7
    mla r6, r5, r4, r0
    mov r0, r6
    bl STD_CompareString
    cmp r0, #0
    ldreqh r0, [r6, #8]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r5, r5, #1
    cmp r5, #0x200
    blt @L_01fff0c0
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_01fff0f4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r5, #0
    mov r4, #0xc
@L_01fff108:
    ldr r0, [r8, #0xc30]
    mov r1, r7
    mla r6, r5, r4, r0
    mov r0, r6
    bl STD_CompareString
    cmp r0, #0
    ldreqb r0, [r6, #0xa]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r5, r5, #1
    cmp r5, #0x200
    blt @L_01fff108
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_01fff13c(void)
{
    stmdb sp!, {r3, lr}
    ldr r12, [sp, #8]
    subs r2, r2, r12
    rsbmi r2, r2, #0
    subs r1, r1, r3
    rsbmi r1, r1, #0
    bl func_01fff184
    ldmia sp!, {r3, pc}
}

asm void func_01fff15c(void)
{
    add r0, r0, #0x11000
    ldr r0, [r0, #0x7bc]
    ldr r12, =_ZN15DistanceTable3215DistanceBetweenEP7VecFx32S1_
    bx r12
}

asm void func_01fff170(void)
{
    add r0, r0, #0x11000
    ldr r0, [r0, #0x7bc]
    ldr r12, =_ZN15DistanceTable3222DistanceBetweenPlayersEP11MatchPlayerS1_
    bx r12
}

asm void func_01fff184(void)
{
    add r0, r0, #0x11000
    ldr r0, [r0, #0x7bc]
    ldr r12, =_ZN15DistanceTable3214ApproxDistanceEll
    bx r12
}

asm void func_01fff198(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, [sp, #8]
    subs r1, r3, r1
    rsbmi r1, r1, #0
    subs r0, r0, r2
    rsbmi r0, r0, #0
    mov r1, r1, asr #1
    mov r12, r0, asr #1
    smull r0, r2, r1, r1
    adds r3, r0, #0x800
    smull r1, r0, r12, r12
    adc r2, r2, #0
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    orr r3, r3, r2, lsl #20
    mov r0, r1, asr #4
    add r0, r0, r3, asr #4
    bl FX_Sqrt
    mov r0, r0, lsl #3
    ldmia sp!, {r3, pc}
}

asm void func_01fff1f4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r6, r0
    bl _ZN11MatchEngine13func_02080288EP11MatchPlayer
    mov r4, r0
    mov r0, r5
    bl func_02080b38
    cmp r0, #0
    bne @L_01fff264
    mov r0, r5
    bl func_020847b0
    cmp r0, #0
    bne @L_01fff264
    ldrh r0, [r4, #0x18]
    add r0, r0, #1
    strh r0, [r4, #0x18]
    ldrh r1, [r4, #0x18]
    ldrsh r0, [r4, #0x1a]
    cmp r1, r0
    ble @L_01fff264
    ldrsh r1, [r5, #0x94]
    mov r0, r5
    add r1, r1, #1
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02080b00
    mov r0, #0
    strh r0, [r4, #0x18]
@L_01fff264:
    ldr r2, [r5, #0xe8]
    ldrb r0, [r2, #0x1c]
    cmp r0, #0
    beq @L_01fff288
    ldrh r1, [r2, #0x12]
    ldrh r0, [r2, #0x14]
    cmp r1, r0
    movlo r0, #1
    blo @L_01fff28c
@L_01fff288:
    mov r0, #0
@L_01fff28c:
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r5
    bl _ZN11MatchEngine13func_0207a394EP11MatchPlayer
    cmp r0, #0
    beq @L_01fff2d0
    ldr r1, [r5, #0xe8]
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, #2
    strb r0, [r1, #0x1c]
    mov r0, #0x1e
    strh r0, [r1, #0x12]
    mov r0, #0
    strh r0, [r1, #0x14]
    ldmia sp!, {r4, r5, r6, pc}
@L_01fff2d0:
    mov r0, r6
    mov r1, r5
    bl _ZN11MatchEngine13func_0207a350EP11MatchPlayer
    cmp r0, #0
    ldrne r1, [r5, #0xe8]
    cmpne r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, #8
    strb r0, [r1, #0x1c]
    mov r0, #0x1e
    strh r0, [r1, #0x12]
    mov r0, #0
    strh r0, [r1, #0x14]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_01fff308(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    bl _ZN11MatchEngine13func_020630d8Ev
    add r0, r7, #0x11000
    ldr r0, [r0, #0x7bc]
    bl _ZN15DistanceTable3213func_02062178Ev
    mov r6, #0
@L_01fff324:
    mov r0, r7
    mov r1, r6
    bl _ZN11MatchEngine13func_02079d2cEi
    movs r5, r0
    beq @L_01fff36c
    mov r0, r7
    mov r1, r5
    bl _ZN11MatchEngine13func_020787e8EP11MatchPlayer
    mov r4, r0
    mov r0, r5
    bl func_02084870
    cmp r0, #0
    ldrnesh r0, [r4]
    cmpne r0, #0xa
    beq @L_01fff36c
    mov r0, r7
    mov r1, r5
    bl _ZN11MatchEngine13func_02063038EP11MatchPlayer
@L_01fff36c:
    add r6, r6, #1
    cmp r6, #0x16
    blt @L_01fff324
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_01fff37c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r4, r1
    mov r5, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r4
    bl func_02080b38
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #0xec]
    ldrb r0, [r0, #0x2f]
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r1, r4
    bl _ZN11MatchEngine13func_020657a8EP11MatchPlayer
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_01fff3cc(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =data_020c4920
    ldr r0, [r2, #0x48]
    cmp r0, #0
    blt @L_01fff3f4
    bl func_ov015_02131854
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
@L_01fff3f4:
    ldr r0, [r2, #0x4c]
    cmp r0, #0
    blt @L_01fff414
    bl func_ov015_02131854
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
@L_01fff414:
    mov r0, #0
    ldmia sp!, {r3, pc}
}
