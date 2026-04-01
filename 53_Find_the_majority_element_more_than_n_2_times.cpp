// 53. Find the majority element (more than n/2 times).

#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={3,3,4,2,3};

    int freq=0;
    int majorityElement=0;

    // pehla step: Moore's algorithm se majority element nikalna
    for(int i=0;i<size;i++)
    {
        if(freq==0)
        {
            majorityElement=arr[i];
        }
        if(majorityElement==arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    // doosra step: verify karna ke ye waqai majority element hai ya nahi
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==majorityElement)
        {
            count++;
        }
    }

    // check karna ke majority exist karti bhi hai ya nahi
    if(count>size/2)
    {
        cout<<majorityElement;
    }
    else
    {
        cout<<"No majority element found";
    }

    return 0;
}