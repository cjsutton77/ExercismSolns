#include "bob.h"

char *hey_bob(char *greeting)
{
    unsigned int len = strlen(greeting);
    if (len == 0) return "Fine. Be that way!";
    else 
    {
        int count = 0;
        char temp[1000] = "";
        //printf("%s\n",greeting);
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
                temp[count] = greeting[i];
                ++count;
            }
            else if (isdigit(greeting[i]))
            {
                temp[count] = greeting[i];
                ++count;               
            }
            else if (greeting[i] == '?')
            {
                temp[count] = greeting[i];
                ++count;
            }
            else if (ispunct(greeting[i])) continue;
            else continue;
        }
        temp[count] = '\0';

        if ((upper && !lower) && (temp[count-1] == '?')) return "Calm down, I know what I'm doing!";
        else if ((strlen(temp) == 0)) return "Fine. Be that way!";
        else if (temp[count-1] == '?') return "Sure.";
        else if ((upper && lower) && (temp[count-1] == '?')) return "Sure.";
        else if ((upper && !lower) && (temp[count-1] != '?') ) return "Whoa, chill out!";

        else return "Whatever.";
        
    }
}
