#ifndef tray_header
#define tray_header

#define ID_EXIT 666

/**
 * Sets the tray icon.
 */
void setTrayIcon(HWND hWnd);

/**
 * Shows the tray menu.
 */
void showTrayMenu(HWND hWnd);

/**
 * Removes the tray icon.
 */
void removeTrayIcon();

#endif