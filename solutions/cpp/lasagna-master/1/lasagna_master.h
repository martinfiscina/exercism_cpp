#pragma once
#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};
// Task 1  
int preparationTime(std::vector<std::string>, int=2);
    
//Task 2
amount quantities(std::vector<std::string>);

// Task 3
void addSecretIngredient(std::vector<std::string>&, const std::vector<std::string>& );

// Task 4
std::vector<double> scaleRecipe(std::vector<double>,int);

// Task 5 function overload
void addSecretIngredient(std::vector<std::string>&, const std::string);
    
}  // namespace lasagna_master
