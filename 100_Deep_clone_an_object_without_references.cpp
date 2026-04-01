// 100. Deep clone an object without references.


// Deep Copy Concept
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
    Address address;  // nested object
};

int main()
{
    Person original = {"Ali",20,{"Lahore","Pakistan"}};
    
    // yahan hum deep clone karenge
    Person clone;
    clone.name=original.name;
    clone.age=original.age;
    clone.address.city=original.address.city;
    clone.address.country=original.address.country;
    
    // original
    cout<<"Original Object Values"<<endl<<original.name<<" "<<original.age<<" "<<original.address.city<<" "<<original.address.country<<endl<<endl;

    // copy
    cout<<"Deep Clone Object Values"<<endl<<clone.name<<" "<<clone.age<<" "<<clone.address.city<<" "<<clone.address.country;
    return 0;
}


// Shallow Copy Concept

/*
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
    Address* address;   // pointer (reference) , address hold
};

int main()
{
    Person original;
    original.name="Ali";
    original.age=20;
    original.address=new Address;
    original.address->city="Lahore";
    original.address->country="Pakistan";

    // shallow copy (with reference)
    Person clone=original;

    // original change
    original.address->city="Karachi";

    cout<<"Original: ";
    cout<<original.address->city<<endl;

    cout<<"Clone: ";
    cout<<clone.address->city<<endl;

    return 0;
}
*/