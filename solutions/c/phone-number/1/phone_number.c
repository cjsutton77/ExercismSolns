#include "phone_number.h"
char *cleanup(const char *input, int start);

char *cleanup(const char *input, int start)
{
  char* result = calloc(100,sizeof(char));
  int num=0;
  for (int i=start;i<(int)strlen(input);i++)
  {
    if(isdigit(input[i]))
    {
      result[num] = input[i];
      ++num;
    }
    else if (input[i] == '\0')
      result[num] = '\0';
    else
    {
      continue;
    }
  }
  return result;
}

char* phone_number_clean(const char *input)
{


  char* result = calloc(100,sizeof(char));

  strcpy(result,cleanup(input,0));
  if ((int)strlen(result) < 10)
  {
    strcpy(result,"0000000000");
    return result;
  }
  else if (((int)strlen(result) == 11) && (result[0] != '1'))
  {
    strcpy(result,"0000000000");
    return result;
  }
  else if ((int)strlen(result) == 11)
  {
    char* result2 = calloc(100,sizeof(char));
    ++result;
    strcpy(result2,result);
    bool cond_area = (result2[0] == '0') || (result2[0] == '1');
    bool exch_area = (result2[3] == '0') || (result2[3] == '1');
    bool cond = cond_area || exch_area;
    cond = !cond;
    if (!cond) return strcpy(result2,"0000000000");
    return result2;
  }
  else if ((int)strlen(result) > 11)
  {
    strcpy(result,"0000000000");
    return result;
  }
  else if ((int)strlen(result) == 10)
  {
    bool cond_area = (result[0] == '0') || (result[0] == '1');
    bool exch_area = (result[3] == '0') || (result[3] == '1');
    bool cond = cond_area || exch_area;
    cond = !cond;
    if (!cond) return strcpy(result,"0000000000");
    return result;
  }
  else return result;

  //               1234567890
  //strcpy(result,"          ");
}
