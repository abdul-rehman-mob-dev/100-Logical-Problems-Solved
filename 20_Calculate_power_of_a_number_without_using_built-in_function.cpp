// 20. Calculate power of a number without using built-in function.

#include<iostream>
using namespace std;
int main()
{
    float base,exponent,result=1;
    bool isNegative=false;

    cout<<"Enter Base Number: ";
    cin>>base;
    cout<<"Enter Exponent Number: ";
    cin>>exponent;

    if(exponent<0)
    {
        isNegative=true;
        exponent=-exponent;
    }

    for(int i=1;i<=exponent;i++)
    {
        result=result*base;
    }

    if(isNegative)
    {
        result=1/result;
        cout<<"Result: "<<result;
    }
    else
    {
        cout<<"Result: "<<result;
    }
    
    return 0;
}