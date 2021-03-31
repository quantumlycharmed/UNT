//header files section
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include <vector>
#include "libraryItem.h"

using namespace std;

/*************Book class specifications***************/
class book : libraryItem{

public:
    //book constructors
    book();
    book(string title, string author, string isbn, int libNum, float bCost, char stat);

    //book getters
    string GetauthorName();
    string GetbookTitle();
    string GetISBN();
    string GetCategory();

    //book setters
    void SetauthorName(string author);
    void SetbookTitle(string title);
    void SetISBN(string isbn);
    void SetCategory(string cat);

    void printBook();
    friend ostream &operator<<(ostream &st, book &it); 

private:
    //book data
    string bookTitle;
    string authorName;
    string ISBN;
    string category;

    
};
#endif