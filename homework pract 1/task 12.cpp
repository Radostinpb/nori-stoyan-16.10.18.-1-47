#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int wis;
	int d = 0;
	cin >> wis;

	while (wis != 0) {
		d++;
		wis--;
	}
	switch ((d - 1) % 10) {
	case 1:
		cout << "On " << d - 1 << "st the frog will be out." << endl;
		break;
	case 2:
		cout << "On " << d - 1 << "nd the frog will be out." << endl;
		break;
	case 3:
		cout << "On " << d - 1 << "rd the frog will be out." << endl;
		break;
	default:
		cout << "On " << d - 1 << "th the frog will be out." << endl;
	}
	return 0;
}