#ifndef SAVE_SAVEMANAGER_HPP
#define SAVE_SAVEMANAGER_HPP

#include "nitro/types.h"
#include "nitro/os.h"
#include "save/Backup.hpp"
#include "game/GameState.hpp"

#define SAVE_MAGIC              0x19150A04
#define SAVE_SIGNATURE          "INAZUMA_11_EU"
#define SAVE_NUM_SLOTS          1

// errors (SaveManager::lastError, return values)
#define SAVE_ERROR_NO_SLOT      -0x7F
#define SAVE_ERROR_NO_BACKUP    -0x7E
#define SAVE_ERROR_NOT_PRESENT  -0x7D
#define SAVE_ERROR_ACCESS       -0x7C
#define SAVE_ERROR_FORMAT       -0x7B
#define SAVE_ERROR_CHECKSUM     -0x7A
#define SAVE_ERROR_NO_MEMORY    -0x79

// The start of the save memory: which slots hold a save
struct SaveSystemHeader {
    u32 crc;                    // of the rest of the header
    char signature[0x10];       // SAVE_SIGNATURE
    u32 gameCode;
    u32 magic;                  // SAVE_MAGIC
    u32 size;                   // sizeof(SaveSystemHeader)
    u32 unk_20;
    u8 slotUsed[SAVE_NUM_SLOTS];
    u8 dirty;                   // the header changed: save the extra data again
    u8 unk_26[0x1A];
};

// The header of a saved game (shown on the load screen)
struct SaveHeader {
    u32 crc;                    // of the rest of the header
    u32 bodyCrc;
    u32 magic;
    u32 size;                   // header and body
    u32 playTime;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u32 unk_18;
    char name[0x18];
    char unk_34[0x11];
    s8 unk_45;
    u8 unk_46[2];
    u32 unk_48;
    u32 extraCrc;               // 0: no extra data
    u32 extraSize;
    u32 unk_54;
    u16 members[0x14];
};

union SaveTeam {
    u32 raw[6];
    struct {
        u32 ids[5];
        s8 count;
        u8 unk_15[3];
    };
};

struct SaveBody {
    SaveBlock0 block0;
    SaveProfile profile;
    SaveBlock2 block2;
    SaveBlock3 block3;
    SaveBlock4 block4;
    SaveBlock4 block5;
    SaveBlock6 block6;
    SaveBlock7 block7;
    SaveBlock8 block8;
    SaveBlock9 block9;
    SaveBlock10 block10;
    SaveBlock11 block11;
    SaveBlock12 block12;            // 0x0AFC
    u8 unk_118C[0x2BC0];            // (written by the other systems)
    char unk_3D4C[0x90];
    u8 unk_3DDC[0x600];
    SaveTeam team;                  // 0x43DC
    u8 unk_43F4[8];
    u8 unk_43FC[0x600];
    u8 unk_49FC[0x93C];
    u8 unk_5338[0x290C];
    u8 unk_7C44[0xD0];
    s16 unk_7D14;
    s16 unk_7D16;
    u8 unk_7D18;
    SaveBlock13 block13;
};

struct SaveFile {
    SaveHeader header;
    SaveBody body;
    u8 extra[GAME_EXTRA_SIZE];
};

#define SAVE_SIZE               (sizeof(SaveHeader) + sizeof(SaveBody))
#define SAVE_SIZE_EXTRA         (sizeof(SaveFile))
#define SAVE_BUFFER_SIZE        0xFFC0

struct SaveSlotInfo {
    u32 offset;
    u32 size;
};

// Saves and loads the game (one slot, after a system header), synchronously or with a
// thread.
class SaveManager {
public:
    SaveManager();
    ~SaveManager();
    s32 Init();
    BOOL IsDone();
    s32 GetSlots();
    BOOL WriteSystemHeader();
    BOOL WriteSlot(int slot, SaveFile *file, BOOL async, u32 size);
    s32 Save(int slot, BOOL async);
    s32 SaveFileTo(int slot, SaveFile *file, BOOL async);
    s32 FinishSave();
    s32 ReadSlotHeader(int slot, SaveHeader *header);
    s32 Load(int slot, BOOL async);
    s32 LoadInto(int slot, SaveFile *file, BOOL async);
    s32 IsLoading();
    s32 ApplyLoad(int slot);
    s32 Verify(SaveHeader *header, SaveBody *body, void *extra);
    void *Alloc(u32 size);
    void Free(void *ptr);
    static u32 ReverseBits(u32 value, int bits);
    u32 Crc32(const void *data, int size);
    void LoadThread();
    static void LoadThreadMain(void *arg);
    u32 GetUnk20();

    SaveSystemHeader system;
    u8 unk_40;
    SaveFile *buffer;
    BOOL bufferIsExternal;
    Backup backup;
    SaveSlotInfo slots[SAVE_NUM_SLOTS + 1];     // the system header, then the slots
    OSThread thread;                            // loads with LoadThread
    void *stack;
    s32 state;                                  // 1: loading
    u8 loadSlot;
    u8 loadAsync;
    s8 lastError;
};

#endif // SAVE_SAVEMANAGER_HPP
