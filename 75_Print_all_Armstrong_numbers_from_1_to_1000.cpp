// 75. Print all Armstrong numbers from 1 to 1000.

#include<iostream>
using namespace std;
int main()
{
    int num=1000;
    int temp;
    int sum;
    int cube;
    int findLastDigit;
    
    for(int i=1;i<=num;i++)
    {
        temp=i;
        sum=0;

        while(temp>0)
        {
            findLastDigit=temp%10;
            cube=findLastDigit*findLastDigit*findLastDigit;
            sum=sum+cube;
            temp=temp/10;
              
        }

        if(i==sum)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}