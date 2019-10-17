//
// Created by eric on 17/10/19.
//

#ifndef STARWARS_TRAITRE_H
#define STARWARS_TRAITRE_H


#include "Hors_la_loi.h"

class Traitre : public Rebel, public Hors_la_loi {

private:
    int nbprincesses;
    int recompense;
    bool etat;

public:

    Traitre(const string &nom);

    void kidnapper(Princesse &princesse) override;

    void sefaireEmprisonner(Rebel &rebel) override;

    int quel_est_ta_recompense() const override;

    string quel_est_ton_nom() const override;

};


#endif //STARWARS_TRAITRE_H
