#include "stdafx.h"
#include <iostream>
using namespace std;

void showmenu();
void cost_menu();
void emp_menu();
void F_M_M1();
void F_M_M2();
void calculate(double x, double y, double r);
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
    cout << "\n______Welcome_to_the_sales_billing_system______\n" << endl;
    cout << "Which account will you like to access" << endl;

    const int EMP_A = 1, COST_A = 2, QUIT_A = 3;

    do
    {
        showmenu();
        cin >> choice;
        while (choice < EMP_A || choice > QUIT_A)
        {
            cout << "Please enter valid menu choice: ";
            cin >> choice;
        }

        if (choice != QUIT_A)
        {
            cout << "\n______Account_Menu______\n" << endl;
        }

        switch (choice)
        {
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

void showmenu()
{
    cout << "ENTER 1 FOR EMPLOYEE_MENU \n"
         << "ENTER 2 FOR CUSTOMER_MENU \n"
         << "ENTER 3 FOR EXIT \n"
         << "ENTER YOUR CHOICE NUMBER: ";
}

void emp_menu()
{
    int input;
    double x = 0.0, y = 0.0, r = 0.0; // Initialize variables

    cout << "ENTER 1 to Search employee and sales data history" << endl;
    cout << "ENTER 2 to Calculate" << endl;
    cin >> input;

    if (input == 2)
    {
        calculate(x, y, r);
        displayresult();
    }
    else if (input == 1)
    {
        F_M_M1();
    }
}

void cost_menu()
{
    int input;
    double x = 0.0, y = 0.0, r = 0.0; // Initialize variables

    cout << "ENTER 1 to Search customer billing data history" << endl;
    cout << "ENTER 2 to Calculate" << endl;
    cin >> input;

    if (input == 2)
    {
        calculate(x, y, r);
        displayresult();
    }
    else if (input == 1)
    {
        F_M_M2();
    }
    else
    {
        cout << "Invalid option" << endl;
    }
}


void F_M_M1()
{
    int x;
    cout << "____Sales_MENU____\n"
         << "ENTER 1 FOR Advanced Search options  \n"
         << "ENTER 2 FOR all Item prices \n"
         << "ENTER 3 FOR all Item names \n"
         << "ENTER 4 FOR all Item sales_months \n"
         << "ENTER 5 FOR all employees names \n"
         << "ENTER 6 FOR all sales locations \n";
    cin >> x;

    if (x == 1)
    {
        advsales();
    }
    else if (x == 2)
    {
        displayitemprices();
    }
    else if (x == 3)
    {
        displayitemsnames();
    }
    else if (x == 4)
    {
        displaysalesmonths();
    }
    else if (x == 5)
    {
        displayempnames();
    }
    else if (x == 6)
    {
        displaystoreloca();
    }
    else
    {
        cout << "Enter valid number" << endl;
    }
}

void F_M_M2()
{
    int x;
    cout << "____Billing_MENU____\n"
         << "ENTER 1 FOR Advanced Search options  \n"
         << "ENTER 2 FOR all Item prices \n"
         << "ENTER 3 FOR all Item names \n"
         << "ENTER 4 FOR all Item bill_months \n"
         << "ENTER 5 FOR all customer names \n"
         << "ENTER 6 FOR all purchase locations \n";
    cin >> x;

    if (x == 1)
    {
        advbilling();
    }
    else if (x == 2)
    {
        displayitemprices();
    }
    else if (x == 3)
    {
        displayitemsnames();
    }
    else if (x == 4)
    {
        displaysalesmonths();
    }
    else if (x == 5)
    {
        displayempnames();
    }
    else if (x == 6)
    {
        displaystoreloca();
    }
    else
    {
        cout << "Enter valid number" << endl;
    }
}

void displaynames()
{
    cout << "1.Charles \n"
         << "2.Jones \n"
         << "3. Kate \n"
         << "4. Lilly \n" << endl;
}

void displayitemsnames()
{
    cout << "1.Ring \n"
         << "2.Gloves \n"
         << "3.Rake \n"
         << "4.Pencil \n" << endl;
}

void displayitemprices()
{
    cout << "__Prices__ \n"
         << "1. $70.0 = Ring \n"
         << "2. $20.0 = Gloves\n"
         << "3. $10.0 = Rake \n" << endl;
}

void displayempnames()
{
    cout << "1.Anthony \n"
         << "2.Jones \n"
         << "3. Heracles \n"
         << "4. John \n" << endl;
}

void displaysalesmonths()
{
    cout << "1.January \n"
         << "2.February \n"
         << "3. August \n"
         << "4. December \n" << endl;
}

void displaystoreloca()
{
    cout << "1. Rosenberg \n"
         << "2. Cypress \n"
         << "3. Houston \n"
         << "4. Lake Commons \n" << endl;
}

void advbilling()
{
    int month, loca, item;
    displaysalesmonths();
    cout << "Select the month of purchase number: ";
    cin >> month;
    displaystoreloca();
    cout << "Select the location of purchase number: ";
    cin >> loca;
    displayitemprices();
    cout << "Select the item of purchase number: ";
    cin >> item;

    if (month == 1 && loca == 1 && item >= 1)
    {
        cout << "Charles was billed $100 for 10 pencils in January at the Rosenberg store location" << endl;
    }
    else if (month >= 2 && loca == 2 && item == 1)
    {
        cout << "Jones was billed $100 plus tax for 10 pencils in January at the Rosenberg store location" << endl;
    }
    else if (month >= 3 && loca == 1 && item == 1)
    {
        cout << "Lilly was billed $20 plus tax for 1 glove in August at the Rosenberg store location" << endl;
    }
    else if (month == 4 && loca == 1 && item <= 4)
    {
        cout << "Kate was billed $490 plus tax for 7 pencils and 1 ring in January at the Rosenberg store location" << endl;
    }
    else if (month <= 4 && (loca == 1 || loca == 4) && item == 1)
    {
        cout << "Kate was billed $70 plus tax for 1 ring in January at the Rosenberg store location \n"
             << "and $10 for 1 pencil in Lake Commons store location." << endl;
    }
    else
    {
        cout << "No billing data found" << endl;
    }
}

void advsales()
{
    int month, loca, item;
    displaysalesmonths();
    cout << "Select the month of sale number: ";
    cin >> month;
    displaystoreloca();
    cout << "Select the location of sale number: ";
    cin >> loca;
    displayitemprices();
    cout << "Select the item of sale number: ";
    cin >> item;

    if (month == 1 && loca == 1 && item >= 1)
    {
        cout << "Anthony sold 10 pencils for $100 in January at the Rosenberg store location" << endl;
    }
    else if (month >= 2 && loca == 2 && item == 1)
    {
        cout << "John sold 10 pencils for $100 plus tax in January at the Rosenberg store location" << endl;
    }
    else if (month >= 3 && loca == 1 && item == 1)
    {
        cout << "Anthony sold 1 glove for $20 plus tax in August at the Rosenberg store location" << endl;
    }
    else if (month == 4 && loca == 1 && item <= 4)
    {
        cout << "Heracles sold 7 pencils and 1 ring for $490 plus tax in January at the Rosenberg store location" << endl;
    }
    else if (month <= 4 && (loca == 1 || loca == 4) && item == 1)
    {
        cout << "Anthony sold 1 ring for $70 plus tax in January at the Rosenberg store location \n"
             << "and Jones sold 1 pencil for $10 in Lake Commons store location." << endl;
    }
    else
    {
        cout << "No sales data found" << endl;
    }
}

void calculate(double x, double y, double r)
{
    int cal;
    cout << "1.addition \n"
         << "2.average \n"
         << "3. tax balance \n";
    cout << "Choose a calculation method: ";
    cin >> cal;

    cout << "Enter the prices for the items to calculate the total price: " << endl;
    cout << "Item 1 price: ";
    cin >> x;
    cout << "Item 2 price: ";
    cin >> y;
    cout << "Item 3 price: ";
    cin >> r;

    double sum = x + y + r;

    if (cal == 1)
    {
        cout << "Sum of prices: $" << sum << endl;
    }
    else if (cal == 2)
    {
        cout << "Average of prices: $" << sum / 3.0 << endl;
    }
    else if (cal == 3)
    {
        cout << "Total price with tax: $" << sum * 1.085 << endl;
    }
    else
    {
        cout << "Invalid calculation option" << endl;
    }
}

void displayresult()
{
    // This function was intended to display results, but it's currently not implemented correctly.
    // Depending on your requirements, you can implement it to display appropriate results.
    cout << "Displaying results..." << endl;
}
