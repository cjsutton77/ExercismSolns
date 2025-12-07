#include "darts.h"

float_t radius(coordinate_t position)
{
    // intake position return radius
    return sqrt(position.x * position.x + position.y * position.y);
}

uint8_t score(coordinate_t landing)
{
    // given the landing position, calculate the score after passing into the radius function.

    float_t point = radius(landing);

    if (point > 10) return 0;
    else if ((point <= 10) && (point > 5)) return 1;
    else if ((point <= 5) && (point > 1)) return 5;
    else return 10;
}