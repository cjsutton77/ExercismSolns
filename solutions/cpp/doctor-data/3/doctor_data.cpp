// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#include "doctor_data.h"
heaven::Vessel::Vessel(std::string _name, int _number,star_map::System _sys ):
    name{_name},
    generation{_number},
    current_system{_sys}
    {};
heaven::Vessel::Vessel(std::string _name, int _number):
    name{_name},
    generation{_number},
    current_system{star_map::System::Sol}
    {};
heaven::Vessel heaven::Vessel::replicate(std::string newName){
    return heaven::Vessel(newName,2);
}
void heaven::Vessel::make_buster(void){
    this->busters = 1;
}
bool heaven::Vessel::shoot_buster(void){
    if (busters == true){
        busters = false;
        return true;
    } 
    else {
        busters = false;
        return busters;
    }
}

std::string heaven::get_older_bob(heaven::Vessel a, heaven::Vessel b){
    if (a.generation < b.generation) return a.name;
    else return b.name;
}

bool heaven::in_the_same_system(heaven::Vessel a, heaven::Vessel b){
    if (a.current_system == b.current_system) return true;
    else return false;
}


// hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
// hp2,öjmpö.
