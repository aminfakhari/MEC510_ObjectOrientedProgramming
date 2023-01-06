// Solving the class-average problem using counter-controlled iteration.
#include <iostream>

int main() {
   // initialization phase
   int total{0}; // initialize sum of grades entered by the user
   unsigned int gradeCounter{1}; // initialize grade # to be entered next

   // processing phase uses counter-controlled iteration
   while (gradeCounter <= 10) { // loop 10 times
      std::cout << "Enter grade: "; // prompt 
      int grade;
      std::cin >> grade; // input next grade
      total = total + grade; // add grade to total
      gradeCounter = gradeCounter + 1; // increment counter by 1
   } 

   // termination phase
   int average{total / 10}; // int division yields int result

   // display total and average of grades
   std::cout << "\nTotal of all 10 grades is " << total;
   std::cout << "\nClass average is " << average << std::endl;
}