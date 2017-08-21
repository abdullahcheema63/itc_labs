#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        float attempts,count,sum;
        int input;
        attempts=5;
        while (1==1)
        {       
                cout<<"please enter a number: ";
                cin>>input;
                if (input%6==0)
                {
                        break;
                }
                else
                {
                        cout<<"Try again\n";
                        attempts--;
                }
                if (attempts==0)
                {
                        cout<<"attempts reached "<<endl;
                        break;
                }
        }
        count=0; sum=0;
        while (count<=input)
        {
                sum+=((pow(-1,count))*(count+1));
                count++;
        }
        cout<<sum<<endl;
        return 0;
}
