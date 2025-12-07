#include "resistor_color_trio.h"


resistor_value_t color_code(resistor_band_t bands[]){
    // BLACK, // 0
    // BROWN, // 1
    // RED,   // 2
    // ORANGE,// 3
    // YELLOW,// 4
    // GREEN, // 5
    // BLUE,  // 6
    // VIOLET,// 7
    // GREY,  // 8
    // WHITE  // 9
    // ---------
    // OHMS,     0
    // KILOOHMS, 3
    // MEGAOHMS, 6
    // GIGAOHMS  9
    
    resistor_value_t temp;
    printf("%d %d %d\n",bands[0],bands[1],bands[2]);
    temp.value = bands[0] * 10 + bands[1];
    switch (bands[2]) {
        case 0:
            temp.unit = OHMS;
            break;
        case 1:
            temp.value *= 10;
            temp.unit = OHMS;
            break;
        case 2:
            temp.value /= 10;
            temp.unit = KILOOHMS;
            break;
        case 3:
            temp.unit = KILOOHMS;
            break;
        case 4:
            temp.value *= 10;
            temp.unit = KILOOHMS;
            break;
        case 5:
            temp.value /= 10;
            temp.unit = MEGAOHMS;
            break;
        case 6:
            temp.unit = MEGAOHMS;
            break;
        default:
            temp.unit = GIGAOHMS;
            break;
    }
    return temp;
    
}
