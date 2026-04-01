// 74. Find sum of digits until a single digit is obtained.

#include<iostream>
using namespace std;

int main()
{
    int num=987;       // Input number (yahan manually 987 set kiya hai)
    int sum=0;       // Sum of digits
    int temp;        // Temporary variable for intermediate sum

    // Pehla loop: number ke digits ka sum nikalna
    while(num>0)
    {
        sum=sum+num%10;   // Last digit add karo sum me
        num=num/10;         // Last digit remove karo number se
    }

    // Dusra loop: agar sum abhi bhi double digit hai to phir se digits add karo
    while(sum>9)
    {
        temp=sum;      // Sum ko temp me store karo
        sum=0;         // Sum ko reset karo

        // Temp ke digits ka sum nikalna
        while(temp>0)
        {
            sum=sum+temp%10;   // Last digit add karo sum me
            temp=temp/10;         // Last digit remove karo temp se
        }
    }

    // Final single digit sum print karo
    cout<<"Sum: "<<sum;

    return 0;
}