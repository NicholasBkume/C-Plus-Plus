/*In an effort to develop in-depth knowledge of base class, derived class, and operator overloading, we will expand on our inclass exercise of developing the rectangleType class and overload the following operators: +, -, *, ++, --, ==, !=, >>, and <<.
Your program should contain the following features*/


#pragma once
#include<iostream>

using namespace std;

class rectangleType
{
/* Create a base class named rectangleType with following private data members:
� length with double type
� width with double type
*/
private:
	double length;
	double width;
public:
	
	//2 constructors (one for default and another to initialize the two private data members mentioned above)
	rectangleType();
	rectangleType(double l, double w);
	virtual ~rectangleType();
	
	//get methods (getLength() and getWidth()) for each private data members
	double getLength() const;
	double getWidth() const;

	//setDimension() method with two arguments: length and width) to set the private data members
	void setDimension(double l, double w);
	
	//functions to overload the operators +, -, *, ++, -- for manipulation of the private data members.
	rectangleType operator+(const rectangleType& obj);
	rectangleType operator-(const rectangleType& obj);
	rectangleType operator*(const rectangleType& obj);
	rectangleType operator ++();
	rectangleType operator ++(int);
	rectangleType operator --();
	rectangleType operator --(int);

	//functions to overload the operators ==, !=, <=, <, >=, > for comparison of different rectangleType objects
	bool operator==(const rectangleType& a);
	bool operator!=(const rectangleType& a);
	bool operator<=(const rectangleType& a);
	bool operator<(const rectangleType& a);
	bool operator>=(const rectangleType& a);
	bool operator>(const rectangleType& a);
	double area() const;

	//overload stream insertion and extraction operators in order to print information out onto the screen
	friend ostream & operator << (ostream &out, const rectangleType &obj);
	friend istream & operator >> (istream &in, rectangleType &obj);

};
