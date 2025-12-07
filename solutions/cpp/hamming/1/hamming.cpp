#include "hamming.h"

namespace hamming {

int compute(std::string str1, std::string str2)
{
    int len = str1.length();
    int hamming = 0;
    if (str1.length() != str2.length()) throw std::domain_error(" ");

    for (int i = 0 ; i < len ; i++)
    {
        if (str1[i] != str2[i]) ++hamming;
        else continue;
    }
    return hamming;
}

}  // namespace hamming}
