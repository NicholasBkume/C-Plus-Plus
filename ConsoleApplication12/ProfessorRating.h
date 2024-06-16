#pragma once
class ProfessorRating {
private:
	string profName;
	int Easiness;
	int Helpfulness;
	int Friendliness;
	int Clarity;

public:

	ProfessorRating();

	double calcRating();
	void print();

	void setData(string name, int easy, int help, int friendly, int clear);
};