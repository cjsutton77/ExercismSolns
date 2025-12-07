#if !defined(ISOGRAM_H)
#define ISOGRAM_H
#include <locale> 
#include <string>
#include <cstring>
#include <iostream>

namespace isogram {
bool is_isogram(std::string phrase);
}  // namespace isogram

#endif // ISOGRAM_H