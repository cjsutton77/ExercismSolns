#include "triangle.h"
#include <stdbool.h>

bool is_triangle(triangle_t tri)
{
    bool cond_c = ((tri.a + tri.b) >= tri.c);
    bool cond_a = ((tri.b + tri.c) >= tri.a);
    bool cond_b = ((tri.a + tri.c) >= tri.b);
    bool cond_0 = ((tri.a + tri.b + tri.c) > 0);
    return (cond_a && cond_b && cond_c && cond_0);
}
bool is_isosceles(triangle_t sides){
    if (is_triangle(sides))
    {
        if (((sides.a == sides.b) || (sides.a == sides.c) || (sides.b == sides.c)))
        {
           return true; 
        }
        else 
        {
             return false;   
        }
    }
    else return false;
}

bool is_scalene(triangle_t sides){
    if (is_triangle(sides))
    {
        if ((sides.a != sides.b) && (sides.a != sides.c) &&(sides.b != sides.c))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    else return false;
}

bool is_equilateral(triangle_t sides)
{
    if (is_triangle(sides))
    {

        if ((sides.a == sides.b) && (sides.a == sides.c) &&(sides.b == sides.c))
        {
            return true;
        }
        else return false;
    }
    else return false;
}