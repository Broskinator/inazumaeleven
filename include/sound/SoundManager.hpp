#ifndef SOUND_SOUNDMANAGER_HPP
#define SOUND_SOUNDMANAGER_HPP

#include "nitro/types.h"

class GameHeap;

#define SOUND_NUM_BANKS 12
#define SOUND_NUM_BANK_PAIRS 4
#define SOUND_NUM_TRACKS 2
#define SOUND_NUM_STREAMS 1

// The files of the sound driver (/data_iz/sound/): .SWD wave banks, .SED sound
// effects, .SMD sequences and .SAD streams
enum SoundBankType {
    SOUND_BANK_NONE = 0,
    SOUND_BANK_WAVE,        // .SWD
    SOUND_BANK_EFFECTS,     // .SED
    SOUND_BANK_SEQUENCE,    // .SMD
    SOUND_BANK_STREAM,      // .SAD (streamed, not loaded whole)
};

enum SoundBankState {
    SOUND_BANK_FREE = 0,
    SOUND_BANK_LOADING,
    SOUND_BANK_LOADED,
    SOUND_BANK_READY,       // given to the driver
};

// A file of the driver in memory
struct SoundBank {
    char name[0x20];
    void *data;
    s32 state;              // SoundBankState
    s32 type;               // SoundBankType
    void *handle;           // the driver's handle for the data
};

// A wave bank and the effects that use it, loaded together
struct SoundBankPair {
    s8 wave;                // index in banks, -1: none
    s8 effects;
    u16 loaded;
};

// A music track
struct SoundTrack {
    char name[0x20];
    s8 wave;                // index in banks
    s8 sequence;
    u8 unk_22[2];
    u16 flags;
    u16 state;
    s32 unk_28;
};

// The settings the driver is started with
struct SoundDriverConfig {
    u8 data[0x40];
};

// Parameters of a sound for the driver (flags 4: volume and fade time)
struct SoundParam {
    s32 flags;
    u32 unk_04;
    u32 unk_08;
    s32 value;              // volume, fade time << 16
    u32 unk_10;
};

// What the driver says about a stream
struct SoundStreamInfo {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

// A stream (.SAD) played by the driver
struct SoundStream {
    char name[0x20];
    u8 unk_20;
    s8 unk_21;
    u8 unk_22[2];
    u16 flags;
    u16 state;
    void *handle;
    s32 unk_2c;
};

// A music track or stream to play (by name; type 1: sequence, 2: stream)
struct SoundRequest {
    char name[0x20];
    s16 type;
    s16 unk_22;
    s32 unk_24;
};

// What is saved with the game: the effects of the loaded pairs and the tracks to play
struct SoundState {
    char effects[SOUND_NUM_BANK_PAIRS][0x20];
    SoundRequest tracks[SOUND_NUM_TRACKS];
};

// Plays the music and the sound effects with the sound driver.
class SoundManager {
public:
    SoundManager();
    ~SoundManager();
    static void *Alloc(void *arg, u32 size);
    static void *Free(void *arg, void *ptr);
    void Init(GameHeap *heap);
    void func_02039bcc();
    void func_02039bdc();
    void func_02039c28();
    void Update();
    BOOL IsIdle();
    BOOL AreBanksReady();
    BOOL SetScene(int scene, int arg1, int arg2);
    void EndScene();
    void SetVolume(int volume);
    void SetUnk518(int value);
    void ApplyVolume(int volume);
    void SetFade(int volume, int time);
    void func_0203a154();
    void SaveState(SoundState *state);
    void RestoreState(SoundState *state);
    void func_0203a3c4(int index, int id);
    void func_0203a3e0(int index, const char *name, int arg);
    void func_0203a4d4(int index, const char *name, int arg);
    void func_0203a5c8(int index, int id, int arg, int arg2);
    void func_0203a5e8(int index, const char *name, int arg, int arg2);
    void func_0203a6f8(int index, int arg, int arg2);
    void func_0203a724(int index, int arg, int arg2);
    void func_0203a750(int index, int arg);
    void func_0203a764(int index, int id, int arg);
    void func_0203a77c(int index, const char *name, int arg);
    void func_0203a790(int index, int arg);
    void func_0203a7b4(int arg);
    void func_0203a7e4(int arg);
    void func_0203a7f0(int index, int arg);
    BOOL func_0203a87c(int index);
    BOOL func_0203a8c0(int index);
    void func_0203a904();
    s8 FindBank(int type);
    int LoadBank(int type, const char *name);
    void FreeBank(int index);
    int LoadBankAsync(int type, const char *name);
    BOOL PrepareBank(int index);
    BOOL LoadPair(int index, const char *wave, const char *effects);
    BOOL LoadPairAsync(int index, const char *wave, const char *effects);
    void UnloadPair(int index);
    u32 GetSound(int id);
    void PlaySound(int id);
    void func_0203b3a8(int id, int arg);
    void func_0203b3c8(int arg);
    void StopSound(int id);
    void func_0203b3f0(int index, char *name);
    BOOL IsTrackPlaying(int index);
    void StopTrack(int index);
    void SetTrackFadeIn(int index, s32 time);
    void func_0203b57c(int index, s32 time);
    BOOL func_0203b5b8(int index);
    void SetTrackStop(int index, s32 time);
    void func_0203b664();
    BOOL func_0203b9a8(int index, const char *name, int arg);
    void func_0203ba5c(int index);
    void func_0203ba78(int index, const char *name);
    void func_0203bab8(int index, u64 position);
    BOOL func_0203bba8(int index);
    BOOL func_0203bc10(const char *name);
    void func_0203bc60(int index, int arg);
    void func_0203bcb0(const char *name, int arg);
    void func_0203bd04();

    GameHeap *heap;
    u8 unk_04[0x40];        // the driver's streams
    SoundParam param;
    SoundBank banks[SOUND_NUM_BANKS];
    SoundBankPair pairs[SOUND_NUM_BANK_PAIRS];
    SoundTrack tracks[SOUND_NUM_TRACKS];
    SoundStream streams[SOUND_NUM_STREAMS];
    SoundRequest requests[SOUND_NUM_TRACKS];
    SoundRequest current[SOUND_NUM_TRACKS];
    SoundRequest next[SOUND_NUM_TRACKS];
    SoundRequest saved[SOUND_NUM_TRACKS];
    SoundRequest unk_470[SOUND_NUM_TRACKS];
    SoundRequest unk_4c0[SOUND_NUM_TRACKS];
    u16 volumes[3];
    u16 volume;
    u16 unk_518;
    u16 unk_51a;
    s32 scene;
    s32 unk_520;
};

extern SoundManager data_020c5e40;

BOOL GetSoundFilePath(const char *name, char *path, u32 length);

#endif // SOUND_SOUNDMANAGER_HPP
