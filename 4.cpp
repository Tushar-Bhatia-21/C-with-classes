//Write a function to swap two numbers using friend function
#include<iostream>
using namespace std;
class Swap
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter two numbers:\n ";
        cin>>a>>b;
        cout<<"Before swapping:\n";
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    friend void swap1(Swap s);
    void display()
    {
        cout<<"After swapping:\n";
        cout<<"a="<<b<<endl;
        cout<<"b="<<a<<endl;
    }
};
void swap1(Swap s)
{
    int temp;
    temp=s.a;
    s.a=s.b;
    s.b=temp;
    
}
int main()
{
    Swap s;
    s.getdata();
    swap1(s);
    s.display();
    return 0;
}
