//header file inclusion
#include "audioCD.h"

//library file inclusions
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <typeinfo>

using namespace std;

//constructors
//initializing constructor
audioCD::audioCD()
{
    artist = "None";
    title = "None";
    numTracks = 0;
    genre = "None";
    releaseDate = "None";
}
//parameterized constructor
audioCD::audioCD(string art, string tit, int tracks, string gen, string rel)
{
    artist = art;
    title = tit;
    numTracks = tracks;
    genre = gen;
    releaseDate = rel;
}

//gets
string audioCD::Getartist(){return artist;}
string audioCD::Gettitle(){return title;}
int audioCD::GetnumTracks(){return numTracks;}
string audioCD::Getgenre(){return genre;}
string audioCD::GetreleaseDate(){return releaseDate;}

//sets
void audioCD::Setartist(string art){artist = art;}
void audioCD::Settitle(string tit){title = tit;}
void audioCD::SetnumTracks(int tracks){numTracks = tracks;}
void audioCD::Setgenre(string gen){genre = gen;}
void audioCD::SetreleaseDate(string rel){releaseDate = rel;}

void audioCD::Print()
{
    //void libraryItem::Print() << endl;
    cout << "Audio CD Artist: " << artist << endl;
    cout << "Audio CD Title: " << title << endl;
    cout << "Audio CD Number of Tracks: " << numTracks << endl;
    cout << "Audio CD Genre: " << genre << endl;
    cout << "Audio CD Release Date: " << releaseDate << endl;
}