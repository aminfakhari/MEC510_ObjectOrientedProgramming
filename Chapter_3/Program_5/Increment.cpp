// Prefix increment and postfix increment operators.
#include <iostream>

int main() {
   unsigned int c{5}; // initializes c with the value 5
   std::cout << "c before postincrement: " << c << "\n"; // prints 5
   std::cout << "postincrementing c: " << c++ << "\n"; // prints 5
   std::cout << "c after postincrement: " << c << "\n"; // prints 6

   std::cout << "\n"; // skip a line

   c = 5; // assigns 5 to c  
   std::cout << "c before preincrement: " << c << "\n"; // prints 5
   std::cout << "preincrementing c: " << ++c << "\n"; // prints 6
   std::cout << "c after preincrement: " << c << std::endl; // prints 6
}