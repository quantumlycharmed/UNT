#ifndef HORSE_H_
#define HORSE_H_
//horse inheritates Animal class attributes
#include "Animal.h"

#include <iostream>


using namespace std;

class Horse : public Animal
{
    private:
        //added data members 
        string breed;
        string spayxNeut;
        string regID;
        

    public:
        //contructors
        Horse();
        Horse(float, string, char, string, string, string, string);

        //getter functions
        string Getbreed();
        string GetspayxNeut();
        string GetregID();
        
        //setter functions
        void Setbreed(string brd);
        void SetspayxNeut(string spayNeut);
        void SetregID(string ID);

        //print function
        void print();
        
};
#endif