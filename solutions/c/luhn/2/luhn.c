#include "luhn.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

char out_num[100];
 

char* stripper(const char *num)
{
  int c = 0;
//printf("\n\n%s\t\t%d\n\n",num,(int)strlen(num));
for (int i = 0; i < (int)strlen(num);i++)
  {
    if ((num[i] == ' ')) continue;
    else 
    {
      out_num[c] = num[i];
      c = c+ 1;
    }

  }
  out_num[c] = '\0';
  return out_num;

}

bool luhn(const char *nnum)
{
  char* num = stripper(nnum);
  //printf("%s\t%lu\n***\n",num,strlen(num));
  int sum = 0;
  int n;
  //printf("%s ** %s\n",nnum,stripper(nnum));
  //printf("%lu\t\t%s\n",strlen(num),num);
  if (strlen(num) <= 1) return false;
  else
  {
    //printf("boo");
    for (int i = 0; i < (int)strlen(num) ; i++)
    {
      n = (int)num[i]-48;
      //rintf("\n%d %d",n,(int)strlen(num)%2);
      //printf("%d\n",i);
      if ((n > 9)||(n < 0)) {return false;}
      else if (((i+(int)strlen(num)%2))%2 == 0)
        { 
        if (n >= 5) 
          {
            n = 2 * n - 9;
          }
        else {n=2 * n;}
        sum = sum + n;
        }
        else 
        {

          sum = sum + n;
        }
    }
    if ((sum % 10) == 0) return true;
    else return false;
  }
}
