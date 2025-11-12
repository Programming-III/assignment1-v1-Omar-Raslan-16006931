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

#ifndef ASSIGNMENT_BIRD_H
#define ASSIGNMENT_BIRD_H



class Bird: public Animal {

private:
    float wingSpan;

public:
    Bird() {
        setAge(0);
        setHunger(true);
        setName("");
        this->wingSpan=0.0;
    }

    Bird(string n, int a , bool h, float w) {
        setAge(a);
        setHunger(h);
        setName(n);
        this->wingSpan=w;
    }
~Bird(){}


    void setSpan(float f) {
        this->wingSpan=f;
    }
 float getSpan() {
        return wingSpan;
    }

    void display() {

        cout << getName() << " (Age: " << getAge() << ", "  ;
        if (isHungryy()){ cout << "Hungry )" << endl;}
        else {cout << "NotHungry)" << endl;}
    }



};

















#endif //ASSIGNMENT_BIRD_H
