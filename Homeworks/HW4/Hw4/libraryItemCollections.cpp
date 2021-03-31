//header files section
#include "libraryItemCollections.h"
#include "libraryItem.h"


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include <typeinfo>

using namespace std;

/****************libraray collection class implementation*************/

//this returns the counter for items added
int libraryItemCollections::Getbookcnt() {return bookcnt;}
int libraryItemCollections::Getcdcnt() {return cdcnt;}
int libraryItemCollections::Getdvdcnt() {return dvdcnt;}



//Add books function
void libraryItemCollections::addbook()
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
void libraryItemCollections::editbook()
{
      cout << "Edit" << endl;  
}

//delete book function
/*void libraryItemCollections::deletebook(int libNum)
{
    book *temp;
    for (auto it = bookList.begin(); it != bookList.end(); ++it)
    {
        if ((*it).GetIDNum() == libNum)
        {
            bookList.erase(it);
        }
    }

    return;
}
*/
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

//find book function
/*book *libraryItemCollections::findbook(int libNum)
{
    book *temp;
    
    for(int i = 0; i < bookcnt; i ++)
    {
        if(bookList[i]->GetlibraryIDNum() == libNum) return bookList[i];
    }
    return NULL;
}*/

//print books function
/*void libraryItemCollections::printbookcollection()
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
*/
//load books function
void libraryItemCollections::loadbook()
{
    ifstream fin;

    string title;
    string author;
    string isbn;
    int libNum;
    float bCost;
    char stat;

    fin.open("books.dat");

    fin >> bookcnt; 
    fin.ignore();
    
    for (int i = 0; i < bookcnt; i++)
    {
        fin >> title >> author >> isbn >> libNum >> bCost >> stat;
        book temp(title, author, isbn, libNum, bCost, stat);
        bookList.push_back(temp);
    }
    fin.close();
}
//load CD function
void libraryItemCollections::loadcd()
{
    ifstream fin;

    string artist;
    string title;
    int numTracks;
    string genre;
    string releaseDate;
    

    fin.open("audioCD.dat");

    fin >> cdcnt; 
    fin.ignore();
    
    for (int i = 0; i < cdcnt; i++)
    {
        fin >> artist >> title >> numTracks >> genre >> releaseDate;
        audioCD temp(artist, title, numTracks, genre, releaseDate);
        cdList.push_back(temp);
    }
    fin.close();
}
//load DVD function
void libraryItemCollections::loaddvd()
{
    ifstream fin;

    string title;
    string category;
    int runtTime;
    string studio;
    string releaseDate;

    fin.open("dvd.dat");

    fin >> dvdcnt; 
    fin.ignore();
    
    for (int i = 0; i < dvdcnt; i++)
    {
        fin >> title >> category >> runtTime >> studio >> releaseDate;
        dvd temp(title, category, runtTime, studio, releaseDate);
        dvdList.push_back(temp);
    }
    fin.close();
}
//store books function
void libraryItemCollections::storebook()
{
    ofstream fout;

    fout.open("books.dat");
    fout << bookcnt << endl;

    book *temp;
    for (int i = 0; i < bookcnt; i++)
    {

        fout << bookList[i].GetbookTitle() << " " << bookList[i].GetauthorName()
             << " " << bookList[i].GetISBN() << " " << bookList[i].GetCategory() 
             << " " << endl;
    }
    fout.close();
}

//cleanup books function
/*void libraryItemCollections::cleanup()
{
    for (auto it = bookList.begin(); it != bookList.end(); it++)
    {

        delete *(it);
    }
    bookList.clear();
}
*/