// 64. Generate Pascal's Triangle.

#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int triangle[5][5]={0};  // 2D array for triangle, initialize with 0

    // generate triangle
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                // first aur last element hamesha 1 hota hai
                triangle[i][j]=1;
            }
            else
            {
                // upar wale do numbers ka sum
                triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j]; //Rule of Pascal’s Triangle: Har element = upar ke left + upar ke right, Matlab: current element = element just above-left + element just above.
            }
        }
    }

    // print triangle
    for(int i=0;i<n;i++)
    {
        // spaces for triangle shape
        for(int k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }
        // print triangle elements
        for(int j=0;j<=i;j++)
        {
            cout<<triangle[i][j]<<" ";
        }
        cout<<endl;
    }


    // 64. Generate Pascal's Triangle.
    for(int i=0;i<n;i++)
    {
        for (int k=0;k<n-i-1;k++)
        {
            cout<<" ";
        }

        int iCj=1;
        for (int j=0;j<=i;j++)
        {
            cout<<iCj<<" ";
            iCj=iCj*(i - j)/(j + 1);    //ye Pascal’s Triangle me combination formula ka simplified version hai.
        }
        cout<<endl;
    }

    return 0;
}