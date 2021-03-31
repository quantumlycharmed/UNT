#include <stdio.h>
#include <stdlib.h>


// By including the definition of the new type, studentRecord, in a 
// .h file it can be easily included in any (every?) .c file in the 
// program.  The alternative, including the definition within .c file(s)
// would lead either to
//
//	1) the structure being known in only one file, OR
//
//      2) "compile" (well linker actually, but we're not ready for that
//         yet) errors for multiple defined studentRecord types due to the
//         same definition being in multiple .c files.

typedef struct {
        char lastName[30];
        char firstName[30];
        char idNum[9];
        int exam1;
        int exam2;
        int exam3;
        float avg;
        char grade;
    }studentRecord;

