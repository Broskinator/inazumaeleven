#include "data/ConfigFile.hpp"
#include "file/FileManager.hpp"
#include "system/GameHeap.hpp"
#include "msl/stdlib.h"
#include "msl/string.h"

extern GameHeap data_020c47b4;

// (the file manager is found through the first word of the heap)
#define FILE_MANAGER (*(FileManager **)&data_020c47b4)

ConfigFile::ConfigFile()
{
    Reset();
}

ConfigFile::~ConfigFile()
{
    Clear();
    if (entries != NULL) {
        data_020c47b4.Free(entries);
    }
    if (unk_08 != NULL) {
        data_020c47b4.Free(unk_08);
    }
    entries = NULL;
    unk_08 = NULL;
}

void ConfigFile::Reset()
{
    entries = NULL;
    unk_08 = NULL;
}

BOOL ConfigFile::Load(const char *name)
{
    char *data = NULL;
    int size = 0;
    char *line;
    char *p;

    if (FILE_MANAGER != NULL) {
        size = FILE_MANAGER->Load(name, (void **)&data, &data_020c47b4, 0, 0, FALSE, 1, TRUE);
    }
    if (size <= 0) {
        return FALSE;
    }

    if (entries == NULL) {
        Clear();
    }

    for (line = p = data; p < data + size; p++) {
        if (*p == '\n' || *p == '\r') {
            *p = '\0';
            if (strlen(line) != 0) {
                if (ParseLine(line, p - line, &entries[numEntries])) {
                    numEntries++;
                }
            }
            line = p + 1;
        }
    }

    data_020c47b4.Free(data);
    return TRUE;
}

int ConfigFile::GetInt(const char *key)
{
    int index = Find(key);
    int value = 0;
    int shift = 0;
    ConfigEntry *entry;
    int i;
    int length;
    char *digit;
    int c;

    if (index < 0 || entries == NULL) {
        return 0;
    }

    entry = &entries[index];
    if (entry->value[0] == '0' && (entry->value[1] == 'x' || entry->value[1] == 'X')) {
        length = strlen(entry->value) - 2;
        digit = &entry->value[1] + length;
        if (length <= 0) {
            return 0;
        }
        if (length >= 8) {
            length = 8;
        }
        for (i = 0; i < length; i++) {
            c = *digit;
            if (c >= 'A' && c <= 'F') {
                c -= 'A' - 10;
            } else if (c >= 'a' && c <= 'f') {
                c -= 'a' - 10;
            } else if (c >= '0' && c <= '9') {
                c -= '0';
            } else {
                return 0;
            }
            if ((u32)c >= 16) {
                return 0;
            }
            value |= c << shift;
            digit--;
            shift += 4;
        }
    } else {
        value = atoi(entry->value);
    }

    return value;
}

float ConfigFile::GetFloat(const char *key)
{
    int index = Find(key);

    if (index < 0 || entries == NULL) {
        return 0.0f;
    }
    return atof(entries[index].value);
}

void ConfigFile::Clear()
{
    if (entries == NULL) {
        entries = (ConfigEntry *)data_020c47b4.Alloc(CONFIG_MAX_ENTRIES * sizeof(ConfigEntry), 0, TRUE);
    }
    if (unk_08 == NULL) {
        unk_08 = (ConfigEntry *)data_020c47b4.Alloc(CONFIG_MAX_ENTRIES * sizeof(ConfigEntry), 0, TRUE);
    }
    if (unk_08 != NULL) {
        memset(unk_08, 0, CONFIG_MAX_ENTRIES * sizeof(ConfigEntry));
    }
    if (entries != NULL) {
        memset(entries, 0, CONFIG_MAX_ENTRIES * sizeof(ConfigEntry));
    }
    numEntries = 0;
}

// the index of the entry with this key, -1 if there is none
int ConfigFile::Find(const char *key)
{
    ConfigEntry *entry = entries;
    int i;
    int count;

    if (entry == NULL) {
        return -1;
    }

    count = numEntries;
    for (i = 0; i < count; i++, entry++) {
        if (strcmp(entry->key, key) == 0) {
            return i;
        }
    }
    return -1;
}

// reads "key = value" into entry; FALSE for comments and lines without a key or a value
BOOL ConfigFile::ParseLine(char *line, int length, ConfigEntry *entry)
{
    BOOL blank = TRUE;
    BOOL skipSpaces = TRUE;
    BOOL foundEquals = FALSE;
    char *p = line;
    char *start = line;
    char *end;
    int n;
    int c;

    if (entry == NULL) {
        return FALSE;
    }

    while (*p != '\0') {
        c = *p;
        if (c == ' ' || c == '\t') {
            p++;
            if (skipSpaces) {
                start = p;
            }
        } else if (c == ';' && blank) {
            return FALSE;
        } else if (c == '=' && !foundEquals) {
            if (p == start) {
                return FALSE;
            }
            end = p;
            while (end[-1] == ' ' || end[-1] == '\t') {
                end--;
            }
            n = end - start;
            if (n >= CONFIG_KEY_SIZE) {
                n = CONFIG_KEY_SIZE - 1;
            }
            strncpy(entry->key, start, n);
            p++;
            foundEquals = TRUE;
            start = p;
            skipSpaces = TRUE;
        } else {
            blank = FALSE;
            skipSpaces = FALSE;
            p++;
        }
    }

    if (foundEquals) {
        while (p[-1] == ' ' || p[-1] == '\t') {
            p--;
        }
        n = p - start;
        if (n > 0) {
            strncpy(entry->value, start, n);
            return TRUE;
        }
    }
    return FALSE;
}
