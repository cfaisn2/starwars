//
// Created by eric on 20/09/19.
//

#include <iostream>
#include "Princesse.h"

Princesse::Princesse(const string &nom) : Humanoide(nom),couleur_robe("blanche") {
    etat=false; //libre
}

void Princesse::seFaireKidnapper(const Hors_la_loi &hll)  {
    etat=true;
    parler("AHHHHHHHHHHHH");
}

void Princesse::changerdeRobe(const string &newcolor) {
    couleur_robe=newcolor;
    parler("Regardez ma nouvelle ,couleur robe "+couleur_robe);
}

void Princesse::seFaireLiberer(const Rebel &rebel) {
    etat=false;
    parler("Merci "+rebel.quel_est_ton_nom());
}

string Princesse::quel_est_ton_nom() const {
    return "Princesse "+Humanoide::quel_est_ton_nom();
}

void Princesse::sePresenter() {
    Humanoide::sePresenter();
    parler("La couleur de ma robe est "+couleur_robe);
}

string Princesse::quel_est_ta_boisson_favorite() const {
    return "Lait bleu";
}
