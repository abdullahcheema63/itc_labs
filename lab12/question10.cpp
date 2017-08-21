#include <iostream>
using namespace std;
int main()
{
	int count,input_number,print_times,print_multiplier;
	count=1;
	cout<<"please enter a number";
	cin>>input_number;
	print_times=input_number;
	while (count<=input_number)
	{
		print_multiplier=print_times;
		while (print_multiplier>0)
		{
			cout<<count;
			print_multiplier--;
		}
		cout<<endl;
		count++;
		print_times--;
	}
	
}