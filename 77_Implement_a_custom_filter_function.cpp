// 77. Implement a custom filter() function.

// filter() => kuch elements remove ho jate hain

#include<iostream>
using namespace std;
// filter 1: even numbers
int filterEven(int arr[],int size,int result[])
{
    int j=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            result[j]=arr[i];
            j++;
        }
    }
    return j;
}

// filter 2: odd numbers
int filterOdd(int arr[],int size,int result[])
{
    int j=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            result[j]=arr[i];
            j++;
        }
    }
    return j;
}

// filter 3: greater than 10
int filterGreaterThan10(int arr[],int size,int result[])
{
    int j=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>10)
        {
            result[j]=arr[i];
            j++;
        }
    }
    
    return j;
}

int main()
{
    int size=6;
    int arr[size]={5,12,8,15,3,20};
    int result[size];
    int count;
    
    // filter 1: even
    count=filterEven(arr,size,result);
    cout<<"Even numbers: ";
    for(int i=0;i<count;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    // filter 2: odd
    count=filterOdd(arr,size,result);
    cout<<"Odd numbers: ";
    for(int i=0;i<count;i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    
    // filter 3: greater than 10
    count=filterGreaterThan10(arr,size,result);
    cout<<"Greater than 10: ";
    for(int i=0;i<count;i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}