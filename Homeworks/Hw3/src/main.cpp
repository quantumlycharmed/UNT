//header file section
#include <iostream>
#include <string>
#include <vector>

//all src files 
//#include "patrons.h"
//#include "patron.h"
#include "books.h"
#include "book.h"
//#include "loans.h"
//#include "loan.h"

using namespace std;

books shelf;

int main()
{
	int libNum;
		//shelf.loadBooks();
		int choice = -1;

	while (choice != 0)
	{
		cout << "This is the beginning of Books. Please read the Menu and tell me what you'd like to do." << endl;

		cout << "MENU" << endl;
		cout << "0.) Quit" << endl;
		cout << "1.) Add Book" << endl;
		cout << "2.) Edit Book" << endl;
		cout << "3.) Delete Book" << endl;
		cout << "4.) Search Book" << endl;
		cout << "5.) Print Book" << endl;
		cout << "6.) Load Book" << endl;
		cout << "7.) Store Book" << endl;

		cin >> choice;

		switch (choice)
		{

		case 1:

			cout << "Add Books." << endl;
			shelf.addBooks();
			break;
		case 2:
			cout << "Edit Books." << endl;
			shelf.editBooks();
			break;
		case 3:
			cout << "Delete Books." << endl;
			cout << "Enter the library ID number to delete." << endl;
			cin >> libNum;
			shelf.deleteBooks(libNum);
			break;
		case 4:
			cout << "Search Books." << endl;
			cout << "Enter the library ID number to find." << endl;
			cin >> libNum;
			shelf.findBook(libNum);
			break;
		case 5:
			cout << "Print Books." << endl;
			shelf.printBooks();
			break;
		case 6:
			cout << "Load Books." << endl;
			shelf.loadBooks();
			break;
		case 7:
			cout << "Store Books." << endl;
			shelf.storeBooks();
			break;

		default:
			break;
		}
		shelf.loadBooks();
		}
}
