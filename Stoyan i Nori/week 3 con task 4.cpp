#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int num;
	double x;
	cout << "Insert a number" << endl << "1. y = x-5" << endl << "2. y = sin(x)" << endl << "3. y = cos(x)" << endl << "4. y = exp(x)" << endl;
	cin >> num;

	switch (num) {
	case 1:
		cout << "y = x-5" << endl << "x=";
		cin >> x;
		cout << "y=" << x - 5 << endl;
		break;
	case 2:
		cout << "y = sin(x)" << endl << "x=";
		cin >> x;
		cout << "y=" << sin(x) << endl;
		break;
	case 3:
		cout << "y = cos(x)" << endl << "x=";
		cin >> x;
		cout << "y=" << cos(x) << endl;
		break;
	case 4:
		cout << "y = exp(x)" << endl << "x=";
		cin >> x;
		cout << "y=" << exp(x) << endl;
		break;
	default:
		cout << "invalid operation" << endl;
	}
	
    return 0;
}

