//
// Created by eric on 20/09/19.
//

#include <iostream>
#include "Rebel.h"
#include "Yoda.h"
#include "Alliance.h"
#include "Wookies.h"
#include <typeinfo>

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

void Rebel::coffrer( Hors_la_loi &hll) {
    hll.sefaireEmprisonner(*this);
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

void Rebel::sebattre(Duel &duel) {
    if(typeid(duel)==typeid(Hors_la_loi)) {
        srand(time(NULL));
        int forcerebel = 6;
        int forced = 6;


        if (typeid(*this) == typeid(Wookies)) {
            forcerebel = 36;
        }
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
            cout << "Match nul";
        }
    } else
        cout<<"Combat impossible"<<endl;
}

string Rebel::quel_est_ton_nom() const {
    return Humanoide::quel_est_ton_nom();
}









