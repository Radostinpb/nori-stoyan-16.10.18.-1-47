#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, i = 1, squares;
	cin >> n;

	// dokato kwadratite sa ne po golemi ot n
	while (i*i <= n) {
		squares = i*i;
		cout << i*i << endl;
		i++;
	}
	cout << endl;

    return 0;
}

