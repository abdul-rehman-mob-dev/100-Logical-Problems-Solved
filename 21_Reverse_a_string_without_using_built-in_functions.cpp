// 21. Reverse a string without using built-in functions.

#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a String: ";
    cin.getline(str,100);
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    cout<<"Reverse a string: ";
    for(int i=length-1;i>=0;i--)
    {
        cout<<str[i];
    }
    return 0;
}