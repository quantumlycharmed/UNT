//header file inclusions
#include "book.h"
#include "dvd.h"
#include "audioCD.h"
#include "libraryItem.h"

//library file inclusions
#ifndef LIBRARYCOL_H
#define LIBRARYCOL_H
#include <iostream>
#include <string>
#include <vector>


using namespace std;

/*************Library items collections class specifications***************/
class libraryItemCollections
{
protected:
    //list of book objects called book list
    //list of audiocd objects called cdlist
    //list of dvd objects called dvdlist
    vector<book> bookList;
    vector<audioCD>cdList;
    vector<dvd>dvdList;

private:
    int bookcnt;
    int cdcnt;
    int dvdcnt;

public:
    
    int Getbookcnt();
    int Getcdcnt();
    int Getdvdcnt();

    //adding functions 
    void addbook();
    void addcd();
    void adddvd();

    //editing functions
    void editbook();
    void editcd();
    void editdvd();

    //delete functions
    void deletebook(int libNum);
    void deletecd(int libNum);
    void deletedvd(int libNum);

    //find functions based on libNum
    book *findbook(int libNum); 
    audioCD *findcd(int libNum);
    dvd *finddvd(int libNum);

    //search functions inside collection
    void searchbook();
    void searchcd();
    void searchdvd();

    //print collections as collections or collectively
    void printallcollections();
    void printbookcollection();
    void printcdcollection();
    void printdvdcollection();

    //loading functions
    void loadbook();
    void loadcd();
    void loaddvd();

    //storing functions
    void storebook();
    void storecd();
    void storedvd();

    //cleanup of all objects
    void cleanup();
};
#endif 