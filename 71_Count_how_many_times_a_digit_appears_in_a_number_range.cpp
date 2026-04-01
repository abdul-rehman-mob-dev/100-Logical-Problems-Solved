// 71. Count how many times a digit appears in a number range.

#include<iostream>
using namespace std;
int main()
{
    int num1=1;
    int num2=25;
    int digit=2;   // jo digit count karna hai
    int count=0;

    // range ke har number ke liye loop
    for(int i=num1;i<=num2;i++)
    {
        int num=i;   // Is liye kiya hai taake i ki original value kharab na ho.

        // current number ke har digit ko check karne ke liye loop
        while(num>0)  // jab tak number ke andar digits hain, tab tak check karo(num>0).    
        {
            // last digit nikalne ke liye %10
            if(num%10==digit)
            {
                count++;   // agar digit match ho to count badhao
            }

            // last digit remove kar do
            num=num/10;
        }
    }

    // final count print
    cout<<"Digit "<<digit<<" appeared "<<count<<" times.";

    return 0;
}