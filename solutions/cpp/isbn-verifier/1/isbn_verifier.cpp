#include "isbn_verifier.h"

namespace isbn_verifier {
bool is_valid(std::string str){
    //std::cout << str << std::endl;
    bool digit;
    bool c = true;
    auto len = 0;
    auto num  = 10;
    auto sum = 0;
    for (auto s:str){
        digit = std::isdigit(s);
        if (digit){
            ++len;
            sum += num * (s - '0');
            --num;
        }
        else if (!digit && (s =='X') && num != 1){
            std::cout << "hi!" << std::endl;
            c = !c;
        }     
        else if (!digit && (s =='X')){
            ++len;
            sum += num * 10;
            --num;
        }    
        else if (!digit && (s !='-')){
            c = !c;
        }
        else {
            continue;
        }
    }
    std::cout << (sum % 11 == 0 && len == 10) << std::endl;
    return c && (sum % 11 == 0 && len == 10);
};
// TODO: add your solution here

}  // namespace isbn_verifier