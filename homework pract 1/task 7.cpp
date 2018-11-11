#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int m, y;
	cout << "Insert month" << endl;
	cin >> m;
	cout << "Insert year" << endl;
	cin >> y;

	switch (m) {
	case 1:
		cout << "January " << 31 << endl;
		break;
	case 3:
		cout << "March " << 31 << endl;
		break;
	case 5:
		cout << "May " << 31 << endl;
		break;
	case 7:
		cout << "July " << 31 << endl;
		break;
	case 8:
		cout << "August " << 31 << endl;
		break;
	case 10:
		cout << "October " << 31 << endl;
		break;
	case 12:
		cout << "December " << 31 << endl;
		break;

	case 4:
		cout << "April " << 30 << endl;
		break;
	case 6:
		cout << "June " << 30 << endl;
		break;
	case 9:
		cout << "September " << 30 << endl;
		break;
	case 11:
		cout << "November " << 30 << endl;
		break;

	case 2:
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
			cout << "February " << 29 << endl;
		}
		else {
			cout << "February " << 28 << endl;
		}
		break;
	default:
		cout << "Invalid month" << endl;
	}
	return 0;
}
