#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Insert 3 numbers" << endl;
	cin >> a >> b >> c;

	if (a + b > c && b + c > a && a + c > b) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

    return 0;
}

