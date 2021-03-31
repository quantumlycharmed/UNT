//Horse.h
#ifndef HORSEH
#define HORSEH
#include <iostream>
using namespace std;

class Horse{

  private:

    char *breed;
    float weight;
    char *name;
    char gender;
    char fixed;
    char *regID;
    char *description;

  public:
    //constructors
    Horse();
    Horse(char *breedM, float weightM, char *nameM, char genderM, char fixedM, char *regIDM, char *descM);

    //setters
    void setbreed(char *breedM);
    void setweight(float weightM);
    void setname(char *nameM);
    void setgender(char genderM);
    void setfixed(char fixedM);
    void setregID(char *regIDM);
    void setColor(char *descM);

    //getters
    string getbreed(char *breed);
    float getweight(float weight);
    string getname(char *name);
    char  getgender(char gender);
    char getfixed(char fixed);
    string getregID(char *regID);
    string getColor(char *description);

    void printInfo();
};

#endif
