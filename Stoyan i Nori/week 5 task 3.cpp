#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int counter = 0;
	int a, b, c;
	for (int i = 102; i < 1000; ++i) {
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (a != b && a != c && b != c) {
			cout << i << endl;
			++counter;
		}
	}
	cout << counter << endl;
    return 0;
}

