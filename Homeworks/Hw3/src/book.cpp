//header files section
#include <iostream>
#include <string>
#include <vector>
#include "book.h"
using namespace std;

/****************Book class implementation*************/

//Default constructor implementation
book::book()
{
    authorName = "NONE";
    bookTitle = "NONE";
    ISBN = "NONE";
    libraryIDNum = 0;
    bookCost = 0.0;
    status = 'i';
    
}

//Parameterized construction implementation
book::book(string author, string title, string isbn, int libNum, float bCost, char stat)
{
    authorName = author;
    bookTitle = title;
    ISBN = isbn;
    libraryIDNum = libNum;
    bookCost = bCost;
    status = stat;
}

//book get methods
string book::GetauthorName() { return authorName; }
string book::GetbookTitle() { return bookTitle; }
string book::GetISBN() { return ISBN; }
int book::GetlibraryIDNum() { return libraryIDNum; }
float book::GetbookCost() { return bookCost; }
char book::Getstatus() { return status; }

//book set methods
void book::SetauthorName(string author) {authorName = author; }
void book::SetbookTitle(string title) { bookTitle = title; }
void book::SetISBN(string isbn) { ISBN = isbn; }
void book::SetlibraryIDNum(int libNum) {libraryIDNum = libNum; }
void book::SetbookCost(float bCost) {bookCost = bCost; }
void book::Setstatus(char stat) {status = stat; }

//single book print method
void book::printBook()
{
    cout << "Author Name: " << authorName << endl;
    cout << "Book Title: " << bookTitle << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Library ID Number: " << libraryIDNum << endl;
    cout << "Book Cost: " << bookCost << endl;
    cout << "Status: " << status << endl;
}