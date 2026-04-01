// 22. Remove extra spaces from a sentence.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str="   I   love   my    country   Pakistan.     ";
    string clean="";
    bool spaceFound=false;

    for(int i=0;i<str.length();i++)
    {
        if (str[i]==' ')
        {
            if (!spaceFound && clean!="")
            {
                clean=clean+' ';
                spaceFound=true;
            }
        }
        else
        {
            clean=clean+str[i];
            spaceFound=false;
        }
    }

    // Remove trailing space if any

    string finalResult="";
    int lastIndex=clean.length()-1;

    while(lastIndex>=0 && clean[lastIndex]==' ')
    {
        lastIndex--;
    }

    for(int i=0;i<=lastIndex;i++)
    {
    
        finalResult=finalResult+clean[i];
    }

    cout <<"Cleaned sentence:"<<finalResult<<endl;

    return 0;
}