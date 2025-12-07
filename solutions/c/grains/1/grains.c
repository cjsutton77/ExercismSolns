#include "grains.h"

uint64_t total(void)
{
	return ~(uint64_t)0;
}

uint64_t power(uint8_t n)
{
    uint64_t s = 2;
    if (n == 0) return 1;
    else 
    {
        for (uint8_t i = 2; i <= n; i++)
        {
            s = s * 2;
        }
    }
    return s;
}

uint64_t square(uint8_t n)
{
    unsigned long long tot = 1;
    if (n > 64) return 0;
    else if (n == 0) return 0;
    else if (n == 1) return 1;
    else
    {
        for (uint8_t i = 2 ; i <= n ; i++)
        {
            tot = 2 * tot;
        }
    }
    return tot;
}