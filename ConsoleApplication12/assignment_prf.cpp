#include "stdafx.h"
#include "ProfessorRating.h"

ProfessorRating::ProfessorRating() {
	int Easiness;
	int Helpfulness;
	int Friendliness;
	int Clarity;
}

double ProfessorRating::calcRating() {
	return ((easiness + helpfulness + friendliness + clarity) / 4.0);

}

void ProfessorRating::print(){
cout << profName << endl;

double calcRating();
}

void ProfessorRating::setData(string name, int easy, int help, int friendly, int clear) {
	int easy = Easiness; int help = Helpfulness; int friendly = Friendliness; int clear = Clarity;

}