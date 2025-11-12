#include <iostream>
#include <ostream>
#include <set>
#include <string>//

#include "Animal.h"
// Created by Omar on 2025-11-12.
//
using namespace std;
#ifndef ASSIGNMENT_MAMMAL_H
#define ASSIGNMENT_MAMMAL_H



class Mammal : public Animal {
private:
    string furColor;

public:
    Mammal() {
        setAge(0);
        setName("");
        setHunger(true);
        this->furColor="";
    }

    Mammal(string n, string fur, int a, bool h) {
        setAge(a);
        setName(n);
        setHunger(h);
        this->furColor=fur;
    }

~Mammal(){}

   void setFur(string f) {
        this->furColor=f;
    }

    string getFur() {
        return furColor;
    }

    void display() {

        cout << getName() << " (Age: " << getAge() << ", "  ;
        if (isHungryy()){ cout << "Hungry )" << endl;}
        else {cout << "NotHungry)" << endl;}
    }



};















#endif //ASSIGNMENT_MAMMAL_H
