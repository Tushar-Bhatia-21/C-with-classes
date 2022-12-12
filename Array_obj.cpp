#include<iostream>

using namespace std;

class Employee
{
    char name[60];
        int age;
    public:
    void input()
    {
        cout<<"\nEnter the name: ";
        cin>>name;

        cout<<"\nEnter the age: ";
        cin>>age;
    }

    int count;
    void display()
    {
        
        cout<<"\nEmployee Name: "<<name;

        cout<<"\nEmployee age: "<<age;   
    }


};

int main()
{
    Employee e[10];
    int i;
    int size;
    cout<<"Enter the number of employees: ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEmployee id is: "<<i+1;
        e[i].input();
        e[i].display();
    }
return 0;
}