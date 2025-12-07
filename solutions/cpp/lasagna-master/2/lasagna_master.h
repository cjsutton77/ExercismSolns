#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(std::vector<std::string>);
int preparationTime(std::vector<std::string>,int);
amount quantities(std::vector<std::string>);
void addSecretIngredient(std::vector<std::string>&,std::vector<std::string>);
void addSecretIngredient(std::vector<std::string>&,std::string);
std::vector<double> scaleRecipe(std::vector<double>,int);
}  // namespace lasagna_master
