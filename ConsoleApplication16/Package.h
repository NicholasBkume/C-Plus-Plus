#pragma once
#ifndef _PACKAGE_H_
#define _PACKAGE_H_
#include <iostream>
#include <string>

/*
Your family runs a package delivery services which offer a number of different shipping options, each with specific costs
associated.Create an inheritance hierarchy to represent various types of packages.Use Package(standard package) as the
base class of the hierarchy, and then add two derived classes TwoDayPackage and OvernightPackage.In the base class
(Package), it includes sender and recipient information, package weight in ounces and cost per ounce.Package class has a
function calcCost() which allows derived classes to override with their own implementations.Derived class TwoDayPackage
should inherit the functionality from base class, Package, but also includes its own data member that represents a flat fee for
two day delivery services.OvernightPackage class inherits from Package class and also includes a fee which charges extra fee
per ounce for overnight delivery services.Both classes will override the calcCost() and print() functions from the base class.
Your program should contain the following functionality : */


using namespace std;

class Package
{

	//. Create a base class named Package which has the following private data members 
private:
	double weightInOunce;
	double costPerOunce;
	string senderName;
	string senderZip;
	string recipientName;
	string recipientZip;

public:
	Package(double W, double C, string sname, string szip, string rname, string rzip);
	Package();
	~Package();

	void setweightInOunce(double W);
	void setcostPerOunce(double C);
	void setSenderName(string sname);
	void setSenderZip(int szip);
	void setRecipientName(string rname);
	void setRecipientZip(string rzip);

	double getweightInOunce();
	double getcostPerOunce();
	string getSenderName();
	string getSenderZip();
	string getRecipientName();
	string getRecipientZip();

	/* Both derived classes will override the calcCost() and print() functions from the base class. */
	virtual void print();
	virtual double calcCost();
	
};

#endif