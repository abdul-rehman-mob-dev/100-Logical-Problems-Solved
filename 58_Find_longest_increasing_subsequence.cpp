// 58. Find longest increasing subsequence(LIS).

#include<iostream>
using namespace std;
int main()
{
    int size=8;
    int arr[size]={10,20,9,33,21,50,41,60};

    int dp[size];

    // har element ki LIS length starting me 1 hoti hai
    for(int i=0;i<size;i++)
    {
        dp[i]=1;
    }

    // har element ko uske pehle wale elements se check karo
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<i;j++)
        {
            // agar pichla element chhota ho to LIS ber sakti hai
            if(arr[j]<arr[i])
            {
                if(dp[j]+1 > dp[i])
                {
                    dp[i]=dp[j]+1;
                }
            }
        }
    }

    // dp array me jo max hoga woh answer hai
    int ans=dp[0];
    for(int i=1;i<size;i++)
    {
        if(dp[i]>ans)
        {
            ans=dp[i];
        }
    }

    cout<<ans;

    return 0;
}