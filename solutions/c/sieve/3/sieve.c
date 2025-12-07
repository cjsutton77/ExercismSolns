#include "sieve.h"

// int n;
// vector<bool> is_prime(n+1, true);
// is_prime[0] = is_prime[1] = false;
// for (int i = 2; i <= n; i++) {
//     if (is_prime[i] && (long long)i * i <= n) {
//         for (int j = i * i; j <= n; j += i)
//             is_prime[j] = false;
//     }
// }
uint32_t min(uint32_t a, uint32_t b){
    if (a<=b) return a;
    else return b;
}

uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes){
    if (limit < 2) return 0;
    else if (limit == 2) {
        primes[0] = 2;
        max_primes = 1;
        return max_primes;
    } else {
        
        bool holder[limit];
        uint32_t range = limit-1;
        for (uint32_t i = 0; i < range; i++){
            holder[i] = true;
        }
        for (uint32_t i = 2; i <= limit; i++){
            if (holder[i-2] && i * i <= limit){
                for (uint32_t j = i * i; j <= limit; j += i){
                    holder[j-2] = false;
                }
            }
        }
        uint32_t count = 0;
        for (uint32_t i = 0; i < range; i++){
            if (holder[i]){
                primes[count++] = i + 2;
            }
        }
        printf("%d\n",min(count,max_primes));
        return min(count,max_primes);
    }
}