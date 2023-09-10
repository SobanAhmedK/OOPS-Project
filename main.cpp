#include <iostream>
#include "ResturnatClass.h"
#include "CustomerClass.h"
#include "RiderClass.h"
#include "Admin.h"
#include <string>
using namespace std;

//main class
int main()

{
 // Object of class admin is created in order to call all the functions created in base and derived classes
 Admin A;
 A.login_info_resturant();
 A.menuu();
 A.display_menu();
 A.update_menu();
 A.updated_menu();
 A.del_food();
 A.Food_Delivery_Status();
 A.login_info_customer();
 A.display_food_details();
 A.Place_Order();
 A.Cart();
 A.update_cart();
 A.updated_cart();
 A.bill();
 A.Cancel_Order();
 A.Checkout();
 A.Mode_Of_Payment();
 A.Delivery_Status();
 A.login_info_Rider();
 A.View_Order();
 A.Delivery_Order();
 A.Update_Delivery_Status();
 A.Cash_Delivery_Update();
 A.login_info_Admin();
 A.Manage_Vendors();
 A.Manage_Food();
 A.Manage_Customers();
 A.Manage_food_order_details();
 A.Manage_Payment_details();
 A.Manage_Riders();
 return 0;
 // program terminates
}

