#include<iostream>
using namespace std;

class add_subtract
{
    int a,b;
    public: 
    void input(float a,float b)
    {
        this->a=a+b;
        this->b=a-b;
    }

    void output()
    {
        cout<<"Sum is = "<<a<<"\nDifference is = "<<b;
    }
};

int main()
{
    add_subtract x;
    cout<<"Enter the value of a: ";
    float i;
    cin>>i;
    cout<<"Enter the value of b: ";
    float j;
    cin>>j;
    x.input(i,j);
    x.output();
    return 0;
}