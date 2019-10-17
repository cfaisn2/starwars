//
// Created by eric on 20/09/19.
//

#ifndef STARWARS_PRINCESSE_H
#define STARWARS_PRINCESSE_H


#include "Humanoide.h"

#include "Rebel.h"
class Rebel;
class Princesse: public Humanoide {

private: string couleur_robe;
public: bool etat;

public:
    Princesse(const string &nom);

    void seFaireKidnapper(const Hors_la_loi &hll);
    void seFaireLiberer(const Rebel &rebel);
    void changerdeRobe(const string &newcolor);

    string quel_est_ton_nom() const override;

    void sePresenter() override;

    string quel_est_ta_boisson_favorite() const override;


};


#endif //STARWARS_PRINCESSE_H
