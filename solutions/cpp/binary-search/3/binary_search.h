#if !defined(BINARY_SEARCH_H)
#define BINARY_SEARCH_H
#include <iostream>
#include <cstddef>
#include <stdexcept>
#include <vector>
namespace binary_search {
std::size_t find(const std::vector<int> vec, int num);
}  // namespace binary_search

#endif // BINARY_SEARCH_H