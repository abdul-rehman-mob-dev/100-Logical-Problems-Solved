// 46. Move all zeros to the end of the array.

#include<iostream>
using namespace std;
int main()
{
    int size=11;
    int arr1[size]={0,1,6,0,2,0,3,5,0,4,0};
    int arr2[size];
    
    for(int i=0;i<size;i++)
    {
        if(arr1[i]!=0)
        {
            arr2[i]=arr1[i];
            cout<<arr2[i]<<" ";
        }
        
    }
    for(int i=0;i<size;i++)
    {
        if(arr1[i]==0)
        {
            arr2[i]=arr1[i];
            cout<<arr2[i]<<" ";
        }
        
    }
    
    return 0;
}