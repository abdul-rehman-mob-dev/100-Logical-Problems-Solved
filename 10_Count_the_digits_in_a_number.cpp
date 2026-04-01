// 10. Count the digits in a number.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any Numbers: ";
    cin>>num;

    int count=0;

    while(num>0)
    {
        num=num/10;
        count++;
    }
    cout<<"Digits: "<<count;
    return 0;
}