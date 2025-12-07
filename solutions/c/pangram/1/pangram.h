#ifndef PANGRAM_H
#define PANGRAM_H
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool is_pangram(const char sentence[]);
size_t letter(char);
#endif
