// 41. Find second largest and second smallest element.

#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int arr[size]={10,5,20,8,15};

    int max=arr[0];
    int min=arr[0];
    int secondLargest=arr[0];
    int secondSmallest=arr[0];

    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            secondLargest=max;
        }
        else if(arr[i]>secondLargest && arr[i]<max)
        {
            secondLargest=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
            secondSmallest=min;
        }
        else if(arr[i]<secondSmallest && arr[i]>min)
        {
            secondSmallest=arr[i];
        }
    }

    cout<<"Second largest: "<<secondLargest<<endl;
    cout<<"Second smallest: "<<secondSmallest;

    return 0;
}

