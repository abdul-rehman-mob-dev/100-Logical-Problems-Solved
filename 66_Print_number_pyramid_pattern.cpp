// 66. Print number pyramid pattern.

#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        //spaces print
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //num1 print
        for(int j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        //num2 print
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}