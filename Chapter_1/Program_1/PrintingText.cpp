/* First Program in C++
Text-printing program. */
#include <iostream> // enables program to output data to the screen

// function main begins program execution
int main() {
   std::cout << "Welcome to C++!\n"; // display message

   std::cout << "Welcome to C++!" << std::endl; // display message; end line

   // Printing a line of text with multiple statements.
   std::cout << "Welcome ";
   std::cout << "to C++!\n";

   // Printing multiple lines of text with a single statement.
   std::cout << "Welcome\nto\n\nC++!\n";

   return 0; // indicate that program ended successfully
} // end function main