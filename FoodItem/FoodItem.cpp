#include "FoodItem.h"
#include <stdio.h>

FoodItem::FoodItem()
{
 name = "None";
 fat = 0.0;
 carbs = 0.0;
 protein = 0.0;
}// Define default constructor

 void FoodItem::SetName(string itemName){
name = itemName;}
 void FoodItem::SetFat(double amountFat){
fat = amountFat;}
 void FoodItem::SetCarbs(double amountCarbs){
carbs = amountCarbs;}
 void FoodItem::SetProtein(double amountProtein){
protein = amountProtein;}
 
FoodItem::FoodItem(string itemName, double amountFat, double amountCarbs, double amountProtein)
{
 name = itemName;
 fat = amountFat;
 carbs = amountCarbs;
 protein = amountProtein;
}
string FoodItem::GetName(string itemName) {
   return name;
}

double FoodItem::GetFat(double fat) {
   return fat;
}

double FoodItem::GetCarbs(double carbs) {
   return carbs;
}

double FoodItem::GetProtein(double protein) {
   return protein;
}

double FoodItem::GetCalories(double numServings) {
   // Calorie formula
   double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
   return calories;
}

void FoodItem::PrintInfo() {
   printf("Nutritional information per serving of %s:\n", name.c_str());
   printf("   Fat: %.2f g\n", fat);
   printf("   Carbohydrates: %.2f g\n", carbs);
   printf("   Protein: %.2f g\n", protein);
}
