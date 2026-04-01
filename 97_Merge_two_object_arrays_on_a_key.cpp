// 97. Merge two object arrays on a key.

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
    Person arr1[3]=
    {
        {1,"Ali"},
        {2,"Ahmed"},
        {3,"Usman"}
    };
    Person arr2[3]=
    {
        {4,"","Lahore"},
        {3,"","Karachi"},
        {1,"","Islamabad"}
    };
    int size=3;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr1[i].id==arr2[j].id)
            {
                cout<<arr1[i].id<<" "<<arr1[i].name<<" "<<arr2[j].city<<endl;
            }
        }
        
    }
    return 0;
}