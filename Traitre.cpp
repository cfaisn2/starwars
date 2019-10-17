//
// Created by eric on 17/10/19.
//

#include "Traitre.h"

void Traitre::kidnapper(Princesse &princesse) {
    parler("si tu n'est pas avec moi "+princesse.quel_est_ton_nom()+" tu es contre moi!!");
    princesse.seFaireKidnapper(*this);
    nbprincesses++;

}

void Traitre::sefaireEmprisonner(Rebel &rebel) {
    parler("Je suis fait "+rebel.quel_est_ton_nom()+" tu m'as eu!");
    etat=true;
    recompense=0;

}

int Traitre::quel_est_ta_recompense() const {
    return recompense;
}

Traitre::Traitre(const string &nom) : Rebel(nom),etat(false),nbprincesses(0),recompense(100) {

}

string Traitre::quel_est_ton_nom() const {
    return Rebel::quel_est_ton_nom();
}




