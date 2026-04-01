//  29. Find duplicate characters in a string.

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int freq[256]={0};

    for(int i=0;i<str.length();i++)
    {
        freq[str[i]]++;
    }

    cout<<"Duplicate Characters in a String: ";
    for(int i=0;i<str.length();i++)
    {
        if(freq[str[i]]>1)
        {
            cout<<str[i]<<" ";
        }
        freq[str[i]]=0;
    }
    
    return 0;
}