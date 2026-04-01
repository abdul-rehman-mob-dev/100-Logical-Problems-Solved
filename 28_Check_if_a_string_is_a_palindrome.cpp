//  28. Check if a string is a palindrome.

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);

    int start,end;
    start=0;
    end=str.length()-1;

    while(start<end)
    {
        if(str[start]!=str[end])
        {
            cout<<"String is not Palindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout<<"String is Palindrome";
    
    return 0;
}