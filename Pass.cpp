#include<iostream>
using namespace std;

class Base_1
{
    public:
    Base_1(int a=0,int b=0)
    {
        cout<<" "<<a;
        cout<<"\n"<<b;      
    }
};

class Base_2
{
    public:
    Base_2(int a=0,int b=0)
    {
        cout<<" "<<a;
        cout<<"\n"<<b;      
    }
};

class Derived:public Base_1,public Base_2
{
    public:
void val()
{
    int c;
    int d;
    cout<<"Enter first value";
    cin>>c;
    
    cout<<"Enter the 2nd value";
    cin>>d;
    Base_1(c,d);
    Base_2(3,4);
}
};

int main()
{
    Derived d;
    d.val();
    return 0;
}