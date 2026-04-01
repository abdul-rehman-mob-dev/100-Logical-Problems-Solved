// 63. Find all perfect squares between 1 and 1000.

//1-1000 ke under jo bi perfect square hai wo nikalne hai.

#include<iostream>
using namespace std;
int main()
{
    int num=1000;
    int ans=0;

    for(int i=1;i*i<=num;i++)   //jaise hi square(i*i) 1000 se zyada ho, loop khud hi ruk jaye.
    {
        ans=i*i;    
        cout<<ans<<" ";
    }

    return 0;
}