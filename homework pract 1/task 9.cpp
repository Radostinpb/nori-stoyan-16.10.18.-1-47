#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n;
	bool a, b, c;
	cout << "Insert a number between 10 and 30000" << endl;
	cin >> n;
	
	if (n > 9999) { //цифра на десетохилядните
		a = 1;
	}
	else {
		a = 0;
	}
	if (n > 999) { // цифра на хилядните
		b = 1;
	}
	else {
		b = 0;
	}
	if (n > 99) { //цифра на стотиците
		c = 1;
	}
	else {
		c = 0;
	}
	
	cout << a + b + c + 2 << endl; //ако минимумът е 10 то няма как числото да не е поне двуцифрено

	return 0;
}