#include "protein_translation.h"

// typedef struct {
//    bool valid;
//    size_t count;
//    amino_acid_t amino_acids[MAX_AMINO_ACIDS];
// } protein_t;

// typedef enum {
//    Methionine,
//    Phenylalanine,
//    Leucine,
//    Serine,
//    Tyrosine,
//    Cysteine,
//    Tryptophan,
// } amino_acid_t;

// AUG	                Methionine
// UUU, UUC	            Phenylalanine
// UUA, UUG	            Leucine
// UCU, UCC, UCA, UCG	Serine
// UAU, UAC	            Tyrosine
// UGU, UGC	            Cysteine
// UGG	                Tryptophan
// UAA, UAG, UGA        stop

protein_t protein(const char *const rna){
    if (strlen(rna) == 4) {
        protein_t p;
        p.valid = false;
        return p;
    }
    protein_t p;
    p.count = 0;
    p.valid = true;
    size_t size = strlen(rna);
    //printf("--> %s %lu\n",rna,strlen(rna));
    if (size == 3){
        if (!strcmp(rna,"AUG")){
            printf("%d\n",strcmp(rna,"AUG"));
            p.valid = true;
            p.count = 1;
            p.amino_acids[0] = Methionine;        
        }
        else if (!strcmp("UUU",rna) || !strcmp("UUC",rna)){
            p.valid = true;
            p.count = 1;
            p.amino_acids[0] = Phenylalanine;
        }
        else if (!strcmp("UUA",rna) || !strcmp("UUG",rna)){
            p.valid = true;
            p.count = 1;
            p.amino_acids[0] = Leucine;
        }
        else if (!strcmp("UCU",rna) || !strcmp("UCC",rna) || !strcmp("UCA",rna) || !strcmp("UCG",rna)){
            p.valid = true;
            p.count = 1;
            p.amino_acids[0] = Serine;
        }
        else if (!strcmp("UAU",rna) || !strcmp("UAC",rna)){
            p.valid = true;
            p.count = 1;
            p.amino_acids[0] = Tyrosine;
        }
        else if (!strcmp("UGU",rna) || !strcmp("UGC",rna)){
            p.valid = true;
            p.count = 1;
            p.amino_acids[0] = Cysteine;
        }
        else if (!strcmp("UGG",rna)){
            p.valid = true;
            p.count = 1;
            p.amino_acids[0] = Tryptophan;
        }
        else if (!strcmp("UAA",rna) || !strcmp("UAG",rna) || !strcmp("UGA",rna)){
            p.valid = true;
            p.count = 0;
        }
        else {
            p.valid = false;
            //p.count = 0;
        }
        return p;
    } 
    else if (size > 3){
        //printf("orig: size: %lu",size);
        size = size / 3 * 3;
        size_t num_codons = size / 3;
        // printf("\tnew size: %lu\n",size);
        // printf("num codons: %lu\n",num_codons);
        for (size_t i = 0; i < num_codons; i++){
            if ((rna[3*i] == 'U' && rna[3 * i + 1] == 'A' && rna[3 * i + 2] == 'A') || \
                (rna[3*i] == 'U' && rna[3 * i + 1] == 'A' && rna[3 * i + 2] == 'G') || \
                (rna[3*i] == 'U' && rna[3 * i + 1] == 'G' && rna[3 * i + 2] == 'A')){
                    size = 3 * i;
                    // printf("STOP\t");
                    // printf("\tnew size: %lu\n",size);
                    // printf("num codons: %lu\n",size / 3);
                    break;
                }
        }
        for (size_t i = 0; i < size / 3; i++){
            if (rna[3*i] == 'A' && rna[3 * i + 1] == 'U' && rna[3 * i + 2] == 'G'){
                    p.amino_acids[p.count++] = Methionine;
                }
            // UUU, UUC -->  Phenylalanine
            else if ((rna[3*i] == 'U' && rna[3 * i + 1] == 'U' && rna[3 * i + 2] == 'U') || \
                     (rna[3*i] == 'U' && rna[3 * i + 1] == 'U' && rna[3 * i + 2] == 'C')){
                        p.amino_acids[p.count++] = Phenylalanine;
                }
            // UUA, UUG	-->  Leucine
            else if ((rna[3*i] == 'U' && rna[3 * i + 1] == 'U' && rna[3 * i + 2] == 'A') || \
                     (rna[3*i] == 'U' && rna[3 * i + 1] == 'U' && rna[3 * i + 2] == 'G')){
                        p.amino_acids[p.count++] = Leucine;  
                     }
            // UCU, UCC, UCA, UCG --> Serine
            else if ((rna[3*i] == 'U' && rna[3 * i + 1] == 'C' && rna[3 * i + 2] == 'U') || \
                     (rna[3*i] == 'U' && rna[3 * i + 1] == 'C' && rna[3 * i + 2] == 'C') || \
                     (rna[3*i] == 'U' && rna[3 * i + 1] == 'C' && rna[3 * i + 2] == 'A') || \
                     (rna[3*i] == 'U' && rna[3 * i + 1] == 'C' && rna[3 * i + 2] == 'G')){
                        p.amino_acids[p.count++] = Serine;
                     }
            // UAU, UAC	-->  Tyrosine
            else if ((rna[3*i] == 'U' && rna[3 * i + 1] == 'A' && rna[3 * i + 2] == 'U') || \
                     (rna[3*i] == 'U' && rna[3 * i + 1] == 'A' && rna[3 * i + 2] == 'C')){
                        p.amino_acids[p.count++] = Tyrosine;  
                     }
            // UGU, UGC	--> Cysteine
            else if ((rna[3*i] == 'U' && rna[3 * i + 1] == 'G' && rna[3 * i + 2] == 'U') || \
                     (rna[3*i] == 'U' && rna[3 * i + 1] == 'G' && rna[3 * i + 2] == 'C')){
                        p.amino_acids[p.count++] = Cysteine;  
                     }
            // UGG -->  Tryptophan
            else if (rna[3*i] == 'U' && rna[3 * i + 1] == 'G' && rna[3 * i + 2] == 'G'){
                        p.amino_acids[p.count++] = Tryptophan;  
                     }
            else {
                printf("--> %s\n",rna);
                protein_t q;
                q.valid = false;
                return q;
            }
        }
        // p.valid = true;
        // p.count = 0;
        return p;
    } else {
        p.valid = true;
        p.count = 0;
        return p;
    }
    
}
