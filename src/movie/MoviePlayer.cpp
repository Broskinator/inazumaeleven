#include "movie/MoviePlayer.hpp"
#include "system/GameHeap.hpp"
#include "nitro/std.h"
#include "file/RomFile.hpp"
#include "sound/SoundManager.hpp"

// Mobiclip (overlay 88)
extern "C" void *func_ov088_02174830(FSFile *file, int unk);       // opens a stream
extern "C" void func_ov088_0217490c(void *stream);                  // closes it
extern "C" u32 func_ov088_0217492c(void *stream);                   // frame rate
extern "C" s32 func_ov088_02174944(void *stream);                   // number of frames
extern "C" BOOL func_ov088_0217495c(void *stream);                  // decodes a frame
extern "C" void func_ov088_02174980(void *stream);                  // queues it
extern "C" void func_ov088_021749a4(void *stream, void *dest, int unk, int unk2); // draws a frame
extern "C" void func_ov088_021749c8(void *stream);                  // skips a frame


FS_EXTERN_OVERLAY(ov087);
FS_EXTERN_OVERLAY(ov088);

#define MOVIE_OVERLAY FS_OVERLAY_ID(ov088)          // Mobiclip
#define MOVIE_OVERLAY_SHARED FS_OVERLAY_ID(ov087)   // shares its memory with the movie overlay

struct MovieSystem {
    GameHeap *heap;
    s8 frontBuffer;
    s8 vblankCount;         // frames counted by the alarm since the last update
    s8 frameReady;          // the frame buffers are free for the next frame
    u8 unk_07;
    void *buffers0[2];
    void *buffers1[2];
    u32 unk_18;
    u32 unk_1C;
    void *unk_20;
    void *unk_24;
    u32 unk_28;
    u32 unk_2C;
};

static MovieSystem sMovie;

MoviePlayer::MoviePlayer()
{
    flags = 0;
}

MoviePlayer::~MoviePlayer()
{
    if (flags != 0) {
        flags |= MOVIE_STOPPING;
        Close(TRUE);
    }
}

void MoviePlayer::InitSystem(GameHeap *heap)
{
    if (heap == NULL) {
        return;
    }

    sMovie.heap = heap;
    OS_InitTick();
}

void MoviePlayer::SetFrameBuffers(void *top0, void *top1, void *bottom0, void *bottom1)
{
    sMovie.buffers0[0] = top0;
    sMovie.buffers0[1] = top1;
    sMovie.buffers1[0] = bottom0;
    sMovie.buffers1[1] = bottom1;
}

BOOL MoviePlayer::GetFrontBuffer()
{
    if (sMovie.frameReady == 0) {
        sMovie.frameReady = 1;
        sMovie.frontBuffer ^= 1;
    }

    return sMovie.frontBuffer ^ 1;
}

BOOL MoviePlayer::Open(const char *name0, const char *name1, BOOL noSound, u8 loadOverlay)
{
    char path[0x40];
    OSTick start;
    u32 interval;
    int i;

    if (loadOverlay) {
        FS_UnloadOverlay(MI_PROCESSOR_ARM9, MOVIE_OVERLAY_SHARED);
        FS_LoadOverlay(MI_PROCESSOR_ARM9, MOVIE_OVERLAY);
    }

    video0 = video1 = video = NULL;

    if (name0 != NULL) {
        STD_CopyString(path, "/data_iz/movie/");
        STD_ConcatenateString(path, name0);
        STD_ConcatenateString(path, ".mods");
        FS_InitFile(&file0);
        if (!func_0209ddd0(&file0, path)) {
            return FALSE;
        }
    }

    if (name1 != NULL) {
        STD_CopyString(path, "/data_iz/movie/");
        STD_ConcatenateString(path, name1);
        STD_ConcatenateString(path, ".mods");
        FS_InitFile(&file1);
        if (!func_0209ddd0(&file1, path)) {
            return FALSE;
        }
    }

    if (name0 != NULL) {
        video0 = func_ov088_02174830(&file0, 6);
    }
    if (name1 != NULL) {
        video1 = func_ov088_02174830(&file1, 6);
    }

    if (video0 == NULL && video1 == NULL) {
        return FALSE;
    }

    if (video0 != NULL) {
        video = video0;
    } else {
        video = video1;
    }

    flags = 0;
    if (noSound) {
        flags |= MOVIE_NO_SOUND;
    }
    numDecoded = 0;
    numDue = 0;
    totalDecoded = 0;
    numShown = 0;
    numFrames = func_ov088_02174944(video);
    sMovie.frontBuffer = 1;
    sMovie.frameReady = 1;

    STD_CopyString(path, name0);
    STD_ConcatenateString(path, ".sad");
    if (!(flags & MOVIE_NO_SOUND)) {
        if (gAudioPlayer.func_0203b9a8(0, path, 0)) {
            flags |= MOVIE_SOUND_LOADED;
        }
    }

    OS_CreateAlarm(&alarm);
    start = OS_GetTick();
    interval = OS_MicroSecondsToTicks(((u64)1000000 << 24) / func_ov088_0217492c(video));
    OS_SetPeriodicAlarm(&alarm, start + 5, interval, VBlankAlarm, NULL);

    for (i = 0; i < MOVIE_DECODE_AHEAD; i++) {
        DecodeFrame();
    }

    stack = AllocCallback(0x800);
    OS_CreateThread(&thread, ThreadMain, this, (u8 *)stack + 0x800, 0x800, 29);
    OS_SetThreadStackWarningOffset(&thread, 0x100);

    if (!(flags & MOVIE_NO_SOUND)) {
        gAudioPlayer.func_0203a7e4(0);
    }

    flags |= MOVIE_OPEN;
    return TRUE;
}

u32 MoviePlayer::GetFlags()
{
    return flags;
}

// shows the frames that are due; returns FALSE when the movie is over
BOOL MoviePlayer::Update()
{
    if (!(flags & MOVIE_OPEN)) {
        return FALSE;
    }
    if (video == NULL) {
        return FALSE;
    }
    if (flags & MOVIE_FINISHED) {
        return FALSE;
    }
    if (flags & MOVIE_STOPPING) {
        return (flags & MOVIE_DECODING) ? TRUE : FALSE;
    }
    if (flags & MOVIE_PAUSED) {
        return TRUE;
    }

    if (!(flags & MOVIE_STARTED)) {
        sMovie.vblankCount = 1;
    }

    if (flags & MOVIE_SOUND_LOADED) {
        if (!(flags & MOVIE_SOUND_PLAYING)) {
            gAudioPlayer.func_0203ba78(0, NULL);
            flags |= MOVIE_SOUND_PLAYING | MOVIE_SOUND_STARTING;
        }

        if (!gAudioPlayer.func_0203bba8(0)) {
            if (flags & MOVIE_SOUND_STARTING) {
                sMovie.vblankCount = 0;
                return TRUE;
            }
            flags &= ~(MOVIE_SOUND_LOADED | MOVIE_SOUND_PLAYING);
        } else {
            flags &= ~MOVIE_SOUND_STARTING;
        }
    }

    flags |= MOVIE_STARTED;
    numDue += sMovie.vblankCount;
    sMovie.vblankCount = 0;

    if (numDue != 0) {
        while (numDue > 1 && numDecoded > 1) {
            func_ov088_021749c8(video0);
            func_ov088_021749c8(video1);
            numShown++;
            numDecoded--;
            numDue--;
        }

        if (numDecoded != 0 && ShowFrame(video0, video1)) {
            numShown++;
            numDecoded--;
            numDue--;
        }
    }

    OS_WakeupThreadDirect(&thread);

    if (numShown >= numFrames) {
        flags |= MOVIE_FINISHED;
        return FALSE;
    }

    return TRUE;
}

void MoviePlayer::Stop()
{
    if (!(flags & MOVIE_STARTED)) {
        return;
    }

    flags |= MOVIE_STOPPING;
    Pause();
}

void MoviePlayer::Pause()
{
    if (!(flags & MOVIE_STARTED)) {
        return;
    }

    flags |= MOVIE_PAUSED;
    numDue += sMovie.vblankCount;
    if (flags & MOVIE_SOUND_PLAYING) {
        gAudioPlayer.func_0203bc60(0, 300);
    }
}

void MoviePlayer::Resume()
{
    if (!(flags & MOVIE_PAUSED)) {
        return;
    }

    flags &= ~MOVIE_PAUSED;
    sMovie.vblankCount = 0;
    if (flags & MOVIE_SOUND_PLAYING) {
        u32 frameTime = ((u64)1000 << 24) / (u64)func_ov088_0217492c(video);
        u32 frame = numShown + numDue + 1;
        gAudioPlayer.func_0203bab8(0, (u64)frame * frameTime);
        flags |= MOVIE_SOUND_STARTING;
    }
}

BOOL MoviePlayer::DecodeFrame()
{
    if (numDecoded >= MOVIE_DECODE_AHEAD) {
        return FALSE;
    }
    if (flags & MOVIE_STOPPING) {
        return FALSE;
    }

    flags |= MOVIE_DECODING;
    OS_GetTick();

    if (video0 != NULL && !(flags & MOVIE_VIDEO0_END)) {
        if (!func_ov088_0217495c(video0)) {
            flags |= MOVIE_VIDEO0_END;
        } else {
            func_ov088_02174980(video0);
        }
    }

    if (video1 != NULL && !(flags & MOVIE_VIDEO1_END)) {
        if (!func_ov088_0217495c(video1)) {
            flags |= MOVIE_VIDEO1_END;
        } else {
            func_ov088_02174980(video1);
        }
    }

    OS_GetTick();
    flags &= ~MOVIE_DECODING;

    if ((flags & MOVIE_VIDEO0_END) && (flags & MOVIE_VIDEO1_END)) {
        return FALSE;
    }

    totalDecoded++;
    numDecoded++;
    return TRUE;
}

void MoviePlayer::Close(BOOL reloadOverlay)
{
    int i;

    if (flags == 0) {
        return;
    }

    while (flags & MOVIE_DECODING) {
        OS_Sleep(50);
    }

    if (!(flags & MOVIE_STOPPING)) {
        for (i = 0; i < numDecoded; i++) {
            func_ov088_021749c8(video0);
            func_ov088_021749c8(video1);
        }
    }

    if (flags & MOVIE_SOUND_PLAYING) {
        gAudioPlayer.func_0203ba5c(0);
    }

    OS_CancelAlarm(&alarm);
    FreeCallback(sMovie.unk_20);
    FreeCallback(sMovie.unk_24);

    if (video0 != NULL) {
        func_ov088_0217490c(video0);
        FS_CloseFile(&file0);
    }
    if (video1 != NULL) {
        func_ov088_0217490c(video1);
        FS_CloseFile(&file1);
    }

    OS_DestroyThread(&thread);
    FreeCallback(stack);
    flags = 0;

    if (reloadOverlay) {
        FS_UnloadOverlay(MI_PROCESSOR_ARM9, MOVIE_OVERLAY);
        FS_LoadOverlay(MI_PROCESSOR_ARM9, MOVIE_OVERLAY_SHARED);
    }
}

void MoviePlayer::ThreadMain(void *arg)
{
    MoviePlayer *self = (MoviePlayer *)arg;

    for (;;) {
        while (self->DecodeFrame()) {
        }
        OS_SleepThread(NULL);
    }
}

u32 MoviePlayer::GetFrameRate()
{
    if (video == NULL) {
        return 0;
    }

    return func_ov088_0217492c(video);
}

BOOL MoviePlayer::ShowFrame(void *video0, void *video1)
{
    if (sMovie.frameReady == 0) {
        return FALSE;
    }

    if (video0 != NULL && sMovie.buffers0[sMovie.frontBuffer] != NULL) {
        func_ov088_021749a4(video0, sMovie.buffers0[sMovie.frontBuffer], 0x100, 0);
    }
    if (video1 != NULL && sMovie.buffers1[sMovie.frontBuffer] != NULL) {
        func_ov088_021749a4(video1, sMovie.buffers1[sMovie.frontBuffer], 0x100, 0);
    }

    sMovie.frameReady = 0;
    return TRUE;
}

void MoviePlayer::VBlankAlarm(void *arg)
{
    sMovie.vblankCount++;
}

void *MoviePlayer::Alloc(u32 size)
{
    return sMovie.heap->Alloc(size, 5, FALSE);
}

void MoviePlayer::Free(void *ptr)
{
    sMovie.heap->Free(ptr);
}

void *MoviePlayer::AllocCallback(u32 size)
{
    return Alloc(size);
}

void MoviePlayer::FreeCallback(void *ptr)
{
    Free(ptr);
}
