#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int C_BAL, DEP, OPT;
	cout << "Create an Account option 1 " << /n;
	cout << "Create an Deposit option 2 " << /n;
	cout << "Create an Withdraw option 3 " << /n;
	cout << "Which option are you interested in today " << endl;
	cin >> OPT
		if (OPT = 1) {
			cout << "Welcome to our bank: " << endl;
		}
		if (OPT = 2) {
			ofstream outputfile;
			outputfile.open("N_numbers2.txt");
			cout << "Enter deposit amount: " << endl;
			outputfile << C_BAL
			outputfile.close();
		}

	else if (OPT = 3)
	{
	ifstream inputfile;
	inputfile.open("N_numbers2.txt");
	inputfile >> C_BAL;
	inputfile.close();
}
	else {
		cout << "invalid" << endl;
		}
	cout << "GOD BLESS!" << endl;
	return 0;
}
