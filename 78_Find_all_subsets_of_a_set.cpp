// 78. Find all subsets of a set.

#include<iostream>
using namespace std;
int main()
{
    int size=3;
    int arr[size]={1,2,3};      // Set ke elements
    int totalSubsets=1; // Total subsets calculate karne ke liye      

    // Total subsets calculate karna (2^size)
    for(int i=0;i<size;i++)
    {
        totalSubsets=totalSubsets*2;    // 2^size=8 subsets
    }

    // Har subset ko generate karna
    for(int i=0;i<totalSubsets;i++)
    {
        int num=i;              // Binary representation ke liye temporary number
        cout<<"{";

        for(int j=0;j<size;j++)
        {
            // Agar current bit 1 hai to element include karo
            if(num%2==1)
            {
                cout<<arr[j];   //print subsets
            }
            num=num/2;          // Next bit check karne ke liye divide by 2
        }

        cout<<"}"<<endl;
    }
    return 0;
}