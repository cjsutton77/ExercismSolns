#include "allergies.h"

bool is_allergic_to(allergen_t allergy, int score ){
    allergen_binary* n = binarify(score);
    if (!n) return false;
    bool condition = false;
    if (n->nums[7-allergy] == 1) condition = true;
    else condition = false;
    free(n);
    return condition;
}

allergen_list_t get_allergens(int score){
    allergen_list_t list;
    allergen_binary* n = NULL;
    n = binarify(score);
    int count = 0;
    for (int i = 0; i < 8; i++){
        count += n->nums[i];
        list.allergens[i] = (n->nums[7-i] == 1);
    }
    free(n); // free that memory!
    list.count = count;
    return list;
}

allergen_binary* binarify(int score){
    allergen_binary* number = (allergen_binary*)calloc(1,sizeof(allergen_binary));
    if (!number) return NULL;
    score = score % 256;
    int i = 7;
    while (score != 0){
            number->nums[i--] = score % 2;
            score = score / 2;
    }
    return number;
}
