// ConsoleApplication14.cpp : Defines the entry point for the console application.
//
/*
If you don't provide an access specifier private inheritance is used.
C++ allows for three types of inheritance public private and protected.
This is very different from many other object oriented programming languages.
Most other object oriented programming languages only support public inheritance.
Public inheritance is the most common form of inheritance and it's the type of inheritance that will
Public inheritance establishes an is a relationship between derived and base classes and it's the type
of inheritance we'll focus on in this course.
Private and protected inheritance establish a derived class has a base class relationship and is often
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Account.h"
#include "Savings_Account.h"
using namespace std;




int main(){
	
	cout << "\n====Account===============" << endl;
	Account acc {};
	acc.deposit(2000.0);
	acc.withdraw(500.0);

	Account *p_acc{ nullptr };
	p_acc = new Account();
	p_acc->deposit(1000.0);
	p_acc->withdraw(500.0);
	delete p_acc;

	Savings_Account sav_acc{};
	sav_acc.deposit(2000.0);
	sav_acc.withdraw(500.0);

	cout << endl;

	Account account{};
	Account *p_account = new Account();

	account.deposit(1000.0);
	p_account->withdraw(200.0);

	delete p_account;

	Base base;
	base.a = 100;
	//base.b = 200;
	//base.c = 300;

	Derived d;
	d.a = 100;
	//d.b = 200;
	//d.c = 300;

	// Base b;
	Base b { 100 };

	/*because we're in derived and it's derived from base we need to create our base part.
		So automatically the base class is a default constructor right here will be called. */
	
	//Derived d;
	Derived d{ 1000 };


	return 0;

}

class Base {

public:

	int a{ 0 };
	void display() { cout << a << "," << b << c << endl; }
	Base() : value{ 0 } { cout << "Base no_args constructor" << endl; }
	Base(int x) : value(x) { cout << "Base (int) overloaded constructor" << endl; }
	~Base() { cout << "Base destructor" << endl; }

protected:
	int b{ 0 };
private:
	int c{ 0 };
	int value;
};

class Derived : public Base {

private:
	int double_value;

public:

	Derived() : double_value{ 0 } { cout << "Base no_args constructor" << endl; }

	void access_base() {

		a = 100;
		b = 200;
		//c = 300;

	}
};

//You want the base class to handle its value.
//You want to derive class to handle its double value.

/*
So since constructors are responsible for object initialization when a Derived object is created first
the base class constructor executes and then the derived constructor executes.

We have a base class that has a no args constructor that simply displays base constructor and we have
a derived class that inherits publicly from base to drive.
Class also has no args constructor and it displays derived constructor.

In this case there is no inheritance involved so we expect the base class constructor to be invoked.

In this case we have inheritance.
Since the derived class is a base class so C plus initialize is the base part of the derived object
first.

the derived part of the class must be destroyed before the base part is.
Derived object is destroyed first the derived class destructor executes then the base class
destructor executes each destructor should free any resources that its own class constructor is allocated.

base part must be initialized before the derived part.

when the object is destroyed the opposite happens.
First the derived destructor is invoked and then the base destructor is invoked.

derived class does not inherit base class constructors base class destructor.
The base class overloaded assignment operators and base class friends.
However we can invoke base class constructors destructors.
An overloaded assignment operators from the derived classes.

using base scope operator base directive in the body of a derived class. 
introduced in C++ 11 to allow explicit inheritance of base class constructors.
default copy and move constructors are not included.
Each inherited constructor has the same access specifier as its corresponding base class constructor.
If you provide an overloaded constructor in the derived class then the base class overloaded constructor
is not inherited.
A base class constructor default arguments are not inherited.


*/