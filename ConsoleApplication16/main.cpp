#include "stdafx.h"
#include <iostream>
#include <string>
#include "package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;



int main() {
const int SIZE = 5;
Package *pkgList[SIZE];
TwoDayPackage p[SIZE];
OvernightPackage o[SIZE];

pkgList[0] = &TwoDayPackage(5.5, 5.5, "name",   "44444", "name1", "44444", 4.4);
pkgList[1] = &TwoDayPackage(5.5, 5.5, "name", "44444", "name1", "44444", 4.4);
pkgList[2] = &TwoDayPackage(5.5, 5.5, "name", "44444", "name1", "44444", 4.4);
pkgList[3] = &OvernightPackage(5.5, 5.5, "name", "44444", "name1", "44444", 4.4);
pkgList[4] = &OvernightPackage(5.5, 5.5, "name", "44444", "name1", "44444", 4.4);



for (int i = 0; i < SIZE; i++) {
	cout << "object is " << pkgList[i]->getSenderName() << "\n";
	cout << "Area is " << pkgList[i]->getSenderZip() << "\n\n";
}


		p[0].setSenderName("Brian");
		p[0].setRecipientName("Sarah");
		p[0].setweightInOunce(5.5);
		p[0].setcostPerOunce(5.5);
		p[0].setSenderZip(44444);
		p[0].setRecipientZip("44444");

		p[1].setSenderName("Gabriel");
		p[1].setRecipientName("John");
		p[1].setweightInOunce(4.14);
		p[1].setcostPerOunce(3.5);
		p[1].setSenderZip(44444);
		p[1].setRecipientZip("44444");

		p[2].setSenderName("Sam");
		p[2].setRecipientName("Gabe");
		p[2].setweightInOunce(2.0);
		p[2].setcostPerOunce(50.5);
		p[2].setSenderZip(44444);
		p[2].setRecipientZip("44444");

		o[0].setSenderName("James");
		o[0].setRecipientName("Duval");
		o[0].setweightInOunce(9.7);
		o[0].setcostPerOunce(50.5);
		o[0].setSenderZip(44444);
		o[0].setRecipientZip("44444");

		o[1].setSenderName("Judy");
		o[1].setRecipientName("Lisa");
		o[1].setweightInOunce(1.7);
		o[1].setcostPerOunce(5.5);
		o[1].setSenderZip(44444);
		o[1].setRecipientZip("44444");

		
		Package *twoday = p;
		Package *overnight = o;

		for (int i = 0; i < SIZE; i++) {

			twoday = &p[i];
			cout << "Two Day Package from " << p[i].getSenderName() << " at " << p[i].getSenderZip() << ", to " << p[i].getRecipientName() << " at " << p[i].getRecipientZip() << "." << endl << "Cost of sending is $" << twoday->calcCost() << "." << endl;
			overnight = &o[i];
			cout << "Overnight Package from " << o[i].getSenderName() << " at " << ", " << o[i].getSenderZip() << ", to " << o[i].getRecipientName() << " at " << o[i].getRecipientZip() << "." << endl << "Cost of sending is $" << overnight->calcCost() << "." << endl;
		}
	
		system("PAUSE");

	return 0;
}