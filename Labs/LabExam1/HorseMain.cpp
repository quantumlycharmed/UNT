//HorseMain.cpp

#include <iostream>
#include <stdio.h>
#include <cstring>
#include "Horse.h"

using namespace std;

int main(){



Horse *array[4];

for(int i =0; i < 4; i++)
{
  array[i] = (Horse *)calloc(1,sizeof(Horse));//allocation of space for array of class pointers
  array[i]->setbreed() = (char*)calloc(20,sizeof(char));//allocation of space for 20 chararacter array for breed type
  array[i]->setname() = (char*)calloc(20,sizeof(char));//allocation of space for 20 character arrayt for name
  array[i]->setregID() = (char*)calloc(20,sizeof(char));
  array[i]->setdesc() = (char*)calloc(20, sizeof(char));
}

for(int i = 0; i < 4; i++)
{
  scanf("%s %f %s %c %c %s %s \n", array[i]->setbreed, &array[i]->setweight, array[i]->setname, array[i]->setgender, array[i]->setfixed, array[i]->setregID, array[i]->setdesc);
}



return 0;
}
