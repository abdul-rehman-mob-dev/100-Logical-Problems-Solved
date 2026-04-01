// 11. Reverse a number.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any Number: ";
    cin>>num;

    int rem;
    int rev=0;
    
    while(num>0)
    {
        rem=num%10; // en 3 lines ki bat niche ho rahi hai.
        rev=rem+(rev*10);
        num=num/10;
    }
    cout<<rev;
    return 0;
}

/* Ye lines kab use hoti hain?

1. number reverse karne ke liye

2. palindrome number check karne ke liye

3. number ke digits count / sum nikalne ke liye

4. har digit ko alag alag process karne ke liye */