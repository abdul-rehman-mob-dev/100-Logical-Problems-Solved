// 99. Flatten nested object.

#include<iostream>
using namespace std;
struct Address
{
    string city;
    string country;
};
struct Person
{
    string name;
    int age;
    Address address;    //declare nested object
};
struct Flatten  // flattened object
{
    string name;
    int age;
    string city;
    string country;
};

int main()
{
    Person p={"Ali",28,{"Okara","Pakistan"}};

    Flatten flat;
    {
        flat.name=p.name;
        flat.age=p.age;
        flat.city=p.address.city;
        flat.country=p.address.country;
    };
    
    cout<<flat.name<<" "<<flat.age<<" "<<flat.city<<" "<<flat.country;
    
    return 0;
}