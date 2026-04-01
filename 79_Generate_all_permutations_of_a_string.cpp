// 79. Generate all permutations of a string.

#include<iostream>
using namespace std;

// ye function string ke saare permutations generate karta hai
// str  → original string
// start → current index jahan se permutation start ho rahi hai
// end → string ka last index
void generatePermutations(string str,int start,int end)
{
    // base case:
    // jab start aur end equal ho jayein
    // matlab ek complete permutation ban chuki hai
    if(start==end)
    {
        cout<<str<<endl; // current permutation print karo
        return;          // wapas chalay jao
    }

    // loop start se end tak chalega
    // har character ko start position par laa kar check karenge
    for(int i=start;i<=end;i++)
    {
        // step 1:
        // str[start] aur str[i] ko swap karo
        // taake naya arrangement ban sake
        char temp=str[start];
        str[start]=str[i];
        str[i]=temp;

        // step 2:
        // ab next position ke liye recursion call
        // kyun ke current position fix ho chuki hai
        generatePermutations(str,start+1,end);

        // step 3 (backtracking):
        // recursion se wapas aane ke baad
        // string ko original state me lao
        // taake next permutation sahi bane
        temp=str[start];
        str[start]=str[i];
        str[i]=temp;
    }
}

int main()
{
    string str="ABC";

    cout<<"Permutations of "<<str<<":"<<endl;

    // function call jo permutations generate karega
    generatePermutations(str,0,str.length()-1);

    return 0;
}