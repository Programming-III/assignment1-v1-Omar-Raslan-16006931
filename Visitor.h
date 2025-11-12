#include <iostream>
#include <ostream>
#include <set>
#include <string>//
// Created by Omar on 2025-11-12.
//
using namespace std;
#ifndef ASSIGNMENT_VISITOR_H
#define ASSIGNMENT_VISITOR_H




class Visitor {

private:
    string visitorName;
    int ticketsBought;

public:
    Visitor() {
        this->ticketsBought=0;
        this->visitorName="";
    }


    Visitor(string name, int bought) {
        this->ticketsBought=bought;
        this->visitorName=name;
    }

~Visitor(){}


    void setName(string n) {
        this->visitorName=n;
    }
   int getTickets() {
        return ticketsBought;
    }
   void display() {
        cout  << endl;
        cout  << endl;
        cout << "Visitor Info: " << endl;
        cout << "Name: " << visitorName << endl;
        cout << "Tickets Bought: " << ticketsBought << endl;

    }









};












#endif //ASSIGNMENT_VISITOR_H
