#include <windows.h>

#include "emit.h"
#include "keys.h"

/**
 * Emits a key event.
 */
void emit(int code, int value)
{
    // Basic values
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    // Set the virtual key code and scan code
    input.ki.wVk = code;
    input.ki.wScan = MapVirtualKey(code, 0);
    
    // Set the key flags
    input.ki.dwFlags = 0;
    if (value == 0) input.ki.dwFlags |= KEYEVENTF_KEYUP;
    if (isExtendedKey(code)) input.ki.dwFlags |= KEYEVENTF_EXTENDEDKEY;

    // Send the key event
    SendInput(1, &input, sizeof(input));
}