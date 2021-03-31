#include "v4.h"

int main()
{

    int i;
    int num;
    studentRecord *student;

    // the difference between v3 and v4 verions is that in this one (v4)
    // we're dynamically allocating (yes, with malloc) the space needed for
    // a studentRecord structure.

    scanf("%d",&num);
    for(i = 0; i < num; i++)
    {
        student = (studentRecord *) malloc (sizeof(studentRecord));
        scanf("%s %s %s %d %d %d",student->lastName, student->firstName, 
               student->idNum, &student->exam1, &student->exam2, 
               &student->exam3);

        student->avg = (student->exam1 + student->exam2 + student->exam3)/3.;
        if( student->avg >= 90.0 ) student->grade = 'A';
        else if( student->avg >= 80.0 ) student->grade = 'B';
        else if( student->avg >= 70.0 ) student->grade = 'C';
        else if( student->avg >= 60.0 ) student->grade = 'D';
        else student->grade = 'F';

        printf("%s, %s: %s, %s \n\t %4d %4d %4d %s %6.2f %s  %c\n",
               student->lastName, student->firstName, student->idNum, 
               "has exams scores of:", student->exam1, student->exam2, 
               student->exam3, "for an average of ", student->avg,
               " and a grade of ",student->grade); 
    }
    return 0; 
}
