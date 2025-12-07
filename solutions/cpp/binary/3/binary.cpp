#include "binary.h"

namespace binary 
{
int convert(const char* number){
    int flag = 1;
    for (int i=0; number[i] != '\0' ; ++i)
    {
        if ((number[i] == '0') || (number[i] == '1')) continue;
        else flag =0;
    }
    std::cout << "Test" << std::endl;
    int value = 0;
    int t = 1;
    for (int i = (int)(strlen(number) - 1); i >= '\0'; --i)
    {
        if (number[i] == '0')
        {
            t *= 2;
            continue;
        }
        else 
        {
            value  += t ;
            t *= 2;
        }
    }

    return flag * value;
}
}




    
   
