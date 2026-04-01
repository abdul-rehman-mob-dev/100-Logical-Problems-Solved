// 42. Remove duplicates from an array.

#include<iostream>
using namespace std;
int main()
{
    int size=7;
    int arr[size]={3,4,1,2,3,4,2};
    int temp;

    // Sort array in ascending order
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    // Remove duplicates and print
    for(int i=0;i<size;i++)
    {
        if(i==0||arr[i]!=arr[i-1])
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
