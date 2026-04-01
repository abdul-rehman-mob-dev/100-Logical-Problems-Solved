// 25. Find the first non-repeating character in a string.

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: "; //only write uppercase letters or only write lowercase letters.
    getline(cin,str);
    int freq[256]={0};

    for(int i=0;i<str.length();i++)
    {
        unsigned char ch=str[i];
        freq[ch]++; //frequency count ho rahi hai har character ki.
    }

    char firstNonRepeating='\0';    //null character se initialize karna best option hai, warna wase bi declare kar ke chor sakty thy, es se random value aa jati hai variable me.
    for(int i=0;i<str.length();i++)
    {
        unsigned char ch=str[i];
        if(freq[ch]==1)
        {
            firstNonRepeating=ch;
            break;
        }
    }

    if(firstNonRepeating!='\0')
    {
        cout<<"First Non-Repeating Character is: "<<firstNonRepeating<<endl;
    }
    else
    {
        cout<<"No Non-Repeating Character Found!"<<endl;
    }

    return 0;
}