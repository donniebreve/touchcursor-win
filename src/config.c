#define _CRT_SECURE_NO_DEPRECATE
#define UNICODE 1

#include <ctype.h>
#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#include "config.h"
#include "getline.h"
#include "keys.h"
#include "strsep.h"

/**
 * Trims a string.
 * credit to chux: https://stackoverflow.com/questions/122616/how-do-i-trim-leading-trailing-whitespace-in-a-standard-way#122721
 */
char* trimString(char* s)
{
    while (isspace((unsigned char)* s)) s++;
    if (*s)
    {
        char* p = s;
        while (*p) p++;
        while (isspace((unsigned char) * (--p)));
        p[1] = '\0';
    }
    return s;
}

/**
 * Checks if the string starts with a specific value.
 */
int startsWith(const char* str, const char* value)
{
    return strncmp(str, value, strlen(value)) == 0;
}

/**
 * Checks for header or commented lines.
 */
int isCommentOrEmpty(char* line)
{
    return line[0] == '#' || line[0] == '\0';
}

/**
 * Gets the executable path.
 */
wchar_t* getExePath(wchar_t* buffer)
{
    HMODULE hModule = GetModuleHandle(0);
    GetModuleFileName(hModule, buffer, MAX_PATH);
    int lastBackslash = 0;
    for (int i = 0; i < MAX_PATH; i++)
    {
        if (buffer[i] == '\0') break;
        if (buffer[i] == '\\') lastBackslash = i;
    }
    buffer[lastBackslash] = '\0';
    return buffer;
}

static enum sections
{
    none,
    device,
    bindings
} section;

/**
 * Reads the configuration file.
 */
void readConfiguration()
{
    for (int i = 0; i < 256; i++) keymap[i] = 0;

    wchar_t path[MAX_PATH];
    getExePath(path);

    wchar_t* configFilePath = wcscat(path, L"\\touchcursor.conf");
    FILE* configFile = _wfopen(configFilePath, L"r");
    if (!configFile)
    {
        fwprintf(stderr, L"error: could not open the configuration file at: %s\n", configFilePath);
        return;
    }

    char* buffer = NULL;
    size_t length = 0;
    ssize_t result = -1;
    while ((result = getline(&buffer, &length, configFile)) != -1)
    {
        char* line = trimString(buffer);

        // Comment or empty line
        if (isCommentOrEmpty(line)) continue;

        // Check for section
        if (strncmp(line, "[Device]", strlen(line)) == 0)
        {
            section = device;
            continue;
        }
        if (strncmp(line, "[Bindings]", strlen(line)) == 0)
        {
            section = bindings;
            continue;
        }

        // Read configurations
        switch (section)
        {
            case device:
                // Not useful on windows
                continue;

            case bindings:
            {
                char* tokens = line;
                char* token = strsep(&tokens, "=");
                int fromCode = convertKeyStringToCode(token);
                token = strsep(&tokens, "=");
                int toCode = convertKeyStringToCode(token);
                keymap[fromCode] = toCode;
                break;
            }

            case none:
            default:
                continue;
        }
    }
    fclose(configFile);
    if (buffer) free(buffer);
}