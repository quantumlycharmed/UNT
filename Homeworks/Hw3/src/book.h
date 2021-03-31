//header files section
#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*************Book class specifications***************/
class book{

public:
    //book constructors
    book();
    book(string author, string title, string isbn, int libNum, float bCost, char stat);

    //book getters
    string GetauthorName();
    string GetbookTitle();
    string GetISBN();
    int GetlibraryIDNum();
    float GetbookCost();
    char Getstatus();

    //book setters
    void SetauthorName(string author);
    void SetbookTitle(string title);
    void SetISBN(string isbn);
    void SetlibraryIDNum(int libNum);
    void SetbookCost(float bCost);
    void Setstatus(char stat);
    void printBook();
    friend ostream &operator<<(ostream &st, book &it); ////?????

private:
    //book data
    string authorName;
    string bookTitle;
    string ISBN;
    int libraryIDNum;
    float bookCost;
    char status;
};
#endif