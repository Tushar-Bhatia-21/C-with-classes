#include<iostream>
using namespace std;
class Shape
{
    public:
    double radius,length,width;
    void set(double r, double l, double w)
    {
        radius=r;length=l;width=w;
    }
    double perimeter_rectangle()
        {
            return 2*(length+width);
        }
    double perimeter_circle()
        {
            return 6.28*radius;
        }
    ~Shape()
        {
        cout<<"Destructor invoked";
        }
};
int main()
{
    Shape a;
    double r,l,w;
    cout<<"Enter radius\nEnter Length\nEnter width\n";
    cin>>r;
    cin>>l;
    cin>>w;
    a.set(r,l,w);
    cout<<"Perimeter of rectangle is:"<<a.perimeter_rectangle()<<endl;
    cout<<"Perimeter of circle is:"<<a.perimeter_circle()<<endl;
return 0;
}
