// 17. Count prime numbers between 1 and 100.

#include<iostream>
using namespace std;
int main()
{
    int count=0;
    
    for(int n=2;n<=100;n++) //prime number 1 se nahi 2 se start hote hai, es liye n=2 kiya hai.
    {
        bool isPrime=true;
    
        for(int i=2;i<n;i++) //prime number 1 se nahi 2 se start hote hai, es liye i=2 kiya hai.
        {
        
            if(n%i==0)
            {
                isPrime=false;
                break;
            
            }
        
        }
        if(isPrime)
        {
            cout<<n<<" ";
            count++;    //yaha per count ho rahe hai prime numbers.
        }
    
    }

    cout <<endl<< "Total prime numbers between 1 and 100: " << count;
    return 0;
}