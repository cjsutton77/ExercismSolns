#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <unordered_set>
#include <string>

namespace allergies {

    class allergy_test {
    private:
        uint16_t value;
    public:
        explicit allergy_test(uint16_t v): value{v} {};
        std::unordered_set<std::string> get_allergies();
        bool is_allergic_to(const std::string& s) const;
    };


}  // namespace allergies

#endif  // ALLERGIES_H