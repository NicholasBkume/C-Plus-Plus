﻿#include"stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void createData(); // Function prototypes
void printData();
void searchData();
void updateData();

struct Player { // Renamed struct to follow PascalCase convention
    string playername;
    int position;
    int touchdowns;
    int catches;
    int passingyards;
    int receivingyards;
    int rushingyards;
};

Player players[10]; // Creating an array of 10 players
ofstream f1, f2;

int main() {
    int ch;
    while (true) {
        cout << "\nEnter your choice" << endl;
        cout << "1. Create data\n2. Print Data\n3. Search Data\n4. Update Data\n5. Exit\n";
        cin >> ch;

        switch (ch) {
            case 1:
                createData(); // Calling function
                break;
            case 2:
                printData();
                break;
            case 3:
                searchData();
                break;
            case 4:
                updateData();
                break;
            case 5:
                return 0; // Use return 0 instead of exit(0) in main
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}

void createData() {
    f1.open("input.txt");

    if (!f1) {
        cout << "Error opening file for writing." << endl;
        return;
    }

    cout << "Enter player information (name, position, touchdowns, catches, passing yards, receiving yards, rushing yards)" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter Player " << i + 1 << " Details:" << endl;
        cin >> players[i].playername >> players[i].position >> players[i].touchdowns >> players[i].catches >> players[i].passingyards >> players[i].receivingyards >> players[i].rushingyards;
        f1 << players[i].playername << " " << players[i].position << " " << players[i].touchdowns << " " << players[i].catches << " " << players[i].passingyards << " " << players[i].receivingyards << " " << players[i].rushingyards << "\n";
    }

    f1.close();
}

void printData() { // Function to display player information
    for (int i = 0; i < 10; i++) { // Corrected loop to start from 0
        cout << "\nPlayer " << i + 1 << " Details:" << endl;
        cout << players[i].playername << " " << players[i].position << " " << players[i].touchdowns << " " << players[i].catches << " " << players[i].passingyards << " " << players[i].receivingyards << " " << players[i].rushingyards << endl;
    }
}

void searchData() {
    string name; // Name for searching
    cin.ignore(); // Clear the previous console buffer
    cout << "Enter player name to search: ";
    getline(cin, name); // Read the search player

    bool found = false;
    for (int i = 0; i < 10; i++) { // Corrected loop to start from 0
        if (players[i].playername == name) { // Comparing required name with players
            found = true;
            cout << "Player is available. Details are:" << endl;
            cout << players[i].playername << " " << players[i].position << " " << players[i].touchdowns << " " << players[i].catches << " " << players[i].passingyards << " " << players[i].receivingyards << " " << players[i].rushingyards << endl; // Display total player information
            break;
        }
    }

    if (!found) {
        cout << "Player not found." << endl;
    }
}

void updateData() {
    f2.open("input.txt");

    if (!f2) {
        cout << "Error opening file for writing." << endl;
        return;
    }

    string name;
    cout << "Enter the player name to be updated: ";
    cin.ignore();
    getline(cin, name);

    bool found = false;
    for (int i = 0; i < 10; i++) { // Corrected loop to start from 0
        if (players[i].playername == name) { // Comparing required name with players
            found = true;
            cout << "Enter Player information (name, position, touchdowns, catches, passing yards, receiving yards, rushing yards): ";
            cin >> players[i].playername >> players[i].position >> players[i].touchdowns >> players[i].catches >> players[i].passingyards >> players[i].receivingyards >> players[i].rushingyards;
        }
        f2 << players[i].playername << " " << players[i].position << " " << players[i].touchdowns << " " << players[i].catches << " " << players[i].passingyards << " " << players[i].receivingyards << " " << players[i].rushingyards << "\n";
    }

    if (!found) {
        cout << "Player not found." << endl;
    }

    f2.close();
}
