// 90. Implement basic calculator: supports + - * /.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two number: ";
    cin>>a>>b;
    char choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case '+':
        c=a+b;
        cout<<c;
        break;

        case '-':
        c=a-b;
        cout<<c;
        break;

        case '*':
        c=a*b;
        cout<<c;
        break;

        case '/':
        c=a/b;
        cout<<c;
        break;

        default:
        cout<<"Invalid Choice";
    }
    return 0;
}