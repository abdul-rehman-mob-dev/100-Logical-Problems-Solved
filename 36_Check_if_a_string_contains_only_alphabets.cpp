// 36. Check if a string contains only alphabets.

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    bool onlyAlpha=true;

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(!((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')))
        {
            onlyAlpha=false;
            break;
        }
    }
    if(onlyAlpha)
    {
        cout << "String contains only alphabets.";
    }
    else
    {
        cout << "String does not contain only alphabets.";
    }
    
    return 0;
}