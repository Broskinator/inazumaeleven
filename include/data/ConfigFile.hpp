#ifndef DATA_CONFIGFILE_HPP
#define DATA_CONFIGFILE_HPP

#include "nitro/types.h"

#define CONFIG_KEY_SIZE 32
#define CONFIG_VALUE_SIZE 32
#define CONFIG_MAX_ENTRIES 100

// A line "key = value" of a text file
struct ConfigEntry {
    char key[CONFIG_KEY_SIZE];
    char value[CONFIG_VALUE_SIZE];
};

// A text file of settings, one "key = value" per line. Spaces and tabs around the key
// and the value are ignored, lines starting with ';' are comments. Values are read
// as numbers: decimal, hexadecimal ("0x...", up to 8 digits) or floating point.
class ConfigFile {
public:
    ConfigFile();
    ~ConfigFile();
    void Reset();
    BOOL Load(const char *name);
    int GetInt(const char *key);
    float GetFloat(const char *key);
    void Clear();
    int Find(const char *key);
    BOOL ParseLine(char *line, int length, ConfigEntry *entry);

    ConfigEntry *entries;
    int numEntries;
    ConfigEntry *unk_08;    // allocated and cleared with the entries, not used here
};

#endif // DATA_CONFIGFILE_HPP
