#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int m;
	double l, r, returna; //защото return е запазена дума

	cout << "Insert value of loan ";
	cin >> l;
	cout << "Insert number of months ";
	cin >> m;
	cout << "Insert interest rate ";
	cin >> r;

	returna = l * (1 + (m*r) / 100);

	cout << "Monthly interest rate:" << r / 12 << endl;
	cout << "q = " << 1 + (m*r) / 100 << endl;
	cout << "Monthly payment:" << returna / m << endl;
	cout << "The total amount to be returned:" << returna;


    return 0; 
}
