// 33. Remove special characters from a string.

#include<iostream>
using namespace std;
int main()
{
    string str="He@ll#o W!or$ld %123";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z' || str[i]>='0'&&str[i]<='9')    //' 'space ek special character hai.
        {
            cout<<str[i];
        }
    }

    return 0;
}