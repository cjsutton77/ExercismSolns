#include "nucleotide_count.h"

namespace nucleotide_count {

std::map<char, int> count(const std::string nucleo)
{
    //std::cout << nucleo << std::endl;
    std::map<char, int> output { {'A', 0}, {'C', 0}, {'G', 0},{'T', 0} };
    for (unsigned int i = 0; i < nucleo.size(); i++)
    {
        for (auto& [key, value] : output)
            if (nucleo[i] == key) ++value;
            else if ((nucleo[i] != 'A') && (nucleo[i] != 'C') && (nucleo[i] != 'G') && (nucleo[i] != 'T'))
                throw std::invalid_argument("strand_with_invalid_nucleotides");
            else continue;
    }
    //std::cout << output << std::endl;
    return output;
}

}  // namespace nucleotide_count
