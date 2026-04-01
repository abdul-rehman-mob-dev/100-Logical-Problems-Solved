//  32. Remove all digits from a string.

#include<iostream>
using namespace std;
int main()
{
    string str="abc123xyz45";
    for(int i=0;i<str.length();i++)
    {
        if(!(str[i]>='0'&&str[i]<='9'))
        {
            cout<<str[i];
        }
    }
    return 0;
}