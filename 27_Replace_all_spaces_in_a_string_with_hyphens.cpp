//  27. Replace all spaces in a string with hyphens.

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ') //space ASCII is 32, agar space mile.
        {
            str[i]=str[i]+13;   //hyphen ASCII is 45, an other way: str[i]='-'; to usay hyphen se replace karo.
        }
    }
    cout<<str;
    return 0;
}