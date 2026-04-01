//  07. Check if a number is perfect (sum of divisors = number).

#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter any Number: ";
    cin>>num;
    
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=i+sum;
        }
    }

    cout << "Sum of divisors: " << sum<<endl;

    if(sum==num)
    {
        cout<<num<<" Perfect Number.";
    }
    else
    {
        cout<<num<<" Not Perfect Number.";
    }
    
    return 0;
}