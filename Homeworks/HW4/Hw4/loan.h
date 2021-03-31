//header file inclusiongs
#ifndef LOAN_H
#define LOAN_H
#include <iostream>
#include <string>
#include <vector>

//library file inclusions

using namespace std;

/****************loan class implementation*************/
class loan
{

    public:
        //constructors
        //initialized
        loan();
        //parameterized
        loan(string, int, string, int, string);

        //getters
        string GetloanID();
        int GetbookID();
        string GetpatronID();
        int GetdueDate();
        string GetcurrLoanStatus();

        //setters
        void SetloanID(string LID);
        void SetbookID(int BID);
        void SetpatronID(string PID);
        void SetdueDate(int due);
        void SetcurrLoanStatus(string currStat);

        //print function
        void print() ;

    //patron data members
    private:
        string loanID;
        int bookID;
        string patronID;
        int dueDate;
        string currLoanStatus;

};
#endif