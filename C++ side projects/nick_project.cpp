#include "stdafx.h"
#include <iostream>
using namespace std;
void showmenu();
void cost_menu();
void emp_menu();
void F_M_M1();
void F_M_M2();
void calculate();
void displaynames();
void displayresult();
void displayitemsnames();
void displayitemprices();
void displayempnames();
void displaystoreloca();
void displaysalesmonths();
void advbilling();
void advsales();

int main()
{
	int choice;
	cout << "n\______Welcome_to_the_sales_billing_system______\n" << endl;
	cout << "Which account will you like to access" << endl;
	const int EMP_A = 1, COST_A = 2, QUIT_A = 3;
	const int JAN = 1, FEB = 2, AUG = 3, DEC = 4;
	const double ring = 70.0, rake = 20.0, golves = 10.0, pencil = 0.05;
	const double sales1 = 70.0, sales2 = 20.0, sales3 = 10.0, sales3 = 0.05;
	int total;
	do {
		showmenu();
		cin >> choice;
		while (choice < EMP_A || choice > COST_A) {
			cout << "Please enter valid menu choice: ";
		}
		if (choice != QUIT_A) {
			cout << "n\______Account_Menu______\n" << endl;
		}
		switch (choice) {
		case EMP_A:
			emp_menu();
			break;
		case COST_A:
			cost_menu();
			break;
		}
	} while (choice != QUIT_A);
	return 0;
}
void showmenu() {
	cout << "ENTER 1 FOR EMPLOYEE_MENU \n"
		<< "ENTER 2 FOR COSTUMER_MENU \n"
		<< "ENTER 3 FOR EXIT \n"
         << "ENTER YOUR CHOICE NUMBER: " << endl;
}

void emp_menu() {
	int search = 1, display = 2, input;
	cout << "ENTER 1 to Search_employee_and_sales_data_history" << endl;
	cout << "ENTER 2 to Calculate" << endl;
	cin >> input;

	if (input = 2) {
		void calculate();
		void displayresult(r);
	}
	else if (input = 1) {
		void F_M_M1();
	}
}

void cost_menu() {
	int search = 1, display = 2, input;
	cout << "ENTER 1 to Search_costumer_billing_data_history" << endl;
	cout << "ENTER 2 to Calculate" << endl;
	cin >> input;
	if (input = 2) {
		void calculate();
		void displayresult(r);
	}
	else if (input = 1) {
		void F_M_M2();
	}
	else {
		cout << "invalid option" << endl;
	}
}
	
	void F_M_M1() {
		int x
			cout << "____Sales_MENU____\n"
			<< "ENTER 1 FOR  Advanced Search options  \n"
			<< "ENTER 2 FOR all Item prices \n"
			<< "ENTER 3 FOR all Item names \n"
			<< "ENTER 4 FOR all Item sales_months \n"
			<< "ENTER 5 FOR all employees names \n"
			<< "ENTER 6 FOR all sales locations \n"
			cin >> x;
		if (x = 1) {
			void advsales();
		}
		if (x = 2) {
			void displayitemprices();
		}
		if (x = 3) {
			void displayitemsnames();
		}
		if (x = 5) {
			void displaysalesmonths();
		}
		if (x = 4) {
			void displayempnames();
		}
		if (x = 6) {
			void displaystoreloca();
		}
		else {
			cout << "Enter Vaild number" << end;
		}
	}

	void F_M_M2() {
		int x
			cout << "____Billing_MENU____\n"
			<< "ENTER 1 FOR  Advanced Search options  \n"
			<< "ENTER 2 FOR all Item prices \n"
			<< "ENTER 3 FOR all Item names \n"
			<< "ENTER 4 FOR all Item bill_months \n"
			<< "ENTER 5 FOR all costumer names \n"
			<< "ENTER 6 FOR all purchase locations \n"
			cin >> x;
		if (x = 1) {
			void advbilling();
		}
		if (x = 2) {
			void displayitemprices();
		}
		if (x = 3) {
			void displayitemsnames();
		}
		if (x = 5) {
			void displaysalesmonths();
		}
		if (x = 4) {
			void displayempnames();
		}
		if (x = 6) {
			void displaystoreloca();
		}
		else {
			cout << "Enter Vaild number" << end;
		}
	}

	void displaynames() {
		cout << "1.Charles \n"
			<< "2.Jones \n"
			<< "3. Kate \n"
			<< "4. Lilly \n" << endl;
	}
	void displayitemsnames() {
		cout << "1.Ring \n"
			<< "2.Gloves \n"
			<< "3.Rake \n"
			<< "4.pencil \n" << endl;
	}
	void displayitemprices() {
		cout << "__Prices__ \n"
			<< "1. $70.0 = ring \n"
			<< "2. $20.0 = gloves\n"
			<< "3. $10.0 = rake \n" << endl;
	}
	void displayempnames() {
		cout << "1.Anthony \n"
			<< "2.Jones \n"
			<< "3. Heracles \n"
			<< "4. John \n" << endl;
	}
		void displaysalesmonths() {
			cout << "1.January \n"
				<< "2.Febuary \n"
				<< "3. August \n"
				<< "4. December \n" << endl;
	}
		void displaystoreloca() {
			cout << "1.rosenberg \n"
				<< "2.Cypress \n"
				<< "3. houston \n"
				<< "4. lake_commons \n" << endl;
		}

		void advbilling() {
			int month, loca, item;
			void displaysalesmonths();
			cout << "Select the month of purchase number" << endl;
			cin >> month;
			void displaystoreloca();
			cout << "Select the loaction of purchase number" << endl;
			cin >> loca;
			void displayitemprices();
			cout << "select the item of purchase number" << endl;
			cin >> item;
			if (month = 1, loca = 1, item >= 1) {
				cout << " charles was billed $100 for 10 pencils in january at the rosenberg store location" << endl;
			}
			if (month >= 2, loca = 2, item = 1) {
				cout << " Jones was billed $100 plus tax for 10 pencils in january at the rosenberg store location" << endl;
			}
			if (month >= 3, loca = 1, item = 1) {
				cout << "Lilly was billed $20 plus tax for 1 glove in august at the rosenberg store location" << endl;
			}if (month = 4, loca = 1, item <= 4) {
				cout << "kate was billed $490 plus tax for 7 pencils and 1 ring in january at the rosenberg store location" << endl;
			}if (month <= 4, loca = 1 || loca = 4, item = 1) {
				cout << "kate was billed $70 plus tax for 1 ring in january at the rosenberg store location \n"
					<< "and $10 for 1 pencil in lake commons store location." << endl;
			}
			else {
				cout << "no billing data found" << endl;

			}
		}

		void advsales() {
			int month, loca, item;
			void displaysalesmonths();
			cout << "Select the month of purchase number" << endl;
			cin >> month;
			void displaystoreloca();
			cout << "Select the loaction of purchase number" << endl;
			cin >> loca;
			void displayitemprices();
			cout << "select the item of purchase number" << endl;
			cin >> item;
			if (month = 1, loca = 1, item >= 1) {
				cout << " Anthony sold 10 pencils for $100 in january at the rosenberg store location" << endl;
			}
			if (month >= 2, loca = 2, item = 1) {
				cout << " John sold 10 pencils for $100 plus tax in january at the rosenberg store location" << endl;
			}
			if (month >= 3, loca = 1, item = 1) {
				cout << "Anthony sold 1 glove for $20 plus tax in august at the rosenberg store location" << endl;
			}if (month = 4, loca = 1, item <= 4) {
				cout << "Heracles sold 7 pencils and 1 ring for $490 plus tax  in january at the rosenberg store location" << endl;
			}if (month <= 4, loca = 1 || loca = 4, item = 1) {
				cout << "Anthony sold 1 ring for $70 plus tax in january at the rosenberg store location \n"
					<< "and Jones sold 1 pencil for $10 in lake commons store location." << endl;
			}
			else {
				cout << "no billing data found" << endl;

			}
		}

		void calculate(double x, double y, double r) {
			int sum = 1, int ave = 2, int tax = 3 int cal
				cout << "1.addition \n"
				<< "2.average \n"
				<< "3. tax balance \n" << endl;
			cin << cal
			cout << "write a number for a calulation" << endl;
			cout << "write name of items to calulate the price" << endl;
			cout << item1 << endl;
			cin >> x;
			cout << item2 << endl;
			cin >> y;
			cout << item3 << endl;
			cin >> z;
			cout << item4 << endl;
			cin >> r;

			if (cal = 1) { sum = x + y + z + r;
			cout << sum << endl;
			}
			if (cal = 2) { sum = x + y + z + r;
			cout << sum/4.0 << endl;
			}
			if (cal = 3) { sum = x + y + z + r;
			cout << sum + 8.5 << endl;
			}

			void displayresult() { cout << "the is: " << sum << endl; }
}