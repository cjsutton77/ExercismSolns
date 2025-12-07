#include "rna_transcription.h"

namespace rna_transcription {
std::string to_rna(std::string dna)
{
// G -> C
// C -> G
// T -> A
// A -> U

std::string rna = "" ;
std::cout << dna << std::endl;

for (long unsigned int i = 0; i < dna.length(); ++i)
    {
        if (dna[i] == 'G') rna += 'C';
        else if (dna[i] == 'C') rna += 'G';
        else if (dna[i] == 'T') rna +='A';
        else rna += 'U';
    }
   return rna;
   }


char to_rna(char dna)
{
// G -> C
// C -> G
// T -> A
// A -> U

char rna;
    

        if (dna == 'G') rna = 'C';
        if (dna == 'C') rna = 'G';
        if (dna == 'T') rna = 'A';
        if (dna == 'A') rna = 'U';
    
        //else break;

    //rna[i+1] = '\0';
    return rna;
}
}  // namespace rna_transcription
