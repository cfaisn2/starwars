//
// Created by eric on 20/09/19.
//

#ifndef STARWARS_HUMANOIDE_H
#define STARWARS_HUMANOIDE_H

#include <string>
using namespace std;
class Humanoide {
private:
    string nom;
    string boisson_favorite;
public:
    Humanoide(const string &nom);
    Humanoide();

    virtual void parler(const string &texte);

    virtual void sePresenter();

    virtual string quel_est_ton_nom() const;

    virtual string quel_est_ta_boisson_favorite() const;
    void boire();





};


#endif //STARWARS_HUMANOIDE_H
