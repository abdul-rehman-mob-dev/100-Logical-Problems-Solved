// 70. Sum of odd numbers in a range.

#include<iostream>
using namespace std;
int main()
{
    int num1=1;
    int num2=10;
    int sum=0;
    cout<<"Odd numbers in a range: ";
    for(int i=num1;i<=num2;i++)
    {
        if(i%2!=0)  //agar number ko 2 se divide karne par remainder 0 na aaye to wo odd hota hai.
        {
            cout<<i<<" ";
            sum=sum+i;  //odd number ko sum me add karo
        }
        
    }
    cout<<endl<<"Sum of odd numbers in a range: "<<sum;
    return 0;
}