#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n, a, b, c, d, e;
	cout << "insert a number between 10 and 30000 " << endl;
	cin >> n;

	a = n / 10000;
	b = n / 1000 % 10;
	c = n / 100 % 10;
	d = n / 10 % 10;
	e = n % 10;
	
	if (n < 30000 && n > 9999) {
		if (a == e && b == d) {
			cout << "this number is a polymdrom" << endl;
		}
		else {
			cout << "this is not polyndrom" << endl;
		}
	}

	if (n <= 9999 && n > 999) {
		if (b == e && c == d) {
			cout << "this number is a polymdrom" << endl;
		}
		else {
			cout << "this is not polyndrom" << endl;
		}
	}

	if (n <= 999 && n > 99) {
		if (c == e ) {
			cout << "this number is a polymdrom" << endl;
		}
		else {
			cout << "this is not polyndrom" << endl;
		}
	}
	if (n < 100) {
		if (d == e) {
			cout << "this number is a polymdrom" << endl;
		}
		else {
			cout << "this is not polyndrom" << endl;
		}
	}
	return 0;
}	//върл фен на if