// 38. Find the most frequent character in a string.

#include<iostream>
using namespace std;
int main()
{
    string str="Programming";
    int freq[256]={0};
    int maxFreq=0;
    
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        freq[ch]++;
        if(freq[ch]>maxFreq)
        {
            maxFreq=freq[ch];
        }
    }
    
    cout<<"Most frequent characters= ";
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(freq[ch]==maxFreq)
        {
            cout<<ch<<" ";
            freq[ch]=0;
        }
    }
    return 0;
}
