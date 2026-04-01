// 84. Implement merge sort.

#include<iostream>
using namespace std;

void merge(int arr[],int start,int mid,int end) // Ye function do sorted parts ko merge karta hai, arr[start..mid] aur arr[mid+1..end].
{
    int temp[100];
    int i=start;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=end) // Dono parts ko compare karke chhota element temp me daalte hain
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid)   // Agar left part ke elements bach gaye hon
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end)   // Agar right part ke elements bach gaye hon
    {
        temp[k]=arr[j];
        j++;
        k++;
    }

    k=0;
    for(int i=start;i<=end;i++) // Temp array se original array me copy karna
    {
        arr[i]=temp[k];
        k++;
    }
}

void mergeSort(int arr[],int start,int end) // Ye function array ko recursively divide karta hai
{
    if(start<end)   // Jab tak start end se chhota ho divide hota rahe
    {
        int mid=(start+end)/2;  // Middle index
        mergeSort(arr,start,mid);   // Left half ko sort karo
        mergeSort(arr,mid+1,end);   // Right half ko sort karo
    
        merge(arr,start,mid,end);   // Left aur right sorted parts ko mila kar aik array bana do

    }
    
}

int main()
{
    int size=5;
    int arr[size]={5,3,4,1,2};

    mergeSort(arr,0,size-1);    // Function call
    cout<<"Merge Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}