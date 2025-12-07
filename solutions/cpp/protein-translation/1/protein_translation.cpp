#include "protein_translation.h"

// | Codon              | Protein       |
// | :----------------- | :------------ |
// | AUG                | Methionine    |
// | UUU, UUC           | Phenylalanine |
// | UUA, UUG           | Leucine       |
// | UCU, UCC, UCA, UCG | Serine        |
// | UAU, UAC           | Tyrosine      |
// | UGU, UGC           | Cysteine      |
// | UGG                | Tryptophan    |
// | UAA, UAG, UGA      | STOP          |

namespace protein_translation {
    std::unordered_map<std::string, std::string> codons {
        {"UUU", "Phenylalanine"},
        {"UUC", "Phenylalanine"}, 
        {"UUA", "Leucine"},
        {"UUG", "Leucine"},       
        {"UCU", "Serine"},
        {"UCC", "Serine"},
        {"UCA", "Serine"},
        {"UCG", "Serine"},  
        {"UAU", "Tyrosine"},
        {"UAC", "Tyrosine"},     
        {"UGU", "Cysteine"},
        {"UGC", "Cysteine"},   
        {"UGG", "Tryptophan"},    
        {"AUG", "Methionine"},
        {"UAA", "STOP"},
        {"UAG", "STOP"},
        {"UGA", "STOP"}
    };

    std::vector<std::string> proteins(std::string const &str){
        std::vector<std::string> holder {};
        for (auto i = 0; i < (int)str.length(); i += 3){
            if (codons[str.substr(i, 3)] == "STOP") return holder;
            else holder.push_back(codons[str.substr(i, 3)]);
        }
        return holder;
    }
}  // namespace protein_translation
