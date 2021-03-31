#include <stdio.h>

int main()
{
    struct studentRecord {
        char lastName[30];
        char firstName[30];
        char idNum[9];
        int exam1;
        int exam2;
        int exam3;
        float avg;
        char grade;
    }student;		// make a variable, student

    int i;
    int num;

    scanf("%d",&num);
    for(i = 0; i < num; i++)
    {
        scanf("%s %s %s %d %d %d",student.lastName, student.firstName, 
               student.idNum, &student.exam1, &student.exam2, &student.exam3);
        printf("%s, %s: %s, has scores of %4d %4d %4d\n",student.lastName,
               student.firstName, student.idNum, student.exam1, student.exam2,
               student.exam3); 
    }
    return 0; 
}
