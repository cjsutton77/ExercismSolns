#include "isogram.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
bool is_isogram(const char str[])
{
  if (!str) return false;
  else
  {
    for (size_t i = 0; i < strlen(str); i++)
    {
      for (size_t j = i; j < strlen(str); j++)
      {
        if (i == j) continue; // same indicies will trip to next index
        else if ((str[i] == ' ') || (str[j] == ' ')) continue; // skip for spaces
        else if ((str[i] == '-') || (str[j] == '-')) continue; // skip for hyphens
        else if (tolower(str[i]) == tolower(str[j])) return false; // if they're repeated and i != j -> false
        else continue; // continue
      }
    }
    return true; // otherwise it's true!  nothing else was flagged as bad
  }
}
