/*
Write a program that declares a struct to store the data of a football player 
(player's name, player's position, number of touchdowns, number of catches, number of passing yards, number of receiving yards, and the number of rushing yards). 
Declare an array of 10 components to store the data of 10 football players. 
Your program must contain a function to input data and a function to output data. 
Add functions to search the array to find the index of a specific player, and update the data of a player. 
(You may assume that input data is stored in a file.) Before the program terminates, give the user the option to save data in a file. 
Your program should be menu driven, giving the user various choices
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct FootballPlayer
{
	//Declare variables.
	string players_name;
	string players_position;
	int players_touchdowns;
	int players_catches;
	int players_passingYards;
	int players_receivingYards;
	int players_rushingYards;
};

//Maximum number of players is 10.
const int Max = 10;

//functions.
void inputFileData(ifstream&, FootballPlayer[], int);
void printingDataToFile(ofstream&, FootballPlayer[], int);
void printingDataToConsole(FootballPlayer[], int);
int findIndexOfSpecificPlayer(FootballPlayer[], int, string);
void updateDataOfThePlayer(FootballPlayer[], int);


int main()
{
	FootballPlayer players[Max];

	ifstream infile;

	ofstream outfile;
	int ch = 0;

	infile.open("input.txt");

	// check whether file exists or not.
	if (!infile)
	{
		cout << "The input file input.txt is not found." << endl;
		
		system("pause");

		exit(1);
	}

	outfile.open("output.txt");

	inputFileData(infile, players, Max);

	do
	{
		//Display the menu
		cout << "----MENU---" << endl;
		cout << "1. Select (by name) a player " << endl;
		cout << "2. Display player's information" << endl;
		cout << "3. Update player's information" << endl;
		cout << "4. EXIT" << endl;

		//Prompt the user
		cout << "Enter your choice: ";
		cin >> ch;

		if (ch == 1)
		{
			string name;

			//enter the player name.

			cout << "Enter name of the player: ";

			cin >> name;

			//Call to the function and storing the result in string variable.
			int index = findIndexOfSpecificPlayer(players, Max, name);

			//Check whether index found or not.
			if (index >= 0)
				cout << "The Player " << name << " exists. " << endl;
			else
				cout << "The player " << name << " is not found ." << endl;
		}

		// Check different cases.
		else if (ch == 2)
		{
			//Declare string variable.
			string name;

			//Prompt the user to enter the player's name.
			cout << "Enter player's name: ";
			cin >> name;

			int index = findIndexOfSpecificPlayer(players, Max, name);

			//Check whether index found or not.
			if (index >= 0)

				//display results
				printingDataToConsole(players, index);
			else
				cout << "player's " << name << " is not found in the array." << endl;
		}

		else if (ch == 3)
		{
			//update result.
			updateDataOfThePlayer(players, Max);

			//Print the data.
			printingDataToFile(outfile, players, Max);
		}

		else if (ch == 4)
			cout << "Program terminated." << endl;

		else
			cout << "Incorrect choice!" << endl;

		cout << endl;

	//Terminate do-while loop condition.
	} while (ch != 4);

	//Closeinput file.
	infile.close();

	//CLose output file.
	outfile.close();

	system("pause");

	return 0;
}

void inputFileData(ifstream& infile, FootballPlayer players[], int length)
{
	int i = 0;

	//Extracting name from file.
	infile >> players[i].players_name;

	//input data.
	while (infile && i < length)
	{
		//Extracting data from file.
		infile >> players[i].players_position;
		infile >> players[i].players_touchdowns;
		infile >> players[i].players_catches;
		infile >> players[i].players_passingYards;
		infile >> players[i].players_receivingYards;
		infile >> players[i].players_rushingYards;

		i++;

		infile >> players[i].players_name;
	}
}

void printingDataToFile(ofstream& outfile, FootballPlayer players[], int length)
{
	//veritfy struct variable data.
	if (players[0].players_name == "")
	{
		cout << "The array is empty." << endl;
		
		return;
	}

	//output data into the file.
	outfile << "Details of all players are as follows:" << endl;

	for (int i = 0; i < length; i++)
	{
		outfile << (i + 1) << ". ";
		outfile << players[i].players_name << " ";
		outfile << players[i].players_touchdowns << " ";
		outfile << players[i].players_catches << " ";
		outfile << players[i].players_passingYards << " ";
		outfile << players[i].players_receivingYards << " ";
		outfile << players[i].players_rushingYards << endl;
	}
}

//display result.
void printingDataToConsole(FootballPlayer players[], int index)
{
	//verify name.
	if (players[0].players_name == "")
	{
		cout << "The array is empty." << endl;
		return;
	}

	//Display player's info.
	cout << "\nDetails of a player:" << endl;
	cout << (index + 1) << ". ";
	cout << players[index].players_name << " ";
	cout << players[index].players_position << " ";
	cout << players[index].players_touchdowns << " ";
	cout << players[index].players_catches << " ";
	cout << players[index].players_passingYards << " ";
	cout << players[index].players_receivingYards << " ";
	cout << players[index].players_rushingYards << endl;
}

//calculate the index
int findIndexOfSpecificPlayer(FootballPlayer players[], int length, string name)
{

	for (int index = 0; index < length; index++)
	{
		//verify name.
		if (players[index].players_name == name)
			//Return the index value
			return index;
	}
	return -1;
}

//update the player information.
void updateDataOfThePlayer(FootballPlayer players[], int length)
{
	int choice = 0;

	do
	{
		//Display menu.
		cout << "----MENU---" << endl;
		cout << "1. Update the name of the player" << endl;
		cout << "2. Update the position of the player" << endl;
		cout << "3. Update the number of touchdowns of the player" << endl;
		cout << "4. Update the number of catches of the player" << endl;
		cout << "5. Update the number of passing yards of the player" << endl;
		cout << "6. Update the number of receiving yards of the player" << endl;
		cout << "7. Update the number of rushing yards of the player" << endl;
		cout << "8. Quit" << endl;

		string name;
		cout << "Enter name of the player to whom you want to update details: ";
		cin >> name;

		int index = findIndexOfSpecificPlayer(players, Max, name);

		if (index < 0)
			cout << "The player does not exists." << endl;
		else
		{

			cout << "Enter your choice: ";
			cin >> choice;

			if (choice == 1)
			{
				string nam;

				cout << "Enter the name by which you want to update previous name";
				cin >> nam;

				players[index].players_name = nam;
				cout << "The information is updated." << endl;
			}

			else if (choice == 2)
			{
				cout << "Enter the position of the player: ";
				cin >> players[index].players_position;
				cout << "The information is updated." << endl;
			}

			else if (choice == 3)
			{
				cout << "Enter the the number of touchdowns: ";
				cin >> players[index].players_touchdowns;
				cout << "The information is updated." << endl;
			}

			else if (choice == 4)
			{
				cout << "Enter the number of catches: ";
				cin >> players[index].players_catches;
				cout << "The information is updated." << endl;
			}

			else if (choice == 5)
			{

				cout << "Enter the number of passing yards: ";
				cin >> players[index].players_passingYards;
				cout << "The information is updated." << endl;
			}

			else if (choice == 6)
			{

				cout << "Enter the number of receiving yards: ";
				cin >> players[index].players_receivingYards;
				cout << "The information is updated." << endl;
			}

			else if (choice == 7)
			{

				cout << "Enter the number of rushing yards: ";
				cin >> players[index].players_rushingYards;
				cout << "The information is updated." << endl;
			}

			else if (choice == 8)
			{
				cout << "Update complete" << endl;
			}

			else
				cout << "Incorrect choice!" << endl;
		}

	} while (choice != 8);

}
