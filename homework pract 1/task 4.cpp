#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int b = 5;
	int code;
	while (n != 3) {
		cout << "Choose an option:" << endl;
		cout << "1.Check your ballance." << endl;
		cout << "2.Charge your voucher" << endl;
		cout << "3.Exit" << endl;
		cin >> n;

		switch (n) {
		case 1:
			cout << b << "lv." << endl;
			break;
		case 2:
			cin >> code;
			if (code = 555) {
				b = b + 10;
			}
			break;
		}
	}
	return 0;
}