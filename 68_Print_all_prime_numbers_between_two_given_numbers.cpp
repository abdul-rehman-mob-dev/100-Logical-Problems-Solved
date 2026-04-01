// 68. Print all prime numbers between two given numbers.

#include<iostream>
using namespace std;
int main()
{
    int num1=0;  // range ka start
    int num2=50; // range ka end

    // num1 se num2 tak saare numbers ko check karna
    for(int i=num1;i<=num2;i++)
    {
        if(i<2)  // prime number hamesha 2 ya usse bada hota hai, 0 aur 1 skip kar do kiyu ke ye prime numbers nahi hote.
            continue;

        bool isPrime=true;  // pehle maan lo number prime hai

        // 2 se i tak check karo
        for(int j=2;j<i;j++)
        {
            if(i%j==0)  // agar divisible mila to prime nahi
            {
                isPrime=false;  // number prime nahi hai
                break;          // aage check karne ki zarurat nahi
            }
        }

        if(isPrime)  // agar number prime hai
        {
            cout<<i<<" ";  // prime number print karo
        }
    }

    return 0;       
}
