//
// Created by eric on 20/09/19.
//

#include <iostream>
#include "Rebel.h"
#include "Yoda.h"
#include "Alliance.h"

Rebel::Rebel(const string &nom) : Humanoide(nom),popularite(0),adjectif("padawan") {

    Alliance::joinAlliance(this);
    cout<<nom<<" a rejoint l'alliance"<<endl;


}

Rebel::Rebel()
{

}
void Rebel::tirer(const MembreEmpire &membreEmpire) {



        cout << "Beau coup de sabre laser";
        parler("Que la force soit avec moi");



}

void Rebel::coffrer(MembreEmpire &membreEmpire) {
    membreEmpire.sefaireEmprisonner(*this);
}

void Rebel::liberer(Princesse &princesse) {

    princesse.seFaireLiberer(*this);
    popularite++;
}

void Rebel::sePresenter() {
    Humanoide::sePresenter();
    parler("Mon degré d'apprentissage est "+adjectif+" et ma popularite est de "+to_string(popularite));
}

string Rebel::quel_est_ta_boisson_favorite() const {
    return "Whisky";
}

void Rebel::recevoirMessage(Yoda &yoda) {
    parler("Message bien reçu "+yoda.quel_est_ton_nom());



}






