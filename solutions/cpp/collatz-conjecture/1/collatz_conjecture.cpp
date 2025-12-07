#include "collatz_conjecture.h"
namespace collatz_conjecture {
int steps(long n)
{
    if (n < 0) throw std::domain_error("zero_is_an_error");
    else if (n == 0) throw std::domain_error("negative_value_is_an_error");
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
    return count;  
}}
}  // namespace collatz_conjecture
