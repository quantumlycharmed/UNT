
//header files section
#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
#include <string>
#include <vector>
#include "book.h"

using namespace std;

/*************Books class collection specifications***************/
class books
{
protected:
    vector<book> bookList;

private:
    int bookcnt;

public:
    
    int getCnt();

    void addBooks();
    void editBooks();
    void deleteBooks(int libNum);
    book *findBook(int libNum); 
    void searchBooks(); 
    void printBooks();
    void loadBooks();
    void storeBooks();
    void cleanup();
};
#endif 