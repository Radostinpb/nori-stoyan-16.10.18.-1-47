#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n;
	cout << "Insert an odd number" << endl;
	cin >> n;

	if (n % 2 != 0 && n != 1) {
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				if (j == i || i == n - 1 - j || i == n - 1 || i == 0) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else {
		cout << "Invalid number" << endl;
	}
    return 0; 
}