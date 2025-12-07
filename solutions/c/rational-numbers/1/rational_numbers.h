#ifndef RATIONAL_NUMBERS_H
#define RATIONAL_NUMBERS_H
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef struct rational {
    int numerator;
    int denominator;
} rational_t;

int gcd(int a, int b);
int power(int base, int exp);
rational_t add(rational_t p1, rational_t p2);
rational_t subtract(rational_t p1, rational_t p2);
rational_t multiply(rational_t p1, rational_t p2);
rational_t divide(rational_t p1, rational_t p2);
rational_t absolute(rational_t p1);
rational_t exp_rational(rational_t r, int16_t n);
float exp_real(uint16_t x, rational_t r);
rational_t reduce(rational_t r);
#endif
