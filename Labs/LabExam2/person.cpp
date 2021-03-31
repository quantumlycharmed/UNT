#include <iostream>
#include "person.h"
#include <stdio.h>
#include <string>

Person::Person()//default
{
cout << "Default constructor called" << endl;
height = 0.0;
weight = 0.0;
name = "None";
gender = ' ';
ethnicity = "None";
occupation = "None";
}
Person::Person(int x, float y, string z, char gender, string e, string o)//parameterized
{
  height = x;
  weight = y;
  name = z;
  this->gender = gender;
  ethnicity = e;
  occupation = o;
}

int Person::getHeight()
{
  return height;
}

void Person::setHeight(int x)
{
  height = x;
}

int Person::getWeight()
{
  return weight;
}

void Person::setWeight(float y)
{
  weight = y;
}

string Person::getName()
{
  return name;
}

void Person::setName(string z)
{
  name = z;
}

char Person::getGender()
{
  return gender;
}

void Person::setGender(char gender)
{
  this->gender = gender;
}

string Person::getEthnicity()
{
  return ethnicity;
}

void Person::setEthnicity(string e)
{
  ethnicity = e;
}

string Person::getOccupation()
{
  return occupation;
}

void Person::setOccupation(string o)
{
  occupation = o;
}

void Person::printInfo()
{
  cout << "Height: " <<  height << endl;
  cout << "Weight:" <<  weight << endl;
  cout  << "Name:" << name << endl;
  cout << "Gender:" << gender << endl;
  cout << "Ethnicity:" << ethnicity << endl;
  cout << "Occupation:" << occupation << endl;
}
