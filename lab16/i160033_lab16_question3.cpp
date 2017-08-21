//============================================================================
// Name        : i160033_lab16.cpp
// Author      : Abdullah Cheema i160033
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int vowels(char[],int);
int main() {
	int size;
	cout << "please enter the size of array: ";
	cin >> size;
	char *array = new char[size];
	for (int i = 0; i < size; i++) {
		cout << "enter value for " << i << "index of array: ";
		cin >> array[i];
	}
	cout<<"The vowels are "<<vowels(array,size)<<endl;

	delete[] array;

	return 0;
}
int vowels(char array[],int size)
{
	int count=0;
	for (int i=0;i<size;i++)
	{
		if (array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u')
		{
			count++;
		}
	}
	return count;
}

