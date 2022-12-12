#include<iostream>
using namespace std;

 double division( int a, int b)
    {
        if(b==0)
        {
            throw"Division by 0 is not possible!!";
        }
        else if(a==0&&b==0)
        {
            throw"Both a and b cannot be 0!";
        }
    return a/b;
}

int main()
{
    int a;
    int b;
    double z=0;
    cout<<"Enter the value of first number: ";
    cin>>a;
    cout<<"Enter the value of 2nd number: ";
    cin>>b;
    try{
        
        z=division(a,b);
        cout<<z<<endl;
        }
    catch(const char* msg)
    {
        cerr<<msg<<endl;
    }
return 0;
}