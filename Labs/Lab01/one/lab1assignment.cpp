#include <iostream> //for io
#include <stdio.h>  //for io c style



//at least 50 employees
typedef struct employee
{
    char name[16];//allocated 16 spaces for character array
    int idNum;
}employee;

//at least 50 customers
typedef struct customer
{
    char name[16];//allocated 16 spaces for characeter array
    int idNum;
    double acctBal;
}customer;

int main()
{

    //create pointers to structs and allocate memory with calloc so that memory is cleaned 
    //employee and customer type pointers set = derefrenced type, so that the struct can be allotted space
    //of 50 times the sizeof each struct 
    employee *empPTR = (employee *)calloc(50, sizeof(employee));
    customer *cusPTR = (customer *)calloc(50, sizeof(customer));



    char ch;//declared character in order to place the first character scanned into this variable
    printf("123456789012345678901234567890123456789012345678901234567890\n");//formatting 
    //this loop scans the first character in the file
    //assigns it to ch and continues unless the end of file is reached
    while(scanf("%c", &ch) != EOF) 
    {
	//switch statements to compare the first character scanned per line
	//with cases for the letters e c and t respectively    
        switch(ch)
        {
            //if a e is hit then the next number is saved into the employ id num,
	    // followed by the next string saved into the employee name spot
            case 'e':
            {
                int i = 0;
                scanf("%d %s", &empPTR[i].idNum, empPTR[i].name);
             break;
            }
	    //if a c is hit then the customers id number is saved along with the name 
	    //and the account balance
            case 'c':
            {
                int i = 0;
                scanf("%d %s %lf", &cusPTR[i].idNum, cusPTR[i].name,&cusPTR[i].acctBal);
	    }    
	    //when a t is hit this denotes a transaction has taken place after all of the
	    //names and ids have been filled
	    //the first number grabs the corresponding customer id num
	    //the second number grabs the corresponing employee id num
	    //the following character denotes either a withdraw or deposit and updates accordingly
	    //based off the next amount 
	    //I could not figure out how to not just print the last customer and employee for every transaction
            case 't':
            {
                int i = 0;
		char ch1, ch2;
		double transAmt;
                scanf("%d %d %c %c %lf", &cusPTR[i].idNum, &empPTR[i].idNum, &ch1, &ch2, &transAmt);
			if(ch1 == 'w')
			{
				cusPTR[i].acctBal -= transAmt;
				printf("%15s %15s -$%7.2lf $ %8.2lf\n", cusPTR[i].name, empPTR[i].name, transAmt, cusPTR[i].acctBal);
			}
			else if(ch1 == 'd')
			{
				cusPTR[i].acctBal += transAmt;
				printf("%15s %15s +$%7.2lf $ %8.2lf\n", cusPTR[i].name, empPTR[i].name, transAmt, cusPTR[i].acctBal);
			}
            break;
            }
        
        }
    }

 
        
    
   
    
    return 0;
}
