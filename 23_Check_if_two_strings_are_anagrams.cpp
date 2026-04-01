// 23. Check if two strings are anagrams.

#include<iostream>
using namespace std;

int main()
{
    string str1;
    string str2;

    cout<<"Enter First word: ";
    getline(cin,str1);

    cout<<"Enter Second word: ";
    getline(cin,str2);

    int freq[256]={0};

    for(int i=0;i<str1.length();i++)
    {
        char ch=str1[i];
        freq[ch]++;
    }

    for(int i=0;i<str2.length();i++)
    {
        char ch=str2[i];
        freq[ch]--;
    }

    bool isAnagram=true;

    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            isAnagram=false;
            break;
        }
    }

    if(isAnagram)
    {
        cout<<"Strings are Anagrams.";
    }
    else
    {
        cout<<"Strings are not Anagrams.";
    }

    return 0;
}
