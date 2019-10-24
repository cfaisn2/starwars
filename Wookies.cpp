//
// Created by eric on 17/10/19.
//

#include <iostream>
#include "Wookies.h"

void Wookies::parler(const string &texte) {
    Humanoide::parler("GRRRRR");
}


Wookies::Wookies(const string &nom) : Rebel(nom) {}
