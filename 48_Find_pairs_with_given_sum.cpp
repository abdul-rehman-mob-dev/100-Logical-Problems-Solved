// 48. Find pairs with given sum.

#include<iostream>
using namespace std;
int main()
{
    int size=6;
    int arr[size]={2,4,3,5,1,7};
    int givenSum=6;

    // yahan hum har number ko doosre number ke sath check karenge
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            // dono numbers ka sum check karte hain
            if(arr[i] + arr[j] == givenSum)
            {
                cout<<"Pair mil gaya: "<<arr[i]<<" + "<<arr[j]<<" = "<<givenSum<<endl;
            }
        }
    }

    return 0;
}