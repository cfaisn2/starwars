//
// Created by eric on 20/09/19.
//

#include <iostream>
#include "MembreEmpire.h"

MembreEmpire::MembreEmpire(const string &nom) :
Humanoide(nom),rang("soldat"),etat(false),nbprincesses(0),recompense(100) {

}

void MembreEmpire::kidnapper(Princesse &princesse) {
parler("si tu n'est pas avec moi "+princesse.quel_est_ton_nom()+" tu es contre moi!!");
princesse.seFaireKidnapper();
nbprincesses++;
}

void MembreEmpire::sefaireEmprisonner(Rebel &rebel) {
parler("Je suis fait "+rebel.quel_est_ton_nom()+" tu m'as eu!");
etat=true;
recompense=0;
}

int MembreEmpire::quel_est_ta_recompense() const {
    return recompense;
}

string MembreEmpire::quel_est_ton_nom() const {
    return Humanoide::quel_est_ton_nom()+" "+rang;
}

void MembreEmpire::sePresenter() {
    Humanoide::sePresenter();
    parler("Mon rang est "+rang+" J'ai capturé "+to_string(nbprincesses)+" princesse(s)");
}

string MembreEmpire::quel_est_ta_boisson_favorite() const {
    return "Vin de fleurs";
}


