// 55. Count number of inversions in an array.

#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={2,4,1,3,5};
    int count=0;  // inversion count
    
    for(int i=0;i<size-1;i++)  // har element ko check karo
    {
        for(int j=i+1;j<size;j++)  // uske baad wale elements se compare karo
        {
            if(arr[i]>arr[j])  // agar i wala bada hai j se
            {
                count++;  // inversion mila
            }
        }
    }
    
    cout<<"Number of inversions: "<<count<<endl;
    
    return 0;
}