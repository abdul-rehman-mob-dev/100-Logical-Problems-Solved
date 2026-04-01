// 81. Implement selection sort.

// Selection sort: Har step me smallest/ largest element dhund ke correct position par place karta hai.

#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={5,3,4,1,2};
    
    // selection sort
    for(int i=0;i<size;i++)  // har position ke liye
    {
        int minIndex=i;  // assume karo current position pe minimum hai
        
        // unsorted portion me minimum dhundo
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])  // agar chhota element mila
            {
                minIndex=j;  // update karo minimum index
            }
        }
        
        // minimum element ko current position pe swap karo
        if(minIndex!=i)  // agar swap karna hai
        {
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
    
    // sorted array print karo
    cout<<"Selection Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}