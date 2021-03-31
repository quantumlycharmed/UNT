//header files
#include "dvd.h"

//include library directives
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <typeinfo>

using namespace std;

//constructors
//initializing constructor
dvd::dvd()
{
    title = "None";
    category = "None";
    runTime = 0;
    studio = "None";
    releaseDate = "None";
}
//parameterized constructor
dvd::dvd(string tit, string cat, int run, string stu, string rel)
{
    title = tit;
    category = cat;
    runTime = run;
    studio = stu;
    releaseDate = rel;
}

//gets
string dvd::Gettitle(){return title;}
string dvd::Getcategory(){return category;}
int dvd::GetrunTime(){return runTime;}
string dvd::Getstudio(){return studio;}
string dvd::GetreleaseDate(){return releaseDate;}

//sets
void dvd::Settitle(string tit){title = tit;}
void dvd::Setcategory(string cat){category = cat;}
void dvd::SetrunTime(int run){runTime = run;}
void dvd::Setstudio(string stu){studio = stu;}
void dvd::SetreleaseDate(string rel){releaseDate = rel;}

void dvd::Print()
{
    //void libraryItem::Print() << endl;
    cout << "DVD Title: " << title << endl;
    cout << "DVD Category: " << category << endl;
    cout << "DVD Run Time: " << runTime << endl;
    cout << "DVD Studio Release: " << studio << endl;
    cout << "DVD Release Date: " << releaseDate << endl;
}