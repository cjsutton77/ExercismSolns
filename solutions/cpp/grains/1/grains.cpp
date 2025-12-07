#include "grains.h"

namespace grains {
unsigned long long power(unsigned int n)
{
    unsigned long long s = 2;
    if (n == 0) return 1;
    else 
    {
        for (unsigned int i = 1; i <= n; i++)
        {
            s = s * 2;
        }
    }
    return s;
}

unsigned long long square(unsigned int n)
{
    unsigned long long total = 1;
    if (n > 64) return 0;
    else if (n == 0) return 0;
    else if (n == 1) return 1;
    else
    {
        for (unsigned int i = 2 ; i <= n ; i++)
        {
            total = 2*total;
        }
    }
    return total;
}

unsigned long long total(void)
{
	return ~(unsigned long long)0;
}

}  // namespace grains
