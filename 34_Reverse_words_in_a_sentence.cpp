// 34. Reverse words in a sentence.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "I Love Programming";
    string rev = "";
    string word = "";
    string finalStr = "";

    //string ko totally reverse karne ke liye
    for (int i=str.length()-1;i>=0;i--)
    {
        rev =rev+str[i];
    }

    for (int i=0;i<=rev.length();i++)
    {
        if (rev[i]==' ' || rev[i]=='\0')
        {
            
            for (int j=word.length()-1;j>=0;j--)
            {
                finalStr=finalStr+word[j];
            }
            if(i<rev.length()-1)
            {
                finalStr=finalStr+' ';
                word="";
            }
        } 
        else
        {
            word=word+rev[i];
        }
    }
    cout<<finalStr;

    return 0;
}
