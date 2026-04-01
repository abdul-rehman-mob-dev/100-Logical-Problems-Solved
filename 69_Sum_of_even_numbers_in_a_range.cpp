// 69. Sum of even numbers in a range.

#include<iostream>
using namespace std;
int main()
{
    int num1=1;
    int num2=10;
    int sum=0;
    cout<<"Even numbers in a range: ";
    for(int i=num1;i<=num2;i++)
    {
        if(i%2==0)  //agar number 2 se divide ho jaye to even hota hai
        {
            cout<<i<<" ";
            sum=sum+i;  //even number ko sum me add karo
        }
        
    }
    cout<<endl<<"Sum of even numbers in a range: "<<sum;
    return 0;
}