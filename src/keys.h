#ifndef keys_header
#define keys_header

// linux codes   https://github.com/torvalds/linux/blob/master/include/uapi/linux/input-event-codes.h
// windows codes http://nehe.gamedev.net/article/msdn_virtualkey_codes/15009/

#define KEY_RESERVED    0
#define KEY_ESC         VK_ESCAPE
#define KEY_1           0x31
#define KEY_2           0x32
#define KEY_3           0x33
#define KEY_4           0x34
#define KEY_5           0x35
#define KEY_6           0x36
#define KEY_7           0x37
#define KEY_8           0x38
#define KEY_9           0x39
#define KEY_0           0x30
#define KEY_MINUS       VK_OEM_MINUS
#define KEY_EQUAL       VK_OEM_PLUS
#define KEY_BACKSPACE   VK_BACK
#define KEY_TAB         VK_TAB
#define KEY_Q           0x51
#define KEY_W           0x57
#define KEY_E           0x45
#define KEY_R           0x52
#define KEY_T           0x54
#define KEY_Y           0x59
#define KEY_U           0x55
#define KEY_I           0x49
#define KEY_O           0x4F
#define KEY_P           0x50
#define KEY_LEFTBRACE   VK_OEM_4
#define KEY_RIGHTBRACE  VK_OEM_6
#define KEY_ENTER       VK_RETURN
#define KEY_LEFTCTRL    VK_LCONTROL
#define KEY_A           0x41
#define KEY_S           0x53
#define KEY_D           0x44
#define KEY_F           0x46
#define KEY_G           0x47
#define KEY_H           0x48
#define KEY_J           0x4A
#define KEY_K           0x4B
#define KEY_L           0x4C
#define KEY_SEMICOLON   VK_OEM_1
#define KEY_APOSTROPHE  VK_OEM_7
#define KEY_GRAVE       VK_OEM_3
#define KEY_LEFTSHIFT   VK_LSHIFT
#define KEY_BACKSLASH   VK_OEM_5
#define KEY_Z           0x5A
#define KEY_X           0x58
#define KEY_C           0x43
#define KEY_V           0x56
#define KEY_B           0x42
#define KEY_N           0x4E
#define KEY_M           0x4D
#define KEY_COMMA       VK_OEM_COMMA
#define KEY_DOT         VK_OEM_PERIOD
#define KEY_SLASH       VK_OEM_2
#define KEY_RIGHTSHIFT  VK_RSHIFT
#define KEY_KPASTERISK  VK_MULTIPLY
#define KEY_LEFTALT     VK_LMENU
#define KEY_SPACE       VK_SPACE
#define KEY_CAPSLOCK    VK_CAPITAL
#define KEY_F1          VK_F1
#define KEY_F2          VK_F2
#define KEY_F3          VK_F3
#define KEY_F4          VK_F4
#define KEY_F5          VK_F5
#define KEY_F6          VK_F6
#define KEY_F7          VK_F7
#define KEY_F8          VK_F8
#define KEY_F9          VK_F9
#define KEY_F10         VK_F10
#define KEY_NUMLOCK     VK_NUMLOCK
#define KEY_SCROLLLOCK  VK_SCROLL
#define KEY_KP7         VK_NUMPAD7
#define KEY_KP8         VK_NUMPAD8
#define KEY_KP9         VK_NUMPAD9
#define KEY_KPMINUS     VK_SUBTRACT
#define KEY_KP4         VK_NUMPAD4
#define KEY_KP5         VK_NUMPAD5
#define KEY_KP6         VK_NUMPAD6
#define KEY_KPPLUS      VK_ADD
#define KEY_KP1         VK_NUMPAD1
#define KEY_KP2         VK_NUMPAD2
#define KEY_KP3         VK_NUMPAD3
#define KEY_KP0         VK_NUMPAD0
#define KEY_KPDOT       VK_DECIMAL

//#define KEY_ZENKAKUHANKAKU 85
//#define KEY_102ND     86

#define KEY_F11         VK_F11
#define KEY_F12         VK_F12

//#define KEY_RO        89
//#define KEY_KATAKANA  90
//#define KEY_HIRAGANA  91
//#define KEY_HENKAN    92
//#define KEY_KATAKANAHIRAGANA 93
//#define KEY_MUHENKAN  94
//#define KEY_KPJPCOMMA 95
//#define KEY_KPENTER   96

#define KEY_RIGHTCTRL   VK_RCONTROL
#define KEY_KPSLASH     VK_DIVIDE
#define KEY_SYSRQ       VK_SNAPSHOT /* print screen, prtscr */
#define KEY_RIGHTALT    VK_RMENU

//#define KEY_LINEFEED  101

#define KEY_HOME        VK_HOME
#define KEY_UP          VK_UP
#define KEY_PAGEUP      VK_PRIOR
#define KEY_LEFT        VK_LEFT
#define KEY_RIGHT       VK_RIGHT
#define KEY_END         VK_END
#define KEY_DOWN        VK_DOWN
#define KEY_PAGEDOWN    VK_NEXT
#define KEY_INSERT      VK_INSERT
#define KEY_DELETE      VK_DELETE

//#define KEY_MACRO     112

#define KEY_MUTE        VK_VOLUME_MUTE
#define KEY_VOLUMEDOWN  VK_VOLUME_DOWN
#define KEY_VOLUMEUP    VK_VOLUME_UP

//#define KEY_POWER     116    /* SC System Power Down */
//#define KEY_KPEQUAL   117
//#define KEY_KPPLUSMINUS 118

#define KEY_PAUSE       VK_PAUSE

//#define KEY_SCALE     120    /* AL Compiz Scale (Expose) */
//#define KEY_KPCOMMA   121
//#define KEY_HANGEUL   122
//#define KEY_HANGUEL   KEY_HANGEUL
//#define KEY_HANJA     123
//#define KEY_YEN       124

#define KEY_LEFTMETA    VK_LWIN
#define KEY_RIGHTMETA   VK_RWIN

//#define KEY_COMPOSE   127
//#define KEY_STOP      128    /* AC Stop */
//#define KEY_AGAIN     129
//#define KEY_PROPS     130    /* AC Properties */
//#define KEY_UNDO      131    /* AC Undo */
//#define KEY_FRONT     132
//#define KEY_COPY      133    /* AC Copy */
//#define KEY_OPEN      134    /* AC Open */
//#define KEY_PASTE     135    /* AC Paste */
//#define KEY_FIND      136    /* AC Search */
//#define KEY_CUT       137    /* AC Cut */
//#define KEY_HELP      138    /* AL Integrated Help Center */
//#define KEY_MENU      139    /* Menu (show menu) */
//#define KEY_CALC      140    /* AL Calculator */
//#define KEY_SETUP     141
//#define KEY_SLEEP     VK_SLEEP    /* SC System Sleep */
//#define KEY_WAKEUP    143    /* System Wake Up */
//#define KEY_FILE      144    /* AL Local Machine Browser */
//#define KEY_SENDFILE  145
//#define KEY_DELETEFILE 146
//#define KEY_XFER      147
//#define KEY_PROG1     148
//#define KEY_PROG2     149
//#define KEY_WWW       150    /* AL Internet Browser */
//#define KEY_MSDOS     151
//#define KEY_COFFEE    152    /* AL Terminal Lock/Screensaver */
//#define KEY_SCREENLOCK KEY_COFFEE
//#define KEY_ROTATE_DISPLAY 153    /* Display orientation for e.g. tablets */
//#define KEY_DIRECTION KEY_ROTATE_DISPLAY
//#define KEY_CYCLEWINDOWS 154
//#define KEY_MAIL      155
//#define KEY_BOOKMARKS 156    /* AC Bookmarks */
//#define KEY_COMPUTER  157
//#define KEY_BACK      158    /* AC Back */
//#define KEY_FORWARD   159    /* AC Forward */
//#define KEY_CLOSECD   160
//#define KEY_EJECTCD   161
//#define KEY_EJECTCLOSECD 162
//#define KEY_NEXTSONG  163
//#define KEY_PLAYPAUSE 164
//#define KEY_PREVIOUSSONG 165
//#define KEY_STOPCD    166
//#define KEY_RECORD    167
//#define KEY_REWIND    168
//#define KEY_PHONE     169    /* Media Select Telephone */
//#define KEY_ISO       170
//#define KEY_CONFIG    171    /* AL Consumer Control Configuration */
//#define KEY_HOMEPAGE  172    /* AC Home */
//#define KEY_REFRESH   173    /* AC Refresh */
//#define KEY_EXIT      174    /* AC Exit */
//#define KEY_MOVE      175
//#define KEY_EDIT      176
//#define KEY_SCROLLUP  177
//#define KEY_SCROLLDOWN 178
//#define KEY_KPLEFTPAREN 179
//#define KEY_KPRIGHTPAREN 180
//#define KEY_NEW       181    /* AC New */
//#define KEY_REDO      182    /* AC Redo/Repeat */

#define KEY_F13         VK_F13
#define KEY_F14         VK_F14
#define KEY_F15         VK_F15
#define KEY_F16         VK_F16
#define KEY_F17         VK_F17
#define KEY_F18         VK_F18
#define KEY_F19         VK_F19
#define KEY_F20         VK_F20
#define KEY_F21         VK_F21
#define KEY_F22         VK_F22
#define KEY_F23         VK_F23
#define KEY_F24         VK_F24

//#define KEY_PLAYCD    200
//#define KEY_PAUSECD   201
//#define KEY_PROG3     202
//#define KEY_PROG4     203
//#define KEY_DASHBOARD 204    /* AL Dashboard */
//#define KEY_SUSPEND   205
//#define KEY_CLOSE     206    /* AC Close */
//#define KEY_PLAY      207
//#define KEY_FASTFORWARD 208
//#define KEY_BASSBOOST   209
//#define KEY_PRINT     210
//#define KEY_HP        211
//#define KEY_CAMERA    212
//#define KEY_SOUND     213
//#define KEY_QUESTION  214
//#define KEY_EMAIL     215
//#define KEY_CHAT      216
//#define KEY_SEARCH    217
//#define KEY_CONNECT   218
//#define KEY_FINANCE   219    /* AL Checkbook/Finance */
//#define KEY_SPORT     220
//#define KEY_SHOP      221
//#define KEY_ALTERASE  222
//#define KEY_CANCEL    223    /* AC Cancel */
//#define KEY_BRIGHTNESSDOWN 224
//#define KEY_BRIGHTNESSUP   225
//#define KEY_MEDIA     226
//#define KEY_SWITCHVIDEOMODE 227    /* Cycle between available video outputs (Monitor/LCD/TV-out/etc) */
//#define KEY_KBDILLUMTOGGLE  228
//#define KEY_KBDILLUMDOWN    229
//#define KEY_KBDILLUMUP      230
//#define KEY_SEND      231    /* AC Send */
//#define KEY_REPLY     232    /* AC Reply */
//#define KEY_FORWARDMAIL     233    /* AC Forward Msg */
//#define KEY_SAVE      234    /* AC Save */
//#define KEY_DOCUMENTS 235
//#define KEY_BATTERY   236
//#define KEY_BLUETOOTH 237
//#define KEY_WLAN      238
//#define KEY_UWB       239
//#define KEY_UNKNOWN   240
//#define KEY_VIDEO_NEXT      241    /* drive next video source */
//#define KEY_VIDEO_PREV      242    /* drive previous video source */
//#define KEY_BRIGHTNESS_CYCLE 243    /* brightness up, after max is min */
//#define KEY_BRIGHTNESS_AUTO 244    /* Set Auto Brightness: manual brightness control is off, rely on ambient */
//#define KEY_BRIGHTNESS_ZERO KEY_BRIGHTNESS_AUTO
//#define KEY_DISPLAY_OFF     245    /* display device to off state */
//#define KEY_WWAN      246    /* Wireless WAN (LTE, UMTS, GSM, etc.) */
//#define KEY_WIMAX     KEY_WWAN
//#define KEY_RFKILL    247    /* Key that controls all radios */
//#define KEY_MICMUTE   248

/**
 * Checks if the key is a modifier key.
 */
int isModifier(int code);

/**
 * Checks for an extended key, specific to windows.
 */
int isExtendedKey(int code);

/**
 * Converts a key string "KEY_I" to its corresponding code.
 */
int convertKeyStringToCode(char* keyString);

#endif