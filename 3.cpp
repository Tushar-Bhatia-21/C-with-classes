#include<iostream>
using namespace std;
float AREA(float);
float AREA(float,float);
float AREA(double);

float AREA(float x,float y)
{
    float length,breadth;
    cout<<"Enter the length and breadth\n";
    cin>>length>>breadth;
    float area=length*breadth;
    cout<<"The area of rectangle is:"<<area;
    return 0;
}
float AREA(double a)
{
    float radius;
    cout<<"Enter the radius:";
    cin>>radius;
    float area_of_circle=6.28*radius;
    cout<<"The area of circle is:"<<area_of_circle;
    return 0;
}
float AREA(float b)
{
    float base,height;
    cout<<"Enter the base\nEnter the height";
    cin>>base>>height;
    float area_of_triangle=0.5*height*base;
    cout<<"The area of triangle is:"<<area_of_triangle;
    return 0;
}
int main()
{
    float b;
    double a;
    float x,y;
    int t;
    cout<<"Press 1. for area of Circle\nPress 2. for area of Triangle\nPress 3. for area of rectangle\n:";
    cin>>t;
    switch(t)
    {
        case 1:
        {
          AREA(a);
          break;  
        }
        case 2:
        {
        AREA(b);
        break;
        }
        case 3:
        {  
            AREA(x,y);
            break;
        }
    default:
    {
        cout<<"Please choose from given options only";
    }
    }
}