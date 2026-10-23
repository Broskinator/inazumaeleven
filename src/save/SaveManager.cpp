#include "save/SaveManager.hpp"
#include "game/UnkClass_020621b4.hpp"
#include "system/GameHeap.hpp"
#include "sound/SoundManager.hpp"
#include "game/TreasureBox.hpp"
#include "nitro/mi.h"
#include "nitro/std.h"
#include "nitro/card.h"

extern "C" void _ZN17UnkClass_020621b413func_0206b4b8Ei(void);     // (for the asm functions)
// (other systems, not decompiled yet)
extern GameHeap data_020c47b4;
extern "C" u8 data_020d3d20[];
extern "C" void *data_020c46cc;
extern "C" void *data_020c4678;
extern "C" u8 data_020c4638;
extern "C" void func_02081c3c(SaveBlock8 *block);
extern "C" void func_0209ac8c(void *obj, void *dst);
extern "C" void func_0209ae70(void *obj, void *src);
extern "C" void _ZN11TreasureBox13func_02052474EPv(void);     // (for the asm functions)
extern "C" void _ZN11TreasureBox13func_020524b0EPv(void);
extern "C" void _ZN12SoundManager9SaveStateEP10SoundState(void);
extern "C" void _ZN12SoundManager12RestoreStateEP10SoundState(void);
extern "C" void func_0206db10(void *obj, SaveBody *dst);
extern "C" void func_0206dcdc(void *obj, SaveBody *src);
extern "C" void func_02086988(void *obj, void *dst);
extern "C" void func_0208663c(void *obj, void *src);
extern "C" void func_0208e81c(void *obj, void *dst);
extern "C" void func_0208e844(void *obj, void *src);
extern "C" u8 func_0207ab64(void *obj, int unk);
extern "C" u8 func_0207aa94(void *obj, int unk);
extern "C" u32 func_020767bc(void *obj);
extern "C" u32 func_0206f04c(void *obj);
extern "C" u32 func_0206f034(void *obj);
extern "C" void *func_02085ba4(void *obj, u32 id);
extern "C" void func_020412f0(int unk);

#define CRC32_POLY 0x04C11DB7

#ifndef NONMATCHING
// (used by the asm functions)
extern "C" char data_020abbfc[];
extern "C" char data_020abc0c[];
extern "C" char data_020abc1c[];
extern "C" char data_020abc2c[];
extern "C" char data_020abc3c[];
extern "C" char data_020ca78c[];
extern "C" char data_020cab8c[];
extern "C" char data_020cac9c[];
extern "C" char data_020cacc8[];
extern "C" char data_020cadf4[];
extern "C" char data_020caf20[];
extern "C" char data_020cafe0[];
extern "C" char data_020cb096[];
extern "C" char data_020cb0a0[];
extern "C" char data_020cb0ac[];
extern "C" char data_020cb0e0[];
extern "C" char data_020cb0e4[];
extern "C" char data_020cb288[];
extern "C" char data_020cb6e0[];
extern "C" char data_020cb8e0[];
extern "C" char data_020cb91d[];
extern "C" void _ZN6Backup11IsWriteDoneEv(void);
extern "C" void _ZN6Backup4InitE14CARDBackupType(void);
extern "C" void _ZN6Backup4ReadEmmPv(void);
extern "C" void _ZN6Backup9IsPresentEv(void);
extern "C" void _ZN9GameState9LoadExtraEPv(void);
extern "C" void _ZN9GameState9SaveExtraEPv(void);
#endif

SaveManager::SaveManager()
{
}

SaveManager::~SaveManager()
{
}

// reads the system header (and creates it on a new or broken save memory)
// (nonmatching: constants are not propagated into the slot table loop)
#ifdef NONMATCHING
s32 SaveManager::Init()
{
    int i;
    u32 offset;
    const CARDRomHeader *rom;

    lastError = 0;
    MI_CpuFill8(&system, 0, sizeof(system));
    buffer = NULL;
    stack = NULL;
    state = 0;

    i = 0;
    slots[i].offset = 0;
    slots[i].size = sizeof(SaveSystemHeader);
    offset = sizeof(SaveSystemHeader);
    for (i = 0; i < SAVE_NUM_SLOTS; i++) {
        slots[i + 1].offset = offset;
        slots[i + 1].size = SAVE_SIZE_EXTRA;
        offset += (SAVE_SIZE_EXTRA + 7) & ~7;
    }

    if (!backup.Init(CARD_BACKUP_TYPE_NOT_USE)) {
        return SAVE_ERROR_NO_BACKUP;
    }
    if (!backup.IsPresent()) {
        return SAVE_ERROR_NOT_PRESENT;
    }

    rom = CARD_GetOwnRomHeader();
    if (!backup.Read(slots[0].offset, slots[0].size, &system)) {
        return SAVE_ERROR_ACCESS;
    }

    if (system.crc != Crc32(&system.signature, sizeof(system) - sizeof(system.crc))) {
        if ((system.magic != SAVE_MAGIC && system.size != sizeof(SaveSystemHeader))
            && STD_CompareString(system.signature, SAVE_SIGNATURE) != 0) {
            // a new save memory
            MI_CpuFill8(&system, 0, sizeof(system));
            system.gameCode = rom->game_code;
            system.magic = SAVE_MAGIC;
            system.size = sizeof(SaveSystemHeader);
            func_02081c3c(&gGameState.block8);
            system.unk_20 = gGameState.block8.data[2];
            STD_CopyString(system.signature, SAVE_SIGNATURE);
            if (!WriteSystemHeader()) {
                return SAVE_ERROR_ACCESS;
            }
        } else {
            // a broken header
            MI_CpuFill8(&system, 0, sizeof(system));
            system.gameCode = rom->game_code;
            system.magic = SAVE_MAGIC;
            system.size = sizeof(SaveSystemHeader);
            func_02081c3c(&gGameState.block8);
            system.unk_20 = gGameState.block8.data[2];
            STD_CopyString(system.signature, SAVE_SIGNATURE);
            WriteSystemHeader();
            return SAVE_ERROR_CHECKSUM;
        }
    } else if (system.magic != SAVE_MAGIC || system.size != sizeof(SaveSystemHeader)
        || STD_CompareString(system.signature, SAVE_SIGNATURE) != 0) {
        MI_CpuFill8(&system, 0, sizeof(system));
        system.gameCode = rom->game_code;
        system.magic = SAVE_MAGIC;
        system.size = sizeof(SaveSystemHeader);
        func_02081c3c(&gGameState.block8);
        system.unk_20 = gGameState.block8.data[2];
        STD_CopyString(system.signature, SAVE_SIGNATURE);
        if (!WriteSystemHeader()) {
            return SAVE_ERROR_ACCESS;
        }
    }

    return 0;
}
#else
asm s32 SaveManager::Init()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, #0
    mov r6, #0x40
    mov r7, r0
    mov r1, r4
    mov r2, r6
    strb r4, [r7, #0x152]
    mov r5, r4
    bl MI_CpuFill8
    str r4, [r7, #0x44]
    str r4, [r7, #0x148]
    str r4, [r7, #0x14c]
    add r0, r7, r4, lsl #3
    str r4, [r0, #0x78]
    str r6, [r0, #0x7c]
    add r3, r4, #0x40
    add r6, r4, #1
    ldr r1, =0xcfd4
    b @L_020381b8
@L_02038198:
    add r2, r7, r6, lsl #3
    add r0, r1, #7
    str r3, [r2, #0x78]
    bic r0, r0, #7
    str r1, [r2, #0x7c]
    add r3, r3, r0
    add r4, r4, #1
    add r6, r6, #1
@L_020381b8:
    cmp r4, #1
    blt @L_02038198
    mov r1, r5
    add r0, r7, #0x4c
    bl _ZN6Backup4InitE14CARDBackupType
    cmp r0, #0
    subeq r0, r5, #0x7e
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r7, #0x4c
    bl _ZN6Backup9IsPresentEv
    cmp r0, #0
    subeq r0, r5, #0x7d
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    bl CARD_GetOwnRomHeader
    mov r6, r0
    ldr r1, [r7, #0x78]
    ldr r2, [r7, #0x7c]
    mov r3, r7
    add r0, r7, #0x4c
    bl _ZN6Backup4ReadEmmPv
    cmp r0, #0
    subeq r0, r5, #0x7c
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r7
    add r1, r7, #4
    mov r2, #0x3c
    bl Crc32
    ldr r1, [r7]
    cmp r1, r0
    beq @L_02038310
    ldr r0, [r7, #0x18]
    ldr r8, =0x19150a04
    cmp r0, r8
    ldrne r0, [r7, #0x1c]
    cmpne r0, #0x40
    beq @L_020382b8
    ldr r1, =data_020abbfc
    add r0, r7, #4
    bl STD_CompareString
    cmp r0, #0
    beq @L_020382b8
    mov r4, #0x40
    mov r0, r7
    mov r1, r5
    mov r2, r4
    bl MI_CpuFill8
    ldr r1, [r6, #0xc]
    ldr r0, =data_020cb0a0
    str r1, [r7, #0x14]
    str r8, [r7, #0x18]
    str r4, [r7, #0x1c]
    bl func_02081c3c
    ldr r0, =gGameState
    ldr r1, =data_020abc0c
    ldr r2, [r0, #0x9c8]
    add r0, r7, #4
    str r2, [r7, #0x20]
    bl STD_CopyString
    mov r0, r7
    bl WriteSystemHeader
    cmp r0, #0
    bne @L_02038398
    sub r0, r4, #0xbc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_020382b8:
    mov r4, #0x40
    mov r0, r7
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    ldr r2, [r6, #0xc]
    ldr r1, =0x19150a04
    ldr r0, =data_020cb0a0
    str r2, [r7, #0x14]
    str r1, [r7, #0x18]
    str r4, [r7, #0x1c]
    bl func_02081c3c
    ldr r0, =gGameState
    ldr r1, =data_020abc1c
    ldr r2, [r0, #0x9c8]
    add r0, r7, #4
    str r2, [r7, #0x20]
    bl STD_CopyString
    mov r0, r7
    bl WriteSystemHeader
    sub r0, r4, #0xba
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02038310:
    ldr r1, [r7, #0x18]
    ldr r0, =0x19150a04
    cmp r1, r0
    ldreq r0, [r7, #0x1c]
    cmpeq r0, #0x40
    bne @L_0203833c
    ldr r1, =data_020abc2c
    add r0, r7, #4
    bl STD_CompareString
    cmp r0, #0
    beq @L_02038398
@L_0203833c:
    mov r4, #0x40
    mov r0, r7
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    ldr r2, [r6, #0xc]
    ldr r1, =0x19150a04
    ldr r0, =data_020cb0a0
    str r2, [r7, #0x14]
    str r1, [r7, #0x18]
    str r4, [r7, #0x1c]
    bl func_02081c3c
    ldr r0, =gGameState
    ldr r1, =data_020abc3c
    ldr r2, [r0, #0x9c8]
    add r0, r7, #4
    str r2, [r7, #0x20]
    bl STD_CopyString
    mov r0, r7
    bl WriteSystemHeader
    cmp r0, #0
    subeq r0, r4, #0xbc
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_02038398:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
#endif

BOOL SaveManager::IsDone()
{
    if (state == 1 && loadAsync == FALSE) {
        return FALSE;
    }

    return backup.IsWriteDone();
}

// which slots hold a save (bit field)
s32 SaveManager::GetSlots()
{
    s32 slots;

    if (!backup.IsPresent()) {
        return SAVE_ERROR_NOT_PRESENT;
    }

    slots = 0;
    if (system.slotUsed[0]) {
        slots |= 1;
    }
    return slots;
}

BOOL SaveManager::WriteSystemHeader()
{
    DC_FlushRange(&system, sizeof(system));
    system.crc = Crc32(&system.signature, sizeof(system) - sizeof(system.crc));
    DC_FlushRange(&system, sizeof(system));
    return backup.Write(slots[0].offset, slots[0].size, &system) != FALSE;
}

BOOL SaveManager::WriteSlot(int slot, SaveFile *file, BOOL async, u32 size)
{
    u32 offset = slots[slot + 1].offset;

    if (async) {
        if (!backup.WriteAsync(offset, size, file)) {
            return FALSE;
        }
    } else {
        if (!backup.Write(offset, size, file)) {
            return FALSE;
        }
        FinishSave();
    }

    return TRUE;
}

// saves the game state in a slot
// (nonmatching: registers, and how the slot flag and buffer size are computed)
#ifdef NONMATCHING
s32 SaveManager::Save(int slot, BOOL async)
{
    SaveFile *file;
    SaveBody *body;
    u8 *extra;
    BOOL saveExtra;
    u32 size;
    SaveTeam team;
    int i;

    saveExtra = (gGameState.extra != NULL) ? TRUE : FALSE;
    if (system.dirty) {
        system.dirty = FALSE;
        saveExtra = TRUE;
    }

    if (state == 1) {
        return 1;
    }

    if (!backup.IsPresent()) {
        lastError = SAVE_ERROR_NOT_PRESENT;
        return lastError;
    }

    file = (SaveFile *)Alloc(SAVE_BUFFER_SIZE);
    buffer = file;
    if (file == NULL) {
        lastError = SAVE_ERROR_NO_MEMORY;
        return lastError;
    }

    body = &file->body;
    size = saveExtra ? SAVE_BUFFER_SIZE : SAVE_SIZE_EXTRA;
    extra = (u8 *)(body + 1);

    body->block0 = gGameState.block0;
    body->profile = gGameState.profile;
    body->block2 = gGameState.block2;
    body->block3 = gGameState.block3;
    body->block4 = gGameState.block4;
    body->block5 = gGameState.block5;
    body->block6 = gGameState.block6;
    body->block7 = gGameState.block7;
    body->block8 = gGameState.block8;
    body->block9 = gGameState.block9;
    body->block10 = gGameState.block10;
    body->block11 = gGameState.block11;
    body->block12 = gGameState.block12;
    func_0209ac8c(data_020d3d20, body->unk_49FC);
    data_020d9978.func_02052474(body->unk_5338);
    data_020c5e40.SaveState(&body->soundState);
    func_0206db10(&data_020e88a0, body);
    func_02086988(data_020c46cc, body->unk_3DDC);
    func_0208e81c(data_020c4678, body->unk_43FC);
    gGameState.SaveExtra(extra);
    body->unk_7D14 = gGameState.unk_1238;
    body->unk_7D16 = gGameState.unk_123A;
    body->unk_7D18 = gGameState.unk_123C;
    body->block13 = gGameState.block13;
    DC_FlushRange(body, sizeof(SaveBody));

    file->header.magic = SAVE_MAGIC;
    file->header.bodyCrc = Crc32(body, sizeof(SaveBody));
    file->header.size = SAVE_SIZE;
    file->header.extraSize = GAME_EXTRA_SIZE;
    file->header.playTime = gGameState.profile.playTime;
    file->header.unk_14 = gGameState.profile.unk_4A;
    file->header.unk_15 = data_020e88a0.func_0206b4b8(0);
    file->header.unk_16 = func_0207ab64(&data_020e88a0, 0);
    file->header.unk_17 = func_0207aa94(&data_020e88a0, 0);
    file->header.unk_18 = func_020767bc(&data_020e88a0);
    file->header.unk_48 = gGameState.profile.unk_24;
    file->header.unk_45 = gGameState.profile.unk_2C;
    file->header.unk_54 = func_0206f04c(&data_020e88a0);
    func_0206f034(&data_020e88a0);
    STD_CopyString(file->header.name, gGameState.profile.name);
    STD_CopyString(file->header.unk_34, body->unk_3D4C);

    if (saveExtra) {
        file->header.extraCrc = Crc32(extra, GAME_EXTRA_SIZE);
    } else {
        file->header.extraCrc = gGameState.extraCrc;
    }
    gGameState.extraCrc = file->header.extraCrc;

    team = body->team;
    for (i = 0; i < team.count; i++) {
        file->header.members[i] = *(u16 *)((u8 *)func_02085ba4(data_020c46cc, team.ids[i]) + 0x20);
    }

    DC_FlushRange(&file->header, sizeof(SaveHeader));
    file->header.crc = Crc32(&file->header.bodyCrc, sizeof(SaveHeader) - sizeof(u32));
    DC_FlushRange(file, size);

    if (!system.slotUsed[slot] || unk_40 == 1) {
        system.slotUsed[slot] = TRUE;
        unk_40 = 0;
        if (!WriteSystemHeader()) {
            Free(file);
            lastError = SAVE_ERROR_ACCESS;
            buffer = NULL;
            return lastError;
        }
    }

    bufferIsExternal = FALSE;
    if (WriteSlot(slot, file, async, size)) {
        lastError = 0;
        return lastError;
    }

    Free(file);
    lastError = SAVE_ERROR_ACCESS;
    buffer = NULL;
    return lastError;
}
#else
asm s32 SaveManager::Save(int slot, BOOL async)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r3, =data_020cb6e0
    mov r8, r0
    ldr r0, [r3, #0x26c]
    mov r7, r1
    cmp r0, #0
    ldrb r1, [r8, #0x25]
    mov r6, #1
    mov r0, #0
    moveq r6, r0
    cmp r1, #0
    strneb r0, [r8, #0x25]
    ldr r0, [r8, #0x14c]
    movne r6, #1
    cmp r0, #1
    str r2, [sp, #4]
    addeq sp, sp, #0x20
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r8, #0x4c
    bl _ZN6Backup9IsPresentEv
    cmp r0, #0
    mvneq r0, #0x7c
    streqb r0, [r8, #0x152]
    addeq r0, r8, #0x100
    addeq sp, sp, #0x20
    ldreqsb r0, [r0, #0x52]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =0xffc0
    mov r0, r8
    bl Alloc
    movs r4, r0
    mvneq r0, #0x78
    streqb r0, [r8, #0x152]
    addeq r0, r8, #0x100
    addeq sp, sp, #0x20
    str r4, [r8, #0x44]
    ldreqsb r0, [r0, #0x52]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r11, =0xcfd4
    add r5, r4, #0x80
    cmp r6, #0
    ldreq r11, =0x7dc4
    ldr r10, =data_020ca78c
    add r9, r5, #0x144
    mov r3, r5
    mov r2, #0x200
@L_020385a0:
    ldrb r1, [r10]
    ldrb r0, [r10, #1]
    add r10, r10, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_020385a0
    ldr lr, =data_020cab8c
    add r12, r5, #0x400
    mov r10, #0x11
@L_020385c8:
    ldmia lr!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    subs r10, r10, #1
    bne @L_020385c8
    ldr r10, =data_020cac9c
    add r3, r5, #0x510
    mov r2, #0x14
@L_020385e4:
    ldrb r1, [r10]
    ldrb r0, [r10, #1]
    add r10, r10, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_020385e4
    ldr r2, =gGameState
    add r1, r5, #0x13c
    ldrb r12, [r2, #0x5e4]
    ldrb r3, [r2, #0x5e5]
    add r10, r1, #0x400
    ldr r0, =data_020cacc8
    strb r12, [r5, #0x538]
    strb r3, [r5, #0x539]
    ldrb r12, [r2, #0x5e6]
    ldrb r1, [r2, #0x5e7]
    mov r3, #0x96
    strb r12, [r5, #0x53a]
    strb r1, [r5, #0x53b]
@L_02038634:
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    add r0, r0, #2
    subs r3, r3, #1
    strb r1, [r10, #1]
    strb r2, [r10], #2
    bne @L_02038634
    add r0, r5, #0x268
    ldr r10, =data_020cadf4
    add r3, r0, #0x400
    mov r2, #0x96
@L_02038660:
    ldrb r1, [r10]
    ldrb r0, [r10, #1]
    add r10, r10, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02038660
    add r0, r5, #0x394
    ldr r10, =data_020caf20
    add r3, r0, #0x400
    mov r2, #0xbb
@L_0203868c:
    ldrb r1, [r10]
    ldrb r0, [r10, #1]
    add r10, r10, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0203868c
    add r0, r5, #0xa
    ldr r10, =data_020cb096
    add r3, r0, #0x900
    mov r2, #4
@L_020386b8:
    ldrb r1, [r10]
    ldrb r0, [r10, #1]
    add r10, r10, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_020386b8
    add r0, r5, #0x114
    ldr r1, =data_020cb0a0
    add r3, r0, #0x800
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r10, =data_020cb0ac
    add r0, r5, #0x920
    mov r3, #0xa
@L_020386f4:
    ldrh r2, [r10]
    ldrh r1, [r10, #2]
    add r10, r10, #4
    subs r3, r3, #1
    strh r1, [r0, #2]
    strh r2, [r0], #4
    bne @L_020386f4
    ldrh r2, [r10]
    add r10, r5, #0x158
    ldr r1, =data_020cafe0
    strh r2, [r0]
    ldrh r3, [r1, #0xf6]
    ldrh r2, [r1, #0xf8]
    add r0, r5, #0x900
    add r12, r10, #0x800
    strh r3, [r0, #0x4a]
    strh r2, [r0, #0x4c]
    ldrh r3, [r1, #0xfa]
    ldrh r2, [r1, #0xfc]
    ldr lr, =data_020cb0e4
    mov r10, #0x1a
    strh r3, [r0, #0x4e]
    strh r2, [r0, #0x50]
    ldr r2, =data_020cb0e0
    ldrh r1, [r1, #0xfe]
    ldrh r2, [r2]
    strh r1, [r0, #0x52]
    strh r2, [r0, #0x54]
@L_02038764:
    ldmia lr!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    subs r10, r10, #1
    bne @L_02038764
    ldr r1, [lr]
    add r0, r5, #0x2fc
    str r1, [r12]
    ldr r10, =data_020cb288
    add lr, r0, #0x800
    mov r12, #0x69
@L_0203878c:
    ldmia r10!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs r12, r12, #1
    bne @L_0203878c
    add r1, r5, #0x1fc
    ldr r0, =data_020d3d20
    add r1, r1, #0x4800
    bl func_0209ac8c
    add r1, r5, #0x338
    ldr r0, =data_020d9978
    add r1, r1, #0x5000
    bl _ZN11TreasureBox13func_02052474EPv
    add r1, r5, #0x44
    ldr r0, =data_020c5e40
    add r1, r1, #0x7c00
    bl _ZN12SoundManager9SaveStateEP10SoundState
    ldr r0, =data_020e88a0
    mov r1, r5
    bl func_0206db10
    ldr r0, =data_020c46cc
    add r1, r5, #0x1dc
    ldr r0, [r0]
    add r1, r1, #0x3c00
    bl func_02086988
    ldr r0, =data_020c4678
    add r1, r5, #0x3fc
    ldr r0, [r0]
    add r1, r1, #0x4000
    bl func_0208e81c
    ldr r0, =gGameState
    add r1, r9, #0x7c00
    bl _ZN9GameState9SaveExtraEPv
    ldr r0, =data_020cb8e0
    add r1, r5, #0x7d00
    ldrsh r2, [r0, #0x38]
    ldr r10, =data_020cb6e0
    add r3, r5, #0x7000
    strh r2, [r1, #0x14]
    ldrsh r12, [r0, #0x3a]
    add r2, r5, #0x19
    ldr r0, =data_020cb91d
    strh r12, [r1, #0x16]
    ldrb r1, [r10, #0x23c]
    add r2, r2, #0x7d00
    mov r10, #0x15
    strb r1, [r3, #0xd18]
@L_02038844:
    ldrb r3, [r0]
    ldrb r1, [r0, #1]
    add r0, r0, #2
    subs r10, r10, #1
    strb r1, [r2, #1]
    strb r3, [r2], #2
    bne @L_02038844
    ldrb r3, [r0]
    ldr r10, =0x7d44
    mov r0, r5
    mov r1, r10
    strb r3, [r2]
    bl DC_FlushRange
    ldr r1, =0x19150a04
    mov r0, r8
    str r1, [r4, #8]
    mov r1, r5
    mov r2, r10
    bl Crc32
    add r1, r10, #0x80
    str r0, [r4, #4]
    ldr r10, =gGameState
    ldr r0, =0x5210
    str r1, [r4, #0xc]
    str r0, [r4, #0x50]
    ldr r0, [r10, #0x4c8]
    str r0, [r4, #0x10]
    ldrb r1, [r10, #0x4f6]
    ldr r0, =data_020e88a0
    strb r1, [r4, #0x14]
    mov r1, #0
    bl _ZN17UnkClass_020621b413func_0206b4b8Ei
    strb r0, [r4, #0x15]
    ldr r0, =data_020e88a0
    mov r1, #0
    bl func_0207ab64
    strb r0, [r4, #0x16]
    ldr r0, =data_020e88a0
    mov r1, #0
    bl func_0207aa94
    strb r0, [r4, #0x17]
    ldr r0, =data_020e88a0
    bl func_020767bc
    str r0, [r4, #0x18]
    ldr r1, [r10, #0x4d0]
    add r0, r10, #0x400
    str r1, [r4, #0x48]
    ldrsb r1, [r0, #0xd8]
    ldr r0, =data_020e88a0
    strb r1, [r4, #0x45]
    bl func_0206f04c
    str r0, [r4, #0x54]
    ldr r0, =data_020e88a0
    bl func_0206f034
    ldr r1, =data_020cab8c
    add r0, r4, #0x1c
    bl STD_CopyString
    add r1, r5, #0x14c
    add r0, r4, #0x34
    add r1, r1, #0x3c00
    bl STD_CopyString
    cmp r6, #0
    ldreq r0, =data_020cb6e0
    ldreq r0, [r0, #0x270]
    beq @L_02038958
    ldr r2, =0x5210
    mov r0, r8
    add r1, r9, #0x7c00
    bl Crc32
@L_02038958:
    ldr r1, =data_020cb6e0
    str r0, [r4, #0x4c]
    mov r2, r0
    add r0, r5, #0x3dc
    add r5, sp, #8
    str r2, [r1, #0x270]
    add r6, r0, #0x4000
    mov r9, r5
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1}
    mov r10, #0
    stmia r5, {r0, r1}
    mov r6, r10
    ldr r5, =data_020c46cc
    b @L_020389b4
@L_02038998:
    ldr r1, [r9, r10, lsl #2]
    ldr r0, [r5]
    bl func_02085ba4
    add r1, r4, r10, lsl #1
    ldrh r0, [r0, #0x20]
    add r10, r10, #1
    strh r0, [r1, #0x58]
@L_020389b4:
    ldrsb r0, [sp, #0x1c]
    cmp r10, r0
    blt @L_02038998
    mov r0, r4
    mov r1, #0x80
    bl DC_FlushRange
    mov r0, r8
    add r1, r4, #4
    mov r2, #0x7c
    bl Crc32
    str r0, [r4]
    mov r0, r4
    mov r1, r11
    bl DC_FlushRange
    add r0, r8, r7
    ldrb r0, [r0, #0x24]
    cmp r0, #0
    beq @L_02038a08
    ldrb r0, [r8, #0x40]
    cmp r0, #1
    bne @L_02038a50
@L_02038a08:
    add r0, r8, r7
    mov r1, #1
    strb r1, [r0, #0x24]
    mov r0, r8
    strb r6, [r8, #0x40]
    bl WriteSystemHeader
    cmp r0, #0
    bne @L_02038a50
    mov r0, r8
    mov r1, r4
    bl Free
    sub r0, r6, #0x7c
    strb r0, [r8, #0x152]
    add r0, r8, #0x100
    add sp, sp, #0x20
    str r6, [r8, #0x44]
    ldrsb r0, [r0, #0x52]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02038a50:
    str r6, [r8, #0x48]
    ldr r3, [sp, #4]
    mov r0, r8
    mov r1, r7
    mov r2, r4
    str r11, [sp]
    bl WriteSlot
    cmp r0, #0
    strneb r6, [r8, #0x152]
    addne r0, r8, #0x100
    addne sp, sp, #0x20
    ldrnesb r0, [r0, #0x52]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r8
    mov r1, r4
    bl Free
    sub r0, r6, #0x7c
    strb r0, [r8, #0x152]
    add r0, r8, #0x100
    ldrsb r0, [r0, #0x52]
    str r6, [r8, #0x44]
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

// saves a file filled by the caller
// (nonmatching: registers, and how the slot flag is addressed)
#ifdef NONMATCHING
s32 SaveManager::SaveFileTo(int slot, SaveFile *file, BOOL async)
{
    BOOL saveExtra;
    u32 size;
    u8 *extra;

    saveExtra = (gGameState.extra != NULL) ? TRUE : FALSE;

    if (state == 1) {
        return 1;
    }

    if (!backup.IsPresent()) {
        lastError = SAVE_ERROR_NOT_PRESENT;
        return lastError;
    }

    size = SAVE_SIZE_EXTRA;
    buffer = file;
    extra = file->extra;
    if (!saveExtra) {
        size = SAVE_SIZE;
    }

    DC_FlushRange(&file->body, SAVE_BUFFER_SIZE);
    file->header.magic = SAVE_MAGIC;
    file->header.bodyCrc = Crc32(&file->body, sizeof(SaveBody));
    file->header.size = SAVE_SIZE;
    file->header.extraSize = GAME_EXTRA_SIZE;
    file->header.unk_18 = file->body.profile.unk_14;
    file->header.playTime = gGameState.playTime;
    file->header.unk_14 = file->body.profile.unk_4A;
    file->header.unk_48 = gGameState.profile.unk_24;
    file->header.unk_45 = gGameState.profile.unk_2C;
    STD_CopyString(file->header.name, file->body.profile.name);
    STD_CopyString(file->header.unk_34, file->body.unk_3D4C);

    if (saveExtra) {
        file->header.extraCrc = Crc32(extra, GAME_EXTRA_SIZE);
    } else {
        file->header.extraCrc = gGameState.extraCrc;
    }
    gGameState.extraCrc = file->header.extraCrc;

    DC_FlushRange(&file->header, sizeof(SaveHeader));
    file->header.crc = Crc32(&file->header.bodyCrc, sizeof(SaveHeader) - sizeof(u32));
    DC_FlushRange(&file->header, sizeof(SaveHeader));

    if (!system.slotUsed[slot]) {
        system.slotUsed[slot] = TRUE;
        if (!WriteSystemHeader()) {
            Free(file);
            lastError = SAVE_ERROR_ACCESS;
            buffer = NULL;
            return lastError;
        }
    }

    bufferIsExternal = TRUE;
    if (WriteSlot(slot, file, async, size)) {
        lastError = 0;
        return lastError;
    }

    Free(file);
    lastError = SAVE_ERROR_ACCESS;
    buffer = NULL;
    return lastError;
}
#else
asm s32 SaveManager::SaveFileTo(int slot, SaveFile *file, BOOL async)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r4, =data_020cb6e0
    mov r10, r0
    ldr r0, [r4, #0x26c]
    mov r5, #1
    cmp r0, #0
    ldr r0, [r10, #0x14c]
    moveq r5, #0
    cmp r0, #1
    mov r9, r1
    mov r8, r2
    mov r7, r3
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r10, #0x4c
    bl _ZN6Backup9IsPresentEv
    cmp r0, #0
    mvneq r0, #0x7c
    streqb r0, [r10, #0x152]
    addeq r0, r10, #0x100
    ldreqsb r0, [r0, #0x52]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r6, =0xcfd4
    ldr r1, =0xffc0
    cmp r5, #0
    add r0, r8, #0x80
    str r8, [r10, #0x44]
    add r4, r8, #0x1c4
    ldreq r6, =0x7dc4
    bl DC_FlushRange
    ldr r1, =0x19150a04
    ldr r2, =0x7d44
    str r1, [r8, #8]
    mov r0, r10
    add r1, r8, #0x80
    bl Crc32
    ldr r1, =0x7d44
    ldr r11, =0x5210
    add r1, r1, #0x80
    str r0, [r8, #4]
    str r1, [r8, #0xc]
    ldr r0, =data_020cb6e0
    str r11, [r8, #0x50]
    ldr r3, [r0, #0x284]
    ldrb r2, [r8, #0x4ca]
    ldr r0, [r8, #0x494]
    ldr r1, =gGameState
    str r0, [r8, #0x18]
    str r3, [r8, #0x10]
    strb r2, [r8, #0x14]
    ldr r2, [r1, #0x4d0]
    add r0, r1, #0x400
    str r2, [r8, #0x48]
    ldrsb r2, [r0, #0xd8]
    add r0, r8, #0x1c
    add r1, r8, #0x480
    strb r2, [r8, #0x45]
    bl STD_CopyString
    add r1, r8, #0x1cc
    add r0, r8, #0x34
    add r1, r1, #0x3c00
    bl STD_CopyString
    cmp r5, #0
    ldreq r0, =data_020cb6e0
    ldreq r0, [r0, #0x270]
    beq @L_02038c38
    mov r0, r10
    mov r2, r11
    add r1, r4, #0x7c00
    bl Crc32
@L_02038c38:
    mov r4, #0x80
    ldr r2, =data_020cb6e0
    str r0, [r8, #0x4c]
    mov r3, r0
    mov r0, r8
    mov r1, r4
    str r3, [r2, #0x270]
    bl DC_FlushRange
    mov r0, r10
    add r1, r8, #4
    mov r2, #0x7c
    bl Crc32
    str r0, [r8]
    mov r0, r8
    mov r1, r4
    bl DC_FlushRange
    add r2, r10, r9
    ldrb r0, [r2, #0x24]
    cmp r0, #0
    bne @L_02038cc8
    mov r1, #1
    mov r0, r10
    strb r1, [r2, #0x24]
    bl WriteSystemHeader
    cmp r0, #0
    bne @L_02038cc8
    mov r0, r10
    mov r1, r8
    bl Free
    mov r1, #0
    sub r0, r1, #0x7c
    strb r0, [r10, #0x152]
    add r0, r10, #0x100
    str r1, [r10, #0x44]
    ldrsb r0, [r0, #0x52]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02038cc8:
    mov r0, #1
    str r0, [r10, #0x48]
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r7
    str r6, [sp]
    bl WriteSlot
    cmp r0, #0
    movne r0, #0
    strneb r0, [r10, #0x152]
    addne r0, r10, #0x100
    ldrnesb r0, [r0, #0x52]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r8
    bl Free
    mov r1, #0
    sub r0, r1, #0x7c
    strb r0, [r10, #0x152]
    add r0, r10, #0x100
    ldrsb r0, [r0, #0x52]
    str r1, [r10, #0x44]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

// waits for an asynchronous save: 1 while it is not done
s32 SaveManager::FinishSave()
{
    if (buffer == NULL) {
        return 0;
    }
    if (!backup.IsWriteDone()) {
        return 1;
    }

    if (!bufferIsExternal) {
        Free(buffer);
    }
    buffer = NULL;

    if (CARD_GetResultCode() != CARD_RESULT_SUCCESS) {
        return SAVE_ERROR_ACCESS;
    }
    return lastError;
}

s32 SaveManager::ReadSlotHeader(int slot, SaveHeader *header)
{
    if (!backup.IsPresent()) {
        return SAVE_ERROR_NOT_PRESENT;
    }
    if (header == NULL) {
        return SAVE_ERROR_NO_MEMORY;
    }

    MI_CpuFill8(header, 0, sizeof(SaveHeader));
    if (!system.slotUsed[slot]) {
        return SAVE_ERROR_NO_SLOT;
    }
    if (state == 1) {
        return 1;
    }
    if (!backup.Read(slots[slot + 1].offset, sizeof(SaveHeader), header)) {
        return SAVE_ERROR_ACCESS;
    }

    DC_FlushRange(header, sizeof(SaveHeader));
    if (header->magic != SAVE_MAGIC) {
        system.slotUsed[slot] = FALSE;
        system.dirty = TRUE;
        WriteSystemHeader();
        return SAVE_ERROR_FORMAT;
    }

    if (header->crc != Crc32(&header->bodyCrc, sizeof(SaveHeader) - sizeof(u32))) {
        system.slotUsed[slot] = FALSE;
        system.dirty = TRUE;
        WriteSystemHeader();
        return SAVE_ERROR_CHECKSUM;
    }

    return 0;
}

// loads a slot into the game state
s32 SaveManager::Load(int slot, BOOL async)
{
    SaveFile *file;

    if (!system.slotUsed[slot]) {
        return SAVE_ERROR_NO_SLOT;
    }
    if (state == 1) {
        return 1;
    }
    if (!backup.IsPresent()) {
        return SAVE_ERROR_NOT_PRESENT;
    }

    file = (SaveFile *)Alloc(SAVE_BUFFER_SIZE);
    buffer = file;
    if (file == NULL) {
        return SAVE_ERROR_NO_MEMORY;
    }
    bufferIsExternal = FALSE;

    if (async) {
        loadAsync = TRUE;
        loadSlot = slot;
        state = 1;
        stack = Alloc(0xC00);
        OS_CreateThread(&thread, LoadThreadMain, this, (u8 *)stack + 0xC00, 0xC00, 30);
        OS_SetThreadStackWarningOffset(&thread, 0x100);
        OS_WakeupThreadDirect(&thread);
    } else {
        if (!backup.Read(slots[slot + 1].offset, slots[slot + 1].size, file)) {
            Free(file);
            buffer = NULL;
            return SAVE_ERROR_ACCESS;
        }
        return ApplyLoad(slot);
    }

    return 0;
}

// reads a slot into a file of the caller (the game state does not change)
s32 SaveManager::LoadInto(int slot, SaveFile *file, BOOL async)
{
    if (!system.slotUsed[slot]) {
        return SAVE_ERROR_NO_SLOT;
    }
    if (state == 1) {
        return 1;
    }
    if (!backup.IsPresent()) {
        return SAVE_ERROR_NOT_PRESENT;
    }

    buffer = file;
    bufferIsExternal = TRUE;

    if (async) {
        loadAsync = TRUE;
        loadSlot = slot;
        state = 1;
        stack = Alloc(0xC00);
        OS_CreateThread(&thread, LoadThreadMain, this, (u8 *)stack + 0xC00, 0xC00, 30);
        OS_SetThreadStackWarningOffset(&thread, 0x100);
        OS_WakeupThreadDirect(&thread);
    } else {
        if (!backup.Read(slots[slot + 1].offset, slots[slot + 1].size, file)) {
            return SAVE_ERROR_ACCESS;
        }
        return ApplyLoad(slot);
    }

    return 0;
}

// whether the loading thread is still running (its result when it is done)
s32 SaveManager::IsLoading()
{
    if (stack == NULL) {
        return 0;
    }
    if (!OS_IsThreadTerminated(&thread)) {
        return 1;
    }

    Free(stack);
    stack = NULL;
    return state;
}

// checks the file read and copies it into the game state
// (nonmatching: registers)
#ifdef NONMATCHING
s32 SaveManager::ApplyLoad(int slot)
{
    SaveFile *file;
    SaveBody *body;
    u8 *extra;
    s32 result;

    if (buffer == NULL) {
        return 0;
    }
    if (!backup.IsWriteDone()) {
        return 1;
    }

    file = buffer;
    body = &file->body;
    extra = (u8 *)(body + 1);
    DC_FlushRange(file, SAVE_BUFFER_SIZE);

    result = Verify(&file->header, body, extra);
    if (result != 0) {
        Free(file);
        buffer = NULL;
        system.slotUsed[slot] = FALSE;
        system.dirty = TRUE;
        WriteSystemHeader();
        return result;
    }

    if (!bufferIsExternal) {
        gGameState.block0 = body->block0;
        gGameState.profile = body->profile;
        gGameState.block2 = body->block2;
        gGameState.block3 = body->block3;
        gGameState.block4 = body->block4;
        gGameState.block5 = body->block5;
        gGameState.block6 = body->block6;
        gGameState.block7 = body->block7;
        gGameState.block8 = body->block8;
        gGameState.block9 = body->block9;
        gGameState.block10 = body->block10;
        gGameState.block11 = body->block11;
        gGameState.block12 = body->block12;
        gGameState.playTime = body->profile.playTime;
        gGameState.unk_1238 = body->unk_7D14;
        gGameState.unk_123A = body->unk_7D16;
        gGameState.unk_123C = body->unk_7D18;
        gGameState.block13 = body->block13;
        gGameState.extraCrc = file->header.extraCrc;
        gGameState.unk_1281 = 0;
        func_0209ae70(data_020d3d20, body->unk_49FC);
        data_020d9978.func_020524b0(body->unk_5338);
        data_020c5e40.RestoreState(&body->soundState);
        func_0206dcdc(&data_020e88a0, body);
        func_0208663c(data_020c46cc, body->unk_3DDC);
        func_0208e844(data_020c4678, body->unk_43FC);
        gGameState.LoadExtra(extra);
        data_020c4638 = gGameState.unk_123C;

        if (gGameState.block7.data[0] == 0) {
            func_020412f0(2);
        } else if (gGameState.block7.data[0] == 1) {
            func_020412f0(7);
        }

        Free(file);
    }

    buffer = NULL;
    return 0;
}
#else
asm s32 SaveManager::ApplyLoad(int slot)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, r0
    ldr r0, [r6, #0x44]
    mov r9, r1
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r6, #0x4c
    bl _ZN6Backup11IsWriteDoneEv
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r4, [r6, #0x44]
    ldr r1, =0xffc0
    add r5, r4, #0x80
    mov r0, r4
    add r7, r5, #0x144
    bl DC_FlushRange
    mov r0, r6
    mov r1, r4
    mov r2, r5
    add r3, r7, #0x7c00
    bl Verify
    movs r8, r0
    beq @L_020391fc
    mov r0, r6
    mov r1, r4
    bl Free
    mov r2, #0
    str r2, [r6, #0x44]
    add r1, r6, r9
    strb r2, [r1, #0x24]
    mov r1, #1
    mov r0, r6
    strb r1, [r6, #0x25]
    bl WriteSystemHeader
    mov r0, r8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_020391fc:
    ldr r0, [r6, #0x48]
    cmp r0, #0
    bne @L_02039538
    ldr r3, =data_020ca78c
    mov r8, r5
    mov r2, #0x200
@L_02039214:
    ldrb r1, [r8]
    ldrb r0, [r8, #1]
    add r8, r8, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02039214
    ldr r9, =data_020cab8c
    add r12, r5, #0x400
    mov r8, #0x11
@L_0203923c:
    ldmia r12!, {r0, r1, r2, r3}
    stmia r9!, {r0, r1, r2, r3}
    subs r8, r8, #1
    bne @L_0203923c
    ldr r3, =data_020cac9c
    add r8, r5, #0x510
    mov r2, #0x14
@L_02039258:
    ldrb r1, [r8]
    ldrb r0, [r8, #1]
    add r8, r8, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02039258
    ldrb r3, [r5, #0x538]
    ldrb r2, [r5, #0x539]
    ldr r1, =gGameState
    add r0, r5, #0x13c
    strb r3, [r1, #0x5e4]
    strb r2, [r1, #0x5e5]
    ldrb r9, [r5, #0x53a]
    ldrb r2, [r5, #0x53b]
    ldr r3, =data_020cacc8
    add r8, r0, #0x400
    strb r9, [r1, #0x5e6]
    strb r2, [r1, #0x5e7]
    mov r2, #0x96
@L_020392a8:
    ldrb r1, [r8]
    ldrb r0, [r8, #1]
    add r8, r8, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_020392a8
    add r0, r5, #0x268
    ldr r3, =data_020cadf4
    add r8, r0, #0x400
    mov r2, #0x96
@L_020392d4:
    ldrb r1, [r8]
    ldrb r0, [r8, #1]
    add r8, r8, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_020392d4
    add r0, r5, #0x394
    ldr r3, =data_020caf20
    add r8, r0, #0x400
    mov r2, #0xbb
@L_02039300:
    ldrb r1, [r8]
    ldrb r0, [r8, #1]
    add r8, r8, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02039300
    add r0, r5, #0xa
    ldr r3, =data_020cb096
    add r8, r0, #0x900
    mov r2, #4
@L_0203932c:
    ldrb r1, [r8]
    ldrb r0, [r8, #1]
    add r8, r8, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0203932c
    add r0, r5, #0x114
    add r0, r0, #0x800
    ldr r3, =data_020cb0a0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r3, =data_020cb0ac
    add r8, r5, #0x920
    mov r2, #0xa
@L_02039368:
    ldrh r1, [r8]
    ldrh r0, [r8, #2]
    add r8, r8, #4
    subs r2, r2, #1
    strh r0, [r3, #2]
    strh r1, [r3], #4
    bne @L_02039368
    ldrh r2, [r8]
    add r1, r5, #0x158
    add r0, r5, #0x900
    strh r2, [r3]
    ldrh r9, [r0, #0x4a]
    ldrh r8, [r0, #0x4c]
    ldr r3, =data_020cafe0
    add r12, r1, #0x800
    strh r9, [r3, #0xf6]
    strh r8, [r3, #0xf8]
    ldrh lr, [r0, #0x4e]
    ldrh r9, [r0, #0x50]
    ldr r2, =data_020cb0e0
    ldr r8, =data_020cb0e4
    strh lr, [r3, #0xfa]
    strh r9, [r3, #0xfc]
    ldrh r1, [r0, #0x52]
    ldrh r0, [r0, #0x54]
    mov r9, #0x1a
    strh r1, [r3, #0xfe]
    strh r0, [r2]
@L_020393d8:
    ldmia r12!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    subs r9, r9, #1
    bne @L_020393d8
    ldr r1, [r12]
    add r0, r5, #0x2fc
    str r1, [r8]
    ldr r9, =data_020cb288
    add r12, r0, #0x800
    mov r8, #0x69
@L_02039400:
    ldmia r12!, {r0, r1, r2, r3}
    stmia r9!, {r0, r1, r2, r3}
    subs r8, r8, #1
    bne @L_02039400
    ldr r1, [r5, #0x41c]
    ldr r8, =data_020cb6e0
    add r0, r5, #0x7d00
    str r1, [r8, #0x284]
    ldrsh r1, [r0, #0x14]
    ldr r3, =data_020cb8e0
    add r2, r5, #0x19
    strh r1, [r3, #0x38]
    ldrsh r9, [r0, #0x16]
    add r1, r5, #0x7000
    ldr r0, =data_020cb91d
    strh r9, [r3, #0x3a]
    ldrb r1, [r1, #0xd18]
    add r9, r2, #0x7d00
    mov r3, #0x15
    strb r1, [r8, #0x23c]
@L_02039450:
    ldrb r2, [r9]
    ldrb r1, [r9, #1]
    add r9, r9, #2
    subs r3, r3, #1
    strb r1, [r0, #1]
    strb r2, [r0], #2
    bne @L_02039450
    ldrb r2, [r9]
    add r1, r5, #0x1fc
    ldr r8, =data_020cb6e0
    strb r2, [r0]
    ldr r2, [r4, #0x4c]
    ldr r0, =data_020d3d20
    str r2, [r8, #0x270]
    mov r2, #0
    add r1, r1, #0x4800
    strb r2, [r8, #0x281]
    bl func_0209ae70
    add r1, r5, #0x338
    ldr r0, =data_020d9978
    add r1, r1, #0x5000
    bl _ZN11TreasureBox13func_020524b0EPv
    add r1, r5, #0x44
    ldr r0, =data_020c5e40
    add r1, r1, #0x7c00
    bl _ZN12SoundManager12RestoreStateEP10SoundState
    ldr r0, =data_020e88a0
    mov r1, r5
    bl func_0206dcdc
    ldr r0, =data_020c46cc
    add r1, r5, #0x1dc
    ldr r0, [r0]
    add r1, r1, #0x3c00
    bl func_0208663c
    add r0, r5, #0x3fc
    add r1, r0, #0x4000
    ldr r0, =data_020c4678
    ldr r0, [r0]
    bl func_0208e844
    add r1, r7, #0x7c00
    ldr r5, =gGameState
    mov r0, r5
    bl _ZN9GameState9LoadExtraEPv
    ldrb r1, [r8, #0x23c]
    ldr r0, =data_020c4638
    strb r1, [r0]
    ldrb r0, [r5, #0x9b6]
    cmp r0, #0
    bne @L_0203951c
    mov r0, #2
    b @L_02039528
@L_0203951c:
    cmp r0, #1
    bne @L_0203952c
    mov r0, #7
@L_02039528:
    bl func_020412f0
@L_0203952c:
    mov r0, r6
    mov r1, r4
    bl Free
@L_02039538:
    mov r0, #0
    str r0, [r6, #0x44]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
#endif

s32 SaveManager::Verify(SaveHeader *header, SaveBody *body, void *extra)
{
    if (header->magic != SAVE_MAGIC) {
        return SAVE_ERROR_FORMAT;
    }
    if (header->size != SAVE_SIZE) {
        return SAVE_ERROR_FORMAT;
    }
    if (header->crc != Crc32(&header->bodyCrc, sizeof(SaveHeader) - sizeof(u32))) {
        return SAVE_ERROR_CHECKSUM;
    }
    if (header->bodyCrc != Crc32(body, sizeof(SaveBody))) {
        return SAVE_ERROR_CHECKSUM;
    }
    if (header->extraSize != GAME_EXTRA_SIZE) {
        return SAVE_ERROR_FORMAT;
    }
    if (header->extraCrc != 0) {
        if (header->extraCrc != Crc32(extra, GAME_EXTRA_SIZE)) {
            return SAVE_ERROR_CHECKSUM;
        }
    }

    return 0;
}

void *SaveManager::Alloc(u32 size)
{
    void *ptr = data_020c47b4.Alloc(size, 16, TRUE);
    MI_CpuFill8(ptr, 0, size);
    return ptr;
}

void SaveManager::Free(void *ptr)
{
    data_020c47b4.Free(ptr);
}

u32 SaveManager::ReverseBits(u32 value, int bits)
{
    u32 result = 0;
    int i;

    for (i = 0; i < bits; i++) {
        if (value & (1 << i)) {
            result |= 1 << (bits - 1 - i);
        }
    }

    return result;
}

// CRC-32 (the reflected polynomial 0x04C11DB7, as zlib)
u32 SaveManager::Crc32(const void *data, int size)
{
    const u8 *ptr = (const u8 *)data;
    u32 crc = 0xFFFFFFFF;
    int i = 0;
    int j;

    if (size > 0) {
        for (; i < size; i++) {
            crc ^= ReverseBits(*ptr, 8) << 24;
            for (j = 0; j < 8; j++) {
                if (crc & 0x80000000) {
                    crc = (crc << 1) ^ CRC32_POLY;
                } else {
                    crc <<= 1;
                }
            }
            ptr++;
        }
    }

    return ReverseBits(crc, 32) ^ 0xFFFFFFFF;
}

void SaveManager::LoadThread()
{
    if (!loadAsync) {
        return;
    }

    if (backup.Read(slots[loadSlot + 1].offset, slots[loadSlot + 1].size, buffer)) {
        state = ApplyLoad(loadSlot);
        return;
    }

    if (!bufferIsExternal) {
        Free(buffer);
    }
    buffer = NULL;
    state = SAVE_ERROR_ACCESS;
}

void SaveManager::LoadThreadMain(void *arg)
{
    ((SaveManager *)arg)->LoadThread();
}

u32 SaveManager::GetUnk20()
{
    return system.unk_20;
}

void GameState::LoadExtra(void *src)
{
    if (src == NULL) {
        return;
    }
    if (*(u32 *)src != 1) {
        return;
    }
    if (extra == NULL) {
        return;
    }

    MI_CpuCopy8(src, extra, GAME_EXTRA_SIZE);
}

void GameState::SaveExtra(void *dst)
{
    if (dst == NULL || extra == NULL) {
        return;
    }

    MI_CpuCopy8(extra, dst, GAME_EXTRA_SIZE);
    *(u32 *)dst = 1;
}
