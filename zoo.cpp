#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

int main() {

   Animal *animal1 = new Animal("African Elephant", 1758);

   AnimalsInZoo *animalzoo = new AnimalsInZoo(*animal1);
   animalzoo -> display();

   Animal animal2("Giant Panda", 1869);
   Animal *animal3 = new Animal("Dog", 2000);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal3->display();
   animal2.display();
   animal1->display();

   delete animal3;
   delete animal1;
}
