// 52. Remove negative numbers from an array.

#include<iostream>
using namespace std;
int main()
{
    int size=6;
    int arr[size]={3,-2,7,-9,0,4};
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=0)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}