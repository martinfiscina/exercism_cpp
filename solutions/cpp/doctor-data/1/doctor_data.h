// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include <string>

namespace star_map {
    enum class System {
        BetaHydri,
        EpsilonEridani,
        Sol,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
};

namespace heaven {
    class Vessel {
    
        public:
        star_map::System current_system{};
        int generation{};
        int busters{};
        std::string name{};
    
        // Constructor:
        Vessel(std::string name_vessel, int gen = 1, star_map::System star =star_map::System::Sol){
                name = name_vessel,
                generation = gen,
                current_system = star;
        }
            
        // Methods:
        Vessel replicate(std::string name_of_vessel);
        void make_buster();
        bool shoot_buster();
    
    };

    std::string get_older_bob(Vessel vessel1, Vessel vessel2);
    bool in_the_same_system(Vessel vessel1, Vessel vessel2);

};
