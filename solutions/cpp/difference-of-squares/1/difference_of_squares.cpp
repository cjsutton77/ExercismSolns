#include "difference_of_squares.h"

namespace difference_of_squares {

unsigned long long square_of_sum(unsigned long long n)
{
    unsigned long long output = 0;
    for (unsigned long long i = 1; i <= n; i++)
        {
            output += i;
        }
    return output * output;
}
unsigned long long sum_of_squares(unsigned long long n)
{
     unsigned long long output = 0;    
     for (unsigned long long i = 1; i <= n; i++)
        {
            output += i * i;
        }
    return output;
}

unsigned long long difference(unsigned long long n)
{
    return square_of_sum(n) - sum_of_squares(n);
}

}  // namespace difference_of_squares
