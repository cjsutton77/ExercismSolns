#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers, int layersPerMinute){
    return layers.size() * layersPerMinute;    
}

int preparationTime(std::vector<std::string> layers){
    return layers.size() * 2;    
}

amount quantities(std::vector<std::string> layers){
    amount amt{0,0.0};
    for (auto s: layers){
        if (s == "noodles"){
            amt.noodles+=50;
        }
        else if (s == "sauce") {
            amt.sauce+=0.20;
        } else {
            continue;
        }
    }
    return amt;
}

void addSecretIngredient(std::vector<std::string>& fst,std::vector<std::string> scd){
    // fst -> first
    // scd -> second
    fst.at(fst.size() - 1) = scd.at(scd.size()-1);
}

std::vector<double> scaleRecipe(std::vector<double> amts,int scale){
    std::vector<double> retVal = amts;
    for (auto &i: retVal){
        i = (i/2.0) * scale;
    }
    return retVal;
}

void addSecretIngredient(std::vector<std::string>& fst,std::string scd){
    fst.at(fst.size() - 1) = scd;
}

}  // namespace lasagna_master
