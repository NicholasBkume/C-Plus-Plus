#pragma once
#ifndef _TWODAYPACKAGE_H
#define _TWODAYPACKAGE_H
#include <iostream>
#include <string>
#include "Package.h"

/*Create a derived class named TwoDayPackage which inherits the functionality from based class, Package, but also include
its own data member and functions. */

class TwoDayPackage :
	public Package
{
public:
	//flatFee with double type 
	double flatFee;
	TwoDayPackage();
	TwoDayPackage(double W, double C, string sname, string szip, string rname, string rzip, double F);
	double calcCost();
	void setflatFee(double F);
	double getflatFee();
	virtual void print();
	virtual ~TwoDayPackage();
};
#endif