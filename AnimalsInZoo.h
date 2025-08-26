// Add a new class AnimalsInZoo to store 0 or 1 animals:
// - Private: int numAnimals; and Animal animal;
// - Constructors:
//   1. One taking an Animal object and setting numAnimals to 1
//   2. A default constructor setting numAnimals to 0
// - display() should print numAnimals and then call Animal::display() if there is an animal
#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

class AnimalsInZoo{
    private: 
        int numAnimals; 
        Animal animal;
    public:
        AnimalsInZoo(Animal newAnimal);
        AnimalsInZoo();
        void display();
};
