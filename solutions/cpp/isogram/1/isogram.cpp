#include "isogram.h"

namespace isogram {
bool is_isogram(std::string phrase)
{
    char holder[100];
    int counter = 0;
    for (unsigned long i = 0; i < phrase.size(); i++)
    {
        if ((phrase[i] == '-') || (phrase[i] == ' ')) continue;
        else
        {
            holder[counter] = std::tolower(phrase[i]) ;
            ++counter;
        }
    }
    holder[counter] = '\0';
    
    bool flag = true;
    for (int i = 0; holder[i] != '\0'; i++)
    {
        for (int j = i+1 ; holder[j] != '\0'; j++)
        {
            if (holder[i] == holder[j]) flag = false;
            else continue;
        }
    }
    return flag;
}
}  // namespace isogram
