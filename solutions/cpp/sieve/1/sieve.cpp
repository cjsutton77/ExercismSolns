#include "sieve.h"

namespace sieve {

    std::vector<int> primes(int nums){
        std::vector<bool> prime(nums + 1, true);
        for (int p = 2; p * p <= nums; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= nums; i += p){
                    prime[i] = false;
                }
            }
        }
        std::vector<int> out;
        for (int p = 2; p <= nums; p++){
            if (prime[p]){
                out.push_back(p);
            }
        }
    
        return out;
    }
}  // namespace sieve
