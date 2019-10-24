//
// Created by eric on 20/09/19.
//

#include <iostream>
#include "MembreEmpire.h"
#include "Wookies.h"
#include <typeinfo>

MembreEmpire::MembreEmpire(const string &nom) :
Humanoide(nom),rang("soldat"),etat(false),nbprincesses(0),recompense(100) {

}

void MembreEmpire::kidnapper(Princesse &princesse) {
parler("si tu n'est pas avec moi "+princesse.quel_est_ton_nom()+" tu es contre moi!!");
princesse.seFaireKidnapper(*this);
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

void MembreEmpire::sebattre(Duel &duel) {
    if(typeid(duel)==typeid(Rebel)) {
        srand(time(NULL));
        int forcerebel = 6;
        int forced = 6;


        if (typeid(&duel) == typeid(Wookies)) {
            forced = 36;
        }
        int hitrebel = rand() % forcerebel;
        int hitd = rand() % forced;
        if (hitrebel > hitd) {
            cout << quel_est_ton_nom() << " a gagner son duel avec " << duel.quel_est_ton_nom()<<endl;
        } else if (hitd > hitrebel) {

            cout << duel.quel_est_ton_nom() << " a gagner son duel avec " << quel_est_ton_nom()<<endl;
        } else {
            cout << "Match nul"<<endl;
        }
    } else
        cout<<"Combat impossible"<<endl;


}


