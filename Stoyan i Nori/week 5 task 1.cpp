#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	int count = 0;
	int sum = 0; // ако е умножение трябва да почва от 1, щото 5+0=0 5*1=5
	while (count < 5) {
		cin >> number;
		if (number > 10 && number < 5555) {
			++count;
			cout << number << endl;
			sum += number;
		}
	}
	cout << "sumata e " << sum << endl;

    return 0;
}

