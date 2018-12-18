#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num;
	double a, b, c, d, h, r;
	cout << "Choose your shape" << endl;
	cout << "Triangle - 1" << endl;
	cout << "Square - 2" << endl;
	cout << "Circle - 3" << endl;
	cout << "Rectangle - 4" << endl;
	cout << "Trapezoid - 5" << endl;
	cin >> num;

	switch (num) {
	case 1:
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;

		cout << "P=" << a + b + c << endl;
		cout << "S=" << sqrt(((a + b + c) / 2)*(((a + b + c) / 2) - a)*(((a + b + c) / 2) - b)*(((a + b + c) / 2) - c)) << endl; // херонова формула
		break;

	case 2:
		cout << "a=";
		cin >> a;
		cout << "P=" << 4 * a << endl;
		cout << "S=" << pow(a, 2) << endl;
		break;

	case 3:
		cout << "r=";
		cin >> r;
		cout << "P=" << 2 * r*3.14 << endl;
		cout << "S=" << 3.14*pow(r, 2) << endl;
		break;

	case 4:
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "P=" << 2 * (a + b) << endl;
		cout << "S=" << a*b << endl;
		break;

	case 5:
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
		cout << "d=";
		cin >> d;
		cout << "h=";
		cin >> h;
		cout << "P=" << a + b + c + d << endl;
		cout << "S=" << (((a + b)) / 2)*h << endl;
		break;

	}

    return 0;
}

