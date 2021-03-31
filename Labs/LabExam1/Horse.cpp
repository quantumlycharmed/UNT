//Horse.cpp

#include "Horse.h"
#include <stdio.h>

using namespace std;

    //constructors
    Horse::Horse()
    {
    breed = "blank";
    weight = 0.0;
    name = "blank";
    gender = 'N';
    fixed = 'N';
    regID = "Blank";
    description = "Blank";
    }

    Horse::Horse(char *breedM, float weightM, char *nameM, char genderM, char fixedM, char *regIDM, char *descM)
    {
    breed = breedM;
    weight = weightM;
    name = nameM;
    gender = genderM;
    fixed = fixedM;
    regID = regIDM;
    description = descM;
    }
    
    //setters
    void Horse::setbreed(char *breedM){breed = breedM;}
    void Horse::setweight(float weightM){weight = weightM;}
    void Horse::setname(char *nameM){name = nameM;}
    void Horse::setgender(char genderM){gender = genderM;}
    void Horse::setfixed(char fixedM){fixed = fixedM;}
    void Horse::setregID(char *regIDM){regID = regIDM;}
    void Horse::setColor(char *descM){description = descM;}

    //getters
    string Horse::getbreed(char *breed){return breed;}
    float Horse::getweight(float weight){return weight;}
    string Horse::getname(char * name){return name;}
    char  Horse::getgender(char gender){return gender;}
    char Horse::getfixed(char fixed){return fixed;}
    string Horse::getregID(char *regID){return regID;}
    string Horse::getColor(char *description){return description;}

    void Horse::printInfo()
    {
      printf("Breed Type: %s \n", breed);
      printf("Weight: %f \n", weight);
      printf("Name: %s \n", name);
      printf("Gender: %c \n", gender);
      printf("Fixed Status: %c \n", fixed);
      printf("Registration ID: %s \n", regID);
      printf("Color Description: %s \n", description);
    }
