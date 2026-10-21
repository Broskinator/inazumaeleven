#ifndef FILE_ROMFILE_HPP
#define FILE_ROMFILE_HPP

#include "nitro/types.h"
#include "nitro/fs.h"

// File helpers of another, not yet decompiled, file (0x0209dd60...)
extern "C" BOOL func_0209dd60(FSFileID *id, const char *name);     // the ID of a file by its name
extern "C" BOOL func_0209ddd0(FSFile *file, const char *name);     // opens a file by its name

#endif // FILE_ROMFILE_HPP
