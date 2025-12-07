#include "darts.h"

float_t radius(coordinate_t position)
{
    return sqrt(position.x * position.x + position.y * position.y);
}

uint8_t score(coordinate_t landing)
{
    //If the dart lands outside the target, player earns no points (0 points).
    //If the dart lands in the outer circle of the target, player earns 1 point. 
    //If the dart lands in the middle circle of the target, player earns 5 points.
    //If the dart lands in the inner circle of the target, player earns 10 points.

    // outer  => 10 units
    // middle => 5 units
    // inner  => 1 unit

    float_t point = radius(landing);

    if (point > 10) return 0;
    else if ((point <= 10) && (point > 5)) return 1;
    else if ((point <= 5) && (point > 1)) return 5;
    else return 10;
}