// This program demonstrates a base class and a derived class.
#include <iostream>
#include <iomanip>
#include "FinalExam.h"

using namespace std;

int main()
{
   int questions; // Number of questions on the exam
   int missed;    // Number of questions missed by the student

   // Get the number of questions on the final exam.
   cout << "How many questions are on the final exam? ";
   cin >> questions;

   // Get the number of questions the student missed.
   cout << "How many questions did the student miss? ";
   cin >> missed;

   // Define a FinalExam object and initialize it with
   // the values entered.
   FinalExam test2(questions, missed);

   // Display the test results.
   cout << setprecision(2) << fixed;
   cout << "\nEach question counts " << test2.getPointsEach() << " points.\n";
   cout << "The exam score is " << test2.getScore() << endl;
   cout << "The exam grade is " << test2.getLetterGrade() << endl;

   return 0;
}
