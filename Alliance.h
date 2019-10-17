//
// Created by eric on 26/09/19.
//

#ifndef STARWARS_ALLIANCE_H
#define STARWARS_ALLIANCE_H

#include <array>





class Rebel;
    class Alliance {
    public:
        static std::array<Rebel *, 100> alliance;
        static int nbrebels;

        static void joinAlliance(Rebel *rebel);

        static int getNbrebels();

        static void setNbrebels(int nbrebels);

    };






#endif //STARWARS_ALLIANCE_H
