// 14. Count total set bits in a binary representation.

#include<iostream>
using namespace std;
int main()
{
    // Decimal to Binary
    int num,rem,sum=0,multi=1,count=0;
    cout<<"Enter any Number: ";
    cin>>num;
    while(num>0)
    {
        rem=num%2;
        sum=sum+(rem*multi);
        multi=multi*10;
        num=num/2;
    }
    cout<<sum<<endl;
    
    while(sum>0)
    {
        rem=sum%10;
        if(rem==1)
        {
            count++;
        }
        sum=sum/10;
    }
    cout<<"Total set bits: "<<count;

    return 0;
}