// Create and test Student objects.
#include <iostream> 
#include "Student.h"

int main() {
   Student account1{"Jane Green", 93};
   Student account2{"John Blue", 72}; 

   std::cout << account1.getName() << "'s letter grade equivalent of " 
      << account1.getAverage() << " is: " 
      << account1.getLetterGrade() << "\n";  
   std::cout << account2.getName() << "'s letter grade equivalent of " 
      << account2.getAverage() << " is: "
      << account2.getLetterGrade() << std::endl;
}