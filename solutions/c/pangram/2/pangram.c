#include "pangram.h"
bool is_pangram(const char sentence[])
{
    char holder[100];
    bool letters[26] = {false};
    size_t counter = 0;
    if (!sentence) return false;
    else 
    {
        for (size_t i = 0; i < strlen(sentence) ; i++)
        {
            if (sentence[i] == ' ') continue;
            else if (isdigit(sentence[i])) continue;  // had to switch to isdigit, not isnumber
            else if (ispunct(sentence[i])) continue;
            else holder[counter++] = tolower(sentence[i]);
        }
        holder[counter] = '\0';
    
    
        for (size_t i = 0; i < strlen(holder); i++)
        {   
            letters[letter(holder[i])] = true;
        }
        size_t sum = 0;
        for (size_t i = 0; i < 26; i++) 
        {
            sum += letters[i];
        }
        return (sum == 26);
    }
}

size_t letter(char a)
{
    return ((size_t)a - 97);
}