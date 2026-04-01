//  47. Find the maximum sum subarray (Kadane's Algorithm).

#include<iostream>
using namespace std;
int main()
{
    int size=9;
    int arr[size]={-2,1,-3,4,-1,2,1,-5,4};

    int currentSum=0;
    int maxSum=arr[0];

    for(int i=0;i<size;i++)
    {
        currentSum=currentSum+arr[i];

        if(currentSum>maxSum)
        {
            maxSum=currentSum;
        }

        if(currentSum<0)
        {
            currentSum=0;
        }
    }

    cout<<"Maximum sum subarray is: "<<maxSum;

    return 0;
}
