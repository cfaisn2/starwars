//
// Created by eric on 17/10/19.
//

#include "PrincesseTraitre.h"

void PrincesseTraitre::kidnapper(Princesse &princesse) {
    parler("si tu n'est pas avec moi "+princesse.quel_est_ton_nom()+" tu es contre moi!!");
    princesse.seFaireKidnapper(*this);
    nbprincesses++;

}

void PrincesseTraitre::sefaireEmprisonner(Rebel &rebel) {
    parler("Je suis fait "+rebel.quel_est_ton_nom()+" tu m'as eu!");
    etat=true;
    recompense=0;

}

int PrincesseTraitre::quel_est_ta_recompense() const {
    return recompense;
}

string PrincesseTraitre::quel_est_ton_nom() const {
    return Princesse::quel_est_ton_nom();
}

PrincesseTraitre::PrincesseTraitre(const string &nom) : Princesse(nom) {

}
