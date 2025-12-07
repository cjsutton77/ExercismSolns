#include "bob.h"

namespace bob {
std::string hey(std::string greeting)
{
    unsigned int len = greeting.size();
    if (len == 0) return "Fine. Be that way!";
    else 
    {
        std::string temp = "";
        bool upper = false;
        bool lower = false;
        for (unsigned int i = 0; i < len; i++)
        {
            if (iscntrl(greeting[i])) continue;
            else if (greeting[i] == ' ') continue;
            else if (isalpha(greeting[i]))
            {
                if (isupper(greeting[i])) upper = true;
                else lower = true;
                temp += greeting[i];
            }
            else if (isdigit(greeting[i]))
            {
                temp += greeting[i];           
            }
            else if (greeting[i] == '?')
            {
                temp += greeting[i];
            }
            else if (ispunct(greeting[i])) continue;
            else continue;
        }
        int cnt = temp.size();
        if ((upper && !lower) && (temp[cnt-1] == '?')) 
            return "Calm down, I know what I'm doing!";
        else if (cnt == 0) return "Fine. Be that way!";
        else if (temp[cnt-1] == '?') return "Sure.";
        else if ((upper && lower) && (temp[cnt-1] == '?')) return "Sure.";
        else if ((upper && !lower) && (temp[cnt-1] != '?') ) return "Whoa, chill out!";
        else return "Whatever.";
    }
}

}  // namespace bob
