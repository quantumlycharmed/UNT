#include <iostream>
#include <string>

#include "Animal.h"
#include "Horse.h"

using namespace std;
//constructors
//default initializes to blank or 0 upon object call
Horse::Horse()
{
    breed = "Blank";
    spayxNeut = "Yes/No";
    regID = "0.0xyz";
}

//Parameterized sets to value input by user
Horse::Horse(float wt, string nam, char gen, string colorD, string brd, string spayNeut, string ID)
{
    breed = brd;
    spayxNeut = spayNeut;
    regID = ID;
}

//getter functions
string Horse::Getbreed()
{
    return breed;
}
string Horse::GetspayxNeut()
{
    return spayxNeut;
}
string Horse::GetregID()
{
    return regID;
}

//setter functions
void Horse::Setbreed(string brd)
{
    breed = brd;
}
void Horse::SetspayxNeut(string spayNeut)
{
    spayxNeut = spayNeut;
}
void Horse::SetregID(string ID)
{
    regID = ID;
}

void Horse::print()
{
    Animal::print();
}