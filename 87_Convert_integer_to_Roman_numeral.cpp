// 87. Convert integer to Roman numeral.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num=1994;
    string result="";
    
    // values array (largest to smallest)
    int values[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    
    // corresponding Roman symbols
    string symbols[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
    // har value ke liye check karo
    for(int i=0;i<13;i++)
    {
        while(num>=values[i])  // jab tak number bada ya equal hai
        {
            result=result+symbols[i];  // Roman symbol add karo
            num=num-values[i];  // number se subtract karo
        }
    }
    
    cout<<"Integer: 1994"<<endl;
    cout<<"Roman: "<<result<<endl;
    
    return 0;
}