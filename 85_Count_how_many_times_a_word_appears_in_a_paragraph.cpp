// 85. Count how many times a word appears in a paragraph.

#include<iostream>
using namespace std;
int main()
{
    string paragraph="I like apple and apple is good.";
    string targetWord="apple";
    string currentWord="";
    int count=0;
    for(int i=0;i<paragraph.length();i++)
    {
        if(paragraph[i]!=' ')
        {
            currentWord=currentWord+paragraph[i];
        }
        else if(paragraph[i]==' ')
        {
            if(currentWord==targetWord)
            {
                count++;
            }
            currentWord="";
        }
    }
    if(currentWord==targetWord)
    {
        count++;
    }
    cout<<"Word '"<<targetWord<<"' appears "<<count<<" times."<<endl;
    return 0;
}