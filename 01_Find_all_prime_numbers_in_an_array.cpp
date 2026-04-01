// 01. Find all prime numbers in an array.

#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,2,45,65,23,25,26,41,58,91,69,71};
  int size = sizeof(arr)/sizeof(int);  //array ka size find karne ke liye

  for(int i=0;i<size;i++)
  {
    bool isPrime=true;
    for(int j=2;j<arr[i];j++)
    {
      if(arr[i]%j==0)
      {
        isPrime=false;
        break;
      }
    }  
    if(isPrime)
    {
      cout<<arr[i]<<" ";
    }
  }
   
  return 0;
}