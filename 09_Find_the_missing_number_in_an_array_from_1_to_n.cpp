// 09. Find the missing number in an array from 1 to n.

#include<iostream>
using namespace std;
int main()
{
    int arr[] ={1,2,3,5,6,8,9,12,15,16,17,20,25};
    int n =sizeof(arr)/sizeof(int);  // array ka size find karne ke liya

    cout<<"Missing Numbers in Array: ";
    
    for(int i=1; i<=arr[n-1];i++)   // 1 se last element 25 tak
    {
        bool found =true;
        for(int j=0;j<n;j++)       // array ke andar check karo indexes
        {
            if(arr[j]==i)
            {
                found =false;
                break;
            }
        }

        if(found)   // agar nahi mila to missing number print karo
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
