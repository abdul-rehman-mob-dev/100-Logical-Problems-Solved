// 95. Filter objects with a specific property value.

#include<iostream>
using namespace std;
struct Person
{
    int id;
    string name;
    string city;
};
int main()
{
    Person arr[4]=
    {
        {1,"Ali","Lahore"},
        {2,"Ahmed","Karachi"},
        {3,"Usman","Lahore"},
        {4,"Bilal","Islamabad"}
    };
    int size=4;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i].city=="Lahore")
        {
            cout<<"id:"<<arr[i].id<<", name:"<<arr[i].name<<", city:"<<arr[i].city<<endl;
        }
    }

    return 0;
}