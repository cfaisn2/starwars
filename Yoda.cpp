//
// Created by eric on 14/10/19.
//

#include <iostream>
#include "Yoda.h"
#include "Rebel.h"

Yoda::Yoda():Rebel("Yoda") {
    adjectif="Maitre";
}

void Yoda::coffrer(Hors_la_loi &hll) {
    parler("Au nom de l'alliance en je vous arrête");
    hll.sefaireEmprisonner(*this);
}

void Yoda::sendMessage(const MembreEmpire &me) {
    for(int i=0;i<Alliance::nbrebels;i++)
    {
        if(Alliance::alliance[i]->quel_est_ton_nom()!="Maitre Yoda")  // pas d'envoi de message à maitre Yoda
        {
            telepathie("Le coté obscur de la force,redouter tu dois " + std::to_string(me.quel_est_ta_recompense()) +
                       " à qui arrêtera " + me.quel_est_ton_nom() + " le membre de l'empire mort ou vif");
            Alliance::alliance[i]->recevoirMessage(*this);
        }
    }
}

void Yoda::sePresenter() {
    Rebel::sePresenter();
    parler("Je commande "+to_string(Alliance::nbrebels-1)+" rebels"); //-1 car on enlève yoda
}

string Yoda::quel_est_ton_nom() const {
    return adjectif+" "+Rebel::quel_est_ton_nom();
}

void Yoda::telepathie(const string &message) {
    cout<<"              .--."<<endl;
    cout<<"    ::\`--._,'.::.`._.--'/::::"<<endl;
    cout<<"    ::::.  ` __::__ '  .::::::"<<endl;
    cout<<"    ::::::-:.`'..`'.:-::::::::"<<endl;
    cout<<"    ::::::::\ `--' /:::::::::: "<<message<<endl;

}






