// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once

#include <iostream>
#include <string>

namespace star_map {
    enum System {
        Sol,
        BetaHydri,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {
        class Vessel {
            public:
                std::string name;
                int generation;
                star_map::System current_system;
                bool busters = false;
                Vessel(std::string _name, int _number, star_map::System _sys );
                Vessel(std::string _name, int _number);
                auto replicate(std::string _name);   
                auto make_buster(void);
                auto shoot_buster(void);   
        };
    auto get_older_bob(Vessel, Vessel);
    auto in_the_same_system(Vessel, Vessel);
}
// hp1, üapöhp2ö % Äcountöiöma1,
//     öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
//         Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
//         Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
//         Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
//     3ö % Älacöranö % Ädacöiömth
