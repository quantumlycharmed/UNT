//header file inclusions
#include "loan.h"

//library file inclusions
#include<iostream>
#include <string>

using namespace std;

//initializing object
loan::loan()
{
    loanID = "None";
    bookID = 0;
    patronID = "None";
    dueDate = 0;
    currLoanStatus = "None";
}

//passing parameters to object
loan::loan(string LID, int BID, string PID, int due, string currStat)
{
    loanID = LID;
    bookID = BID;
    patronID = PID;
    dueDate = due;
    currLoanStatus = currStat;
}

//getters
string loan::GetloanID(){return loanID;}

int loan::GetbookID(){return bookID;}

string loan::GetpatronID(){return patronID;}

int loan::GetdueDate(){return dueDate;}

string loan::GetcurrLoanStatus(){return currLoanStatus;}

//setters
void loan::SetloanID(string LID){loanID = LID;}

void loan::SetbookID(int BID){bookID = BID;}

void loan::SetpatronID(string PID){patronID = PID;}

void loan::SetdueDate(int due){dueDate = due;}

void loan::SetcurrLoanStatus(string currStat){currLoanStatus = currStat;}

//print method
void loan::print()
{
    cout << "Loan ID: " << loanID << endl;
    cout << "Book ID: " << bookID << endl;
    cout << "Patron ID: " << patronID << endl;
    cout << "Current Due Date: " << dueDate << endl;
    cout << "Current Loan Status:" << currLoanStatus << endl;
}
