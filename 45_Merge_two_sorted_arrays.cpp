// 45. Merge two sorted arrays.

#include<iostream>
using namespace std;
int main()
{
    int size=4;
    int arr1[size]={1,3,5,7};
    int arr2[size]={2,4,6,8};

    int mergeSize=size+size;
    int mergeArr[mergeSize];

    // pehle arr1 copy karo
    for(int i=0;i<size;i++)
    {
        mergeArr[i]=arr1[i];
    }

    // phir arr2 copy karo
    int j=0;
    for(int i=size;i<mergeSize;i++)
    {
        mergeArr[i]=arr2[j];
        j++;
    }

    // ab mergeArr ko sort karna zaroori hai
    for(int i=0;i<mergeSize;i++)
    {
        for(int j=i+1;j<mergeSize;j++)
        {
            if(mergeArr[i]>mergeArr[j])
            {
                int temp=mergeArr[i];
                mergeArr[i]=mergeArr[j];
                mergeArr[j]=temp;
            }
        }
    }

    // print merged sorted array
    cout<<"Merge two sorted arrays: ";
    for(int i=0;i<mergeSize;i++)
    {
        cout<<mergeArr[i]<<" ";
    }

    return 0;
}
