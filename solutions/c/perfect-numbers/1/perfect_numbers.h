#ifndef PERFECT_NUMBERS_H
#define PERFECT_NUMBERS_H
#include <stdint.h>
#include <stdio.h>
typedef enum {
   PERFECT_NUMBER = 1,
   ABUNDANT_NUMBER = 2,
   DEFICIENT_NUMBER = 3,
   ERROR = -1
} kind;

int32_t factor(int32_t number, int32_t factor);

int32_t classify_number(int32_t number);

#endif
