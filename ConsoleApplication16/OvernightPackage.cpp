#include "stdafx.h"
#include <iostream>
#include <string>
#include "OvernightPackage.h"

using namespace std;

//add necessary constructors and get and set functions for extraFeePerOunce
OvernightPackage::OvernightPackage() : extraFeePerOunce{0.0}
{
}

OvernightPackage::OvernightPackage(double W, double C, string sname, string szip, string rname, string rzip, double EFO) : Package(W, C, sname, szip, rname, rzip){

	EFO = extraFeePerOunce;
}

OvernightPackage::~OvernightPackage()
{
}

void OvernightPackage::setextraFeePerOunce(double EFO) {

	EFO = extraFeePerOunce;

}
double OvernightPackage::getextraFeePerOunce() {

	return extraFeePerOunce;

}

double OvernightPackage::calcCost() {
	return((extraFeePerOunce * Package::getweightInOunce()) + Package::calcCost());
}
/*
double Package::calcCost() {
	double Cost;
	Cost = weightInOunce * costPerOunce;
	cout << "The Base Cost = " << Cost << endl << endl;

	return Cost;
}
*/
void OvernightPackage::print() {
	cout << getSenderName() << "n/" << getRecipientName() << "n/" << getweightInOunce() << "n/" << getcostPerOunce() << endl;
}