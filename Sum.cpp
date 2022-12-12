#include<iostream>
using namespace std;

class A
{
    public:
    int age;
    A()
    {
        age=0;
    }
    void AGE()
    {
    cout<<"\nEnter the age: ";
    cin>>age;
    }
    int sum()
    {
        return age;
    }
        
};

int main()
{   
    A a[3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        a[i].AGE();
    }
    int average;
    for(int i=0;i<3;i++)
    {
        cout<<"\n"<<sum;;
        sum+=a[i].sum();
        cout<<"\n"<<sum;;
    }
    average=sum/3;
    cout<<"Average is: "<<average;
    return 0;
}