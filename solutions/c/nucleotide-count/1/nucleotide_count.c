#include "nucleotide_count.h"

char *count(const char *dna_strand)
    {   
        int a = 0;
        int c = 0;
        int g = 0;
        int t = 0;
        bool flag = true;
        char *str = malloc(100);
        for (size_t i = 0; i < strlen(dna_strand); ++i)
        {
            if (dna_strand[i] == 'A') ++a; 
            else if (dna_strand[i] == 'C') ++c; 
            else if (dna_strand[i] == 'G') ++g; 
            else if (dna_strand[i] == 'T') ++t;
            else flag = false; 
        }
        if (flag) sprintf(str, "A:%d C:%d G:%d T:%d", a,c,g,t);
        else strcpy(str,"");
        return str;
    }