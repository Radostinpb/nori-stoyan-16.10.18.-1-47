#include "pch.h"
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	double a, b, c, S, p;
	cout << "vuvedete stranite na triugulnika" << endl;
	cin >> a >> b >> c;
	
	p = (a + b + c) / 2;

	S = sqrt(p*(p - a)*(p - b)*(p - c));
		
		cout << "S=" << S << endl;

	return 0;
}
