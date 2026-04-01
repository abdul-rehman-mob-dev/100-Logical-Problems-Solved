//  50. Find common elements in three arrays.

#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr1[size]={1,2,3,4,5};
    int arr2[size]={3,4,5,6,7};
    int arr3[size]={0,3,5,9,4};

    cout<<"Common elements: ";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr1[i]==arr2[j])
            {
                for(int k=0;k<size;k++)
                {
                    if(arr2[j]==arr3[k])
                    {
                        cout<<arr3[k]<<" ";
                    }
                }
            }

        }    
    }
    
    return 0;
}