#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int x = -500;

	do {
		cout << "value is : " << x << endl;
		x += 100;
	} while (x <= 500);
	return 0;
}