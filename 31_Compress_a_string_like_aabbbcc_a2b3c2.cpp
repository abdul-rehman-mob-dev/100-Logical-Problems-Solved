// 31. Compress a string like "aabbbcc" → "a2b3c2".

#include<iostream>
using namespace std;
int main()
{
    string str="aabbbcc";
    int count=1;

    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            cout<<str[i]<<count;
            count=1;
        }
    }
    cout<<str[str.length()-1]<<count;
    return 0;
}