#include <iostream>
#include <ostream>
#include <set>
#include <string>//
#include "Animal.h"
// Created by Omar on 2025-11-12.
//
using namespace std;
#ifndef ASSIGNMENT_ENCLOSURE_H
#define ASSIGNMENT_ENCLOSURE_H



class Enclosure {
private:
    Animal* animals;
    int capacity;
    int currentCount;

public:

    Enclosure() {
        this->capacity=0;
        this->currentCount=0;
        Animal* animals=new Animal[0];
    }


    Enclosure(int max ) {
        this->capacity=max;

        this->animals=new Animal[max];

    }

~Enclosure() {
        delete[] animals;
    }


void addAnimal( Animal* a) {
      if (currentCount<capacity) {
          animals[currentCount]=*a;
          currentCount++;
      }
     else {
         cout << "Full capacity" << endl;
     }


    }



void displayAnimals() {
        cout << "Enclosure 1 Animals:" << endl << endl;
for ( int i=0; i<currentCount; i++) {

    animals[i].display();

}









    }















};















#endif //ASSIGNMENT_ENCLOSURE_H
