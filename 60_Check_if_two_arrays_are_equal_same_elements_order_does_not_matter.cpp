// 60. Check if two arrays are equal (same elements, order doesn’t matter)

#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,9,6,0,4,4};
    int arr2[]={9,0,1,6,2,4};

    int arr1Length=sizeof(arr1)/sizeof(int);
    int arr2Length=sizeof(arr2)/sizeof(int);

    // step 1: size check
    if(arr1Length!=arr2Length)
    {
        cout<<"Two arrays are not equal.";
        return 0;   // yahin program end
    }

    cout<<"arr1 and arr2 size are equal."<<endl;

    // step 2: arr1 sort manually
    for(int i=0;i<arr1Length;i++)
    {
        for(int j=i+1;j<arr1Length;j++)
        {
            if(arr1[i]>arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }

    // step 3: print sorted arr1
    cout<<"arr1 sorted: ";
    for(int i=0;i<arr1Length;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    // step 4: arr2 sort manually
    for(int i=0;i<arr2Length;i++)
    {
        for(int j=i+1;j<arr2Length;j++)
        {
            if(arr2[i]>arr2[j])
            {
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }

    // step 5: print sorted arr2
    cout<<"arr2 sorted: ";
    for(int i=0;i<arr2Length;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    // step 6: check if arrays are equal
    bool checkArrayEqual=true;
    for(int i=0;i<arr1Length;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            checkArrayEqual=false;
            break;
        }
    }

    // step 7: print result
    if(checkArrayEqual)
    {
        cout<<"Two arrays are equal.";
    }
    else
    {
        cout<<"Two arrays are not equal.";
    }

    return 0;
}
