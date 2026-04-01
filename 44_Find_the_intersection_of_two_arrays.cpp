// 44. Find the intersection of two arrays.

#include<iostream>
using namespace std;
int main()
{
    int size=4;
    int arr1[size]={10,20,30,40};
    int arr2[size]={50,60,10,30};

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                break; // duplicate avoid karne ke liye
            }
        }
    }

    return 0;
}
