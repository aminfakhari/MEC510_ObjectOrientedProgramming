// Solving the class-average problem using sentinel-controlled iteration. 
#include <iostream>
#include <iomanip> // parameterized stream manipulators  

int main() {
   // initialization phase
   int total{0}; // initialize sum of grades
   unsigned int gradeCounter{0}; // initialize # of grades entered so far
   
   // processing phase
   // prompt for input and read grade from user
   std::cout << "Enter grade or -1 to quit: "; 
   int grade; 
   std::cin >> grade; 

   // loop until sentinel value read from user
   while (grade != -1)  {
      total = total + grade; // add grade to total
      gradeCounter = gradeCounter + 1; // increment counter 

      // prompt for input and read next grade from user
      std::cout << "Enter grade or -1 to quit: "; 
      std::cin >> grade; 
   }

   // termination phase
   // if user entered at least one grade...
   if (gradeCounter != 0) {
      // use number with decimal point to calculate average of grades
      double average{static_cast<double>(total) / gradeCounter};

      // display total and average (with two digits of precision)
      std::cout << "\nTotal of the " << gradeCounter 
         << " grades entered is " << total;
      std::cout << setprecision(2) << fixed; 
      std::cout << "\nClass average is " << average << std::endl; 
   } 
   else { // no grades were entered, so output appropriate message
      std::cout << "No grades were entered" << std::endl; 
   }
}