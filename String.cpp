#include<iostream>
#include<string>
using namespace std;


int main()
{
    string a="KING";
    string b="MARTIN ";
    string c="LUTHER ";

    string d=a+b+c;
    cout<<d;
    //Append
    a.append(b);
    cout<<"\n"<<a;
    a.append(c);
    cout<<"\n"<<a;

};