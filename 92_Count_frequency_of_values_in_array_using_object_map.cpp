// 92. Count frequency of values in array using object/map.

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int size=6;
    int arr[size]={1,5,6,3,6,3};

    map<int,int> frequency;

    for(int i=0;i<size;i++)
    {
        frequency[arr[i]]++;
    }

    for(auto pair:frequency)
    {
        cout<<pair.first<<" --> "<<pair.second<<endl;
    }

    return 0;
}