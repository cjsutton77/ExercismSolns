#include "rational_numbers.h"

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int power(int base, int exp){
    if (exp == 0) return 1;
    else {
        int temp = 1;
        for (int i = 0; i < exp; i++){
            temp = temp * base;
        }
        return temp;
    }
}

rational_t add(rational_t p1, rational_t p2){
    rational_t out;
    out.numerator = p1.numerator * p2.denominator + p2.numerator * p1.denominator;
    out.denominator = p1.denominator * p2.denominator;
    if (out.numerator == 0) out.denominator = 1;
    return out;
}

rational_t subtract(rational_t p1, rational_t p2){
    rational_t out;
    out.numerator = p1.numerator * p2.denominator - p2.numerator * p1.denominator;
    out.denominator = p1.denominator * p2.denominator;
    if (out.numerator == 0) out.denominator = 1;
    return out;
}

rational_t multiply(rational_t p1, rational_t p2){
    rational_t out;
    out.numerator = p1.numerator * p2.numerator;
    out.denominator = p1.denominator * p2.denominator;
    int g = gcd(out.numerator, out.denominator);
    out.numerator = out.numerator / g;
    out.denominator = out.denominator / g;
    if (out.denominator<0) {
        out.numerator = -1 * out.numerator;
        out.denominator = -1 * out.denominator;
    }
    return out;   
}

rational_t divide(rational_t p1, rational_t p2){
    rational_t out;
    out.numerator = p1.numerator * p2.denominator;
    out.denominator = p2.numerator * p1.denominator;
    int g = gcd(out.numerator, out.denominator);
    out.numerator = out.numerator / g;
    out.denominator = out.denominator / g;
    if (out.denominator<0) {
        out.numerator = -1 * out.numerator;
        out.denominator = -1 * out.denominator;
    }
    return out;   
}

rational_t absolute(rational_t p1){
    p1.numerator = abs(p1.numerator);
    p1.denominator = abs(p1.denominator);
    return reduce(p1);         
}
rational_t exp_rational(rational_t r, int16_t n){
    rational_t out;
    if (n < 0){
        out.numerator = power(r.denominator,abs(n));
        out.denominator = power(r.numerator,abs(n));
    } 
    else if (n == 0){
        out.numerator = 1;
        out.denominator = 1;
    }
    else {
        out.numerator = power(r.numerator,n);
        out.denominator = power(r.denominator,n);
    }
    if (out.denominator < 0){
        out.numerator = -1 * out.numerator;
        out.denominator = -1 * out.denominator;
    }
    return out;   
}

float exp_real(uint16_t x, rational_t r){
    float exp = (float)r.numerator/(float)r.denominator;
    float fout = pow((float)x,exp);
    return fout;
}

rational_t reduce(rational_t r){
    int g = gcd(r.numerator, r.denominator);
    r.numerator = r.numerator / g;
    r.denominator = r.denominator / g;
    if (r.denominator < 0){
        r.numerator = -1 * r.numerator;
        r.denominator = -1 * r.denominator;
    }
    return r;
}

