#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, n2, n3, last, last2;
	int count = 0;
	int sum = 0;
	cout << "Insert number" << endl;
	cin >> n;
	n2 = n;
	n3 = n;
	while (n != 0) {
		n = n / 10;
		last = n % 10;
		count++;
	}
	while (n2 != 0) {
		n2 = n2 / 10;
		last2 = n2 % 10;
		sum = sum + pow(last2, count);
	}
	if (n3 == sum) {
		cout << "narcistic" << endl;
	}
	else {
		cout << "not narcistic" << endl;
	}
   return 0; 
} 