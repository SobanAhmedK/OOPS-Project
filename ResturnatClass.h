#include<iostream>
using namespace std;

// Base class resturant is created
class Resturant
{
private:
 string Resturant_userName, ResturantName;
 string Resturant_userPassword, ResturantPassword;

public:
 string pick[15];
 string status;
 string menu[15];
 int price[15] = {0};
// create account and login function is created
 void login_info_resturant()
 {
 int loginAttempt = 0;
 while (loginAttempt < 3)
 {
 cout << "Please enter your resturant name: ";
 cin >> Resturant_userName;
 cout << "Please enter your resturant password: ";
 cin >> Resturant_userPassword;
 cout << endl;
 cout << "Enter login name: ";
 cin >> ResturantName;
 cout << "Enter login password: ";
 cin >> ResturantPassword;
 cout << endl;
 if (Resturant_userName == ResturantName && Resturant_userPassword == ResturantPassword)
 {
 cout << "************Welcome TO " << ResturantName << "******************" << endl;
 break;
 }
 else
 {
 cout << "Invalid login attempt. Please try again.\n"
 << '\n';
 loginAttempt++;
 }
 }
 cout << "*************-----------------------------------------****************" << endl;
 }
 // function menu is created in order to take menu as input from resturant
 void menuu()
 {
 cout << "--------------------------ENTER MENU----------------------------" << endl;
 for (int i = 0; i < 15; i++)
 {
 cout << "Enter the item name : " << endl;
 cin >> menu[i];
 cout << "Enter the price of the item : " << endl;
 cin >> price[i];
 }
 }
 // following function is created to display menu
 void display_menu()
 {
 cout << "--------------------DISPLAYING MENU-------------------" << endl;
 for (int i = 0; i < 15; i++)
 {
 cout << " Item name : " << menu[i] << "|"
 << " Price: " << price[i] << "Rs" << endl;
 }
 cout << "*************-----------------------------------****************" << endl;
 }
 // following function is created to update menu
 void update_menu()
 {
 string updation;
 cout << "If you want to update your menu press yes otherwise press no" << endl;
 cin >> updation;
 if (updation == "yes")
 {
 cout << "------------------------Updating Menu-----------------" << endl;
 string updateFood, updatedFood;
 int updatePrice, updatedPrice;
 cout << "Enter the food you want to update " << endl;
 cin >> updateFood;
 cout << "respective price :" << endl;
 cin >> updatePrice;
 cout << "Enter the new food item " << endl;
 cin >> updatedFood;
 cout << "respective price: " << endl;
 cin >> updatedPrice;
 for (int i = 0; i < 2; i++)
 {
 if (updateFood == menu[i] && updatePrice == price[i])
 {
 menu[i] = updatedFood;
 price[i] = updatedPrice;
 }
 }
 }
 else if (updation == "no")
 {
 cout << "There is no need to update menu" << endl;
 }
 }
 // following function is created to display updated menu
 void updated_menu()
 {
 for (int i = 0; i < 15; i++)
 {
 cout << " Item name : " << menu[i] << "|"
 << " Price: " << price[i] << endl;
 }
 cout << "*************-----------------------------------------****************" << endl;
 }
// following function is created to delete unwanted items in menu
 void del_food()
 {
 string Deletion;
 cout << "If you want to delete an item press yes othewise no" << endl;
 cin >> Deletion;
 if (Deletion == "yes")
 {
 cout << "---------------DELETING MENU------------------" << endl;
 string element;
 int price1, total = 15, i, j, found = 0;

 cout << "\nEnter item to Delete: ";
 cin >> element;
 cout << "\nEnter respective price : ";
 cin >> price1;
 for (i = 0; i < total; i++)
 {
 if (menu[i] == element && price[i] == price1)
 {
 for (j = i; j < (total - 1); j++)
 menu[j] = menu[j + 1];
 price[j] = price[j + 1];
 found++;
 i--;
 total--;
 }
 }
 if (found == 0)
 cout << "\nElement doesn't found in the Array!";
 else
 {
 cout << "Element Deleted Successfully!" << endl;
 cout << "Here are the remaining items" << endl;
 for (i = 0; i < total; i++)
 {
 cout << menu[i] << " " << price[i] << endl;
 }
 cout << endl;
 }
 }

 else if (Deletion == "NO")
 {
 cout << "No need of deleting any item" << endl;
 }
 }
// following function is created to show delivery status
 void Food_Delivery_Status()
 {
 cout << "***************Delivery Status*************" << endl;
 cout << "What is the status of food delivery" << endl;
 cin >> status;
 if (status == "ready")
 {
 cout << "Rider is on his way" << endl;
 }
 else if (status == "notready")
 {
 cout << "Food is not cooked yet" << endl;
 }
 }
};