#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	if ((k % m == 0  || k % n == 0) && n*m > k) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

    return 0;
}

