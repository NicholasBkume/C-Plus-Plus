#include "stdafx.h"
#include <iostream>
using namespace std;

class Base {

public:

	int a {0};
	void display() { cout << a << "," << b << c endl; }

protected:
	int b { 0 };
private:
	int c{ 0 };
};

class Derived : public Base {
public:
	void access_base() {

		a = 100;
		b = 200;
		//c = 300;

	}
};