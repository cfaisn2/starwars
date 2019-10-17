//
// Created by eric on 23/09/19.
//

#ifndef STARWARS_BARMAN_H
#define STARWARS_BARMAN_H


#include "Humanoide.h"

class Barman: public Humanoide {
private:
    string nom_du_bar;

public:
    Barman(const string &nom);

    Barman(const string &nom, const string &nomDuBar);


    void servir(Humanoide &h);

    string quel_est_ta_boisson_favorite() const override;

    void sePresenter() override;

    void parler(const string &texte) override;

};


#endif //STARWARS_BARMAN_H
