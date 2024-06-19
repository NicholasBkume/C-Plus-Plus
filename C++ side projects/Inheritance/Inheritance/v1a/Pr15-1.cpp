// This program demonstrates the GradedActivity class.
#include <iostream>
#include "GradedActivity.h"
using namespace std;

int main()
{
   double testScore;  // To hold a test score
   
   // Create a GradedActivity object for the test.
   GradedActivity test1;
   
   // Get a numeric test score from the user.
   cout << "Enter your numeric test score: ";
   cin >> testScore;
   
   // Store the numeric score in the test object.
   test1.setScore(testScore);
   
   // Display the letter grade for the test.
   cout << "The grade for that test is "
        << test1.getLetterGrade() << endl;
   
   return 0;
}