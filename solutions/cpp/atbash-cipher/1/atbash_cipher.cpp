#include "atbash_cipher.h"

namespace atbash_cipher {

char flip(char x)
{
    x = std::tolower(x);
    return 219 - x;
}

std::string encode(std::string input)
{
    std::string output = "";
    for (unsigned long i = 0; i < (unsigned long)input.size(); i++)
    {
        
        if (std::isblank(input[i])) continue;
        else if  (std::ispunct(input[i])) continue;
        else if (std::isdigit(input[i])) output += input[i];
        else if (std::isalpha(input[i]))
        {
            if ((output.size()+1) % 6 == 0) output += ' ';
            output += flip(input[i]); 
        }
        else continue;
    }
    //if (output[output.size() - 1] == ' ') output[output.size() - 1] = ''; 

    return output;
}

std::string decode(std::string input)
{
    std::string output = "";
    for (int i = 0; i < (int)input.size(); i++)
    {
        if (std::isdigit(input[i])) output += input[i];
        else if (std::isblank(input[i])) continue;
        else if (std::isalpha(input[i])) output += flip(input[i]);
        else continue;
    }
    return output;
}
}  // namespace atbash_cipher
