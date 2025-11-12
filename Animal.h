#include <iostream>
#include <ostream>
#include <set>
#include <string>//
// Created by Omar on 2025-11-12.
//
using namespace std;
#ifndef ASSIGNMENT_ANIMAL_H
#define ASSIGNMENT_ANIMAL_H


class Animal {

private:
    string name;
    int age;
    bool isHungry;

public:
    Animal() {
    this->name="";
        this->age=0;
        this->isHungry=false;
    };
    Animal(string n, int a , bool h) {
     this->age=a;
     this->isHungry=h;
        this->name=n;

    };
  ~Animal(){}

    void setName(string n) {
      this->name=n;
  }



void setAge(int a) {
      this->age=a;
  }
void setHunger(bool h) {
      this->isHungry=h;
  }


int getAge() {
      return age;
  }

bool isHungryy() {
      return isHungry;
  };

string getName() {
    return name;
}

void display() {

cout << name << " (Age: " << age << ", " ;
    if (isHungry=true){ cout << "Hungry )" << endl;}
    else {cout << "NotHungry)" << endl;}
}

void feed() {
    if (isHungry) {
        isHungry=false;
        return;
    }
    else {
       return;
    }
}



};




#endif //ASSIGNMENT_ANIMAL_H
