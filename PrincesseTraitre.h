//
// Created by eric on 17/10/19.
//

#ifndef STARWARS_PRINCESSETRAITRE_H
#define STARWARS_PRINCESSETRAITRE_H


#include "Hors_la_loi.h"

class PrincesseTraitre: public Princesse,public Hors_la_loi {
private:
    int nbprincesses;
    int recompense;
    bool etat;


public:
    PrincesseTraitre(const string &nom);

    void kidnapper(Princesse &princesse) override;

    void sefaireEmprisonner(Rebel &rebel) override;

    int quel_est_ta_recompense() const override;

    string quel_est_ton_nom() const override;

};


#endif //STARWARS_PRINCESSETRAITRE_H
