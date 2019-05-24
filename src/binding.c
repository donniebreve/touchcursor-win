#include <stdio.h>
#include <windows.h>

#include "binding.h"
#include "keys.h"
#include "touchcursor.h"

HHOOK _kbHook;

/**
* Checks if the event was injected by this program.
*/
int isInjected(KBDLLHOOKSTRUCT* keyboard)
{
    return keyboard->flags & LLKHF_INJECTED;
}

/**
* Handles the keyboard hook event.
*/
LRESULT CALLBACK lowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    // Only process if it is a hook action
    if (nCode != HC_ACTION) return CallNextHookEx(_kbHook, nCode, wParam, lParam);

    // Get the keyboard
    KBDLLHOOKSTRUCT* keyboard = (KBDLLHOOKSTRUCT*)lParam;

    // Check for injected key
    if (isInjected(keyboard))
    {
        return CallNextHookEx(_kbHook, nCode, wParam, lParam);
    }

    // We only want to manipulate normal key presses
    if (isModifier(keyboard->vkCode))
    {
        return CallNextHookEx(_kbHook, nCode, wParam, lParam);
    }

    // Process the key
    int value = wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN ? 1 : 0;
    processKey(keyboard->vkCode, value);
    return 1;
}

/**
* Binds the keyboard input.
*/
void bindInput()
{
    if (!(_kbHook = SetWindowsHookEx(WH_KEYBOARD_LL, lowLevelKeyboardProc, GetModuleHandle(0), 0)))
    {
        fprintf(stderr, "Failed to bind the keyboard hook");
    }
}

/**
* Releases the keyboard input.
*/
void releaseInput()
{
    UnhookWindowsHookEx(_kbHook);
}