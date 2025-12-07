#include "reverse_string.h"

char *reverse(const char *value)
{
  // get length of string that is input
  int len = strlen(value);
  // allocate the dynamic memory for this.
  // you're returning a pointer
  char* output = (char*)malloc(len * sizeof(char));
  // loop through the length to 1..  then insert
  // null in the last character in the output
  for (int i = len; i > 0; i--)
    output[len - i] = value[i-1];
  output[len] = '\0';
  // output
  return output;
}
