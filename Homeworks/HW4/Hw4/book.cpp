//header files section
#include "book.h"

//library file inclusions
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/****************Book class implementation*************/

//Default constructor implementation
book::book()
{
    authorName = "NONE";
    bookTitle = "NONE";
    ISBN = "NONE";    
}

//Parameterized construction implementation
book::book(string author, string title, string isbn, int libNum, float bCost, char stat)
{
    authorName = author;
    bookTitle = title;
    ISBN = isbn;
}

//book get methods
string book::GetauthorName() { return authorName; }
string book::GetbookTitle() { return bookTitle; }
string book::GetISBN() { return ISBN; }
string book::GetCategory() {return category;}

//book set methods
void book::SetauthorName(string author) {authorName = author; }
void book::SetbookTitle(string title) { bookTitle = title; }
void book::SetISBN(string isbn) { ISBN = isbn; }
void book::SetCategory(string cat) {category = cat; }

//single book print method
void book::printBook()
{
    cout << "Author Name: " << authorName << endl;
    cout << "Book Title: " << bookTitle << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Category:" << category << endl;
}

