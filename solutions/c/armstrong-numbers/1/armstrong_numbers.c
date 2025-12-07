#include "armstrong_numbers.h"
#include "stdio.h"
#include "math.h"
bool is_armstrong_number(int x){
    if (x == 0) return true;
    else 
    {
    int array[10] = {0};

    int holder = x;
    int i = 0;
    
    while (holder != 0)
    {
        array[i] = holder % 10;
        holder = holder / 10;
        i = i + 1;
    }
    
    int sum = 0;

    for (int j = 0; j < 10; j++)
    {
        sum = sum + (int)pow(array[j],i);
    }



    if (sum == x) return true;
    else return false;
    }
}
