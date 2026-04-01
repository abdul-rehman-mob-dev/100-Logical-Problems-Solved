// 39. Find the common characters between two strings.

#include<iostream>
using namespace std;
int main()
{
    string str1="Programming";
    string str2="Gaming";
    for(int i=0;i<str1.length();i++)
    {
        for(int j=0;j<str2.length();j++)
        {
            if(str1[i]==str2[j])
            {
                cout<<str1[i]<<" ";
                str2[j]='0';    // '0' ka matlab hai ke ye character dobara match na ho is liye ese 0 se replace kar diya gaya hai.
                break;  // break ka matlab hai ke jab match mil gaya to inner loop yahin se ruk jaega, or outer loop next character par move kar jai.
            }
        }
    }
    return 0;
}