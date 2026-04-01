//  06. Find the factorial of a number.

#include<iostream>
using namespace std;
int main()
{
    int num,multi=1;
    cout<<"Enter any Number: ";
    cin>>num;

    for(int i=num;i>=1;i--)
    {
        multi=i*multi;
    }

    cout<<"Factorial of "<<num<<" is "<<multi<<".";

    return 0;
}