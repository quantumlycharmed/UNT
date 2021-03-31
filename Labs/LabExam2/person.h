#ifndef PERSONH
#define PERSONH

#include <string>
using namespace std;

class Person{
  private:

    int height;
    int weight;
    string name;
    char gender;
    string ethnicity;
    string occupation;


  public:

    Person();
    Person(int x, float y, string z, char gender, string e, string o);

    int getHeight();
    void setHeight(int x);

    int getWeight();
    void setWeight(float y);

    string getName();
    void setName(string z);

    char getGender();
    void setGender(char gender);

    string getEthnicity();
    void setEthnicity(string e);

    string getOccupation();
    void setOccupation(string o);

    void printInfo();

};

#endif
