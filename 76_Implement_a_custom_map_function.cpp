// 76. Implement a custom map() function.

// map() => har element ko change karta hai.

#include<iostream>
using namespace std;

// map function 1: double
void mapDouble(int size,int arr[],int result[])
{
    for(int i=0;i<size;i++)
    {
        result[i]=arr[i]*2;
    }
}

// map function 2: square
void mapSquare(int size,int arr[],int result[])
{
    for(int i=0;i<size;i++)
    {
        result[i]=arr[i]*arr[i];
    }
}

// map function 3: add 10
void mapAdd10(int size,int arr[],int result[])
{
    for(int i=0;i<size;i++)
    {
        result[i]=arr[i]+10;
    }
}

int main()
{
    int size=5;
    int arr[size]={1,2,3,4,5};
    int result[size];
    
    // operation 1: double
    mapDouble(size,arr,result);
    cout<<"Doubled: ";
    for(int i=0;i<size;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    // operation 2: square
    mapSquare(size,arr,result);
    cout<<"Squared: ";
    for(int i=0;i<size;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    // operation 3: add 10
    mapAdd10(size,arr,result);
    cout<<"Add10: ";
    for(int i=0;i<size;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}