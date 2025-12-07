#include "atbash_cipher.h"

// - Encoding `test` gives `gvhg`
// - Encoding `x123 yes` gives `c123b vh`
// - Decoding `gvhg` gives `test`
// - Decoding `gsvjf rxpyi ldmul cqfnk hlevi gsvoz abwlt` gives `thequickbrownfoxjumpsoverthelazydog`

char *atbash_encode(const char *input)
{
    int len = (int)strlen(input);
    char *output = (char*)calloc(2 * len,sizeof(char));
    char t= 'a';
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if ((count+1) % 6 == 0)
        {
            output[count] = ' ';
            ++count;
        }
        t = tolower(input[i]);
        if (isalpha(t))
        {
            output[count] = 219-t;
            ++count;
        }
        else if (isdigit(t))
        {
            output[count] = t;
            ++count;
        }
        else continue;
    }
    if (output[count-1] == ' ') output[count-1] = '\0';
    else output[count] = '\0';
    return output; 
}
char *atbash_decode(const char *input)
{
    int len = (int)strlen(input);
    char *output = (char*)calloc(2 * len,sizeof(char));    
    char t = 'a';
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        t = tolower(input[i]);
        if (isalpha(t))
        {
            output[count] = 219-t;
            ++count;
        }
        else if (isdigit(t))
        {
            output[count] = t;
            ++count;
        }
        else continue;
    }
    output[count] = '\0';
    return output; 
}
