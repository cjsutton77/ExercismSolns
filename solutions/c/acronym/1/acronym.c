#include "acronym.h"

char* abbreviate(const char* phrase)
{
  if (phrase == NULL)
    return NULL;
  else if (!strcmp(phrase,""))
    return NULL;
  else
  {
    size_t len = strlen(phrase);
    char *output = (char*)calloc(2 * len,sizeof(char));
    size_t counter = 0;
    output[counter] = toupper(phrase[counter]);
    size_t acroCount = 1;
    for (counter=0;counter < len; )
    {
      if ((phrase[counter] == '-') || (phrase[counter] == ' '))
      {
        ++counter;
        while (1)
        {
          //++counter;
          if (isalpha(phrase[counter]))
          {
            output[acroCount] = toupper(phrase[counter]);
            ++acroCount;
            break;
          }
          else
          {
            ++counter;
          }
        }
      }
      else ++counter;
    }
    return output;
  }
}
