#include "stdafx.h"
#include <iostream>
using namespace std;
void showmenu()
void cost_menu()
void emp_menu()
void F_M_M()
void calculate()
void displaymessage()
int main()
{
	int choice;
	int months;
	int loca
	cout << "n\______Welcome_to_the_sales_billing_system______\n" << endl;
	cout << "Which account will you like to access" \n;
	const int EMP_A = 1, COST_A = 2, QUIT_A = 3, 
		      JAN = 1, FEB = 2, AUG = 3, DEC = 4;
	const double item1 = 70.0, item2 = 20.0, item3 = 10.0,
		         sales1 = 70.0, sales2 = 20.0 sales3 = 20.0;
	int total;
	do { showmenu();
	cin >> choice;
	while (choice < EMP_A || choice > COST_A) {
		cout "Please enter valid menu choice: "; 
	}
	if (choice != QUIT_A) {
		cout << "n\______Good_bye!!!______\n" << endl;
	}
	switch (choice){
	case EMP_A:
		emp_menu();
		break;
	case COST_A:
		cost_menu();
		break;
	}
	} while (choice != QUIT_A);
	displaymessage();
}

void showmenu() {
	cout << "ENTER 1 FOR EMPLOYEE_MENU" << endl;
	cout << "ENTER 2 FOR COSTUMER_MENU" << endl;
	cout << "ENTER 3 FOR EXIT" << endl;
	cout << "ENTER YOUR CHOICE NUMBER: " << endl;
}

void emp_menu()
int search = 1 , display = 2, input;
cout << "ENTER 1 to Search_sales_data_history" << endl;
cout << "ENTER 2 to Calculate" << endl;
cin >> input;
if (input = 2) {
	void calculate();
}
else if (input = 1) {
	void F_M_M();
}

void cost_menu()
int search = 1, display = 2, input;
cout << "ENTER 1 to Search_billing_data_history" << endl;
cout << "ENTER 2 to Calculate" << endl;
cin >> input;
if (input = 2) {
	void calculate();
}
else if (input = 1) {
	void F_M_M();
}
}
return 0;