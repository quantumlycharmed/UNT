#ifndef FOODITEMH
#define FOODITEMH

#include <string>

using namespace std;

class FoodItem {
   public:
      FoodItem();// TODO: Declare default constructor
      void SetName(string itemName);
      void SetFat(double amountFat);
      void SetCarbs(double amountCarbs);
      void SetProtein(double amountProtein);
      
      FoodItem(string name, double fat, double carbs, double protein); 

      string GetName(string itemName);
       
      double GetFat(double fat);

      double GetCarbs(double carbs);

      double GetProtein(double protein);

      double GetCalories(double numServings);

      void PrintInfo();

   private:
      string name;
      double fat;
      double carbs;
      double protein;
};

#endif
