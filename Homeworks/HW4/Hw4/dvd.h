#ifndef DVD_H
#define DVD_H
#include <iostream>
#include <string>
#include <vector>
#include "libraryItem.h"

using namespace std;

class dvd : libraryItem
{

    private:
        string title;
        string category;
        int runTime;
        string studio;
        string releaseDate;
        
    public:
        //constructors
        dvd();
        dvd(string, string, int, string, string);

        //gets
        string Gettitle();
        string Getcategory();
        int GetrunTime();
        string Getstudio();
        string GetreleaseDate();

        //sets
        void Settitle(string tit);
        void Setcategory(string cat);
        void SetrunTime(int run);
        void Setstudio(string stud);
        void SetreleaseDate(string rel);

        //print
        void Print();
};

#endif