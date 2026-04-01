// 57. Sort 0s, 1s, and 2s in an array.

// This above problem solve is Dutch National Flag(DNF) Algorithm.

#include<iostream>
using namespace std;
int main()
{
    int size=6;
    int arr[size]={2,0,1,2,1,0};

    int low=0;        // yahan par 0 ko place karna hai
    int mid=0;        // current element jis ko check karna hai
    int high=size-1;  // yahan par 2 ko place karna hai

    // jab tak mid high ko cross na kare tab tak loop chalta rahega
    while(mid<=high)
    {
        // agar element 0 ho to low position par bhejo
        if(arr[mid]==0)
        {
            // swap(arr[mid],arr[low]) manually
            int temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;

            low++;   // low aage badhao
            mid++;   // mid bhi aage badhao
        }

        // agar element 1 ho to sirf mid aage badhana hai
        else if(arr[mid]==1)
        {
            mid++;
        }

        // agar element 2 ho to high position par bhejo
        else if(arr[mid]==2)
        {
            // swap(arr[mid],arr[high]) manually
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;

            high--;  // high ko ek step left karo
            // mid ko yahan increase nahi karte kyunke swapped element check karna hota hai
        }
    }

    // sorted array print
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}