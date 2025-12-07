#ifndef ALLERGIES_H
#define ALLERGIES_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef enum {
   ALLERGEN_EGGS = 0,
   ALLERGEN_PEANUTS,
   ALLERGEN_SHELLFISH,
   ALLERGEN_STRAWBERRIES,
   ALLERGEN_TOMATOES,
   ALLERGEN_CHOCOLATE,
   ALLERGEN_POLLEN,
   ALLERGEN_CATS,
   ALLERGEN_COUNT,
} allergen_t;

typedef struct {
   int count;
   bool allergens[ALLERGEN_COUNT];
} allergen_list_t;

typedef struct {
   int nums[8];
} allergen_binary;

allergen_binary* binarify(int);
allergen_list_t get_allergens(int);
bool is_allergic_to(allergen_t, int);

#endif
