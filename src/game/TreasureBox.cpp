#include "game/TreasureBox.hpp"
#include "system/GameHeap.hpp"
#include "file/FileManager.hpp"
#include "nitro/mi.h"

extern "C" void _ZN17UnkClass_020621b413func_0207a5c0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0207620cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020765d4Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020767a4Em(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020767ccEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020768a8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020768fcEm(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_020739ccEi(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206dedcEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206aa30Ei(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206ace8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_020621b413func_0206bffcEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060a48Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060a98Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060b58Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060b70Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060c80Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060d14Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060e80Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060efcEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02060f54Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02061210Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02061258Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_02061274Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0206029413func_020612b8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0205480013func_02054cd0Ev(void);
extern "C" void _ZN17UnkClass_0205480013func_02054d4cEv(void);
extern "C" void _ZN17UnkClass_0205480013func_02054db4Ev(void);
extern "C" void _ZN17UnkClass_0205480013func_0205d02cEv(void);
extern "C" void _ZN17UnkClass_0205480013func_0205d204Ev(void);
extern "C" void _ZN17UnkClass_0205480013func_0205d2acEv(void);
extern "C" void _ZN17UnkClass_0205480013func_0205d3f4Ev(void);
extern "C" void _ZN17UnkClass_0205480013func_0205d618Ev(void);
extern "C" void _ZN17UnkClass_0205480013func_0205d7e0Ev(void);
extern "C" void _ZN17UnkClass_0205480013func_0205dac4Ev(void);
extern "C" void _ZN17UnkClass_0205480013func_0205dafcEv(void);
extern "C" char data_020a6fb8[];
extern "C" char data_020c48a0[];
extern "C" char data_020c4f60[];
extern "C" char data_020d3d20[];
extern "C" void _ZN11MoviePlayer4StopEv(void);
extern "C" void _ZN12SceneManager13func_0203e2fcEl(void);
extern "C" void _ZN12SceneManager13func_0203e30cEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203df08Ev(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203df24Ev(void);
extern "C" void func_02017cdc(void);
extern "C" void func_0202273c(void);
extern "C" void func_0209ac40(void);
extern "C" void func_ov000_020fdde4(void);
extern "C" void func_ov015_0213257c(void);
extern "C" void func_ov015_02132628(void);
extern "C" void func_ov015_02132794(void);
extern "C" void func_ov015_0213290c(void);
extern "C" void func_ov015_021334b8(void);
extern GameHeap data_020c47b4;
extern "C" char data_020ae37c[];            // the vtable
extern "C" char data_020ae3cc[];            // "/data_iz/script/treasurebox.dat"
extern "C" char data_020ae3ec[];


extern "C" void _ZN17UnkClass_0203dc7c13func_0203e18cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1bcEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1f4Ev(void);

// (4 bytes of a file, through the heap's file manager)
static inline int LoadFile(const char *name, void **dest)
{
    FileManager *fileManager = data_020c47b4.fileManager;
    const char *path = name;

    if (fileManager == NULL) {
        return 0;
    }
    return fileManager->Load(path, dest, &data_020c47b4, 0, 4, FALSE, 1, TRUE);
}

TreasureBox *TreasureBox::func_02051ba0()
{
    func_0203dc7c();
    vtable = data_020ae37c;
    unk_8c.func_02060294();
    unk_2b58.func_02054800();
    return this;
}

void TreasureBox::func_02051bd4()
{
    void *dest;

    unk_6a80 = 0;
    MI_CpuFill8(unk_6a88, 0, sizeof(unk_6a88));
    dest = &unk_6a80;
    LoadFile(data_020ae3cc, &dest);
}

// (when the scene starts)
void TreasureBox::func_02051c54()
{
    void *dest;

    unk_2b58.func_02054aa8();
    unk_6a60 = 1;
    unk_6a64 = 0;
    unk_6a54 = 0;
    unk_6a78 = 0;
    MI_CpuFill8(entries, 0, sizeof(entries));
    writeIndex = 0;
    readIndex = writeIndex;
    unk_8c.func_02060310();
    unk_8c.func_02060864(0, 2, 0, 0);
    dest = &unk_6a80;
    LoadFile(data_020ae3ec, &dest);
}
extern "C" char data_020ae40c[];
extern "C" char data_020ae420[];
extern "C" char data_020ae428[];
extern "C" char data_020ae42c[];
extern "C" char data_020ae434[];
extern "C" char data_020ae43c[];
extern "C" char data_020ae444[];
extern "C" char data_020ae44c[];
extern "C" char data_020ae454[];
extern "C" char data_020ae474[];
extern "C" char data_020ae47c[];
extern "C" char data_020ae484[];
extern "C" char data_020c4678[];
extern "C" char data_020c4688[];
extern "C" char data_020c46e4[];
extern "C" char data_020e88a0[];
extern "C" void STD_ConcatenateString(void);
extern "C" void STD_CopyString(void);
extern "C" void _ZN10ConfigFile6GetIntEPKc(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void func_02017278(void);
extern "C" void func_02022348(void);
extern "C" void func_02022b2c(void);
extern "C" void func_02022e2c(void);
extern "C" void func_0202300c(void);
extern "C" void func_0202323c(void);
extern "C" void func_0208e508(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" void func_ov015_0213e11c(void);
extern "C" void func_ov015_02143664(void);
extern "C" void gGameState(void);
extern "C" void sprintf(void);

asm void TreasureBox::func_02051d20()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    cmp r1, #1
    mov r8, r0
    mov r5, #0
    mov r4, #1
    addeq sp, sp, #0x10
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r2, r8, #0x6000
    ldr r1, [r2, #0xa60]
    cmp r1, #0
    addeq sp, sp, #0x10
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r1, r8, #0x6a00
    ldrsb r3, [r1, #0x38]
    add r1, r8, #0x1f8
    ldr r2, [r2, #0xa78]
    add r1, r1, #0x6800
    cmp r2, #8
    add r6, r1, r3, lsl #3
    addls pc, pc, r2, lsl #2
    b @L_0205228c
    b @L_02051da4
    b @L_02051ed0
    b @L_02051f40
    b @L_02051fb0
    b @L_020520a8
    b @L_02052158
    b @L_02052214
    b @L_02052258
    b @L_02052280
@L_02051da4:
    mov r1, r5
    mov r2, r5
    bl func_02052444
    ldrsh r0, [r6, #6]
    cmp r0, #0
    bne @L_02051eac
    bl _ZN12SceneManager13func_0203e30cEv
    cmp r0, #3
    addne sp, sp, #0x10
    movne r0, r5
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r8, #0x6000
    ldr r2, [r0, #0xa3c]
    cmp r2, #0
    addeq sp, sp, #0x10
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r1, r8, #0x358
    mov r0, r8
    add r1, r1, #0x2800
    bl func_02052444
    add r0, r8, #0x6000
    ldr r0, [r0, #0xa3c]
    bl func_ov000_020fdde4
    cmp r0, #9
    bne @L_02051e8c
    ldr r0, =data_020a6fb8
    ldr r4, =data_020c48a0
    add r3, sp, #4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4]
    ldrsh r0, [r4, #4]
    str r1, [sp, #4]
    bl func_02017cdc
    ldrsh r5, [r4, #6]
    mov r4, r0
    mov r0, #0x100
    mov r1, r5
    bl func_0202273c
    mul r0, r5, r0
    cmp r0, r4
    bne @L_02051e8c
    ldr r1, [sp, #4]
    ldr r0, [sp, #8]
    cmp r1, r0
    beq @L_02051e6c
    ldr r0, [sp, #0xc]
    cmp r1, r0
    bne @L_02051e8c
@L_02051e6c:
    mov r4, #0
    b @L_02051e84
@L_02051e74:
    mov r1, r4
    add r0, r8, #0x8c
    bl _ZN17UnkClass_0206029413func_020612b8Ev
    add r4, r4, #1
@L_02051e84:
    cmp r4, #1
    blt @L_02051e74
@L_02051e8c:
    add r0, r8, #0x358
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_02054db4Ev
    add r0, r8, #0x8c
    bl _ZN17UnkClass_0206029413func_02060f54Ev
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02051eac:
    add r0, r8, #0x6000
    ldr r1, [r0, #0xa64]
    cmp r1, #0
    addeq sp, sp, #0x10
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r0, #0xa78]
    add r1, r1, #1
    str r1, [r0, #0xa78]
@L_02051ed0:
    mov r7, #0
    str r7, [sp]
    ldrsb r2, [r6, #5]
    add r1, r8, #0x358
    ldr r3, [r6]
    add r0, r8, #0x8c
    add r1, r1, #0x2800
    bl _ZN17UnkClass_0206029413func_02060efcEv
    ldrsb r0, [r6, #5]
    add r1, r8, #0x6000
    mov r2, #1
    cmp r0, #0
    moveq r7, #1
    add r0, r8, #0x358
    cmp r7, #0
    ldr r1, [r1, #0xa3c]
    movne r2, #0
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_02054cd0Ev
    ldrsh r1, [r6, #6]
    ldr r0, =0x102e
    cmp r1, r0
    addne r0, r8, #0x6000
    strne r4, [r0, #0xa74]
    add r0, r8, #0x6000
    ldr r1, [r0, #0xa78]
    add r1, r1, #1
    str r1, [r0, #0xa78]
@L_02051f40:
    add r0, r8, #0x6000
    ldr r1, [r0, #0xa68]
    cmp r1, #0
    beq @L_02051f7c
    bl func_ov015_0213290c
    cmp r0, #0
    addne r0, r8, #0x6000
    strne r5, [r0, #0xa74]
    add r0, r8, #0x6000
    ldr r0, [r0, #0xa3c]
    bl _ZN17UnkClass_0203dc7c13func_0203df24Ev
    add r0, r8, #0x6000
    mov r1, #6
@L_02051f74:
    str r1, [r0, #0xa78]
    b @L_0205228c
@L_02051f7c:
    ldr r0, [r0, #0xa70]
    cmp r0, #0
    bne @L_0205228c
    add r0, r8, #0x358
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_02054db4Ev
    add r0, r8, #0x8c
    bl _ZN17UnkClass_0206029413func_02060f54Ev
    cmp r0, #0
    addeq r0, r8, #0x6000
    ldreq r1, [r0, #0xa78]
    addeq r1, r1, #1
    b @L_02052278
@L_02051fb0:
    add r0, r8, #0x8c
    bl _ZN17UnkClass_0206029413func_02061210Ev
    add r0, r8, #0x358
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_02054d4cEv
    add r0, r8, #0x6a00
    ldrsb r0, [r0, #0x38]
    ldr r1, =0x1014
    ldrsh r7, [r6, #6]
    add r0, r8, r0, lsl #3
    add r0, r0, #0x6900
    ldrsh r0, [r0, #0xfe]
    cmp r0, r1
    bne @L_02051ff0
    ldr r0, =data_020d3d20
    bl func_0209ac40
@L_02051ff0:
    ldrsb r1, [r6, #5]
    cmp r1, #0xb
    blt @L_02052004
    add r0, r8, #0x8c
    bl _ZN17UnkClass_0206029413func_02060b58Ev
@L_02052004:
    add r0, r8, #0x6a00
    ldrsb r1, [r0, #0x38]
    add r0, r8, #0x1f8
    add r0, r0, #0x6800
    add r0, r0, r1, lsl #3
    mov r1, #0
    mov r2, #8
    bl MI_CpuFill8
    add r1, r8, #0x6a00
    ldrsb r2, [r1, #0x38]
    add r0, r8, #0x6000
    str r4, [r0, #0xa78]
    add r2, r2, #1
    strb r2, [r0, #0xa38]
    ldrsb r2, [r1, #0x38]
    and r2, r2, #7
    strb r2, [r0, #0xa38]
    ldrsb r1, [r1, #0x38]
    add r1, r8, r1, lsl #3
    add r1, r1, #0x6900
    ldrsh r1, [r1, #0xfe]
    cmp r1, #0
    bne @L_0205228c
    ldr r0, [r0, #0xa68]
    cmp r0, #0
    bne @L_0205209c
    ldr r1, =0x1002
    cmp r7, r1
    addne r0, r1, #0x1f
    cmpne r7, r0
    addne r0, r1, #0x20
    cmpne r7, r0
    addne r0, r1, #0x21
    cmpne r7, r0
    addne r0, r1, #0x2c
    cmpne r7, r0
    addeq r0, r8, #0x6000
    streq r5, [r0, #0xa74]
@L_0205209c:
    add r0, r8, #0x6000
    mov r1, #4
    b @L_02051f74
@L_020520a8:
    mov r6, r5
    mov r1, r6
    add r0, r8, #0x8c
    bl _ZN17UnkClass_0206029413func_02060c80Ev
    cmp r0, #0
    beq @L_0205228c
    add r0, r8, #0x6000
    ldr r0, [r0, #0xa54]
    cmp r0, #0
    add r0, r8, #0x8c
    bne @L_020520f0
    bl _ZN17UnkClass_0206029413func_02060d14Ev
    add r1, r8, #0x6000
    str r0, [r1, #0xa54]
    cmp r0, #0
    bne @L_0205228c
    str r6, [r1, #0xa64]
    b @L_02052148
@L_020520f0:
    sub r1, r6, #1
    bl _ZN17UnkClass_0206029413func_02060a48Ev
    cmp r0, #0
    beq @L_0205228c
    add r7, r8, #0x6000
    str r6, [r7, #0xa64]
    ldr r9, =0x1023
    b @L_02052138
@L_02052110:
    ldr r0, [r7, #0xa54]
    tst r0, r4, lsl r6
    beq @L_02052134
    mov r0, r8
    mov r1, r6
    mov r2, r9
    bl func_02052c68
    cmp r0, #0
    strne r4, [r7, #0xa64]
@L_02052134:
    add r6, r6, #1
@L_02052138:
    cmp r6, #0x11
    blt @L_02052110
    add r0, r8, #0x6000
    str r5, [r0, #0xa54]
@L_02052148:
    add r0, r8, #0x6000
    ldr r1, [r0, #0xa78]
    add r1, r1, #1
    str r1, [r0, #0xa78]
@L_02052158:
    add r0, r8, #0x6000
    ldr r1, [r0, #0xa64]
    cmp r1, #0
    bne @L_0205220c
    ldr r1, [r0, #0xa4c]
    cmp r1, #0
    beq @L_020521a8
    cmp r1, #1
    bne @L_02052188
    mov r0, #0x12
    mov r1, #1
    bl func_ov015_021334b8
@L_02052188:
    mov r0, #6
    bl func_ov015_02132628
    add r0, r8, #0x6000
    ldr r0, [r0, #0xa4c]
    bl _ZN12SceneManager13func_0203e2fcEl
    add r0, r8, #0x6000
    str r5, [r0, #0xa4c]
    b @L_020521f0
@L_020521a8:
    ldr r1, [r0, #0xa68]
    cmp r1, #0
    beq @L_020521cc
    ldr r1, [r0, #0xa74]
    cmp r1, #0
    beq @L_020521e0
    ldr r0, [r0, #0xa3c]
    bl _ZN17UnkClass_0203dc7c13func_0203df08Ev
    b @L_020521e0
@L_020521cc:
    ldr r0, [r0, #0xa74]
    cmp r0, #0
    beq @L_020521e0
    mov r0, #6
    bl func_ov015_0213257c
@L_020521e0:
    add r0, r8, #0x6000
    ldr r1, [r0, #0xa3c]
    mov r0, r8
    bl func_02052db8
@L_020521f0:
    add r0, r8, #0x6000
    str r5, [r0, #0xa68]
    str r5, [r0, #0xa6c]
    str r5, [r0, #0xa70]
    str r4, [r0, #0xa74]
    str r5, [r0, #0xa78]
    b @L_0205228c
@L_0205220c:
    str r4, [r0, #0xa78]
    b @L_0205228c
@L_02052214:
    bl func_ov015_02132794
    cmp r0, #0
    bne @L_0205228c
    add r0, r8, #0x6000
    ldr r0, [r0, #0xa6c]
    cmp r0, #0
    add r0, r8, #0x8c
    beq @L_0205223c
    bl _ZN17UnkClass_0206029413func_02061274Ev
    b @L_02052240
@L_0205223c:
    bl _ZN17UnkClass_0206029413func_02061258Ev
@L_02052240:
    ldr r0, =data_020c4f60
    bl _ZN11MoviePlayer4StopEv
    add r0, r8, #0x6000
    ldr r1, [r0, #0xa78]
    add r1, r1, #1
    str r1, [r0, #0xa78]
@L_02052258:
    add r0, r8, #0x358
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_02054db4Ev
    add r0, r8, #0x8c
    bl _ZN17UnkClass_0206029413func_02060f54Ev
    cmp r0, #0
    addeq r0, r8, #0x6000
    moveq r1, #3
@L_02052278:
    streq r1, [r0, #0xa78]
    b @L_0205228c
@L_02052280:
    add r0, r8, #0x358
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_02054db4Ev
@L_0205228c:
    mov r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

int TreasureBox::func_020522b8()
{
    return 0;
}

void TreasureBox::func_020522c0()
{
}

int TreasureBox::func_020522c4(u32 keys, u32 arg)
{
    if (keys & 1) {
        func_02054620();
    }
    unk_2b58.func_02054858(keys, arg);
    return 0;
}

int TreasureBox::func_020522fc(TPData *touch)
{
    unk_6a5c = 0;
    if (touch->touch == 1) {
        if (unk_6a58 == 0) {
            unk_6a5c = 1;
        }
        unk_6a58 = 1;
    } else {
        unk_6a58 = 0;
    }
    if (unk_6a5c) {
        func_02054620();
    }
    unk_2b58.func_02054884(touch);
    return 0;
}

void TreasureBox::func_02052374()
{
}

void TreasureBox::func_02052378(s32 value)
{
    unk_6a4c = value;
}

void TreasureBox::func_02052384()
{
    unk_8c.func_020603e0();
}

void TreasureBox::func_02052394()
{
    unk_2b58.func_02054bc0();
}

void TreasureBox::func_020523a8()
{
    unk_2b58.func_02054bcc();
}

void TreasureBox::func_020523bc()
{
    if (unk_6a64 != 0 && unk_6a78 != 0) {
        unk_8c.func_02061210();
        unk_2b58.func_02054d4c();
    }
    unk_6a68 = 0;
    unk_6a6c = 0;
    unk_6a70 = 0;
    unk_6a64 = 0;
    unk_6a78 = 0;
    MI_CpuFill8(entries, 0, sizeof(entries));
    writeIndex = 0;
    readIndex = writeIndex;
}

void TreasureBox::func_02052438(UnkClass_0203dc7c *scene)
{
    this->scene = scene;
}

void TreasureBox::func_02052444(int arg, int arg2)
{
    unk_8c.func_020612ac(arg);
    unk_8c.func_020612a0(arg2);
}

void *TreasureBox::func_02052468()
{
    return &unk_2b58;
}

void TreasureBox::func_02052474(void *dst)
{
    MI_CpuCopy8(unk_6a88, dst, sizeof(unk_6a88));
    unk_2b58.func_02054c24((u8 *)dst + 0x80);
    unk_8c.func_02060494((u8 *)dst + 0x280);
}

void TreasureBox::func_020524b0(void *src)
{
    MI_CpuCopy8(src, unk_6a88, sizeof(unk_6a88));
    unk_2b58.func_02054c6c((u8 *)src + 0x80);
    unk_8c.func_020604f8((u8 *)src + 0x280);
}

void TreasureBox::func_020524f0(s32 value)
{
    UnkClass_0203dc7c *scene = this->scene;

    if (scene != NULL && scene->func_0203e18c() != scene->func_0203e1bc()) {
        return;
    }
    unk_6a60 = value;
}

// the number of entries waiting in the ring of 8
int TreasureBox::func_02052534()
{
    return (writeIndex + TREASURE_BOX_NUM_ENTRIES - readIndex) & (TREASURE_BOX_NUM_ENTRIES - 1);
}

// clears the ring, keeping the current entry while a box is open
void TreasureBox::func_02052550()
{
    TreasureBoxEntry entry;

    if (unk_6a64 != 0) {
        entry = entries[readIndex];
    }
    MI_CpuFill8(entries, 0, sizeof(entries));
    if (unk_6a64 == 0) {
        return;
    }
    entries[readIndex] = entry;
}

BOOL TreasureBox::func_020525d4()
{
    return unk_6a64 != 0 && unk_6a78 != 0;
}

void TreasureBox::func_020525f4(s32 value)
{
    unk_6a70 = value;
}

s16 TreasureBox::func_02052600()
{
    return entries[readIndex].unk_06;
}

void TreasureBox::func_02052618()
{
    unk_8c.func_02060624();
}

void TreasureBox::func_02052628(int a, int b, int c, int d)
{
    if (unk_6a64 == 0) {
        if (d == 0) {
            unk_8c.func_02060b58();
        }
        if (c == 0) {
            return;
        }
        unk_8c.func_02060864(a, b, c, d);
    } else {
        if (d == 0) {
            unk_8c.func_02060b70();
        }
        if (c == 0) {
            return;
        }
        unk_8c.func_02060938(a, b, c, d);
    }
}

void TreasureBox::func_020526cc(int c)
{
    func_02052628(2, 1, c, 0);
}

// (nonmatching: the two calls are laid out in the other order)
#ifdef NONMATCHING
void TreasureBox::func_020526ec(int arg, int keep)
{
    if (unk_6a64 == 0 || keep != 0) {
        unk_8c.func_02060b58();
    } else {
        unk_8c.func_02060b70();
    }
}
#else
asm void TreasureBox::func_020526ec(int arg, int keep)
{
    stmdb sp!, {r3, lr}
    add r3, r0, #0x6000
    ldr r3, [r3, #0xa64]
    cmp r3, #0
    beq @L_02052708
    cmp r2, #0
    beq @L_02052714
@L_02052708:
    add r0, r0, #0x8c
    bl _ZN17UnkClass_0206029413func_02060b58Ev
    ldmia sp!, {r3, pc}
@L_02052714:
    add r0, r0, #0x8c
    bl _ZN17UnkClass_0206029413func_02060b70Ev
    ldmia sp!, {r3, pc}
}
#endif

asm void TreasureBox::func_02052720()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x80
    mov r4, #0x80
    mov r9, r0
    mov r6, #0
    mov r8, r1
    add r0, sp, #0
    mov r1, r6
    mov r2, r4
    ldr r7, [sp, #0xa0]
    bl MI_CpuFill8
    ldr r0, =0x10005
    cmp r8, r0
    bgt @L_0205282c
    bge @L_02052a94
    sub r1, r0, #3
    cmp r8, r1
    bgt @L_02052800
    sub r0, r0, #3
    cmp r8, r0
    bge @L_02052a7c
    cmp r8, #0x19
    bgt @L_020527f0
    cmp r8, #0
    addge pc, pc, r8, lsl #2
    b @L_02052abc
    b @L_02052abc
    b @L_0205289c
    b @L_020529fc
    b @L_020528a4
    b @L_02052918
    b @L_020528ac
    b @L_020528bc
    b @L_020528c4
    b @L_020529ec
    b @L_020529f4
    b @L_020528b4
    b @L_02052894
    b @L_02052a04
    b @L_02052a0c
    b @L_02052a14
    b @L_02052a24
    b @L_02052a1c
    b @L_02052a2c
    b @L_02052a34
    b @L_02052a3c
    b @L_02052a44
    b @L_02052a4c
    b @L_02052a54
    b @L_02052a5c
    b @L_02052a64
    b @L_02052a6c
@L_020527f0:
    ldr r0, =0x10001
    cmp r8, r0
    beq @L_02052a74
    b @L_02052abc
@L_02052800:
    sub r1, r0, #2
    cmp r8, r1
    bgt @L_0205281c
    sub r0, r0, #2
    cmp r8, r0
    beq @L_02052a84
    b @L_02052abc
@L_0205281c:
    sub r0, r0, #1
    cmp r8, r0
    beq @L_02052a8c
    b @L_02052abc
@L_0205282c:
    add r1, r0, #3
    cmp r8, r1
    bgt @L_02052868
    bge @L_020529e4
    add r1, r0, #1
    cmp r8, r1
    bgt @L_02052858
    add r0, r0, #1
    cmp r8, r0
    beq @L_02052a9c
    b @L_02052abc
@L_02052858:
    add r0, r0, #2
    cmp r8, r0
    beq @L_02052aa4
    b @L_02052abc
@L_02052868:
    add r1, r0, #4
    cmp r8, r1
    bgt @L_02052884
    add r0, r0, #4
    cmp r8, r0
    beq @L_02052aac
    b @L_02052abc
@L_02052884:
    add r0, r0, #5
    cmp r8, r0
    beq @L_02052ab4
    b @L_02052abc
@L_02052894:
    ldr r5, =0x1013
    b @L_02052ac8
@L_0205289c:
    ldr r5, =0x1022
    b @L_02052ac8
@L_020528a4:
    ldr r5, =0x1003
    b @L_02052ac8
@L_020528ac:
    ldr r5, =0x1004
    b @L_02052ac8
@L_020528b4:
    ldr r5, =0x1026
    b @L_02052ac8
@L_020528bc:
    ldr r5, =0x100b
    b @L_02052ac8
@L_020528c4:
    ldr r4, =data_020e88a0
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206ace8Ev
    cmp r0, #0
    addne sp, sp, #0x80
    movne r0, r6
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4
    bl func_ov015_02143664
    ldrsb r0, [r0, #0xc]
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02052910
    ldrh r0, [r0, #0xf0]
    tst r0, #0x20
    movne r6, #1
    cmp r6, #0
    ldrne r5, =0x100c
    bne @L_02052ac8
@L_02052910:
    ldr r5, =0x100d
    b @L_02052ac8
@L_02052918:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #2
    movls r0, #1
    bls @L_02052998
    cmp r0, #3
    blo @L_02052940
    cmp r0, #5
    movls r0, #2
    bls @L_02052998
@L_02052940:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #6
    blo @L_0205295c
    cmp r0, #8
    movls r0, #3
    bls @L_02052998
@L_0205295c:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #9
    blo @L_02052978
    cmp r0, #0xb
    movls r0, #4
    bls @L_02052998
@L_02052978:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #0xc
    blo @L_02052994
    cmp r0, #0xe
    movls r0, #5
    bls @L_02052998
@L_02052994:
    mvn r0, #0
@L_02052998:
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    b @L_02052ac8
    b @L_02052ac8
    b @L_020529bc
    b @L_020529c4
    b @L_020529cc
    b @L_020529d4
    b @L_020529dc
@L_020529bc:
    ldr r5, =0x1005
    b @L_02052ac8
@L_020529c4:
    ldr r5, =0x1006
    b @L_02052ac8
@L_020529cc:
    ldr r5, =0x1007
    b @L_02052ac8
@L_020529d4:
    ldr r5, =0x1008
    b @L_02052ac8
@L_020529dc:
    ldr r5, =0x1029
    b @L_02052ac8
@L_020529e4:
    ldr r5, =0x101c
    b @L_02052ac8
@L_020529ec:
    ldr r5, =0x101a
    b @L_02052ac8
@L_020529f4:
    ldr r5, =0x101b
    b @L_02052ac8
@L_020529fc:
    ldr r5, =0x1021
    b @L_02052ac8
@L_02052a04:
    ldr r5, =0x1015
    b @L_02052ac8
@L_02052a0c:
    ldr r5, =0x1014
    b @L_02052ac8
@L_02052a14:
    ldr r5, =0x1016
    b @L_02052ac8
@L_02052a1c:
    ldr r5, =0x101d
    b @L_02052ac8
@L_02052a24:
    ldr r5, =0x1017
    b @L_02052ac8
@L_02052a2c:
    ldr r5, =0x1024
    b @L_02052ac8
@L_02052a34:
    ldr r5, =0x1027
    b @L_02052ac8
@L_02052a3c:
    ldr r5, =0x1025
    b @L_02052ac8
@L_02052a44:
    ldr r5, =0x1028
    b @L_02052ac8
@L_02052a4c:
    ldr r5, =0x102a
    b @L_02052ac8
@L_02052a54:
    ldr r5, =0x102b
    b @L_02052ac8
@L_02052a5c:
    ldr r5, =0x102c
    b @L_02052ac8
@L_02052a64:
    ldr r5, =0x102d
    b @L_02052ac8
@L_02052a6c:
    ldr r5, =0x102e
    b @L_02052ac8
@L_02052a74:
    ldr r5, =0x100e
    b @L_02052ac8
@L_02052a7c:
    ldr r5, =0x100f
    b @L_02052ac8
@L_02052a84:
    add r5, r4, #0xf90
    b @L_02052ac8
@L_02052a8c:
    ldr r5, =0x1011
    b @L_02052ac8
@L_02052a94:
    ldr r5, =0x1012
    b @L_02052ac8
@L_02052a9c:
    ldr r5, =0x1019
    b @L_02052ac8
@L_02052aa4:
    ldr r5, =0x1018
    b @L_02052ac8
@L_02052aac:
    ldr r5, =0x101e
    b @L_02052ac8
@L_02052ab4:
    ldr r5, =0x101f
    b @L_02052ac8
@L_02052abc:
    add sp, sp, #0x80
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02052ac8:
    mov r4, #0
    mov r6, #0x10
    and r10, r8, #0x10000
    b @L_02052afc
@L_02052ad8:
    mov r0, r9
    mov r1, r6
    mov r2, r5
    bl func_02052c68
    adds r4, r4, r0
    beq @L_02052af8
    cmp r10, #0
    bne @L_02052b04
@L_02052af8:
    sub r6, r6, #1
@L_02052afc:
    cmp r6, #0
    bge @L_02052ad8
@L_02052b04:
    cmp r4, #0
    bne @L_02052b60
    ldr r0, =0x1021
    cmp r5, r0
    beq @L_02052b24
    add r0, r0, #1
    cmp r5, r0
    bne @L_02052b60
@L_02052b24:
    ldr r5, =0x1002
    mov r6, #0x10
    and r8, r8, #0x10000
    b @L_02052b58
@L_02052b34:
    mov r0, r9
    mov r1, r6
    mov r2, r5
    bl func_02052c68
    adds r4, r4, r0
    beq @L_02052b54
    cmp r8, #0
    bne @L_02052b60
@L_02052b54:
    sub r6, r6, #1
@L_02052b58:
    cmp r6, #0
    bge @L_02052b34
@L_02052b60:
    cmp r4, #0
    cmpne r7, #0
    beq @L_02052bac
    add r1, r9, #0x6000
    mov r0, r7
    str r7, [r1, #0xa3c]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    add r1, r9, #0x6000
    str r0, [r1, #0xa40]
    mov r0, r7
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    add r1, r9, #0x6000
    mov r3, #0
    mov r2, #1
    str r0, [r1, #0xa44]
    str r3, [r1, #0xa68]
    str r3, [r1, #0xa6c]
    str r3, [r1, #0xa70]
    str r2, [r1, #0xa64]
@L_02052bac:
    mov r0, r4
    add sp, sp, #0x80
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void TreasureBox::func_02052c68()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r9, r1
    mov r10, r0
    mov r8, r2
    mov r0, r9, lsl #0x18
    mov r1, #0
    mov r2, r8, lsl #0x10
    add r3, r10, #0x39
    mov r6, r0, asr #0x18
    add r0, r10, #0x6000
    mov r7, r1
    mov r11, r2, asr #0x10
    add r5, r3, #0x6a00
    add r4, r10, #0x6a00
    str r0, [sp, #4]
@L_02052ca8:
    ldrsb r0, [r4, #0x39]
    add r0, r10, r0, lsl #3
    add r0, r0, #0x6900
    ldrsh r0, [r0, #0xfe]
    cmp r0, #0
    addne sp, sp, #8
    movne r0, r7
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r12, #0
    mov r2, r9
    mov r3, r8
    add r0, r10, #0x8c
    str r12, [sp]
    bl _ZN17UnkClass_0206029413func_02060e80Ev
    movs r1, r0
    beq @L_02052d3c
    ldrsb r0, [r4, #0x39]
    add r7, r7, #1
    add r0, r10, r0, lsl #3
    add r0, r0, #0x6000
    strb r6, [r0, #0x9fd]
    ldrsb r0, [r4, #0x39]
    add r0, r10, r0, lsl #3
    add r0, r0, #0x6900
    strh r11, [r0, #0xfe]
    ldrsb r0, [r4, #0x39]
    add r0, r10, r0, lsl #3
    add r0, r0, #0x6000
    str r1, [r0, #0x9f8]
    ldrsb r0, [r5]
    add r0, r0, #1
    strb r0, [r5]
    ldrsb r0, [r4, #0x39]
    and r2, r0, #7
    ldr r0, [sp, #4]
    strb r2, [r0, #0xa39]
    b @L_02052ca8
@L_02052d3c:
    mov r0, r7
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

BOOL TreasureBox::func_02052d48(UnkClass_0203dc7c *scene)
{
    if (entries[readIndex].unk_06 == 0) {
        return FALSE;
    }
    this->scene = scene;
    unk_6a40 = scene->func_0203e18c();
    unk_6a44 = scene->func_0203e1f4();
    unk_6a64 = TRUE;
    return TRUE;
}

void TreasureBox::func_02052da8(s32 top, s32 bottom)
{
    unk_6a40 = top;
    unk_6a44 = bottom;
}

void TreasureBox::func_02052db8(UnkClass_0203dc7c *scene)
{
    if (unk_6a40 >= 0) {
        scene->func_0203e04c(0, unk_6a40);
    }
    if (unk_6a44 >= 0) {
        scene->func_0203e04c(1, unk_6a44);
    }
}

void TreasureBox::func_02052e00(s32 value)
{
    unk_6a48 = value;
}

asm void TreasureBox::func_02052e0c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r7, r1
    add r4, r7, #3
    mov r1, #0x88
    mul r1, r4, r1
    mov r8, r0
    mov r6, r3
    mov r9, r2
    add r5, r1, #0x20
    mov r4, #0
    ldr r0, =data_020c47b4
    mov r2, r4
    add r1, r5, r9
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    mov r1, r4
    add r2, r5, r9
    mov r4, r0
    bl MI_CpuFill8
    cmp r6, #0
    addne r0, r4, r5
    strne r0, [r6]
    ldr r0, =0x30001
    add r12, r7, #3
    stmib r4, {r0, r5}
    strh r12, [r4, #0xc]
    mov r2, #0
    strh r2, [r4, #0xe]
    sub r0, r5, #0x20
    str r0, [r4, #0x10]
    mov r3, #1
    str r2, [r4, #0x14]
    strh r3, [r4, #0x20]
    mov r0, #0x88
    strh r0, [r4, #0x22]
    add r0, r3, #0x3000
    strh r0, [r4, #0x24]
    mov r1, #2
    strb r1, [r4, #0x26]
    strb r3, [r4, #0x27]
    mov r0, #0x11
    str r0, [r4, #0x28]
    str r2, [r4, #0x2c]
    rsb r0, r3, #0x2000
    str r0, [r4, #0x30]
    stmia sp, {r1, r2}
    mov r0, r8
    add r1, r4, #0x20
    add r2, r3, #0x6000
    str r12, [sp, #8]
    bl func_02052fd8
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void TreasureBox::func_02052eec()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r6, #2
    str r6, [sp]
    mov r5, #0
    mov r4, #1
    stmib sp, {r5, r6}
    mov r3, r4
    add r2, r6, #0x6000
    mov r8, r0
    bl func_02052fd8
    ldrh r12, [r0]
    mov r2, #0x88
    add r3, r4, #0x30000
    sub r1, r12, #1
    mul r7, r1, r2
    sub r1, r0, r7
    mul r0, r12, r2
    sub r7, r1, #0x20
    str r3, [r7, #4]
    strh r12, [r7, #0xc]
    strh r5, [r7, #0xe]
    str r0, [r7, #0x10]
    str r5, [r7, #0x14]
    str r6, [sp]
    mov r0, r8
    mov r3, r4
    add r2, r4, #0x6000
    stmib sp, {r5, r12}
    bl func_02052fd8
    mov r2, r7
    mov r3, r4
    add r0, r8, #0x8c
    mov r1, #0xb
    bl _ZN17UnkClass_0206029413func_02060a98Ev
    add r2, r8, #0x6a00
    ldrsb r1, [r2, #0x39]
    rsb r4, r4, #0x2000
    add r3, r7, #0x20
    add r1, r8, r1, lsl #3
    add r1, r1, #0x6000
    strb r0, [r1, #0x9fd]
    ldrsb r0, [r2, #0x39]
    add r1, r8, #0x6000
    add r0, r8, r0, lsl #3
    add r0, r0, #0x6900
    strh r4, [r0, #0xfe]
    ldrsb r0, [r2, #0x39]
    add r0, r8, r0, lsl #3
    add r0, r0, #0x6000
    str r3, [r0, #0x9f8]
    ldrsb r0, [r2, #0x39]
    add r0, r0, #1
    strb r0, [r1, #0xa39]
    ldrsb r0, [r2, #0x39]
    and r0, r0, #7
    strb r0, [r1, #0xa39]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void TreasureBox::func_02052fd8()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    ldrh r4, [r1]
    mov r0, #0x88
    strh r0, [r1, #0x8a]
    add r0, r4, #1
    strh r0, [r1, #0x88]
    strh r2, [r1, #0x8c]
    ldr r0, [sp, #0x20]
    strb r0, [r1, #0x8e]
    strb r3, [r1, #0x8f]
    ldr r4, [sp, #0x20]
    cmp r4, #0
    beq @L_02053088
    and r0, r0, #0xff
    add r3, r0, #7
    add r2, sp, #0x20
    mov r0, r3, asr #2
    add r0, r3, r0, lsr #29
    bic r2, r2, #3
    mov r3, r0, asr #3
    cmp r4, #0
    add r2, r2, #4
    mov r0, #0
    ble @L_02053088
    add r12, r1, r3, lsl #2
    mov r4, #1
@L_02053044:
    mov r3, r0, asr #2
    add r3, r0, r3, lsr #29
    mov r3, r3, asr #3
    add r5, r1, r3, lsl #2
    mov r3, r0, lsl #2
    ldr lr, [r5, #0x90]
    and r3, r3, #0x1f
    orr r3, lr, r4, lsl r3
    str r3, [r5, #0x90]
    add r2, r2, #4
    add r3, r12, r0, lsl #2
    ldr lr, [r2, #-4]
    add r0, r0, #1
    str lr, [r3, #0x90]
    ldr r3, [sp, #0x20]
    cmp r0, r3
    blt @L_02053044
@L_02053088:
    add r0, r1, #0x88
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

asm void TreasureBox::func_02053098()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x78
    mov r7, r1
    add r4, sp, #0x38
    mov r6, r0
    ldr r1, =data_020ae40c
    mov r0, r4
    str r2, [sp, #0x14]
    mov r5, r3
    bl STD_CopyString
    mov r0, r4
    mov r1, r7
    bl STD_ConcatenateString
    ldr r1, =data_020ae420
    mov r0, r4
    bl STD_ConcatenateString
    ldr r3, =data_020c47b4
    mov r1, #0
    add r0, r6, #0x6000
    str r1, [r0, #0xa7c]
    ldr r0, [r3]
    cmp r0, #0
    beq @L_02053120
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    add r2, r6, #0x27c
    ldr r0, [r3]
    mov r1, r4
    add r2, r2, #0x6800
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_02053120:
    add r0, r6, #0x6000
    ldr r0, [r0, #0xa7c]
    cmp r0, #0
    addeq sp, sp, #0x78
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r4, r0, #0x10
    ldr r11, [r0]
    mov r10, #0
    b @L_020537ec
@L_02053148:
    ldrsb r0, [r4, #1]
    cmp r0, #3
    bne @L_020531fc
    ldr r1, [r4, #0x28]
    mov r0, r6
    bl func_02053aa0
    cmp r0, #0
    bne @L_020537e4
    add r0, r5, #0x364
    add r8, r0, #0x4000
    mov r7, #0
    b @L_020531a4
@L_02053178:
    ldrb r0, [r8, #0x20]
    cmp r0, #3
    cmpne r0, #0xe
    cmpne r0, #4
    bne @L_0205319c
    ldrsh r1, [r8, #0x22]
    ldrsb r0, [r4]
    cmp r1, r0
    beq @L_020531b0
@L_0205319c:
    add r7, r7, #1
    add r8, r8, #0x38
@L_020531a4:
    ldr r0, [r5, #0xc]
    cmp r7, r0
    blt @L_02053178
@L_020531b0:
    ldr r0, [r8, #0x1c]
    tst r0, #1
    bne @L_020537e4
    ldr r1, [r4, #0x28]
    mov r0, r6
    bl func_02053aa0
    cmp r0, #0
    ldrne r0, [r8, #0x1c]
    orrne r0, r0, #1
    strne r0, [r8, #0x1c]
    bne @L_020537e4
    ldr r0, =gGameState
    ldr r1, [r8, #0x28]
    ldrb r0, [r0, #0x4f6]
    cmp r1, r0
    ldrgt r0, [r8, #0x1c]
    orrgt r0, r0, #1
    strgt r0, [r8, #0x1c]
    bgt @L_020537e4
@L_020531fc:
    ldr r0, [sp, #0x14]
    ldr r2, =data_020ae428
    str r0, [sp]
    ldr r1, [r4, #0x28]
    add r0, r6, #0x358
    str r1, [sp, #4]
    mov r1, #1
    str r1, [sp, #8]
    ldrsb r1, [r4]
    ldrh r3, [r4, #2]
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_0205d02cEv
    add r0, r6, #0x358
    ldrsb r1, [r4]
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_0205d204Ev
    ldrsb r0, [r4, #1]
    cmp r0, #4
    bhi @L_020537e4
    mov r7, #0
    add pc, pc, r0, lsl #2
    mov r0, r0
    b @L_020537e4
    b @L_02053298
    b @L_02053268
    b @L_0205343c
    b @L_02053580
@L_02053268:
    ldrh r2, [r4, #2]
    add r8, sp, #0x18
    ldr r1, =data_020ae42c
    mov r0, r8
    bl sprintf
    str r7, [sp]
    add r0, r6, #0x358
    ldrsb r1, [r4]
    add r0, r0, #0x2800
    mov r2, r8
    sub r3, r7, #1
    bl _ZN17UnkClass_0205480013func_0205d618Ev
@L_02053298:
    ldr r0, [r4, #0x18]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x18]
    ldr r0, =0x45800000
    bls @L_020532c4
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_020532d0
@L_020532c4:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_020532d0:
    mov r9, r0
    ldr r0, [r4, #0x14]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x14]
    ldr r0, =0x45800000
    bls @L_02053300
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_0205330c
@L_02053300:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_0205330c:
    mov r7, r0
    ldr r0, [r4, #0x10]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x10]
    ldr r0, =0x45800000
    bls @L_0205333c
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02053348
@L_0205333c:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_02053348:
    bl func_02022b2c
    mov r8, r0
    mov r0, r7
    bl func_02022b2c
    mov r7, r0
    mov r0, r9
    bl func_02022b2c
    mov r3, r7
    str r0, [sp]
    mov r7, #0
    str r7, [sp, #4]
    add r0, r6, #0x358
    ldrsb r1, [r4]
    mov r2, r8
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_0205d2acEv
    ldr r0, [r4, #0x24]
    mov r1, r7
    bl func_02022348
    ldr r1, [r4, #0x24]
    ldr r0, =0x45800000
    bls @L_020533b4
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_020533c0
@L_020533b4:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_020533c0:
    mov r9, r0
    ldr r0, [r4, #0x20]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x20]
    ldr r0, =0x45800000
    bls @L_020533f0
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_020533fc
@L_020533f0:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_020533fc:
    mov r7, r0
    ldr r0, [r4, #0x1c]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x1c]
    ldr r0, =0x45800000
    bls @L_0205342c
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02053438
@L_0205342c:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_02053438:
    b @L_020537a4
@L_0205343c:
    ldrh r2, [r4, #2]
    add r8, sp, #0x18
    ldr r1, =data_020ae434
    mov r0, r8
    bl sprintf
    str r7, [sp]
    add r0, r6, #0x358
    ldrsb r1, [r4]
    add r0, r0, #0x2800
    mov r2, r8
    sub r3, r7, #1
    bl _ZN17UnkClass_0205480013func_0205d618Ev
    add r0, r5, #0x364
    add r8, r0, #0x4000
    b @L_02053570
@L_02053478:
    ldrb r0, [r8, #0x20]
    cmp r0, #3
    beq @L_0205348c
    cmp r0, #4
    bne @L_02053568
@L_0205348c:
    ldrsh r1, [r8, #0x22]
    ldrsb r0, [r4]
    cmp r1, r0
    bne @L_02053568
    ldr r1, [r8, #8]
    add r0, r6, #0x358
    str r1, [sp]
    mov r7, #0
    str r7, [sp, #4]
    ldrsb r1, [r4]
    add r0, r0, #0x2800
    ldmia r8, {r2, r3}
    bl _ZN17UnkClass_0205480013func_0205d2acEv
    ldr r0, [r4, #0x24]
    mov r1, r7
    bl func_02022348
    ldr r1, [r4, #0x24]
    ldr r0, =0x45800000
    bls @L_020534ec
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_020534f8
@L_020534ec:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_020534f8:
    mov r9, r0
    ldr r0, [r4, #0x1c]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x1c]
    ldr r0, =0x45800000
    bls @L_02053528
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02053534
@L_02053528:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_02053534:
    bl func_02022b2c
    mov r7, r0
    mov r0, r9
    bl func_02022b2c
    mov r2, r7
    str r0, [sp]
    mov r0, #0
    str r0, [sp, #4]
    ldr r1, [r8, #0x24]
    add r0, r6, #0x358
    add r0, r0, #0x2800
    rsb r3, r1, #0x168000
    b @L_020537dc
@L_02053568:
    add r7, r7, #1
    add r8, r8, #0x38
@L_02053570:
    ldr r0, [r5, #0xc]
    cmp r7, r0
    blt @L_02053478
    b @L_020537e4
@L_02053580:
    add r0, r5, #0x364
    add r8, r0, #0x4000
    b @L_020535cc
@L_0205358c:
    ldrb r0, [r8, #0x20]
    cmp r0, #5
    beq @L_020535a0
    cmp r0, #6
    bne @L_020535c4
@L_020535a0:
    ldrsh r1, [r8, #0x22]
    ldrsb r0, [r4]
    cmp r1, r0
    bne @L_020535c4
    ldr r2, [r8, #0x28]
    ldr r1, =data_020ae43c
    add r0, sp, #0x18
    bl sprintf
    b @L_020535d8
@L_020535c4:
    add r7, r7, #1
    add r8, r8, #0x38
@L_020535cc:
    ldr r0, [r5, #0xc]
    cmp r7, r0
    blt @L_0205358c
@L_020535d8:
    ldr r0, [r5, #0xc]
    mov r3, #0
    cmp r7, r0
    bge @L_02053604
    str r3, [sp]
    ldrsb r1, [r4]
    add r0, r6, #0x358
    add r2, sp, #0x18
    add r0, r0, #0x2800
    sub r3, r3, #1
    bl _ZN17UnkClass_0205480013func_0205d618Ev
@L_02053604:
    ldr r0, [r4, #0x18]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x18]
    ldr r0, =0x45800000
    bls @L_02053630
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_0205363c
@L_02053630:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_0205363c:
    mov r9, r0
    ldr r0, [r4, #0x14]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x14]
    ldr r0, =0x45800000
    bls @L_0205366c
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02053678
@L_0205366c:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_02053678:
    mov r7, r0
    ldr r0, [r4, #0x10]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x10]
    ldr r0, =0x45800000
    bls @L_020536a8
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_020536b4
@L_020536a8:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_020536b4:
    bl func_02022b2c
    mov r8, r0
    mov r0, r7
    bl func_02022b2c
    mov r7, r0
    mov r0, r9
    bl func_02022b2c
    mov r3, r7
    str r0, [sp]
    mov r7, #0
    str r7, [sp, #4]
    add r0, r6, #0x358
    ldrsb r1, [r4]
    mov r2, r8
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_0205d2acEv
    ldr r0, [r4, #0x24]
    mov r1, r7
    bl func_02022348
    ldr r1, [r4, #0x24]
    ldr r0, =0x45800000
    bls @L_02053720
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_0205372c
@L_02053720:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_0205372c:
    mov r9, r0
    ldr r0, [r4, #0x20]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x20]
    ldr r0, =0x45800000
    bls @L_0205375c
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02053768
@L_0205375c:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_02053768:
    mov r7, r0
    ldr r0, [r4, #0x1c]
    mov r1, #0
    bl func_02022348
    ldr r1, [r4, #0x1c]
    ldr r0, =0x45800000
    bls @L_02053798
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_020537a4
@L_02053798:
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_020537a4:
    bl func_02022b2c
    mov r8, r0
    mov r0, r7
    bl func_02022b2c
    mov r7, r0
    mov r0, r9
    bl func_02022b2c
    str r0, [sp]
    mov r0, #0
    str r0, [sp, #4]
    add r0, r6, #0x358
    mov r2, r8
    mov r3, r7
    add r0, r0, #0x2800
@L_020537dc:
    ldrsb r1, [r4]
    bl _ZN17UnkClass_0205480013func_0205d3f4Ev
@L_020537e4:
    add r10, r10, #1
    add r4, r4, #0x38
@L_020537ec:
    cmp r10, r11
    blt @L_02053148
    mov r0, r11
    add sp, sp, #0x78
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

BOOL TreasureBox::func_02053824()
{
    if (unk_6a7c == NULL) {
        return TRUE;
    }
    unk_2b58.func_0205d874();
    data_020c47b4.Free(unk_6a7c);
    unk_6a7c = NULL;
    return TRUE;
}

void TreasureBox::func_02053874()
{
    unk_2b58.func_0205d18c();
}

void TreasureBox::func_02053888()
{
    unk_2b58.func_0205cfec();
}

void TreasureBox::func_0205389c()
{
    unk_2b58.func_0205d00c();
}

asm void TreasureBox::func_020538b0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r4, r1
    add r3, sp, #0xc
    mov r1, #6
    mov r2, #0x40
    mov r5, r0
    bl func_02052e0c
    ldr r1, [r4, #0x34]
    mov r7, r0
    cmp r1, #0
    beq @L_02053984
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_020767a4Em
    cmp r0, #0
    bne @L_02053984
    mov r0, #0x21
    bl func_0209d8b8
    mov r1, r0
    ldr r0, [sp, #0xc]
    bl STD_CopyString
    mov r8, #1
    ldr r4, =0x306b
    mov r0, r5
    mov r1, r7
    mov r2, r4
    str r8, [sp]
    mov r6, #4
    mov r3, r8
    str r6, [sp, #4]
    bl func_02052fd8
    mov r1, r0
    mov r0, #2
    stmia sp, {r0, r6}
    str r0, [sp, #8]
    mov r0, r5
    sub r2, r4, #0x4f
    mov r3, r8
    bl func_02052fd8
    str r8, [sp]
    ldr r3, [sp, #0xc]
    mov r1, r0
    str r3, [sp, #4]
    sub r2, r4, #0x4e
    mov r0, r5
    mov r3, r8
    bl func_02052fd8
    mov r1, r0
    mov r0, r5
    bl func_02052eec
    add sp, sp, #0x10
    mov r0, r8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02053984:
    ldrsh r9, [r4, #0x22]
    add r0, r5, #0x358
    mov r11, #0
    mov r1, r9
    mov r2, r11
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_0205dac4Ev
    ldr r6, [sp, #0xc]
    ldr r1, =data_020ae444
    mov r0, r6
    add r10, r6, #8
    bl STD_CopyString
    ldr r1, =data_020ae44c
    mov r0, r10
    bl STD_CopyString
    mov r8, #2
    mov r1, r7
    mov r7, #1
    str r8, [sp]
    str r7, [sp, #4]
    str r6, [sp, #8]
    ldr r6, =0x3014
    mov r0, r5
    mov r3, r7
    mov r2, r6
    bl func_02052fd8
    str r8, [sp]
    str r7, [sp, #4]
    ldr r2, [r4, #0x2c]
    mov r1, r0
    str r2, [sp, #8]
    mov r3, r11
    mov r0, r5
    add r2, r6, #1
    bl func_02052fd8
    mov r1, r0
    stmia sp, {r8, r9, r10}
    mov r0, r5
    add r2, r6, #0x2f
    mov r3, r7
    bl func_02052fd8
    mov r1, r0
    ldr r0, [r4, #0x30]
    cmp r0, #0
    beq @L_02053a74
    stmia sp, {r7, r8}
    mov r0, r5
    mov r3, r7
    sub r2, r6, #0xf
    bl func_02052fd8
    str r7, [sp]
    ldr r2, [r4, #0x30]
    mov r1, r0
    sub r4, r2, #1
    ldr r2, =0x4026
    mov r0, r5
    mov r3, r7
    str r4, [sp, #4]
    bl func_02052fd8
    mov r1, r0
@L_02053a74:
    mov r0, r5
    bl func_02052eec
    mov r0, #1
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

// TRUE when the box has been opened (boxes past the ones in the file count as opened)
BOOL TreasureBox::func_02053aa0(int index)
{
    if (index >= unk_6a80) {
        return TRUE;
    }
    return unk_6a88[index / 8] & (1 << (index % 8));
}

asm void TreasureBox::func_02053ae0()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    mov r4, r1
    bl func_02053aa0
    cmp r0, #0
    addne sp, sp, #0x14
    movne r0, #0
    ldmneia sp!, {r3, r4, lr}
    addne sp, sp, #0x10
    bxne lr
    cmp r4, #0
    beq @L_02053b60
    ldr r3, =data_020c47b4
    ldr r1, =data_020ae454
    ldr r0, [r3]
    cmp r0, #0
    beq @L_02053b9c
    sub r2, r4, #1
    mov r2, r2, lsl #4
    add r2, r2, #0x10
    str r2, [sp]
    mov r2, #0x10
    str r2, [sp, #4]
    mov r2, #0
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, sp, #0x28
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
    b @L_02053b9c
@L_02053b60:
    ldr r0, =data_020c4688
    ldr r0, [r0]
    bl func_ov015_0213e11c
    ldr lr, [sp, #0x28]
    add r12, r0, #0x14
    mov r3, #4
@L_02053b78:
    ldrh r2, [r12]
    ldrh r1, [r12, #2]
    add r12, r12, #4
    subs r3, r3, #1
    strh r1, [lr, #2]
    strh r2, [lr], #4
    bne @L_02053b78
    mov r1, #0
    strh r1, [r0, #0x14]
@L_02053b9c:
    mov r0, #1
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, lr}
    add sp, sp, #0x10
    bx lr
}

asm void TreasureBox::func_02053bbc()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x58
    mov r5, #0
    str r5, [sp, #0x1c]
    ldrsh r4, [r1, #0x22]
    mov r10, r0
    add r0, r10, #0x358
    mov r1, r4
    add r0, r0, #0x2800
    mov r11, #1
    bl _ZN17UnkClass_0205480013func_0205dafcEv
    movs r7, r0
    addmi sp, sp, #0x58
    movmi r0, r5
    ldmmiia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r10, #0x358
    mov r1, r4
    add r0, r0, #0x2800
    bl _ZN17UnkClass_0205480013func_0205d7e0Ev
    ldr r1, =data_020c4678
    mov r2, r0
    ldr r1, [r1]
    add r0, sp, #0x20
    bl func_0208e508
    ldr r1, [sp, #0x20]
    ldr r0, [sp, #0x24]
    str r1, [sp, #0x3c]
    ldr r1, [sp, #0x28]
    str r0, [sp, #0x40]
    str r1, [sp, #0x44]
    mov r0, r10
    mov r1, #0x12
    mov r2, #0xc8
    add r3, sp, #0x1c
    bl func_02052e0c
    mov r6, r0
    ldr r0, [sp, #0x1c]
    ldr r1, =data_020ae474
    bl STD_CopyString
    ldr r0, [sp, #0x1c]
    add r9, r0, #8
    strb r5, [r0, #8]
    add r1, r9, #0x40
    add r0, sp, #0x2c
    b @L_02053c7c
@L_02053c70:
    add r2, r1, r5, lsl #4
    str r2, [r0, r5, lsl #2]
    add r5, r5, #1
@L_02053c7c:
    cmp r5, #4
    blt @L_02053c70
    add r2, sp, #0x48
    mov r0, r10
    mov r1, r7
    mov r8, #0
    bl func_02053ae0
    cmp r0, #0
    beq @L_02053e7c
    cmp r7, #0
    beq @L_02053cd8
    mov r3, r7, lsr #0x1f
    add r0, r10, #0x288
    rsb r2, r3, r7, lsl #29
    add r2, r3, r2, ror #29
    mov r1, r7, asr #2
    add r5, r0, #0x6800
    add r0, r7, r1, lsr #29
    mov r2, r11, lsl r2
    ldrb r3, [r5, r0, asr #3]
    and r1, r2, #0xff
    orr r1, r3, r1
    strb r1, [r5, r0, asr #3]
@L_02053cd8:
    ldr r0, =data_020c46e4
    ldr r1, =data_020ae47c
    bl _ZN10ConfigFile6GetIntEPKc
    cmp r0, #0
    beq @L_02053cf4
    cmp r0, #1
    beq @L_02053cfc
@L_02053cf4:
    mov r2, #0
    b @L_02053d00
@L_02053cfc:
    mov r2, #1
@L_02053d00:
    add r0, sp, #0x48
    mov r1, r2, lsl #2
    ldrh r8, [r0, r1]
    add r0, r0, r2, lsl #2
    ldrh r0, [r0, #2]
    strh r8, [sp, #0x18]
    cmp r8, #0
    strh r0, [sp, #0x1a]
    ldreqh r8, [sp, #0x48]
    ldreqh r0, [sp, #0x4a]
    streqh r8, [sp, #0x18]
    streqh r0, [sp, #0x1a]
    cmp r8, #0
    beq @L_02053e78
    beq @L_02053e94
    cmp r8, #0x200
    beq @L_02053e30
    ldr r0, =0x201
    cmp r8, r0
    beq @L_02053de8
    ldr r0, =data_020e88a0
    mov r1, r8
    bl _ZN17UnkClass_020621b413func_020768fcEm
    movs r5, r0
    moveq r8, #0
    beq @L_02053e94
    ldrh r0, [sp, #0x1a]
    mov r1, r8
    cmp r0, #0
    streqh r11, [sp, #0x1a]
    ldrh r2, [sp, #0x1a]
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_020765d4Ev
    cmp r0, #0
    bne @L_02053ddc
    ldrb r0, [r5, #0x21]
    cmp r0, #0xe
    beq @L_02053dc4
    cmp r0, #0xf
    beq @L_02053dac
    cmp r0, #0x11
    beq @L_02053dcc
    b @L_02053dd4
@L_02053dac:
    mov r0, #0x22
@L_02053db0:
    bl func_0209d8b8
    mov r2, r0
    mov r0, r9
    mov r3, r5
    b @L_02053e8c
@L_02053dc4:
    mov r0, #0x23
    b @L_02053db0
@L_02053dcc:
    mov r0, #0x24
    b @L_02053db0
@L_02053dd4:
    mov r0, #0x27
    b @L_02053db0
@L_02053ddc:
    ldrh r0, [r5, #0x24]
    ldr r8, =0x201
    strh r0, [sp, #0x1a]
@L_02053de8:
    ldrh r0, [sp, #0x1a]
    cmp r0, #1
    bne @L_02053e04
    ldr r0, =0x191
    bl func_0209d8b8
    mov r2, r0
    b @L_02053e14
@L_02053e04:
    mov r0, #0x25
    bl func_0209d8b8
    mov r2, r0
    ldrh r3, [sp, #0x1a]
@L_02053e14:
    mov r0, r9
    mov r1, #0x80
    bl func_02017278
    ldrh r1, [sp, #0x1a]
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_020767ccEv
    b @L_02053e94
@L_02053e30:
    ldrh r0, [sp, #0x1a]
    cmp r0, #1
    bne @L_02053e4c
    ldr r0, =0x192
    bl func_0209d8b8
    mov r2, r0
    b @L_02053e5c
@L_02053e4c:
    mov r0, #0x26
    bl func_0209d8b8
    mov r2, r0
    ldrh r3, [sp, #0x1a]
@L_02053e5c:
    mov r0, r9
    mov r1, #0x80
    bl func_02017278
    ldrh r1, [sp, #0x1a]
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_020768a8Ev
    b @L_02053e94
@L_02053e78:
    b @L_02053e7c
@L_02053e7c:
    mov r0, #0x28
    bl func_0209d8b8
    mov r2, r0
    mov r0, r9
@L_02053e8c:
    mov r1, #0x80
    bl func_02017278
@L_02053e94:
    cmp r8, #0
    mov r5, #2
    cmpne r8, #0x400
    bge @L_02053f00
    str r5, [sp]
    mov r11, #0x1f
    str r11, [sp, #4]
    ldr r2, =0x3fff
    mov r0, r10
    mov r1, r6
    mov r3, #1
    str r8, [sp, #8]
    bl func_02052fd8
    mov r1, r0
    mov r0, #4
    stmia sp, {r0, r11}
    ldr r6, [sp, #0x3c]
    ldr r0, [sp, #0x40]
    str r6, [sp, #8]
    str r0, [sp, #0xc]
    ldr r6, [sp, #0x44]
    rsb r2, r5, #0x3040
    mov r3, #1
    mov r0, r10
    str r6, [sp, #0x10]
    bl func_02052fd8
    mov r6, r0
@L_02053f00:
    cmp r8, #0
    beq @L_02053f80
    beq @L_02053f34
    str r5, [sp]
    mov r3, #0
    mov r1, r6
    ldr r2, =0x3015
    mov r0, r10
    str r3, [sp, #4]
    mov r6, #0xf
    str r6, [sp, #8]
    bl func_02052fd8
    mov r6, r0
@L_02053f34:
    str r5, [sp]
    str r4, [sp, #4]
    ldr r4, =0x3043
    ldr r11, [sp, #0x1c]
    mov r0, r10
    mov r1, r6
    mov r2, r4
    mov r3, #0
    str r11, [sp, #8]
    bl func_02052fd8
    mov r3, #1
    mov r1, r0
    str r3, [sp]
    mov r0, #0x1e
    str r0, [sp, #4]
    sub r2, r4, #0x41
    mov r0, r10
    bl func_02052fd8
    mov r6, r0
@L_02053f80:
    cmp r8, #0
    beq @L_0205402c
    cmp r8, #0x400
    bge @L_02053fe0
    str r5, [sp]
    mov r0, #0x1f
    str r0, [sp, #4]
    ldr r4, =0x3043
    ldr r11, [sp, #0x1c]
    mov r0, r10
    mov r1, r6
    mov r2, r4
    mov r3, #0
    str r11, [sp, #8]
    bl func_02052fd8
    mov r3, #1
    mov r1, r0
    str r3, [sp]
    mov r0, #0x14
    str r0, [sp, #4]
    sub r2, r4, #0x41
    mov r0, r10
    bl func_02052fd8
    mov r6, r0
@L_02053fe0:
    ldr r4, =0x3015
    str r5, [sp]
    mov r3, #0
    mov r1, r6
    mov r0, r10
    mov r2, r4
    str r3, [sp, #4]
    mov r6, #0x10
    str r6, [sp, #8]
    bl func_02052fd8
    mov r3, #1
    mov r1, r0
    str r3, [sp]
    mov r0, #0xa
    str r0, [sp, #4]
    sub r2, r4, #0x13
    mov r0, r10
    bl func_02052fd8
    mov r6, r0
@L_0205402c:
    mov r3, #1
    ldr r4, =0x306b
    mov r1, r6
    mov r6, r3
    str r6, [sp]
    mov r6, #4
    mov r0, r10
    mov r2, r4
    str r6, [sp, #4]
    bl func_02052fd8
    stmia sp, {r5, r6}
    sub r11, r4, #0x4f
    mov r1, r0
    mov r0, r10
    mov r2, r11
    mov r3, #1
    str r5, [sp, #8]
    bl func_02052fd8
    mov r1, #1
    stmia sp, {r1, r9}
    mov r1, r0
    sub r2, r4, #0x4e
    mov r0, r10
    mov r3, #1
    str r2, [sp, #0x14]
    bl func_02052fd8
    mov r1, #1
    str r1, [sp]
    mov r1, r0
    mov r0, #0x1f
    str r0, [sp, #4]
    mov r0, r10
    sub r2, r4, #0x2e
    mov r3, #1
    bl func_02052fd8
    cmp r7, #0
    mov r6, r0
    bne @L_02054188
    cmp r8, #0
    mov r7, #0
    beq @L_02054188
    add r9, r9, #0x80
    mov r0, #0x29
    bl func_0209d8b8
    mov r1, r0
    mov r0, r9
    bl STD_CopyString
    str r7, [sp]
    mov r1, r6
    sub r6, r4, #0x4d
    str r7, [sp, #4]
    mov r0, r10
    mov r2, r6
    mov r3, #1
    bl func_02052fd8
    str r7, [sp]
    mov r1, r0
    add r2, r4, #0x22
    str r7, [sp, #4]
    mov r0, r10
    mov r3, #1
    bl func_02052fd8
    mov r1, r0
    str r5, [sp]
    mov r0, #5
    str r0, [sp, #4]
    mov r0, #1
    str r0, [sp, #8]
    mov r2, r11
    mov r0, r10
    mov r3, #1
    bl func_02052fd8
    mov r1, #1
    stmia sp, {r1, r9}
    mov r1, r0
    ldr r2, [sp, #0x14]
    mov r0, r10
    mov r3, #1
    bl func_02052fd8
    str r7, [sp]
    mov r1, r0
    mov r2, r6
    mov r3, #1
    mov r0, r10
    str r7, [sp, #4]
    bl func_02052fd8
    mov r6, r0
@L_02054188:
    mov r0, r10
    mov r1, r6
    bl func_02052eec
    mov r0, #1
    add sp, sp, #0x58
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void TreasureBox::func_020541d0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    add r3, sp, #0xc
    mov r1, #5
    mov r2, #0x80
    mov r6, r0
    bl func_02052e0c
    ldr r1, [sp, #0xc]
    mov r2, #0
    ldr r7, =gGameState
    strb r2, [r1]
    ldrh r1, [r7, #0x8c]
    mov r5, r0
    ldrh r0, [r7, #0x8a]
    cmp r1, #1
    orreq r2, r2, #1
    cmp r0, #1
    orreq r2, r2, #2
    cmp r2, #3
    addls pc, pc, r2, lsl #2
    b @L_02054298
    b @L_02054234
    b @L_02054258
    b @L_0205426c
    b @L_02054280
@L_02054234:
    mov r0, #0x2a
    bl func_0209d8b8
    ldrh r3, [r7, #0x8a]
    mov r2, r0
    mov r1, #0x80
    str r3, [sp]
    ldrh r3, [r7, #0x8c]
    ldr r0, [sp, #0xc]
    b @L_02054294
@L_02054258:
    ldr r0, =0x193
    bl func_0209d8b8
    mov r2, r0
    ldrh r3, [r7, #0x8a]
    b @L_0205428c
@L_0205426c:
    mov r0, #0x194
    bl func_0209d8b8
    mov r2, r0
    ldrh r3, [r7, #0x8c]
    b @L_0205428c
@L_02054280:
    ldr r0, =0x195
    bl func_0209d8b8
    mov r2, r0
@L_0205428c:
    ldr r0, [sp, #0xc]
    mov r1, #0x80
@L_02054294:
    bl func_02017278
@L_02054298:
    ldrh r1, [r7, #0x8c]
    ldr r4, =data_020e88a0
    mov r0, r4
    rsb r1, r1, #0
    bl _ZN17UnkClass_020621b413func_020767ccEv
    ldrh r1, [r7, #0x8a]
    mov r0, r4
    rsb r1, r1, #0
    bl _ZN17UnkClass_020621b413func_020768a8Ev
    mov r1, #0
    strb r1, [r7, #0x89]
    strh r1, [r7, #0x8c]
    strh r1, [r7, #0x8a]
    ldr r4, =0x3004
    mov r7, #1
    str r1, [sp]
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_02052fd8
    mov r1, r0
    str r7, [sp]
    mov r0, #0xf
    str r0, [sp, #4]
    mov r0, r6
    sub r2, r4, #2
    mov r3, r7
    bl func_02052fd8
    mov r1, r0
    str r7, [sp]
    mov r0, #4
    str r0, [sp, #4]
    mov r0, r6
    add r2, r4, #0x67
    mov r3, r7
    bl func_02052fd8
    mov r1, r0
    mov r0, #2
    str r0, [sp]
    str r0, [sp, #4]
    str r0, [sp, #8]
    mov r0, r6
    add r2, r4, #0x18
    mov r3, r7
    bl func_02052fd8
    mov r1, r0
    str r7, [sp]
    add r2, r4, #0x19
    ldr r4, [sp, #0xc]
    mov r3, r7
    mov r0, r6
    str r4, [sp, #4]
    bl func_02052fd8
    mov r1, r0
    mov r0, r6
    bl func_02052eec
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void TreasureBox::func_02054398()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x70
    ldr r9, =gGameState
    mov r8, r0
    ldrh r1, [r9, #0x90]
    cmp r1, #0
    addeq sp, sp, #0x70
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =data_020e88a0
    add r2, sp, #0x10
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    cmp r0, #0
    addeq sp, sp, #0x70
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r7, #4
    mov r5, #0x80
    add r3, sp, #0xc
    mov r0, r8
    mov r1, r7
    mov r2, r5
    bl func_02052e0c
    mov r4, r0
    ldr r0, [sp, #0xc]
    mov r6, #0
    strb r6, [r0]
    mov r0, #0x2b
    bl func_0209d8b8
    mov r2, r0
    ldr r0, [sp, #0xc]
    mov r1, r5
    add r3, sp, #0x30
    bl func_02017278
    mov r5, #1
    mov r1, r4
    ldr r4, =0x3002
    str r5, [sp]
    mov r0, #0xf
    str r0, [sp, #4]
    mov r0, r8
    mov r3, r5
    mov r2, r4
    bl func_02052fd8
    mov r1, r0
    stmia sp, {r5, r7}
    mov r0, r8
    add r2, r4, #0x69
    mov r3, r5
    bl func_02052fd8
    mov r2, #2
    mov r1, r0
    str r2, [sp]
    mov r0, #3
    stmib sp, {r0, r2}
    mov r0, r8
    add r2, r4, #0x1a
    mov r3, r5
    bl func_02052fd8
    mov r1, r0
    str r5, [sp]
    add r2, r4, #0x1b
    ldr r4, [sp, #0xc]
    mov r3, r5
    mov r0, r8
    str r4, [sp, #4]
    bl func_02052fd8
    mov r1, r0
    mov r0, r8
    bl func_02052eec
    strh r6, [r9, #0x90]
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void TreasureBox::func_020544c0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x14
    mov r7, r0
    ldr r0, =data_020e88a0
    mov r1, #0x89
    mov r6, #0
    bl _ZN17UnkClass_020621b413func_020768fcEm
    mov r5, #0x80
    mov r8, r0
    add r3, sp, #0x10
    mov r0, r7
    mov r2, r5
    mov r1, #5
    bl func_02052e0c
    ldr r1, [sp, #0x10]
    mov r4, r0
    strb r6, [r1]
    mov r0, #0x2c
    bl func_0209d8b8
    mov r2, r0
    ldr r0, [sp, #0x10]
    mov r1, r5
    mov r3, r8
    bl func_02017278
    mov r5, #1
    mov r1, r4
    ldr r4, =0x3002
    str r5, [sp]
    mov r0, #0xf
    str r0, [sp, #4]
    mov r0, r7
    mov r3, r5
    mov r2, r4
    bl func_02052fd8
    mov r1, r0
    mov r0, #3
    stmia sp, {r0, r6}
    ldr r2, =data_020ae484
    mov r0, r7
    str r2, [sp, #8]
    str r6, [sp, #0xc]
    mov r3, r6
    add r2, r4, #0x15
    bl func_02052fd8
    mov r1, r0
    str r5, [sp]
    mov r6, #4
    mov r0, r7
    add r2, r4, #0x69
    mov r3, r5
    str r6, [sp, #4]
    bl func_02052fd8
    mov r1, r0
    mov r0, #2
    stmia sp, {r0, r6}
    str r0, [sp, #8]
    mov r0, r7
    add r2, r4, #0x1a
    mov r3, r5
    bl func_02052fd8
    mov r1, r0
    str r5, [sp]
    add r2, r4, #0x1b
    ldr r4, [sp, #0x10]
    mov r3, r5
    mov r0, r7
    str r4, [sp, #4]
    bl func_02052fd8
    mov r1, r0
    ldr r0, =gGameState
    ldrb r2, [r0, #0x135]
    add r2, r2, #1
    strb r2, [r0, #0x135]
    and r2, r2, #0xff
    cmp r2, #0x63
    movhi r2, #0x63
    strhib r2, [r0, #0x135]
    mov r0, r7
    bl func_02052eec
    ldr r0, =gGameState
    mov r1, #0
    strh r1, [r0, #0x90]
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void TreasureBox::func_02054620()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r4, #1
    bl _ZN12SceneManager13func_0203e30cEv
    cmp r0, #2
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r6, =data_020e88a0
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_0206dedcEv
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r9, #0x6000
    ldr r0, [r0, #0xa3c]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r0, #0x36
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_0207620cEv
    movs r7, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r8, #0
    mov r0, r6
    mov r1, r8
    bl _ZN17UnkClass_020621b413func_0206aa30Ei
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_0206bffcEv
    add r1, r9, #0x6000
    ldr r1, [r1, #0xa44]
    mov r5, r0
    cmp r1, #0x39
    bne @L_0205470c
    ldrsh r1, [r7]
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_020739ccEi
    mov r5, r0
    ldrsh r1, [r7, #2]
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_020739ccEi
    cmp r5, #0
    beq @L_020546dc
    ldrb r1, [r5]
    cmp r1, #5
    moveq r8, r4
@L_020546dc:
    cmp r0, #0
    beq @L_020546f0
    ldrb r0, [r0]
    cmp r0, #6
    moveq r8, #1
@L_020546f0:
    ldrb r0, [r7, #0x12]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    movne r8, #0
    b @L_0205474c
@L_0205470c:
    cmp r1, #0x3a
    bne @L_0205474c
    mov r0, r6
    bl func_ov015_02143664
    cmp r0, #0
    ldrnesh r1, [r0, #8]
    cmpne r1, #0
    beq @L_0205474c
    mov r0, r6
    bl _ZN17UnkClass_020621b413func_020739ccEi
    cmp r0, #0
    beq @L_0205474c
    ldrb r0, [r0]
    cmp r0, #7
    cmpeq r5, #1
    moveq r8, r4
@L_0205474c:
    cmp r8, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r9, #0x6000
    ldr r0, [r0, #0xa3c]
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl func_ov015_02132794
    cmp r0, #0
    bne @L_02054784
    bl func_ov015_0213290c
    cmp r0, #0
    beq @L_0205478c
@L_02054784:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0205478c:
    add r0, r9, #0x6a00
    ldrsb r0, [r0, #0x38]
    add r0, r9, r0, lsl #3
    add r0, r0, #0x6900
    ldrsb r0, [r0, #0xfc]
    cmp r0, #0
    bne @L_020547c8
    add r0, r9, #0x6000
    ldr r1, [r0, #0xa64]
    cmp r1, #0
    beq @L_020547c8
    ldr r1, [r0, #0xa78]
    cmp r1, #2
    streq r4, [r0, #0xa68]
    streq r4, [r0, #0xa6c]
@L_020547c8:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

TreasureBox *TreasureBox::func_020547d4()
{
    unk_2b58.func_02054854();
    unk_8c.func_020602ec();
    operator delete(this);
    return this;
}
