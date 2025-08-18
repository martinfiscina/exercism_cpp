// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#include "doctor_data.h"


namespace heaven {
   
        void Vessel::make_buster(){
            
            busters++;
        }
        bool Vessel::shoot_buster(){
            if (busters > 0) {
                busters--; 
                return true;
            } else {
            return false;
            }
        }
     Vessel Vessel::replicate(std::string name_of_vessel){
            Vessel new_vessel{name_of_vessel, generation + 1, current_system};
            
    
            return new_vessel;
        }
        

       
    

    
    std::string get_older_bob(heaven::Vessel vessel1, heaven::Vessel vessel2){
        if (vessel1.generation < vessel2.generation){
            return vessel1.name;
            }else{
            return vessel2.name;}
        
        
        }
    bool in_the_same_system(heaven::Vessel vessel1, heaven::Vessel vessel2){
        return vessel1.current_system == vessel2.current_system;
    }
    
}