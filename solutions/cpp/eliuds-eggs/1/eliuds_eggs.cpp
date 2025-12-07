#include "eliuds_eggs.h"

namespace chicken_coop {
    int positions_to_quantity(int num){
        int count = 0;
        do {
            count += num % 2;
            num /= 2;
        } while (num != 0);
        return count;
    }
}  // namespace chicken_coop
