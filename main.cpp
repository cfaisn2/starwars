#include <iostream>

#include "Humanoide.h"
#include "Princesse.h"
#include "MembreEmpire.h"
#include "Barman.h"
#include "Yoda.h"
#include "Traitre.h"
#include "PrincesseTraitre.h"
#include "Wookies.h"


int main() {

Humanoide h1=Humanoide("human");
h1.parler("bonjour");
h1.sePresenter();
h1.boire();
MembreEmpire me=MembreEmpire("Vador");
me.sePresenter();
Princesse princesse=Princesse("Leila");
princesse.sePresenter();
princesse.boire();
princesse.changerdeRobe("blanche");
princesse.seFaireKidnapper(me);

Rebel rebel=Rebel("Luk");
rebel.sePresenter();
rebel.tirer(me);
rebel.coffrer(me);
rebel.liberer(princesse);
Barman b=Barman("Jean");
b.sePresenter();
b.servir(princesse);
Barman b2=Barman("René","Starwars Bar");
b2.sePresenter();
Yoda y;
y.sePresenter();
y.coffrer(me);
Traitre t("traitre");
t.kidnapper(princesse);
PrincesseTraitre pt("Princesse Traitre");
pt.kidnapper(princesse);
Wookies w2("Ch1");
Wookies w("Chubacca");
w.sebattre(me);
me.sebattre(rebel);
w.sebattre(w2);




}