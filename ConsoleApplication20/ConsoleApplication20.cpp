
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

double windchill(double wind, double temp);
double w;
double wind, temp;
void getInput(double& wind, double& temp);
int main()
{
	double wind, temp;
	
	getInput(wind, temp);
	
	cout << "Current temperature: " << temp << "F" << endl;
	
	cout << "Windchill factor " << setprecision(4) << fixed << windchill(wind, temp) << endl;
	
	system("pause");
	
	return 0;

}

void getInput(double& wind, double& temp)

{
	
	cout << "Enter the wind speed in miles per hour: ";
	
	cin >> wind;
	
	cout << "Enter the temperature in fahrenheit: ";
	
	cin >> temp;
}

double windchill(double V, double T)

{
	double w;
	
	w = 35.74 + 0.6215*T - 35.75*pow(V, 0.16) + 0.4275 * T * pow(V, 0.16);
	
	return w;
	
}