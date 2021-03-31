//header files section
#include "books.h"
#include "book.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <typeinfo>

using namespace std;

/****************Books collection class implementation*************/
int books::getCnt() {return bookcnt;}



//Add books function
void books::addBooks()
{
    book *temp;
    string author;
    string title;
    string isbn;
    int libNum;
    float bCost;
    char stat;

    cout << "Enter Author's Name: ";
    getline(cin, author);
    
    cout << "Enter Book's Title: ";
    getline(cin, title);
    
    cout << "Enter ISBN: ";
    getline(cin, isbn);
    
    cout << "Enter Library ID Number: ";
    cin >> libNum;
    
    cout << "Enter book cost: ";
    cin >> bCost;
    
    cout << "Enter Book Status: ";
    cin >> stat;
    

    temp = new book(author, title, isbn, libNum, bCost, stat);
    bookList.push_back(*temp);
    bookcnt++;

}

//edit books function

void books::editBooks()
{
        
}

//find book function
book *books::findBook(int libNum)
{
    book *temp;
    
   /* for(int i = 0; i < bookcnt; i ++)
    {
        if(bookList[i]->GetlibraryIDNum() == libNum) return bookList[i];
    }*/
    return NULL;
}

//find book price function


//delete book function
void books::deleteBooks(int libNum)
{
    book *temp;
    for (auto it = bookList.begin(); it != bookList.end(); ++it)
    {
        if ((*it).GetlibraryIDNum() == libNum)
        {
            bookList.erase(it);
        }
    }

    return;
}

/*void books::findBooks()
{
    string input;
    cout << "Enter the ISBN for the book you wish to find." << endl;
    getline(cin, input);

    for(int i = 0; i < bookcnt; i++)
    {
        if(input == bookList[i].GetISBN())
        {
            return book.at(i);
        }
        else
        {
            cout << "Book not found!" << endl;
        }
    }

}
*/
//print books function
void books::printBooks()
{
    for(auto it = bookList.begin(); it != bookList.end(); it++)
    {
        cout << "Author's Name: " << (*it).GetauthorName() << endl;
        cout << "Book Title: " << (*it).GetbookTitle() << endl;
        cout << "Book's ISBN: " << (*it).GetISBN() << endl;
        cout << "Library ID Number: " << (*it).GetlibraryIDNum() << endl;
        cout << "Book Cost: " << (*it).GetbookCost() << endl;
        cout << "Book status: " << (*it).Getstatus() << endl;
    }
}

//load books function
void books::loadBooks()
{
    ifstream fin;

    string authorName;
    string bookTitle;
    string ISBN;
    int libraryIDNum;
    float bookCost;
    char status;

    fin.open("books.dat");

    fin >> bookcnt; 
    fin.ignore();
    
    for (int i = 0; i < bookcnt; i++)
    {
        fin >> authorName >> bookTitle >> ISBN >> libraryIDNum, bookCost;
        book temp(authorName, bookTitle, ISBN, libraryIDNum, bookCost, status);
        bookList.push_back(temp);
    }
    fin.close();
}

//store books function
void books::storeBooks()
{
    ofstream fout;

    fout.open("books.dat");
    fout << bookcnt << endl;

    book *temp;
    for (int i = 0; i < bookcnt; i++)
    {

        fout << bookList[i].GetauthorName() << " " << bookList[i].GetbookCost()
             << " " << bookList[i].GetbookTitle() << " " << bookList[i].GetISBN()
             << " " << bookList[i].GetlibraryIDNum() << " " << bookList[i].Getstatus() << " " << endl;
    }
    fout.close();
}

//cleanup books function
void books::cleanup()
{
   /* for (auto it = bookList.begin(); it != bookList.end(); it++)
    {

        delete *it;
    }*/
    bookList.clear();
}
