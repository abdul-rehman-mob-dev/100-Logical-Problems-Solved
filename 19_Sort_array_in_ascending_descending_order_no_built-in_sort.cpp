// 19. Sort array in ascending/descending order (no built-in sort).

#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,16,15,2,3,9,11,7,8,6};
    int size=sizeof(arr)/sizeof(int);
    int temp;

    // Ascending Order
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Ascending Order: ";
    for(int i=0;i<size; i++)
    {
        cout<<arr[i]<< " ";
    }

    // Descending Order
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<endl<<"Descending Order: ";
    for(int i=0;i<size; i++)
    {
        cout<<arr[i]<< " ";
    }

    return 0;
}