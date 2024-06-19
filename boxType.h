#pragma once
#include "rectangleType.h"
#include <iostream>

using namespace std;

class boxType : public rectangleType {
private:
		double height;

public:
		boxType();
		boxType(double l, double w, double h);
		~boxType();

		double getHeight() const;

		void setDimension(double l, double w, double h);

		double volume() const;

		boxType operator+(const boxType& obj);
		boxType operator-(const boxType& obj);
		boxType operator*(const boxType& obj);
		boxType& operator++();
		boxType operator++(int);
		boxType& operator--();
		boxType operator--(int);
		bool operator==(const boxType& a);
		bool operator!=(const boxType& a);
		bool operator<=(const boxType& a);
		bool operator<(const boxType& a);
		bool operator>=(const boxType& a);
		bool operator>(const boxType& a);

		friend ostream& operator<<(ostream& out, const boxType& obj);
		friend istream& operator>>(istream& in, boxType& obj);
};
