#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int count = 0;
	int sum = 0;

	do {
		cin >> n;
		if (n > 10 && n < 99) {
			sum = sum + n;
			count++;
		}

	} while (count != 5 && sum < 234);
	cout << count << endl;
	cout << sum << endl;
	return 0;
}