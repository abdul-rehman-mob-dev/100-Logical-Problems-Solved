// 91. Group array of objects by a key.

#include<iostream>
using namespace std;

struct dataOfClass
{
    string name;
    int age;
    int marks;
    string department;
};

int main()
{
    int size;
    cout<<"How many Students in the class: ";
    cin>>size;

    int key[100];
    dataOfClass students[100];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the data for student "<<i+1<<endl;

        cout<<"ID of student: ";
        cin>>key[i];

        cout<<"Name of student: ";
        cin>>students[i].name;

        cout<<"Age of student: ";
        cin>>students[i].age;

        cout<<"Marks of student: ";
        cin>>students[i].marks;

        cout<<"Department of student: ";
        cin>>students[i].department;
    }

    for(int i=0;i<size;i++)
    {
        cout<<endl<<"ID: "<<key[i];

        cout<<endl<<"Name: "<<students[i].name;

        cout<<endl<<"Age: "<<students[i].age;

        cout<<endl<<"Marks: "<<students[i].marks;

        cout<<endl<<"Department: "<<students[i].department;
    }

    return 0;
}