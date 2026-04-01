// 04. Check whether a number is Armstrong or not.

#include<iostream>
using namespace std;
int main()
{
    int num,com,rem,sum=0;
    cout<<"Enter Any Number: ";
    cin>>num;
    com=num;
    while(num>0)
    {
        rem=num%10;
        sum=(rem*rem*rem)+sum;
        num=num/10;
    }
    if(com==sum)
    {
        cout<<"This is a Armstrong Number";
    }
    else
    {
        cout<<"This is not a Armstrong Number";
    }
    return 0;
}