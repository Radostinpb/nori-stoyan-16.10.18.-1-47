#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "insert number" << endl;
	int number;
	cin >> number;

	if (number > 9 && number < 100) {
		cout << "the number is double-digit" << endl;
			//или както е двуцифрен на английски (аз завърших немска паралелка :D)
	}
	else {
		cout << "the number isn't double-digit" << endl;
	}

	return 0;
}
