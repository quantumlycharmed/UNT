#include <iostream>

#include "Animal.h"


using namespace std;
//constructors
//default initializes to blank or 0 upon object call
Animal::Animal()
{
    weight = 0.0;
    gender = 'n';
    colorDesc = "blank";
}
//parameterized sets members = input from user
Animal::Animal(float wt, string nam, char gen, string colorD)
{
    
    weight = wt;
    name = nam;
    gender = gen;
    colorDesc = colorD;

}
//getter functions
float Animal::Getweight()
{
    return weight;
}
string Animal::Getname()
{
    return name;
}
char Animal::Getgender()
{
    return gender;
}
string Animal::GetcolorDesc()
{
    return colorDesc;
}
//setter functions
void Animal::Setweight(float wt)
{
    weight = wt;
}
void Animal::Setname(string nam)
{
    name = nam;
}
void Animal::Setgender(char gen)
{
    gender = gen;
}
void Animal::SetcolorDesc(string colorD)
{
    colorDesc = colorD;
}
//print function
//should be a virtual print function for horse to override
void Animal::print()
{

    /*cout << "Weight: " << weight << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Color Description: " << colorDesc << endl;
    */
}