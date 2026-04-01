// 72. Print alternate characters from a string.

#include<iostream>
using namespace std;
int main()
{
    string str="Programming";
    for(int i=0;i<str.length();i++)
    {
        if(i%2==0)  //yaha par even numbers check ho rahe hai, kiyu ke hum string ke odd indexes ko choor kar even indexes ko print karna hai.
        {
            cout<<str[i]<<" ";
        }
    }
    return 0;
}