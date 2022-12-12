#include<iostream>

using namespace std;

class Clock
{
    private:
    int hours;
    int minutes;
    
    public:

    Clock()
    {
        int hours=0;
        int minutes=0;
    }

    Clock(int h,int m)
    {
        hours=h;
        minutes=m;
    }

    void input()
    {
        cout<<"\nEnter the hours: ";
        cin>>hours;
        cout<<"\nEnter the minutes: ";
        cin>>minutes;
    }

    Clock operator+(const Clock &obj)
    {
        Clock temp;
        temp.minutes=minutes+obj.minutes;
        temp.hours=hours+obj.hours;
        return temp;
    }

    void display()
    {
        cout<<hours<<":"<<minutes;
    }

};

int main()
{
    Clock a,b,c;
    cout<<"Enter the data for first object";
    a.input();
    cout<<"\nEnter the data for second object";
    b.input();

    c=a+b;
    cout<<"Time is: "<<endl;
    c.display();
    
    return 0;
    
}