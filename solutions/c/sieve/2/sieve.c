#include "sieve.h"

uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes){
    if (limit < 2) return 0;
    else if (limit == 2) {
        primes[0] = 2;
        max_primes = 1;
        return max_primes;
    } else {
    uint32_t* holder = (uint32_t*)calloc(2*limit,sizeof(uint32_t));
    size_t k = 0;
    for (uint32_t i = 2; i < limit + 1; i++){
        holder[k++] = i;
    }
    for (uint32_t i = 2; i < limit+1; i ++){
        for (uint32_t j = 2; j < limit+1; j++){
            if (i*j > limit) break;
            for (uint32_t w = 0 ; w< limit+1; w++){
                if (holder[w] == i*j) holder[w] = 0;   
            }
        }
    }
    size_t _max_primes = 0;
    for (uint32_t i = 0; i < limit; i++){
        if (holder[i] != 0) ++_max_primes;
    }
    k = 0;
    for (uint32_t i = 0; i < limit; i++){
        if (holder[i] != 0){
            primes[k] = holder[i];
            ++k;
        }
        else continue;
    }
    free(holder);
    if (max_primes > _max_primes) return _max_primes;
    else return max_primes;
}
}

