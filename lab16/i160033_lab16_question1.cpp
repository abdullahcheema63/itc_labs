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
	int minimum = 999999;
	int *pointer1 = new int;
	int *pointer2 = new int;
	int *pointer3 = new int;
	int *pointer4 = new int;
	cout << "enter value for first pointer: ";
	cin >> *pointer1;
	if (*pointer1 < minimum) {
		minimum = *pointer1;
	}
	cout << "enter value for second pointer: ";
	cin >> *pointer2;
	if (*pointer2 < minimum) {
		minimum = *pointer2;
	}
	cout << "enter value for third pointer: ";
	cin >> *pointer3;
	if (*pointer3 < minimum) {
		minimum = *pointer3;
	}
	cout << "enter value for fourth pointer: ";
	cin >> *pointer4;
	if (*pointer4 < minimum) {
		minimum = *pointer4;
	}
	cout<<minimum;
	delete pointer1,pointer2,pointer3,pointer4;
	return 0;
}

