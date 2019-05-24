#include <stdio.h>
#include <windows.h>

#include "log.h"
#include "resources.h"
#include "tray.h"

/**
 * The window event callback function.
 */
LRESULT CALLBACK windowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
        case WM_CREATE:
            setTrayIcon(hWnd);
            return 0;

        case WM_APP:
            switch (lParam)
            {
                case WM_RBUTTONUP:
                    SetForegroundWindow(hWnd);
                    showTrayMenu(hWnd);
                    return 0;
            }
            return 0;

        case WM_COMMAND:
            switch (LOWORD(wParam))
            {
                case ID_EXIT:
                    PostMessage(hWnd, WM_CLOSE, 0, 0);
                    return 0;
            }
            break;

        case WM_DESTROY:
            removeTrayIcon();
            PostQuitMessage(0);
            break;
    }
    return DefWindowProc(hWnd, message, wParam, lParam);
}

/**
 * Creates an invisible window to receive events.
 */
HWND createWindow(HINSTANCE hInstance)
{
    WNDCLASSW windowClass;
    windowClass.lpfnWndProc     = windowProc;
    windowClass.hInstance       = hInstance;
    windowClass.lpszClassName   = L"MainWindowClass";
    windowClass.lpszMenuName    = L"MainMenu";
    windowClass.style           = 0;
    windowClass.cbClsExtra      = 0;
    windowClass.cbWndExtra      = 0;
    windowClass.hbrBackground   = NULL;
    windowClass.hIcon           = NULL;
    windowClass.hCursor         = NULL;
    
    // Register the window class
    if (!RegisterClass(&windowClass))
    {
        fprintf(stderr, "Could not register the window class.\n");
    }
    
    // Create the window
    HWND hWnd = CreateWindow(L"MainWindowClass", L"Tray", 0, 0, 0, 0, 0, NULL, NULL, hInstance, NULL);
    if (hWnd == NULL)
    {
        fprintf(stderr, "Could not create the window.\n");
    }
    return hWnd;
}