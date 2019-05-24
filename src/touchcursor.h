#ifndef touchcursor_header
#define touchcursor_header

/**
 * Processes a key input event. Converts and emits events as necessary.
 */
void processKey(int code, int value);

/**
 * Drops all the currently held keys.
 */
void dropKeys();

#endif