#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n;
	int count = 0;
	int s = 0;

	do {
		cin >> n;
		if (n > 1) {
			count++;
			s = s + n;
		}
	} while (n > 1);
	cout << count << endl;
	cout << s << endl;
	cout << s / count << endl;

	return 0;
}
