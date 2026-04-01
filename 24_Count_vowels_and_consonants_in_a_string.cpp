// 24. Count vowels and consonants in a string.

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    int vowelCount=0;
    int consonantCount=0;

    for(int i=0;i<=str.length()-1;i++)
    {
        char ch=str[i];
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                vowelCount++;
            }
            else
            {
                consonantCount++;
            }
        }
        
    }

    cout<<"Vowel Character in String: "<<vowelCount<<endl;
    cout<<"Consonant character in String: "<<consonantCount;

    return 0;
}