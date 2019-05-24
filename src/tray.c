#include <windows.h>
#include <stdio.h>

#include "resources.h"
#include "tray.h"

NOTIFYICONDATA _niData;

/**
 * Sets the tray icon.
 */
void setTrayIcon(HWND hWnd)
{
    memset(&_niData, 0, sizeof(_niData));

    _niData.cbSize = sizeof(NOTIFYICONDATA);
    _niData.hWnd = hWnd;
    _niData.uID = 300;
    _niData.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
    _niData.uCallbackMessage = WM_APP;
    _niData.hIcon = LoadIcon(GetModuleHandle(0), MAKEINTRESOURCE(IDI_ICON1));
    lstrcpy(_niData.szTip, L"touchcursor-win");

    Shell_NotifyIcon(NIM_ADD, &_niData);
    Shell_NotifyIcon(NIM_SETVERSION, &_niData);
}

/**
 * Shows the tray menu.
 */
void showTrayMenu(HWND hWnd)
{
    HMENU menu = CreatePopupMenu();
    InsertMenu(menu, 1, MF_BYPOSITION | MF_STRING, ID_EXIT, L"Exit");

    SetMenuDefaultItem(menu, ID_EXIT, 0);
    SetFocus(hWnd);
    SendMessage(hWnd, WM_INITMENUPOPUP, (WPARAM)menu, 0);

    POINT pt;
    GetCursorPos(&pt);

    WORD cmd = TrackPopupMenu(menu, TPM_LEFTALIGN | TPM_RIGHTBUTTON | TPM_NONOTIFY | TPM_RETURNCMD, pt.x, pt.y, 0, hWnd, NULL);
    SendMessage(hWnd, WM_COMMAND, cmd, 0);

    DestroyMenu(menu);
}

/**
 * Removes the tray icon.
 */
void removeTrayIcon()
{
    Shell_NotifyIcon(NIM_DELETE, &_niData);
}