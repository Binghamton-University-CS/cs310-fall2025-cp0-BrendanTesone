#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal newAnimal){
    numAnimals = 1;
    animal = newAnimal;
};

AnimalsInZoo::AnimalsInZoo(){
    numAnimals = 0;
};

void AnimalsInZoo::display(){
    cout << numAnimals << endl;
    animal.display();
}

// Add a new class AnimalsInZoo to store 0 or 1 animals:
// - Private: int numAnimals; and Animal animal;
// - Constructors:
//   1. One taking an Animal object and setting numAnimals to 1
//   2. A default constructor setting numAnimals to 0
// - display() should print numAnimals and then call Animal::display() if there is an animal
