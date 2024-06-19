// InheritanceExample.cpp : Demonstrate the usage of inheritance using the examples in Gaddis's Chapter 15 examples.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include "GradedActivity.h"
#include "FinalExam.h"

using namespace std;

int main()
{
	double testScore;  // To hold a test score

	// Create a GradedActivity object for the test.
	GradedActivity test1;

	// Get a numeric test score from the user.
	cout << "Enter your numeric test score: ";
	cin >> testScore;	// ex. 78

	// Store the numeric score in the test object.
	test1.setScore(testScore);
	cout << "The exam score is " << test1.getScore() << endl;

	// Display the letter grade for the test.
	cout << "The grade for that test is " << test1.getLetterGrade() << endl;

	system("pause");  cout << "********************" << endl;

	int questions; // Number of questions on the exam
	int missed;    // Number of questions missed by the student

	// Get the number of questions on the final exam.
	cout << "How many questions are on the final exam? ";
	cin >> questions;	// ex. 16

	// Get the number of questions the student missed.
	cout << "How many questions did the student miss? ";
	cin >> missed;		// ex. 5

	// Define a FinalExam object and initialize it with the values entered.
	FinalExam test2(questions, missed);

	// Display the test results.
	cout << setprecision(2) << fixed;
	cout << "\nEach question counts " << test2.getPointsEach() << " points.\n";
	cout << "The adjusted exam score is " << test2.getScore() << endl;
	cout << "The exam grade is " << test2.getLetterGrade() << endl;

	return 0;
}
