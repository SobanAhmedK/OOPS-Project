#include <iostream>
using namespace std;
#include "RiderClass.h"


// class admin is derived from class rider
class Admin : public Rider
{
private:
 string Admin_userName, AdminName;
 string Admin_userPassword, AdminPassword;

public:
// create account and login function is created for admin
 void login_info_Admin()
 {
 cout << "**********************ADMIN'S DETAILS******************" << endl;
 int loginAttempt = 0;
 while (loginAttempt < 3)
 {
 cout << "Please enter your name: ";
 cin >> Admin_userName;
 cout << "Please enter your password: ";
 cin >> Admin_userPassword;
 cout << endl;
 cout << "Enter login name: ";
 cin >> AdminName;
 cout << "Enter login password: ";
 cin >> AdminPassword;
 cout << endl;
 if (Admin_userName == AdminName && Admin_userPassword == AdminPassword)
 {
 cout << "Welcome " << AdminName << endl;
 break;
 }
 else
 {
 cout << "Invalid login attempt. Please try again.\n"
 << '\n';
 loginAttempt++;
 }
 }
 }
 // following function is created to manage vendors
 void Manage_Vendors()
 {
 cout << "**********************MANAGING VENDORS********************" << endl;
 string Manage;
 string Authentication;
 cout << "If you want to manage vendors press yes otherwise press no" << endl;
 cin >> Manage;
 cout << "Checking if vendor's information is correct or not" << endl;
 cin >> Authentication;
 if (Authentication == "correct")
 {
 cout << "This vendor is eligible for vending on Food On Wheels" << endl;
 }
 else if (Authentication == "notcorrect")
 {
 cout << "This vendor is not eligible for vending on Food On Wheels" << endl;
 }
 }
// following function is created to manage food
 void Manage_Food()
 {
 cout << "********************MANAGING FOOD*******************" << endl;
 string Managefood;
 cout << "If you want to manage food press yes otherwise press no" << endl;
 cin >> Managefood;
 if (Managefood == "yes")
 {
 update_menu();
 del_food();
 }
 else if (Managefood == "no")
 {
 cout << "The food is managed already" << endl;
 }
 }
// following function is created to manage customers
 void Manage_Customers()
 {
 cout << "*******************Managing Customers*****************" << endl;

 string Customer_userName, Customer_loginName;
 string Customer_userPassword, Customer_loginPassword;

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
 cout << "Authentication is done , You are allowed to proceed ahead" << endl;
 cout << "Welcome " << Customer_loginName << endl;
 }

 else
 {
 cout << "Invalid account! please provide correct information" << endl;
 }
 }
 // following function is created to manage food order details
 void Manage_food_order_details()
 {
 cout << "**********Managing_food_order_details****************" << endl;
 string Manage_details;
 cout << "If you want to manage food order details press yes otherwise press no" << endl;
 cin >> Manage_details;
 if (Manage_details == "yes")
 {
 update_cart();
 Cancel_Order();
 }
 else if (Manage_details == "no")
 {
 cout << "The food order is managed already" << endl;
 }
 }
 // following function is created to manage payment details
 void Manage_Payment_details()
 {
 cout << "****************Managing payment details*****************" << endl;
 string Manage_Payment;
 cout << "If you want to manage payment details press yes or no" << endl;
 cin >> Manage_Payment;
 if (Manage_Payment == "yes")
 {
 bill();
 Cash_Delivery_Update();
 }
 else if (Manage_Payment == "no")
 {
 cout << "The methods for payment of order is managed already" << endl;
 }
 }
// following function is created to manage riders
 void Manage_Riders()
 {
 cout << "********************Managing Riders*******************" << endl;
 if (Rider_userName == RiderName && Rider_userPassword == RiderPassword)
 {
 cout << "Authentication is done , You are allowed to proceed ahead" << endl;
 }
 else if (Rider_userName != RiderName && Rider_userPassword != RiderPassword)
 {
 cout << "Invalid account! please provide correct information" << endl;
 }
 }
};