#include "game/TreasureBox.hpp"
#include "system/GameHeap.hpp"
#include "file/FileManager.hpp"
#include "nitro/mi.h"

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
extern "C" void func_02052444(void);
extern "C" void func_02052c68(void);
extern "C" void func_02052db8(void);
extern "C" void func_02054cd0(void);
extern "C" void func_02054d4c(void);
extern "C" void func_02054db4(void);
extern "C" void func_02060a48(void);
extern "C" void func_02060b58(void);
extern "C" void func_02060c80(void);
extern "C" void func_02060d14(void);
extern "C" void func_02060efc(void);
extern "C" void func_02060f54(void);
extern "C" void func_02061210(void);
extern "C" void func_02061258(void);
extern "C" void func_02061274(void);
extern "C" void func_020612b8(void);
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
extern "C" void func_02060294(void *);
extern "C" void func_02054800(void *);
extern "C" void func_02054aa8(void *);
extern "C" void func_02060310(void *);
extern "C" void func_02060864(void *, int, int, int, int);
extern "C" void func_02054620(TreasureBox *);
extern "C" void func_02054858(void *, u32, u32);
extern "C" void func_02054884(void *, TPData *);

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
    func_02060294(unk_8c);
    func_02054800(unk_2b58);
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

    func_02054aa8(unk_2b58);
    unk_6a60 = 1;
    unk_6a64 = 0;
    unk_6a54 = 0;
    unk_6a78 = 0;
    MI_CpuFill8(unk_69f8, 0, sizeof(unk_69f8));
    unk_6a39 = 0;
    unk_6a38 = unk_6a39;
    func_02060310(unk_8c);
    func_02060864(unk_8c, 0, 2, 0, 0);
    dest = &unk_6a80;
    LoadFile(data_020ae3ec, &dest);
}

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
    bl func_020612b8
    add r4, r4, #1
@L_02051e84:
    cmp r4, #1
    blt @L_02051e74
@L_02051e8c:
    add r0, r8, #0x358
    add r0, r0, #0x2800
    bl func_02054db4
    add r0, r8, #0x8c
    bl func_02060f54
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
    bl func_02060efc
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
    bl func_02054cd0
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
    bl func_02054db4
    add r0, r8, #0x8c
    bl func_02060f54
    cmp r0, #0
    addeq r0, r8, #0x6000
    ldreq r1, [r0, #0xa78]
    addeq r1, r1, #1
    b @L_02052278
@L_02051fb0:
    add r0, r8, #0x8c
    bl func_02061210
    add r0, r8, #0x358
    add r0, r0, #0x2800
    bl func_02054d4c
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
    bl func_02060b58
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
    bl func_02060c80
    cmp r0, #0
    beq @L_0205228c
    add r0, r8, #0x6000
    ldr r0, [r0, #0xa54]
    cmp r0, #0
    add r0, r8, #0x8c
    bne @L_020520f0
    bl func_02060d14
    add r1, r8, #0x6000
    str r0, [r1, #0xa54]
    cmp r0, #0
    bne @L_0205228c
    str r6, [r1, #0xa64]
    b @L_02052148
@L_020520f0:
    sub r1, r6, #1
    bl func_02060a48
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
    bl func_02061274
    b @L_02052240
@L_0205223c:
    bl func_02061258
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
    bl func_02054db4
    add r0, r8, #0x8c
    bl func_02060f54
    cmp r0, #0
    addeq r0, r8, #0x6000
    moveq r1, #3
@L_02052278:
    streq r1, [r0, #0xa78]
    b @L_0205228c
@L_02052280:
    add r0, r8, #0x358
    add r0, r0, #0x2800
    bl func_02054db4
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
        func_02054620(this);
    }
    func_02054858(unk_2b58, keys, arg);
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
        func_02054620(this);
    }
    func_02054884(unk_2b58, touch);
    return 0;
}

void TreasureBox::func_02052374()
{
}
