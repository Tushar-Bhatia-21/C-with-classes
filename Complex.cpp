#include<iostream>

using namespace std;
class Complex
{
    public:
    float real;
    float img;

    Complex()
    {
        real=0;
        img=0;
    }

    Complex operator+(const Complex &obj1)
    {
        Complex temp;
        temp.img=img+obj1.img;
        temp.real=real+obj1.real;

        return temp;
    }

    Complex operator-(const Complex &obj1)
    {
        Complex temp;
        temp.img=img-obj1.img;
        temp.real=real-obj1.real;

        return temp;
    }

    void display()
    {
        cout<<"("<<real<<")"<<"+"<<"("<<img<<"i)"<<endl;
    }
};

int main()
{
    Complex a,b,c;
    cout << "Enter real and complex coefficient of the first complex number: " << endl;
  cin >> a.real;
  cin >> a.img;

  cout << "Enter real and complex coefficient of the second complex number: " << endl;
  cin >> b.real;
  cin >> b.img;

  cout << "Addition Result: ";
  c = a+b;
  c.display();

  cout << "Subtraction Result: ";
  c = a-b;
  c.display();

  return 0;
}