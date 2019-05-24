#ifndef keys_header
#define keys_header

#define KEY_BACKSPACE 0x08
#define KEY_TAB 0x09
#define KEY_ENTER 0x0D
#define KEY_CAPSLOCK 0x14
#define KEY_ESC 0x1B
#define KEY_PAGEUP 0x21
#define KEY_PAGEDOWN 0x22
#define KEY_END 0x23
#define KEY_HOME 0x24
#define KEY_LEFT 0x25
#define KEY_UP 0x26
#define KEY_RIGHT 0x27
#define KEY_DOWN 0x28
#define KEY_SPACE 0x20
#define KEY_PRINT 0x2C
#define KEY_INSERT 0x2D
#define KEY_DELETE 0x2E

#define KEY_0 0x30
#define KEY_1 0x31
#define KEY_2 0x32
#define KEY_3 0x33
#define KEY_4 0x34
#define KEY_5 0x35
#define KEY_6 0x36
#define KEY_7 0x37
#define KEY_8 0x38
#define KEY_9 0x39

#define KEY_A 0x41
#define KEY_B 0x42
#define KEY_C 0x43
#define KEY_D 0x44
#define KEY_E 0x45
#define KEY_F 0x46
#define KEY_G 0x47
#define KEY_H 0x48
#define KEY_I 0x49
#define KEY_J 0x4A
#define KEY_K 0x4B
#define KEY_L 0x4C
#define KEY_M 0x4D
#define KEY_N 0x4E
#define KEY_O 0x4F
#define KEY_P 0x50
#define KEY_Q 0x51
#define KEY_R 0x52
#define KEY_S 0x53
#define KEY_T 0x54
#define KEY_U 0x55
#define KEY_V 0x56
#define KEY_W 0x57
#define KEY_X 0x58
#define KEY_Y 0x59
#define KEY_Z 0x5A

#define KEY_LEFTMETA 0x5B
#define KEY_RIGHTMETA 0x5C
#define KEY_LEFTSHIFT 0xA0
#define KEY_RIGHTSHIFT 0xA1
#define KEY_LEFTCTRL 0xA2
#define KEY_RIGHTCTRL 0xA3
#define KEY_LEFTALT 0xA4
#define KEY_RIGHTALT 0xA5
#define KEY_GRAVE 0xC0
#define KEY_F1 0x70
#define KEY_F2 0x71
#define KEY_F3 0x72
#define KEY_F4 0x73
#define KEY_F5 0x74
#define KEY_F6 0x75
#define KEY_F7 0x76
#define KEY_F8 0x77
#define KEY_F9 0x78
#define KEY_F10 0x79
#define KEY_F11 0x7A
#define KEY_F12 0x7B
#define KEY_F13 0x7C
#define KEY_F14 0x7D
#define KEY_F15 0x7E
#define KEY_F16 0x7F
#define KEY_F17 0x80
#define KEY_F18 0x81
#define KEY_F19 0x82
#define KEY_F20 0x83
#define KEY_F21 0x84
#define KEY_F22 0x85
#define KEY_F23 0x86
#define KEY_F24 0x87
#define KEY_NUMLOCK 0x90
#define KEY_SCROLLLOCK 0x91

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