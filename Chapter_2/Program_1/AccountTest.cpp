// Creating and manipulating an Account object.
#include <iostream>
#include <string>
#include "Account.h"

int main() { 
   Account myAccount; // create Account object myAccount

   // show that the initial value of myAccount's name is the empty string
   std::cout << "Initial account name is: " << myAccount.getName();

   // prompt for and read name
   std::cout << "\nPlease enter the account name: ";
   std::string theName;
   std::getline(std::cin, theName); // read a line of text
   myAccount.setName(theName); // put theName in myAccount

   // display the name stored in object myAccount
   std::cout << "Name in object myAccount is: " << myAccount.getName() << std::endl;
}