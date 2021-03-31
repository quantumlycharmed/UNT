#include <iostream>
#include <vector>

#include "Horse.h"
#include "Animal.h"

using namespace std;
int main()
{
    //3 horses allocated 
    vector<Animal*>horseList(3);

    cout << "Please enter the information for each horse followed by an enter." << endl;
    cout << "Horse Breed: " << endl;
    cout << "Horse Weight: " << endl;
    cout << "Horse Name: " << endl;
    cout << "Horse Gender: " << endl;
    cout << "Horse Spayed or Neutered: " << endl;
    cout << "Horse Registration ID: " << endl;
    cout << "Horse Color Description: " << endl;

    
    
    return 0;
}