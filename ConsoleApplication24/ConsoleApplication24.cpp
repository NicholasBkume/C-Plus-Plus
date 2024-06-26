#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct FootballPlayer {
    string players_name;
    string players_position;
    int players_touchdowns;
    int players_catches;
    int players_passingYards;
    int players_receivingYards;
    int players_rushingYards;
};

// Maximum number of players is 10.
const int Max = 10;

// Function declarations.
void inputFileData(ifstream&, FootballPlayer[], int&);
void printingDataToFile(ofstream&, FootballPlayer[], int);
void printingDataToConsole(FootballPlayer[], int);
int findIndexOfSpecificPlayer(FootballPlayer[], int, string);
void updateDataOfThePlayer(FootballPlayer[], int);

int main() {
    FootballPlayer players[Max];
    ifstream infile;
    ofstream outfile;
    int ch = 0;
    int playerCount = 0; // Number of players actually read from file

    infile.open("input.txt");
    if (!infile) {
        cout << "The input file input.txt is not found." << endl;
        system("pause");
        return 1;
    }

    outfile.open("output.txt");
    if (!outfile) {
        cout << "The output file output.txt cannot be opened." << endl;
        return 1;
    }

    inputFileData(infile, players, playerCount);

    do {
        // Display the menu
        cout << "----MENU---" << endl;
        cout << "1. Select (by name) a player " << endl;
        cout << "2. Display player's information" << endl;
        cout << "3. Update player's information" << endl;
        cout << "4. EXIT" << endl;

        // Prompt the user
        cout << "Enter your choice: ";
        cin >> ch;

        if (cin.fail()) {
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        if (ch == 1) {
            string name;
            cout << "Enter name of the player: ";
            cin >> name;

            int index = findIndexOfSpecificPlayer(players, playerCount, name);

            if (index >= 0)
                cout << "The Player " << name << " exists." << endl;
            else
                cout << "The player " << name << " is not found." << endl;
        } else if (ch == 2) {
            string name;
            cout << "Enter player's name: ";
            cin >> name;

            int index = findIndexOfSpecificPlayer(players, playerCount, name);

            if (index >= 0)
                printingDataToConsole(players, index);
            else
                cout << "Player " << name << " is not found in the array." << endl;
        } else if (ch == 3) {
            updateDataOfThePlayer(players, playerCount);
            printingDataToFile(outfile, players, playerCount);
        } else if (ch == 4) {
            cout << "Program terminated." << endl;
        } else {
            cout << "Incorrect choice!" << endl;
        }
        cout << endl;

    } while (ch != 4);

    infile.close();
    outfile.close();
    system("pause");
    return 0;
}

void inputFileData(ifstream& infile, FootballPlayer players[], int& length) {
    int i = 0;
    while (i < Max && infile >> players[i].players_name) {
        infile >> players[i].players_position;
        infile >> players[i].players_touchdowns;
        infile >> players[i].players_catches;
        infile >> players[i].players_passingYards;
        infile >> players[i].players_receivingYards;
        infile >> players[i].players_rushingYards;
        i++;
    }
    length = i; // Update the actual number of players read
}

void printingDataToFile(ofstream& outfile, FootballPlayer players[], int length) {
    if (length == 0) {
        cout << "The array is empty." << endl;
        return;
    }

    outfile << "Details of all players are as follows:" << endl;
    for (int i = 0; i < length; i++) {
        outfile << (i + 1) << ". ";
        outfile << players[i].players_name << " ";
        outfile << players[i].players_touchdowns << " ";
        outfile << players[i].players_catches << " ";
        outfile << players[i].players_passingYards << " ";
        outfile << players[i].players_receivingYards << " ";
        outfile << players[i].players_rushingYards << endl;
    }
}

void printingDataToConsole(FootballPlayer players[], int index) {
    if (index < 0) {
        cout << "Invalid index." << endl;
        return;
    }

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

int findIndexOfSpecificPlayer(FootballPlayer players[], int length, string name) {
    for (int index = 0; index < length; index++) {
        if (players[index].players_name == name)
            return index;
    }
    return -1;
}

void updateDataOfThePlayer(FootballPlayer players[], int length) {
    int choice = 0;
    string name;
    cout << "Enter name of the player to whom you want to update details: ";
    cin >> name;

    int index = findIndexOfSpecificPlayer(players, length, name);

    if (index < 0) {
        cout << "The player does not exist." << endl;
        return;
    }

    do {
        cout << "----MENU---" << endl;
        cout << "1. Update the name of the player" << endl;
        cout << "2. Update the position of the player" << endl;
        cout << "3. Update the number of touchdowns of the player" << endl;
        cout << "4. Update the number of catches of the player" << endl;
        cout << "5. Update the number of passing yards of the player" << endl;
        cout << "6. Update the number of receiving yards of the player" << endl;
        cout << "7. Update the number of rushing yards of the player" << endl;
        cout << "8. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch (choice) {
        case 1: {
            string nam;
            cout << "Enter the new name: ";
            cin >> nam;
            players[index].players_name = nam;
            cout << "The information is updated." << endl;
            break;
        }
        case 2:
            cout << "Enter the new position: ";
            cin >> players[index].players_position;
            cout << "The information is updated." << endl;
            break;
        case 3:
            cout << "Enter the new number of touchdowns: ";
            cin >> players[index].players_touchdowns;
            cout << "The information is updated." << endl;
            break;
        case 4:
            cout << "Enter the new number of catches: ";
            cin >> players[index].players_catches;
            cout << "The information is updated." << endl;
            break;
        case 5:
            cout << "Enter the new number of passing yards: ";
            cin >> players[index].players_passingYards;
            cout << "The information is updated." << endl;
            break;
        case 6:
            cout << "Enter the new number of receiving yards: ";
            cin >> players[index].players_receivingYards;
            cout << "The information is updated." << endl;
            break;
        case 7:
            cout << "Enter the new number of rushing yards: ";
            cin >> players[index].players_rushingYards;
            cout << "The information is updated." << endl;
            break;
        case 8:
            cout << "Exiting update menu." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }

    } while (choice != 8);
}
