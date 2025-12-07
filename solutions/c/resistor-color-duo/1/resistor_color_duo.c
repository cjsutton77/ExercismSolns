#include "resistor_color_duo.h"

resistor_band_t resistorBandColors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};

unsigned int color_code(resistor_band_t bands[]){
    unsigned int value = bands[0] * 10 + bands[1];
    return value;
}