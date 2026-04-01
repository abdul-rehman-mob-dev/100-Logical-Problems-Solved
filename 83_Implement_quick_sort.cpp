// 83. Implement quick sort.

#include<iostream>
using namespace std;
// partition function
int partition(int arr[], int start, int end)
{
    int idx=start-1;    // chhote elements ka pointer
    int pivot=arr[end];  // last element ko pivot maan lo  
    
    for(int j=start;j<end;j++)  // low se high-1 tak traverse karo
    {
        if(arr[j]<pivot)  // agar element pivot se chhota hai
        {
            idx++;  // chhote elements ka area badhao
            
            // swap karo arr[i] aur arr[j]
            int temp=arr[idx];
            arr[idx]=arr[j];
            arr[j]=temp;
        }
    }
    
    // pivot ko uski sahi position pe rakho
    idx++;
    int temp=arr[idx];
    arr[idx]=arr[end];
    arr[end]=temp;
    
    return idx;  // pivot ki position return karo
}
// quick sort function
void quickSort(int arr[], int start, int end)
{
    if(start<end)  // base case: agar elements hain
    {
        int pivIndex=partition(arr,start,end);  // partition karo
        
        quickSort(arr,start,pivIndex-1);  // left part sort karo
        quickSort(arr,pivIndex+1,end);  // right part sort karo
    }
}
int main()
{
    int size=5;
    int arr[size]={5,3,4,1,2};
    
    quickSort(arr,0,size-1);  // quick sort call karo
    cout<<"Quick Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}