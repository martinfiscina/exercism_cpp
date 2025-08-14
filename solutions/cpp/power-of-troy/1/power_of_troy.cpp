#include "power_of_troy.h"



namespace troy {
    
   // Task 2
    void give_new_artifact(human &man, std::string artifact_name){
            
            //auto new_artifact = std::make_unique<artifact>(artifact_name);
            man.possession = std::make_unique<artifact>(artifact_name);
            //man->possession = new_artifact;
    }
    // Task 3
    void exchange_artifacts(std::unique_ptr<artifact> &possession_1, std::unique_ptr<artifact> &possession_2){
        //possession_1.swap(possession_2);
        std::swap(possession_1, possession_2);
    }
    // Task 4
    void manifest_power(human& man, std::string power_effect){
       
        man.own_power = std::make_shared<power>(power_effect);
    }
    // Task 5
    void use_power(human& caster_man, human& target_man){
        target_man.influenced_by = caster_man.own_power;
    }
    //Task 6
    int power_intensity(human& caster_man){
        return caster_man.own_power.use_count();
    }
    
}  // namespace troy
