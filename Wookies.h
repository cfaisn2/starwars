//
// Created by eric on 17/10/19.
//

#ifndef STARWARS_WOOKIES_H
#define STARWARS_WOOKIES_H


#include "Rebel.h"

class Wookies: public Rebel{
public:

    Wookies(const string &nom);

    void parler(const string &texte) override;





};


#endif //STARWARS_WOOKIES_H
