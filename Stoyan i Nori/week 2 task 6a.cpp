// ConsoleApplication17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int p;
	cin >> p;
	if (p % 4 == 0 || p % 7 == 0) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;

	}

    return 0;
}

