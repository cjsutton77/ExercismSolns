#include "space_age.h"

float age(planet_t planet, int64_t seconds)
{
    float scale = (float)seconds/(float)31557600;
    switch (planet)
        {
            case 0:
            return  scale / 0.2408467 ;
            case 1:
            return scale / 0.61519726;
            case 2:
            return scale / 1.0;
            case 3:
            return scale / 1.8808158;
            case 4:
            return scale / 11.862615;
            case 5:
            return scale / 29.447498;
            case 6:
            return scale / 84.016846;
            case 7:
            return scale / 164.79132;
            default:
            return -1.0;
    }
    
}