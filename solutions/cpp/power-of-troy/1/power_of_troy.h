#pragma once

#include <string>
#include <memory>

namespace troy {
    
struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

    //Task 1
struct human {
    
    std::shared_ptr<power> own_power;
    std::shared_ptr<power> influenced_by;
    std::unique_ptr<artifact> possession;
    
    };
void give_new_artifact(human &man, std::string artifact_name);
void exchange_artifacts(std::unique_ptr<artifact> &possession_1, std::unique_ptr<artifact> &possession_2);
void manifest_power(human& man, std::string power_name);
void use_power(human& caster_man, human& target_man);
int power_intensity(human& caster_man);
    
    
 
}  // namespace troy
