#include "binary_search.h"

namespace binary_search {

std::size_t find(const std::vector<int> vec, int num) {
    std::size_t len = vec.size();
    if (len == 0) {
        throw std::domain_error("Empty vector");
    }
    else if ((num > vec[len-1]) || (num < vec[0])){
        throw std::domain_error("Not in range.");
    }
    else{
        bool flag = true;
        for (const auto &i:vec){
            if (i != num) continue;
            else {
                flag = false;
                break;
            }
        }
        if (flag) throw std::domain_error("value not in list");
    }

    
    std::size_t start = 0;
    std::size_t end = len - 1;

    while (start <= end) {
        std::size_t mid = start + (end - start) / 2;

        if (vec[mid] == num) {
            return mid;
        } else if (vec[mid] < num) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    
    return 0;
}

}  // namespace binary_search
