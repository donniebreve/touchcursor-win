#include <windows.h>
#include <shellapi.h>

#include "binding.h"
#include "log.h"
#include "shell.h"
#include "touchcursor.h"

HWINEVENTHOOK _winHook;

/**
 * Callback procedure for windows events.
 *
 * We only register to the EVENT_OBJECT_FOCUS event to detect when a window is focused.
 *
 * Potential events researched:
 * EVENT_SYSTEM_FOREGROUND
 * EVENT_OBJECT_FOCUS
 * EVENT_SYSTEM_CAPTUREEND
 *
 * This is necessary because RDP also sets the WH_KEYBOARD_LL hook and our existing hook moves behind the RDP hook.
 * Therefore, anytime a RDP window is focused we need to rebind our keyboard hook to move to the front.
 */
void CALLBACK winEventProc(HWINEVENTHOOK hook, DWORD event, HWND hwnd, LONG idObject, LONG idChild, DWORD dwEventThread, DWORD dwmsEventTime)
{
    if (event == EVENT_OBJECT_FOCUS)
    {
        Sleep(1);
        dropKeys();
        releaseInput();
        bindInput();
    }
}

/**
 * Binds to windows events.
 */
void bindWinEvent()
{
    _winHook = SetWinEventHook(
        EVENT_OBJECT_FOCUS,
        EVENT_OBJECT_FOCUS,
        NULL,
        winEventProc,
        0,
        0,
        WINEVENT_OUTOFCONTEXT | WINEVENT_SKIPOWNPROCESS);
}