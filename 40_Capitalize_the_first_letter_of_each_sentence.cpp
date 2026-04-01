// 40. Capitalize the first letter of each sentence.

#include<iostream>
using namespace std;

int main()
{
    string str="hello world. i am learning c++! this is fun?";    // English me jab sentence khatam hota hai, to full stop (.) ke baad ek space deni chahiye — phir next sentence start hota hai.

    bool capitalize=true;

    for(int i=0;i<str.length();i++)
    {
        if(capitalize && str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32; // lowercase ko uppercase me convert
            capitalize=false;
        }

        if(str[i]=='.' || str[i]=='!' || str[i]=='?')   // agar current character '.', '!' ya '?' hai to iska matlab sentence khatam ho gaya ab next letter ko capitalize karne ke liye flag ko true kar do.
        {
            capitalize=true;
        }
    }
    cout<<str<<endl;

    return 0;
}
