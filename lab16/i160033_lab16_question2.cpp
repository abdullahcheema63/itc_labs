//============================================================================
// Name        : i160033_lab16.cpp
// Author      : Abdullah Cheema i160033
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int maximum = -999;
	int size;
	cout << "please enter the size of array: ";
	cin >> size;
	int *array = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "enter value for " << i << "index of array: ";
		cin >> array[i];
		if (array[i] > maximum) {
			maximum = array[i];
		}
	}
	cout << "the maximum value is " << maximum << endl;
	delete[] array;

	return 0;
}

