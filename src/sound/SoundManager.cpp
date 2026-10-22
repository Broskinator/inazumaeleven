#include "sound/SoundManager.hpp"
#include "system/GameHeap.hpp"
#include "file/FileManager.hpp"
#include "nitro/fs.h"
#include "nitro/mi.h"
#include "nitro/std.h"
#include "msl/stdio.h"
#include "msl/string.h"

extern GameHeap data_020c47b4;
extern FileManager data_020c6364;
extern "C" void SND_Init(void);
extern "C" void SND_LockChannel(void);
extern "C" void _ZN11MoviePlayer12GetFrameRateEv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ll_udiv(void);
extern "C" const char *data_020abc68[];        // names of tracks
extern "C" char data_020abcec[];
extern "C" char data_020abcf8[];
extern "C" char data_020abd04[];
extern "C" char data_020abd10[];
extern "C" char data_020abd1c[];
extern "C" char data_020abd28[];
extern "C" char data_020abd34[];
extern "C" char data_020abd40[];
extern "C" char data_020abd4c[];
extern "C" char data_020abd58[];
extern "C" char data_020abd64[];
extern "C" char data_020abd70[];
extern "C" char data_020abd7c[];
extern "C" char data_020abd84[];
extern "C" char data_020abd8c[];
extern "C" char data_020abd98[];
extern "C" char data_020abda4[];
extern "C" char data_020abdac[];
extern "C" char data_020abdb4[];
extern "C" char data_020abdbc[];
extern "C" char data_020abdc4[];
extern "C" char data_020abdcc[];
extern "C" char data_020abdd4[];
extern "C" char data_020abddc[];
extern "C" char data_020abdec[];
extern "C" char data_020abe04[];
extern "C" char data_020abe1c[];
extern "C" char data_020abe2c[];
extern "C" char data_020abe44[];
extern "C" char data_020abe4c[];
extern "C" char data_020abe54[];
extern "C" char data_020abe64[];
extern "C" char data_020c484c[];
extern "C" char data_020c4f60[];
extern "C" void func_020406d8(void);
extern "C" void func_02040854(void);
extern "C" void func_02040884(void);
extern "C" void func_020408b4(void);
extern "C" void func_020408e0(void);
extern "C" void func_02040924(void);
extern "C" void func_02041d90(void);
extern "C" void func_02042aec(void);
extern "C" void func_0204802c(void);
extern "C" void func_02048088(void);
extern "C" void func_020480a8(void);
extern "C" void func_020480c8(void);
extern "C" void func_020480f4(void);
extern "C" void func_0204812c(void);
extern "C" void func_02048168(void);
extern "C" void func_0204817c(void);
extern "C" void func_0204832c(void);
extern "C" void func_0204871c(void);
extern "C" void func_02048730(void);
extern "C" void func_020487c4(void);
extern "C" void func_02048bb8(void);
extern "C" void func_02048d80(void);
extern "C" void func_02049258(void);
extern "C" void func_02049420(void);
extern "C" void func_02040b64(int);
extern "C" void func_02040c00(int);
extern "C" void func_02040c98(int);
extern "C" void *func_02041530(void *data, int, int);       // a wave bank or stream
extern "C" void func_02041964(u16 wave);
extern "C" void *func_02041c3c(void *data);               // a sequence
extern "C" void func_02041d40(void *sequence);
extern "C" int func_02041d78(void *sequence);
extern "C" void func_02041e70(void *sequence, int);
extern "C" void func_02041f10(void *sequence, SoundParam *param);
extern "C" void *func_02042be4(void *data);               // a bank of effects
extern "C" void func_02042d98(u16 effects);
extern "C" void func_02042e28(u32 sound, int);
extern "C" void func_02042ef4(u32 sound, int, SoundParam *param);
extern "C" void func_02043484(u32 sound, int, u16);
extern "C" void func_020435d8(u16);
extern "C" void func_02043644(u16 effects);
extern "C" int func_02048d30(void *stream);
extern "C" void func_02048f60(void *stream, int);
extern "C" void func_02049180(void *stream, SoundParam *param);
extern "C" void func_020494c0(void *stream, SoundStreamInfo *info);
extern "C" BOOL func_0209dd60(FSFileID *id, const char *path);   // the id of a file
extern "C" BOOL func_0209ddd0(FSFile *file, const char *path);    // opens a file by its path

BOOL GetSoundFilePath(const char *name, char *path, u32 length);

// (files are loaded through the heap's file manager)
static inline int ReleaseFile(GameHeap *heap, void *buffer)
{
    return heap->fileManager != NULL ? heap->fileManager->Release(buffer) : -1;
}

static inline void CancelFile(GameHeap *heap, void *buffer)
{
    if (heap->fileManager != NULL) {
        heap->fileManager->Cancel(buffer, FALSE);
    }
}

BOOL GetSoundFilePath(const char *name, char *path, u32 length);

BOOL GetSoundFilePath(const char *name, char *path, u32 length)
{
    FSFile file;
    BOOL result;

    FS_InitFile(&file);
    if (!func_0209ddd0(&file, name)) {
        return FALSE;
    }
    result = FS_GetPathName(&file, path, length);
    FS_CloseFile(&file);
    return result;
}

SoundManager::SoundManager()
{
}

SoundManager::~SoundManager()
{
    int i;

    for (i = 0; i < SOUND_NUM_TRACKS; i++) {
        StopTrack(i);
    }
    for (i = 0; i < SOUND_NUM_BANK_PAIRS; i++) {
        UnloadPair(i);
    }
    func_0203bc60(0, 0);
    func_0203ba5c(0);
}

// (memory for the driver)
void *SoundManager::Alloc(void *arg, u32 size)
{
    return data_020c47b4.Alloc(size, 4, TRUE);
}

void *SoundManager::Free(void *arg, void *ptr)
{
    data_020c47b4.Free(ptr);
    return ptr;
}

asm void SoundManager::Init(GameHeap *heap)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x40
    mov r9, r0
    str r1, [r9]
    bl SND_Init
    ldr r7, =0xffff
    mov r8, #0
    mov r0, r7
    mov r1, r8
    bl SND_LockChannel
    mov r6, #4
    mov r5, #1
    ldr r0, [r9]
    ldr r1, =0x1c00f
    mov r2, r6
    mov r3, r5
    bl _ZN8GameHeap5AllocEiii
    add r4, sp, #0
    mov r10, r0
    mov r0, r4
    bl func_020406d8
    add r0, r10, #0xf
    bic r1, r0, #0xf
    mov r0, r4
    mov r2, #0x1c000
    bl func_02040854
    mov r0, r4
    mov r1, r8
    mov r2, r6
    bl func_02040884
    mov r0, r4
    mov r1, #5
    bl func_020408b4
    mov r10, #0xf
    mov r0, r4
    mov r1, r8
    mov r2, r10
    bl func_020408e0
    mov r0, r4
    bl func_02040924
    mov r0, r6
    mov r1, r6
    bl func_02042aec
    add r0, r9, #4
    bl func_0204802c
    add r0, r9, #4
    mov r1, #6
    bl func_02048088
    add r0, r9, #4
    mov r1, #0x14
    bl func_020480a8
    mov r1, r5
    add r0, r9, #4
    bl func_020480c8
    mov r2, r10
    add r0, r9, #4
    mov r1, r8
    bl func_020480f4
    mov r4, #0x1000
    add r0, r9, #4
    mov r1, r4
    bl func_0204812c
    ldr r1, =Alloc
    ldr r2, =Free
    add r0, r9, #4
    mov r3, r8
    bl func_02048168
    mov r1, r4
    add r0, r9, #4
    bl func_0204817c
    add r0, r9, #4
    bl func_0204832c
    mov r1, #0x7f
    add r0, r9, #0x500
    strh r1, [r0, #0x10]
    strh r1, [r0, #0x12]
    strh r1, [r0, #0x14]
    mov r1, #0x3e8
    strh r1, [r0, #0x16]
    strh r1, [r0, #0x18]
    add r0, r9, #0x58
    mov r1, r8
    mov r2, #0x240
    bl MI_CpuFill8
    add r0, r9, #0x298
    mov r1, r8
    mov r2, #0x10
    bl MI_CpuFill8
    add r0, r9, #0x2a8
    mov r1, r8
    mov r2, #0x58
    bl MI_CpuFill8
    add r0, r9, #0x300
    mov r1, r8
    mov r2, #0x30
    bl MI_CpuFill8
    mov r4, #0x50
    add r0, r9, #0x330
    mov r1, r8
    mov r2, r4
    bl MI_CpuFill8
    add r0, r9, #0x380
    mov r1, r8
    mov r2, r4
    bl MI_CpuFill8
    add r0, r9, #0x3d0
    mov r1, r8
    mov r2, r4
    bl MI_CpuFill8
    add r0, r9, #0x420
    mov r1, r8
    mov r2, r4
    bl MI_CpuFill8
    add r0, r9, #0x470
    mov r1, r8
    mov r2, r4
    bl MI_CpuFill8
    mov r2, r4
    add r0, r9, #0x4c0
    mov r1, r8
    bl MI_CpuFill8
    sub r1, r7, #0x10000
    mov r0, #0x2c
@L_02039b74:
    mla r2, r8, r0, r9
    strb r1, [r2, #0x2c8]
    add r8, r8, #1
    strb r1, [r2, #0x2c9]
    cmp r8, #2
    blt @L_02039b74
    ldr r0, [r9]
    mov r2, #4
    mov r1, #0x64000
    mov r3, #1
    str r2, [r9, #0x80]
    bl _ZN8GameHeap5AllocEiii
    mov r1, #0
    str r0, [r9, #0x78]
    str r1, [r9, #0x51c]
    str r1, [r9, #0x520]
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

void SoundManager::func_02039bcc()
{
    func_02040c00(0);
}

void SoundManager::func_02039bdc()
{
    func_02040c98(0);
    if (streams[0].state & 4) {
        func_02048f60(streams[0].handle, 0);
        streams[0].state &= ~4;
    }
}

void SoundManager::func_02039c28()
{
    func_02040b64(1);
}

void SoundManager::Update()
{
    int i;

    func_0203a904();
    func_0203b664();
    func_0203bd04();
    for (i = 0; i < SOUND_NUM_BANK_PAIRS; i++) {
        if (pairs[i].loaded) {
            PrepareBank(pairs[i].wave);
            PrepareBank(pairs[i].effects);
        }
    }
}

// TRUE when no track is playing or starting
BOOL SoundManager::IsIdle()
{
    int i;

    func_0203b664();
    for (i = 0; i < SOUND_NUM_TRACKS; i++) {
        if (tracks[i].flags & 0x11) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL SoundManager::AreBanksReady()
{
    int i;

    for (i = 0; i < SOUND_NUM_BANK_PAIRS; i++) {
        if (pairs[i].loaded) {
            if (!PrepareBank(pairs[i].wave)) {
                return FALSE;
            }
            if (!PrepareBank(pairs[i].effects)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

asm BOOL SoundManager::SetScene(int scene, int arg1, int arg2)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r5, [r4, #0x51c]
    mov r9, r1
    mov r7, r2
    mov r6, r3
    cmp r5, r9
    mov r8, #0
    beq @L_02039d74
    bl EndScene
@L_02039d74:
    str r9, [r4, #0x51c]
    cmp r9, #0xb
    addls pc, pc, r9, lsl #2
    b @L_02039f9c
    b @L_02039f9c
    b @L_02039f9c
    b @L_02039db4
    b @L_02039ddc
    b @L_02039e04
    b @L_02039e2c
    b @L_02039e8c
    b @L_02039e64
    b @L_02039eec
    b @L_02039f78
    b @L_02039f9c
    b @L_02039f9c
@L_02039db4:
    ldr r2, =data_020abcec
    ldr r3, =data_020abcf8
    mov r0, r4
    mov r1, r8
    bl LoadPair
    cmp r0, #0
    bne @L_02039f9c
    add sp, sp, #0x20
    mov r0, r8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02039ddc:
    ldr r2, =data_020abd04
    ldr r3, =data_020abd10
    mov r0, r4
    mov r1, r8
    bl LoadPair
    cmp r0, #0
    bne @L_02039f9c
    add sp, sp, #0x20
    mov r0, r8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02039e04:
    ldr r2, =data_020abd1c
    ldr r3, =data_020abd28
    mov r0, r4
    mov r1, #2
    bl LoadPair
    cmp r0, #0
    bne @L_02039f9c
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02039e2c:
    mov r0, r4
    mov r1, r8
    mov r2, #6
    bl func_0203a3c4
    ldr r2, =data_020abd34
    ldr r3, =data_020abd40
    mov r0, r4
    mov r1, #2
    bl LoadPair
    cmp r0, #0
    bne @L_02039f9c
    add sp, sp, #0x20
    mov r0, r8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02039e64:
    ldr r2, =data_020abd4c
    ldr r3, =data_020abd58
    mov r0, r4
    mov r1, #1
    bl LoadPair
    cmp r0, #0
    bne @L_02039f9c
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02039e8c:
    ldr r2, =data_020abd64
    ldr r3, =data_020abd70
    mov r0, r4
    mov r1, #1
    bl LoadPair
    cmp r5, #5
    bne @L_02039f9c
    mov r6, #0x28
    mov r9, #0
    add r7, r4, #0x470
    mov r5, r6
@L_02039eb8:
    mov r0, r4
    mov r1, r9
    mov r2, r8
    mov r3, r8
    bl func_0203a724
    mla r0, r9, r5, r7
    mov r1, r8
    mov r2, r6
    bl MI_CpuFill8
    add r9, r9, #1
    cmp r9, #2
    blt @L_02039eb8
    b @L_02039f9c
@L_02039eec:
    cmp r7, #0
    beq @L_02039f20
    add r5, sp, #0
    ldr r1, =data_020abd7c
    mov r0, r5
    mov r2, r7
    bl sprintf
    mov r0, r4
    mov r2, r5
    mov r1, #0
    mov r3, #1
    bl func_0203a3e0
    b @L_02039f30
@L_02039f20:
    mov r1, #0
    mov r0, r4
    mov r2, r1
    bl func_0203a3c4
@L_02039f30:
    cmp r6, #0
    beq @L_02039f64
    add r5, sp, #0
    ldr r1, =data_020abd84
    mov r0, r5
    mov r2, r6
    bl sprintf
    mov r1, #1
    mov r0, r4
    mov r2, r5
    mov r3, r1
    bl func_0203a3e0
    b @L_02039f9c
@L_02039f64:
    mov r0, r4
    mov r1, #1
    mov r2, #0
    bl func_0203a3c4
    b @L_02039f9c
@L_02039f78:
    ldr r2, =data_020abd8c
    ldr r3, =data_020abd98
    mov r0, r4
    mov r1, #1
    bl LoadPair
    cmp r0, #0
    addeq sp, sp, #0x20
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02039f9c:
    mov r0, #1
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

// frees the banks of the scene that ends
void SoundManager::EndScene()
{
    switch (scene) {
    case 4:
        UnloadPair(2);
        break;
    case 5:
        UnloadPair(2);
        break;
    case 7:
        UnloadPair(1);
        break;
    case 6:
        UnloadPair(1);
        UnloadPair(2);
        break;
    case 9:
        UnloadPair(1);
        break;
    case 10:
        UnloadPair(1);
        UnloadPair(2);
        break;
    case 8:
    case 11:
        break;
    }
    scene = 0;
}

void SoundManager::SetVolume(int volume)
{
    this->volume = volume;
    ApplyVolume(this->volume);
}

void SoundManager::SetUnk518(int value)
{
    unk_518 = value;
}

void SoundManager::ApplyVolume(int volume)
{
    int i;

    SetFade((s8)((volumes[1] * volume * volumes[0] >> 7) / 1000), 1000);
    for (i = 0; i < SOUND_NUM_TRACKS; i++) {
        if (tracks[i].state & 2) {
            func_02041f10(banks[tracks[i].sequence].handle, &param);
        }
    }
    if (streams[0].state & 2) {
        func_02049180(streams[0].handle, &param);
    }
}

// (nonmatching: the two stores come out in the other order)
#ifdef NONMATCHING
void SoundManager::SetFade(int volume, int time)
{
    if (volume == 0) {
        time = 0;
    }
    param.value = volume + ((u16)time << 16);
    param.flags = 4;
}
#else
asm void SoundManager::SetFade(int volume, int time)
{
    cmp r1, #0
    moveq r2, #0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    add r1, r1, r2, lsl #16
    mov r2, #4
    str r1, [r0, #0x50]
    str r2, [r0, #0x44]
    bx lr
}
#endif

void SoundManager::func_0203a154()
{
    func_0203a7b4(0);
    func_0203b3c8(0);
}

// the banks and the tracks to save with the game
void SoundManager::SaveState(SoundState *state)
{
    int i;

    for (i = 0; i < SOUND_NUM_BANK_PAIRS; i++) {
        if (pairs[i].loaded) {
            STD_CopyString(state->effects[i], banks[pairs[i].effects].name);
        } else {
            state->effects[i][0] = '\0';
        }
    }

    for (i = 0; i < SOUND_NUM_TRACKS; i++) {
        if (unk_4c0[i].type != 0) {
            state->tracks[i] = unk_4c0[i];
        } else if (next[i].type != 0) {
            state->tracks[i] = next[i];
        } else {
            state->tracks[i] = current[i];
        }
    }
}

// (nonmatching: the loop counter and its offset swap registers)
#ifdef NONMATCHING
void SoundManager::RestoreState(SoundState *state)
{
    char wave[0x20];
    int i;
    char *ext;

    for (i = 0; i < SOUND_NUM_BANK_PAIRS; i++) {
        if (state->effects[i][0] != '\0') {
            STD_CopyString(wave, state->effects[i]);
            ext = strrchr(wave, '.');
            if (ext != NULL) {
                *ext = '\0';
            }
            STD_ConcatenateString(wave, data_020abda4);
            LoadPair(i, wave, state->effects[i]);
        }
    }

    for (i = 0; i < SOUND_NUM_TRACKS; i++) {
        unk_470[i] = state->tracks[i];
    }
}
#else
asm void SoundManager::RestoreState(SoundState *state)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r7, #0
    ldr r11, =data_020abda4
    mov r10, r0
    mov r9, r1
    mov r4, r7
    add r6, sp, #0
    mov r5, #0x2e
@L_0203a2f8:
    mov r8, r7, lsl #5
    ldrsb r0, [r9, r8]
    cmp r0, #0
    beq @L_0203a348
    mov r0, r6
    add r1, r9, r8
    bl STD_CopyString
    mov r0, r6
    mov r1, r5
    bl strrchr
    cmp r0, #0
    strneb r4, [r0]
    mov r0, r6
    mov r1, r11
    bl STD_ConcatenateString
    mov r0, r10
    mov r1, r7
    add r3, r9, r8
    mov r2, r6
    bl LoadPair
@L_0203a348:
    add r7, r7, #1
    cmp r7, #4
    blt @L_0203a2f8
    mov r2, #0
    mov r4, #0x28
@L_0203a35c:
    mul r1, r2, r4
    add r0, r9, r1
    add r1, r10, r1
    add r8, r0, #0x80
    add r7, r1, #0x470
    mov r6, #0x10
@L_0203a374:
    ldrb r5, [r8]
    ldrb r3, [r8, #1]
    add r8, r8, #2
    subs r6, r6, #1
    strb r3, [r7, #1]
    strb r5, [r7], #2
    bne @L_0203a374
    ldrsh r5, [r0, #0xa0]
    add r3, r1, #0x400
    add r2, r2, #1
    strh r5, [r3, #0x90]
    ldrsh r5, [r0, #0xa2]
    cmp r2, #2
    strh r5, [r3, #0x92]
    ldr r0, [r0, #0xa4]
    str r0, [r1, #0x494]
    blt @L_0203a35c
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

void SoundManager::func_0203a3c4(int index, int id)
{
    func_0203a3e0(index, data_020abc68[id], 0);
}

void SoundManager::func_0203a3e0(int index, const char *name, int arg)
{
    int type = 1;
    char *ext = strrchr(name, '.');

    if (ext != NULL && (STD_CompareString(ext, data_020abdac) == 0 || STD_CompareString(ext, data_020abdb4) == 0)) {
        type = 2;
    }

    requests[index].type = type;
    STD_CopyString(requests[index].name, name);
    if (type != 1) {
        return;
    }

    if (current[index].type != 1) {
        func_0203b3f0(index, (char *)name);
        return;
    }
    if (STD_CompareString(tracks[index].name, name) == 0 || arg == 0) {
        return;
    }
    func_0203a790(index, arg);
    func_0203b3f0(index, (char *)name);
}

void SoundManager::func_0203a4d4(int index, const char *name, int arg)
{
    int type = 1;
    char *ext = strrchr(name, '.');

    if (ext != NULL && (STD_CompareString(ext, data_020abdbc) == 0 || STD_CompareString(ext, data_020abdc4) == 0)) {
        type = 2;
    }

    unk_470[index].type = type;
    STD_CopyString(unk_470[index].name, name);
    if (type != 1) {
        return;
    }

    if (current[index].type != 1) {
        func_0203b3f0(index, (char *)name);
        return;
    }
    if (STD_CompareString(tracks[index].name, name) == 0 || arg == 0) {
        return;
    }
    func_0203a790(index, arg);
    func_0203b3f0(index, (char *)name);
}

void SoundManager::func_0203a5c8(int index, int id, int arg, int arg2)
{
    func_0203a5e8(index, data_020abc68[id], arg, arg2);
}

asm void SoundManager::func_0203a5e8(int index, const char *name, int arg, int arg2)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r2
    ldrsb r2, [r7]
    mov r9, r0
    mov r8, r1
    mov r6, r3
    cmp r2, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    mov r1, #0x2e
    mov r4, #1
    bl strrchr
    movs r5, r0
    beq @L_0203a648
    ldr r1, =data_020abdcc
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203a644
    ldr r1, =data_020abdd4
    mov r0, r5
    bl STD_CompareString
    cmp r0, #0
    bne @L_0203a648
@L_0203a644:
    mov r4, #2
@L_0203a648:
    cmp r6, #0
    bge @L_0203a690
    mov r0, #0x28
    mul r12, r8, r0
    add r5, r9, r12
    add r0, r5, #0x300
    ldrsh r0, [r0, #0xf0]
    cmp r0, #0
    beq @L_0203a690
    add r0, r5, #0x400
    add r2, r9, #0x4c0
    strh r4, [r0, #0xe0]
    ldr r3, [sp, #0x20]
    mov r1, r7
    add r0, r2, r12
    str r3, [r5, #0x4e4]
    bl STD_CopyString
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0203a690:
    mov r0, #0x28
    mul r5, r8, r0
    add r0, r9, #0x380
    mov r1, r7
    add r0, r0, r5
    bl STD_CompareString
    cmp r0, #0
    bne @L_0203a6c4
    add r0, r9, #0x500
    ldrh r1, [r0, #0x16]
    mov r0, r9
    bl ApplyVolume
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0203a6c4:
    add r8, r9, r5
    add r2, r9, #0x3d0
    str r6, [r8, #0x3a4]
    add r0, r8, #0x300
    ldr r3, [sp, #0x20]
    strh r4, [r0, #0xf0]
    mov r1, r7
    add r0, r2, r5
    str r3, [r8, #0x3f4]
    bl STD_CopyString
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

void SoundManager::func_0203a6f8(int index, int arg, int arg2)
{
    func_0203a5e8(index, requests[index].name, arg, arg2);
}

void SoundManager::func_0203a724(int index, int arg, int arg2)
{
    func_0203a5e8(index, unk_470[index].name, arg, arg2);
}

void SoundManager::func_0203a750(int index, int arg)
{
    func_0203a6f8(index, 0, arg);
}

void SoundManager::func_0203a764(int index, int id, int arg)
{
    func_0203a77c(index, data_020abc68[id], arg);
}

void SoundManager::func_0203a77c(int index, const char *name, int arg)
{
    func_0203a5e8(index, name, 0, arg);
}

void SoundManager::func_0203a790(int index, int arg)
{
    current[index].unk_24 = arg;
    next[index].type = -1;
    next[index].unk_24 = 0;
}

void SoundManager::func_0203a7b4(int arg)
{
    int i;

    for (i = 0; i < SOUND_NUM_TRACKS; i++) {
        func_0203a790(i, arg);
    }
}

void SoundManager::func_0203a7e4(int arg)
{
    func_0203a7b4(arg);
}

void SoundManager::func_0203a7f0(int index, int arg)
{
    next[index] = saved[index];
    next[index].unk_22 = 1;
    next[index].unk_24 = arg;
    MI_CpuFill8(&saved[index], 0, sizeof(SoundRequest));
}

BOOL SoundManager::func_0203a87c(int index)
{
    switch (current[index].type) {
    case 1:
        return func_0203b5b8(index);
    case 2:
        return func_0203bba8(0);
    }
    return FALSE;
}

BOOL SoundManager::func_0203a8c0(int index)
{
    if (STD_CompareString(current[index].name, requests[index].name) != 0) {
        return FALSE;
    }
    return func_0203a87c(index);
}

asm void SoundManager::func_0203a904()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, r0
    mov r6, #0x28
    mov r4, #0
@L_0203a914:
    mul r1, r4, r6
    add r7, r5, r1
    add r0, r7, #0x300
    ldrsh r2, [r0, #0xf0]
    cmp r2, #0
    beq @L_0203abb0
    ldrsb r0, [r0, #0x80]
    cmp r0, #0
    beq @L_0203a988
    add r12, r7, #0x380
    add r9, r7, #0x420
    mov r8, #0x10
@L_0203a944:
    ldrb r2, [r12]
    ldrb r0, [r12, #1]
    add r12, r12, #2
    subs r8, r8, #1
    strb r0, [r9, #1]
    strb r2, [r9], #2
    mov r3, #0
    bne @L_0203a944
    add r0, r7, #0x300
    ldrsh r8, [r0, #0xa0]
    add r2, r7, #0x400
    strh r8, [r2, #0x40]
    ldrsh r0, [r0, #0xa2]
    strh r0, [r2, #0x42]
    ldr r0, [r7, #0x3a4]
    str r0, [r7, #0x444]
    strb r3, [r7, #0x380]
@L_0203a988:
    add r0, r7, #0x300
    ldrsh r0, [r0, #0xa0]
    cmp r0, #1
    bne @L_0203a9d8
    mov r2, #0x2c
    mla r2, r4, r2, r5
    add r2, r2, #0x200
    ldrh r2, [r2, #0xce]
    tst r2, #2
    beq @L_0203a9cc
    ldr r2, [r7, #0x3a4]
    cmp r2, #0
    blt @L_0203abb0
    mov r0, r5
    mov r1, r4
    bl SetTrackStop
    b @L_0203abb0
@L_0203a9cc:
    tst r2, #4
    bne @L_0203abb0
    b @L_0203aa14
@L_0203a9d8:
    cmp r0, #2
    bne @L_0203aa14
    add r2, r5, #0x300
    ldrh r2, [r2, #0x26]
    tst r2, #2
    beq @L_0203aa0c
    ldr r2, [r7, #0x3a4]
    cmp r2, #0
    blt @L_0203abb0
    mov r0, r5
    mov r1, #0
    bl func_0203bc60
    b @L_0203abb0
@L_0203aa0c:
    tst r2, #4
    bne @L_0203abb0
@L_0203aa14:
    add r2, r7, #0x300
    ldrsh r3, [r2, #0xf0]
    cmn r3, #1
    beq @L_0203aab0
    cmp r3, #1
    beq @L_0203aa38
    cmp r3, #2
    beq @L_0203aa78
    b @L_0203aac0
@L_0203aa38:
    add r0, r5, #0x3d0
    mla r2, r4, r6, r0
    mov r0, r5
    mov r1, r4
    bl func_0203b3f0
    add r0, r7, #0x300
    ldrsh r0, [r0, #0xf2]
    ldr r2, [r7, #0x3f4]
    mov r1, r4
    cmp r0, #0
    mov r0, r5
    beq @L_0203aa70
    bl func_0203b57c
    b @L_0203aad4
@L_0203aa70:
    bl SetTrackFadeIn
    b @L_0203aad4
@L_0203aa78:
    ldrsh r0, [r2, #0xf2]
    cmp r0, #0
    beq @L_0203aa98
    mov r1, #0
    mov r0, r5
    mov r2, r1
    bl func_0203bab8
    b @L_0203aad4
@L_0203aa98:
    add r2, r5, #0x3d0
    mov r0, r5
    add r2, r2, r1
    mov r1, #0
    bl func_0203ba78
    b @L_0203aad4
@L_0203aab0:
    mla r1, r4, r6, r5
    add r1, r1, #0x300
    strh r0, [r1, #0xf0]
    b @L_0203aad4
@L_0203aac0:
    add r0, r5, #0x3d0
    add r0, r0, r1
    mov r1, #0
    mov r2, #0x28
    bl MI_CpuFill8
@L_0203aad4:
    mul r9, r4, r6
    add r8, r5, r9
    add r12, r8, #0x3d0
    add r3, r8, #0x380
    mov r2, #0x10
@L_0203aae8:
    ldrb r1, [r12]
    ldrb r0, [r12, #1]
    add r12, r12, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    mov r7, #0x28
    bne @L_0203aae8
    add r1, r8, #0x300
    ldrsh r2, [r1, #0xf0]
    add r0, r5, #0x3d0
    add r0, r0, r9
    strh r2, [r1, #0xa0]
    ldrsh r3, [r1, #0xf2]
    mov r2, r7
    strh r3, [r1, #0xa2]
    ldr r3, [r8, #0x3f4]
    mov r1, #0
    str r3, [r8, #0x3a4]
    bl MI_CpuFill8
    add r0, r8, #0x400
    ldrsh r0, [r0, #0xe0]
    cmp r0, #0
    beq @L_0203abb0
    add r3, r5, r9
    sub r0, r7, #0x29
    str r0, [r3, #0x3a4]
    add r8, r3, #0x4c0
    add r7, r3, #0x3d0
    mov r2, #0x10
@L_0203ab60:
    ldrb r1, [r8]
    ldrb r0, [r8, #1]
    add r8, r8, #2
    subs r2, r2, #1
    strb r0, [r7, #1]
    strb r1, [r7], #2
    bne @L_0203ab60
    add r0, r3, #0x400
    ldrsh r7, [r0, #0xe0]
    add r2, r3, #0x300
    add r1, r5, #0x4c0
    strh r7, [r2, #0xf0]
    ldrsh r7, [r0, #0xe2]
    add r0, r1, r9
    mov r1, #0
    strh r7, [r2, #0xf2]
    ldr r7, [r3, #0x4e4]
    mov r2, #0x28
    str r7, [r3, #0x3f4]
    bl MI_CpuFill8
@L_0203abb0:
    add r4, r4, #1
    cmp r4, #2
    blt @L_0203a914
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

// a free bank for a file of this type (the stream's bank for streams), -1 if there is none
s8 SoundManager::FindBank(int type)
{
    int i;

    for (i = 0; i < SOUND_NUM_BANKS; i++) {
        if (type != SOUND_BANK_STREAM) {
            if (banks[i].type != SOUND_BANK_STREAM && banks[i].state == SOUND_BANK_FREE) {
                return i;
            }
        } else if (type == banks[i].type) {
            return i;
        }
    }
    return -1;
}

// loads a file of the driver into a free bank; the bank, -1 if it could not be loaded
int SoundManager::LoadBank(int type, const char *name)
{
    char path[0x80];
    int index = FindBank(type);

    if (index < 0) {
        return index;
    }

    switch (banks[index].state) {
    case SOUND_BANK_LOADING:
        if (ReleaseFile(heap, banks[index].data) == 0) {
            CancelFile(heap, banks[index].data);
            banks[index].name[0] = '\0';
        } else {
            banks[index].state = SOUND_BANK_LOADED;
        }
    case SOUND_BANK_LOADED:
        if (STD_CompareString(banks[index].name, name) == 0) {
            break;
        }
    case SOUND_BANK_FREE:
        STD_CopyString(banks[index].name, name);
        STD_CopyString(path, data_020abddc);
        STD_ConcatenateString(path, name);
        if (type == SOUND_BANK_STREAM && (s32)data_020c6364.GetPackEntrySize(data_020abdec, name) > 0x64000) {
            return -1;
        }
        banks[index].data = data_020c6364.LoadPackAlloc(data_020abe04, name, heap, 4);
        if (banks[index].data == NULL) {
            return -1;
        }
        banks[index].state = SOUND_BANK_LOADED;
        break;
    }

    banks[index].type = type;
    PrepareBank(index);
    return index;
}

void SoundManager::FreeBank(int index)
{
    if (banks[index].state == SOUND_BANK_FREE) {
        return;
    }

    if (banks[index].state == SOUND_BANK_READY) {
        switch (banks[index].type) {
        case SOUND_BANK_WAVE:
        case SOUND_BANK_STREAM:
            func_02041964((u16)(u32)banks[index].handle);
            break;
        case SOUND_BANK_EFFECTS:
            func_02043644((u16)(u32)banks[index].handle);
            func_02042d98((u16)(u32)banks[index].handle);
            break;
        case SOUND_BANK_SEQUENCE:
            func_02041d40(banks[index].handle);
            break;
        }
    }

    if (banks[index].type != SOUND_BANK_STREAM) {
        if (banks[index].state == SOUND_BANK_LOADING) {
            CancelFile(heap, banks[index].data);
        }
        heap->Free(banks[index].data);
        MI_CpuFill8(&banks[index], 0, sizeof(SoundBank));
    } else {
        // (the stream's bank stays, for the next stream)
        banks[index].state = SOUND_BANK_LOADED;
    }
}

int SoundManager::LoadBankAsync(int type, const char *name)
{
    char path[0x80];
    int index = FindBank(type);

    if (index < 0) {
        return index;
    }

    switch (banks[index].state) {
    case SOUND_BANK_LOADING:
    case SOUND_BANK_LOADED:
        if (STD_CompareString(banks[index].name, name) == 0) {
            break;
        }
        CancelFile(heap, banks[index].data);
    case SOUND_BANK_FREE:
        STD_CopyString(banks[index].name, name);
        STD_CopyString(path, data_020abe1c);
        STD_ConcatenateString(path, name);
        banks[index].data = data_020c6364.LoadPackAsync(data_020abe2c, name, banks[index].data, heap, 4);
        if (banks[index].data == NULL) {
            return -1;
        }
        banks[index].state = SOUND_BANK_LOADING;
        break;
    }

    banks[index].type = type;
    return index;
}

// gives a loaded file to the driver; FALSE while it is still loading
BOOL SoundManager::PrepareBank(int index)
{
    switch (banks[index].state) {
    case SOUND_BANK_LOADING:
        if (ReleaseFile(heap, banks[index].data) != 0) {
            return FALSE;
        }
        banks[index].state = SOUND_BANK_LOADED;
        break;
    case SOUND_BANK_LOADED:
        break;
    case SOUND_BANK_READY:
        return TRUE;
    default:
        return FALSE;
    }

    switch (banks[index].type) {
    case SOUND_BANK_WAVE:
    case SOUND_BANK_STREAM:
        banks[index].handle = func_02041530(banks[index].data, 0, 0);
        break;
    case SOUND_BANK_EFFECTS:
        banks[index].handle = func_02042be4(banks[index].data);
        break;
    case SOUND_BANK_SEQUENCE:
        banks[index].handle = func_02041c3c(banks[index].data);
        break;
    }
    banks[index].state = SOUND_BANK_READY;
    return TRUE;
}

BOOL SoundManager::LoadPair(int index, const char *wave, const char *effects)
{
    if (STD_CompareString(wave, banks[pairs[index].wave].name) != 0) {
        if (pairs[index].loaded) {
            FreeBank(pairs[index].wave);
        }
        pairs[index].wave = LoadBank(SOUND_BANK_WAVE, wave);
        if (pairs[index].wave < 0) {
            return FALSE;
        }
    }
    if (STD_CompareString(effects, banks[pairs[index].effects].name) != 0) {
        if (pairs[index].loaded) {
            FreeBank(pairs[index].effects);
        }
        pairs[index].effects = LoadBank(SOUND_BANK_EFFECTS, effects);
        if (pairs[index].effects < 0) {
            return FALSE;
        }
    }
    pairs[index].loaded = TRUE;
    return TRUE;
}

BOOL SoundManager::LoadPairAsync(int index, const char *wave, const char *effects)
{
    if (STD_CompareString(wave, banks[pairs[index].wave].name) != 0) {
        if (pairs[index].loaded) {
            FreeBank(pairs[index].wave);
        }
        pairs[index].wave = LoadBankAsync(SOUND_BANK_WAVE, wave);
        if (pairs[index].wave < 0) {
            return FALSE;
        }
    }
    if (STD_CompareString(effects, banks[pairs[index].effects].name) != 0) {
        if (pairs[index].loaded) {
            FreeBank(pairs[index].effects);
        }
        pairs[index].effects = LoadBankAsync(SOUND_BANK_EFFECTS, effects);
        if (pairs[index].effects < 0) {
            return FALSE;
        }
    }
    pairs[index].loaded = TRUE;
    return TRUE;
}

void SoundManager::UnloadPair(int index)
{
    if (pairs[index].loaded == 0) {
        return;
    }
    FreeBank(pairs[index].wave);
    FreeBank(pairs[index].effects);
    pairs[index].loaded = 0;
}

// the driver's id of a sound effect: the pair in bits 14-15, the effect in bits 0-13
u32 SoundManager::GetSound(int id)
{
    return (u32)banks[pairs[id >> 14].effects].handle + ((u32)(id << 18) >> 2);
}

void SoundManager::PlaySound(int id)
{
    SetFade((s8)((volumes[2] * unk_518 * volumes[0] >> 7) / 1000), 0);
    func_02042ef4(GetSound(id), 0, &param);
}

void SoundManager::func_0203b3a8(int id, int arg)
{
    func_02043484(GetSound(id), 0, (u16)arg);
}

void SoundManager::func_0203b3c8(int arg)
{
    func_020435d8((u16)arg);
}

void SoundManager::StopSound(int id)
{
    func_02042e28(GetSound(id), 0);
}

void SoundManager::func_0203b3f0(int index, char *name)
{
    char *ext = strrchr(name, '.');

    if (ext != NULL) {
        *ext = '\0';
    }
    if (STD_CompareString(tracks[index].name, name) == 0) {
        return;
    }
    STD_CopyString(tracks[index].name, name);
    tracks[index].flags |= 0xC;
    if (name[0] != '\0') {
        tracks[index].flags |= 0x10;
    }
}

BOOL SoundManager::IsTrackPlaying(int index)
{
    if (tracks[index].flags & 0x10) {
        return FALSE;
    }
    return (tracks[index].state & 1) ? TRUE : FALSE;
}

void SoundManager::StopTrack(int index)
{
    void *handle;

    if (tracks[index].state == 0) {
        return;
    }
    handle = banks[tracks[index].sequence].handle;
    if (func_02041d78(handle) > 0) {
        func_02041e70(handle, 0);
    }
    FreeBank(tracks[index].sequence);
    FreeBank(tracks[index].wave);
    tracks[index].sequence = -1;
    tracks[index].wave = -1;
    tracks[index].state &= ~3;
}

void SoundManager::SetTrackFadeIn(int index, s32 time)
{
    tracks[index].flags &= ~4;
    tracks[index].flags |= 2;
    tracks[index].unk_28 = time;
}

void SoundManager::func_0203b57c(int index, s32 time)
{
    tracks[index].flags &= ~4;
    tracks[index].flags |= 0x82;
    tracks[index].unk_28 = time;
}

BOOL SoundManager::func_0203b5b8(int index)
{
    if (tracks[index].state & 4) {
        return FALSE;
    }
    if ((tracks[index].state & 2) && func_02041d78(banks[tracks[index].sequence].handle) > 0) {
        return TRUE;
    }
    tracks[index].state &= ~2;
    return FALSE;
}

void SoundManager::SetTrackStop(int index, s32 time)
{
    tracks[index].flags &= ~0x82;
    tracks[index].flags |= 4;
    tracks[index].unk_28 = time;
}

asm void SoundManager::func_0203b664()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x58
    mov r5, r0
    ldr r0, =0xffef
    mov r9, #0
    add r6, r0, #0xe
    add r11, r0, #0xc
    add r0, r0, #0xc
    str r0, [sp]
    ldr r0, =0xffef
    add r7, r5, #0x2a8
    add r0, r0, #0xf
    str r0, [sp, #8]
    ldr r0, =0xffef
    add r0, r0, #8
    str r0, [sp, #4]
    ldr r0, =0xffef
    add r0, r0, #0xf
    str r0, [sp, #0xc]
    add r0, r5, #0x500
    str r0, [sp, #0x10]
    ldr r0, =0xffef
    sub r0, r0, #0x72
    str r0, [sp, #0x14]
@L_0203b6c4:
    mov r0, #0x2c
    mul r10, r9, r0
    add r4, r5, r10
    add r0, r4, #0x200
    ldrsb r2, [r0, #0xc9]
    ldrh r1, [r0, #0xcc]
    mov r0, #0x30
    mla r0, r2, r0, r5
    tst r1, #4
    ldr r8, [r0, #0x84]
    beq @L_0203b740
    mov r0, r8
    bl func_02041d78
    cmp r0, #0
    ble @L_0203b728
    ldr r1, [r4, #0x2d0]
    mov r0, r8
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_02041e70
    add r0, r4, #0x200
    ldrh r1, [r0, #0xce]
    orr r1, r1, #4
    and r1, r1, r6
    strh r1, [r0, #0xce]
@L_0203b728:
    mov r0, #0
    str r0, [r4, #0x2d0]
    add r0, r4, #0x200
    ldrh r1, [r0, #0xcc]
    and r1, r1, r11
    strh r1, [r0, #0xcc]
@L_0203b740:
    add r0, r4, #0x200
    ldrh r0, [r0, #0xce]
    tst r0, #4
    beq @L_0203b778
    mov r0, r8
    bl func_02041d78
    cmp r0, #0
    addgt sp, sp, #0x58
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, r4, #0x200
    ldrh r2, [r1, #0xce]
    ldr r0, [sp]
    and r0, r2, r0
    strh r0, [r1, #0xce]
@L_0203b778:
    add r0, r4, #0x200
    ldrh r1, [r0, #0xcc]
    tst r1, #8
    beq @L_0203b7c4
    ldrh r0, [r0, #0xce]
    tst r0, #1
    beq @L_0203b7a0
    mov r0, r5
    mov r1, r9
    bl StopTrack
@L_0203b7a0:
    add r1, r4, #0x200
    ldrh r2, [r1, #0xce]
    ldr r0, [sp, #8]
    and r0, r2, r0
    strh r0, [r1, #0xce]
    ldrh r2, [r1, #0xcc]
    ldr r0, [sp, #4]
    and r0, r2, r0
    strh r0, [r1, #0xcc]
@L_0203b7c4:
    add r1, r4, #0x200
    ldrh r2, [r1, #0xcc]
    tst r2, #0x10
    beq @L_0203b868
    ldr r0, =0xffef
    and r0, r2, r0
    strh r0, [r1, #0xcc]
    ldr r1, =data_020abe44
    add r0, sp, #0x38
    add r2, r7, r10
    bl sprintf
    ldr r1, =data_020abe4c
    add r2, r7, r10
    add r0, sp, #0x18
    bl sprintf
    mov r1, #4
    cmp r9, #0
    movne r1, #1
    mov r0, r5
    add r2, sp, #0x38
    bl LoadBankAsync
    strb r0, [r4, #0x2c8]
    add r0, r4, #0x200
    ldrsb r0, [r0, #0xc8]
    cmp r0, #0
    blt @L_0203b984
    mov r0, r5
    mov r1, #3
    add r2, sp, #0x18
    bl LoadBankAsync
    strb r0, [r4, #0x2c9]
    add r0, r4, #0x200
    ldrsb r1, [r0, #0xc9]
    cmp r1, #0
    blt @L_0203b984
    ldrh r1, [r0, #0xce]
    orr r1, r1, #0x10
    strh r1, [r0, #0xce]
    ldrh r1, [r0, #0xcc]
    orr r1, r1, #1
    strh r1, [r0, #0xcc]
@L_0203b868:
    add r0, r4, #0x200
    ldrh r1, [r0, #0xcc]
    tst r1, #1
    beq @L_0203b8d4
    ldrsb r1, [r0, #0xc8]
    mov r0, r5
    bl PrepareBank
    cmp r0, #0
    beq @L_0203b984
    mov r0, r5
    add r1, r4, #0x200
    ldrsb r1, [r1, #0xc9]
    bl PrepareBank
    cmp r0, #0
    beq @L_0203b984
    add r1, r4, #0x200
    ldrsb r3, [r1, #0xc9]
    mov r0, #0x30
    ldrh r2, [r1, #0xcc]
    mla r0, r3, r0, r5
    ldr r8, [r0, #0x84]
    ldr r0, [sp, #0xc]
    and r0, r2, r0
    strh r0, [r1, #0xcc]
    ldrh r0, [r1, #0xce]
    orr r0, r0, #1
    strh r0, [r1, #0xce]
@L_0203b8d4:
    add r0, r4, #0x200
    ldrh r1, [r0, #0xcc]
    tst r1, #2
    beq @L_0203b984
    ldrh r0, [r0, #0xce]
    tst r0, #1
    beq @L_0203b970
    tst r0, #2
    bne @L_0203b958
    tst r1, #0x80
    ldr r1, [sp, #0x10]
    ldr r2, [sp, #0x10]
    ldrh r3, [r1, #0x10]
    ldrh r12, [r2, #0x16]
    ldrh r1, [r1, #0x12]
    mov r10, #1
    ldr r2, [r4, #0x2d0]
    mul r12, r1, r12
    mul r1, r3, r12
    mov r3, r1, asr #7
    ldr r1, =0x10624dd3
    movne r10, #0
    smull lr, r12, r1, r3
    mov r1, r3, lsr #0x1f
    add r12, r1, r12, asr #6
    mov r1, r12, lsl #0x18
    mov r0, r5
    mov r1, r1, asr #0x18
    bl SetFade
    mov r0, r8
    mov r2, r10
    add r1, r5, #0x44
    bl func_02041d90
@L_0203b958:
    mov r0, #0
    str r0, [r4, #0x2d0]
    add r0, r4, #0x200
    ldrh r1, [r0, #0xce]
    orr r1, r1, #2
    strh r1, [r0, #0xce]
@L_0203b970:
    add r1, r4, #0x200
    ldrh r2, [r1, #0xcc]
    ldr r0, [sp, #0x14]
    and r0, r2, r0
    strh r0, [r1, #0xcc]
@L_0203b984:
    add r9, r9, #1
    cmp r9, #2
    blt @L_0203b6c4
    add sp, sp, #0x58
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

BOOL SoundManager::func_0203b9a8(int index, const char *name, int arg)
{
    FSFileID id;
    char path[0x20];

    STD_CopyString(path, data_020abe54);
    STD_ConcatenateString(path, name);
    if (!func_0209dd60(&id, path)) {
        return FALSE;
    }
    if (STD_CompareString(streams[index].name, name) != 0) {
        func_0203ba5c(index);
    }
    STD_CopyString(streams[index].name, name);
    streams[index].unk_21 = arg;
    streams[index].flags |= 1;
    return TRUE;
}

void SoundManager::func_0203ba5c(int index)
{
    streams[index].flags |= 0xC;
}

void SoundManager::func_0203ba78(int index, const char *name)
{
    if (name != NULL && !func_0203b9a8(index, name, 0)) {
        return;
    }
    streams[index].flags |= 2;
}

asm void SoundManager::func_0203bab8(int index, u64 position)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r6, =data_020c4f60
    mov r8, r0
    mov r0, r6
    mov r7, r2
    mov r4, r1
    bl _ZN11MoviePlayer12GetFrameRateEv
    mov r5, r0
    mov r0, #0x30
    cmp r7, #0
    mul r7, r4, r0
    ble @L_0203bb74
    add r4, r8, #0x328
    ldr r0, [r4, r7]
    mov r1, #0x3e8
    bl func_02049420
    ldr r1, =0x22140
    mov r2, #0xe8000000
    cmp r0, r1
    ldr r1, [r6, #0x1a0]
    ldr r0, [r6, #0x198]
    mov r3, #3
    add r6, r1, r0
    umull r0, r1, r6, r2
    bge @L_0203bb40
    mla r1, r6, r3, r1
    mov r3, r6, asr #0x1f
    mla r1, r3, r2, r1
    mov r2, r5
    mov r3, #0
    bl _ll_udiv
    mov r1, r0
    ldr r0, [r4, r7]
    b @L_0203bb80
@L_0203bb40:
    mla r1, r6, r3, r1
    mov r3, r6, asr #0x1f
    mla r1, r3, r2, r1
    mov r2, r5
    mov r3, #0
    bl _ll_udiv
    ldr r5, =0x88888889
    mov r2, r0, lsr #0x1f
    smull r3, r1, r5, r0
    add r1, r0, r1
    ldr r0, [r4, r7]
    add r1, r2, r1, asr #4
    b @L_0203bb80
@L_0203bb74:
    add r0, r8, r7
    ldr r0, [r0, #0x328]
    mov r1, #0
@L_0203bb80:
    bl func_02049258
    add r2, r8, #0x324
    ldrh r1, [r2, r7]
    mov r0, #1
    orr r1, r1, #0x82
    strh r1, [r2, r7]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

BOOL SoundManager::func_0203bba8(int index)
{
    if (streams[index].flags & 4) {
        return FALSE;
    }
    if ((streams[index].state & 2) && func_02048d30(streams[index].handle) > 0) {
        return TRUE;
    }
    streams[index].state &= ~2;
    return FALSE;
}

BOOL SoundManager::func_0203bc10(const char *name)
{
    int i;

    for (i = 0; i < SOUND_NUM_STREAMS; i++) {
        if (STD_CompareString(streams[i].name, name) == 0) {
            return func_0203bba8(i);
        }
    }
    return FALSE;
}

void SoundManager::func_0203bc60(int index, int arg)
{
    SoundStreamInfo info;

    func_020494c0(streams[index].handle, &info);
    unk_520 = info.unk_08;
    streams[index].unk_2c = arg;
    streams[index].flags |= 4;
}

void SoundManager::func_0203bcb0(const char *name, int arg)
{
    int i;

    for (i = 0; i < SOUND_NUM_STREAMS; i++) {
        if (STD_CompareString(streams[i].name, name) == 0) {
            func_0203bc60(i, arg);
            return;
        }
    }
}

asm void SoundManager::func_0203bd04()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x60
    mov r4, r0
    ldr r0, =0xfffd
    mov r7, #0
    sub r0, r0, #2
    str r0, [sp]
    ldr r0, =0xfffd
    add r11, r4, #0x300
    sub r0, r0, #2
    str r0, [sp, #4]
    ldr r0, =0xfffd
    add r5, sp, #0x20
    add r0, r0, #1
    str r0, [sp, #0xc]
    ldr r0, =0xfffd
    sub r0, r0, #6
    str r0, [sp, #8]
    ldr r0, =0xfffd
    sub r0, r0, #6
    str r0, [sp, #0x10]
    ldr r0, =0xfffd
    add r0, r0, #1
    str r0, [sp, #0x14]
    add r0, r4, #0x500
    str r0, [sp, #0x18]
    ldr r0, =0xfffd
    sub r0, r0, #0x80
    str r0, [sp, #0x1c]
@L_0203bd78:
    mov r0, #0x30
    mul r10, r7, r0
    add r8, r4, r10
    add r1, r8, #0x300
    ldrsb r2, [r1, #0x20]
    ldr r6, [r8, #0x328]
    cmp r2, #0
    beq @L_0203bdbc
    ldr r0, =data_020c484c
    ldr r0, [r0]
    mov r0, r0, lsl #0x18
    sub r0, r2, r0, asr #24
    strb r0, [r8, #0x320]
    ldrsb r0, [r1, #0x20]
    cmp r0, #0
    movlt r0, #0
    strltb r0, [r8, #0x320]
@L_0203bdbc:
    add r1, r8, #0x300
    ldrh r2, [r1, #0x24]
    tst r2, #4
    beq @L_0203be24
    ldr r0, [sp]
    and r0, r2, r0
    strh r0, [r1, #0x24]
    mov r0, r4
    mov r1, r7
    bl func_0203bba8
    cmp r0, #0
    beq @L_0203be1c
    add r9, r4, r10
    ldr r1, [r9, #0x32c]
    mov r0, r6
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_02048f60
    add r1, r9, #0x300
    ldrh r0, [r1, #0x26]
    orr r2, r0, #4
    ldr r0, =0xfffd
    and r0, r2, r0
    strh r0, [r1, #0x26]
@L_0203be1c:
    mov r0, #0
    str r0, [r8, #0x32c]
@L_0203be24:
    add r0, r8, #0x300
    ldrh r0, [r0, #0x26]
    tst r0, #4
    beq @L_0203be68
    mov r0, r6
    bl func_02048d30
    cmp r0, #0
    addgt sp, sp, #0x60
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r3, r4, r10
    add r1, r3, #0x300
    ldrh r2, [r1, #0x26]
    ldr r0, [sp, #4]
    and r0, r2, r0
    strh r0, [r1, #0x26]
    mov r0, #0
    strb r0, [r3, #0x320]
@L_0203be68:
    add r0, r8, #0x300
    ldrh r1, [r0, #0x24]
    tst r1, #8
    beq @L_0203becc
    ldrh r0, [r0, #0x26]
    tst r0, #4
    bne @L_0203becc
    tst r0, #1
    beq @L_0203bea4
    mov r0, r6
    bl func_02048bb8
    add r0, r8, #0x300
    ldrh r1, [r0, #0x26]
    orr r1, r1, #8
    strh r1, [r0, #0x26]
@L_0203bea4:
    add r0, r4, r10
    add r1, r0, #0x300
    ldrh r2, [r1, #0x26]
    ldr r0, [sp, #0xc]
    and r0, r2, r0
    strh r0, [r1, #0x26]
    ldrh r2, [r1, #0x24]
    ldr r0, [sp, #8]
    and r0, r2, r0
    strh r0, [r1, #0x24]
@L_0203becc:
    add r0, r8, #0x300
    ldrh r0, [r0, #0x26]
    tst r0, #8
    beq @L_0203bf10
    mov r0, r6
    bl func_02048730
    cmp r0, #0
    addgt sp, sp, #0x60
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r3, r4, r10
    add r1, r3, #0x300
    ldrh r2, [r1, #0x26]
    ldr r0, [sp, #0x10]
    and r0, r2, r0
    strh r0, [r1, #0x26]
    mov r0, #0
    strb r0, [r3, #0x320]
@L_0203bf10:
    add r0, r8, #0x300
    ldrh r0, [r0, #0x24]
    tst r0, #1
    beq @L_0203bfcc
    add r9, r4, r10
    add r1, r9, #0x300
    ldrh r2, [r1, #0x24]
    ldr r0, [sp, #0x14]
    and r0, r2, r0
    strh r0, [r1, #0x24]
    ldrh r0, [r1, #0x26]
    tst r0, #1
    bne @L_0203bfbc
    ldr r1, =data_020abe64
    mov r0, r5
    bl STD_CopyString
    mov r0, r5
    add r1, r11, r10
    bl STD_ConcatenateString
    mov r0, r5
    mov r1, r5
    mov r2, #0x40
    bl GetSoundFilePath
    cmp r0, #0
    beq @L_0203c0c8
    add r0, r9, #0x300
    ldrsb r0, [r0, #0x21]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    bl func_0204871c
    mov r0, #0
    strb r0, [r9, #0x321]
    mov r0, r5
    mov r1, #0x6000
    mov r2, #1
    bl func_020487c4
    cmp r0, #0
    blt @L_0203c0c8
    str r0, [r9, #0x328]
    mov r6, r0
@L_0203bfbc:
    add r0, r8, #0x300
    ldrh r1, [r0, #0x26]
    orr r1, r1, #1
    strh r1, [r0, #0x26]
@L_0203bfcc:
    add r0, r8, #0x300
    ldrh r1, [r0, #0x24]
    tst r1, #2
    beq @L_0203c09c
    ldrsb r1, [r0, #0x20]
    cmp r1, #0
    bne @L_0203c09c
    ldrh r0, [r0, #0x26]
    tst r0, #1
    beq @L_0203c088
    mov r0, r4
    mov r1, r7
    bl func_0203bba8
    cmp r0, #0
    bne @L_0203c078
    ldr r2, [sp, #0x18]
    add r9, r4, r10
    ldrh r10, [r2, #0x12]
    ldrh r3, [r2, #0x16]
    ldr r1, [sp, #0x18]
    ldr r2, [r9, #0x32c]
    mul r3, r10, r3
    ldrh r1, [r1, #0x10]
    mov r0, r4
    mul r3, r1, r3
    mov r12, r3, asr #7
    ldr r3, =0x10624dd3
    smull r10, r1, r3, r12
    mov r3, r12, lsr #0x1f
    add r1, r3, r1, asr #6
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    bl SetFade
    add r0, r9, #0x300
    ldrh r0, [r0, #0x24]
    add r1, r4, #0x44
    tst r0, #0x80
    moveq r0, #1
    movne r0, #0
    mov r0, r0, lsl #0x18
    mov r2, r0, asr #0x18
    mov r0, r6
    bl func_02048d80
@L_0203c078:
    add r0, r8, #0x300
    ldrh r1, [r0, #0x26]
    orr r1, r1, #2
    strh r1, [r0, #0x26]
@L_0203c088:
    add r1, r8, #0x300
    ldrh r2, [r1, #0x24]
    ldr r0, [sp, #0x1c]
    and r0, r2, r0
    strh r0, [r1, #0x24]
@L_0203c09c:
    add r0, r8, #0x300
    ldrh r0, [r0, #0x26]
    tst r0, #2
    beq @L_0203c0c8
    mov r0, r6
    bl func_02048d30
    cmp r0, #0
    bne @L_0203c0c8
    mov r0, r4
    mov r1, r7
    bl func_0203ba5c
@L_0203c0c8:
    add r7, r7, #1
    cmp r7, #1
    blt @L_0203bd78
    add sp, sp, #0x60
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
