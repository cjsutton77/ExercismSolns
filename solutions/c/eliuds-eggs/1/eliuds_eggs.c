#include "eliuds_eggs.h"

    int egg_count(int num){
        int count = 0;
        do {
            count += num % 2;
            num /= 2;
        } while (num != 0);
        return count;
    }