
#ifndef SCREENSHOT_H__
#define SCREENSHOT_H__

#include <stdint.h>
#include <stdio.h>

void saveBMP(FILE* fp, const uint8_t* bits, const uint8_t* pal, int w, int h);

#endif
