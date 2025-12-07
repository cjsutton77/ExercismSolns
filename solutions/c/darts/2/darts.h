#ifndef DARTS_H
#define DARTS_H
#include <math.h>    //needed for uint_8, sqrt
#include <stdint.h>  //needed for float_t

// STRUCTS
// define the struct indicating the coordinate, the parameters are the x, y position.
typedef struct coordinate_t 
    {
        float_t x;
        float_t y;
    }    coordinate_t;

// FUNCTION PROTOTYPES
// intake the position and return the score
uint8_t score(coordinate_t);

// intake the position and calculate the distance from the center of the dart board
float_t radius(coordinate_t);
#endif
