// 35. Find frequency of each word in a paragraph.

#include<iostream>
using namespace std;

int main()
{
    string str1="I love Coding and I love C++";
    string str2="";
    int word=0,count=1;

    // word count in string
    for(int i=0;i<str1.length()-1;i++)
    {
        if((i==0||str1[i-1]==' ') && str1[i]!=' ')
        {
            word++;
        }
    }
    
    // string array for store each word
    string final[word];
    int j=0;

    for(int i=0;i<=str1.length();i++)
    {
        if(str1[i]!=' ')
        {
            str2=str2+str1[i];
        }
        else
        {
            final[j]=str2;
            j++;
            str2="";
        }
    }
    final[j]=str2;

    // find frequence
    for(int i=0;i<word;i++)
    {
        for(int j=i+1;j<word;j++)
        {
            if(final[i]==final[j])
            {
                count++;
                final[j]=" ";
            }
        }
        if(final[i]!=" ")
        cout<<final[i]<<" -> "<<count<<endl;
        count=1;
    }
    return 0;
}
