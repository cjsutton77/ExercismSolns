#include "trinary.h"

namespace trinary {
int to_decimal(std::string number)
{
    if (isalpha(number[0]) == true) return 0;
    else {
    int num = stoi(number);
    int m;
    int sum = 0;
    int counter = 0;
    while (num > 0)
    {
        m = get_mod(num);
        sum = sum + m * pow_of_three(counter);
        num = get_num(num);
        ++counter;
    }

    return sum;
}
}
int get_mod(int num)
{
    return num % 10;
}

int get_num(int num)
{
    num = num / 10;
    return num;
}

int pow_of_three(int num)
{
    int val = 1;
    if (num == 0) return 1;
    else 
    {
        for (int i = 1; i <= num; ++i) {val = 3 * val;}
        return val;
    }
}
}
 // namespace trinary
