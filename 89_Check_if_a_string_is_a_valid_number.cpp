// 89. Check if a string is a valid number.

#include<iostream>
using namespace std;

bool isValidNumber(string str)
{
    bool dotSeen=false;
    bool digSeen=false;

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch>='0' && ch<='9')
        {
            digSeen=true;
        }

        else if(ch=='.')
        {
            if(dotSeen)
            {
                return false;
            }
            dotSeen=true;
        }

        else if((ch=='+'||ch=='-') && i==0)
        {
            continue;
        }
        
        else
        {
            return false;
        }
    }
    return digSeen;
}
int main()
{
    string arr[]={"1234","-12.34","+12-34","12A","Abc"};

    for(int i=0;i<5;i++)
    {
        string str2=arr[i];
        if(isValidNumber(str2))
        {
            cout<<arr[i]<<" is a valid number."<<endl;
        }
        else
        {
            cout<<arr[i]<<" is not a valid number."<<endl;
        }
    }
    
    return 0;
}