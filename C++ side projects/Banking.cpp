#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

const string FILENAME = "balance.txt";  // File name for storing balance

void showMenu();
void createAccount();
void deposit();
void withdraw();

int main()
{
    int option;

    cout << "Welcome to the Banking System\n";

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                cout << "Thank you for using the Banking System.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (option != 4);

    return 0;
}

void showMenu()
{
    cout << "\nMenu:\n";
    cout << "1. Create an Account\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
}

void createAccount()
{
    cout << "Account created successfully!\n";
}

void deposit()
{
    double amount;
    ofstream outFile;

    cout << "Enter deposit amount: ";
    cin >> amount;

    outFile.open(FILENAME, ios::app);  // Append mode to add new balance
    if (!outFile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    outFile << amount << endl;
    outFile.close();

    cout << "Deposit of $" << amount << " was successful.\n";
}

void withdraw()
{
    double balance = 0, amount;
    ifstream inFile;

    inFile.open(FILENAME);  // Read current balance from file
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    inFile >> balance;
    inFile.close();

    cout << "Current balance: $" << balance << endl;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient funds. Withdrawal canceled.\n";
        return;
    }

    balance -= amount;

    ofstream outFile;
    outFile.open(FILENAME);  // Overwrite existing balance in file
    if (!outFile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    outFile << balance << endl;
    outFile.close();

    cout << "Withdrawal of $" << amount << " was successful.\n";
}
