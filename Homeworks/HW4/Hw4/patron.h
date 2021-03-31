//header file inclusiongs
#ifndef PATRON_H
#define PATRON_H
#include <iostream>
#include <string>
#include <vector>

//library file inclusions

using namespace std;

/****************Patron class implementation*************/
class patron
{

    public:
        //constructors
        //initialized
        patron();
        //parameterized
        patron(string, string, float, int);

        //getters
        string Getname();
        string GetIDNum();
        float GetfineBal();
        int GetcurrentOut();

        //setters
        void Setname(string n);
        void SetIDNum(string ID);
        void SetfineBal(float bal);
        void SetcurrentOut(int currOut);

        //print function
        void print() ;

        //patron data members
        private:
        string name;
        string IDNum;
        float fineBal;
        int currentOut;

};
#endif