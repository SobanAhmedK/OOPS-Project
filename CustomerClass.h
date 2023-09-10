#include<iostream>
#include "ResturnatClass.h"
using namespace std;
// class customer is created that is derived from parent class resturant
class Customer : virtual public Resturant
{
public:
 string Customer_userName, Customer_loginName;
 string Customer_userPassword, Customer_loginPassword;

 int pricee[15];
// create account and login function is created for customers
 void login_info_customer()
 {
 cout << "*******************Customer's Information***************" << endl;

 int loginAttempt = 0;
 while (loginAttempt < 3)
 {
 cout << "Please enter your user name: ";
 cin >> Customer_userName;
 cout << "Please enter your user password: ";
 cin >> Customer_userPassword;
 cout << endl;

 cout << "Enter login name: ";
 cin >> Customer_loginName;
 cout << "Enter login password: ";
 cin >> Customer_loginPassword;
 cout << endl;

 if (Customer_userName == Customer_loginName && Customer_userPassword == Customer_loginPassword)
 {
 cout << "Welcome" << Customer_loginName << endl;
 break;
 }

 else
 {
 cout << "Invalid login attempt. Please try again.\n"
 << '\n';
 loginAttempt++;
 }
 }
 if (loginAttempt == 3)
 {
 cout << "Too many login attempts! The program will now terminate.";
 }

 cout << "Thank you for logging in.\n";
 }
 // following function is created to display menu for customers
 void display_food_details()
 {
 cout << "*************VIEW FOOD DETAILS*****************" << endl;

 for (int i = 0; i < 15; i++)
 {
 cout << menu[i] << " | " << price[i] << endl;
 }
 }
// following function is created to take user's chosed item that he want to order
 void Place_Order()
 {

 cout << "*****************Place your order here****************" << endl;
 cout << "Enter your order and respective price or press * and 1 to stop" << endl;

 for (int j = 0; j < 15; j++)
 {
 cout << "Item name :" << endl;
 cin >> pick[j];
 cout << " Price: " << endl;
 cin >> pricee[j];
 if (pick[j] == "*" && pricee[j] == 1)
 {
 continue;
 break;
 }
 }
 cout << " ___ Yours Order status___" << endl;
 cout << "*******************************" << endl;
 for (int i = 0; i < 15; i++)
 {

 if (pick[i] == menu[i] && pick[i] != "*" && price[i] == pricee[i])
 {
 cout << "Item : " << pick[i] << " Price :" << pricee[i] << endl;
 }
 else if (pick[i] != menu[i] && pick[i] != "*")
 {
 cout << "Item: " << pick[i] << " Not found in the menu " << endl;
 }
 else if (price[i] != pricee[i] && pick[i] != "*" && pricee[i] != 1)
 {
 cout << " Price doesn't match : " << endl;
 }
 }
 }
 // following function is created to displar cart
 void Cart()
 {
 cout << "**************showing your cart*******************8:" << endl;
 for (int i = 0; i < 15; i++)
 {
 if (pick[i] != "*")
 {

 cout << "Item :" << pick[i] << endl;
 }
 }
 }
// following function is created to update cart
 void update_cart()
 {

 cout << "********************UPDATING CART****************" << endl;
 string updatecart, updatedcart;
 int updatePrice, updatedPrice;
 string updation_of_Cart;
 cout << "If you want to update your Cart press yes otherwise press no" << endl;
 cin >> updation_of_Cart;
 if (updation_of_Cart == "yes")
 {

 cout << "Enter the item you want to update " << endl;
 cin >> updatecart;
 cout << "respective price :" << endl;
 cin >> updatePrice;
 cout << "Enter the new food item " << endl;
 cin >> updatedcart;
 cout << "respective price: " << endl;
 cin >> updatedPrice;
 for (int i = 0; i < 15; i++)
 {
 if (updatecart == pick[i] && updatePrice == pricee[i])
 {
 pick[i] = updatedcart;
 pricee[i] = updatedPrice;
 }
 }
 }
 else if (updation_of_Cart == "no")
 {
 cout << "There is no need to update cart" << endl;
 }
 else
 ;
 {
 cout << " You have no such item in cart! " << endl;
 }
 }
 // following function is created to display updated cart
 void updated_cart()
 {
 cout << "********************UPDATED CART****************" << endl;
 for (int i = 0; i < 15; i++)
 {
 cout << " Item name : " << pick[i] << endl;
 }
 cout << "*************-----------------------------------------****************" << endl;
 }
 // following function is created to cancel order if customer is willing
 void Cancel_Order()
 {
 cout << "******************CANCELLETION OF ORDER****************" << endl;
 string Confirmation;
 cout << "If you want to save order press save order otherwise press cancel order" << endl;
 cin >> Confirmation;
 if (Confirmation == "save_order")
 {
 cout << "Your order has been saved" << endl;
 }
 else if (Confirmation == "cancel")
 {
 cout << "Your order has been cancelled" << endl;
 }
 }
 //// following function is created for checkingout
 void Checkout()
 {
 cout << "********************CHECKING OUT*****************" << endl;
 string choose;
 cout << "IF you want to checkout press checkout otherwise press viewcart" << endl;
 cin >> choose;
 if (choose == "checkout")
 {
 cout << "Your food is ready to cook,moving towards payment method " << endl;
 }
 else if (choose == "viewcart")
 {
 Cart();
 }
 }
// following function is created to user about paying method
 void Mode_Of_Payment()
 {
 cout << "*****************Payment Method******************" << endl;
 string Payment_Mode;
 int Card_Number;
 int Digits;
 cout << "If you want to pay through cash press cash on delivery otherwise press online payment" << endl;
 cin >> Payment_Mode;
 if (Payment_Mode == "Cash_on_Delivery")
 {
 cout << "Rider will recieve cash on delivery" << endl;
 }
 else if (Payment_Mode == "online_payment")
 {
 cout << "Enter your card Information" << endl;
 cout << "Enter your card Number" << endl;
 cin >> Card_Number;
 cout << "Enter 3 digits written on back of your card" << endl;
 cin >> Digits;
 cout << "Payment has been paid,Thank you!" << endl;
 }
 }
 // following function is created to calculate and display bill
 void bill()
 {
 cout << "*********************DISPLAYING BILL********************" << endl;
 int add = 0;
 int sum = 0;
 for (int i = 0; i < 15; i++)
 {
 add = sum + pricee[i];
 sum += pricee[i];
 }
 cout << "********************************" << endl;
 cout << " Dear customer your Bill is : " << add - 1 << "Rs" << endl;
 }
 // following function is created to update about delivery status
 void Delivery_Status()
 {
 if (status == "ready")
 {
 cout << "*******************************" << endl;
 cout << " status of delivery : " << endl;
 cout << " Rider is on his way" << endl;
 }
 else if (status == "notready")
 {
 cout << "*******************************" << endl;
 cout << " Status of delivery : " << endl;
 cout << " kindly Wait! Food is not cooked yet" << endl;
 }
 }
};