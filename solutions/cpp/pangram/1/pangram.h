#if !defined(PANGRAM_H)
#define PANGRAM_H
#include <locale> 
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
namespace pangram {
bool is_pangram(string);
}  // namespace pangram

#endif // PANGRAM_H