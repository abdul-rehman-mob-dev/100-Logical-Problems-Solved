// 5. Print Fibonacci series up to n terms.

#include<iostream>
using namespace std;
int main()
{
    int num,first=0,second=1,next;
    cout<<"Enter any Number: ";
    cin>>num;
    cout<<"Fibonacci Series: ";
    for(int i=1;i<=num;i++)
    {
        cout << first << " ";     // pehle current term print karo
        next = first + second;    // next term calculate karo
        first = second;           // second ko first me shift karo
        second = next;
    }
    return 0;
}