// 59. Count occurrences of a specific element.

#include<iostream>
using namespace std;
int main()
{
    int size=6;
    int arr[size]={1,2,3,2,4,2};
    int targetElement=2;
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==targetElement)
        count++;
    }
    cout<<count;
    return 0;
}