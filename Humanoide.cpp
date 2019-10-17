//
// Created by eric on 20/09/19.
//

#include <iostream>
#include "Humanoide.h"

Humanoide::Humanoide(const string &nom):nom(nom),boisson_favorite("eau") {

}

void Humanoide::parler(const string &texte) {
    cout<<nom<<" - "<<texte<<endl;
}

void Humanoide::sePresenter() {
    string texte="Bonjour mon nom est "+nom+" et ma boisson favorite: "+quel_est_ta_boisson_favorite();
    parler(texte);
}

string Humanoide::quel_est_ton_nom() const {
    return nom;
}

string Humanoide::quel_est_ta_boisson_favorite() const {
    return boisson_favorite;
}

void Humanoide::boire() {
    string texte="Ah! un bon verre de "+quel_est_ta_boisson_favorite();
    parler(texte);
    parler("GLOUPS!");
}

Humanoide::Humanoide() {

}
