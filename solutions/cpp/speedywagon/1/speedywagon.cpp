#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
    
//Connection_check:
bool connection_check(pillar_men_sensor* sensor){
    
    return sensor != nullptr;
}
//Activity_counter:
int activity_counter(pillar_men_sensor* sensor, int capacity){
    
    int total_activity=0;
    for(int i = 0; i < capacity; i++){
        total_activity += (sensor+i)->activity;
        //Equivale a:
        //total_activity += sensor->activity;
        //sensor++;
        
    }
    return total_activity;
}
    //alarm controL:
    bool alarm_control(pillar_men_sensor *sensor){
       
        return sensor != nullptr && sensor->activity > 0;
        
    }
//UV Alarm:
    bool uv_alarm(pillar_men_sensor* sensor){
        
        return sensor != nullptr && uv_light_heuristic(&sensor->data) >                 sensor->activity;
      
        
    }

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
