#include<iostream>
using namespace std;

class Distance
{
    int feets;
    int inches;
    public:

    void get()
    {
    cout<<"\nEnter distance in feets: ";
    cin>>feets;
    cout<<"\nEnter distance in inches: ";
    cin>>inches;
    }

    void operator+(Distance &d)
    {
    feets+d.feets;
    inches+d.inches;
    cout<<"\n\nDistance is "<<feets<<" "<<inches;
    }
    

    void operator<(Distance &d)

    {
        
    }
    void operator*=(Distance &d)
    {
        int a;
        cout<<"\nEnter the value to be multiplied: ";
        cin>>a;
        feets*=a;
        inches*=a;
        cout<<"\n\nThe multiplied distance is: "<<feets<<" "<<inches;
    }

    void put()
    {
    cout<<" "<<feets<<inches<<endl;
    }
};


int main()
{
Distance c1;
Distance c2;
c1.get();
c2.get();
cout<<"\n\tFirst distance :";
c1.put();
cout<<"\n\tSecond distance Rs:";
c2.put();
int x;
cout<<"Press 1. for addition\nPress 2. or Press 3. for comparision";
cin>>x;
switch(x)
{
    case 1:
    {
        c1+c2;
    }
    case 2:
    {
        

    }
    case 3:
    {
        
    }
    case 4:
    {
        c1*=c2;
    }
    default:
    {
        cout<<"Enter the correct choice";
    }
}
return 0;
}