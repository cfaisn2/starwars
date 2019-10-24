//
// Created by eric on 18/10/19.
//

#ifndef STARWARS_DUEL_H
#define STARWARS_DUEL_H

#include "Humanoide.h"

class Duel{
public:
    virtual void sebattre(Duel &duel)=0;
    virtual string quel_est_ton_nom() const=0;
};
#endif //STARWARS_DUEL_H
