#include "atbash_cipher.h"

// - Encoding `test` gives `gvhg`
// - Encoding `x123 yes` gives `c123b vh`
// - Decoding `gvhg` gives `test`
// - Decoding `gsvjf rxpyi ldmul cqfnk hlevi gsvoz abwlt` gives `thequickbrownfoxjumpsoverthelazydog`

char *atbash_encode(const char *input)
{
    char *temp = (char*)calloc(100,char);
    char t;
    int count = 0;
    for (int i = 0; i < (int)strlen(input); i++)
    {
        if ((count+1) % 6 == 0)
        {
            temp[count] = ' ';
            ++count;
        }
        t = tolower(input[i]);
        if (isalpha(t))
        {
            temp[count] = 219-t;
            ++count;
        }
        else if (isdigit(t))
        {
            temp[count] = t;
            ++count;
        }
        else continue;
    }
    if (temp[count-1] == ' ') temp[count-1] = '\0';
    else temp[count] = '\0';
    free(temp);
    return temp; 
}
char *atbash_decode(const char *input)
{
    char *temp = (char*)calloc(100,char);    
    char t;
    int count = 0;
    for (int i = 0; i < (int)strlen(input); i++)
    {
        t = tolower(input[i]);
        if (isalpha(t))
        {
            temp[count] = 219-t;
            ++count;
        }
        else if (isdigit(t))
        {
            temp[count] = t;
            ++count;
        }
        else continue;
    }
    temp[count] = '\0';
    free(temp);
    return temp; 
}
