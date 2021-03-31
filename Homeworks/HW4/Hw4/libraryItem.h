#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <iostream>
using namespace std;

class libraryItem
{
 private:

    int IDNum;
    float cost;
    char status;
    int loanPeriod;

 public:
    /**************Constructors*****/
    libraryItem();
    libraryItem(int, float, char, int);
    
    /**************Gets************/
    int GetIDNum();
    float Getcost();
    char Getstatus();
    int GetloanPeriod();
    
    /**************Sets************/
    void SetIDNum(int ID);
    void Setcost(float cos);
    void Setstatus(char stat);
    void SetloanPeriod(int loanPer);
    
    /**************Print**********/
    virtual void Print();

};
#endif