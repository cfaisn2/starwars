//
// Created by eric on 20/09/19.
//

#ifndef STARWARS_REBEL_H
#define STARWARS_REBEL_H


#include "Humanoide.h"


#include "Alliance.h"
#include "Duel.h"

class MembreEmpire;
class Princesse;
class Alliance;
class Yoda;
class Hors_la_loi;
class Wookies;
class Rebel: public Humanoide,public Duel {

private:


    int popularite;
protected:    string adjectif;


public:
    Rebel();
    Rebel(const string &nom);

    void tirer(const MembreEmpire &membreEmpire);

    virtual void coffrer(Hors_la_loi &hll);
    void liberer(Princesse &princesse);

    void sePresenter() override;

    string quel_est_ta_boisson_favorite() const override;
    void recevoirMessage(Yoda &yoda);


    void sebattre(Duel &duel) override ;

    string quel_est_ton_nom() const override;
};


#endif //STARWARS_REBEL_H
