// 86. Convert Roman numeral to integer.

#include<iostream>
using namespace std;

// Roman character ko integer value return karo
int getValue(char ch)
{
    switch(ch)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int main()
{
    string roman="MCMXCIV";
    int result=0;
    int prevValue=0;
    
    for(int i=roman.length()-1;i>=0;i--)    // Loop right se left chal raha hai, asa Kyun kiya=> Roman numbers ka rule isi tarah easy hota hai.
    {
        int currentValue=getValue(roman[i]);
        
        if(currentValue<prevValue)  // agar chhota hai previous se
        {
            result=result-currentValue;  // subtract karo
        }
        else  // agar bada ya equal hai
        {
            result=result+currentValue;  // add karo
        }
        
        prevValue=currentValue;  // update previous value
    }
    
    cout<<"Roman: "<<roman<<endl;
    cout<<"Integer: "<<result<<endl;
    
    return 0;
}