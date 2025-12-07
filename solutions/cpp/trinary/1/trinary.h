#if !defined(TRINARY_H)
#define TRINARY_H
#include <string>
#include <algorithm>
#include <iostream>

namespace trinary {
int to_decimal(std::string);
int get_mod(int num);
int get_num(int num);
int pow_of_three(int num);

}  // namespace trinary

#endif // TRINARY_H