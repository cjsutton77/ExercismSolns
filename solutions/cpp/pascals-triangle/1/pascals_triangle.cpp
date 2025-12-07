#include "pascals_triangle.h"

namespace pascals_triangle {
std::vector<std::vector<int>> generate_rows(int num){
    std::vector<std::vector<int>> returnValue;
    if (num == 0){
        return returnValue; 
    }
    else {
        for (auto i = 0; i < num; i++){
            returnValue.emplace_back(std::vector<int>(i+1,1));
        }
        if (num > 1){
            for (auto i = 1; i < num; i++){
                auto lastvec = returnValue.at(i-1);
                auto vec = returnValue.at(i);
                for (unsigned long j = 1; j < lastvec.size(); j++){
                    vec.at(j) = lastvec[j] + lastvec[j-1];
                }
                returnValue.at(i) = vec;
            }
        }

        return returnValue;
    }
}

}  // namespace pascals_triangle
