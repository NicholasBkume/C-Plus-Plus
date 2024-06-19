// InheritanceExample.cpp : Demonstrate the usage of inheritance using the examples in Gaddis's Chapter 15 examples.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

//VERSION 1
#include "FinalExam.h"
//VERSION 2
#include "GradedActivity.h"
//VERSION 3
#include "CurvedActivity.h"
//VERSION 4
#include "PassFailExam.h"

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

	// VERSION 2
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

	// VERSION 3
	system("pause");  cout << "********************" << endl;
	double numericScore;  // To hold the numeric score
	double percentage;    // To hold curve percentage

	// Define a CurvedActivity object.
	CurvedActivity test3;

	// Get the unadjusted score.
	cout << "Enter the student's raw numeric score: ";
	cin >> numericScore;	// ex. 87

	// Get the curve percentage.
	cout << "Enter the curve percentage for this student: ";
	cin >> percentage;		// ex. 1.06

	// Send the values to the exam object.
	test3.setPercentage(percentage);
	test3.setScore(numericScore);

	// Display the grade data.
	cout << fixed << setprecision(2) << fixed;
	cout << "The raw score is " << test3.getRawScore() << endl;
	cout << "The curved score is " << test3.getScore() << endl;
	cout << "The curved grade is " << test3.getLetterGrade() << endl;

	//VERSION 4
	system("pause");  cout << "********************" << endl;
	//int questions;        // Number of questions
	//int missed;           // Number of questions missed
	double minPassing;    // The minimum passing score

	// Get the number of questions on the exam.
	cout << "How many questions are on the exam? ";
	cin >> questions;	// ex. 100

	// Get the number of questions the student missed.
	cout << "How many questions did the student miss? ";
	cin >> missed;	// ex. 25

	// Get the minimum passing score.
	cout << "Enter the minimum passing score for this test: ";
	cin >> minPassing;	// ex. 60

	// Define a PassFailExam object.
	PassFailExam test4(questions, missed, minPassing);

	// Display the test results.
	cout << setprecision(2) << fixed;
	cout << "\nEach question counts " << test4.getPointsEach() << " points.\n";
	cout << "The minimum passing score is " << test4.getMinPassingScore() << endl;
	cout << "The student's exam score is " << test4.getScore() << endl;
	cout << "The student's grade is " << test4.getLetterGrade() << endl;

	return 0;
}
