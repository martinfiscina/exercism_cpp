#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
// Task 1
int preparationTime(std::vector<std::string> layers, int avg_time_per_layer ){
    int numberOfLayers = layers.size();
    return numberOfLayers * avg_time_per_layer;
}
//Task 2
amount quantities(std::vector<std::string> layers){
    /*
    int noodles_layers{};
    double sauce_layers{};
    */
    amount result{};
    
    for(size_t i = 0; i < layers.size(); i++){
        if(layers[i] == "noodles"){
            result.noodles += 50;
        }
        if(layers[i] == "sauce"){
            result.sauce += 0.2;
        }

    
    
    }
    //return {noodles_layers * 50, sauce_layers * 0.2};
    return result;
}

// Task 3
void addSecretIngredient(std::vector<std::string>& own_recipe, const std::vector<std::string>& friend_recipe){

    std::string last_item = friend_recipe.back();
    own_recipe[own_recipe.size()-1] = last_item;
    
}

// Task 4
std::vector<double> scaleRecipe(std::vector<double> amounts4_2,int number_of_portions){
    // Inicializar el vector con su size:
    std::vector<double> result(amounts4_2.size());
    
    for(size_t i = 0; i < amounts4_2.size(); i++ ){
        result[i] = amounts4_2[i] * number_of_portions /2;
    }
    return result;
}

// Task 5 function overload
void addSecretIngredient(std::vector<std::string>& own_recipe, const std::string single_ingredient){
    
    own_recipe[own_recipe.size()-1] = single_ingredient;
}
}  // namespace lasagna_master
