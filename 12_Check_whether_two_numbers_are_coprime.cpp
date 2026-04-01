// 12. Check whether two numbers are coprime.

#include<iostream>
using namespace std;
int main()
{
    int a,b,temp,GCD;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;

    // Using Euclid’s Algorithm to find GCD of two numbers.
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;  
    }
    GCD=a;
    cout<<"GCD: "<<GCD<<endl;

    if(GCD==1)
    {
        cout<<"Given Numbers are coprime";
    }
    else
    {
        cout<<"Not coprime";
    }
    return 0;
}