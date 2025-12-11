#include "perfect_numbers.h"
namespace perfect_numbers {

    classification classify(int number){
        auto sum = 0;
        for (auto i = 1; i < number ; i++){
            if (number % i == 0) {
                sum = sum + i;
            }
        }
        if (number <= 0) {
            throw std::domain_error("Number must be greater than 0");
        }
        else if (sum > number){
            return classification::abundant;
        } else if (sum < number){
            return classification::deficient;
        } else {
            return classification::perfect;
        }
    }

}  // namespace perfect_numbers
