//
// Created by eric on 26/09/19.
//

#include "Alliance.h"
int Alliance::nbrebels=0;
std::array<Rebel *, 100> Alliance::alliance;

void Alliance::joinAlliance(Rebel *rebel) {

    alliance[nbrebels]=rebel;
    nbrebels++;

}

int Alliance::getNbrebels() {
    return Alliance::nbrebels;
}

void Alliance::setNbrebels(int nbrebels) {
    Alliance::nbrebels = nbrebels;
}


