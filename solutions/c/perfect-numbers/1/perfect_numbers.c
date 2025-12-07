#include "perfect_numbers.h"

int32_t factor(int32_t number, int32_t fac){
    if (number % fac == 0)
        return fac;
    else return 0;
}

int32_t classify_number(int32_t number){
    if (number <= 0) return ERROR;
    else if (number == 1) return DEFICIENT_NUMBER;
    int32_t total = 0;
    for (int32_t i = (number / 2 ); i > 0; i--){
        total += factor(number,i);
    }
    printf("%d\n",total);
    if (number == total) return PERFECT_NUMBER;
    else if (number < total) return ABUNDANT_NUMBER;
    else if (number > total) return DEFICIENT_NUMBER;
    else return ERROR;
}