#include <iostream>
#include "Animal.h"
#include "Bird.h"
#include "Visitor.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include <iostream>
#include <ostream>
#include <set>
#include <string>
using namespace std;

int main() {

Enclosure zoo(10);
Mammal m("Mammal 1","black",15,false);
   Bird b("bird 1",12,false,3.3);
    Reptile r("reptile1", 22, false, true);


    Visitor omar("Omar",5);


  Mammal *mp=&m;
    Bird *bp=&b;
    Reptile *rp=&r;

   zoo.addAnimal(mp);
    zoo.addAnimal(bp);
    zoo.addAnimal(rp);

zoo.displayAnimals();
    omar.display();








    return 0;
}
