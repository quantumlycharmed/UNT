//header file section
#include <iostream>
#include <string>
#include <vector>

//all src files 
#include "patrons.h"
#include "patron.h"
#include "book.h"
#include "audioCD.h"
#include "dvd.h"
#include "libraryItemCollections.h"
#include "loans.h"
#include "loan.h"

using namespace std;

libraryItemCollections BookShelf;
libraryItemCollections CDRack;
libraryItemCollections DVDStack;
libraryItem Items;

int main()
{
	int libNum;

		int choice = -1;
    	int id = 0;


		BookShelf.loadbook();
		CDRack.loadcd();
		DVDStack.loaddvd();

	while (choice != 0)
    {
        cout << "Welcome to the library system, what would you like to do?" << endl;
		cout << "0 = QUIT\n 1 = ADD BOOK\n 2 = ADD AUDIO CD\n 3 = ADD DVD\n 4 = PRINT PATRONS LIST\n 5 = PRINT LOANS LIST\n 6 = PRINT LIBRARY ITEMS\n 7 = DELETE PATRONS\n 8 = DELETE LOANS\n 9 = DELETE LIBRARY ITEMS\n";
        printf ("Enter your selection: ");
        scanf ("%d%*c", &choice);
        
        switch (choice)
        {
                
            case 1: BookShelf.addbook(); break;
            //case 2: CDRack.addcd(); break;
            //case 3: DVDStack.adddvd();break;
            //case 4: Patrons.PrintAll();break;
            //case 5: Loans.PrintAll();break;
            case 6: Items.Print();break;
            case 7: 
			{
                cout << "what Patron would you like to delete? ";
                cin >> id; cin.ignore();
                //Patrons.Delete(id);
                break;
            }
            case 8: 
			{
                cout << "what Loan would you like to delete? ";
                cin >> id; cin.ignore();
               	//Loans.Delete(id);
                break;
            }

            case 9: 
			{
                cout << "what item to delete? ";
                cin >> id; cin.ignore();
                //Items.Delete(id);
                break;
            }

        }
    }
   
    BookShelf.storebook();
	//DVDStack.storedvd();
	//CDRack.storecd();
    //BookShelf.cleanup();
	//DVDStack.cleanup();
	//CDRack.cleanup();
    return 0;
}

		

	

