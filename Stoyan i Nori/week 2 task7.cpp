#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x;
	cin >> x;

	int k;
	cin >> k;

	cout << (x % (int)(pow(10, k))) / (int)pow(10, k - 1) ;

	return 0;
}

