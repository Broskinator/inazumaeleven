#ifndef MOVIE_MOVIEPLAYER_HPP
#define MOVIE_MOVIEPLAYER_HPP

#include "nitro/types.h"
#include "nitro/os.h"
#include "nitro/fs.h"

class GameHeap;

// flags
#define MOVIE_OPEN              0x0001
#define MOVIE_STARTED           0x0002
#define MOVIE_FINISHED          0x0004
#define MOVIE_SOUND_PLAYING     0x0008
#define MOVIE_PAUSED            0x0010
#define MOVIE_STOPPING          0x0020
#define MOVIE_SOUND_LOADED      0x0100
#define MOVIE_NO_SOUND          0x0200
#define MOVIE_SOUND_STARTING    0x0400
#define MOVIE_VIDEO0_END        0x1000
#define MOVIE_VIDEO1_END        0x2000
#define MOVIE_DECODING          0x8000

#define MOVIE_DECODE_AHEAD      6       // frames decoded in advance

// Plays a movie of /data_iz/movie/ with the Mobiclip library (overlay 88): one or two
// video streams (<name>.mods, e.g. one per screen) and the sound (<name>.sad). Frames
// are decoded ahead by a thread and shown at the movie's frame rate.
class MoviePlayer {
public:
    MoviePlayer();
    ~MoviePlayer();
    void InitSystem(GameHeap *heap);
    void SetFrameBuffers(void *top0, void *top1, void *bottom0, void *bottom1);
    BOOL GetFrontBuffer();
    BOOL Open(const char *name0, const char *name1, BOOL noSound, u8 loadOverlay);
    u32 GetFlags();
    BOOL Update();
    void Stop();
    void Pause();
    void Resume();
    BOOL DecodeFrame();
    void Close(BOOL reloadOverlay);
    static void ThreadMain(void *arg);
    u32 GetFrameRate();
    static BOOL ShowFrame(void *video0, void *video1);
    static void VBlankAlarm(void *arg);
    static void *Alloc(u32 size);
    static void Free(void *ptr);
    static void *AllocCallback(u32 size);
    static void FreeCallback(void *ptr);

    FSFile file0;
    FSFile file1;
    void *video0;           // Mobiclip streams
    void *video1;
    void *video;            // the first stream that is open
    OSAlarm alarm;          // counts the frames to show (at the frame rate)
    OSThread thread;        // decodes frames ahead
    void *stack;
    u32 flags;
    u32 unk_190;
    s32 numDecoded;         // frames decoded and not shown yet
    s32 numDue;             // frames that should have been shown by now
    s32 totalDecoded;
    s32 numShown;
    s32 numFrames;
};

extern MoviePlayer gMoviePlayer;

#endif // MOVIE_MOVIEPLAYER_HPP
