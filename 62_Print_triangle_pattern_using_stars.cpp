// 62. Print triangle pattern using stars.

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)   //outer loop rows ke liye use hota hai.
    {
        for(int j=1;j<=i;j++)   //inner loop columns ke liye use hota hai.
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}