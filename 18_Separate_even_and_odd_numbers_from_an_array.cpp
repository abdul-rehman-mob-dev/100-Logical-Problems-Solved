// 18. Separate even and odd numbers from an array.

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"Even Numbers in Array: ";
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }

    cout<<endl<<"Odd Numbers in Array: ";
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}