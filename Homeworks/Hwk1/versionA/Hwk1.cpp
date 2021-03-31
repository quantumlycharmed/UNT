/*  Name: Shane Clark
    student ID: 11008558
    Title: HW #1
    source: CSCE 1040.001
    Date: 8/25/2020
*/


#include <iostream> //for io
#include <stdio.h> //for io c style
#include "student.h" //student header file
#include <cstring> //for c strings
#include "bubble.h"//for bubble sort

using namespace std;

// class stats structure with data
struct classStats {
    float mean;
    float min;
    float max;
    float median;
    char *name;
};


int main()
{
    //create an array of 19 pointers to structure student
    student *array[19];

    //loop to allocate space for these 1 at a time, loop 19 times
    //also adding in the space needed for the character pointers in
    //student struct of 15 to allocate a little over what I should need
    
    for(int i = 0; i < 19 ; i++)
    {
        array[i] = (student *)calloc(1,sizeof(student)); //allocation of space for array of pointers
        array[i]->first = (char *)calloc(15, sizeof(char)); //allocation of space for character array in student struct first name
        array[i]->last = (char *)calloc(15, sizeof(char));//space for char array in student struct for last name

    }
  
    //classStats variable
    struct classStats CS;

    //allocation of space for CSCE1040
    CS.name = (char *)calloc(10, sizeof(char));

    //scans first string saves to CS.name which is the classStats name member
    scanf("%s", CS.name);
 
   
    //for loop that loops until 19th line starting at 0
    //saves data to student structure 
    //calculates mean based off basic math a + b + c / 3.00
    for(int i = 0; i < 19; i++)
    {
        scanf("%s %s %d %d %d \n", array[i]->first, array[i]->last, &array[i]->exam1, &array[i]->exam2, &array[i]->exam3); //input
        array[i]->mean = (((array[i]->exam1) + (array[i]->exam2) + (array[i]->exam3)) / 3.000); //calculation of mean
    }
  
    //formatting template 
    printf("\n123456789012345678901234567890123456789012345678901234567890\n");

    
    //bubble sort
    //this needs to be done after csce1040 is assigned but before printing data from array
    bubble(array, 19);//called bubble function passed my array of size 19 to it based off parameters
    float temp;//declared a temp variable to calculuate the mean based off of the means of the array
               //so 19 "means" summed up to equal the temp variable
    for(int i = 0; i < 19; i++)
      {
        temp += array[i]->mean;
      }
    //classStats mean is the final mean divided by the class size
    //then I assigned min, max and median based off locations in array which is singluar compared to total means
    CS.mean = temp/19.00;
    CS.min = array[0]->mean;
    CS.max = array[18]->mean;
    CS.median = array[9]->mean;

    //initial print statement that houses the class data based off what is saved into the CS Struct with formatting 
    printf("%s MEAN:%7.2f MIN:%7.2f MAX:%7.2f MEDIAN:%7.2f  \n",CS.name, CS.mean, CS.min, CS.max, CS.median);

    //main print statement that houses the data of the array utilitzing a for loop 
    for(int i = 0; i < 19; i++)
    {
      printf("%12s%12s%7.2f\n", array[i]->first, array[i]->last, array[i]->mean);
    }

    //free(array);
return 0;
}
