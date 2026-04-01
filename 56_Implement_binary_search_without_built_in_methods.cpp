// 56. Implement binary search (without built-in methods).

#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={10,20,30,40,50}; // binary search me array ka sorted hona zarori hai chahe array ascending order me ho ya descending order me ho.
    int target=40;
    int start=0;
    int end=size-1;
    int index=-1;  // target na mile to -1 return

    while(start<=end)
    {
        int mid=(start+end)/2;

        if(target==arr[mid])
        {
            index=mid;
            break;
        }
        else if(target<arr[mid])
        {
            end=mid-1;  // mid move on left side
        }
        else if(target>arr[mid])
        {
            start=mid+1;  // mid move on right side
        }
    }
    cout<<index;
    return 0;
}