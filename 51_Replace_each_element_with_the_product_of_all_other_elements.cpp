//  51. Replace each element with the product of all other elements.

#include<iostream>
using namespace std;
int main()
{
    int size=4,product=1;
    int arr[size]={1,2,3,4};
    int finalArr[size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i!=j)
            {
                product=product*arr[j];
            }
        }
        finalArr[i]=product;
        product=1;
    }
    for(int i=0;i<size;i++)
    {
        cout<<finalArr[i]<<" ";
    }
    
    return 0;
}