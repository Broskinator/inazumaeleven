#include "game/Unk_02081c3c.hpp"

extern "C" void func_02081c3c(void);
extern "C" int func_02081d20(u8 *data, int i, int a);
extern "C" int func_02081f28(u8 *data, int i);
extern "C" BOOL func_02081f50(u8 *data, int i);
extern "C" void func_02081f7c(void);
extern "C" void func_02082150(void);
extern "C" void func_020823a0(void);
extern "C" u16 func_02082604(void *arg0, u16 arg1);
extern "C" void func_02082664(void);
extern "C" int func_0208274c(void *data);
extern "C" void func_0208277c(void);
extern "C" void func_020828ec(void);
extern "C" void func_0208294c(void);
extern "C" void func_02082a10(void);
extern "C" void func_02082aa4(void);
extern "C" BOOL func_02082c8c(void *a, int b);
extern "C" int func_02082cb4(void *a, int b, BOOL c);
extern "C" int func_02082d10(void *data, int id);

extern "C" char data_020cb0a0[];
typedef struct {
    u8 unk_0[0x4A];
    u8 unk_4a;
    u8 unk_4b[0x70 - 0x4B];
} UnkEntry_020cb288;

extern "C" UnkEntry_020cb288 data_020cb288[];
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN11MatchEngine13func_0207a534Em(void);
extern "C" void _ZN11MatchEngine13func_0207a5c0EiPv(void);
extern "C" void _ZN11MatchEngine13func_0207a78cEv(void);
extern "C" void _ZN11MatchEngine13func_0207a820Ev(void);
extern "C" void _ZN11MatchEngine13func_0207a854EtPa(void);
extern "C" void _ZN11MatchEngine13func_0207d378EPhi(void);
extern "C" void _ZN11MatchEngine13func_0207dbf4EPhPi(void);
extern "C" void _ZN11MatchEngine13func_0207e334Eiiii(void);
extern "C" void _ZN11MatchEngine13func_0207e5a4EPhii(void);
extern "C" void _ZN9EntryPool4SwapEii(void);
extern "C" void _u32_div_f(void);
extern "C" void func_020802cc(void);
extern "C" void func_02080328(void);
extern "C" void func_02080730(void);
extern "C" void func_0208076c(void);
extern "C" void func_02080b90(void);
extern "C" void func_020812f4(void);
extern "C" void func_020812fc(void);
extern "C" void func_02081304(void);
extern "C" void func_02081390(void);
extern "C" void func_02081398(void);
extern "C" void func_020813a0(void);
extern "C" void Random_RandA(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02130b94(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void gEntryPool(void);
extern "C" void gGameState(void);

extern "C" asm void func_02081c3c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    add r5, sp, #8
    mov r0, r5
    mov r1, #0xff
    mov r2, #8
    ldr r6, =data_020cb0a0
    bl MI_CpuFill8
    mov r0, #6
    bl Random_RandA
    mov r7, #0
    str r0, [r6, #8]
    mov r4, r7
    add r9, sp, #0
    mov r8, r7
    b @L_02081cc0
@L_02081c7c:
    rsb r0, r7, #8
    bl Random_RandA
    mov r2, r4
    and r1, r0, #0xff
    b @L_02081ca8
@L_02081c90:
    ldrb r0, [r5, r2]
    cmp r0, #0xff
    addne r0, r1, #1
    andne r1, r0, #0xff
    add r0, r2, #1
    and r2, r0, #0xff
@L_02081ca8:
    cmp r2, r1
    bls @L_02081c90
    add r0, r7, #1
    strb r1, [r9, r7]
    strb r8, [r5, r1]
    and r7, r0, #0xff
@L_02081cc0:
    cmp r7, #8
    blo @L_02081c7c
    mov r0, #0
    add r2, sp, #0
    b @L_02081cec
@L_02081cd4:
    ldrb r1, [r2, r0]
    ldr r3, [r6, #8]
    add r0, r0, #1
    orr r1, r1, r3, lsl #3
    str r1, [r6, #8]
    and r0, r0, #0xff
@L_02081cec:
    cmp r0, #8
    blo @L_02081cd4
    ldr r1, [r6, #8]
    mov r0, #0x20
    mov r1, r1, lsl #5
    str r1, [r6, #8]
    bl Random_RandA
    ldr r1, [r6, #8]
    orr r0, r1, r0
    str r0, [r6, #8]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm int func_02081d20(u8 *data, int i, int a)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x58
    mov r9, r2
    cmp r9, #0x34
    mov r10, r1
    addhs sp, sp, #0x58
    movhs r0, #1
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r8, [r0, #8]
    cmp r10, #0x30
    mov r0, r8, lsr #0x1d
    mov r0, r0, lsl #0x18
    mov r7, r0, asr #0x18
    bge @L_02081dd4
    ldr r3, =0x2aaaaaab
    mov r2, #6
    smull r0, r1, r3, r10
    add r1, r1, r10, lsr #31
    smull r0, r1, r2, r1
    sub r1, r10, r0
    cmp r7, r1
    mov r2, r10, lsr #0x1f
    bne @L_02081dd4
    smull r1, r0, r3, r10
    add r0, r2, r0
    mov r2, #0
@L_02081d88:
    add r1, r2, r2, lsl #1
    add r1, r1, #5
    mov r1, r8, lsr r1
    and r1, r1, #7
    cmp r1, r0
    bne @L_02081dc0
    mov r0, #6
    mul r0, r2, r0
    add r0, r0, #5
    cmp r9, r0
    movge r0, #1
    add sp, sp, #0x58
    movlt r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02081dc0:
    add r1, r2, #1
    mov r1, r1, lsl #0x10
    mov r2, r1, asr #0x10
    cmp r2, #8
    blt @L_02081d88
@L_02081dd4:
    mov r5, #0
    ldr r1, =0x2aaaaaab
    mov r6, r5
    mov r11, r5
    add r3, sp, #0
    mov r0, #6
@L_02081dec:
    cmp r6, #8
    bge @L_02081e24
    smull r2, r4, r1, r5
    add r4, r4, r5, lsr #31
    smull r2, r4, r0, r4
    sub r4, r5, r2
    cmp r7, r4
    bne @L_02081e24
    add r2, r5, #1
    add r4, r6, #1
    mov r2, r2, lsl #0x10
    mov r4, r4, lsl #0x10
    mov r5, r2, asr #0x10
    mov r6, r4, asr #0x10
@L_02081e24:
    add r12, r11, #1
    add r2, r5, #1
    mov r4, r11, lsl #1
    mov r11, r12, lsl #0x10
    mov r11, r11, asr #0x10
    mov r2, r2, lsl #0x10
    strh r5, [r3, r4]
    cmp r11, #0x2c
    mov r5, r2, asr #0x10
    blt @L_02081dec
    mov r11, #0
    cmp r9, #0
    mov r7, #0x2c
    mov r6, r11
    ble @L_02081f18
    add r5, sp, #0
    mvn r4, #0
@L_02081e68:
    mov r0, r8
    mov r1, r7
    bl _u32_div_f
    mov r0, r1, lsl #0x10
    mov r1, r11
    movs r0, r0, asr #0x10
    bmi @L_02081eb4
    mvn r2, #0
@L_02081e88:
    mov r3, r1, lsl #1
    ldrsh r3, [r5, r3]
    add r1, r1, #1
    mov r1, r1, lsl #0x10
    cmp r3, r2
    addeq r0, r0, #1
    moveq r0, r0, lsl #0x10
    moveq r0, r0, asr #0x10
    cmp r0, r1, asr #16
    mov r1, r1, asr #0x10
    bge @L_02081e88
@L_02081eb4:
    mov r0, r0, lsl #1
    ldrsh r1, [r5, r0]
    cmp r10, r1
    addeq sp, sp, #0x58
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, r6, #1
    mov r1, r1, lsl #0x10
    mov r6, r1, asr #0x10
    ldr r12, =0x2aaaaaab
    add r1, r6, #1
    smull r3, r2, r12, r1
    sub r3, r7, #1
    mov r3, r3, lsl #0x10
    strh r4, [r5, r0]
    add r2, r2, r1, lsr #31
    mov r0, #6
    mov r7, r3, asr #0x10
    smull r2, r3, r0, r2
    sub r2, r1, r2
    cmp r2, #5
    moveq r0, r1, lsl #0x10
    moveq r6, r0, asr #0x10
    cmp r6, r9
    blt @L_02081e68
@L_02081f18:
    mov r0, #0
    add sp, sp, #0x58
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" int func_02081f28(u8 *data, int i)
{
    if (i < 0 || i > 51) {
        return 0;
    }
    return func_02081d20(data, i, data[1]);
}

extern "C" BOOL func_02081f50(u8 *data, int i)
{
    BOOL result;

    if (i < 0 || i > 7) {
        return FALSE;
    }
    result = TRUE;
    if (!(data[2] & (result << i))) {
        result = FALSE;
    }
    return result;
}

extern "C" asm void func_02081f7c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xfc
    mov r5, r1
    mov r8, #0
    mov r10, r0
    mov r0, r5
    mov r1, r8
    mov r9, r2
    bl func_ov015_02130b14
    movs r6, r0
    addeq sp, sp, #0xfc
    moveq r0, r8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r5
    mov r2, r8
    bl func_02082cb4
    movs r4, r0
    addeq sp, sp, #0xfc
    moveq r0, r8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r5
    bl func_02082d10
    movs r7, r0
    addmi sp, sp, #0xfc
    movmi r0, r8
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_020cb288
    mov r0, #0x70
    mla r0, r7, r0, r1
    ldrh r0, [r0, #4]
    cmp r0, #0
    beq @L_0208201c
    mov r0, r6
    bl func_02080b90
    cmp r0, #0
    addne sp, sp, #0xfc
    movne r0, r8
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0208201c:
    ldr r0, =0xfff
    ldrh r8, [r4]
    and r0, r5, r0
    add r5, sp, #0x60
    cmp r8, r0
    ldreqh r8, [r4, #2]
    mov r4, #0
    mov r0, r5
    mov r1, r4
    mov r2, #0x70
    bl MI_CpuFill8
    add r11, sp, #0
    mov r0, r10
    mov r1, r8
    mov r2, r11
    bl _ZN11MatchEngine13func_0207a5c0EiPv
    cmp r0, #0
    addeq sp, sp, #0xfc
    moveq r0, r4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r1, [r6, #0xb8]
    mov r0, r6
    strb r1, [sp, #0xb8]
    bl func_020812f4
    mov r1, r0
    mov r0, r11
    bl func_02081390
    mov r0, r6
    bl func_020812fc
    mov r1, r0
    mov r0, r11
    bl func_02081398
    mov r0, r6
    bl func_02081304
    mov r1, r0
    mov r0, r11
    bl func_020813a0
    mov r1, r11
    mov r2, r9
    mov r3, r4
    strh r8, [r5, #4]
    ldrb r6, [sp, #0x41]
    ldrh r4, [sp, #0x50]
    mov r0, r10
    strb r6, [r5, #0x4b]
    strh r4, [r5, #0xe]
    bl _ZN11MatchEngine13func_0207e5a4EPhii
    mov r1, r8
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a534Em
    cmp r0, #0
    blt @L_02082128
    ldr r2, [r10, #0xbdc]
    cmp r2, #0
    beq @L_02082128
    mov r1, #0x50
    mla r1, r0, r1, r2
    mov r0, #1
    strb r0, [r5, #0x60]
    ldrsb r0, [r1, #0x3e]
    strb r0, [r5, #0x61]
    ldrsb r0, [r1, #0x40]
    strb r0, [r5, #0x62]
    ldrsb r0, [r1, #0x42]
    strb r0, [r5, #0x63]
    ldrsb r0, [r1, #0x44]
    strb r0, [r5, #0x64]
@L_02082128:
    ldr r0, =data_020cb288
    mov r2, #0x70
    mla r1, r7, r2, r0
    add r0, sp, #0x60
    bl MI_CpuCopy8
    mov r0, #1
    add sp, sp, #0xfc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02082150(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x160
    mov r8, #0
    add r3, sp, #4
    mov r5, r2
    mov r2, r8
    mov r10, r0
    mov r6, r1
    str r8, [r3]
    str r8, [r3, #4]
    str r8, [r3, #8]
    str r8, [r3, #0xc]
    bl func_02082cb4
    movs r7, r0
    addeq sp, sp, #0x160
    moveq r0, r8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r6
    bl func_02082d10
    str r0, [sp]
    cmp r0, #0
    addlt sp, sp, #0x160
    movlt r0, r8
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r0, [r7]
    cmp r6, r0
    bne @L_020821d4
    mov r1, r8
    bl func_ov015_02130b14
    mov r4, r0
    ldrh r6, [r7, #2]
    b @L_020821e8
@L_020821d4:
    ldrh r0, [r7, #2]
    mov r1, r8
    bl func_ov015_02130b14
    ldrh r6, [r7]
    mov r4, r0
@L_020821e8:
    cmp r6, #0
    addeq sp, sp, #0x160
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_020cb288
    ldr r1, [sp]
    mov r2, #0x70
    mla r0, r1, r2, r0
    add r1, sp, #0xc4
    bl MI_CpuCopy8
    cmp r4, #0
    ldrnesh r1, [r4, #0xf4]
    addne r0, sp, #0x104
    add r4, sp, #0x64
    strneh r1, [r0, #0x54]
    mov r0, r10
    mov r1, r6
    mov r2, r4
    bl _ZN11MatchEngine13func_0207a5c0EiPv
    cmp r0, #0
    addeq sp, sp, #0x160
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r7, sp, #0xc4
    ldr r1, [r7]
    mov r9, #1
    add r5, r5, r1
    mov r0, r10
    mov r1, r4
    mov r2, r9
    str r5, [r7]
    ldrb r6, [r7, #0x4a]
    bl _ZN11MatchEngine13func_0207d378EPhi
    cmp r5, r0
    bhs @L_02082288
    mov r0, r10
    mov r1, r4
    mov r2, r9
    bl _ZN11MatchEngine13func_0207d378EPhi
    str r0, [r7]
@L_02082288:
    add r5, sp, #0x64
    mov r4, #1
    add r11, sp, #4
    b @L_02082360
@L_02082298:
    ldr r9, [r7]
    mov r0, r10
    mov r1, r5
    add r2, r6, #1
    bl _ZN11MatchEngine13func_0207d378EPhi
    cmp r9, r0
    blo @L_02082368
    ldr r0, [r10, #0xbdc]
    cmp r0, #0
    bne @L_020822cc
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a78cEv
    mov r8, r4
@L_020822cc:
    add r1, r6, #1
    strb r1, [r7, #0x4a]
    mov r0, r10
    mov r1, r5
    mov r2, r11
    bl _ZN11MatchEngine13func_0207dbf4EPhPi
    ldrh r1, [sp, #0xa6]
    mov r0, r10
    add r2, sp, #0x14
    bl _ZN11MatchEngine13func_0207a854EtPa
    cmp r0, #0
    beq @L_0208235c
    ldrsb r3, [r7, #0x61]
    ldrsb r0, [sp, #0x53]
    ldrsb r1, [r7, #0x62]
    ldrsb r2, [r7, #0x63]
    add r0, r3, r0
    ldrsb r3, [sp, #0x55]
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    add r1, r1, r3
    ldrsb r3, [sp, #0x57]
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    add r2, r2, r3
    mov r2, r2, lsl #0x18
    cmp r0, #0x64
    movge r0, #0x64
    cmp r1, #0x64
    movge r1, #0x64
    mov r2, r2, asr #0x18
    cmp r2, #0x64
    movge r2, #0x64
    strb r0, [r7, #0x61]
    strb r1, [r7, #0x62]
    strb r2, [r7, #0x63]
@L_0208235c:
    add r6, r6, #1
@L_02082360:
    cmp r6, #0x63
    blt @L_02082298
@L_02082368:
    cmp r8, #0
    beq @L_02082378
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a820Ev
@L_02082378:
    ldr r1, =data_020cb288
    ldr r0, [sp]
    mov r2, #0x70
    mla r1, r0, r2, r1
    add r0, sp, #0xc4
    bl MI_CpuCopy8
    mov r0, #1
    add sp, sp, #0x160
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020823a0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x74
    mov r4, #0
    mov r8, #1
    mov r9, r1
    sub r2, r4, #0x1000
    and r3, r9, r2
    mov r2, r8
    mov r10, r0
    mov r6, r3, lsl #0x10
    bl func_02082cb4
    movs r7, r0
    addeq sp, sp, #0x74
    moveq r0, r4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r9
    bl func_02082d10
    movs r5, r0
    addmi sp, sp, #0x74
    movmi r0, r4
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r1, [r7]
    rsb r0, r8, #0x1000
    and r0, r9, r0
    cmp r1, r0
    ldreqh r0, [r7, #2]
    orreq r0, r0, r6, lsr #16
    orrne r0, r1, r6, lsr #16
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    mov r0, r8
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    addne sp, sp, #0x74
    movne r0, r4
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    mov r1, r4
    bl func_ov015_02130b14
    movs r6, r0
    addeq sp, sp, #0x74
    moveq r0, r4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r7, #0x70
    add r1, sp, #4
    mov r2, r7
    add r0, r6, #0x60
    bl MI_CpuCopy8
    mov r0, r10
    mov r1, r8
    mov r2, r6
    bl _ZN11MatchEngine13func_0207a5c0EiPv
    cmp r0, #0
    addeq sp, sp, #0x74
    moveq r0, r4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_020cb288
    mov r0, r10
    mla r7, r5, r7, r1
    mov r1, r7
    add r2, r6, #0x60
    mov r11, #0
    bl func_02082664
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    bne @L_020824d0
    mov r0, r6
    bl func_02080b90
    ldrh r1, [r6, #0x42]
    and r0, r0, #1
    bic r1, r1, #0x8000
    orr r0, r1, r0, lsl #15
    strh r0, [r6, #0x42]
@L_020824d0:
    mov r5, #0
    mov r4, #2
    mov r0, r10
    mov r1, r6
    mov r3, r5
    mov r2, #1
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    add r4, r10, #0x3ac
    b @L_02082540
@L_020824f8:
    mov r0, r6
    bl func_02080b90
    mov r1, r5
    add r0, r4, r0, lsl #4
    bl func_0208076c
    cmp r9, r0
    bne @L_02082534
    ldrh r8, [r7, #4]
    mov r0, r6
    bl func_02080b90
    mov r1, r5
    mov r2, r8
    mov r3, r11
    add r0, r4, r0, lsl #4
    bl func_02080730
@L_02082534:
    add r0, r5, #1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
@L_02082540:
    cmp r5, #4
    blt @L_020824f8
    mov r5, #0
    add r4, r10, #0x34c
    b @L_02082598
@L_02082554:
    mov r0, r6
    bl func_02080b90
    mov r1, r5
    add r0, r4, r0, lsl #5
    bl func_02080328
    cmp r9, r0
    bne @L_0208258c
    ldrh r8, [r7, #4]
    mov r0, r6
    bl func_02080b90
    mov r1, r5
    mov r2, r8
    add r0, r4, r0, lsl #5
    bl func_020802cc
@L_0208258c:
    add r0, r5, #1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
@L_02082598:
    cmp r5, #0x10
    blt @L_02082554
    mov r5, #0
    b @L_020825d8
@L_020825a8:
    mov r1, r5
    add r0, r10, #0x38c
    bl func_02080328
    cmp r9, r0
    bne @L_020825cc
    ldrh r2, [r7, #4]
    mov r1, r5
    add r0, r10, #0x38c
    bl func_020802cc
@L_020825cc:
    add r0, r5, #1
    mov r0, r0, lsl #0x10
    mov r5, r0, asr #0x10
@L_020825d8:
    cmp r5, #0x10
    blt @L_020825a8
    add r0, sp, #4
    mov r1, r7
    mov r2, #0x70
    bl MI_CpuCopy8
    mov r0, #1
    add sp, sp, #0x74
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" u16 func_02082604(void *arg0, u16 arg1)
{
    u16 hi = arg1 & ~0xFFF;
    u16 *p = (u16 *)func_02082cb4(arg0, arg1, 1);
    if (p == 0)
        return 0xFFFF;
    if (p[0] == (arg1 & 0xFFF))
        return p[1] | hi;
    return p[0] | hi;
}

extern "C" asm void func_02082664(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r1]
    mov r0, #0
    str r3, [r2]
    ldrh r3, [r1, #4]
    strh r3, [r2, #4]
    ldrsh r3, [r1, #0x18]
    strh r3, [r2, #0x18]
    ldrsh r3, [r1, #0x1a]
    strh r3, [r2, #0x1a]
@L_0208268c:
    add r3, r1, r0, lsl #1
    ldrh r4, [r3, #0x38]
    mov r12, r0, lsl #1
    add r3, r2, r0, lsl #1
    strh r4, [r3, #0x38]
    add lr, r1, r12, lsl #1
    ldrh r3, [lr, #0x1c]
    add r4, r2, r12, lsl #1
    add r12, r1, r0
    strh r3, [r4, #0x1c]
    ldrh lr, [lr, #0x1e]
    add r3, r2, r0
    add r0, r0, #1
    strh lr, [r4, #0x1e]
    ldrb r12, [r12, #0x44]
    cmp r0, #4
    strb r12, [r3, #0x44]
    blt @L_0208268c
    ldrb r0, [r1, #0x4a]
    strb r0, [r2, #0x4a]
    ldrsb r0, [r1, #0x4f]
    strb r0, [r2, #0x4f]
    ldrsb r0, [r1, #0x50]
    strb r0, [r2, #0x50]
    ldrsb r0, [r1, #0x51]
    strb r0, [r2, #0x51]
    ldrsb r0, [r1, #0x52]
    strb r0, [r2, #0x52]
    ldrsb r0, [r1, #0x53]
    strb r0, [r2, #0x53]
    ldrsb r0, [r1, #0x54]
    strb r0, [r2, #0x54]
    ldrsb r0, [r1, #0x55]
    strb r0, [r2, #0x55]
    ldrb r0, [r1, #0x60]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    strb r0, [r2, #0x60]
    ldrsb r0, [r1, #0x61]
    strb r0, [r2, #0x61]
    ldrsb r0, [r1, #0x62]
    strb r0, [r2, #0x62]
    ldrsb r0, [r1, #0x63]
    strb r0, [r2, #0x63]
    ldrsb r0, [r1, #0x64]
    strb r0, [r2, #0x64]
    ldmia sp!, {r4, pc}
}

extern "C" int func_0208274c(void *data)
{
    int i = func_02082d10(data, 0x919);
    UnkEntry_020cb288 *entry;

    if (i < 0) {
        return -1;
    }
    entry = &data_020cb288[i];
    return entry->unk_4a;
}

extern "C" asm void func_0208277c(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x5c
    ldr r6, =0x919
    mov r7, r0
    mov r0, r6
    mov r4, #0
    bl func_ov015_02130b94
    movs r5, r0
    addeq sp, sp, #0x5c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    add r2, sp, #0xc
    mov r0, r7
    add r1, r6, #9
    bl _ZN11MatchEngine13func_0207a854EtPa
    add r6, sp, #0
    mov r12, r4
    str r12, [r6]
    str r12, [r6, #4]
    str r12, [r6, #8]
    add r1, sp, #0x38
    b @L_0208280c
@L_020827d0:
    mov r2, r12, lsl #2
    mov lr, r4
    ldrh r0, [r1, r2]
    b @L_02082800
@L_020827e0:
    add r3, r5, lr, lsl #1
    ldrh r3, [r3, #0x98]
    cmp r0, r3
    addeq r0, r5, lr
    ldreqb r0, [r0, #0xa4]
    streq r0, [r6, r2]
    beq @L_02082808
    add lr, lr, #1
@L_02082800:
    cmp lr, #2
    ble @L_020827e0
@L_02082808:
    add r12, r12, #1
@L_0208280c:
    cmp r12, #2
    ble @L_020827d0
    ldrh r1, [r5, #0x42]
    mov r6, #0
    mov r0, r7
    mov r2, r6
    bl func_020823a0
    add r2, sp, #0x38
    add r0, sp, #0
    b @L_02082870
@L_02082834:
    mov r3, r6, lsl #2
    mov lr, r4
    ldrh r1, [r2, r3]
    b @L_02082864
@L_02082844:
    add r12, r5, lr, lsl #1
    ldrh r12, [r12, #0x98]
    cmp r1, r12
    addeq r1, r5, lr
    ldreqb r1, [r1, #0xa4]
    streq r1, [r0, r3]
    beq @L_0208286c
    add lr, lr, #1
@L_02082864:
    cmp lr, #2
    ble @L_02082844
@L_0208286c:
    add r6, r6, #1
@L_02082870:
    cmp r6, #2
    ble @L_02082834
    ldrh r1, [r5, #0x42]
    mov r4, #0
    mov r0, r7
    mov r2, r4
    bl func_020823a0
    cmp r0, #0
    addeq sp, sp, #0x5c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r1, =0x919
    mov r0, r7
    bl func_02082d10
    cmp r0, #0
    addlt sp, sp, #0x5c
    ldmltia sp!, {r4, r5, r6, r7, pc}
    ldr r2, =data_020cb288
    mov r1, #0x70
    mla r3, r0, r1, r2
    add r2, sp, #0
    b @L_020828d4
@L_020828c4:
    ldr r1, [r2, r4, lsl #2]
    add r0, r3, r4
    strb r1, [r0, #0x44]
    add r4, r4, #1
@L_020828d4:
    cmp r4, #2
    ble @L_020828c4
    add sp, sp, #0x5c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_020828ec(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldr r1, =0x919
    mov r5, r0
    bl func_02082d10
    cmp r0, #0
    ldmltia sp!, {r3, r4, r5, pc}
    mov r1, #0x70
    mul r1, r0, r1
    ldr r2, =data_020cb288
    mov r0, r5
    add r1, r2, r1
    add r2, r4, #0x60
    bl func_0208294c
    mov r12, #2
    mov r0, r5
    mov r1, r4
    mov r2, #1
    mov r3, #0
    str r12, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0208294c(void)
{
    stmdb sp!, {r4, lr}
    ldrsh r0, [r1, #0x18]
    mov r12, #0
    strh r0, [r2, #0x18]
    ldrsh r0, [r1, #0x1a]
    strh r0, [r2, #0x1a]
@L_02082964:
    add r0, r1, r12
    ldrb r3, [r0, #0x44]
    add r0, r2, r12
    add r12, r12, #1
    strb r3, [r0, #0x44]
    cmp r12, #2
    ble @L_02082964
    mov r4, #4
@L_02082984:
    add r0, r1, r4, lsl #1
    ldrh r3, [r0, #0x38]
    mov lr, r4, lsl #1
    add r0, r2, r4, lsl #1
    strh r3, [r0, #0x38]
    add r0, r1, r4
    ldrb r3, [r0, #0x44]
    add r0, r2, r4
    add r12, r1, lr, lsl #1
    strb r3, [r0, #0x44]
    ldrh r0, [r12, #0x1c]
    add r3, r2, lr, lsl #1
    add r4, r4, #1
    strh r0, [r3, #0x1c]
    ldrh r0, [r12, #0x1e]
    cmp r4, #5
    strh r0, [r3, #0x1e]
    ble @L_02082984
    ldrsb r0, [r1, #0x4f]
    strb r0, [r2, #0x4f]
    ldrsb r0, [r1, #0x50]
    strb r0, [r2, #0x50]
    ldrsb r0, [r1, #0x51]
    strb r0, [r2, #0x51]
    ldrsb r0, [r1, #0x52]
    strb r0, [r2, #0x52]
    ldrsb r0, [r1, #0x53]
    strb r0, [r2, #0x53]
    ldrsb r0, [r1, #0x54]
    strb r0, [r2, #0x54]
    ldrsb r0, [r1, #0x55]
    strb r0, [r2, #0x55]
    ldrb r0, [r1, #0x5e]
    strb r0, [r2, #0x5e]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02082a10(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r1
    mov r5, #0
    mov r8, r0
    mov r0, r7
    mov r1, r5
    bl func_ov015_02130b14
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrsh r6, [r0, #0xf4]
    bl func_02080b90
    mov r4, r0
    bl func_ov015_021319bc
    cmp r4, r0
    movne r0, r5
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r8
    mov r1, r7
    bl func_02082aa4
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =gGameState
    ldrb r1, [r0, #0x1a]
    cmp r1, #0
    beq @L_02082a98
    cmp r6, #0
    blt @L_02082a98
    cmp r6, #0x20
    ldrlt r2, [r0, #0x78]
    movlt r1, #1
    orrlt r1, r2, r1, lsl r6
    strlt r1, [r0, #0x78]
@L_02082a98:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02082aa4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r2, #1
    mov r6, r0
    mov r5, r1
    bl func_02082cb4
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r7, #0
    mov r0, r5
    mov r1, r7
    bl func_ov015_02130b14
    movs r8, r0
    moveq r0, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_02080b90
    ldrsh r11, [r8, #0xf4]
    mov r4, r0
    add r0, r11, #0x20
    bl func_ov015_02130ae8
    movs r10, r0
    moveq r0, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r9, [r10, #0x42]
    ldrh r1, [r8, #0xf0]
    mov r0, #2
    strh r1, [r10, #0xf0]
    ldrh r1, [r8, #0xf0]
    and r1, r1, #1
    strh r1, [r8, #0xf0]
    strb r4, [r10, #0xb6]
    strb r0, [r8, #0xb6]
    ldrb r0, [r8, #0xf2]
    strb r0, [r10, #0xf2]
    ldrh r0, [r8, #0x66]
    strh r0, [r10, #0x66]
    ldrh r0, [r8, #0x68]
    strh r0, [r10, #0x68]
    ldrh r0, [r8, #0x6a]
    strh r0, [r10, #0x6a]
    ldrh r0, [r8, #0x6c]
    strh r0, [r10, #0x6c]
    ldrh r0, [r8, #0x6e]
    strh r0, [r10, #0x6e]
@L_02082b54:
    add r0, r8, r7, lsl #1
    ldrh r1, [r0, #0x70]
    add r0, r10, r7, lsl #1
    add r7, r7, #1
    strh r1, [r0, #0x70]
    cmp r7, #4
    blt @L_02082b54
    ldrsh r0, [r8, #0x94]
    mov r7, #0
    strh r0, [r10, #0x94]
    ldrsh r0, [r8, #0x96]
    strh r0, [r10, #0x96]
    ldrb r0, [r8, #0xb7]
    strb r0, [r10, #0xb7]
    ldrb r0, [r8, #0xbd]
    strb r0, [r10, #0xbd]
    ldrb r0, [r8, #0xc5]
    strb r0, [r10, #0xc5]
    ldrb r0, [r8, #0xb8]
    strb r0, [r10, #0xb8]
    ldrh r0, [r8, #0xba]
    strh r0, [r10, #0xba]
    ldr r1, [r10, #0xe8]
    cmp r1, #0
    ldrne r0, [r8, #0xe8]
    cmpne r0, #0
    beq @L_02082bc8
    mov r2, #0x20
    bl MI_CpuCopy8
@L_02082bc8:
    ldr r1, [r10, #0xec]
    cmp r1, #0
    ldrne r0, [r8, #0xec]
    cmpne r0, #0
    beq @L_02082be4
    mov r2, #0x90
    bl MI_CpuCopy8
@L_02082be4:
    add r0, r6, #0x3ac
    add r10, r0, r4, lsl #4
    mov r8, #0
@L_02082bf0:
    mov r0, r10
    mov r1, r8
    bl func_0208076c
    cmp r5, r0
    bne @L_02082c18
    mov r0, r10
    mov r1, r8
    mov r2, r9
    mov r3, r7
    bl func_02080730
@L_02082c18:
    add r0, r8, #1
    mov r0, r0, lsl #0x10
    mov r8, r0, asr #0x10
    cmp r8, #4
    blt @L_02082bf0
    add r0, r6, #0x34c
    add r4, r0, r4, lsl #5
    mov r6, #0
@L_02082c38:
    mov r0, r4
    mov r1, r6
    bl func_02080328
    cmp r5, r0
    bne @L_02082c5c
    mov r0, r4
    mov r1, r6
    mov r2, r9
    bl func_020802cc
@L_02082c5c:
    add r0, r6, #1
    mov r0, r0, lsl #0x10
    mov r6, r0, asr #0x10
    cmp r6, #0x10
    blt @L_02082c38
    ldr r0, =gEntryPool
    mov r1, r11
    add r2, r11, #0x20
    bl _ZN9EntryPool4SwapEii
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" BOOL func_02082c8c(void *a, int b)
{
    BOOL found = TRUE;

    if (!func_02082cb4(a, b, TRUE)) {
        found = FALSE;
    }
    return found ? TRUE : FALSE;
}

extern "C" asm int func_02082cb4(void *a, int b, BOOL c)
{
    cmp r1, #0
    ldr r2, [r0, #0xbe0]
    moveq r0, #0
    bxeq lr
    ldr r12, [r0, #0xc24]
    ldr r0, =0xfff
    cmp r12, #0
    and r1, r1, r0
    mov r3, #0
    ble @L_02082d04
@L_02082cdc:
    ldrh r0, [r2]
    cmp r0, r1
    ldrneh r0, [r2, #2]
    cmpne r0, r1
    moveq r0, r2
    bxeq lr
    add r3, r3, #1
    cmp r3, r12
    add r2, r2, #4
    blt @L_02082cdc
@L_02082d04:
    mov r0, #0
    bx lr
}

extern "C" asm int func_02082d10(void *data, int id)
{
    ldr r12, [r0, #0xc24]
    ldr r2, =0xfff
    cmp r12, #0
    and r1, r1, r2
    ldr r3, [r0, #0xbe0]
    mov r0, #0
    ble @L_02082d50
@L_02082d2c:
    ldrh r2, [r3]
    cmp r2, r1
    ldrneh r2, [r3, #2]
    cmpne r2, r1
    bxeq lr
    add r0, r0, #1
    cmp r0, r12
    add r3, r3, #4
    blt @L_02082d2c
@L_02082d50:
    mvn r0, #0
    bx lr
}
