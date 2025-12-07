#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H
#include <stdlib.h>
#endif

typedef enum unit {
    OHMS,
    KILOOHMS,
    MEGAOHMS,
    GIGAOHMS
} units;

typedef struct {
    unsigned int value;
    units unit;
} resistor_value_t;


typedef enum colors {
    BLACK, // 0
    BROWN, // 1
    RED,   // 2
    ORANGE,// 3
    YELLOW,// 4
    GREEN, // 5
    BLUE,  // 6
    VIOLET,// 7
    GREY,  // 8
    WHITE  // 9
} resistor_band_t;

resistor_value_t color_code(resistor_band_t bands[]);

