//
// Created by eric on 23/09/19.
//

#include "Barman.h"

void Barman::servir(Humanoide &h) {
    h.boire();

}

Barman::Barman(const string &nom) : Humanoide(nom),nom_du_bar("Chez "+nom) {
}

Barman::Barman(const string &nom, const string &nomDuBar) : Humanoide(nom), nom_du_bar(nomDuBar) {}

string Barman::quel_est_ta_boisson_favorite() const {
    return "vin";
}

void Barman::sePresenter() {
    Humanoide::sePresenter();
    parler("Mon bar se nomme "+nom_du_bar);
}

void Barman::parler(const string &texte) {
    Humanoide::parler(texte+" "+"Coco");
}
