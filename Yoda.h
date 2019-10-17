//
// Created by eric on 14/10/19.
//

#ifndef STARWARS_YODA_H
#define STARWARS_YODA_H


#include "Alliance.h"
#include "MembreEmpire.h"


class Yoda : public Rebel{


public:
    Yoda();

    void sePresenter() override;

    void coffrer(Hors_la_loi &hll) override ;
    void sendMessage(const MembreEmpire &me);

    string quel_est_ton_nom() const override;

    void telepathie(const string &message);


};


#endif //STARWARS_YODA_H
