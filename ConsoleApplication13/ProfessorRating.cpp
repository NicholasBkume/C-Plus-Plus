#include "stdafx.h"
#include "ProfessorRating.h"


//constructor which initializes the private data members

ProfessorRating::ProfessorRating()
	:profName{ "" }, Easiness{ 0 }, Helpfulness{ 0 }, Friendliness{ 0 }, Clarity{ 0 } {
}

//function return the average rating


double ProfessorRating::calcRating()
{
	return ((Easiness + Helpfulness + Friendliness + Clarity) / 4.0);
}

//function displays the professor name and his/her rating

void ProfessorRating::print()

{
	cout << "Name: " << profName << endl;
	cout << "Easiness: " << Easiness << endl;
	cout << "Helpfulness: " << Helpfulness << endl;
	cout << "Clarity: " << Clarity << endl;
	cout << "Average Rating: " << calcRating() << endl;
}

//function assigns parameter value to each private data member.

void ProfessorRating::setData(string name, int easy, int help, int friendly, int clear)

{
	profName = name;
	Easiness = easy;
	Helpfulness = help;
	Friendliness = friendly;
	Clarity = clear;
}




/*ProfessorRating::ProfessorRating(string profName, int Easiness, int Helpfulness, int Friendliness, int Clarity)
	:profName{ "name" }, Easiness{ 0 }, Helpfulness{ 0 }, Friendliness{ 0 }, Clarity{ 0 } {
}

*/
/*
ProfessorRating::ProfessorRating(string profName, int Easiness, int Helpfulness, int Friendliness, int Clarity)

{
	profName = "name";
	Easiness = 0;
	Helpfulness = 0;
	Friendliness = 0;
	Clarity = 0;
}
*/

