// 93. Remove duplicate objects based on a key.

#include<iostream>
#include<map>
using namespace std;

struct Person
{
    int id;
    string name;
};

int main()
{
    Person arr[5]=  // Array of objects banaya, Har element ek Person object hai 
    {
        {1,"Ali"},
        {2,"Ahmed"},
        {1,"Ali"},
        {3,"Usman"},
        {2,"Ahmed"}
    };
    int size=5;

    // Map banaya jo check karega ke id pehle aa chuki hai ya nahi
    // key = id
    // value = true/false
    map<int,bool> seen;

    for(int i=0;i<size;i++)
    {
        if(seen[arr[i].id]==false)
        {
            cout<<arr[i].id<<" "<<arr[i].name<<endl;
            seen[arr[i].id]=true;   //Is id ko seen mark kar do, Taake dobara aaye to skip ho jaye
        }
    }
    return 0;
}