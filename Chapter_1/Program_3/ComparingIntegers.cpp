// Comparing integers using if statements, relational/equality operators.
#include <iostream>

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main() {
   int number1{0};
   int number2{0}; 

   cout << "Enter 1st integer to compare: ";
   cin >> number1;
   
   cout << "Enter 2nd integer to compare: ";
   cin >> number2;

   if (number1 == number2){
      cout << number1 << " == " << number2 << endl;
   }

   if (number1 < number2) {
      cout << number1 << " != " << number2 << endl;
      cout << number1 << " < " << number2 << endl;
   }

   if (number1 > number2) {
      cout << number1 << " != " << number2 << endl;
      cout << number1 << " > " << number2 << endl;
   }
}