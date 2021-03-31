//header file inclusions
#include "patron.h"

//library file inclusions
#include<iostream>

using namespace std;

//initializing object
patron::patron()
{
    name = "None";
    IDNum = "None";
    fineBal = 0.0;
    currentOut = 0;
}

//passing parameters to object
patron::patron(string n, string ID, float bal, int currOut)
{
    name = n;
    IDNum = ID;
    fineBal = bal;
    currentOut = currOut;
}

//getters
string patron::Getname(){return name;}

string patron::GetIDNum(){return IDNum;}

float patron::GetfineBal(){return fineBal;}

int patron::GetcurrentOut(){return currentOut;}

//setters
void patron::Setname(string n){name = n;}

void patron::SetIDNum(string ID){IDNum = ID;}

void patron::SetfineBal(float bal){fineBal = bal;}

void patron::SetcurrentOut(int currOut){currentOut = currOut;}

//print method
void patron::print()
{
    cout << "Name: " << name << endl;
    cout << "ID Number: " << IDNum << endl;
    cout << "Fine Balance: " << fineBal << endl;
    cout << "Current number of books out: " << currentOut << endl;
}
