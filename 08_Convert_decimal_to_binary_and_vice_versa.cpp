// 08. Convert decimal to binary and vice versa.

#include<iostream>
using namespace std;

// Decimal to Binary
void decToBinary()
{
    int num,rem,sum=0,multi=1;
    cout<<"Decimal to Binary"<<endl;
    cout<<"Enter any Number: ";
    cin>>num;
    while(num>0)
    {
        rem=num%2;
        sum=sum+(rem*multi);
        multi=multi*10;
        num=num/2;
        
    }
    cout<<sum;
}

// Binary to Decimal
void binToDecimal()
{
    int num,rem,sum=0,multi=1;
    cout<<endl<<"Binary to Decimal"<<endl;
    cout<<"Enter any Number: ";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*multi);
        multi=multi*2;
        num=num/10;
        
    }
    cout<<sum;
}
int main()
{
    decToBinary();
    binToDecimal();

    return 0;
}