#include "binary.h"

int convert(const char *input)
{
    int value = 0;
    for (size_t i=0; i < strlen(input); ++i)
    {
        if (((((int)input[i] - 48)) != 0) && ((((int)input[i] - 48)) != 1)) return INVALID;
        else value += (int)((int)input[i] - 48) * (int)pow(2.0,(double)((int)(strlen(input) - i - 1)));
    }
    
    return value;
}
