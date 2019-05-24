#define _CRT_SECURE_NO_DEPRECATE

#include <windows.h>
#include <stdio.h>

#include "log.h"

char __message[256];

/**
 * Outputs a debug message to the VS console.
 */
void debug(char* message)
{
    sprintf(__message, "%lld:%s\n", GetTickCount64(), message);
    OutputDebugStringA(__message);
}