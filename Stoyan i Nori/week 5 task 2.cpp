#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	int sum = 0;
	do {
		cin >> number;
	} while (number < 10 || number >99);
	
	for (int i = 10; i <= number; ++i)
	{
		sum += (i % 10 + i / 10);
	}
	cout << sum << endl;
    return 0;
}

