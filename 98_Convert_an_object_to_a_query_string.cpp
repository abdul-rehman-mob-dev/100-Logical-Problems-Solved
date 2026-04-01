// 98. Convert an object to a query string.

#include<iostream>
#include<sstream>
using namespace std;
struct Person
{
    string name;
    int age;
    string city;
};
int main()
{
    Person arr[2]=
    {
        {"Ali",25,"Lahore"},
        {"Bilal",20,"Okara"}
    };
    int size=2;

    cout<<"Query String"<<endl;
    for(int i=0;i<size;i++)
    {
        // Convert to query string
        stringstream querystring;
        querystring<<"name="<<arr[i].name<<"&age="<<arr[i].age<<"&city="<<arr[i].city;
        cout<<querystring.str()<<endl;
    }

    return 0;
}