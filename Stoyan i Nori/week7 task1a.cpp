#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int arr[100];
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int min = arr[0];
	int max = arr[0];
	for (int j = 0; j < n; j++) {
		if (min > arr[j]) {
			min = arr[j];
		}
		if (max < arr[j]) {
			max = arr[j];
		}
	}
cout << min << endl;
cout << max << endl;
    return 0;
}

