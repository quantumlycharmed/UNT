#include <iostream>
#include "person.h"
#include <stdio.h>
#include <vector>
#include <string>
#include <iterator>

using namespace std;



int main()
{
int height, weight;
string name, ethnicity, occupation;
char gender;

Person p1;
p1.printInfo();


vector<Person>personVec;//vector of Person class type called personVec
personVec.resize(4);//definite size of 4

cout << "Please enter the information for person." << endl;

cout << "Height: " << endl;
personVec.emplace_back(height);

cout << "Weight: " << endl;
personVec.emplace_back(weight);

cout << "Name: " << endl;
personVec.emplace_back(name);

cout << "Gender M for Male F for Female: " << endl;
personVec.emplace_back(gender);

cout << "Ethnicity: " << endl;
personVec.emplace_back(ethnicity);

cout << "Occupation: " << endl;
personVec.emplace_back(occupation);

//vector<Person>::iterator iter;
/*for (Person& person : personVec)
{
  cout << person << endl;
}
*/
personVec.clear();




return 0;
}
