//Name: Nicholas_Kume

// Assignment 1: Professor Rating

/*
The Computer Science Department is evaluating 5 professors to see which professor has the highest rating according to
student input.You will create a ProfessorRating class consisting of professor name and four ratings.The ratings are used to
evaluate Easiness, Helpfulness, Friendliness and Clarity.The value for each rating is in the range of 1 to 5, with 1 is the
lowest and 5 is the highest.
*/

//c.Create your class in a header file(ProfessorRating.h) with the above structures.Test your class with user interface in your main program. (** make sure to include your class in your main program)
//#include “ProfessorRating.h”

#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#ifndef _ProfessorRating_H_
#define _ProfessorRating_H_
using namespace std;

class ProfessorRating

{
private:
	string profName;
	int Easiness;
	int Helpfulness;
	int Friendliness;
	int Clarity;

public:
	
	//ProfessorRating(string profName, int Easiness, int Helpfulness, int Friendliness, int Clarity);
	ProfessorRating();
	double calcRating();
	void print();
	void setData(string name, int easy, int help, int friendly, int clear);
};
#endif