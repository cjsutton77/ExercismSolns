#include "leap.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool leap_year(int year)
{
    // on every year that is evenly divisible by 4
    // except every year that is evenly divisible by 100
    // unless the year is also evenly divisible by 400

    if ((year % 4) == 0)
    {
         if ((year % 100 == 0) && !(year % 400 == 0)) return false;
         else if (year % 400) return true;
         else return true;
    }
    else return false;

}
