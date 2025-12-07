#include "rna_transcription.h"

char *to_rna(const char *dna)
{
    int i = 0;
    char *rna = (char*) malloc(100);
    while (1) 
    {
        if (dna[i] == 'G') rna[i] = 'C';
        if (dna[i] == 'C') rna[i] = 'G';
        if (dna[i] == 'T') rna[i] = 'A';
        if (dna[i] == 'A') rna[i] = 'U'; 
        if (dna[i] == '\0') {
            rna[i] = '\0';
            break;
        }
        ++i;
    }
    return rna;
}
