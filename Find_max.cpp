#include<iostream>

using namespace std;

int Num(int a,int b)
{
    if(a>b)
    {
        
        return a;
        
    }
    else
    {
    
    return b;
    
    }
    
}

void Num(float d,int c)
{
    if(d>c)
    {
    
        cout<<d<<" is largest";
        
    }
    else
    {
    
        cout<<c<<" is largest";
        
    }
}

int main()
{
    int a,b,c;
    cout<<"\nEnter the first number: ";
    cin>>a;
    cout<<"\nEnter the second number: ";
    cin>>b;
    cout<<"\nEnter the third number: ";
    cin>>c;
    float temp;
    temp=Num(a,b);
    Num(temp,c);
}