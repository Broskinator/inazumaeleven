#include "sound/SoundManager.hpp"
#include "system/GameHeap.hpp"

extern "C" char data_020abc68[];
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
extern "C" char data_020c47b4[];
extern "C" char data_020c484c[];
extern "C" char data_020c4f60[];
extern "C" char data_020c6364[];
extern "C" void ApplyVolume(void);
extern "C" void EndScene(void);
extern "C" void FS_CloseFile(void);
extern "C" void FS_InitFile(void);
extern "C" void FindBank(void);
extern "C" void FreeBank(void);
extern "C" void GetSound(void);
extern "C" void LoadBank(void);
extern "C" void LoadBankAsync(void);
extern "C" void LoadPair(void);
extern "C" void MI_CpuFill8(void);
extern "C" void PrepareBank(void);
extern "C" void SND_Init(void);
extern "C" void SND_LockChannel(void);
extern "C" void STD_CompareString(void);
extern "C" void STD_ConcatenateString(void);
extern "C" void STD_CopyString(void);
extern "C" void SetFade(void);
extern "C" void SetTrackFadeIn(void);
extern "C" void SetTrackStop(void);
extern "C" void StopTrack(void);
extern "C" void UnloadPair(void);
extern "C" void _ZN11FileManager13LoadPackAllocEPKcS1_P8GameHeapi(void);
extern "C" void _ZN11FileManager13LoadPackAsyncEPKcS1_PvP8GameHeapi(void);
extern "C" void _ZN11FileManager16GetPackEntrySizeEPKcS1_(void);
extern "C" void _ZN11FileManager6CancelEPvi(void);
extern "C" void _ZN11FileManager7ReleaseEPv(void);
extern "C" void _ZN11MoviePlayer12GetFrameRateEv(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ll_udiv(void);
extern "C" void func_0200c64c(void);
extern "C" void func_0203a3c4(void);
extern "C" void func_0203a3e0(void);
extern "C" void func_0203a5e8(void);
extern "C" void func_0203a724(void);
extern "C" void func_0203a77c(void);
extern "C" void func_0203a790(void);
extern "C" void func_0203a7b4(void);
extern "C" void func_0203a87c(void);
extern "C" void func_0203a904(void);
extern "C" void func_0203b3c8(void);
extern "C" void func_0203b3f0(void);
extern "C" void func_0203b57c(void);
extern "C" void func_0203b5b8(void);
extern "C" void func_0203b664(void);
extern "C" void func_0203b9a8(void);
extern "C" void func_0203ba5c(void);
extern "C" void func_0203ba78(void);
extern "C" void func_0203bab8(void);
extern "C" void func_0203bba8(void);
extern "C" void func_0203bc60(void);
extern "C" void func_0203bd04(void);
extern "C" void func_020406d8(void);
extern "C" void func_02040854(void);
extern "C" void func_02040884(void);
extern "C" void func_020408b4(void);
extern "C" void func_020408e0(void);
extern "C" void func_02040924(void);
extern "C" void func_02040b64(void);
extern "C" void func_02040c00(void);
extern "C" void func_02040c98(void);
extern "C" void func_02041530(void);
extern "C" void func_02041964(void);
extern "C" void func_02041c3c(void);
extern "C" void func_02041d40(void);
extern "C" void func_02041d78(void);
extern "C" void func_02041d90(void);
extern "C" void func_02041e70(void);
extern "C" void func_02041f10(void);
extern "C" void func_02042aec(void);
extern "C" void func_02042be4(void);
extern "C" void func_02042d98(void);
extern "C" void func_02042e28(void);
extern "C" void func_02042ef4(void);
extern "C" void func_02043484(void);
extern "C" void func_020435d8(void);
extern "C" void func_02043644(void);
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
extern "C" void func_02048d30(void);
extern "C" void func_02048d80(void);
extern "C" void func_02048f60(void);
extern "C" void func_02049180(void);
extern "C" void func_02049258(void);
extern "C" void func_02049420(void);
extern "C" void func_020494c0(void);
extern "C" void func_0209dd60(void);
extern "C" void func_0209ddd0(void);
extern "C" void sprintf(void);
extern "C" void strrchr(void);

int ReadSoundFile(const char *name, void *buffer, s32 size);

asm int ReadSoundFile(const char *name, void *buffer, s32 size)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x48
    add r5, sp, #0
    mov r7, r0
    mov r0, r5
    mov r6, r1
    mov r4, r2
    bl FS_InitFile
    mov r0, r5
    mov r1, r7
    bl func_0209ddd0
    cmp r0, #0
    addeq sp, sp, #0x48
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl func_0200c64c
    mov r4, r0
    mov r0, r5
    bl FS_CloseFile
    mov r0, r4
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
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

asm void * SoundManager::Alloc(void *arg, u32 size)
{
    ldr r0, =data_020c47b4
    ldr r12, =_ZN8GameHeap5AllocEiii
    mov r2, #4
    mov r3, #1
    bx r12
}

asm void * SoundManager::Free(void *arg, void *ptr)
{
    stmdb sp!, {r4, lr}
    ldr r0, =data_020c47b4
    mov r4, r1
    bl _ZN8GameHeap4FreeEPv
    mov r0, r4
    ldmia sp!, {r4, pc}
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

asm void SoundManager::func_02039bcc()
{
    ldr r12, =func_02040c00
    mov r0, #0
    bx r12
}

asm void SoundManager::func_02039bdc()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r5, r0
    mov r0, r4
    bl func_02040c98
    add r0, r5, #0x300
    ldrh r0, [r0, #0x26]
    tst r0, #4
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x328]
    mov r1, r4
    bl func_02048f60
    add r1, r5, #0x300
    ldrh r2, [r1, #0x26]
    ldr r0, =0xfffb
    and r0, r2, r0
    strh r0, [r1, #0x26]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void SoundManager::func_02039c28()
{
    ldr r12, =func_02040b64
    mov r0, #1
    bx r12
}

asm void SoundManager::Update()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_0203a904
    mov r0, r5
    bl func_0203b664
    mov r0, r5
    bl func_0203bd04
    mov r4, #0
@L_02039c58:
    add r0, r5, r4, lsl #2
    add r0, r0, #0x200
    ldrh r1, [r0, #0x9a]
    cmp r1, #0
    beq @L_02039c8c
    ldrsb r1, [r0, #0x98]
    mov r0, r5
    bl PrepareBank
    add r0, r5, r4, lsl #2
    add r0, r0, #0x200
    ldrsb r1, [r0, #0x99]
    mov r0, r5
    bl PrepareBank
@L_02039c8c:
    add r4, r4, #1
    cmp r4, #4
    blt @L_02039c58
    ldmia sp!, {r3, r4, r5, pc}
}

asm BOOL SoundManager::IsIdle()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_0203b664
    mov r2, #0
    mov r0, #0x2c
@L_02039cb0:
    mla r1, r2, r0, r4
    add r1, r1, #0x200
    ldrh r1, [r1, #0xcc]
    tst r1, #0x11
    movne r0, #0
    ldmneia sp!, {r4, pc}
    add r2, r2, #1
    cmp r2, #2
    blt @L_02039cb0
    mov r0, #1
    ldmia sp!, {r4, pc}
}

asm BOOL SoundManager::AreBanksReady()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
@L_02039ce8:
    add r0, r5, r4, lsl #2
    add r0, r0, #0x200
    ldrh r1, [r0, #0x9a]
    cmp r1, #0
    beq @L_02039d34
    ldrsb r1, [r0, #0x98]
    mov r0, r5
    bl PrepareBank
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    add r0, r5, r4, lsl #2
    add r0, r0, #0x200
    ldrsb r1, [r0, #0x99]
    mov r0, r5
    bl PrepareBank
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_02039d34:
    add r4, r4, #1
    cmp r4, #4
    blt @L_02039ce8
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
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

asm void SoundManager::EndScene()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x51c]
    cmp r1, #0xb
    addls pc, pc, r1, lsl #2
    b @L_0203a05c
    b @L_0203a05c
    b @L_0203a05c
    b @L_0203a05c
    b @L_0203a05c
    b @L_0203a030
    b @L_0203a034
    b @L_0203a040
    b @L_0203a038
    b @L_0203a05c
    b @L_0203a044
    b @L_0203a048
    b @L_0203a05c
@L_0203a030:
    b @L_0203a054
@L_0203a034:
    b @L_0203a030
@L_0203a038:
    mov r1, #1
    b @L_0203a058
@L_0203a040:
    b @L_0203a048
@L_0203a044:
    b @L_0203a038
@L_0203a048:
    mov r1, #1
    bl UnloadPair
    mov r0, r4
@L_0203a054:
    mov r1, #2
@L_0203a058:
    bl UnloadPair
@L_0203a05c:
    mov r0, #0
    str r0, [r4, #0x51c]
    ldmia sp!, {r4, pc}
}

asm void SoundManager::SetVolume(int volume)
{
    add r2, r0, #0x500
    strh r1, [r2, #0x16]
    ldrh r1, [r2, #0x16]
    ldr r12, =ApplyVolume
    bx r12
}

asm void SoundManager::SetUnk518(int value)
{
    add r0, r0, #0x500
    strh r1, [r0, #0x18]
    bx lr
}

asm void SoundManager::ApplyVolume(int volume)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    add r2, r5, #0x500
    ldrh r3, [r2, #0x12]
    ldrh r4, [r2, #0x10]
    ldr r2, =0x10624dd3
    mul r1, r3, r1
    mul r1, r4, r1
    mov r3, r1, asr #7
    smull r1, r4, r2, r3
    mov r1, r3, lsr #0x1f
    add r4, r1, r4, asr #6
    mov r1, r4, lsl #0x18
    mov r1, r1, asr #0x18
    mov r2, #0x3e8
    bl SetFade
    mov r4, #0
    mov r6, #0x30
    mov r7, #0x2c
@L_0203a0d8:
    mla r0, r4, r7, r5
    add r0, r0, #0x200
    ldrh r1, [r0, #0xce]
    tst r1, #2
    beq @L_0203a100
    ldrsb r2, [r0, #0xc9]
    add r1, r5, #0x44
    mla r0, r2, r6, r5
    ldr r0, [r0, #0x84]
    bl func_02041f10
@L_0203a100:
    add r4, r4, #1
    cmp r4, #2
    blt @L_0203a0d8
    add r0, r5, #0x300
    ldrh r0, [r0, #0x26]
    tst r0, #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [r5, #0x328]
    add r1, r5, #0x44
    bl func_02049180
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

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

asm void SoundManager::func_0203a154()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r5, r0
    mov r1, r4
    bl func_0203a7b4
    mov r0, r5
    mov r1, r4
    bl func_0203b3c8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void SoundManager::SaveState(void *state)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    mov r5, #0
    mov r6, r1
    add r4, r7, #0x58
    mov r9, r5
    mov r8, #0x30
@L_0203a194:
    add r0, r7, r5, lsl #2
    add r0, r0, #0x200
    ldrh r1, [r0, #0x9a]
    cmp r1, #0
    streqb r9, [r6, r5, lsl #5]
    beq @L_0203a1bc
    ldrsb r2, [r0, #0x99]
    add r0, r6, r5, lsl #5
    mla r1, r2, r8, r4
    bl STD_CopyString
@L_0203a1bc:
    add r5, r5, #1
    cmp r5, #4
    blt @L_0203a194
    mov r1, #0
@L_0203a1cc:
    mov r0, #0x28
    mul r3, r1, r0
    add r0, r7, r3
    add r2, r0, #0x400
    ldrsh r2, [r2, #0xe0]
    mov r4, #0x10
    cmp r2, #0
    beq @L_0203a230
    add r9, r6, r3
    add r8, r0, #0x4c0
    add r5, r9, #0x80
@L_0203a1f8:
    ldrb r3, [r8]
    ldrb r2, [r8, #1]
    add r8, r8, #2
    subs r4, r4, #1
    strb r2, [r5, #1]
    strb r3, [r5], #2
    bne @L_0203a1f8
    add r2, r0, #0x400
    ldrsh r3, [r2, #0xe0]
    strh r3, [r9, #0xa0]
    ldrsh r2, [r2, #0xe2]
    strh r2, [r9, #0xa2]
    ldr r0, [r0, #0x4e4]
    b @L_0203a2c0
@L_0203a230:
    add r2, r0, #0x300
    ldrsh r2, [r2, #0xf0]
    add r9, r6, r3
    cmp r2, #0
    beq @L_0203a284
    add r8, r0, #0x3d0
    add r5, r9, #0x80
@L_0203a24c:
    ldrb r3, [r8]
    ldrb r2, [r8, #1]
    add r8, r8, #2
    subs r4, r4, #1
    strb r2, [r5, #1]
    strb r3, [r5], #2
    bne @L_0203a24c
    add r2, r0, #0x300
    ldrsh r3, [r2, #0xf0]
    strh r3, [r9, #0xa0]
    ldrsh r2, [r2, #0xf2]
    strh r2, [r9, #0xa2]
    ldr r0, [r0, #0x3f4]
    b @L_0203a2c0
@L_0203a284:
    add r8, r0, #0x380
    add r5, r9, #0x80
@L_0203a28c:
    ldrb r3, [r8]
    ldrb r2, [r8, #1]
    add r8, r8, #2
    subs r4, r4, #1
    strb r2, [r5, #1]
    strb r3, [r5], #2
    bne @L_0203a28c
    add r2, r0, #0x300
    ldrsh r3, [r2, #0xa0]
    strh r3, [r9, #0xa0]
    ldrsh r2, [r2, #0xa2]
    strh r2, [r9, #0xa2]
    ldr r0, [r0, #0x3a4]
@L_0203a2c0:
    str r0, [r9, #0xa4]
    add r1, r1, #1
    cmp r1, #2
    blt @L_0203a1cc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void SoundManager::RestoreState(void *state)
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

asm void SoundManager::func_0203a3c4(int index, int id)
{
    stmdb sp!, {r3, lr}
    ldr r12, =data_020abc68
    mov r3, #0
    ldr r2, [r12, r2, lsl #2]
    bl func_0203a3e0
    ldmia sp!, {r3, pc}
}

asm void SoundManager::func_0203a3e0(int index, const char *name, int arg)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r2
    mov r9, r0
    mov r8, r1
    mov r0, r7
    mov r1, #0x2e
    mov r6, r3
    mov r4, #1
    bl strrchr
    movs r5, r0
    beq @L_0203a434
    ldr r1, =data_020abdac
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203a430
    ldr r1, =data_020abdb4
    mov r0, r5
    bl STD_CompareString
    cmp r0, #0
    bne @L_0203a434
@L_0203a430:
    mov r4, #2
@L_0203a434:
    mov r0, #0x28
    mul r5, r8, r0
    add r1, r9, r5
    add r2, r1, #0x300
    add r0, r9, #0x330
    mov r1, r7
    add r0, r0, r5
    strh r4, [r2, #0x50]
    bl STD_CopyString
    cmp r4, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r9, r5
    add r0, r0, #0x300
    ldrsh r0, [r0, #0xa0]
    cmp r0, #1
    beq @L_0203a488
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl func_0203b3f0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0203a488:
    add r1, r9, #0x2a8
    mov r0, #0x2c
    mla r0, r8, r0, r1
    mov r1, r7
    bl STD_CompareString
    cmp r0, #0
    cmpne r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r9
    mov r1, r8
    mov r2, r6
    bl func_0203a790
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl func_0203b3f0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void SoundManager::func_0203a4d4(int index, const char *name, int arg)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r2
    mov r9, r0
    mov r8, r1
    mov r0, r7
    mov r1, #0x2e
    mov r6, r3
    mov r4, #1
    bl strrchr
    movs r5, r0
    beq @L_0203a528
    ldr r1, =data_020abdbc
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203a524
    ldr r1, =data_020abdc4
    mov r0, r5
    bl STD_CompareString
    cmp r0, #0
    bne @L_0203a528
@L_0203a524:
    mov r4, #2
@L_0203a528:
    mov r0, #0x28
    mul r5, r8, r0
    add r1, r9, r5
    add r2, r1, #0x400
    add r0, r9, #0x470
    mov r1, r7
    add r0, r0, r5
    strh r4, [r2, #0x90]
    bl STD_CopyString
    cmp r4, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r9, r5
    add r0, r0, #0x300
    ldrsh r0, [r0, #0xa0]
    cmp r0, #1
    beq @L_0203a57c
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl func_0203b3f0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0203a57c:
    add r1, r9, #0x2a8
    mov r0, #0x2c
    mla r0, r8, r0, r1
    mov r1, r7
    bl STD_CompareString
    cmp r0, #0
    cmpne r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r9
    mov r1, r8
    mov r2, r6
    bl func_0203a790
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl func_0203b3f0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void SoundManager::func_0203a5c8(int index, int id, int arg, int arg2)
{
    stmdb sp!, {r3, lr}
    ldr lr, [sp, #8]
    ldr r12, =data_020abc68
    str lr, [sp]
    ldr r2, [r12, r2, lsl #2]
    bl func_0203a5e8
    ldmia sp!, {r3, pc}
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

asm void SoundManager::func_0203a6f8(int index, int arg, int arg2)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    add lr, r0, #0x330
    mov r12, #0x28
    mov r4, r2
    mla r2, r1, r12, lr
    str r3, [sp]
    mov r3, r4
    bl func_0203a5e8
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void SoundManager::func_0203a724(int index, int arg, int arg2)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    add lr, r0, #0x470
    mov r12, #0x28
    mov r4, r2
    mla r2, r1, r12, lr
    str r3, [sp]
    mov r3, r4
    bl func_0203a5e8
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void SoundManager::func_0203a750(int index, int arg)
{
    ldr r12, =func_0203a6f8
    mov r3, r2
    mov r2, #0
    bx r12
}

asm void SoundManager::func_0203a764(int index, int id, int arg)
{
    stmdb sp!, {r3, lr}
    ldr r12, =data_020abc68
    ldr r2, [r12, r2, lsl #2]
    bl func_0203a77c
    ldmia sp!, {r3, pc}
}

asm void SoundManager::func_0203a77c(int index, const char *name, int arg)
{
    stmdb sp!, {r3, lr}
    str r3, [sp]
    mov r3, #0
    bl func_0203a5e8
    ldmia sp!, {r3, pc}
}

asm void SoundManager::func_0203a790(int index, int arg)
{
    mov r3, #0x28
    mla r12, r1, r3, r0
    str r2, [r12, #0x3a4]
    sub r1, r3, #0x29
    add r0, r12, #0x300
    strh r1, [r0, #0xf0]
    mov r0, #0
    str r0, [r12, #0x3f4]
    bx lr
}

asm void SoundManager::func_0203a7b4(int arg)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, #0
@L_0203a7c4:
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_0203a790
    add r4, r4, #1
    cmp r4, #2
    blt @L_0203a7c4
    ldmia sp!, {r4, r5, r6, pc}
}

asm void SoundManager::func_0203a7e4(int arg)
{
    ldr r12, =func_0203a7b4
    bx r12
}

asm void SoundManager::func_0203a7f0(int index, int arg)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r3, #0x28
    mul r3, r1, r3
    add r1, r0, #0x420
    add r4, r0, r3
    add lr, r1, r3
    add r12, r4, #0x3d0
    mov r6, #0x10
@L_0203a810:
    ldrb r5, [lr]
    ldrb r4, [lr, #1]
    add lr, lr, #2
    subs r6, r6, #1
    strb r4, [r12, #1]
    strb r5, [r12], #2
    bne @L_0203a810
    add r6, r0, r3
    add r4, r6, #0x400
    ldrsh r5, [r4, #0x40]
    add r12, r6, #0x300
    add lr, r0, #0xf2
    strh r5, [r12, #0xf0]
    ldrsh r4, [r4, #0x42]
    add lr, lr, #0x300
    add r12, r0, #0x3f4
    strh r4, [lr, r3]
    ldr r4, [r6, #0x444]
    mov r0, #1
    str r4, [r12, r3]
    strh r0, [lr, r3]
    str r2, [r12, r3]
    add r0, r1, r3
    mov r1, #0
    mov r2, #0x28
    bl MI_CpuFill8
    ldmia sp!, {r4, r5, r6, pc}
}

asm BOOL SoundManager::func_0203a87c(int index)
{
    stmdb sp!, {r3, lr}
    mov r2, #0x28
    mla r2, r1, r2, r0
    add r2, r2, #0x300
    ldrsh r2, [r2, #0xa0]
    cmp r2, #1
    beq @L_0203a8a4
    cmp r2, #2
    beq @L_0203a8ac
    b @L_0203a8b8
@L_0203a8a4:
    bl func_0203b5b8
    ldmia sp!, {r3, pc}
@L_0203a8ac:
    mov r1, #0
    bl func_0203bba8
    ldmia sp!, {r3, pc}
@L_0203a8b8:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm BOOL SoundManager::func_0203a8c0(int index)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r1, #0x28
    mul r2, r4, r1
    mov r5, r0
    add r0, r5, #0x380
    add r1, r5, #0x330
    add r0, r0, r2
    add r1, r1, r2
    bl STD_CompareString
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r1, r4
    bl func_0203a87c
    ldmia sp!, {r3, r4, r5, pc}
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

asm s8 SoundManager::FindBank(int type)
{
    stmdb sp!, {r4, lr}
    mov r2, #0x30
    mov r4, #0
    mov r3, r2
@L_0203abd0:
    cmp r1, #4
    beq @L_0203ac00
    mla lr, r4, r3, r0
    ldr r12, [lr, #0x80]
    cmp r12, #4
    beq @L_0203ac18
    ldr r12, [lr, #0x7c]
    cmp r12, #0
    bne @L_0203ac18
    mov r0, r4, lsl #0x18
    mov r0, r0, asr #0x18
    ldmia sp!, {r4, pc}
@L_0203ac00:
    mla r12, r4, r2, r0
    ldr r12, [r12, #0x80]
    cmp r1, r12
    moveq r0, r4, lsl #0x18
    moveq r0, r0, asr #0x18
    ldmeqia sp!, {r4, pc}
@L_0203ac18:
    add r4, r4, #1
    cmp r4, #0xc
    blt @L_0203abd0
    mvn r0, #0
    ldmia sp!, {r4, pc}
}

asm int SoundManager::LoadBank(int type, const char *name)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x84
    mov r10, r0
    mov r9, r1
    mov r8, r2
    bl FindBank
    movs r6, r0
    addmi sp, sp, #0x84
    ldmmiia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r2, #0x30
    mul r7, r6, r2
    add r5, r10, #0x7c
    ldr r0, [r5, r7]
    cmp r0, #0
    beq @L_0203acf0
    cmp r0, #1
    beq @L_0203ac7c
    cmp r0, #2
    beq @L_0203acd8
    b @L_0203ad80
@L_0203ac7c:
    ldr r0, [r10]
    add r4, r10, #0x78
    ldr r0, [r0]
    ldr r1, [r4, r7]
    cmp r0, #0
    subeq r0, r2, #0x31
    beq @L_0203ac9c
    bl _ZN11FileManager7ReleaseEPv
@L_0203ac9c:
    cmp r0, #0
    bne @L_0203acd0
    ldr r0, [r10]
    ldr r1, [r4, r7]
    ldr r0, [r0]
    cmp r0, #0
    beq @L_0203acc0
    mov r2, #0
    bl _ZN11FileManager6CancelEPvi
@L_0203acc0:
    add r0, r10, r7
    mov r1, #0
    strb r1, [r0, #0x58]
    b @L_0203acd8
@L_0203acd0:
    mov r0, #2
    str r0, [r5, r7]
@L_0203acd8:
    add r0, r10, #0x58
    mov r1, r8
    add r0, r0, r7
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203ad80
@L_0203acf0:
    add r0, r10, #0x58
    mov r1, r8
    add r0, r0, r7
    bl STD_CopyString
    add r4, sp, #4
    ldr r1, =data_020abddc
    mov r0, r4
    bl STD_CopyString
    mov r0, r4
    mov r1, r8
    bl STD_ConcatenateString
    cmp r9, #4
    bne @L_0203ad44
    ldr r0, =data_020c6364
    ldr r1, =data_020abdec
    mov r2, r8
    bl _ZN11FileManager16GetPackEntrySizeEPKcS1_
    cmp r0, #0x64000
    addgt sp, sp, #0x84
    mvngt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0203ad44:
    mov r4, #4
    str r4, [sp]
    ldr r3, [r10]
    mov r2, r8
    ldr r0, =data_020c6364
    ldr r1, =data_020abe04
    add r8, r10, #0x78
    bl _ZN11FileManager13LoadPackAllocEPKcS1_P8GameHeapi
    cmp r0, #0
    str r0, [r8, r7]
    addeq sp, sp, #0x84
    subeq r0, r4, #5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #2
    str r0, [r5, r7]
@L_0203ad80:
    add r2, r10, r7
    mov r0, r10
    mov r1, r6
    str r9, [r2, #0x80]
    bl PrepareBank
    mov r0, r6
    add sp, sp, #0x84
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void SoundManager::FreeBank(int index)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r2, #0x30
    mul r5, r1, r2
    mov r6, r0
    add r4, r6, #0x7c
    ldr r0, [r4, r5]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r0, #3
    bne @L_0203ae44
    add r1, r6, r5
    ldr r0, [r1, #0x80]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_0203ae44
    b @L_0203ae44
    b @L_0203ae00
    b @L_0203ae14
    b @L_0203ae3c
    b @L_0203ae00
@L_0203ae00:
    ldr r0, [r1, #0x84]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_02041964
    b @L_0203ae44
@L_0203ae14:
    add r7, r6, #0x84
    ldr r0, [r7, r5]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_02043644
    ldr r0, [r7, r5]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_02042d98
    b @L_0203ae44
@L_0203ae3c:
    ldr r0, [r1, #0x84]
    bl func_02041d40
@L_0203ae44:
    add r1, r6, r5
    ldr r0, [r1, #0x80]
    cmp r0, #4
    beq @L_0203aea4
    ldr r0, [r4, r5]
    cmp r0, #1
    bne @L_0203ae7c
    ldr r0, [r6]
    ldr r1, [r1, #0x78]
    ldr r0, [r0]
    cmp r0, #0
    beq @L_0203ae7c
    mov r2, #0
    bl _ZN11FileManager6CancelEPvi
@L_0203ae7c:
    add r1, r6, r5
    ldr r0, [r6]
    ldr r1, [r1, #0x78]
    bl _ZN8GameHeap4FreeEPv
    add r0, r6, #0x58
    add r0, r0, r5
    mov r1, #0
    mov r2, #0x30
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203aea4:
    mov r0, #2
    str r0, [r4, r5]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm int SoundManager::LoadBankAsync(int type, const char *name)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x88
    mov r9, r0
    mov r8, r1
    mov r4, r2
    bl FindBank
    movs r6, r0
    addmi sp, sp, #0x88
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #0x30
    mul r7, r6, r0
    add r5, r9, #0x7c
    ldr r0, [r5, r7]
    cmp r0, #0
    beq @L_0203af34
    cmp r0, #1
    beq @L_0203aefc
    cmp r0, #2
    bne @L_0203afa0
@L_0203aefc:
    add r0, r9, #0x58
    mov r1, r4
    add r0, r0, r7
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203afa0
    ldr r0, [r9]
    add r1, r9, r7
    ldr r0, [r0]
    ldr r1, [r1, #0x78]
    cmp r0, #0
    beq @L_0203af34
    mov r2, #0
    bl _ZN11FileManager6CancelEPvi
@L_0203af34:
    add r0, r9, #0x58
    mov r1, r4
    add r0, r0, r7
    bl STD_CopyString
    add r10, sp, #8
    ldr r1, =data_020abe1c
    mov r0, r10
    bl STD_CopyString
    mov r0, r10
    mov r1, r4
    bl STD_ConcatenateString
    mov r2, r4
    ldr r0, [r9]
    mov r10, #4
    stmia sp, {r0, r10}
    add r4, r9, #0x78
    ldr r0, =data_020c6364
    ldr r1, =data_020abe2c
    ldr r3, [r4, r7]
    bl _ZN11FileManager13LoadPackAsyncEPKcS1_PvP8GameHeapi
    cmp r0, #0
    str r0, [r4, r7]
    addeq sp, sp, #0x88
    subeq r0, r10, #5
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #1
    str r0, [r5, r7]
@L_0203afa0:
    add r1, r9, r7
    mov r0, r6
    str r8, [r1, #0x80]
    add sp, sp, #0x88
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm BOOL SoundManager::PrepareBank(int index)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r2, #0x30
    mul r5, r1, r2
    mov r6, r0
    add r4, r6, #0x7c
    ldr r0, [r4, r5]
    cmp r0, #1
    beq @L_0203aff4
    cmp r0, #2
    beq @L_0203b03c
    cmp r0, #3
    beq @L_0203b02c
    b @L_0203b034
@L_0203aff4:
    ldr r0, [r6]
    add r1, r6, r5
    ldr r0, [r0]
    ldr r1, [r1, #0x78]
    cmp r0, #0
    subeq r0, r2, #0x31
    beq @L_0203b014
    bl _ZN11FileManager7ReleaseEPv
@L_0203b014:
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, #2
    str r0, [r4, r5]
    b @L_0203b03c
@L_0203b02c:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_0203b034:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_0203b03c:
    add r2, r6, r5
    ldr r0, [r2, #0x80]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_0203b094
    b @L_0203b094
    b @L_0203b064
    b @L_0203b078
    b @L_0203b084
    b @L_0203b064
@L_0203b064:
    mov r1, #0
    ldr r0, [r2, #0x78]
    mov r2, r1
    bl func_02041530
    b @L_0203b08c
@L_0203b078:
    ldr r0, [r2, #0x78]
    bl func_02042be4
    b @L_0203b08c
@L_0203b084:
    ldr r0, [r2, #0x78]
    bl func_02041c3c
@L_0203b08c:
    add r1, r6, r5
    str r0, [r1, #0x84]
@L_0203b094:
    mov r0, #3
    str r0, [r4, r5]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

asm BOOL SoundManager::LoadPair(int index, const char *wave, const char *effects)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    add r0, r6, r5, lsl #2
    add r0, r0, #0x200
    ldrsb r4, [r0, #0x98]
    add r1, r6, #0x58
    mov r0, #0x30
    mla r1, r4, r0, r1
    mov r7, r2
    mov r0, r7
    mov r4, r3
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203b12c
    add r0, r6, r5, lsl #2
    add r0, r0, #0x200
    ldrh r1, [r0, #0x9a]
    cmp r1, #0
    beq @L_0203b100
    ldrsb r1, [r0, #0x98]
    mov r0, r6
    bl FreeBank
@L_0203b100:
    mov r0, r6
    mov r2, r7
    mov r1, #1
    bl LoadBank
    add r1, r6, r5, lsl #2
    strb r0, [r1, #0x298]
    add r0, r1, #0x200
    ldrsb r0, [r0, #0x98]
    cmp r0, #0
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203b12c:
    add r0, r6, r5, lsl #2
    add r0, r0, #0x200
    ldrsb r2, [r0, #0x99]
    add r1, r6, #0x58
    mov r0, #0x30
    mla r1, r2, r0, r1
    mov r0, r4
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203b1a0
    add r0, r6, r5, lsl #2
    add r0, r0, #0x200
    ldrh r1, [r0, #0x9a]
    cmp r1, #0
    beq @L_0203b174
    ldrsb r1, [r0, #0x99]
    mov r0, r6
    bl FreeBank
@L_0203b174:
    mov r0, r6
    mov r2, r4
    mov r1, #2
    bl LoadBank
    add r1, r6, r5, lsl #2
    strb r0, [r1, #0x299]
    add r0, r1, #0x200
    ldrsb r0, [r0, #0x99]
    cmp r0, #0
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203b1a0:
    add r0, r6, r5, lsl #2
    add r1, r0, #0x200
    mov r0, #1
    strh r0, [r1, #0x9a]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm BOOL SoundManager::LoadPairAsync(int index, const char *wave, const char *effects)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    add r0, r6, r5, lsl #2
    add r0, r0, #0x200
    ldrsb r4, [r0, #0x98]
    add r1, r6, #0x58
    mov r0, #0x30
    mla r1, r4, r0, r1
    mov r7, r2
    mov r0, r7
    mov r4, r3
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203b23c
    add r0, r6, r5, lsl #2
    add r0, r0, #0x200
    ldrh r1, [r0, #0x9a]
    cmp r1, #0
    beq @L_0203b210
    ldrsb r1, [r0, #0x98]
    mov r0, r6
    bl FreeBank
@L_0203b210:
    mov r0, r6
    mov r2, r7
    mov r1, #1
    bl LoadBankAsync
    add r1, r6, r5, lsl #2
    strb r0, [r1, #0x298]
    add r0, r1, #0x200
    ldrsb r0, [r0, #0x98]
    cmp r0, #0
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203b23c:
    add r0, r6, r5, lsl #2
    add r0, r0, #0x200
    ldrsb r2, [r0, #0x99]
    add r1, r6, #0x58
    mov r0, #0x30
    mla r1, r2, r0, r1
    mov r0, r4
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203b2b0
    add r0, r6, r5, lsl #2
    add r0, r0, #0x200
    ldrh r1, [r0, #0x9a]
    cmp r1, #0
    beq @L_0203b284
    ldrsb r1, [r0, #0x99]
    mov r0, r6
    bl FreeBank
@L_0203b284:
    mov r0, r6
    mov r2, r4
    mov r1, #2
    bl LoadBankAsync
    add r1, r6, r5, lsl #2
    strb r0, [r1, #0x299]
    add r0, r1, #0x200
    ldrsb r0, [r0, #0x99]
    cmp r0, #0
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203b2b0:
    add r0, r6, r5, lsl #2
    add r1, r0, #0x200
    mov r0, #1
    strh r0, [r1, #0x9a]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void SoundManager::UnloadPair(int index)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    add r1, r5, r4, lsl #2
    add r1, r1, #0x200
    ldrh r2, [r1, #0x9a]
    cmp r2, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrsb r1, [r1, #0x98]
    bl FreeBank
    add r0, r5, r4, lsl #2
    add r0, r0, #0x200
    ldrsb r1, [r0, #0x99]
    mov r0, r5
    bl FreeBank
    add r0, r5, r4, lsl #2
    add r0, r0, #0x200
    mov r1, #0
    strh r1, [r0, #0x9a]
    ldmia sp!, {r3, r4, r5, pc}
}

asm u32 SoundManager::GetSound(int id)
{
    mov r2, r1, asr #0xe
    add r2, r0, r2, lsl #2
    add r2, r2, #0x200
    ldrsb r3, [r2, #0x99]
    mov r2, #0x30
    mov r1, r1, lsl #0x12
    mla r0, r3, r2, r0
    ldr r0, [r0, #0x84]
    add r0, r0, r1, lsr #2
    bx lr
}

asm void SoundManager::PlaySound(int id)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r2, r4, #0x500
    ldrh r12, [r2, #0x14]
    ldrh r3, [r2, #0x18]
    mov r5, #0
    ldrh lr, [r2, #0x10]
    mul r2, r12, r3
    mul r2, lr, r2
    mov r3, r2, asr #7
    ldr r12, =0x10624dd3
    mov r2, r3, lsr #0x1f
    smull r3, lr, r12, r3
    add lr, r2, lr, asr #6
    mov r3, lr, lsl #0x18
    mov r6, r1
    mov r2, r5
    mov r1, r3, asr #0x18
    bl SetFade
    mov r0, r4
    mov r1, r6
    bl GetSound
    mov r1, r5
    add r2, r4, #0x44
    bl func_02042ef4
    ldmia sp!, {r4, r5, r6, pc}
}

asm void SoundManager::func_0203b3a8(int id, int arg)
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    bl GetSound
    mov r1, r4, lsl #0x10
    mov r2, r1, lsr #0x10
    mov r1, #0
    bl func_02043484
    ldmia sp!, {r4, pc}
}

asm void SoundManager::func_0203b3c8(int arg)
{
    mov r0, r1, lsl #0x10
    ldr r12, =func_020435d8
    mov r0, r0, lsr #0x10
    bx r12
}

asm void SoundManager::StopSound(int id)
{
    stmdb sp!, {r3, lr}
    bl GetSound
    mov r1, #0
    bl func_02042e28
    ldmia sp!, {r3, pc}
}

asm void SoundManager::func_0203b3f0(int index, char *name)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r2
    mov r6, r0
    mov r7, r1
    mov r0, r5
    mov r1, #0x2e
    bl strrchr
    cmp r0, #0
    movne r1, #0
    strneb r1, [r0]
    mov r0, #0x2c
    mul r4, r7, r0
    add r0, r6, #0x2a8
    mov r1, r5
    add r0, r0, r4
    bl STD_CompareString
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r6, #0x2a8
    mov r1, r5
    add r0, r0, r4
    bl STD_CopyString
    add r1, r6, #0x2cc
    ldrh r0, [r1, r4]
    orr r0, r0, #0xc
    strh r0, [r1, r4]
    ldrsb r0, [r5]
    cmp r0, #0
    ldrneh r0, [r1, r4]
    orrne r0, r0, #0x10
    strneh r0, [r1, r4]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm BOOL SoundManager::IsTrackPlaying(int index)
{
    mov r2, #0x2c
    mla r0, r1, r2, r0
    add r0, r0, #0x200
    ldrh r1, [r0, #0xcc]
    tst r1, #0x10
    movne r0, #0
    bxne lr
    ldrh r0, [r0, #0xce]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void SoundManager::StopTrack(int index)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r2, #0x2c
    mul r5, r1, r2
    mov r6, r0
    add r0, r6, #0xce
    add r4, r0, #0x200
    ldrh r0, [r4, r5]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r6, r5
    add r0, r0, #0x200
    ldrsb r1, [r0, #0xc9]
    mov r0, #0x30
    mla r0, r1, r0, r6
    ldr r7, [r0, #0x84]
    mov r0, r7
    bl func_02041d78
    cmp r0, #0
    ble @L_0203b4f8
    mov r0, r7
    mov r1, #0
    bl func_02041e70
@L_0203b4f8:
    add r0, r6, #0xc9
    add r8, r0, #0x200
    ldrsb r1, [r8, r5]
    mov r0, r6
    bl FreeBank
    add r7, r6, #0x2c8
    ldrsb r1, [r7, r5]
    mov r0, r6
    bl FreeBank
    mvn r0, #0
    strb r0, [r8, r5]
    strb r0, [r7, r5]
    ldrh r1, [r4, r5]
    ldr r0, =0xfffc
    and r0, r1, r0
    strh r0, [r4, r5]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void SoundManager::SetTrackFadeIn(int index, s32 time)
{
    stmdb sp!, {r3, lr}
    mov r3, #0x2c
    mul lr, r1, r3
    add r12, r0, #0x2cc
    ldrh r3, [r12, lr]
    ldr r1, =0xfffb
    add r0, r0, lr
    and r1, r3, r1
    strh r1, [r12, lr]
    ldrh r1, [r12, lr]
    orr r1, r1, #2
    strh r1, [r12, lr]
    str r2, [r0, #0x2d0]
    ldmia sp!, {r3, pc}
}

asm void SoundManager::func_0203b57c(int index, s32 time)
{
    stmdb sp!, {r3, lr}
    mov r3, #0x2c
    mul lr, r1, r3
    add r12, r0, #0x2cc
    ldrh r3, [r12, lr]
    ldr r1, =0xfffb
    add r0, r0, lr
    and r1, r3, r1
    strh r1, [r12, lr]
    ldrh r1, [r12, lr]
    orr r1, r1, #0x82
    strh r1, [r12, lr]
    str r2, [r0, #0x2d0]
    ldmia sp!, {r3, pc}
}

asm BOOL SoundManager::func_0203b5b8(int index)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0x2c
    mul r5, r1, r2
    add r1, r0, #0xce
    add r4, r1, #0x200
    ldrh r1, [r4, r5]
    tst r1, #4
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    tst r1, #2
    beq @L_0203b60c
    add r1, r0, r5
    add r1, r1, #0x200
    ldrsb r2, [r1, #0xc9]
    mov r1, #0x30
    mla r0, r2, r1, r0
    ldr r0, [r0, #0x84]
    bl func_02041d78
    cmp r0, #0
    movgt r0, #1
    ldmgtia sp!, {r3, r4, r5, pc}
@L_0203b60c:
    ldrh r2, [r4, r5]
    ldr r1, =0xfffd
    mov r0, #0
    and r1, r2, r1
    strh r1, [r4, r5]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void SoundManager::SetTrackStop(int index, s32 time)
{
    stmdb sp!, {r3, lr}
    mov r3, #0x2c
    mul lr, r1, r3
    add r12, r0, #0x2cc
    ldrh r3, [r12, lr]
    ldr r1, =0xff7d
    add r0, r0, lr
    and r1, r3, r1
    strh r1, [r12, lr]
    ldrh r1, [r12, lr]
    orr r1, r1, #4
    strh r1, [r12, lr]
    str r2, [r0, #0x2d0]
    ldmia sp!, {r3, pc}
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

asm BOOL SoundManager::func_0203b9a8(int index, const char *name, int arg)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x28
    mov r7, r1
    add r4, sp, #8
    mov r8, r0
    ldr r1, =data_020abe54
    mov r6, r2
    mov r0, r4
    mov r5, r3
    bl STD_CopyString
    mov r0, r4
    mov r1, r6
    bl STD_ConcatenateString
    add r0, sp, #0
    mov r1, r4
    bl func_0209dd60
    cmp r0, #0
    addeq sp, sp, #0x28
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, #0x30
    mul r4, r7, r0
    add r0, r8, #0x300
    mov r1, r6
    add r0, r0, r4
    bl STD_CompareString
    cmp r0, #0
    beq @L_0203ba24
    mov r0, r8
    mov r1, r7
    bl func_0203ba5c
@L_0203ba24:
    add r0, r8, #0x300
    mov r1, r6
    add r0, r0, r4
    bl STD_CopyString
    add r0, r8, r4
    strb r5, [r0, #0x321]
    add r2, r8, #0x324
    ldrh r1, [r2, r4]
    mov r0, #1
    orr r1, r1, #1
    strh r1, [r2, r4]
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void SoundManager::func_0203ba5c(int index)
{
    mov r2, #0x30
    mul r2, r1, r2
    add r1, r0, #0x324
    ldrh r0, [r1, r2]
    orr r0, r0, #0xc
    strh r0, [r1, r2]
    bx lr
}

asm void SoundManager::func_0203ba78(int index, const char *name)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    cmp r2, #0
    beq @L_0203ba9c
    mov r3, #0
    bl func_0203b9a8
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_0203ba9c:
    mov r0, #0x30
    mul r1, r4, r0
    add r2, r5, #0x324
    ldrh r0, [r2, r1]
    orr r0, r0, #2
    strh r0, [r2, r1]
    ldmia sp!, {r3, r4, r5, pc}
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

asm BOOL SoundManager::func_0203bba8(int index)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0x30
    mul r4, r1, r2
    add r2, r0, r4
    add r1, r2, #0x300
    ldrh r1, [r1, #0x24]
    tst r1, #4
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    add r0, r0, #0x26
    add r5, r0, #0x300
    ldrh r0, [r5, r4]
    tst r0, #2
    beq @L_0203bbf4
    ldr r0, [r2, #0x328]
    bl func_02048d30
    cmp r0, #0
    movgt r0, #1
    ldmgtia sp!, {r3, r4, r5, pc}
@L_0203bbf4:
    ldrh r2, [r5, r4]
    ldr r1, =0xfffd
    mov r0, #0
    and r1, r2, r1
    strh r1, [r5, r4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm BOOL SoundManager::func_0203bc10(const char *name)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, #0
    add r5, r8, #0x300
    mov r4, #0x30
@L_0203bc28:
    mla r0, r6, r4, r5
    mov r1, r7
    bl STD_CompareString
    cmp r0, #0
    bne @L_0203bc4c
    mov r0, r8
    mov r1, r6
    bl func_0203bba8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0203bc4c:
    add r6, r6, #1
    cmp r6, #1
    blt @L_0203bc28
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void SoundManager::func_0203bc60(int index, int arg)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    mov r3, #0x30
    mul r4, r1, r3
    mov r6, r0
    add r0, r6, r4
    ldr r0, [r0, #0x328]
    add r1, sp, #0
    mov r5, r2
    bl func_020494c0
    ldr r1, [sp, #8]
    add r0, r6, r4
    str r1, [r6, #0x520]
    add r1, r6, #0x324
    str r5, [r0, #0x32c]
    ldrh r0, [r1, r4]
    orr r0, r0, #4
    strh r0, [r1, r4]
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, pc}
}

asm void SoundManager::func_0203bcb0(const char *name, int arg)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, #0
    add r5, r9, #0x300
    mov r4, #0x30
@L_0203bccc:
    mla r0, r6, r4, r5
    mov r1, r8
    bl STD_CompareString
    cmp r0, #0
    bne @L_0203bcf4
    mov r0, r9
    mov r1, r6
    mov r2, r7
    bl func_0203bc60
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0203bcf4:
    add r6, r6, #1
    cmp r6, #1
    blt @L_0203bccc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
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
    bl ReadSoundFile
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
