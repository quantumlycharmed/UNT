#ifndef AUDIOCD_H
#define AUDIOCD_H
#include <iostream>
#include <string>
#include <vector>
#include "libraryItem.h"

using namespace std;

class audioCD : libraryItem
{

    private:
        string artist;
        string title;
        int numTracks;
        string genre;
        string releaseDate;
        
    public:
        //constructors
        audioCD();
        audioCD(string, string, int, string, string);

        //gets
        string Getartist();
        string Gettitle();
        int GetnumTracks();
        string Getgenre();
        string GetreleaseDate();

        //sets
        void Setartist(string art);
        void Settitle(string tit);
        void SetnumTracks(int track);
        void Setgenre(string gen);
        void SetreleaseDate(string rel);

        //print
        void Print();
};

#endif