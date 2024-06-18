
#include "Package.h"
#include <iostream>
#include <string>

using namespace std;

//constructor which initializes the private data members

Package::Package() : weightInOunce{ 0.0 }, costPerOunce{ 0.0 }, senderName{ "SN" }, senderZip{ "SZ" }, recipientName{"RN"}, recipientZip {"RZ"}
{
}

//parameterized constructor to set the value for each private data members 
Package::Package(double W, double C, string sname, string szip, string rname, string rzip) {
	W = weightInOunce;
	C = costPerOunce;
	sname = senderName;
	szip = senderZip;
	rname = recipientName;
	rzip = recipientZip;
}

Package::~Package()
{
}

//necessary get and set functions for each private data members 
void Package::setweightInOunce(double W) {
		weightInOunce = W;

}
void Package::setcostPerOunce(double C) {

	costPerOunce = C;
}
void Package::setSenderName(string sname) {

	senderName = sname;

}
void Package::setSenderZip(string szip) {

	senderZip = szip;
}
void Package::setRecipientName(string rname) {
	recipientName = rname;
}
void Package::setRecipientZip(string rzip) {
	recipientZip = rzip;
}

double Package::getweightInOunce() {

	return weightInOunce;

}
double Package::getcostPerOunce() {

	return costPerOunce;
}
string Package::getSenderName() {

	return senderName;
}
string Package::getSenderZip() {

	return senderZip;
}
string Package::getRecipientName() {

	return recipientName;
}
string Package::getRecipientZip() {

	return recipientZip;
}
//double calcCost() � returns the cost of the package (weightInOunce*costPerOunce) 
double Package::calcCost() {
	double Cost;
	Cost = weightInOunce * costPerOunce;
	cout << "The Base Cost = " << Cost << endl << endl;

	return Cost;
}

//void print() � displays the package information including type of package, sender, recipient, weight, and cost. 
void Package::print() {
	cout << senderName <<"n/"<< recipientName << "n/" << weightInOunce << "n/" << costPerOunce << endl;
}
