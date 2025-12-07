#include "hamming.h"
#include "string.h"

int compute(const char *lhs, const char *rhs)
{
    if (strlen(lhs) == strlen(rhs))
    {
        size_t counter = strlen(lhs);
        size_t diff = 0;
        for (size_t i = 0 ; i < counter ; i++)
        {
            if (lhs[i] == rhs[i]) continue;
            else ++diff;
        }
        return diff;
    }
    else return -1;
}
