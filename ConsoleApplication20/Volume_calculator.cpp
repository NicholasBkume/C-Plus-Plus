﻿/*
a program that accepts as input the mass, in grams, and density, 
in grams per cubic centimeters, and 
outputs the volume of the object using the formula: volume = mass / density. 
Format your output to two decimal places
*/

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	// declare variables
	double mass, density, volume;

	cout << "Enter the mass : ";

	cin >> mass;

	//users inputs
	cout << "Enter the density : ";

	cin >> density;

	volume = mass / density;

	//format output to 2 decimal places 
	cout << fixed << showpoint;

	cout << setprecision(2);

	cout << "The volume = " << volume << endl;

	cin.ignore();
        cin.get();

	return 0;


}
