#include "allergies.h"

#include <iostream>
#include <__ostream/basic_ostream.h>

// eggs (1)
// peanuts (2)
// shellfish (4)
// strawberries (8)
// tomatoes (16)
// chocolate (32)
// pollen (64)
// cats (128)

namespace allergies {

    bool allergy_test::is_allergic_to(const std::string &s) const {
        if (s.empty()) {
            return false;
        }
        else if (s == "eggs") {
            return  ((value ) & 1) > 0;
        }
        else if (s == "peanuts") {
            return  ((value ) & 2) > 0;
        }
        else if (s == "shellfish") {
            return  ((value ) & 4) > 0;
        }
        else if (s == "strawberries") {
            return  ((value ) & 8) > 0;
        }
        else if (s == "tomatoes") {
            return  ((value ) & 16) > 0;
        }
        else if (s == "chocolate") {
            return  ((value ) & 32) > 0;
        }
        else if (s == "pollen") {
            return  ((value ) & 64) > 0;
        }
        else if (s == "cats") {
            return  ((value ) & 128) > 0;
        }
        else return false;
    }

    std::unordered_set<std::string> allergy_test::get_allergies(void) {
        std::unordered_set<std::string> allergies;
        if (((value ) & 1) > 0 ) allergies.insert("eggs");
        if (((value ) & 2) > 0 ) allergies.insert("peanuts");
        if (((value ) & 4) > 0 ) allergies.insert("shellfish");
        if (((value ) & 8) > 0 ) allergies.insert("strawberries");
        if (((value ) & 16) > 0 ) allergies.insert("tomatoes");
        if (((value ) & 32) > 0 ) allergies.insert("chocolate");
        if (((value ) & 64) > 0 ) allergies.insert("pollen");
        if (((value ) & 128) > 0 ) allergies.insert("cats");

        return allergies;
    }
}  // namespace allergies
