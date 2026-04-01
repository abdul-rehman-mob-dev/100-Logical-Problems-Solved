// 49. Check if an array is sorted.

#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={1,2,3,4,5};
    bool isSorted = true;  // assume array sorted hai

    for(int i=0;i<size-1;i++)  // last element ke liye check karne ki zarurat nahi
    {
        if(arr[i]>arr[i+1])  // agar current element next se bada hai
        {
            isSorted=false;   // array sorted nahi
            break;              // loop chhodo, confirm ho gaya
        }
    }

    if(isSorted)
    {
        cout<<"Array is sorted.";
    }
    else
    {
        cout<<"Array is not sorted.";
    }

    return 0;
}