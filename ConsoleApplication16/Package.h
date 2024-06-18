#pragma once
#ifndef _PACKAGE_H_
#define _PACKAGE_H_
#include <iostream>
#include <string>

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
	void setSenderZip(string szip);
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
