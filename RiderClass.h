#include<iostream>
#include "CustomerClass.h"
using namespace std;


// class rider is derived from class customer
class Rider : virtual public Customer
{
public:
 string Rider_userName, RiderName;
 string Rider_userPassword, RiderPassword;
// create account and login function is created for customers
 void login_info_Rider()
 {
 cout << "*****************Rider's Information******************" << endl;
 int loginAttempt = 0;
 while (loginAttempt < 3)
 {
 cout << "Please enter your name: ";
 cin >> Rider_userName;
 cout << "Please enter your password: ";
 cin >> Rider_userPassword;
 cout << endl;
 cout << "Enter login name: ";
 cin >> RiderName;
 cout << "Enter login password: ";
 cin >> RiderPassword;
 cout << endl;
 if (Rider_userName == RiderName && Rider_userPassword == RiderPassword)
 {
 cout << "Welcome " << RiderName << endl;
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
 // following function is created to show customer's order to riders
 void View_Order()
 {
 cout << "********************Showing Order Details************************" << endl;
 updated_cart();
 }
 // following function is created to ask rider whether he is willing to deliver food or not
 void Delivery_Order()
 {
 cout << "*************Acceptance and Rejection of orders**************" << endl;
 string Acceptance, Address;
 cout << " If you want to accept order press yes otherwise press no" << endl;
 cin >> Acceptance;
 if (Acceptance == "yes")
 {
 cout << "Your order is accepted" << endl;
 cout << "ENter customer's address" << endl;
 cin >> Address;
 cout << "Rider is on his way to deliver food" << endl;
 }
 else if (Acceptance == "no")
 {
 cout << "Your order is not accepted" << endl;
 }
 }
 // following function is created to update about delivery status
 void Update_Delivery_Status()
 {
 cout << "**************Updating Delivery Status****************" << endl;
 string Delivery_Status;
 cout << "Updating about Delivery Status" << endl;
 cin >> Delivery_Status;
 if (Delivery_Status == "taken")
 {
 cout << "Rider is leaving from resturant to deliver your food" << endl;
 }
 else if (Delivery_Status == "not_taken")
 {
 cout << "The food is not ready yet" << endl;
 }
 }
// following function is created to update about cash recieved and returned by rider
 void Cash_Delivery_Update()
 {
 cout << "****************Cash_Delivery_Update*******************" << endl;
 bill();
 int Total_Bill, Cash_Taken, Cash_Returned;
 cout << "enter the customer total bill : " << endl;
 cin >> Total_Bill;
 cout << "enter the cash which is given by customer" << endl;
 cin >> Cash_Taken;
 Cash_Returned = Cash_Taken - Total_Bill;
 cout << "Pay back ammount : " << Cash_Returned << "Rs" << endl;
 cout << "Thankyou for availing our service" << endl;
 }
};