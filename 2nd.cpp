#include<iostream>
using namespace std;
int count=0;
class Person
{
    public:
    char Name[64];
    int age;
    char address[64];
    float total_salary;
    void getdata();
    void display();
    
};
void Person::display()
{
     
        cout<<"\nName of the person: "<<Name;
        cout<<"\nTotal salary of the person: "<<total_salary;
        cout<<"\n";
}
inline int max_salary(Person p1,Person p2)
    {
        cout<<"The salary of first person is: "<<p1.total_salary;
        cout<<"\nThe salary of second person is: "<<p2.total_salary;
        if(p1.total_salary>p2.total_salary)
        {
            cout<<"\nThe salary of first person is greater than second\n";
            return p1.total_salary;
        }
        else
        {
            cout<<"\nthe salary of second person is greater than first\n";
            return p2.total_salary;
        }
    
    }
void Person::getdata()
{
    cout<<"\nThe person id is:"<<count<<endl;
    cout<<"\nEnter Name:";
    cin>>Name;
    cout<<"\nEnter age:";
    cin>>age;
    cout<<"\nEnter address:";
    cin>>address;
    cout<<"\nEnter total salary:";
    cin>>total_salary;
}
int main()
{
    Person p[10];
    int a,b;
    Person c;
    for(int i=0;i<10;i++)
    {
        p[i].getdata();
        count++;

    }
    cout<<"Enter the person id for first person:"<<endl;
    cin>>a;
    cout<<"Enter the person id for second person:"<<endl;
    cin>>b;
    max_salary(p[a],p[b]);
    int x;
    cout<<"Press 1 to print the salary slip of the person\nPress 2. For no action"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:
        {
            for(int i=0;i<2;i++)
            {
            p[i].display();
            count++;
            }
        break;
        }
        case 2:
        {
            exit(0);
        }   
    return 0;

}
}