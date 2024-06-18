#include "stdafx.h"
#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;

//add necessary constructors and get and set functions for flatFee 
TwoDayPackage::TwoDayPackage() : flatFee{ 0.0 }
{
}

TwoDayPackage::TwoDayPackage(double W, double C, string sname, string szip, string rname, string rzip, double F) : Package(W, C, sname, szip, rname, rzip)
{
	F = flatFee;
}


TwoDayPackage::~TwoDayPackage()
{
}

void TwoDayPackage::setflatFee(double F) {

	 F = flatFee;
}

double TwoDayPackage::getflatFee() {

	return flatFee;

}

double TwoDayPackage::calcCost() {
	return (flatFee + Package::calcCost());
}

/*
double TwoDayPackage::calcCost() {
	double TD;
	cin >> TD;
	cout << "The Base Cost = " << TD + Package::calcCost() << endl << endl;

	return TD + Package::calcCost();
}
*/

void TwoDayPackage::print() {
	cout << getSenderName() << "n/" << getRecipientName() << "n/" << getweightInOunce() << "n/" << getcostPerOunce() << endl;
}