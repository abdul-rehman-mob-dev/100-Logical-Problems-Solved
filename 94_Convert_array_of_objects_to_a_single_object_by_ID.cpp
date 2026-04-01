// 94. Convert array of objects to a single object (by ID).

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
    Person arr[3]=
    {
        {1,"Ali"},
        {2,"Ahmed"},
        {3,"Usman"}
    };
    int size=3;

    map<int,Person> m;   // sirf yahan type change

    for(int i=0;i<size;i++)
    {
       m[arr[i].id]=arr[i];

        cout<<"id:"<<m[arr[i].id].id<<" , name:"<<m[arr[i].id].name<<endl;
    }

    return 0;
}