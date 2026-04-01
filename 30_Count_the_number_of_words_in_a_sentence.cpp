// 30. Count the number of words in a sentence.

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if((i==0||str[i-1]==' ') && str[i]!=' ')
        {
            count++;
        }
    }
    cout<<"Total words: "<<count;
    
    return 0;
}