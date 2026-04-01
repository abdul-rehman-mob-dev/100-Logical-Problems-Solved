// 53. Find peak element in an array.

#include<iostream>
using namespace std;
int main()
{
    int size=7;
    int arr[size]={1,4,2,7,6,9,8};
    
    for(int i=0;i<size;i++)
    {
        // first element check
        if(i==0)
        {
            if(arr[i]>arr[i+1])
            {
                cout<<"Peak element: "<<arr[i]<<endl;
                break;
            }
        }
        // last element check
        else if(i==size-1)
        {
            if(arr[i]>arr[i-1])
            {
                cout<<"Peak element: "<<arr[i]<<endl;
                break;
            }
        }
        // middle elements check
        else
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                cout<<"Peak element: "<<arr[i]<<endl;
                break;
            }
        }
    }
    return 0;
}