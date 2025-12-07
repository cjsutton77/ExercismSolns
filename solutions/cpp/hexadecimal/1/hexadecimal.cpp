#include "hexadecimal.h"

namespace hexadecimal {
long convert(std::string str) 
{
   //std::cout << "-->" << str.size() << std::endl;
   unsigned long size = str.length();
   reverse(str.begin(), str.end());
   unsigned long base = 1;
   unsigned long val = 0;
   for (unsigned long  i = 0; i < size; ++i)
   {
      if (hexi(str[i]) == -1) 
      {
        val = 0;
        break;
      }
      else
      {
        val += base * hexi(str[i]);
        base *= 16;
      }
   }
   return val;
}

long hexi(char n)
{
  if (n == '0') return 0;
  if (n == '1') return 1;
  if (n == '2') return 2;
  if (n == '3') return 3;
  if (n == '4') return 4;
  if (n == '5') return 5;
  if (n == '6') return 6;
  if (n == '7') return 7;
  if (n == '8') return 8;
  if (n == '9') return 9;
  if (n == 'a') return 10;
  if (n == 'b') return 11;
  if (n == 'c') return 12;
  if (n == 'd') return 13;
  if (n == 'e') return 14;
  if (n == 'f') return 15;
  else return -1;
}
}  // namespace hexadecimal
