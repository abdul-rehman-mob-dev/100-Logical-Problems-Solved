// 03. Find the GCD and LCM of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b,temp,GCD,LCM;
    cout<<"Enter First Numbers: ";
    cin>>a;
    cout<<"Enter Second Numbers: ";
    cin>>b;

    int x=a; // original value 'a' variable ki copy kar li hai 'x' variable me kiyu ke jab ye loop ke ander aai gi 'a' variable ki value tu change ho jai gi. 
    int y=b; // original value 'b' variable ki copy kar li hai 'y' variable me kiyu ke jab ye loop ke ander aai gi 'b' variable ki value tu change ho jai gi. 

    // Using Euclid’s Algorithm to find GCD of two numbers.
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    GCD=a;
    cout<<"GCD: "<<GCD<<endl;
    
    // LCM ka formula
    LCM= (x * y) / GCD; //yaha 'x' or 'y' variables ki value wohi hai jo original 'a' or 'b' variables ki value thi.
    cout<<"LCM: "<<LCM;
    return 0;
}