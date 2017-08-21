#include <iostream>
using namespace std;
int main()
{
	int stars,space,count,space_loop,stars_loop;
	stars=1;
	space=2;
	count=0;
	while (count<3)
	{
		space_loop=space;
		stars_loop=stars;
		while (space_loop>0){cout<<" ";}
		while (stars_loop>0){cout<<"*";}
		cout<<"\n";
		count++;
		space--;
		stars+=2;
	}
	stars=3;
	space=1;
	while (count>0)
	{
		space_loop=space;
		stars_loop=stars;
		while (space_loop>0){cout<<" ";}
		while (stars_loop>0){cout<<"*";}
		cout<<"\n";
		count--;
		stars+=2;
		space++;
	}
}