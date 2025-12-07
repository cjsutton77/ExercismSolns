#include "resistor_color_trio.h"

resistor_value_t color_code(resistor_band_t bands[]){
    resistor_value_t* temp = (resistor_value_t*)malloc(sizeof(resistor_value_t));
    temp->value = bands[0] * 10 + bands[1];
    switch (bands[2]) {
        case 0:
            temp->unit = OHMS;
            break;
        case 1:
            temp->value *= 10;
            temp->unit = OHMS;
            break;
        case 2:
            temp->value /= 10;
            temp->unit = KILOOHMS;
            break;
        case 3:
            temp->unit = KILOOHMS;
            break;
        case 4:
            temp->value *= 10;
            temp->unit = KILOOHMS;
            break;
        case 5:
            temp->value /= 10;
            temp->unit = MEGAOHMS;
            break;
        case 6:
            temp->unit = MEGAOHMS;
            break;
        default:
            temp->unit = GIGAOHMS;
            break;
    }
    return *temp;
    
}
