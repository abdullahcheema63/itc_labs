#include <iostream>
using namespace std;
int main()
{
        int length,width,print_length,print_width;
        cout<<"Please enter the length: ";
        cin>>length;
        cout<<"Please enter the width: ";
        cin>>width;
        print_length=length;
        while (print_length>0)
        {
                cout<<"*";
                print_length--;
        }
        cout<<"\n";
        while (width>0)
        {
                cout<<"*";
                print_width=length-2;
                while (print_width>0)
                {
                        cout<<" ";
                        print_width--;
                }
                cout<<"*\n";
                width--;
        }
        print_length=length;
        while (print_length>0)
        {
                cout<<"*";
                print_length--;
        }
        cout<<"\n";
}
