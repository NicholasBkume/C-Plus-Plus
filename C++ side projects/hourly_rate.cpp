#include "stdafx.h"
#include <iostream>
using namespace std;
void displayResult(double);
int G_pay(int x, int y);
int O_time(int x, int y);
float W_holdings();

int main()
{
	int H_WORKS, H_RATE, GROSS, OVER, HOLD, total, l;
	cout << "ENTER HOURLY RATE" << endl;
	cin >> H_RATE;
	cout << "ENTER HOURS WORKED" << endl;
	cin >> H_WORKS;
	GROSS = G_pay(H_WORKS, H_RATE);
	cout << "gross pay for regular hours is: " << GROSS << endl;
	displayResult(GROSS);
	OVER = O_time(H_WORKS, H_RATE);
	cout << "overtime pay for overtime hours is: " << OVER << endl;
	displayResult(OVER);
	HOLD = W_holdings();
	cout << "withholdings is: " << HOLD << endl;
	displayResult(HOLD);
	total = GROSS + OVER - HOLD;
	cout << "net pay is: " << total << endl;
	displayResult(total);
	cin >> l;
	return total;
}



int G_pay(int x, int y)
{ int G_pay; 
G_pay = x * y; 
return G_pay; }

int O_time(int x, int y)
{
	int O_time;
	O_time = (x * 1.5) * y;
	return O_time;
}


float W_holdings()
{
	float W_holdings ;
	W_holdings = (0.10 * 0.10) * (0.06 - 0.06);
	return W_holdings;
}
void displayResult(double r)
{ cout << "-------------------------------" << endl; 
cout << "The Result is :" << r << endl; 
cout << "-------------------------------" << endl; }