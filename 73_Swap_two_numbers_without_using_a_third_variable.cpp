// 73. Swap two numbers without using a third variable.

#include<iostream>
using namespace std;
int main()
{
    int num1=25;
    int num2=7;

    num1=num1+num2;   // dono numbers ka sum num1 me store karo
    num2=num1-num2;   // asa karne se num2 me num1 aa gaya
    num1=num1-num2;   // asa karne se num1 me num2 aa gaya

    cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2;  // swapped numbers print karo
    return 0;
}