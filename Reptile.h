#include <iostream>
#include <ostream>
#include <set>
#include <string>//

#include "Animal.h"
// Created by Omar on 2025-11-12.
//
using namespace std;//
// Created by Omar on 2025-11-12.
//

#ifndef ASSIGNMENT_REPTILE_H
#define ASSIGNMENT_REPTILE_H



class Reptile: public Animal {

private:
    bool isVenomous;
    // able to produce venom or not

public:
    Reptile() {
        setName("");
        setAge(0);
        setHunger(true);
        this->isVenomous=false;
    }

    Reptile(string n, int a, bool h, bool v) {
        setName(n);
        setAge(a);
        setHunger(h);
        this->isVenomous=v;
    }
~Reptile(){}


    void setVenomous(bool v) {
        this->isVenomous=v;
    }

    bool isVenomouss() {
        return isVenomous;
    }
    void display() {

        cout << getName() << " (Age: " << getAge() << ", "  ;
        if (isVenomouss()){ cout << "Venomous, " ;}
        else {cout << "Not Venomous, " ;}
        if (isHungryy()){ cout << "Hungry )" << endl;}
        else {cout << "NotHungry)" << endl;}
    }

















};




















#endif //ASSIGNMENT_REPTILE_H
