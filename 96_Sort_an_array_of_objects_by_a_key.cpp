// 96. Sort an array of objects by a key.

#include<iostream>
using namespace std;
struct Person
{
    int id; // key=id
    string name;
    string city;
};
int main()
{
    Person arr[4]=
    {
        {4,"Ali","Lahore"},
        {2,"Ahmed","Karachi"},
        {1,"Usman","Lahore"},
        {3,"Bilal","Islamabad"}
    };
    int size=4;
    
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i].id > arr[j].id)
            {
                Person temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        cout<<arr[i].id<<" "<<arr[i].name<<" "<<arr[i].city<<endl;
    }

    return 0;
}