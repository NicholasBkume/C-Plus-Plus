//The Computer Science Department is evaluating 5 professors to see which professor has the highest rating according to
//student input.You will create a ProfessorRating class consisting of professor name and four ratings.The ratings are used to
//evaluate Easiness, Helpfulness, Friendliness and Clarity.The value for each rating is in the range of 1 to 5, with 1 is the
//lowest and 5 is the highest.

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class ProfessorRating {
private:
	string profName;
	int Easiness;
	int Helpfulness;
	int Friendliness;
	int Clarity;

public:

	ProfessorRating() {
		int Easiness;
		int Helpfulness;
		int Friendliness;
		int Clarity;
	};

	double calcRating() {
	return ((easiness + helpfulness + friendliness + clarity) / 4.0);

	}
	void print() {
	cout << profName << endl;

		double calcRating();
	}

	void setData(string name, int easy, int help, int friendly, int clear) {
		int easy = Easiness; int help = Helpfulness; int friendly = Friendliness; int clear = Clarity;
		

	}
	
};

int main() {

	const int NUM_PROFESSORS = 5;
	vector<ProfessorRating> csProfs(NUM_PROFESSORS);

}

void fillProfList(vector<ProfessorRating> profList) {};int getRating(string ratingType) {
};void displayHighestandLowestRating(vector<ProfessorRating> profList){
};