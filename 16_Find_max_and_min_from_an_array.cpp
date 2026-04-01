// 16. Find max and min from an array.

#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,-1,6,120,8,11,0,15,7,-5,18};
    int size=sizeof(arr)/sizeof(int);
    int max=arr[0],min=arr[0];

    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }

        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Maximum Number in Array: "<<max<<endl;
    cout<<"Minimum Number in Array: "<<min;
    return 0;
}