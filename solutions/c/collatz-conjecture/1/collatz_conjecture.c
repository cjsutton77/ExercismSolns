#include "collatz_conjecture.h"

int steps(int n)
{
    if (n < 0) return -1;
    else if (n == 0) return -1;
    else
    {
    int count = 0;
    while(n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            count += 1;
        }
        else
        {
            n = n * 3 + 1;
            count += 1;
        }
    }
    return count;  }}