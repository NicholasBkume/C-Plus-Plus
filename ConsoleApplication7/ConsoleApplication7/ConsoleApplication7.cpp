#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int x = -500;
	int num;
	while (x <= 500)
	{
		cout << "value is : " << x << endl;
		x = x + 100;
	}
	cin >> num;
	return 0;
}