// 82. Implement insertion sort.

// Insertion sort: Har element ko already sorted part me sahi jagah insert karta hai.

#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={5,3,4,1,2};
    
    // insertion sort
    for(int i=1;i<size;i++)  // 1 se start karo (0 already sorted hai)
    {
        int key=arr[i];  // current element ko key maan lo
        int j=i-1;  // piche wale elements check karne ke liye
        
        // key se bade elements ko ek position aage shift karo
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];  // shift karo
            j--;
        }
        
        arr[j+1]=key;  // key ko sahi position pe insert karo
    }
    
    // sorted array print karo
    cout<<"Insertion Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}