#include "acronym.h"

namespace acronym {

std::string acronym(char const *phrase)
{
    size_t first = 1;
    std::string output = "";
    for (size_t i = 0; i < strlen(phrase); i++)
    {
        if (first == 1 && isalpha(phrase[i])) 
        {
            output = output + (char)toupper(phrase[i]);
            first = 0;
        }
        else if (phrase[i] == ' ' || phrase[i] == '-') first = 1;
        else continue;
        
    }
    
    return output;
}
    
}  // namespace acronym
