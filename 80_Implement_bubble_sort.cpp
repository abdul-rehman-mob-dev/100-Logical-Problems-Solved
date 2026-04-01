// 80. Implement bubble sort.

// Bubble sort: saath saath wale elements compare karke largest ya smallest ko step-by-step end tak le jata hai.

#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={5,3,4,1,2};
    
    // bubble sort
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)  // har pass me ek element kam check karo
        {
            if(arr[j]>arr[j+1])  // agar pehla bada hai
            {
                // swap karo
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    // sorted array print karo
    cout<<"Bubble Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}