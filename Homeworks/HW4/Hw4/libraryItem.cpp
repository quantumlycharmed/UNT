//header files
#include "libraryItem.h"

//library included
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <typeinfo>

//construtors
libraryItem::libraryItem()
{
    IDNum = 0;
    cost = 0.0;
    status = 'N';
    loanPeriod = 0;
}

libraryItem::libraryItem(int ID, float cos, char stat, int loanPer)
{
    IDNum = ID;
    cost = cos;
    status = stat;
    loanPeriod = loanPer;
}

//gets
int libraryItem::GetIDNum() {return IDNum;}
float libraryItem::Getcost() {return cost;}
char libraryItem::Getstatus() {return status;}
int libraryItem::GetloanPeriod() {return loanPeriod;}

//sets
void libraryItem::SetIDNum(int ID) {IDNum = ID;}
void libraryItem::Setcost(float cos) {cost = cos;}
void libraryItem::Setstatus(char stat) {status = stat;}
void libraryItem::SetloanPeriod(int loanPer) {loanPeriod = loanPer;}

//print
void libraryItem::Print()
{
    cout << "Library ID Number: " << IDNum << endl;
    cout << "Item Cost: " << cost << endl;
    cout << "Check out status: " << status << endl;
    cout << "Loan period: " << endl;
}
