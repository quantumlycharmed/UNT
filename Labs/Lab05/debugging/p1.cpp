#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble(int, char*[]);
main()
{
    int i;
    int	acount;
    char *array[10];
    char strng[] = "this is the ten token sentence that should be sorted";
    char *tokenptr;

    tokenptr = strtok(strng," ");
    acount = 0;
    while (tokenptr != NULL)
	{array[acount] = tokenptr;
	tokenptr = strtok(NULL," ");
	acount++; }
    for (i=1; i < 10; i++)
	printf("%s\n", array[i]);
    bubble(10,array); 
    printf("\nsorted list\n");
    for (i=1; i < 10; i++)
	printf("%10s   length is %d \n", array[i], strlen(array[i]));
}

void bubble(int size, char *arr[]) 
{
    void swap(char *[], int, int);
    int j, count;
    for(j=1; j<size; j++)	
	{for (count = 0;count < size-1; count++)
		if(strcmp(arr[count],arr[count+1])>0)
			swap(arr,count,count+1);
	}
}

void swap(char *ptr1[], int first, int second)
{
    char *temp;
    temp = ptr1[first];
    ptr1[first] = ptr1[second];
    ptr1[second] = temp;
}
