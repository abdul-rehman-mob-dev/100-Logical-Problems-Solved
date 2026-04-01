// 15. Find duplicate numbers in an array.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {11,2,3,2,11,4,1,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    bool found=true; // Duplicate milne ka flag

    cout<<"Duplicate numbers: ";

    for (int i=0;i<size;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if (arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                found=false;
                break; // Ek number ek baar hi print hoga
            }
        }
    }

    if(found)
    {
        cout<<"None";
    }

    return 0;
}
