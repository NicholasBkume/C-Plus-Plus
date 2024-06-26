
#include "stdafx.h"
#include <iostream>
#include"ProfessorRating.h"
#include <vector>
#include <string>

int getRating(string ratingType);
void fillProfList(vector<ProfessorRating>profList);
void displayHighestAndLowestRating(vector<ProfessorRating>profList);
void displayAverageRating(vector<ProfessorRating>profList);

using namespace std;
/*
d. In your main program, create a vector of ProfessorRating which holds a list of 5 professor ratings.
const int NUM_PROFESSORS=5;
vector<ProfessorRating> csProfs(NUM_PROFESSORS);
*/


const int NUM_PROFESSORS = 5;

int main()

{

	vector<ProfessorRating>csProfs(NUM_PROFESSORS);

	fillProfList(csProfs);

	displayHighestAndLowestRating(csProfs);

	displayAverageRating(csProfs);

	cin.clear();
	cin.ignore();
	cin.get();
	
	return 0;
}

/*
Create a display function to show the average of ALL ratings of the professors using the class’s calcRating() function. Call this display function from your 
main() program to output the information.
*/

void displayAverageRating(vector<ProfessorRating>profList)

{

	cout << "Professor Individual Ratings\n\n";

	cout << "Name\t\t\tEasiness\tHelpfulness\tFriendliness\tClarity\Average_Rating" << endl;

	for (int i = 0; i < NUM_PROFESSORS; i++)

	{


		cout << profList.at(i).calcRating() << endl;


	};

}

/*
Create a function to fill the vector with professor names and each rating.
*/

void fillProfList(vector<ProfessorRating>profList)

{

	string name;

	int easy1, help1, friendly1, clear1;

	for (int i = 0; i < NUM_PROFESSORS; i++)

	{
		cout << "----------------------------------------" << endl;
		
		cout << "Enter the name of Prof: ";

		cin >> name;
cout << "----------------------------------------" << endl;
		easy1 = getRating("Easiness");

		help1 = getRating("Helpfulness");

		friendly1 = getRating("Friendliness");

		clear1 = getRating("Clarity");

		

	profList[i].setData(name, easy1, help1, friendly1, clear1);

	}
	cout << "----------------------------------------" << endl;
};
/*
Create a generic function to get each rating.
Call this function when populating the professor’s information above.
int getRating(string ratingType), where ratingType is passed into the function to indicate either “Easiness”,
“Helpfulness”, “Friendliness” or “Clarity” that you like to prompt to the user so they can enter proper rating.
You will call this function 4 times to get each rating.
*/

int getRating(string ratingType)

{
	int rating;
	cout << "Enter the " << ratingType << " rating between 1 to 5: ";
	cin >> rating;
	return rating;
}

/*
Create a function to locate the professors with the highest and lowest average rating and display the name and rating of the professors. 
Call the function from your main() program to output the information.
*/


void displayHighestAndLowestRating(vector<ProfessorRating>profList)

{

	int Highest_Rating = 0, Lowest_Rating = 0;

	double Highest = profList.at(0).calcRating();
	
	double Lowest = profList.at(0).calcRating();

	for (int i = 1; i<NUM_PROFESSORS; i++)

	{

		if (Highest<profList.at(i).calcRating())

		{

			Highest = profList.at(i).calcRating();

			Highest_Rating = i;

		}

		if (Lowest>profList.at(i).calcRating())

		{

			Lowest = profList.at(i).calcRating();

			Lowest_Rating = i;

		}

	}

	cout << "Professor with highest average rating:" << endl;

	profList.at(Highest_Rating).print();

	cout << endl << endl;

	cout << "----------------------------------------" << endl;

	cout << "Professor with lowest average rating:" << endl;

	profList.at(Lowest_Rating).print();

	cout << "\n\n----------------------------------------" << endl;

}