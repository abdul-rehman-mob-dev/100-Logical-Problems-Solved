// 37. Find the longest word in a sentence.

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    string word="", longest="";

    for(int i=0;i<=str.length();i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            word=word+str[i];
        }
        else
        {
            if(word.length()>longest.length())
            {
                longest=word;
            }
            word="";
        }
    }
    cout<<"Longest word: "<<longest<<endl;

    return 0;
}
