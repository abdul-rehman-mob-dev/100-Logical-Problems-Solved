// 67. Print diamond shape using characters.

#include<iostream>
using namespace std;
int main()
{
    int n=5;

    //print first half diamond pattern
    for(int i=0;i<=n;i++)
    {
        //print spaces
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<" ";
        }
        //print stars(*)
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    //print second half diamond pattern
    for(int i=0;i<n;i++)
    {
        //print spaces
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        //print stars(*)
        for(int j=n;j>=2*i-1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}