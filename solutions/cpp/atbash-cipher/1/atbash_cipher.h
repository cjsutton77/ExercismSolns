#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <cctype>
#include <string>

namespace atbash_cipher {
char flip(char x);
std::string encode(std::string input);
std::string decode(std::string input);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H