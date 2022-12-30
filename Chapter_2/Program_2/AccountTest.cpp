// Using the Account constructor to initialize the name data
// member at the time each Account object is created.
#include <iostream>
#include "Account.h"

int main() { 
   // create two Account objects
   Account account1{"Jane Green"};
   Account account2{"John Blue"}; 

   // display initial value of name for each Account
 std::cout << "account1 name is: " << account1.getName() << std::endl;
 std::cout << "account2 name is: " << account2.getName() << std::endl;
}