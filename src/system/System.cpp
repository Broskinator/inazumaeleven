#include "system/System.hpp"
#include "match/MatchEngine.hpp"
#include "system/GameHeap.hpp"
#include "file/FileManager.hpp"
#include "movie/MoviePlayer.hpp"
#include "sound/SoundManager.hpp"
#include "data/ConfigFile.hpp"
#include "nitro/fs.h"
#include "nitro/mi.h"
#include "nitro/os.h"
#include "game/GameState.hpp"
#include "game/SceneManager.hpp"
#include "save/SaveManager.hpp"
#include "text/TextFont.hpp"
#include "text/TextFont2bpp.hpp"

extern GameHeap gAllocator;
extern FileManager data_020c6364;
extern ConfigFile gConfig;
extern "C" void func_02099140(void);
extern "C" void func_0209d1d4(void *);
extern "C" void *OS_GetArenaLo(int arena);                 // the start of an arena
extern "C" void *OS_GetArenaHi(int arena);                 // the end of an arena
extern "C" void OS_SetArenaLo(int arena, void *start);      // sets the start of an arena
extern "C" void *OS_InitAlloc(int arena, void *start, void *end, int maxHeaps);   // starts allocating from an arena
extern "C" void *OS_AllocFromArenaLo(int arena, u32 size, int align);
extern "C" int OS_CreateHeap(int arena, void *start, void *end);   // makes a heap
extern "C" int OS_SetCurrentHeap(int arena, int heap);
extern "C" void func_02006dd8(void);
extern "C" void OS_InitAlarm(void);
extern "C" void OS_InitThread(void);
extern "C" void FS_Init(int);
extern "C" void RTC_Init(void);
extern "C" void func_020023fc(void);
extern "C" void GX_Init(void);
extern "C" void GX_DispOff(void);
extern "C" void func_0209d638(void);
extern "C" void OS_Terminate(void);                        // stops (out of memory)
extern "C" void DC_FlushAll(void);
extern "C" void GX_SetBankForLCDC(int banks);                  // gives VRAM banks to the LCDC
extern "C" void GX_DisableBankForLCDC(void);
extern "C" void OS_SetIrqFunction(u32 mask, void (*function)(void));
extern "C" u32 OS_EnableIrqMask(u32 mask);
extern "C" void GX_VBlankIntr(BOOL enable);                // the vblank interrupt
extern "C" void OS_WaitVBlankIntr(void);                        // waits for the vblank
extern "C" s32 GXi_DmaId;
extern "C" char data_020ac0cc[];                            // the name of the settings file
extern "C" u8 gWirelessUtil[];
extern "C" u8 OS_IRQTable[];                              // (the DTCM)

extern "C" char data_020af61c[];
extern "C" char data_020ac084[];
extern "C" char data_020af7d0[];
extern "C" char data_020afa08[];
extern "C" char data_020afd20[];
extern "C" char data_020ac064[];
extern "C" void *func_ov015_02148258(void *);
extern "C" void C3DGameChar_Reset(void *);
extern "C" void *C3DGameMap_Ctor(void *);
extern "C" void C3DGameBase_Ctor(void *);
extern "C" void C3DGameEffect_Reset(void *);
extern "C" void C3DGameMapObject_Reset(void *);
extern "C" void *func_ov015_02136584(void *);
extern "C" void func_020977d0(void *);
extern "C" void *C3DMagicCamera_Ctor(void *);
extern "C" void *func_020858fc(void *);
extern "C" void *func_02087144(void *);
extern "C" void *CSprAnimCtrl_Ctor(void *);
extern "C" void *func_ov015_0213db54(void *);
extern "C" void func_0208868c(void *);
extern "C" void func_02098bac(void *, int, int, int);
extern "C" void func_ov015_0214799c(void *, int);
extern "C" void CCameraCtrl_Init(void *);
extern "C" void func_02089214(void *, int);
extern "C" void func_0208d9e8(void *, int);
extern "C" void func_0208c1f4(void *, int);
extern "C" void func_0208ad68(void *, int);
extern "C" void func_ov015_02136594(void *);
extern "C" void func_02091c64(void *, int, int);
extern "C" void func_02095d70(void *, int, int);
extern "C" void func_02085934(void *);
extern "C" void func_0208720c(void *);
extern "C" void NNS_G3dInit(void);
extern "C" void NNS_G3dGlbInit(void);
extern "C" void G3X_InitMtxStack(void);
extern "C" void G2x_ChangeBlendBrightness_(volatile u16 *reg, int brightness);
extern "C" void TP_Init(void);
extern "C" BOOL TP_GetUserInfo(void *);
extern "C" void TP_SetCalibrateParam(void *);
extern "C" void func_01ff9dc4(void *);
extern "C" void func_01ff9e1c(void *);

extern "C" void func_01ffd9a0(void *);
extern "C" void func_01ffb7b8(void *);
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
extern "C" void *data_020c46a4;
extern "C" void *data_020c465c;
extern "C" void *data_020c46ac;
extern "C" void *data_020c469c;
extern "C" void *data_020c4664;
extern "C" void *data_020c4654;
extern "C" void *gPalSkinFaceFile;
extern "C" u16 data_020c4658[2];         // (= data_020c4638.unk_20)
extern SceneStartInfo data_020c4ab4;
extern "C" s32 data_020c4ac0[2];          // (= data_020c4ab4.unk_0c)
extern "C" u8 data_020c4ae1[];            // (= data_020c4ab4.unk_2d)
extern SaveManager data_020c4c70;
extern "C" void func_ov015_02130920(void);
extern "C" void func_ov015_0213238c(void);
extern "C" void func_ov015_02131818(int);
extern "C" void func_ov015_02133efc(const char *name, FontFile *file);

// (files are loaded through the file manager)
static inline int LoadFile(const char *name, void **buffer)
{
    FileManager *fileManager = data_020c4638.fileManager;
    const char *path = name;

    if (fileManager == NULL) {
        return 0;
    }
    return fileManager->Load(path, buffer, &gAllocator, 0, 0, FALSE, 1, TRUE);
}

#define OS_ARENA_MAIN 0
#define OS_IE_V_BLANK 1
#define HW_DTCM ((u32)OS_IRQTable)
#define OS_IRQ_CHECK_FLAG (*(volatile u32 *)(HW_DTCM + 0x3FF8))
#define REG_DISPCNT_SUB (*(volatile u32 *)0x04001000)
#define REG_POWCNT (*(volatile u16 *)0x04000304)
#define REG_MASTER_BRIGHT (*(volatile u16 *)0x04000050)
#define REG_DB_MASTER_BRIGHT (*(volatile u16 *)0x04001050)
#define HW_LCDC_VRAM 0x06800000
#define HW_PLTT 0x05000000
#define HW_DB_PLTT 0x05000400
#define HW_PLTT_SIZE 0x400
#define HW_OAM 0x07000000
#define HW_DB_OAM 0x07000400
#define HW_OAM_SIZE 0x400

FS_EXTERN_OVERLAY(ov015);
FS_EXTERN_OVERLAY(ov087);

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
extern "C" void func_020065d0(void);
extern "C" void OS_SetArenaHi(void);

// (the vblank interrupt)
void System::func_0203f8ec()
{
    if (data_020c4638.unk_30 != NULL) {
        func_02099140();
    }
    func_0209d1d4(&gWirelessUtil);
    data_020c6364.WakeUp();
    OS_IRQ_CHECK_FLAG |= OS_IE_V_BLANK;
}

asm void *System::func_0203f93c(u32 size)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    cmp r7, #0x100000
    movhi r7, #0x100000
    bl func_020065d0
    mov r4, r0
    mov r0, #0
    bl OS_GetArenaHi
    and r1, r4, #0xf
    mov r6, r0
    cmp r1, #2
    beq @L_0203f974
    cmp r1, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203f974:
    mov r5, #2
    mov r0, r5
    bl OS_GetArenaHi
    mov r4, r0
    mov r0, r5
    bl OS_GetArenaLo
    cmp r0, r4
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    add r1, r6, r7
    bl OS_SetArenaLo
    add r1, r6, r7
    mov r0, #0
    bl OS_SetArenaHi
    add r0, r6, r7
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

// clears the main arena and makes the system heap at its start
void System::func_0203f9b8()
{
    void *lo = OS_GetArenaLo(OS_ARENA_MAIN);
    void *hi = func_0203f93c(0x100000);
    void *start;
    int heap;

    MIi_CpuClearFast(0, lo, (u32)hi - (u32)lo);
    OS_SetArenaLo(OS_ARENA_MAIN, OS_InitAlloc(OS_ARENA_MAIN, lo, hi, 2));
    start = OS_AllocFromArenaLo(OS_ARENA_MAIN, 0x3C000, 0x20);
    heap = OS_CreateHeap(OS_ARENA_MAIN, start, (u8 *)start + 0x3C000);
    OS_SetCurrentHeap(OS_ARENA_MAIN, heap);
    data_020c4638.systemHeap = heap;
}

// starts the SDK
void System::func_0203fa48()
{
    func_02006dd8();
    OS_InitTick();
    OS_InitAlarm();
    OS_InitThread();
    FS_Init(-1);
    RTC_Init();
    func_0203f9b8();
    func_020023fc();
    GXi_DmaId = 3;
    GX_Init();
    GX_DispOff();
    REG_DISPCNT_SUB &= ~0x10000;
    FS_LoadOverlay(MI_PROCESSOR_ARM9, FS_OVERLAY_ID(ov015));
    FS_LoadOverlay(MI_PROCESSOR_ARM9, FS_OVERLAY_ID(ov087));
    func_0209d638();
}

// makes the game's heap from the rest of the main arena, and the file loader
void System::func_0203fac8()
{
    data_020c4638.arenaLo = (u32)OS_GetArenaLo(OS_ARENA_MAIN);
    data_020c4638.arenaHi = (u32)OS_GetArenaHi(OS_ARENA_MAIN);
    data_020c4638.heapMin = data_020c4638.arenaLo + 0x20E000;
    if (data_020c4638.heapMin <= data_020c4638.arenaHi) {
        data_020c4638.heapEnd = data_020c4638.arenaHi;
    } else {
        OS_Terminate();
    }
    {
        u32 start = data_020c4638.arenaLo;

        data_020c4638.heapSize = data_020c4638.heapEnd - start;
        MIi_CpuClearFast(0, (void *)start, data_020c4638.heapSize);
    }
    DC_FlushAll();
    gAllocator.Init(0, (void *)data_020c4638.arenaLo, (void *)data_020c4638.heapEnd);
    OS_SetArenaLo(OS_ARENA_MAIN, (void *)((data_020c4638.heapEnd + 0x1F) & ~0x1F));
    data_020c4638.fileManager = &data_020c6364;
    data_020c6364.Init(0x40, &gAllocator);
    gMoviePlayer.InitSystem(&gAllocator);
}

// clears the VRAM, the OAM and the palettes
void System::func_0203fb90()
{
    GX_SetBankForLCDC(0x1FF);
    MIi_CpuClearFast(0, (void *)HW_LCDC_VRAM, 0xA4000);
    GX_DisableBankForLCDC();
    MIi_CpuClearFast(0xC0, (void *)HW_OAM, HW_OAM_SIZE);
    MIi_CpuClearFast(0, (void *)HW_PLTT, HW_PLTT_SIZE);
    MIi_CpuClearFast(0xC0, (void *)HW_DB_OAM, HW_OAM_SIZE);
    MIi_CpuClearFast(0, (void *)HW_DB_PLTT, HW_PLTT_SIZE);
    *(u16 *)HW_PLTT = 0x7FFF;
    *(u16 *)HW_DB_PLTT = 0x7FFF;
}

// starts the vblank interrupt
void System::func_0203fc1c()
{
    OS_DisableIrq();
    OS_SetIrqFunction(OS_IE_V_BLANK, func_0203f8ec);
    OS_EnableIrqMask(OS_IE_V_BLANK);
    OS_EnableIrqMask(0x40000);
    OS_EnableIrq();
    GX_VBlankIntr(TRUE);
    OS_WaitVBlankIntr();
}

void System::func_0203fc70()
{
}

// reads the settings file
void System::func_0203fc74()
{
    gConfig.Reset();
    gConfig.Clear();
    gConfig.Load(data_020ac0cc);
}

// makes the game's systems
void System::func_0203fca4()
{
    void *object;

    object = operator new(0x48);
    if (object != NULL) {
        *(void **)object = data_020af61c;
    }
    data_020c4638.unk_44 = object;
    data_020c4638.unk_30 = operator new(0x3C);
    object = operator new(0x2C);
    if (object != NULL) {
        object = func_ov015_02148258(object);
    }
    data_020c4638.unk_14 = object;
    data_020c4638.unk_98 = operator new(0x5E4);
    object = operator new(0x94);
    if (object != NULL) {
        *(void **)object = data_020ac084;
        C3DGameChar_Reset(object);
    }
    data_020c4638.unk_18 = object;
    object = operator new(0x20);
    if (object != NULL) {
        object = C3DGameMap_Ctor(object);
    }
    data_020c4638.unk_28 = object;
    object = operator new(0x1C);
    if (object != NULL) {
        C3DGameBase_Ctor(object);
        *(void **)object = data_020af7d0;
        C3DGameEffect_Reset(object);
    }
    data_020c4638.unk_3c = object;
    object = operator new(0x20);
    if (object != NULL) {
        C3DGameBase_Ctor(object);
        *(void **)object = data_020afa08;
        C3DGameMapObject_Reset(object);
    }
    data_020c4638.unk_40 = object;
    object = operator new(0x1BC);
    if (object != NULL) {
        object = func_ov015_02136584(object);
    }
    data_020c4638.unk_10 = object;
    object = operator new(0x2C);
    if (object != NULL) {
        func_020977d0(object);
    }
    data_020c4638.unk_9c = object;
    object = operator new(0x48);
    if (object != NULL) {
        *(void **)object = data_020afd20;
        func_020977d0((u8 *)object + 4);
    }
    data_020c4638.unk_5c = object;
    object = operator new(0x350);
    if (object != NULL) {
        object = C3DMagicCamera_Ctor(object);
    }
    data_020c4638.unk_38 = object;
    object = operator new(0x18FC);
    if (object != NULL) {
        object = func_020858fc(object);
    }
    data_020c4638.unk_94 = object;
    object = operator new(0xA0);
    if (object != NULL) {
        object = func_02087144(object);
    }
    data_020c4638.unk_90 = object;
    object = operator new(0xF3C);
    if (object != NULL) {
        *(void **)object = data_020ac064;
    }
    data_020c4638.unk_8c = object;
    object = operator new(0x424);
    if (object != NULL) {
        object = CSprAnimCtrl_Ctor(object);
    }
    data_020c4638.unk_80 = object;
    object = operator new(0x138);
    if (object != NULL) {
        object = func_ov015_0213db54(object);
    }
    data_020c4638.unk_50 = object;

    func_0208868c(data_020c4638.unk_44);
    func_02098bac(data_020c4638.unk_30, 0x100, 0x80, 0x80);
    func_ov015_0214799c(data_020c4638.unk_14, 0x100);
    CCameraCtrl_Init(data_020c4638.unk_98);
    func_02089214(data_020c4638.unk_18, 8);
    func_0208d9e8(data_020c4638.unk_40, 0x20);
    func_0208c1f4(data_020c4638.unk_28, 8);
    func_0208ad68(data_020c4638.unk_3c, 0x10);
    func_ov015_02136594(data_020c4638.unk_10);
    func_02091c64(data_020c4638.unk_9c, 0xC0, 0xA0);
    func_02095d70(data_020c4638.unk_5c, 0x60, 0x60);
    func_02085934(data_020c4638.unk_94);
    func_0208720c(data_020c4638.unk_90);
}

// starts the 3D and the screens' brightness
void System::func_0203ff30()
{
    NNS_G3dInit();
    NNS_G3dGlbInit();
    G3X_InitMtxStack();
    REG_POWCNT = REG_POWCNT & ~0x8000;
    G2x_ChangeBlendBrightness_(&REG_MASTER_BRIGHT, 0);
    G2x_ChangeBlendBrightness_(&REG_DB_MASTER_BRIGHT, 0);
}

void System::func_0203ff78()
{
    u8 info[8];

    TP_Init();
    if (!TP_GetUserInfo(info)) {
        OS_Terminate();
        return;
    }
    TP_SetCalibrateParam(info);
}

void System::func_0203ffb4()
{
    func_01ff9dc4(&data_020e88a0);
    func_01ff9e1c(&data_020e88a0);
}

// loads the files the whole game uses
void System::func_0203ffd4()
{
    func_01ffd9a0(&data_020e88a0);
    func_01ffb7b8(&data_020e88a0);
    data_020e88a0.func_0206f7a4();
    data_020c4638.unk_6c = 0;
    LoadFile(data_020ac0e4, &data_020c46a4);
    data_020c4638.unk_24 = 0;
    data_020c4638.unk_74 = 0;
    data_020c4638.unk_64 = 0;
    data_020c4638.unk_2c = 0;
    data_020c4638.unk_1c = 0;
    LoadFile(data_020ac100, &data_020c465c);
    LoadFile(data_020ac120, &data_020c46ac);
    LoadFile(data_020ac140, &data_020c469c);
    LoadFile(data_020ac15c, &data_020c4664);
    LoadFile(data_020ac17c, &data_020c4654);
    LoadFile(data_020ac19c, &gPalSkinFaceFile);
}

// a new game: clears the game's state
// (nonmatching: the original keeps a second zero in a register and starts its loops with a jump to the condition)
#ifdef NONMATCHING
void System::func_020401bc()
{
    int i;

    MI_CpuFill8(&gGameState, 0, 0x128C);
    gGameState.profile.unk_47[0] = 1;
    gGameState.profile.unk_2C = -1;
    data_020c4638.unk_0a = 0;
    data_020c4638.unk_00 = 0;
    data_020c4638.unk_02 = 0;
    data_020c4638.unk_03 = 0;
    data_020c4638.unk_04 = 0;
    data_020c4638.unk_01 = 0;
    data_020c4638.unk_06 = 1;
    for (i = 0; i < 2; i++) {
        data_020c4658[i] = 0;
    }

    data_020c4ab4.unk_00 = 0;
    data_020c4ab4.unk_08 = 0;
    data_020c4ab4.unk_14 = 0;
    data_020c4638.unk_08 = 1;
    for (i = 0; i < 2; i++) {
        data_020c4ac0[i] = 0;
        data_020c4ae1[i * 0x19] = 0;
    }
    data_020c4ab4.unk_04 = 0;
    data_020c4ab4.unk_60 = 0;
    data_020c4ab4.unk_61 = 0;
    data_020c4ab4.unk_62 = 0;
    data_020c4ab4.unk_5f = 0;
    data_020c4ab4.unk_63 = 0;
    data_020c4ab4.unk_64 = 0;
    data_020c4ab4.unk_68 = 0;
    data_020c4ab4.unk_6c = 0;
    data_020c4ab4.unk_75 = 0;
    data_020c4ab4.unk_76 = 0;
    data_020c4ab4.unk_77 = 0;
    data_020c4ab4.unk_78 = 0;
    data_020c4ab4.unk_79 = 0;
    data_020c4ab4.unk_69 = 0;
    data_020c4ab4.unk_6a = 0;
    data_020c4ab4.unk_6e = 1;
    data_020c4ab4.unk_6f = 1;
    data_020c4ab4.unk_70 = 0;
    data_020c4ab4.unk_71 = 0;
    data_020c4ab4.unk_72 = 0;
    data_020c4ab4.unk_73 = 0;
    data_020c4ab4.unk_74 = 0;
    data_020c4ab4.unk_7c = 0;
    data_020c4ab4.unk_7a = 0;
    data_020c4ab4.unk_7e = 0;
    data_020c4ab4.unk_9e = 0;
    data_020c4ab4.unk_be = 0;
    data_020c4ab4.unk_bf = 0;
    data_020c4ab4.unk_c0 = 0;
    data_020c4ab4.unk_c1_0 = 0;
    data_020c4ab4.unk_c1_3 = 0;
    data_020c4ab4.unk_c1_6 = 0;
    data_020c4ab4.unk_c4 = 0;
    data_020c4ab4.unk_c8 = 0;

    func_ov015_02130920();
    func_ov015_0213238c();
    data_020c4638.unk_88 = data_020c4c70.Init();
    func_ov015_02131818(0);
}
#else
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
#endif

// makes the game's fonts
void System::func_02040358()
{
    FontFile files[4];

    func_ov015_02133efc(data_020ac1bc, &files[0]);
    func_ov015_02133efc(data_020ac1d8, &files[1]);
    func_ov015_02133efc(data_020ac1f4, &files[2]);
    func_ov015_02133efc(data_020ac210, &files[3]);
    data_020c4638.font0 = new TextFont;
    data_020c4638.font1 = new TextFont;
    data_020c4638.font2 = new TextFont;
    data_020c4638.font2bpp = new TextFont2bpp;
    data_020c4638.font0->SetFont(files[0].data, 0, 0);
    data_020c4638.font1->SetFont(files[1].data, 0, 0);
    data_020c4638.font2->SetFont(files[2].data, 0, 0);
    data_020c4638.font2bpp->SetFont(files[3].data, 0, 0);
    data_020c4638.font0->SetUseGlyphWidth(TRUE);
    data_020c4638.font1->SetUseGlyphWidth(TRUE);
    data_020c4638.font2->SetUseGlyphWidth(TRUE);
    data_020c4638.font2bpp->SetUseGlyphWidth(TRUE);
    data_020c4638.unk_0c = gConfig.GetInt(data_020ac22c);
}

// starts the sound and waits until it is ready
void System::func_020404bc()
{
    gAudioPlayer.Init(&gAllocator);
    gAudioPlayer.SetScene(2, 0, 0);
    while (!gAudioPlayer.IsIdle()) {
        OS_Sleep(20);
    }
    while (!gAudioPlayer.AreBanksReady()) {
        OS_Sleep(20);
    }
}
