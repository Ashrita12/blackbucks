#ifndef KEY_UTIL
#define KEY_UTIL

#include <stdint.h>
#include <stdbool.h>

#define UNKNOWN_KEY "\0"

bool isShift(uint16_t code);
char* getKeyText(uint16_t code, uint8_t shift_pressed);

#endif
