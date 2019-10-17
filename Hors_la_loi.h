//
// Created by eric on 17/10/19.
//

#ifndef STARWARS_HORS_LA_LOI_H
#define STARWARS_HORS_LA_LOI_H


#include "Princesse.h"

class Hors_la_loi {

public:

    virtual void kidnapper(Princesse &princesse)=0;
    virtual void sefaireEmprisonner(Rebel &rebel)=0;
    virtual int quel_est_ta_recompense() const=0;
    virtual string quel_est_ton_nom() const=0;

};


#endif //STARWARS_HORS_LA_LOI_H
