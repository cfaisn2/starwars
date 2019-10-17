#include <iostream>

#include "Humanoide.h"
#include "Princesse.h"
#include "MembreEmpire.h"
#include "Barman.h"
#include "Yoda.h"


int main() {

Humanoide h1=Humanoide("human");
h1.parler("bonjour");
h1.sePresenter();
h1.boire();

Princesse princesse=Princesse("Leila");
princesse.sePresenter();
princesse.boire();
princesse.changerdeRobe("blanche");
princesse.seFaireKidnapper();
MembreEmpire me=MembreEmpire("Vador");
me.sePresenter();
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
y.sendMessage(me);





}