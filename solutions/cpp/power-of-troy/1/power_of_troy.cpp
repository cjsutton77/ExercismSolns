#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& hum , std::string& str){
        hum.possession = std::make_unique<artifact>(str);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& a, std::unique_ptr<artifact>& b){
        std::swap(a,b);
    }

    void manifest_power(human& hum, const std::string& str){
        hum.own_power = std::make_shared<power>(str);
    }

    void use_power(human& caster, human& target){
        target.influenced_by = caster.own_power;
    }

    int power_intensity(human& hum){
        auto count = 0;
        count += hum.own_power.use_count();
        return count;
    }
}  // namespace troy
