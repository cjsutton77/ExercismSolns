#include "armstrong_numbers.h"

namespace armstrong_numbers {
int is_armstrong_number(int number)
{
    std::string s_num = std::to_string(number);
    int length = s_num.length();
    int arm = 0;
    int m, num = number;
    for (int i = 1 ; i <= length; ++i)
        {
            m = get_mod(num);
            arm = arm + power(m,length);
            num = get_num(num);
        }
    return (arm == number);
}

int power(int num, int exp)
{
    return (int)pow((double)num,(double)exp);
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

}  // namespace armstrong_numbers
