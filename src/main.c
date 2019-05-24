#include <windows.h>

#include "binding.h"
#include "config.h"
#include "shell.h"
#include "tray.h"
#include "window.h"

/**
* The program entry.
*/
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
    createWindow(hInstance);
    readConfiguration();
    bindWinEvent();
    bindInput();
    // Wait
    MSG message;
    while (GetMessage(&message, NULL, 0, 0) > 0)
    {
        TranslateMessage(&message);
        DispatchMessage(&message);
    }
    releaseInput();
    return 0;
}