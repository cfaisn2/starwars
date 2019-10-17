//
// Created by eric on 20/09/19.
//

#ifndef STARWARS_MEMBREEMPIRE_H
#define STARWARS_MEMBREEMPIRE_H


#include "Humanoide.h"
#include "Princesse.h"
#include "Hors_la_loi.h"

class Rebel;
class Princesse;
class MembreEmpire: public Humanoide, public Hors_la_loi {

private:
    string rang;
    int nbprincesses;
    int recompense;
    bool etat;
public:
    MembreEmpire(const string &nom);

    void kidnapper(Princesse &princesse);
    void sefaireEmprisonner(Rebel &rebel);
    int quel_est_ta_recompense() const;

    string quel_est_ton_nom() const override;

    void sePresenter() override;

    string quel_est_ta_boisson_favorite() const override;


};


#endif //STARWARS_MEMBREEMPIRE_H
