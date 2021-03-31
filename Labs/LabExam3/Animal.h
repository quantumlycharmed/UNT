#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <iostream>


using namespace std;

class Animal
{
    private:
        //data members
        float weight;
        string name;
        char gender;
        string colorDesc;

    public:

        //contructors
        Animal();
        Animal(float, string, char, string);


        //getter functions
        float Getweight();
        string Getname();
        char Getgender();
        string GetcolorDesc();
        //setter functions
        void Setweight(float wt);
        void Setname(string nam);
        void Setgender(char gen);
        void SetcolorDesc(string colorD);
        virtual void print();
};
#endif