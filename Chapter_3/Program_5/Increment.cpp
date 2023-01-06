// Prefix increment and postfix increment operators.
#include <iostream>

int main() {
   // demonstrate postfix increment operator
   unsigned int c{5}; // initializes c with the value 5
   std::cout << "c before postincrement: " << c << std::endl; // prints 5
   std::cout << "    postincrementing c: " << c++ << std::endl; // prints 5
   std::cout << " c after postincrement: " << c << std::endl; // prints 6

   std::cout << std::endl; // skip a line

   // demonstrate prefix increment operator
   c = 5; // assigns 5 to c  
   std::cout << " c before preincrement: " << c << std::endl; // prints 5
   std::cout << "     preincrementing c: " << ++c << std::endl; // prints 6
   std::cout << "  c after preincrement: " << c << std::endl; // prints 6
}