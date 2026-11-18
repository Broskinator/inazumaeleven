#ifndef MATCH_MATCHFILE_HPP
#define MATCH_MATCHFILE_HPP

#include "file/FileManager.hpp"
#include "system/GameHeap.hpp"

extern GameHeap gAllocator;

// loads size bytes at offset of a file into *buffer through the heap's file manager (0 without
// one); the match's files of fixed-size entries are read this way
static inline int MatchLoadFile(const char *name, void **buffer, int offset, int size)
{
    FileManager *fileManager = gAllocator.fileManager;
    const char *path = name;

    if (fileManager == NULL) {
        return 0;
    }
    return fileManager->Load(path, buffer, &gAllocator, offset, size, FALSE, 1, TRUE);
}

#endif // MATCH_MATCHFILE_HPP
