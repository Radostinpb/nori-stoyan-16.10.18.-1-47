#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, k, cifra;
	k >= 1;
	cout << "insert x" << endl;
	cin >> x;

	cout << "insert k, k>=1" << endl;
	cin >> k;

	cifra = x / pow (10, (k-1));
	cout << cifra << endl;

	return 0;
}
