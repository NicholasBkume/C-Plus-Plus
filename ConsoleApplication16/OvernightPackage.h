#pragma once
#include "Package.h"

/* Create a derived class named OvernightPackage which inherits from Package and also includes its own data member and
functions. */

class OvernightPackage :
	public Package
{
public:
	//extraFeePerOunce with double type 
	double extraFeePerOunce;
	OvernightPackage();
	OvernightPackage(double W, double C, string sname, string szip, string rname, string rzip, double EFO);
	void setextraFeePerOunce(double EFO);
	double calcCost();
	virtual void print();
	double getextraFeePerOunce();
	virtual ~OvernightPackage();
};

