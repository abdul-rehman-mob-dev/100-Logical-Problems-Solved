//02. Check if a number is a palindrome.

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
        sum=rem+(sum*10);
        num=num/10;
    }
    if(com==sum)
    {
        cout<<"Palindrome Number";
    }
    else
    {
        cout<<"Not Palindrome Number";
    }
    return 0;
}