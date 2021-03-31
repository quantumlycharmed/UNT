#include "FoodItem.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
   FoodItem FoodItem1;

   string itemName;
   double amountFat, amountCarbs, amountProtein;

   cin >> itemName;
   cin >> amountFat;
   cin >> amountCarbs;
   cin >> amountProtein;

   FoodItem FoodItem2 = FoodItem(itemName, amountFat, amountCarbs, amountProtein);

   double numServings;
   cin >> numServings;

   FoodItem1.PrintInfo();
   printf("Number of calories for %.2f serving(s): %.2f\n", numServings,
                       FoodItem1.GetCalories(numServings));
   cout << endl << endl;

   FoodItem2.PrintInfo();
   printf("Number of calories for %.2f serving(s): %.2f\n", numServings,
                       FoodItem2.GetCalories(numServings));

   return 0;
}
